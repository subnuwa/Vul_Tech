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

long v__termpty_shutdown( short parameter_1);
void v_termpty_text_scroll_rev_test( long parameter_1,double parameter_2);
unsigned int v__handle_esc_dcs( int parameter_1,short parameter_2,long parameter_3);
long v__handle_op_a( int parameter_1,int parameter_2,float parameter_3);
float v__termpty_ext_handle( double parameter_1,float parameter_2,unsigned int parameter_3);
unsigned int v__handle_esc_terminology( double parameter_1,short parameter_2,char parameter_3);
void v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3);
float v__smart_calculate_226( short parameter_1);
unsigned int v__smart_size( double parameter_1,int parameter_2,int parameter_3,short parameter_4);
void v_colors_term_init( unsigned int parameter_1,double parameter_2,float parameter_3);
void v_termio_config_update( float parameter_1);
char v__font_size_set( float parameter_1,int parameter_2);
void v_termio_font_size_set( char parameter_1,int parameter_2);
double v__handle_xterm_50_command( char parameter_1,char parameter_2,int parameter_3);
void v__eina_unicode_to_hex( short parameter_1);
void v__xterm_parse_color( int parameter_1,unsigned int parameter_2,double parameter_3,float parameter_4,int parameter_5);
unsigned int v__xterm_arg_get();
long v__handle_esc_xterm( unsigned int parameter_1,char parameter_2,long parameter_3);
void v_termpty_cells_set_content( long parameter_1,int parameter_2,char parameter_3,int parameter_4);
void v__handle_esc_csi_decera( unsigned int parameter_1,double parameter_2);
void v_termpty_cells_att_fill_preserve_colors( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4);
short v__clean_up_rect_coordinates( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
unsigned int v__handle_esc_csi_decfra( char parameter_1,int parameter_2);
short v__handle_esc_csi_decslrm( float parameter_1,int parameter_2);
short v__handle_esc_csi_decstbm( short parameter_1,char parameter_2);
char v__handle_esc_csi_decscusr( long parameter_1,char parameter_2);
char v__handle_esc_csi_dsr( unsigned int parameter_1,char parameter_2);
double v__handle_esc_csi_truecolor_cmyk( double parameter_1,char parameter_2);
double v__handle_esc_csi_truecolor_cmy( char parameter_1,double parameter_2);
short v__approximate_truecolor_rgb( float parameter_1,int parameter_2,int parameter_3,int parameter_4);
double v__csi_truecolor_arg_get( int parameter_1);
unsigned int v__handle_esc_csi_truecolor_rgb( unsigned int parameter_1,short parameter_2);
char v__handle_esc_csi_color_set( long parameter_1,unsigned int parameter_2);
void v_termpty_cursor_copy( float parameter_1,short parameter_2);
double v__switch_to_alternative_screen( float parameter_1,int parameter_2);
unsigned int v__move_cursor_to_origin( float parameter_1);
long v__pty_size( unsigned int parameter_1);
double v__limit_coord( char parameter_1);
int v__check_screen_info( long parameter_1,double parameter_2);
int v__termpty_line_rewrap( unsigned int parameter_1,float parameter_2,int parameter_3,short parameter_4,float parameter_5);
void v__backlog_remove_latest_nolock( short parameter_1);
float v_termpty_save_extract( unsigned int parameter_1);
float v__termpty_line_is_empty( float parameter_1,float parameter_2);
void v_termpty_screen_swap( float parameter_1);
void v_termpty_resize( short parameter_1,int parameter_2,int parameter_3);
unsigned int v_termio_win_get( char parameter_1);
unsigned int v__handle_esc_csi_reset_mode( int parameter_1,char parameter_2,double parameter_3);
unsigned int v__handle_esc_csi_cursor_pos_set( float parameter_1,char parameter_2,unsigned int parameter_3);
void v_termpty_text_scroll_rev( long parameter_1,double parameter_2);
void v_termpty_clear_line( double parameter_1,float parameter_2,int parameter_3);
void v_termpty_clear_screen( short parameter_1,float parameter_2);
void v_termpty_cell_codepoint_att_fill( double parameter_1,double parameter_2,char parameter_3,int parameter_4,int parameter_5);
int v__termpty_charset_trans( double parameter_1,short parameter_2);
void v_termio_content_change( float parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_text_append( double parameter_1,double parameter_2,int parameter_3,int uni_para);
long v__csi_arg_get( char parameter_1);
void v__handle_esc_csi( float parameter_1,long parameter_2,int parameter_3);
float v__safechar( double parameter_1);
float v__handle_esc( short parameter_1,short parameter_2,unsigned int parameter_3);
void v_termpty_cell_fill( int parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4);
void v_termpty_cells_fill( double parameter_1,int parameter_2,char parameter_3,int parameter_4);
void v_termpty_cells_clear( unsigned int parameter_1,short parameter_2,int parameter_3);
float v__tooltip_del(int parameter_2);
unsigned int v__tooltip_content(unsigned int parameter_2,double parameter_3);
void v_MD5Final( double parameter_1,int parameter_2);
void v_MD5Transform( float parameter_1,short parameter_2);
void v_byteReverse( int parameter_1,double parameter_2);
void v_MD5Update( short parameter_1,unsigned int parameter_2,double parameter_3);
void v_MD5Init( int parameter_1);
void v_gravatar_tooltip( short parameter_1,double parameter_2,char parameter_3);
float v__cb_link_drag_done(long parameter_2);
short v__cb_link_drag_accept(double parameter_2,char parameter_3);
long v__cb_link_drag_move(double parameter_2,char parameter_3,float parameter_4,double parameter_5);
unsigned int v__cb_link_icon_new(int parameter_2,float parameter_3,double parameter_4);
long v__cb_link_move(float parameter_2,int parameter_3);
double v__cb_link_up_delay();
void v__cb_link_up(unsigned int parameter_2,long parameter_3);
void v_term_focus( float parameter_1);
float v__term_is_focused( float parameter_1);
void v_term_unfocus();
short v__cb_ctxp_del(unsigned int parameter_2,unsigned int parameter_3);
double v__cb_ctxp_dismissed(double parameter_2);
float v__cb_ctxp_link_copy(int parameter_2);
long v__screen_visual_bounds( short parameter_1);
short v__draw_cell( short parameter_1,float parameter_2,short parameter_3,float parameter_4);
unsigned int v__draw_line( int parameter_1,char parameter_2,char parameter_3,int parameter_4,char parameter_5);
short v_termpty_backlog_length( double parameter_1);
float v_termio_pty_get( float parameter_1);
char v_termio_textgrid_get( int parameter_1);
int v_miniview_colors_get( short parameter_1,double parameter_2);
short v__deferred_renderer();
unsigned int v__queue_render( char parameter_1);
void v_miniview_redraw( float parameter_1);
float v__block_obj_del( long parameter_1);
void v__termpty_is_dblwidth_slow_get( short parameter_1,int parameter_2);
short v__termpty_is_dblwidth_get( short parameter_1,int parameter_2);
char v_term_preedit_str_get( char parameter_1);
unsigned int v_media_get( unsigned int parameter_1);
long v__smart_media_clicked(long parameter_2);
short v_media_control_get();
float v__smart_media_stop(unsigned int parameter_2);
void v__smart_media_pause(int parameter_2);
char v__smart_media_play(int parameter_2);
long v__smart_media_del(long parameter_2,long parameter_3);
void v_media_visualize_set( float parameter_1,unsigned int parameter_2);
void v_media_mute_set( short parameter_1,unsigned int parameter_2);
void v_media_volume_set( double parameter_1,double parameter_2);
unsigned int v__cb_media_vol(long parameter_2,float parameter_3,long parameter_4);
long v__cb_media_pos(long parameter_2,short parameter_3,long parameter_4);
int v__cb_media_pos_drag_stop(float parameter_2,int parameter_3,int parameter_4);
char v__cb_media_pos_drag_start(int parameter_2,short parameter_3,float parameter_4);
void v_media_stop( int parameter_1);
void v__cb_media_stop(char parameter_2,short parameter_3,char parameter_4);
short v__cb_media_pause(int parameter_2,char parameter_3,int parameter_4);
void v_media_play_set( long parameter_1,char parameter_2);
int v__cb_media_play(long parameter_2,double parameter_3,float parameter_4);
void v_media_position_set( double parameter_1,double parameter_2);
short v__cb_mov_ref(char parameter_2);
long v__cb_mov_progress(float parameter_2);
double v__cb_mov_restart();
short v__cb_mov_decode_stop(double parameter_2);
void v__cb_mov_len_change(float parameter_2);
void v__cb_mov_frame_resize(unsigned int parameter_2);
void v__cb_mov_frame_decode(unsigned int parameter_2);
short v__type_mov_init( long parameter_1);
long v__cb_edje_preloaded(int parameter_2,double parameter_3,char parameter_4);
char v__type_edje_init( short parameter_1);
short v__type_scale_init( int parameter_1);
long v__cb_img_frame();
double v__type_img_anim_handle( int parameter_1);
float v__cb_img_preloaded(float parameter_2,char parameter_3);
int v__type_img_init( float parameter_1);
double v__url_compl_cb(int parameter_2);
short v__url_prog_cb(int parameter_2);
double v__type_thumb_calc( int parameter_1,long parameter_2,int parameter_3,float parameter_4,int parameter_5);
unsigned int v__type_mov_calc( char parameter_1,long parameter_2,int parameter_3,float parameter_4,int parameter_5);
char v__type_edje_calc( float parameter_1,float parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5);
char v__type_img_calc( long parameter_1,unsigned int parameter_2,float parameter_3,float parameter_4,int parameter_5);
double v__cb_scale_preloaded(int parameter_2,int parameter_3);
short v__type_scale_calc( double parameter_1,long parameter_2,int parameter_3,char parameter_4,long parameter_5,int uni_para);
int v__unsmooth_timeout(int uni_para);
int v__smooth_handler( long parameter_1,int uni_para);
float v__smart_calculate( char parameter_1,int uni_para);
char v__smart_move( int parameter_1,int parameter_2,long parameter_3);
void v__smart_resize( float parameter_1,long parameter_2,float parameter_3);
double v__smart_del( char parameter_1);
char v__smart_add( float parameter_1);
unsigned int v__smart_init(int uni_para);
double v_media_add( int parameter_1,short parameter_2,float parameter_3,int parameter_4,int parameter_5,int uni_para);
short v__block_media_activate( double parameter_1,char parameter_2,int uni_para);
short v__block_edje_message_cb(int parameter_2,double parameter_3,int parameter_4);
void v_termpty_write( char parameter_1,unsigned int parameter_2,int parameter_3);
void v__block_edje_signal_cb(long parameter_2,double parameter_3,int parameter_4);
void v_termpty_block_chid_update( unsigned int parameter_1,double parameter_2);
float v__block_edje_cmds( long parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4);
double v_homedir_get( char parameter_1,unsigned int parameter_2);
long v__block_edje_activate( char parameter_1,char parameter_2);
unsigned int v__block_activate( double parameter_1,int parameter_2,int uni_para);
unsigned int v_termpty_block_get( short parameter_1,int parameter_2);
int v_termpty_block_id_get( int parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( char parameter_1,int parameter_2);
short v__smart_apply( short parameter_1,int uni_para);
float v__smart_cb_change(int uni_para);
unsigned int v__smart_update_queue( float parameter_1,char parameter_2,int uni_para);
void v__lost_selection_reset_job();
int v__lost_selection(long parameter_2,int uni_para);
unsigned int v__take_selection_text( short parameter_1,long parameter_2,unsigned int parameter_3,int uni_para);
void v__cb_ctxp_link_content_copy(char parameter_2,int uni_para);
void v_ty_sb_free();
char v_ty_sb_steal_buf( float parameter_1);
int v_codepoint_to_utf8( float parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( float parameter_1);
int v_ty_sb_add( long parameter_1,float parameter_2,unsigned int parameter_3);
double v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,float parameter_3);
float v_termpty_cellrow_get( char parameter_1,int parameter_2,float parameter_3);
void v_termio_selection_get( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6,int parameter_7);
long v__cb_ctxp_link_open(char parameter_2);
long v__should_inline();
unsigned int v_link_is_email( float parameter_1);
short v_link_is_protocol( long parameter_1);
double v_link_is_url( char parameter_1);
double v__activate_link( short parameter_1,int parameter_2);
void v__cb_ctxp_link_preview(char parameter_2);
float v__is_fmt( char parameter_1,double parameter_2);
double v_media_src_type_get( short parameter_1);
double v__mouse_in_selection( short parameter_1,int parameter_2,int parameter_3);
float v__smart_xy_to_cursor( unsigned int parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5);
unsigned int v__cb_link_down(long parameter_2,float parameter_3,int uni_para);
void v_main_term_popup_exists( int parameter_1);
short v__update_link( char parameter_1,char parameter_2,char parameter_3,double parameter_4,int uni_para);
unsigned int v__remove_links( unsigned int parameter_1,float parameter_2,int uni_para);
double v__sel_set( float parameter_1,short parameter_2);
int v_termio_scroll_get( short parameter_1);
void v_miniview_position_offset( double parameter_1,int parameter_2,long parameter_3);
unsigned int v_term_miniview_get();
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
long v_termpty_save_new( unsigned int parameter_1,int parameter_2);
double v_termpty_save_expand( long parameter_1,int parameter_2,float parameter_3);
double v__termpty_cell_is_empty();
double v_termpty_line_length( double parameter_1,short parameter_2);
long v_verify_beacon( long parameter_1,int parameter_2);
void v_termpty_text_save_top( double parameter_1,unsigned int parameter_2,double parameter_3);
void v_termpty_text_scroll( int parameter_1,unsigned int parameter_2,int uni_para);
void v_termpty_text_scroll_test( float parameter_1,int parameter_2,int uni_para);
float v__cursor_to_start_of_line( unsigned int parameter_1);
char v__tab_forward( double parameter_1,int parameter_2);
int v__handle_cursor_control( int parameter_1,short parameter_2);
int v_termpty_handle_seq( long parameter_1,int parameter_2,double parameter_3,int uni_para);
void v_termpty_handle_buf( long parameter_1,int parameter_2,int parameter_3,int uni_para);
void v_theme_reload( double parameter_1);
char v_theme_reload_cb(int parameter_2,long parameter_3,char parameter_4);
void v_theme_auto_reload_enable( float parameter_1);
long v__cursor_shape_to_group_name( char parameter_1);
unsigned int v_config_theme_path_default_get( double parameter_1);
short v_theme_path_get();
double v_config_theme_path_get( unsigned int parameter_1);
char v_theme_apply( float parameter_1,double parameter_2,unsigned int parameter_3);
void v_termio_set_cursor_shape( unsigned int parameter_1,char parameter_2);
void v_termpty_clear_tabs_on_screen( char parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( float parameter_1,short parameter_2);
void v__ts_free();
void v_termpty_save_free( double parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( long parameter_1);
void v_termpty_reset_att( short parameter_1);
unsigned int v_termio_config_get( long parameter_1);
void v_termpty_reset_state( unsigned int parameter_1);
void v_termpty_resize_tabs( short parameter_1,int parameter_2,int parameter_3);
void v__termpty_init();
double v__add_default_keys( short parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,short parameter_3,long parameter_4,short parameter_5,long parameter_6);
int v_config_new();
long v__termpty_shutdown( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_2;
	return long_1;
}
void v_termpty_text_scroll_rev_test( long parameter_1,double parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_termpty_text_scroll_rev(long_1,double_1);

	int_2 = int_1 + int_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "p-") > 0)
	{
		long long_2 = 1;
		long long_3 = 1;
		int int_3 = 1;
		double_1 = double_1 * double_1;
		long_3 = long_2 + long_1;
		int_3 = int_1 * int_2;
	}
}
unsigned int v__handle_esc_dcs( int parameter_1,short parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_4 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					long long_1 = 1;
					float_1 = v__safechar(double_1);

					long_1 = long_1 * long_1;
				}
				if(1)
				{
					int_2 = int_1 * int_1;
				}
			}
		}
		if(1)
		{
			v_termpty_write(char_1,unsigned_int_1,int_3);

			int_3 = int_1 * int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
		if(1)
		{
		}
		if(1)
		{
			int int_5 = 1;
			int_4 = int_5;
		}
		if(1)
		{
			int int_6 = 1;
			int_6 = int_4 * int_6;
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_1 * double_1;
		}
	}
	return unsigned_int_1;
}
long v__handle_op_a( int parameter_1,int parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	char_1 = char_1 + char_2;
	short_3 = short_1 * short_2;
	return long_1;
}
float v__termpty_ext_handle( double parameter_1,float parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	return float_1;
	long_1 = v__handle_op_a(int_1,int_1,float_2);

}
unsigned int v__handle_esc_terminology( double parameter_1,short parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = v_termio_config_get(long_1);

	char_2 = char_1 * char_1;
	return unsigned_int_1;
	float_1 = v__termpty_ext_handle(double_1,float_2,unsigned_int_1);

}
void v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	int_1 = int_3 * int_3;
	if(1)
	{
	}
	short_1 = short_1 + short_2;
	double_1 = double_2;
	char_1 = char_2 + char_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	int_6 = int_4 * int_5;
	short_3 = short_3 * short_4;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
}
float v__smart_calculate_226( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = char_2;
	short_1 = short_2;
	float_2 = float_1 * float_1;
	float_2 = float_1 * float_2;
	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	double_2 = double_4 + double_5;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	return float_2;
}
unsigned int v__smart_size( double parameter_1,int parameter_2,int parameter_3,short parameter_4)
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
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double_1 = double_1 * double_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		double_1 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	short_2 = short_1 * short_1;
	short_3 = v__smart_apply(short_3,-1 );

	char_2 = char_1 + char_2;
	char_1 = char_2 + char_1;
	char_5 = char_3 + char_4;
	double_2 = v__sel_set(float_1,short_1);

	double_3 = double_2 + double_2;
	double_3 = double_4 + double_4;
	if(1)
	{
		double_4 = double_3 + double_2;
	}
	float_2 = float_2;
	int_3 = int_2 * int_2;
	float_2 = float_2 * float_3;
	v_termpty_resize(short_1,int_3,int_2);

	float_3 = v__smart_calculate_226(short_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_3 * int_4;
	short_3 = short_1 * short_3;
	return unsigned_int_2;
}
void v_colors_term_init( unsigned int parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	long long_5 = 1;
	double_1 = double_1 * double_2;
	char_3 = char_1 + char_2;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		int_1 = int_2;
		if(1)
		{
			char char_4 = 1;
			double double_3 = 1;
			char_3 = char_1 * char_4;
			double_3 = double_2 * double_3;
			short_2 = short_1 * short_2;
			int_1 = int_1 + int_3;
		}
		if(1)
		{
			long_2 = long_1 * long_1;
			if(1)
			{
				int int_4 = 1;
				int_2 = int_1 * int_3;
				int_4 = int_3 + int_1;
				short_3 = short_1 * short_2;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
				long_3 = long_3 * long_1;
			}
		}
		long_3 = long_1 * long_4;
		short_1 = short_1 + short_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short short_4 = 1;
			short_4 = short_3 * short_3;
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			int_2 = int_5 * int_3;
			if(1)
			{
				long_5 = long_3 * long_4;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			float float_3 = 1;
			int int_6 = 1;
			int int_7 = 1;
			float_1 = float_2 * float_3;
			int_1 = int_5 * int_1;
			long_2 = long_2 + long_5;
			long_5 = long_3 + long_4;
			int_3 = int_6 * int_7;
		}
		unsigned_int_6 = unsigned_int_3;
	}
}
void v_termio_config_update( float parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_1;
	long_3 = long_1 * long_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, " ") > 0)
	{
		int_2 = int_2 + int_1;
	}
	float_1 = float_1 * float_1;
	if(1)
	{
		v_colors_term_init(unsigned_int_1,double_1,float_1);

		double_3 = double_1 * double_2;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	double_2 = double_3 + double_1;
	unsigned_int_3 = v__smart_size(double_4,int_2,int_1,short_1);

	double_1 = double_3 + double_3;
	int_1 = int_3;
	long_2 = long_2 * long_3;
	double_1 = double_1 + double_4;
	short_2 = short_1 + short_2;
	int_2 = int_3;
	int_3 = int_2 + int_3;
	int_1 = int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		double_4 = double_1;
	}
	double_3 = double_4;
	double_2 = double_1 + double_1;
	v_termio_set_cursor_shape(unsigned_int_2,char_1);

	char_1 = char_1 + char_1;
	double_3 = double_1 + double_3;
	v_termpty_backlog_size_set(float_1,short_3);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
}
char v__font_size_set( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char_1 = char_1;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_1;
	double_3 = double_2 * double_2;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 * double_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_4 = 1;
		long_2 = long_1 + long_2;
		int_3 = int_2 * int_2;
		v_termio_config_update(float_1);

		long_3 = long_2 * long_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		long_4 = long_1;
		long_3 = long_1 * long_1;
	}
	return char_1;
}
void v_termio_font_size_set( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_1 = v__font_size_set(float_1,int_1);

	double_3 = double_1 + double_2;
}
double v__handle_xterm_50_command( char parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long_3 = long_1 * long_2;
	return double_1;
	v_termio_font_size_set(char_1,int_1);

}
void v__eina_unicode_to_hex( short parameter_1)
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
void v__xterm_parse_color( int parameter_1,unsigned int parameter_2,double parameter_3,float parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_5 = 1;
	short short_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		char char_4 = 1;
		int int_1 = 1;
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		if(1)
		{
			long long_2 = 1;
			long_1 = long_1 + long_2;
		}
		float_1 = float_2;
		char_4 = char_1;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 + int_2;
		}
		double_1 = double_2;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
		}
		float_1 = float_2;
		float_3 = float_1 * float_2;
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if( strcmp( controller_6, "4{") > 0)
		{
			unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
		}
		unsigned_int_7 = unsigned_int_5;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
		if(1)
		{
			double_4 = double_1 * double_3;
		}
		int_4 = int_1 * int_1;
		long_4 = long_3 + long_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_7 + unsigned_int_8;
		}
		double_5 = double_3;
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_9 = 1;
		unsigned int unsigned_int_10 = 1;
		v__eina_unicode_to_hex(short_1);

		unsigned_int_5 = unsigned_int_8 + unsigned_int_1;
		if(1)
		{
			float_4 = float_1 * float_2;
		}
		int_6 = int_5 * int_6;
		float_5 = float_4 * float_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_7 * unsigned_int_1;
		}
		double_1 = double_5 * double_3;
		unsigned_int_10 = unsigned_int_4 + unsigned_int_9;
		if(1)
		{
			long long_5 = 1;
			long_1 = long_5 + long_4;
		}
		unsigned_int_6 = unsigned_int_10 * unsigned_int_7;
	}
	if(1)
	{
		int_4 = int_6 * int_5;
	}
	double_3 = double_3 * double_4;
}
unsigned int v__xterm_arg_get()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	int_1 = int_1 * int_2;
	int_3 = int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3;
	float_1 = float_1 * float_2;
	long_1 = long_1 * long_1;
	long_2 = long_3;
	long_2 = long_2 + long_4;
	double_3 = double_1 + double_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	float_5 = float_3 + float_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	int_3 = int_2 + int_1;
	double_3 = double_1 * double_1;
	float_5 = float_1 * float_2;
	double_1 = double_5 * double_5;
	char_2 = char_1 * char_1;
	char_3 = char_1 * char_1;
	double_4 = double_5 + double_4;
	return unsigned_int_4;
}
long v__handle_esc_xterm( unsigned int parameter_1,char parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	long long_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_9 = 1;
	long_2 = long_1 + long_1;
	long_3 = long_2 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	float_1 = float_1 + float_1;
	v__xterm_parse_color(int_1,unsigned_int_2,double_3,float_2,int_2);

	double_4 = double_3;
	if(1)
	{
		double_5 = v__handle_xterm_50_command(char_1,char_1,int_3);

		short_1 = short_1 * short_1;
	}
	int_2 = int_1 * int_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_4 = short_2 * short_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	double_3 = double_6 * double_5;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_3 + double_7;
	unsigned_int_4 = v__xterm_arg_get();

	double_5 = double_3 * double_5;
	v_termpty_write(char_1,unsigned_int_1,int_1);

	int_1 = int_2 + int_1;
	int_2 = int_1 * int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		double double_8 = 1;
		char_1 = v_termio_textgrid_get(int_5);

		v__handle_xterm_777_command(char_2,char_1,int_2);

		float_1 = float_1 + float_2;
		double_8 = double_6;
		double_8 = double_3 * double_5;
	}
	if(1)
	{
		long_4 = long_4 + long_3;
	}
	if(1)
	{
		double_3 = double_5 * double_4;
	}
	char_3 = char_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		float float_3 = 1;
		float_1 = float_1 * float_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		char_1 = char_2;
		short_3 = short_1;
	}
	if(1)
	{
		double_6 = double_2 + double_3;
	}
	if(1)
	{
		unsigned_int_2 = v_termio_config_get(long_2);

		double_6 = double_3 * double_1;
	}
	double_9 = double_1 * double_6;
	short_4 = short_2 * short_4;
	return long_4;
}
void v_termpty_cells_set_content( long parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		char_2 = char_1 + char_1;
	}
}
void v__handle_esc_csi_decera( unsigned int parameter_1,double parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	long_1 = v__csi_arg_get(char_1);

	float_1 = float_2;
	float_3 = float_1 * float_3;
	double_1 = double_1 + double_1;
	short_1 = v__clean_up_rect_coordinates(short_2,int_1,int_1,int_1,int_2);

	float_3 = float_3;
	double_2 = double_2;
	short_3 = short_1 + short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") < 0)
	{
	}
	char_3 = char_2 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_3 = int_3 * int_2;
		v_termpty_cells_set_content(long_1,int_1,char_4,int_4);

		long_1 = long_1 + long_1;
	}
}
void v_termpty_cells_att_fill_preserve_colors( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_2;
	long_1 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long_3 = long_1;
		int_1 = int_1 + int_1;
		int_1 = int_2 * int_3;
		if(1)
		{
			int int_4 = 1;
			short short_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int_4 = int_2 + int_1;
			short_1 = short_1;
			char_1 = char_1 * char_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			char_1 = char_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
	}
}
short v__clean_up_rect_coordinates( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char_2 = char_1 * char_1;
	double_1 = double_2;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1;
	double_2 = double_3 * double_1;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	int_3 = int_2 + int_1;
	int_2 = int_1;
	if(1)
	{
		short short_2 = 1;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		float_2 = float_2;
	}
	if(1)
	{
		double_5 = double_4 + double_4;
		if(1)
		{
			double_5 = double_4 + double_5;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		double_6 = double_5 + double_5;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_1 + int_4;
		if(1)
		{
			short_3 = short_1 * short_1;
		}
	}
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		short short_4 = 1;
		short_3 = short_1 * short_4;
	}
	if(1)
	{
	}
	int_5 = int_2;
	float_3 = float_2 * float_1;
	char_3 = char_3;
	double_4 = double_6 + double_2;
	return short_3;
}
unsigned int v__handle_esc_csi_decfra( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = v__csi_arg_get(char_1);

	long_1 = long_2;
	int_2 = int_1 * int_1;
	int_1 = int_1 + int_3;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_2;
	double_4 = double_3 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = v__clean_up_rect_coordinates(short_1,int_4,int_4,int_2,int_2);

	int_3 = int_2 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		v_termpty_cells_att_fill_preserve_colors(unsigned_int_1,unsigned_int_2,double_2,int_4);

		int_1 = int_3 * int_4;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	return unsigned_int_3;
}
short v__handle_esc_csi_decslrm( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 * char_2;
	if(1)
	{
		char_3 = char_2 * char_2;
	}
	int_2 = int_1 + int_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "?") > 0)
	{
		long_1 = long_1;
	}
	if(1)
	{
		char_1 = char_3 + char_1;
	}
	if(1)
	{
		float float_2 = 1;
		unsigned_int_3 = v__move_cursor_to_origin(float_1);

		float_1 = float_2 * float_1;
	}
	int_2 = int_1 * int_2;
	long_1 = v__csi_arg_get(char_3);

	int_2 = int_2 + int_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_5;
	double_2 = double_1;
	return short_1;
}
short v__handle_esc_csi_decstbm( short parameter_1,char parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = v__csi_arg_get(char_1);

	char_3 = char_1 * char_2;
	unsigned_int_1 = v__move_cursor_to_origin(float_1);

	char_4 = char_1;
	float_4 = float_2 * float_3;
	int_1 = int_1 * int_1;
	short_2 = short_1 + short_2;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	double_1 = double_3 * double_2;
	float_3 = float_2 + float_3;
	float_1 = float_3;
	int_2 = int_1 * int_1;
	int_2 = int_3;
	return short_1;
}
char v__handle_esc_csi_decscusr( long parameter_1,char parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1 + char_1;
	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_2;
	short_1 = short_1 + short_1;
	v_termio_set_cursor_shape(unsigned_int_3,char_1);

	int_2 = int_2 + int_2;
	int_1 = int_2 + int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_3 * double_2;
	double_5 = double_4 * double_5;
	short_2 = short_3;
	long_1 = v__csi_arg_get(char_1);

	long_3 = long_2 * long_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	int_4 = int_1 + int_3;
	return char_2;
}
char v__handle_esc_csi_dsr( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		short short_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		short_2 = short_1 * short_2;
		long_1 = v__csi_arg_get(char_1);

		long_2 = long_2 * long_2;
		double_3 = double_1 * double_2;
		v_termpty_write(char_2,unsigned_int_3,int_1);

		long_2 = long_3 * long_1;
		short_2 = short_2 * short_3;
		float_1 = float_1 + float_2;
		double_4 = double_2 + double_3;
	}
	if(1)
	{
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_4 = 1;
		long long_5 = 1;
		double_5 = double_1 * double_3;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
		long_2 = long_4;
		long_2 = long_5;
		double_1 = double_3 * double_5;
	}
	return char_1;
}
double v__handle_esc_csi_truecolor_cmyk( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short_2 = short_1 + short_1;
	double_1 = v__csi_truecolor_arg_get(int_1);

	double_3 = double_2 * double_1;
	short_3 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_3 + double_2;
	if(1)
	{
	}
	double_1 = double_3;
	char_2 = char_1 * char_1;
	short_3 = v__approximate_truecolor_rgb(float_1,int_2,int_1,int_3);

	float_2 = float_2 + float_1;
	int_1 = int_4;
	long_2 = long_1 + long_2;
	long_1 = long_1 + long_2;
	return double_4;
}
double v__handle_esc_csi_truecolor_cmy( char parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long_2 = long_1 * long_2;
	long_1 = long_2;
	double_1 = double_1 * double_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	double_1 = double_2 + double_2;
	short_1 = v__approximate_truecolor_rgb(float_1,int_1,int_2,int_2);

	double_4 = double_3 + double_4;
	int_4 = int_1 * int_3;
	return double_4;
	double_3 = v__csi_truecolor_arg_get(int_5);

}
short v__approximate_truecolor_rgb( float parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char_1 = v_termio_textgrid_get(int_1);

			unsigned_int_1 = unsigned_int_3;
		}
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_2 * int_3;
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
			}
		}
	}
	return short_2;
}
double v__csi_truecolor_arg_get( int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
unsigned int v__handle_esc_csi_truecolor_rgb( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int_2 = int_1 * int_1;
	double_1 = v__csi_truecolor_arg_get(int_1);

	long_3 = long_1 + long_2;
	short_3 = short_1 + short_2;
	long_2 = long_3 * long_1;
	int_3 = int_1 + int_3;
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		float_2 = float_2 + float_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "x") > 0)
	{
	}
	return unsigned_int_2;
	short_1 = v__approximate_truecolor_rgb(float_3,int_1,int_1,int_3);

}
char v__handle_esc_csi_color_set( long parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	long_1 = v__csi_arg_get(char_1);

	int_2 = int_1 + int_2;
	v_termpty_reset_att(short_1);

	double_1 = v__handle_esc_csi_truecolor_cmyk(double_1,char_1);

	int_1 = int_3;
	return char_2;
	unsigned_int_1 = v__handle_esc_csi_truecolor_rgb(unsigned_int_1,short_1);

	double_1 = v__handle_esc_csi_truecolor_cmy(char_3,double_1);

}
void v_termpty_cursor_copy( float parameter_1,short parameter_2)
{
	float float_2 = 1;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		double_1 = double_1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_2 = int_1 + int_1;
		long_3 = long_1 + long_2;
		float_2 = float_3 * float_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
double v__switch_to_alternative_screen( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	return double_1;
	v_termpty_screen_swap(float_1);

}
unsigned int v__move_cursor_to_origin( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "t") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char_1 = char_1 * char_2;
		int_1 = int_1;
		short_3 = short_1 + short_2;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
		short_2 = short_3 + short_1;
	}
	return unsigned_int_1;
}
long v__pty_size( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	float_1 = float_2;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	double_1 = double_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
	return long_3;
}
double v__limit_coord( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_2 = int_1 * int_1;
	int_4 = int_1 * int_3;
	long_1 = long_1 * long_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_2;
	double_1 = double_4;
	int_3 = int_2 * int_4;
	return double_5;
}
int v__check_screen_info( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		float float_3 = 1;
		char char_2 = 1;
		short_1 = short_1 + short_2;
		v_termpty_text_save_top(double_1,unsigned_int_1,double_2);

		float_1 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		v_termpty_cells_clear(unsigned_int_3,short_3,int_1);

		char_1 = char_1 * char_1;
		float_3 = float_2 * float_1;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1 * int_2;
		}
		char_2 = char_2 * char_1;
	}
	return int_2;
}
int v__termpty_line_rewrap( unsigned int parameter_1,float parameter_2,int parameter_3,short parameter_4,float parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = v__check_screen_info(long_1,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_2;
}
void v__backlog_remove_latest_nolock( short parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	char_1 = char_1;
	if(1)
	{
		float float_1 = 1;
		long_1 = v_verify_beacon(long_2,int_1);

		float_1 = float_1 * float_2;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		v_termpty_save_free(double_2);

		int_3 = int_1 * int_2;
	}
	float_4 = float_2 + float_3;
	double_4 = double_3 + double_2;
	long_3 = long_1 + long_1;
	double_1 = double_5 * double_5;
}
float v_termpty_save_extract( unsigned int parameter_1)
{
	float float_4 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int_1 = int_1;
			float_2 = float_1 + float_1;
			float_1 = float_1;
			short_2 = short_1 * short_2;
			int_1 = int_2 * int_3;
			if(1)
			{
			}
			double_3 = double_1 * double_2;
			float_2 = float_2 + float_3;
			unsigned_int_1 = unsigned_int_2;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			}
		}
	}
	return float_4;
}
float v__termpty_line_is_empty( float parameter_1,float parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short_1 = short_2;
		if(1)
		{
		}
	}
	return float_1;
	double_1 = v__termpty_cell_is_empty();

}
void v_termpty_screen_swap( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_1;
	int_1 = int_2 + int_3;
	short_1 = short_1 * short_2;
	float_1 = float_1 * float_1;
	char_2 = char_1 * char_1;
	long_2 = long_1 + long_1;
	short_2 = short_1 * short_1;
	double_1 = double_1 * double_2;
	char_1 = char_3 + char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "X") < 0)
	{
		long long_3 = 1;
		long_3 = long_3 + long_2;
	}
}
void v_termpty_resize( short parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_2 = 1;
	double double_8 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	int int_8 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_6 = 1;
	double double_9 = 1;
	char char_5 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_4 = 1;
	int_3 = int_1 * int_2;
	char_1 = char_2;
	double_1 = double_1 * double_2;
	double_2 = v__limit_coord(char_1);

	int_2 = int_3 + int_3;
	if(1)
	{
	}
	float_1 = v_termpty_save_extract(unsigned_int_1);

	long_1 = long_1 * long_2;
	if(1)
	{
		long_2 = v_verify_beacon(long_3,int_1);

		double_1 = double_3 * double_4;
		long_3 = long_1 + long_1;
	}
	int_3 = int_4;
	if(1)
	{
		v_termpty_backlog_unlock();

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	double_1 = double_1 * double_4;
	double_5 = double_1 * double_1;
	if(1)
	{
		double_5 = double_3 + double_5;
	}
	double_2 = double_1 + double_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_6 = double_6 * double_7;
	float_2 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_6 = double_8 + double_5;
		if(1)
		{
			short_1 = short_1 * short_1;
			char_1 = char_2 + char_1;
		}
	}
	double_2 = double_4 + double_1;
	if(1)
	{
		double_4 = double_2 + double_4;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		int int_5 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_4 = v_termpty_line_length(double_8,short_1);

		int_3 = int_2 + int_5;
		v_termpty_resize_tabs(short_1,int_2,int_3);

		short_1 = short_1;
		if(1)
		{
			int int_6 = 1;
			int int_7 = 1;
			int int_9 = 1;
			int_6 = int_2 * int_4;
			long_4 = long_1 * long_2;
			char_3 = char_1 * char_3;
			long_2 = long_4;
			if(1)
			{
				int_2 = int_3 * int_1;
			}
			double_4 = double_5 + double_8;
			v__backlog_remove_latest_nolock(short_1);

			long_1 = v__pty_size(unsigned_int_1);

			double_4 = double_8 + double_4;
			int_7 = int_6 * int_2;
			int_5 = int_4 * int_8;
			int_1 = int_9 * int_5;
			double_1 = double_7 + double_2;
			short_3 = short_2 * short_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_3 = 1;
		short_3 = short_2;
		long_5 = long_2 + long_4;
		unsigned_int_3 = unsigned_int_2;
		float_4 = float_1 + float_3;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	unsigned_int_4 = unsigned_int_6;
	char_2 = char_4 + char_1;
	int_8 = v__termpty_line_rewrap(unsigned_int_2,float_4,int_1,short_2,float_4);

	unsigned_int_6 = unsigned_int_7 + unsigned_int_1;
	long_5 = long_2 + long_6;
	double_9 = double_9;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_7 = double_5 * double_5;
	}
	char_5 = char_5 * char_3;
	double_2 = double_1 * double_10;
	int_3 = int_3 * int_4;
	float_1 = v__termpty_line_is_empty(float_4,float_4);

	unsigned_int_5 = unsigned_int_5;
	v_termpty_backlog_lock();

	v_termpty_screen_swap(float_4);

	unsigned_int_4 = unsigned_int_8 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_6;
	float_4 = float_1;
	short_4 = short_1;
}
unsigned int v_termio_win_get( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 + short_2;
	short_2 = short_1;
	return unsigned_int_1;
}
unsigned int v__handle_esc_csi_reset_mode( int parameter_1,char parameter_2,double parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	v_termpty_clear_screen(short_1,float_1);

	unsigned_int_1 = v__move_cursor_to_origin(float_2);

	float_1 = float_2;
	unsigned_int_2 = v_termio_win_get(char_1);

	short_3 = short_2 + short_1;
	long_1 = v__csi_arg_get(char_2);

	v_termpty_resize(short_1,int_1,int_1);

	v_termpty_cursor_copy(float_1,short_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	return unsigned_int_3;
	v_termpty_reset_state(unsigned_int_1);

	double_1 = v__switch_to_alternative_screen(float_1,int_2);

}
unsigned int v__handle_esc_csi_cursor_pos_set( float parameter_1,char parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int_1 = int_1;
	double_2 = double_1 * double_1;
	double_2 = double_1 + double_2;
	double_4 = double_2 * double_3;
	double_5 = double_4 + double_4;
	long_1 = v__csi_arg_get(char_1);

	long_4 = long_2 + long_3;
	if(1)
	{
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		char_2 = char_1 + char_1;
		if(1)
		{
			char char_3 = 1;
			char_2 = char_3 + char_3;
		}
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_2 * char_4;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_2 + int_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
		if(1)
		{
			float float_3 = 1;
			float_3 = float_2;
		}
	}
	if(1)
	{
		double_3 = double_4 * double_2;
	}
	double_1 = double_2 + double_3;
	return unsigned_int_2;
}
void v_termpty_text_scroll_rev( long parameter_1,double parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_5 = 1;
	float float_2 = 1;
	int int_6 = 1;
	int_1 = int_1 + int_1;
	char_3 = char_1 * char_2;
	if(1)
	{
		long_2 = long_1 * long_1;
		double_2 = double_1 + double_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_2 * int_3;
	if(1)
	{
		long_1 = long_2;
		if(1)
		{
			v_termpty_cells_clear(unsigned_int_2,short_1,int_4);

			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		}
		double_3 = double_1;
		if(1)
		{
			int_4 = int_4 + int_1;
		}
	}
	if(1)
	{
		double_2 = double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			int_5 = int_3 * int_1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			double_1 = double_1 * double_4;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
		}
	}
	v_termio_scroll(float_2,int_5,int_5,int_6,-1 );

}
void v_termpty_clear_line( double parameter_1,float parameter_2,int parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	double double_4 = 1;
	short_1 = short_1 * short_1;
	char_3 = char_1 * char_2;
	v_termpty_cells_clear(unsigned_int_1,short_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	double_3 = double_2 + double_2;
	float_2 = float_1 + float_1;
	short_3 = short_2 * short_1;
	short_3 = short_1;
	v_termio_content_change(float_3,float_2,unsigned_int_2,int_1);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	int_2 = int_3;
	char_3 = char_4 * char_5;
	char_7 = char_5 + char_6;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	double_4 = double_2;
}
void v_termpty_clear_screen( short parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_2 = 1;
		v_termpty_cells_clear(unsigned_int_1,short_1,int_1);

		double_1 = double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	v_termpty_clear_line(double_3,float_1,int_1);

	v_termio_content_change(float_1,float_2,unsigned_int_2,int_2);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	double_3 = double_1;
	char_1 = char_1;
	int_1 = int_2 + int_1;
}
void v_termpty_cell_codepoint_att_fill( double parameter_1,double parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_1;
	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		double_1 = double_2;
	}
}
int v__termpty_charset_trans( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "D") > 0)
		{
			int_2 = int_2 * int_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
		}
		if(1)
		{
			int_2 = int_3;
		}
		if(1)
		{
			double double_2 = 1;
			double_1 = double_2;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_1 + double_1;
		}
	}
	return int_3;
}
void v_termio_content_change( float parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	float float_3 = 1;
	double_1 = double_1 * double_1;
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_1;
	short_1 = short_1 * short_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		float_1 = float_1 + float_2;
		unsigned_int_1 = v__remove_links(unsigned_int_1,float_1,-1 );

		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		double_3 = double_2 * double_1;
		int_2 = int_3;
		long_1 = long_1;
		float_1 = float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_3 = int_3 + int_3;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
				int_1 = int_4 * int_2;
			}
			float_1 = float_1 + float_2;
			long_2 = long_2 + long_1;
		}
	}
	if(1)
	{
	}
	double_4 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	short_3 = short_2 * short_1;
	short_1 = short_3;
	if(1)
	{
		long_1 = long_1 + long_2;
		double_5 = double_2 * double_5;
	}
	if(1)
	{
		long_2 = long_1 + long_2;
		float_1 = float_3 + float_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_3 = 1;
			double_4 = double_5 * double_2;
			if(1)
			{
				long_2 = long_1 * long_1;
				char_1 = char_2;
			}
			long_3 = long_2 + long_2;
			short_1 = short_3 + short_3;
		}
	}
	if(1)
	{
		double_4 = double_5 * double_4;
		char_2 = char_2;
		float_2 = float_1 + float_3;
		double_2 = double_4 + double_3;
		int_2 = int_2 + int_4;
		if(1)
		{
			double_2 = v__sel_set(float_2,short_2);

			int_1 = int_3 * int_4;
		}
	}
}
void v_termpty_text_append( double parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		double_1 = double_2;
	}
	short_2 = short_1 + short_2;
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		int int_6 = 1;
		float float_4 = 1;
		int int_7 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_4 = 1;
		long long_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int_5 = int_3 + int_4;
		if(1)
		{
			short short_3 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			short_3 = short_2 * short_2;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			double_4 = double_4 * double_4;
			int_1 = int_2;
			double_1 = double_3 * double_2;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_3 = int_6;
			}
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			float_4 = float_3 + float_3;
		}
		char controller4vul_1589[3];
		fgets(controller4vul_1589 ,3 ,stdin);
		if( strcmp( controller4vul_1589, ":r") < 0)
		{
			int int_8 = 1;
			char controller4vul_1590[3];
			fgets(controller4vul_1590 ,3 ,stdin);
			if( strcmp( controller4vul_1590, "Zy") > 0)
			{
				v_termpty_text_scroll_test(float_3,int_5,uni_para);

				int_3 = int_3 * int_6;
			}
			int_8 = int_1 + int_7;
		}
		long_2 = long_1 * long_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			double_3 = double_4 + double_3;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		}
		short_4 = short_1 * short_1;
		if(1)
		{
			float_4 = float_3 * float_1;
			long_3 = long_3 * long_1;
		}
		if(1)
		{
			long long_4 = 1;
			char_2 = char_1 * char_1;
			long_4 = long_3 * long_1;
			if(1)
			{
				long_2 = long_4;
			}
			if(1)
			{
				double_5 = double_1 + double_4;
			}
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				double_6 = double_1 + double_2;
				unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
			}
		}
		if(1)
		{
			char char_3 = 1;
			int_3 = int_7 + int_5;
			float_3 = float_3 + float_1;
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
			}
			float_1 = float_3;
			if(1)
			{
				char_1 = char_2 * char_2;
				double_5 = double_3 + double_6;
			}
			char_2 = char_2 + char_3;
		}
	}
}
long v__csi_arg_get( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_1;
	float_1 = float_2;
	int_3 = int_1;
	float_4 = float_1 * float_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	return long_1;
}
void v__handle_esc_csi( float parameter_1,long parameter_2,int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	long_1 = v__csi_arg_get(char_1);

	char_1 = v__tab_forward(double_1,int_1);

	v_termpty_text_scroll(int_2,unsigned_int_1,-1 );

	v_termpty_write(char_2,unsigned_int_2,int_1);

	unsigned_int_3 = v__handle_esc_csi_cursor_pos_set(float_1,char_1,unsigned_int_3);

	v_termpty_clear_tabs_on_screen(char_3);

	char_1 = v__handle_esc_csi_decscusr(long_2,char_3);

	char_3 = char_4 + char_5;
	float_1 = v__safechar(double_1);

	v_termpty_clear_screen(short_1,float_2);

	short_1 = v__handle_esc_csi_decstbm(short_2,char_4);

	short_2 = v__handle_esc_csi_decslrm(float_3,int_2);

	v_termpty_cursor_copy(float_3,short_3);

	float_4 = float_3 * float_4;
	int_2 = v__handle_cursor_control(int_2,short_3);

	v_termpty_text_append(double_2,double_3,int_1,-1 );

	v_termpty_clear_backlog(long_1);

	v_termpty_clear_line(double_3,float_3,int_3);

	v_termpty_text_scroll_rev(long_2,double_1);

	unsigned_int_2 = v__handle_esc_csi_reset_mode(int_2,char_4,double_4);

	char_1 = v__handle_esc_csi_color_set(long_2,unsigned_int_3);

	char_3 = v__handle_esc_csi_dsr(unsigned_int_3,char_3);

	v_termpty_reset_state(unsigned_int_2);

	unsigned_int_4 = v__handle_esc_csi_decfra(char_5,int_3);

	v__handle_esc_csi_decera(unsigned_int_5,double_5);

}
float v__safechar( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "P") > 0)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return float_1;
}
float v__handle_esc( short parameter_1,short parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	short short_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	short short_5 = 1;
	float float_2 = 1;
	int int_7 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	int int_8 = 1;
	long long_5 = 1;
	char char_4 = 1;
	float float_4 = 1;
	short short_6 = 1;
	short short_8 = 1;
	v_termpty_cell_codepoint_att_fill(double_1,double_1,char_1,int_1,int_2);

	int_4 = int_3 + int_4;
	if(1)
	{
	}
	int_3 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "AQ") > 0)
	{
	}
	float_1 = v__safechar(double_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	v_termpty_reset_state(unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_3 = v__handle_esc_terminology(double_2,short_1,char_1);

	short_2 = short_1;
	if(1)
	{
	}
	short_2 = short_3 + short_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	int_3 = int_5 + int_4;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	double_3 = double_2;
	double_2 = double_1;
	unsigned_int_4 = v__handle_esc_dcs(int_6,short_4,long_1);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
	double_3 = double_2 + double_4;
	int_3 = int_3 + int_5;
	char_1 = char_1;
	short_1 = short_5 + short_2;
	v_termpty_clear_screen(short_4,float_2);

	int_6 = int_7 + int_2;
	short_5 = short_2 + short_5;
	char_3 = char_2 + char_1;
	long_3 = long_2 * long_2;
	if(1)
	{
		double_1 = double_3 + double_3;
	}
	if(1)
	{
	}
	float_3 = float_1 * float_3;
	int_7 = int_7 * int_7;
	v_termpty_text_scroll_rev_test(long_4,double_1);

	int_2 = int_2 + int_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	long_3 = long_1 + long_3;
	if(1)
	{
	}
	v_termpty_text_scroll_test(float_1,int_8,-1 );

	double_1 = double_2 * double_4;
	v__handle_esc_csi(float_1,long_5,int_8);

	long_1 = v__handle_esc_xterm(unsigned_int_4,char_2,long_2);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
	}
	char_4 = char_2 * char_4;
	int_8 = int_6 + int_4;
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	int_3 = int_7 * int_6;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_6 = 1;
		int int_9 = 1;
		short short_7 = 1;
		unsigned_int_7 = unsigned_int_3 + unsigned_int_6;
		int_4 = int_6;
		double_2 = double_1 * double_3;
		v_termpty_cursor_copy(float_4,short_6);

		long_3 = long_2 * long_5;
		long_6 = long_2 + long_2;
		if(1)
		{
			short_2 = short_4 + short_1;
		}
		int_9 = int_5 + int_5;
		short_3 = short_7 + short_4;
		if(1)
		{
			short_2 = short_6 * short_7;
			short_1 = short_4;
			char_4 = char_1 * char_1;
		}
	}
	if(1)
	{
	}
	short_6 = short_4 + short_8;
	char_1 = char_1 + char_4;
	double_4 = double_3 + double_2;
	int_5 = int_6 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	return float_2;
}
void v_termpty_cell_fill( int parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float float_1 = 1;
			long_3 = long_1 + long_2;
			float_1 = float_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_3 = 1;
			int_2 = int_1 * int_2;
			char_3 = char_2 * char_3;
		}
	}
}
void v_termpty_cells_fill( double parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	v_termpty_cell_fill(int_1,unsigned_int_1,float_1,int_2);

	short_2 = short_1 + short_1;
	short_2 = short_2 + short_3;
	unsigned_int_2 = unsigned_int_1;
	char_1 = char_1 * char_1;
	char_1 = char_2 * char_1;
}
void v_termpty_cells_clear( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int_3 = int_1 * int_2;
	v_termpty_cells_fill(double_1,int_2,char_1,int_3);

}
float v__tooltip_del(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double_1 = double_2;
	int_3 = int_1 * int_2;
	double_4 = double_3 * double_2;
	return float_1;
}
unsigned int v__tooltip_content(unsigned int parameter_2,double parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = v_media_add(int_1,short_1,float_1,int_2,int_1,-1 );

	char_1 = char_1;
	float_1 = float_2 + float_3;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 * long_2;
	return unsigned_int_2;
}
void v_MD5Final( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	double double_9 = 1;
	int int_3 = 1;
	float_1 = float_1 * float_1;
	double_2 = double_1 + double_2;
	v_MD5Transform(float_1,short_1);

	double_1 = double_2 + double_2;
	long_1 = long_2;
	v_byteReverse(int_1,double_3);

	char_1 = char_1 + char_1;
	double_3 = double_4 * double_5;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "ct") < 0)
	{
		char char_2 = 1;
		double double_6 = 1;
		short short_2 = 1;
		char_2 = char_2 + char_1;
		double_3 = double_6 * double_2;
		short_1 = short_2 * short_2;
		double_8 = double_6 * double_7;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	long_3 = long_3;
	char_4 = char_3 + char_3;
	double_5 = double_2 + double_7;
	int_2 = int_2;
	double_3 = double_4 * double_2;
	double_8 = double_9 + double_1;
	int_3 = int_3 * int_1;
}
void v_MD5Transform( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	char char_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	int int_8 = 1;
	char char_6 = 1;
	long long_6 = 1;
	long long_7 = 1;
	char char_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_8 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_8 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double_3 = double_1 + double_2;
	char_1 = char_1 + char_1;
	int_1 = int_1 + int_1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1;
	char_3 = char_2 * char_1;
	double_6 = double_4 + double_5;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	int_2 = int_1 * int_1;
	double_1 = double_7 * double_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_3 = int_2 * int_1;
	int_4 = int_4 * int_1;
	char_3 = char_2 + char_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	char_3 = char_1;
	double_2 = double_7 * double_5;
	int_5 = int_2 + int_5;
	double_7 = double_4 * double_3;
	char_2 = char_5 + char_1;
	long_1 = long_1 + long_1;
	long_4 = long_2 + long_3;
	unsigned_int_1 = unsigned_int_1;
	int_6 = int_5 + int_6;
	int_7 = int_2 + int_4;
	long_3 = long_2 * long_1;
	double_3 = double_4;
	float_3 = float_3;
	char_1 = char_4 + char_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_7 = int_5 * int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	long_5 = long_5 + long_4;
	int_8 = int_3 * int_2;
	double_2 = double_1 * double_6;
	char_4 = char_6 + char_2;
	unsigned_int_1 = unsigned_int_3;
	char_5 = char_5;
	int_2 = int_4 + int_3;
	int_4 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	long_7 = long_6 + long_4;
	int_1 = int_5;
	float_1 = float_3;
	char_7 = char_3 * char_7;
	int_4 = int_8 * int_4;
	int_4 = int_3 + int_1;
	short_2 = short_1 * short_2;
	int_8 = int_2 * int_8;
	float_1 = float_2 + float_1;
	int_5 = int_6 + int_8;
	long_6 = long_2 + long_8;
	float_3 = float_3 + float_1;
	int_2 = int_6 * int_5;
	float_5 = float_4 + float_3;
	int_8 = int_3 * int_8;
	int_8 = int_3 + int_6;
	float_3 = float_2 + float_3;
	unsigned_int_5 = unsigned_int_5;
	char_1 = char_1 * char_2;
	short_3 = short_3 * short_2;
	double_8 = double_6 + double_7;
	short_3 = short_3 + short_1;
	short_4 = short_2 + short_2;
	double_5 = double_3 + double_8;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_4;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_7;
	float_1 = float_5;
	int_6 = int_4 * int_2;
	char_2 = char_1 + char_1;
	double_8 = double_6 * double_8;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_6;
}
void v_byteReverse( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int_1 = int_1 + int_1;
}
void v_MD5Update( short parameter_1,unsigned int parameter_2,double parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	long long_2 = 1;
	short_1 = short_1 + short_1;
	v_MD5Transform(float_1,short_1);

	short_4 = short_2 * short_3;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	long_1 = long_1 * long_1;
	char_1 = char_2;
	float_2 = float_1 + float_1;
	double_1 = double_1 + double_1;
	char_1 = char_2;
	double_1 = double_2 * double_3;
	v_byteReverse(int_1,double_3);

	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_4;
	double_2 = double_3 + double_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
	float_3 = float_3 + float_2;
	long_2 = long_1 * long_1;
}
void v_MD5Init( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	float_3 = float_1 + float_2;
	short_2 = short_1 + short_1;
}
void v_gravatar_tooltip( short parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	unsigned_int_1 = v__tooltip_content(unsigned_int_2,double_1);

	double_1 = double_1 + double_1;
	char_1 = char_2;
	double_3 = double_1 + double_2;
	long_1 = long_1 + long_1;
	v_MD5Update(short_1,unsigned_int_1,double_4);

	double_5 = double_3 + double_4;
	v_MD5Init(int_1);

	int_2 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
	}
	int_4 = int_1 + int_4;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	long_1 = long_1 * long_2;
	char_4 = char_2 + char_3;
	int_5 = int_4 + int_1;
	short_2 = short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_6 = 1;
		double double_7 = 1;
		double_7 = double_6 * double_4;
		long_1 = long_3 + long_2;
	}
	int_4 = int_4 + int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	long_3 = long_1 + long_1;
	v_MD5Final(double_3,int_2);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	float_1 = v__tooltip_del(int_4);

}
float v__cb_link_drag_done(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_1 = short_3 * short_4;
	}
	float_1 = float_1 + float_1;
	return float_1;
}
short v__cb_link_drag_accept(double parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_2;
	float_2 = float_1 + float_2;
	long_3 = long_1 * long_2;
	return short_1;
}
long v__cb_link_drag_move(double parameter_2,char parameter_3,float parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	int_2 = int_1 + int_1;
	int_2 = int_3 + int_4;
	char_1 = char_2;
	short_3 = short_1 * short_2;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			double_2 = double_2;
		}
	}
	return long_1;
}
unsigned int v__cb_link_icon_new(int parameter_2,float parameter_3,double parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_2;
	float_1 = float_1 * float_1;
	int_2 = int_1 * int_2;
	int_3 = int_1 + int_2;
	int_5 = int_4 + int_5;
	double_1 = double_2 * double_2;
	return unsigned_int_1;
}
long v__cb_link_move(float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_6 = 1;
	unsigned_int_1 = v__cb_link_icon_new(int_1,float_1,double_1);

	double_4 = double_2 * double_3;
	short_1 = v__cb_link_drag_accept(double_5,char_1);

	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1;
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	int_1 = int_1;
	double_2 = double_2 + double_6;
	if(1)
	{
		int int_2 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		long_1 = v__cb_link_drag_move(double_6,char_1,float_1,double_2);

		int_1 = int_2 * int_2;
		short_1 = short_3 * short_2;
		short_2 = short_1 * short_4;
		if(1)
		{
			double_5 = double_4 + double_1;
		}
		if(1)
		{
			short short_5 = 1;
			short_5 = short_2 + short_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_1 = v__cb_link_drag_done(long_1);

		int_3 = int_2 + int_1;
	}
	return long_3;
}
double v__cb_link_up_delay()
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double_1 = v__activate_link(short_1,int_1);

	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_2 = long_3 * long_4;
	}
	int_2 = int_1 + int_2;
	return double_1;
}
void v__cb_link_up(unsigned int parameter_2,long parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		int_2 = int_1 * int_3;
		double_2 = v__cb_link_up_delay();

		int_3 = int_3;
		float_1 = float_1 * float_2;
		if(1)
		{
			if(1)
			{
				float float_3 = 1;
				float_2 = float_3 + float_3;
			}
			if(1)
			{
				int int_4 = 1;
				int_3 = int_2 + int_4;
			}
		}
		double_2 = double_1 * double_2;
	}
}
void v_term_focus( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	float_1 = v__term_is_focused(float_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	float_4 = float_3 * float_2;
	int_1 = int_2;
}
float v__term_is_focused( float parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	return float_2;
}
void v_term_unfocus()
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long_1 = long_1 + long_1;
	short_2 = short_1 * short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "D") < 0)
	{
	}
	float_1 = float_1 + float_1;
	float_2 = v__term_is_focused(float_3);

	double_1 = double_2;
	short_4 = short_3 + short_4;
}
short v__cb_ctxp_del(unsigned int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	v_term_unfocus();

	int_1 = int_2;
	double_1 = double_1 * double_1;
	int_2 = int_3 * int_1;
	int_3 = int_3 + int_1;
	v_term_focus(float_1);

	int_1 = int_2 * int_1;
	return short_1;
}
double v__cb_ctxp_dismissed(double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char_1 = char_2;
	float_2 = float_1 + float_2;
	char_1 = char_2 * char_1;
	long_1 = long_1 + long_1;
	return double_1;
}
float v__cb_ctxp_link_copy(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = v__take_selection_text(short_1,long_1,unsigned_int_2,-1 );

	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_2;
	short_1 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_5;
	return float_1;
}
long v__screen_visual_bounds( short parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	if(1)
	{
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 * double_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		float_3 = float_1 * float_2;
		double_3 = double_1;
	}
	return long_1;
}
short v__draw_cell( short parameter_1,float parameter_2,short parameter_3,float parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char_2 = char_1 + char_2;
	int_2 = int_1 * int_1;
	double_2 = double_1 * double_2;
	float_1 = float_1 * float_1;
	if(1)
	{
		short short_1 = 1;
		short_3 = short_1 + short_2;
	}
	int_1 = int_1 * int_3;
	double_4 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_3;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_5 + double_6;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2 + int_4;
		}
	}
	if(1)
	{
		short_3 = short_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		float float_2 = 1;
		char char_3 = 1;
		double double_7 = 1;
		float_2 = float_2 * float_2;
		char_2 = char_3 * char_1;
		double_1 = double_7 + double_5;
		long_2 = long_1 + long_2;
		char_2 = char_2 * char_3;
		short_4 = short_4;
		int_2 = int_3;
	}
	if(1)
	{
		short_4 = short_2;
	}
	if(1)
	{
		long_2 = long_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_5 + double_4;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_5;
		}
	}
	if(1)
	{
		int int_5 = 1;
		int_3 = int_3 * int_5;
	}
	return short_4;
}
unsigned int v__draw_line( int parameter_1,char parameter_2,char parameter_3,int parameter_4,char parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return unsigned_int_1;
	short_1 = v__draw_cell(short_2,float_1,short_3,float_1);

}
short v_termpty_backlog_length( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_7 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	long_3 = long_1 + long_2;
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_2;
	long_1 = long_3 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 + int_3;
	long_2 = v_verify_beacon(long_3,int_4);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	double_3 = double_1 + double_2;
	long_1 = long_3 + long_3;
	int_5 = int_3 * int_2;
	long_1 = long_1 * long_1;
	double_1 = double_4 * double_1;
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	int_6 = int_5 + int_6;
	if(1)
	{
		double_1 = double_2;
	}
	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
		int_7 = int_1 + int_3;
	}
	double_6 = double_5 * double_3;
	if(1)
	{
		int_3 = int_5 * int_6;
	}
	char_1 = char_1;
	if(1)
	{
		int_6 = int_7 * int_4;
	}
	long_1 = long_2;
	short_1 = short_1 + short_2;
	int_2 = int_5 + int_4;
	double_4 = double_5 + double_7;
	char_3 = char_2 + char_1;
	long_1 = long_4 + long_1;
	return short_3;
}
float v_termio_pty_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 + short_2;
	return float_1;
}
char v_termio_textgrid_get( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short_1 = short_2;
	double_1 = double_1 + double_2;
	return char_1;
}
int v_miniview_colors_get( short parameter_1,double parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char_1 = v_termio_textgrid_get(int_1);

	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double_2 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_1 = int_2;
		long_1 = long_2;
	}
	return int_3;
}
short v__deferred_renderer()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_4 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	char char_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_4 = 1;
	char char_6 = 1;
	int int_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_1;
	long_1 = long_3 + long_2;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	double_2 = double_3 + double_1;
	double_4 = double_3;
	double_4 = double_2 + double_2;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	long_3 = long_4 + long_4;
	char_2 = char_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	int_2 = v_termio_scroll_get(short_1);

	unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
	float_2 = float_1 * float_2;
	short_2 = short_2 * short_3;
	short_3 = short_4 * short_1;
	if(1)
	{
		unsigned_int_3 = v__draw_line(int_3,char_3,char_4,int_2,char_4);

		char_1 = char_1 * char_4;
	}
	if(1)
	{
		float_2 = v_termio_pty_get(float_1);

		double_6 = double_4 + double_5;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_2 + long_4;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		}
		float_1 = float_2 + float_1;
	}
	double_5 = double_5 + double_3;
	int_2 = int_2 * int_1;
	double_3 = double_4;
	if(1)
	{
		long_4 = v__screen_visual_bounds(short_2);

		char_5 = char_3 * char_1;
	}
	if(1)
	{
		double double_7 = 1;
		double_3 = double_7 * double_3;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_6 + double_6;
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_7 = 1;
		float_3 = float_2 + float_3;
		unsigned_int_7 = unsigned_int_7 + unsigned_int_5;
		if(1)
		{
			char_5 = char_4 * char_1;
			float_2 = float_1 + float_3;
		}
		if(1)
		{
			if(1)
			{
				double double_8 = 1;
				double double_9 = 1;
				unsigned_int_7 = unsigned_int_8 + unsigned_int_1;
				float_4 = v_termpty_cellrow_get(char_6,int_4,float_4);

				int_3 = int_3;
				int_3 = int_2;
				double_8 = double_9;
			}
			if(1)
			{
				double double_10 = 1;
				unsigned_int_4 = unsigned_int_7;
				double_10 = double_6;
			}
		}
	}
	if(1)
	{
		short_1 = v_termpty_backlog_length(double_4);

		char_6 = char_4;
	}
	long_5 = long_1 + long_4;
	unsigned_int_9 = unsigned_int_3 + unsigned_int_2;
	short_2 = short_2 * short_2;
	int_3 = v_miniview_colors_get(short_2,double_5);

	unsigned_int_2 = unsigned_int_5 * unsigned_int_8;
	return short_4;
}
unsigned int v__queue_render( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 + long_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short_1 = v__deferred_renderer();

		char_2 = char_1 + char_1;
	}
	return unsigned_int_1;
}
void v_miniview_redraw( float parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	unsigned_int_1 = v__queue_render(char_1);

}
float v__block_obj_del( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	long_1 = v__smart_media_del(long_1,long_1);

	double_1 = double_1 * double_2;
	short_1 = short_1 * short_1;
	return float_1;
}
void v__termpty_is_dblwidth_slow_get( short parameter_1,int parameter_2)
{
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
		}
	}
}
short v__termpty_is_dblwidth_get( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	v__termpty_is_dblwidth_slow_get(short_2,int_1);

}
char v_term_preedit_str_get( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	if(1)
	{
	}
	int_4 = int_3 + int_1;
	double_1 = double_2;
	if(1)
	{
	}
	return char_1;
}
unsigned int v_media_get( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	return unsigned_int_1;
}
long v__smart_media_clicked(long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_5 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short_3 = short_1 * short_2;
	double_1 = v_media_src_type_get(short_4);

	int_2 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_1 = v_media_get(unsigned_int_1);

	short_3 = short_2 * short_5;
	if(1)
	{
		if(1)
		{
			short_5 = short_3 + short_4;
			unsigned_int_1 = v_termio_config_get(long_1);

			int_1 = int_2 * int_3;
			if(1)
			{
				if(1)
				{
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
					unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
					if(1)
					{
						char char_1 = 1;
						char_1 = char_1 + char_1;
					}
					if(1)
					{
						short short_6 = 1;
						double double_2 = 1;
						short_2 = short_2 + short_6;
						double_1 = double_2 + double_2;
						if(1)
						{
							char char_2 = 1;
							char char_3 = 1;
							long long_2 = 1;
							long long_3 = 1;
							char_2 = char_3;
							long_3 = long_1 * long_2;
							int_2 = int_3 * int_2;
						}
					}
				}
				double_1 = double_1 + double_1;
			}
		}
	}
	int_3 = int_3;
	return long_1;
}
short v_media_control_get()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	return short_1;
}
float v__smart_media_stop(unsigned int parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char_1 = char_1 + char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") == 0)
	{
	}
	float_1 = float_1 + float_2;
	return float_3;
}
void v__smart_media_pause(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	short_3 = short_1 + short_2;
}
char v__smart_media_play(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
long v__smart_media_del(long parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	return long_1;
}
void v_media_visualize_set( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			short_1 = short_1 * short_2;
		}
		if(1)
		{
			short_1 = short_2 + short_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
}
void v_media_mute_set( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
}
void v_media_volume_set( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 + long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "@") == 0)
	{
	}
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
unsigned int v__cb_media_vol(long parameter_2,float parameter_3,long parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_media_volume_set(double_1,double_1);

	char_1 = char_1 + char_2;
	char_3 = char_1 + char_1;
	if(1)
	{
	}
	char_4 = char_1 * char_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_2;
}
long v__cb_media_pos(long parameter_2,short parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "uG") < 0)
	{
	}
	double_1 = double_2 * double_2;
	double_1 = double_1 * double_3;
	return long_1;
	v_media_position_set(double_4,double_5);

}
int v__cb_media_pos_drag_stop(float parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_1 = float_1 * float_1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	short_1 = short_1 * short_2;
	float_2 = float_1 + float_1;
	int_3 = int_1 + int_2;
	int_2 = int_4 * int_3;
	return int_4;
}
char v__cb_media_pos_drag_start(int parameter_2,short parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	float_3 = float_1 + float_2;
	v_media_position_set(double_1,double_1);

	short_1 = short_1;
	return char_1;
}
void v_media_stop( int parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "O}") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_2;
}
void v__cb_media_stop(char parameter_2,short parameter_3,char parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	v_media_stop(int_1);

	char_2 = char_1 + char_1;
}
short v__cb_media_pause(int parameter_2,char parameter_3,int parameter_4)
{
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_media_play_set(long_1,char_1);

	short_2 = short_1 * short_1;
	return short_3;
}
void v_media_play_set( long parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	int_2 = int_2 * int_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		int_1 = int_2 + int_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "a}") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_1 = double_1 * double_1;
		double_2 = double_3;
	}
}
int v__cb_media_play(long parameter_2,double parameter_3,float parameter_4)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_media_play_set(long_1,char_1);

	int_2 = int_1 * int_1;
	return int_2;
}
void v_media_position_set( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_2 = double_1 * double_1;
	char_1 = char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "lj") > 0)
	{
	}
	short_2 = short_1 * short_1;
	char_2 = char_3;
}
short v__cb_mov_ref(char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	short_1 = short_1;
	return short_2;
}
long v__cb_mov_progress(float parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	return long_1;
}
double v__cb_mov_restart()
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 * int_2;
	return double_1;
}
short v__cb_mov_decode_stop(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_1 = v__cb_mov_restart();

		double_3 = double_1 + double_2;
	}
	long_1 = long_1 * long_1;
	short_1 = short_1 * short_1;
	return short_2;
}
void v__cb_mov_len_change(float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
}
void v__cb_mov_frame_resize(unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double_3 = double_1 + double_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	int_1 = int_1;
	unsigned_int_1 = v__type_mov_calc(char_1,long_1,int_2,float_1,int_2);

	int_1 = int_1 + int_2;
}
void v__cb_mov_frame_decode(unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float float_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_4 = v__type_mov_calc(char_1,long_1,int_1,float_1,int_1);

	float_2 = float_1 + float_2;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	float_3 = float_4;
	float_3 = float_2;
	char_1 = char_2 + char_2;
	if(1)
	{
	}
	long_2 = long_1;
	float_2 = float_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	float_5 = float_2 * float_3;
}
short v__type_mov_init( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_5 = 1;
	char char_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_6 = 1;
	float float_3 = 1;
	int int_6 = 1;
	float float_4 = 1;
	long long_5 = 1;
	double double_7 = 1;
	float float_5 = 1;
	double double_8 = 1;
	int int_7 = 1;
	char char_7 = 1;
	float float_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_7 = 1;
	float float_8 = 1;
	int int_8 = 1;
	short short_5 = 1;
	int int_9 = 1;
	long long_6 = 1;
	char_3 = char_1 + char_2;
	long_1 = v__cb_media_pos(long_2,short_1,long_3);

	v_media_mute_set(short_2,unsigned_int_1);

	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	double_3 = double_2 + double_3;
	v__cb_media_stop(char_3,short_1,char_4);

	int_2 = int_2 + int_2;
	int_3 = int_3;
	int_1 = int_1 + int_1;
	if(1)
	{
		int_2 = int_4 + int_5;
	}
	if(1)
	{
		long_1 = long_3;
		long_4 = v__cb_mov_progress(float_1);

		double_4 = double_3 * double_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	float_2 = float_1;
	double_2 = double_1 * double_3;
	double_5 = double_3 + double_2;
	char_5 = v_theme_apply(float_1,double_6,unsigned_int_4);

	double_2 = double_4 * double_3;
	short_2 = v__cb_mov_ref(char_6);

	unsigned_int_4 = v__cb_media_vol(long_1,float_3,long_3);

	int_2 = int_4 + int_4;
	int_5 = int_1 * int_4;
	int_5 = int_6 + int_6;
	if(1)
	{
		float_2 = float_1 + float_4;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, ")") > 0)
	{
		long_2 = long_3 * long_1;
	}
	unsigned_int_4 = unsigned_int_1;
	long_4 = long_2 + long_5;
	v__cb_mov_frame_resize(unsigned_int_3);

	double_1 = double_7;
	float_1 = float_1 + float_5;
	v_media_position_set(double_1,double_8);

	int_7 = int_7 * int_6;
	int_3 = int_5 * int_3;
	v_media_play_set(long_1,char_4);

	double_2 = double_3;
	v__cb_mov_frame_decode(unsigned_int_2);

	char_7 = char_6 + char_4;
	int_5 = int_6 + int_7;
	short_2 = short_1 + short_2;
	float_6 = float_3 + float_4;
	short_1 = short_3 * short_4;
	float_8 = float_2 + float_7;
	short_1 = v__cb_media_pause(int_6,char_1,int_8);

	char_7 = v__cb_media_pos_drag_start(int_4,short_5,float_2);

	int_9 = v__cb_media_pos_drag_stop(float_2,int_9,int_1);

	short_2 = short_1 + short_4;
	char_7 = char_4 + char_7;
	v__cb_mov_len_change(float_8);

	short_3 = v__cb_mov_decode_stop(double_1);

	double_7 = double_4 * double_2;
	v_media_visualize_set(float_3,unsigned_int_3);

	double_4 = double_1 + double_8;
	if(1)
	{
		short_5 = short_3 * short_4;
	}
	if(1)
	{
		float float_9 = 1;
		float_9 = float_2;
	}
	return short_5;
	int_7 = v__cb_media_play(long_6,double_4,float_3);

}
long v__cb_edje_preloaded(int parameter_2,double parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return long_1;
}
char v__type_edje_init( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	float float_4 = 1;
	float_1 = float_1 + float_2;
	double_3 = double_1 + double_2;
	short_1 = short_1 * short_1;
	short_2 = short_3;
	int_1 = int_1;
	double_1 = double_3 * double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 * double_3;
	short_1 = short_4 * short_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_3 = 1;
			double double_4 = 1;
			float_1 = float_1 * float_3;
			double_4 = double_4 * double_2;
			long_1 = v__cb_edje_preloaded(int_2,double_5,char_1);

			v_theme_auto_reload_enable(float_4);

			int_2 = int_1 * int_2;
		}
	}
	return char_1;
}
short v__type_scale_init( int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short_1 = short_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1;
	short_2 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_1;
	long_1 = long_1;
	float_1 = float_2;
	float_3 = float_4;
	double_2 = double_2 * double_2;
	double_2 = v__cb_scale_preloaded(int_1,int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return short_3;
}
long v__cb_img_frame()
{
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	float_3 = float_1 + float_2;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
		if(1)
		{
			int int_2 = 1;
			int_3 = int_1 + int_2;
		}
		double_3 = double_1 + double_2;
		float_1 = float_4 * float_5;
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				char_3 = char_1 + char_2;
			}
		}
	}
	short_1 = short_1 * short_1;
	int_4 = int_3 * int_1;
	double_3 = double_4 * double_2;
	return long_1;
}
double v__type_img_anim_handle( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int_1 = int_1;
	int_1 = int_1 + int_2;
	long_1 = v__cb_img_frame();

	char_1 = char_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "!") > 0)
	{
	}
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	return double_1;
}
float v__cb_img_preloaded(float parameter_2,char parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	return float_1;
}
int v__type_img_init( float parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_6 = 1;
	char char_7 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = int_1;
	char_3 = char_1 + char_2;
	long_1 = long_1 + long_1;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_5 = char_4 * char_5;
	float_1 = v__cb_img_preloaded(float_2,char_5);

	double_1 = v__type_img_anim_handle(int_2);

	char_5 = char_6 * char_7;
	float_3 = float_2 * float_2;
	double_3 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 * char_7;
	int_4 = int_3 + int_1;
	return int_3;
}
double v__url_compl_cb(int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	float_1 = float_1 * float_2;
	char_1 = v__type_edje_init(short_1);

	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_3 + float_2;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1;
	short_2 = short_1 * short_2;
	short_3 = v__type_mov_init(long_1);

	int_1 = int_2;
	short_3 = v__type_scale_init(int_2);

	int_1 = int_1 + int_1;
	long_2 = long_2 * long_3;
	int_2 = int_2 * int_2;
	double_1 = double_3 + double_1;
	char_3 = char_2 + char_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	float_3 = v__smart_calculate_226(char_3);

	double_3 = double_4 * double_1;
	long_5 = long_4 + long_1;
	long_1 = long_2 * long_4;
	double_2 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	long_6 = long_6 * long_5;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	int_1 = v__type_img_init(float_2);

	long_1 = long_5 + long_5;
	return double_5;
}
short v__url_prog_cb(int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	short_3 = short_1 * short_2;
	double_2 = double_1 + double_1;
	double_4 = double_3 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double double_5 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_2 = double_5;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_3 = char_1 + char_2;
		}
		long_2 = long_1 * long_1;
		int_2 = int_1 * int_1;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			char char_4 = 1;
			int_3 = int_2;
			int_2 = int_4 * int_3;
			int_1 = int_5 + int_1;
			char_4 = char_3 + char_4;
		}
	}
	return short_4;
}
double v__type_thumb_calc( int parameter_1,long parameter_2,int parameter_3,float parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_3 = 1;
	char char_3 = 1;
	double double_2 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		float_1 = float_1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		short_3 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		short_5 = short_2 + short_4;
		if(1)
		{
			float float_2 = 1;
			char_2 = char_3 + char_3;
			float_1 = float_2 * float_1;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
		}
		if(1)
		{
			float float_3 = 1;
			int int_1 = 1;
			float_3 = float_1 * float_1;
			int_2 = int_1 * int_1;
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		int_4 = int_2 * int_3;
		char_4 = char_3 + char_4;
		int_6 = int_3 + int_5;
	}
	char_3 = char_2;
	short_1 = short_1 + short_3;
	return double_2;
}
unsigned int v__type_mov_calc( char parameter_1,long parameter_2,int parameter_3,float parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "0Z") < 0)
	{
		float_1 = float_1;
		char_3 = char_3;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double_4 = double_1 + double_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		double_2 = double_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			float_1 = float_2 * float_1;
		}
		if(1)
		{
			float float_3 = 1;
			int_1 = int_1 + int_1;
			float_2 = float_1 * float_3;
			if(1)
			{
				long_1 = long_1 + long_2;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
				if(1)
				{
					unsigned_int_2 = unsigned_int_1;
				}
			}
		}
		if(1)
		{
			short_1 = short_1;
			double_2 = double_4 + double_4;
			if(1)
			{
				char char_4 = 1;
				unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
				char_3 = char_4 * char_1;
				if(1)
				{
					char_2 = char_4 * char_1;
				}
			}
		}
		if(1)
		{
			int int_2 = 1;
			short short_2 = 1;
			int_1 = int_1 + int_2;
			short_2 = short_1 + short_2;
		}
		long_2 = long_2 * long_2;
		double_4 = double_4 + double_3;
		long_1 = long_1 + long_2;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	}
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	return unsigned_int_3;
}
char v__type_edje_calc( float parameter_1,float parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_2;
	double_1 = double_1;
	return char_1;
}
char v__type_img_calc( long parameter_1,unsigned int parameter_2,float parameter_3,float parameter_4,int parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_2 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_3 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_3;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
			double_3 = double_1 * double_2;
			if(1)
			{
				unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
				double_1 = double_2 * double_3;
				if(1)
				{
					long_1 = long_1 * long_1;
				}
			}
		}
		if(1)
		{
			float float_2 = 1;
			unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
			float_2 = float_1 * float_1;
			if(1)
			{
				int int_3 = 1;
				int int_4 = 1;
				int_2 = int_3 + int_4;
				float_3 = float_1 + float_1;
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					unsigned_int_6 = unsigned_int_4 * unsigned_int_2;
				}
			}
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				long_3 = long_1 * long_2;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
			}
		}
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
			int_2 = int_5;
		}
		unsigned_int_3 = unsigned_int_2;
		double_4 = double_3 + double_3;
		double_3 = double_4 + double_4;
		float_1 = float_3 * float_3;
	}
	int_5 = int_1;
	char_1 = char_1 + char_1;
	return char_2;
}
double v__cb_scale_preloaded(int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short_2 = short_1 * short_1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
		int_3 = int_2 + int_2;
		int_1 = int_4 + int_2;
		double_1 = double_1 * double_1;
	}
	return double_1;
}
short v__type_scale_calc( double parameter_1,long parameter_2,int parameter_3,char parameter_4,long parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_10 = 1;
	char * vul_var;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_2;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 + int_1;
		short_2 = short_1 * short_1;
	}
	char controller4vul_1625[2];
	fgets(controller4vul_1625 ,2 ,stdin);
	if( strcmp( controller4vul_1625, "T") > 0)
	{
		int int_2 = 1;
		char char_3 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		int_2 = int_3;
		char controller4vul_1626[3];
		fgets(controller4vul_1626 ,3 ,stdin);
		if( strcmp( controller4vul_1626, "PG") < 0)
		{
			strcpy(vul_var, "CWE-761");
			int_1 = int_4 * int_2;
			char_3 = char_1 * char_1;
			char controller4vul_1627[3];
			fgets(controller4vul_1627 ,3 ,stdin);
			if( strcmp( controller4vul_1627, "|b") < 0)
			{
				int_5 = int_2 * int_1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
				char controller4vul_1628[2];
				fgets(controller4vul_1628 ,2 ,stdin);
				if( strcmp( controller4vul_1628, "8") < 0)
				{
					if(uni_para == 447)
					{
						vul_var = vul_var + 1;
					}
					free(vul_var);
					char_1 = char_3 + char_4;
				}
			}
		}
		if(1)
		{
			short_3 = short_2 + short_3;
			float_2 = float_1 + float_2;
			if(1)
			{
				double double_1 = 1;
				double_2 = double_1 + double_1;
				char_2 = char_1 * char_2;
				if(1)
				{
					short_2 = short_1 * short_3;
				}
			}
		}
		if(1)
		{
			int int_6 = 1;
			int_4 = int_5 * int_6;
			char_2 = char_1 * char_3;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		unsigned_int_6 = unsigned_int_2;
		char_1 = char_4 + char_2;
		short_3 = short_4 + short_5;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		float float_4 = 1;
		long_1 = long_1 * long_2;
		double_4 = double_3 * double_2;
		float_2 = float_1 + float_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		}
		if(1)
		{
			int_1 = int_5;
		}
		if(1)
		{
			char char_5 = 1;
			unsigned int unsigned_int_7 = 1;
			char char_6 = 1;
			char char_7 = 1;
			float float_3 = 1;
			char_2 = char_4 * char_2;
			char_2 = char_1 * char_5;
			unsigned_int_7 = unsigned_int_3 * unsigned_int_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_6;
			short_3 = short_4;
			char_7 = char_2 + char_6;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
			float_1 = float_3 + float_3;
			short_3 = short_5 + short_5;
		}
		float_1 = float_1 + float_4;
		unsigned_int_6 = unsigned_int_8 + unsigned_int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		short_3 = short_1 * short_1;
		unsigned_int_9 = unsigned_int_4 + unsigned_int_8;
	}
	int_3 = int_3 + int_4;
	double_2 = double_2 + double_3;
	unsigned_int_10 = unsigned_int_2 + unsigned_int_1;
}
int v__unsmooth_timeout(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	char_2 = char_1 + char_2;
	char controller4vul_1623[3];
	fgets(controller4vul_1623 ,3 ,stdin);
	if( strcmp( controller4vul_1623, "$*") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
		char controller4vul_1624[3];
		fgets(controller4vul_1624 ,3 ,stdin);
		if( strcmp( controller4vul_1624, "el") > 0)
		{
			short_1 = v__type_scale_calc(double_4,long_1,int_3,char_2,long_2,uni_para);

			char_2 = char_1;
		}
		if(1)
		{
			int_1 = int_2 * int_1;
		}
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_2 * double_3;
	}
	return int_3;
}
int v__smooth_handler( long parameter_1,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	float_1 = float_1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 + int_4;
	}
	char controller4vul_1619[3];
	fgets(controller4vul_1619 ,3 ,stdin);
	if( strcmp( controller4vul_1619, "nc") < 0)
	{
		char controller4vul_1620[3];
		fgets(controller4vul_1620 ,3 ,stdin);
		if( strcmp( controller4vul_1620, "Xh") < 0)
		{
			double_1 = double_1 + double_2;
			double_1 = double_2 + double_1;
			char controller4vul_1621[3];
			fgets(controller4vul_1621 ,3 ,stdin);
			if( strcmp( controller4vul_1621, "+1") < 0)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_2 = long_1 * long_2;
				char controller4vul_1622[2];
				fgets(controller4vul_1622 ,2 ,stdin);
				if( strcmp( controller4vul_1622, "@") > 0)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					int_2 = v__unsmooth_timeout(uni_para);

					unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				}
			}
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 * char_1;
			}
			if(1)
			{
				int_1 = int_4 * int_2;
			}
			double_3 = double_1 * double_2;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_3 = char_4;
		}
		double_2 = double_1 + double_3;
	}
	return int_5;
}
float v__smart_calculate( char parameter_1,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1 + int_1;
	char_1 = char_1 * char_1;
	char controller4vul_1618[2];
	fgets(controller4vul_1618 ,2 ,stdin);
	if( strcmp( controller4vul_1618, ".") < 0)
	{
		int_2 = v__smooth_handler(long_1,uni_para);

	}
	short_2 = short_1 * short_1;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	int_3 = int_2 * int_2;
	double_3 = double_3 * double_4;
	double_3 = double_3 + double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	char_2 = char_2;
	int_4 = int_4 * int_2;
	int_3 = int_3 * int_4;
	double_1 = double_4 * double_5;
	int_4 = int_3;
	int_4 = int_3 * int_3;
	char_3 = char_1 + char_2;
	int_1 = int_2 + int_2;
	long_1 = long_2 * long_2;
	float_1 = float_1 + float_1;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_4;
		short_1 = short_2 * short_1;
	}
	if(1)
	{
		int int_5 = 1;
		double double_7 = 1;
		int_5 = int_5 * int_2;
		double_1 = double_7;
	}
	return float_2;
}
char v__smart_move( int parameter_1,int parameter_2,long parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	return char_1;
}
void v__smart_resize( float parameter_1,long parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 + long_2;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
double v__smart_del( char parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_1;
		float_2 = float_1 * float_1;
		double_2 = double_3;
	}
	short_1 = short_2;
	double_3 = double_4;
	short_1 = short_3 * short_2;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		if(1)
		{
			char char_1 = 1;
			char_2 = char_1 + char_2;
		}
		char_4 = char_3 * char_2;
	}
	if(1)
	{
		float_2 = float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		float float_3 = 1;
		float float_5 = 1;
		float_5 = float_3 + float_4;
	}
	if(1)
	{
		double_1 = double_3 + double_1;
	}
	if(1)
	{
		float_4 = float_2 * float_2;
	}
	if(1)
	{
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		int_2 = int_2 + int_1;
	}
	if(1)
	{
		int_1 = int_2 + int_3;
	}
	if(1)
	{
		int_2 = int_3 + int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_1 * int_2;
	}
	if(1)
	{
		int_3 = int_3 + int_3;
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_6 = int_1 + int_5;
	}
	if(1)
	{
		char_4 = char_4 + char_4;
	}
	long_2 = long_3 * long_1;
	double_2 = double_1 + double_1;
	return double_4;
}
char v__smart_add( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	int_1 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	char_2 = char_1 * char_2;
	double_1 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_4 + int_1;
	double_3 = double_4 + double_4;
	return char_2;
}
unsigned int v__smart_init(int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float_1 = v__smart_calculate(char_1,uni_para);

	int_1 = int_2;
	double_2 = double_1 * double_1;
	int_1 = int_2 * int_2;
	double_2 = double_3 + double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_1;
	double_2 = double_2 * double_3;
	char_1 = char_2;
	int_3 = int_2 * int_2;
	float_2 = float_1 + float_1;
	return unsigned_int_2;
}
double v_media_add( int parameter_1,short parameter_2,float parameter_3,int parameter_4,int parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_5 = 1;
	double double_8 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_9 = 1;
	int int_10 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_9 = 1;
	long long_6 = 1;
	int int_11 = 1;
	double double_10 = 1;
	double double_11 = 1;
	short short_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_10 = 1;
	long long_7 = 1;
	double double_12 = 1;
	double double_13 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_2;
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	long_1 = long_3 + long_4;
	int_2 = int_2 + int_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
	float_1 = float_2;
	unsigned_int_2 = unsigned_int_1;
	short_2 = short_1;
	double_3 = double_1 * double_1;
	char controller4vul_1612[2];
	fgets(controller4vul_1612 ,2 ,stdin);
	if( strcmp( controller4vul_1612, "Q") > 0)
	{
		char controller4vul_1613[2];
		fgets(controller4vul_1613 ,2 ,stdin);
		if( strcmp( controller4vul_1613, "K") > 0)
		{
			int int_3 = 1;
			int int_4 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_6 = 1;
			int_2 = int_3 + int_4;
			short_2 = short_1 * short_2;
			if(1)
			{
				char_2 = char_1 * char_2;
				double_2 = double_4 * double_3;
				unsigned_int_4 = unsigned_int_5;
			}
			if(1)
			{
				int int_5 = 1;
				double_6 = double_5 * double_5;
				int_3 = int_5 + int_4;
				long_4 = long_1 + long_2;
			}
			if(1)
			{
				double_4 = double_5 * double_6;
			}
			if(1)
			{
				float_2 = float_1 + float_1;
			}
			if(1)
			{
				long_3 = long_4 + long_2;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
			}
			if(1)
			{
				int_4 = int_2 * int_1;
				unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
				double_7 = double_6 * double_2;
				unsigned_int_8 = unsigned_int_7 + unsigned_int_6;
				int_6 = int_6;
				unsigned_int_5 = unsigned_int_7 + unsigned_int_2;
				double_3 = double_3 + double_7;
			}
			char controller4vul_1614[2];
			fgets(controller4vul_1614 ,2 ,stdin);
			if( strcmp( controller4vul_1614, "j") > 0)
			{
				long_2 = long_5;
				char_2 = char_1 * char_1;
				int_1 = int_6 + int_4;
				char controller4vul_1615[2];
				fgets(controller4vul_1615 ,2 ,stdin);
				if( strcmp( controller4vul_1615, "z") < 0)
				{
					unsigned_int_3 = unsigned_int_3 * unsigned_int_8;
					if(1)
					{
						double_6 = double_8 * double_7;
						float_2 = float_1 + float_2;
					}
					char controller4vul_1616[2];
					fgets(controller4vul_1616 ,2 ,stdin);
					if( strcmp( controller4vul_1616, "?") > 0)
					{
						int int_7 = 1;
						int_7 = int_7 + int_8;
						char controller4vul_1617[2];
						fgets(controller4vul_1617 ,2 ,stdin);
						if( strcmp( controller4vul_1617, "v") > 0)
						{
							char char_3 = 1;
							unsigned_int_9 = v__smart_init(uni_para);

							int_10 = int_2 * int_9;
							short_1 = short_3 + short_1;
							char_1 = char_3 + char_1;
						}
						if(1)
						{
							short_2 = short_4 * short_1;
							double_5 = double_9 * double_6;
							float_1 = float_2 + float_2;
							long_6 = long_3 * long_5;
							long_1 = long_3;
							unsigned_int_7 = unsigned_int_2 + unsigned_int_8;
							short_2 = short_3 + short_3;
							int_6 = int_9 + int_11;
							unsigned_int_3 = unsigned_int_3 * unsigned_int_7;
						}
					}
				}
				if(1)
				{
					double_4 = double_9 * double_1;
				}
			}
		}
		if(1)
		{
			double_1 = double_7 * double_9;
		}
	}
	if(1)
	{
		if(1)
		{
			double_5 = double_8;
			double_3 = double_9 * double_10;
		}
	}
	if(1)
	{
		short short_5 = 1;
		if(1)
		{
			double_6 = double_9 + double_2;
			short_5 = short_1 + short_3;
		}
		double_8 = double_10 + double_3;
		if(1)
		{
			long_3 = long_1 + long_6;
			short_4 = short_5;
		}
		int_8 = int_2;
		if(1)
		{
			int int_12 = 1;
			double_1 = double_11 + double_3;
			int_9 = int_12 * int_2;
		}
		double_10 = double_7 * double_10;
		if(1)
		{
			long_4 = long_2;
			double_6 = double_3 + double_9;
		}
		char_2 = char_1 + char_1;
		long_5 = long_6 + long_3;
	}
	short_6 = short_2 * short_4;
	char_4 = char_2 * char_1;
	unsigned_int_7 = unsigned_int_1 + unsigned_int_10;
	short_1 = short_4 + short_2;
	char_2 = char_4 + char_4;
	int_10 = int_10 * int_11;
	long_2 = long_1 * long_7;
	double_12 = double_12 + double_2;
	if(1)
	{
		double_11 = double_6 + double_7;
	}
	return double_13;
}
short v__block_media_activate( double parameter_1,char parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	short_2 = short_1 * short_2;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_1;
	int_3 = int_2 + int_2;
	int_3 = int_2 * int_2;
	char controller4vul_1611[3];
	fgets(controller4vul_1611 ,3 ,stdin);
	if( strcmp( controller4vul_1611, "RX") < 0)
	{
		double_1 = v_media_add(int_2,short_3,float_1,int_2,int_1,uni_para);

		char_3 = char_1 * char_2;
	}
	if(1)
	{
		int_3 = int_3 + int_4;
	}
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		short_3 = short_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3;
	}
	if(1)
	{
		int_2 = int_3;
	}
	long_1 = long_1 + long_1;
	short_1 = short_2 + short_1;
	if(1)
	{
		long_1 = long_2 + long_1;
	}
	char_1 = char_2 + char_3;
	int_1 = int_4 + int_3;
	short_4 = short_3 * short_2;
	long_1 = long_2;
	double_3 = double_1 * double_2;
	float_1 = float_4;
	double_3 = double_2 + double_4;
	if(1)
	{
		short_3 = short_2 * short_1;
		char_3 = char_2 * char_2;
	}
	int_4 = int_1;
	long_1 = long_1;
	double_3 = double_2 + double_4;
	if(1)
	{
		double_4 = double_2;
	}
	return short_2;
}
short v__block_edje_message_cb(int parameter_2,double parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_7 = 1;
	float float_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_8 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_6 = 1;
	long long_7 = 1;
	double double_8 = 1;
	char char_7 = 1;
	double double_9 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_8 = 1;
	float_2 = float_1 + float_1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 + float_1;
	char_3 = char_1 * char_2;
	int_1 = int_3 + int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	float_1 = float_1 * float_2;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "G") > 0)
	{
	}
	float_1 = float_3;
	char_2 = char_3;
	int_2 = int_4 + int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	short_1 = short_1 * short_2;
	int_6 = int_5 + int_6;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	float_1 = float_1;
	double_1 = double_1;
	double_1 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_3;
	char_2 = char_1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_3 = long_2 * long_3;
		long_1 = long_4 * long_2;
	}
	long_2 = long_4 + long_5;
	double_5 = double_3 * double_4;
	int_7 = int_3 + int_7;
	float_4 = float_3 * float_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	float_1 = float_2 * float_2;
	char_4 = char_4 + char_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float_1 = float_3 + float_1;
		v_termpty_write(char_6,unsigned_int_2,int_3);

		int_8 = int_7;
		long_2 = long_2;
	}
	double_7 = double_6 + double_3;
	int_6 = int_1 * int_6;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	double_2 = double_4 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_6 = int_1 * int_5;
	long_3 = long_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float float_5 = 1;
		long_6 = long_2 * long_1;
		char_1 = char_2;
		float_3 = float_3 * float_5;
	}
	long_7 = long_7 * long_5;
	int_1 = int_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_4 + int_6;
	double_6 = double_6;
	char_3 = char_1 * char_3;
	double_8 = double_4;
	char_3 = char_2 + char_1;
	char_5 = char_7 * char_1;
	int_2 = int_4;
	int_8 = int_2 + int_8;
	double_4 = double_3 + double_5;
	double_9 = double_1 * double_9;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	int_7 = int_4 + int_5;
	float_6 = float_1 + float_2;
	double_4 = double_3 * double_9;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float float_7 = 1;
		int_4 = int_4;
		double_5 = double_8 * double_8;
		float_7 = float_2;
	}
	int_8 = int_1 * int_5;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	char_5 = char_1 + char_7;
	unsigned_int_2 = unsigned_int_4;
	double_8 = double_9 + double_4;
	double_9 = double_5;
	double_2 = double_9;
	float_3 = float_4 + float_2;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		unsigned int unsigned_int_6 = 1;
		long long_8 = 1;
		unsigned_int_6 = unsigned_int_3 * unsigned_int_3;
		long_6 = long_8 + long_6;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_6;
	}
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_7 = unsigned_int_3 + unsigned_int_2;
	char_7 = char_8 * char_2;
	return short_1;
}
void v_termpty_write( char parameter_1,unsigned int parameter_2,int parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = float_1 + float_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
}
void v__block_edje_signal_cb(long parameter_2,double parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v_termpty_write(char_1,unsigned_int_2,int_1);

	short_2 = short_1 + short_1;
	short_2 = short_2 * short_1;
	double_1 = double_1;
	float_2 = float_1 * float_1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int_2 = int_2 * int_2;
		float_3 = float_3 * float_1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
		int_3 = int_2 + int_1;
		double_1 = double_1 + double_1;
		float_1 = float_3 * float_1;
		double_1 = double_2 + double_1;
		int_3 = int_4;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		char_2 = char_3;
		char_5 = char_4 + char_1;
		int_1 = int_3;
	}
}
void v_termpty_block_chid_update( unsigned int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
	}
	int_2 = int_1 * int_1;
}
float v__block_edje_cmds( long parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	v_termpty_block_chid_update(unsigned_int_1,double_1);

	v__block_edje_signal_cb(long_1,double_2,int_1);

	short_1 = v__block_edje_message_cb(int_1,double_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
double v_homedir_get( char parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	long_1 = long_1 + long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 + int_1;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 * double_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	return double_2;
}
long v__block_edje_activate( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	char_1 = char_1 + char_2;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		float float_1 = 1;
		double_2 = double_2 * double_1;
		if(1)
		{
			unsigned_int_1 = v_config_theme_path_default_get(double_2);

			float_1 = float_1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
			float_1 = float_1 + float_1;
		}
	}
	char_2 = char_1 * char_2;
	int_3 = int_2 * int_3;
	double_3 = v_homedir_get(char_2,unsigned_int_2);

	int_4 = int_1 + int_3;
	float_2 = v__block_edje_cmds(long_1,unsigned_int_1,short_2,int_1);

	int_3 = int_4;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	}
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	return long_1;
}
unsigned int v__block_activate( double parameter_1,int parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_2;
	long_4 = long_2 + long_3;
	char controller4vul_1610[2];
	fgets(controller4vul_1610 ,2 ,stdin);
	if( strcmp( controller4vul_1610, "C") < 0)
	{
		short_1 = v__block_media_activate(double_1,char_1,uni_para);

	}
	char_1 = char_1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		long_2 = long_3 * long_3;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	return unsigned_int_1;
}
unsigned int v_termpty_block_get( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	return unsigned_int_1;
}
int v_termpty_block_id_get( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	long_1 = long_1 + long_2;
	char_2 = char_1 + char_2;
	return int_1;
}
void v_termpty_backscroll_adjust( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "8X") < 0)
	{
	}
	int_1 = int_2;
	long_1 = v_verify_beacon(long_1,int_3);

	double_1 = double_1 + double_1;
}
short v__smart_apply( short parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	char char_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	short short_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_6 = 1;
	int int_6 = 1;
	short short_5 = 1;
	float float_3 = 1;
	long long_7 = 1;
	double double_7 = 1;
	float float_4 = 1;
	float float_6 = 1;
	char char_4 = 1;
	short short_6 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_8 = 1;
	float float_7 = 1;
	long long_8 = 1;
	int int_7 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_8 = 1;
	char char_9 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_7 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	float float_8 = 1;
	unsigned int unsigned_int_12 = 1;
	int int_11 = 1;
	float float_9 = 1;
	short short_8 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_14 = 1;
	unsigned int unsigned_int_15 = 1;
	float float_13 = 1;
	char_1 = char_2;
	double_2 = double_1 * double_1;
	long_2 = long_1 + long_1;
	float_1 = float_1 + float_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_2 * double_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	short_1 = short_1 + short_1;
	short_1 = short_2 * short_2;
	long_3 = long_3 + long_2;
	short_3 = short_3 * short_2;
	char_3 = char_3 + char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = float_1 * float_2;
		char_2 = char_3 * char_1;
		unsigned_int_7 = unsigned_int_2 + unsigned_int_6;
		int_4 = int_1 + int_3;
		if(1)
		{
			int_2 = int_2;
		}
		short_2 = short_3 * short_1;
		if(1)
		{
			double_1 = double_2 * double_3;
		}
		double_1 = double_3 + double_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char controller4vul_1607[3];
			fgets(controller4vul_1607 ,3 ,stdin);
			if( strcmp( controller4vul_1607, "7(") < 0)
			{
				char controller4vul_1608[3];
				fgets(controller4vul_1608 ,3 ,stdin);
				if( strcmp( controller4vul_1608, "}j") > 0)
				{
					char controller4vul_1609[3];
					fgets(controller4vul_1609 ,3 ,stdin);
					if( strcmp( controller4vul_1609, "0c") > 0)
					{
						unsigned_int_7 = v__block_activate(double_4,int_1,uni_para);

						double_5 = double_3 * double_1;
					}
					long_1 = long_2 * long_4;
				}
				short_3 = short_3;
				if(1)
				{
					double_2 = double_3 + double_4;
				}
				if(1)
				{
					short_1 = short_3 * short_4;
				}
				long_6 = long_3 * long_5;
				long_2 = long_3 * long_5;
				double_5 = double_6;
				long_1 = long_1 + long_5;
				short_2 = short_4;
				int_2 = int_3 * int_3;
			}
			if(1)
			{
				int int_5 = 1;
				float float_5 = 1;
				char char_5 = 1;
				int_1 = int_5;
				int_2 = int_3 * int_5;
				if(1)
				{
					if(1)
					{
						double_1 = double_6 * double_5;
					}
					int_1 = int_6;
					short_3 = short_2;
					short_1 = short_5 + short_5;
					float_3 = float_1 + float_3;
					unsigned_int_4 = unsigned_int_4;
					long_5 = long_5 + long_7;
					double_7 = double_5;
					int_1 = int_5 * int_1;
					unsigned_int_4 = unsigned_int_6 * unsigned_int_4;
					float_6 = float_4 + float_5;
					char_4 = char_2 + char_2;
					double_7 = double_3 + double_4;
					if(1)
					{
						unsigned_int_1 = unsigned_int_5;
						short_5 = short_4 + short_4;
						char_5 = char_1 * char_3;
						short_3 = short_6 + short_4;
						double_2 = double_2 + double_1;
					}
				}
				if(1)
				{
					if(1)
					{
						if(1)
						{
							char_3 = char_6 + char_1;
						}
						char_6 = char_7;
					}
					unsigned_int_6 = unsigned_int_7 + unsigned_int_1;
					if(1)
					{
						double_3 = double_5 + double_2;
					}
					if(1)
					{
						char_8 = char_4 + char_5;
					}
					float_5 = float_2 + float_4;
					unsigned_int_8 = unsigned_int_4 * unsigned_int_5;
					long_5 = long_4 * long_1;
					double_7 = double_6 + double_7;
					double_4 = double_3;
					unsigned_int_4 = unsigned_int_1 + unsigned_int_8;
					if(1)
					{
						double_4 = double_6 * double_7;
					}
				}
				if(1)
				{
					int int_10 = 1;
					double_6 = double_8;
					unsigned_int_3 = unsigned_int_7 * unsigned_int_5;
					unsigned_int_2 = unsigned_int_8 + unsigned_int_6;
					char_6 = char_6 + char_7;
					short_3 = short_2;
					char_4 = char_1 * char_7;
					if(1)
					{
						float_6 = float_7 * float_7;
						float_1 = float_4 + float_1;
					}
					if(1)
					{
						double_6 = double_7 * double_3;
						long_8 = long_4 * long_1;
					}
					if(1)
					{
						unsigned_int_6 = unsigned_int_6 + unsigned_int_1;
					}
					if(1)
					{
						if(1)
						{
							int_4 = int_4 + int_7;
						}
						if(1)
						{
							unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
						}
					}
					if(1)
					{
						float_6 = float_3;
					}
					if(1)
					{
						double_10 = double_9 + double_3;
					}
					if(1)
					{
						int_2 = int_8 * int_7;
						unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
						double_9 = double_6 * double_10;
						int_4 = int_1 * int_2;
						double_8 = double_6 + double_5;
						unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
						char_1 = char_1 + char_9;
					}
					if(1)
					{
						unsigned_int_3 = unsigned_int_4 + unsigned_int_8;
					}
					if(1)
					{
						int_9 = int_9 + int_9;
					}
					if(1)
					{
						if(1)
						{
							int_8 = int_4 + int_1;
						}
						unsigned_int_5 = unsigned_int_9 + unsigned_int_5;
					}
					short_7 = short_1 * short_7;
					double_11 = double_11 * double_9;
					double_7 = double_4 * double_5;
					double_6 = double_5 + double_11;
					if(1)
					{
						unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
						unsigned_int_11 = unsigned_int_10 * unsigned_int_11;
					}
					if(1)
					{
						double_3 = double_11;
						float_8 = float_8 * float_4;
					}
					unsigned_int_12 = unsigned_int_1 + unsigned_int_6;
					int_11 = int_10 * int_1;
					char_8 = char_8 + char_2;
					unsigned_int_3 = unsigned_int_11 * unsigned_int_5;
					if(1)
					{
						short_7 = short_3;
					}
				}
			}
		}
		long_7 = long_8;
		if(1)
		{
			float_4 = float_9 + float_2;
		}
	}
	double_7 = double_8 * double_1;
	if(1)
	{
		int int_12 = 1;
		unsigned_int_6 = unsigned_int_12 * unsigned_int_12;
		float_6 = float_4 + float_6;
		long_4 = long_6;
		unsigned_int_2 = unsigned_int_7 * unsigned_int_1;
		int_12 = int_6 * int_7;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned int unsigned_int_13 = 1;
				long_1 = long_6;
				int_8 = int_6;
				int_4 = int_2 + int_12;
				if(1)
				{
					int_6 = int_3 + int_9;
				}
				unsigned_int_7 = unsigned_int_12 * unsigned_int_11;
				if(1)
				{
					if(1)
					{
						float_9 = float_9 + float_7;
						double_10 = double_4 + double_2;
						char_9 = char_9;
					}
				}
				if(1)
				{
					float float_10 = 1;
					char_3 = char_6 + char_6;
					float_10 = float_2 * float_3;
				}
				long_4 = long_1 + long_8;
				long_7 = long_2 + long_1;
				int_12 = int_9 + int_1;
				short_8 = short_7 * short_4;
				double_6 = double_12 * double_10;
				unsigned_int_11 = unsigned_int_7 + unsigned_int_13;
				double_2 = double_2 + double_2;
				float_8 = float_7 * float_3;
				unsigned_int_12 = unsigned_int_2;
				unsigned_int_10 = unsigned_int_10 + unsigned_int_2;
				char_8 = char_8 * char_9;
				if(1)
				{
					float float_11 = 1;
					long long_9 = 1;
					float float_12 = 1;
					float_3 = float_1 + float_7;
					double_9 = double_10 * double_3;
					float_6 = float_11;
					short_3 = short_4 + short_3;
					int_6 = int_12 * int_11;
					long_9 = long_6 + long_4;
					float_6 = float_6 + float_12;
					unsigned_int_14 = unsigned_int_10;
					double_3 = double_6 * double_8;
					long_2 = long_1 + long_4;
				}
				double_4 = double_2 + double_7;
				if(1)
				{
					if(1)
					{
						double_8 = double_5 * double_12;
						double_11 = double_7 * double_8;
					}
				}
			}
			double_10 = double_8;
		}
		long_1 = long_7 * long_2;
		unsigned_int_6 = unsigned_int_7;
	}
	double_10 = double_5 + double_2;
	if(1)
	{
		unsigned_int_9 = unsigned_int_8 * unsigned_int_4;
		char_3 = char_3 + char_9;
		unsigned_int_14 = unsigned_int_15 + unsigned_int_10;
	}
	if(1)
	{
		char_6 = char_7 + char_6;
	}
	if(1)
	{
		short short_9 = 1;
		short_9 = short_7;
	}
	long_2 = long_4;
	float_6 = float_13 + float_4;
	short_6 = short_7;
	if(1)
	{
		long long_10 = 1;
		int int_13 = 1;
		long_1 = long_7 + long_8;
		short_6 = short_7;
		long_7 = long_1 + long_5;
		double_12 = double_10 * double_2;
		long_10 = long_3;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
		if(1)
		{
			short_4 = short_1 + short_6;
			unsigned_int_4 = unsigned_int_12;
		}
		double_1 = double_10;
		unsigned_int_10 = unsigned_int_12 * unsigned_int_11;
		short_6 = short_5;
		unsigned_int_2 = unsigned_int_12 * unsigned_int_2;
		int_4 = int_2 + int_13;
		short_7 = short_8;
		double_3 = double_5 * double_1;
		short_3 = short_3 + short_1;
		if(1)
		{
			double_3 = double_9 + double_3;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_11 = unsigned_int_15 * unsigned_int_15;
			}
			if(1)
			{
				double_9 = double_12 + double_10;
			}
			if(1)
			{
				unsigned_int_9 = unsigned_int_8 + unsigned_int_3;
			}
			if(1)
			{
				short short_10 = 1;
				short_10 = short_1 + short_6;
			}
			if(1)
			{
				unsigned_int_9 = unsigned_int_7 * unsigned_int_6;
			}
		}
		char_6 = char_2 * char_4;
	}
	if(1)
	{
		float_13 = float_2 * float_3;
	}
	if(1)
	{
		double double_13 = 1;
		double_13 = double_8 + double_11;
	}
	long_8 = long_6 + long_8;
	return short_6;
}
float v__smart_cb_change(int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	short_1 = v__smart_apply(short_1,uni_para);

	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_2;
	float_1 = float_1 + float_2;
	double_2 = double_2 + double_1;
	double_3 = double_3 * double_1;
	return float_3;
}
unsigned int v__smart_update_queue( float parameter_1,char parameter_2,int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char controller4vul_1606[3];
	fgets(controller4vul_1606 ,3 ,stdin);
	if( strcmp( controller4vul_1606, "Ol") > 0)
	{
		float_1 = v__smart_cb_change(uni_para);

	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_3;
}
void v__lost_selection_reset_job()
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	char_3 = char_1 * char_2;
	long_1 = long_1 * long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = v__lost_selection(long_1,-1 );

		long_2 = long_2 + long_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
}
int v__lost_selection(long parameter_2,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char_1 = char_1;
	int_2 = int_1 * int_1;
	int_2 = int_3 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	char controller4vul_1604[3];
	fgets(controller4vul_1604 ,3 ,stdin);
	if( strcmp( controller4vul_1604, "g`") > 0)
	{
		int int_4 = 1;
		char controller4vul_1605[2];
		fgets(controller4vul_1605 ,2 ,stdin);
		if( strcmp( controller4vul_1605, "#") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned_int_2 = v__smart_update_queue(float_1,char_2,uni_para);

			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			char controller_1[2];
			fgets(controller_1 ,2 ,stdin);
			if( strcmp( controller_1, "<") > 0)
			{
				unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
			}
			double_2 = double_1 * double_1;
		}
		int_4 = int_1 + int_2;
	}
	if(1)
	{
		double double_3 = 1;
		float float_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			float float_3 = 1;
			float_1 = float_3;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		}
		double_3 = double_3 + double_3;
		float_2 = float_4 + float_4;
		char_1 = char_1 * char_1;
		short_1 = short_1 * short_2;
	}
	return int_2;
}
unsigned int v__take_selection_text( short parameter_1,long parameter_2,unsigned int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	double_1 = double_1;
	double_2 = double_1;
	double_4 = double_3 * double_1;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_1 = unsigned_int_5;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_2;
	char controller4vul_1603[2];
	fgets(controller4vul_1603 ,2 ,stdin);
	if( strcmp( controller4vul_1603, "G") < 0)
	{
		int_1 = v__lost_selection(long_1,uni_para);

		double_4 = double_2 * double_1;
	}
	int_2 = int_1 * int_1;
	return unsigned_int_5;
}
void v__cb_ctxp_link_content_copy(char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = v__take_selection_text(short_1,long_1,unsigned_int_1,uni_para);

	short_2 = short_2 * short_2;
	double_1 = double_1 * double_2;
	long_1 = long_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_2;
	int_1 = int_1 + int_2;
	int_2 = int_1 * int_2;
	int_3 = int_2 + int_2;
}
void v_ty_sb_free()
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char_2 = char_1 * char_1;
	long_1 = long_1;
	char_4 = char_3 + char_2;
}
char v_ty_sb_steal_buf( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		int int_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		int_1 = int_1;
	}
	int_3 = int_2 + int_2;
	float_1 = float_1;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1;
	double_4 = double_3 * double_1;
	return char_1;
}
int v_codepoint_to_utf8( float parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		short short_1 = 1;
		long long_3 = 1;
		int_2 = int_2 * int_2;
		short_1 = short_1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		long long_4 = 1;
		double_1 = double_2;
		short_3 = short_2 * short_2;
		long_5 = long_4 * long_4;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		float float_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		float_2 = float_3;
		long_5 = long_2 + long_1;
		int_2 = int_1 * int_3;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double_3 = double_3 * double_2;
		double_1 = double_4 * double_5;
		int_2 = int_2 + int_3;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		double_2 = double_3 * double_3;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		double double_6 = 1;
		int int_4 = 1;
		double_3 = double_6 + double_4;
		float_1 = float_1 + float_2;
		double_1 = double_1 * double_4;
		int_3 = int_3 + int_3;
		int_3 = int_4 + int_1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
		int_4 = int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
	}
	return int_1;
}
void v_ty_sb_spaces_rtrim( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_2;
	long_1 = long_1 + long_1;
	long_1 = long_2 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		short short_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_1;
		short_1 = short_1 * short_1;
		long_1 = long_2 * long_1;
		char_2 = char_2;
	}
}
int v_ty_sb_add( long parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_1 * double_2;
		double_3 = double_4;
		int_2 = int_2;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if(remainder_check(controller_2,100,2))
		{
		}
		double_5 = double_3 * double_4;
		float_2 = float_1 * float_1;
	}
	int_3 = int_1 + int_1;
	short_2 = short_1 * short_1;
	long_2 = long_1 * long_1;
	return int_3;
}
double v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1 + char_2;
	int_2 = int_1 * int_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	double_3 = double_1 * double_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		double_3 = double_2 * double_2;
	}
	short_1 = short_1 * short_2;
	if(1)
	{
		long_3 = long_3 * long_3;
		long_3 = v_verify_beacon(long_3,int_3);

		short_4 = short_2 * short_3;
	}
	double_3 = double_2;
	float_1 = float_1 + float_2;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		double double_4 = 1;
		long long_4 = 1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
		int_5 = int_3 + int_4;
		double_5 = double_4 * double_1;
		short_3 = short_4 * short_4;
		long_2 = long_4 * long_2;
		float_2 = float_2 * float_2;
	}
	double_6 = double_3;
	return double_5;
}
float v_termpty_cellrow_get( char parameter_1,int parameter_2,float parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
		}
		short_1 = short_1;
	}
	if(1)
	{
	}
	return float_1;
	double_1 = v__termpty_cellrow_from_beacon_get(int_1,int_1,float_2);

}
void v_termio_selection_get( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6,int parameter_7)
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	float float_4 = 1;
	int int_5 = 1;
	int_1 = v_ty_sb_add(long_1,float_1,unsigned_int_1);

	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			v_termpty_backlog_unlock();

			int_3 = int_2 * int_3;
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			double double_3 = 1;
			double_1 = double_3 * double_4;
		}
		if(1)
		{
			short_1 = short_2;
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
						float_2 = float_1 * float_1;
					}
					if(1)
					{
						double double_5 = 1;
						double_1 = double_5;
					}
				}
				if(1)
				{
					v_ty_sb_spaces_rtrim(float_3);

					double_4 = double_1 + double_6;
				}
			}
		}
		if(1)
		{
			char char_2 = 1;
			short short_3 = 1;
			v_ty_sb_free();

			char_2 = char_1 * char_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double double_7 = 1;
				if(1)
				{
					double_6 = double_4 + double_7;
				}
				if(1)
				{
					double_4 = double_7;
				}
				if(1)
				{
					char_1 = v_ty_sb_steal_buf(float_3);

					unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				}
				if(1)
				{
					int int_4 = 1;
					int_4 = int_1 + int_3;
				}
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned_int_3 = unsigned_int_3;
				}
			}
			int_2 = v_codepoint_to_utf8(float_4,char_1);

			short_3 = short_2 * short_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
	}
	v_termpty_backlog_lock();

	float_1 = v_termpty_cellrow_get(char_1,int_5,float_3);

}
long v__cb_ctxp_link_open(char parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double_1 = v__activate_link(short_1,int_1);

	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_1;
	double_2 = double_1 + double_1;
	double_1 = double_1 * double_1;
	short_2 = short_1 * short_1;
	return long_1;
}
long v__should_inline()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	unsigned_int_4 = v_termio_config_get(long_1);

	short_1 = short_1 * short_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "<o") > 0)
	{
	}
	return long_1;
}
unsigned int v_link_is_email( float parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
short v_link_is_protocol( long parameter_1)
{
	short short_1 = 1;
	return short_1;
}
double v_link_is_url( char parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	return double_1;
	short_1 = v_link_is_protocol(long_1);

}
double v__activate_link( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_4 = 1;
	float float_5 = 1;
	double double_5 = 1;
	float float_7 = 1;
	char char_6 = 1;
	float float_9 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_10 = 1;
	char_1 = char_1 + char_1;
	double_1 = double_1 + double_1;
	double_3 = double_2 + double_1;
	long_3 = long_1 + long_2;
	int_2 = int_1 + int_2;
	char_4 = char_2 + char_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_1;
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
			float_2 = float_1 * float_1;
		}
		if(1)
		{
			long_3 = long_3;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_3 + int_4;
	}
	if(1)
	{
		float float_3 = 1;
		float_4 = float_1 * float_3;
		unsigned_int_1 = unsigned_int_3;
	}
	short_3 = short_2;
	if(1)
	{
	}
	if(1)
	{
		float float_6 = 1;
		long_3 = long_4;
		float_6 = float_5 + float_2;
		if(1)
		{
			double double_4 = 1;
			double_3 = v_media_src_type_get(short_3);

			double_2 = double_1 * double_4;
		}
		if(1)
		{
			double_1 = double_3 + double_3;
		}
		short_1 = short_3 * short_2;
		if(1)
		{
			double_2 = double_1 * double_5;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		float_2 = float_7 * float_2;
		if(1)
		{
			char char_5 = 1;
			char_2 = char_5 * char_5;
			if(1)
			{
				if(1)
				{
					short_1 = short_3;
					double_2 = double_1 + double_3;
				}
				if(1)
				{
					short_3 = short_2 * short_1;
					double_3 = v_link_is_url(char_6);

					unsigned_int_1 = unsigned_int_1;
				}
			}
			if(1)
			{
				long long_5 = 1;
				if(1)
				{
					if(1)
					{
						long_1 = long_3 * long_1;
					}
				}
				if(1)
				{
					if(1)
					{
						char_5 = char_2 * char_5;
					}
				}
				if(1)
				{
					if(1)
					{
						float float_8 = 1;
						float_4 = float_7 + float_8;
					}
				}
				long_5 = long_1 + long_5;
				char_3 = char_5 * char_5;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float_9 = float_4;
		unsigned_int_4 = unsigned_int_3;
		if(1)
		{
			double_3 = double_2 + double_3;
			if(1)
			{
				double double_6 = 1;
				double double_7 = 1;
				unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
				double_3 = double_6 * double_7;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						char char_7 = 1;
						char_1 = char_7 * char_1;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned int unsigned_int_6 = 1;
						unsigned_int_2 = v_link_is_email(float_5);

						unsigned_int_4 = unsigned_int_4 + unsigned_int_6;
					}
				}
				if(1)
				{
					if(1)
					{
						double_1 = double_1 * double_5;
					}
				}
				long_1 = long_4 + long_3;
				float_7 = float_5 * float_10;
			}
		}
	}
	if(1)
	{
		long_3 = v__should_inline();

		float_10 = float_9 * float_1;
	}
	unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_1 = unsigned_int_7 + unsigned_int_2;
	}
	return double_5;
}
void v__cb_ctxp_link_preview(char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 * long_1;
	double_1 = v__activate_link(short_1,int_1);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	int_3 = int_2 + int_2;
	double_2 = double_1 + double_1;
	char_2 = char_1 + char_1;
}
float v__is_fmt( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
		if(1)
		{
			int int_3 = 1;
			int_2 = int_3 * int_2;
		}
		if(1)
		{
		}
	}
	return float_1;
}
double v_media_src_type_get( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		short_1 = short_2 + short_2;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = v__is_fmt(char_2,double_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return double_2;
}
double v__mouse_in_selection( short parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	long_1 = long_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_1;
	unsigned_int_4 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_5 = 1;
		int_2 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_5;
	}
	if(1)
	{
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, " D") > 0)
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
float v__smart_xy_to_cursor( unsigned int parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 * long_2;
	int_1 = int_1 + int_1;
	int_2 = int_2 * int_1;
	int_3 = int_3 + int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		long_2 = long_1;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	return float_1;
}
unsigned int v__cb_link_down(long parameter_2,float parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
		int_1 = int_1;
		int_1 = int_2 * int_2;
	}
	char controller4vul_1601[3];
	fgets(controller4vul_1601 ,3 ,stdin);
	if( strcmp( controller4vul_1601, "Gq") > 0)
	{
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_8 = 1;
		char char_2 = 1;
		double double_4 = 1;
		short short_6 = 1;
		double_3 = double_2 + double_3;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_4;
		char controller4vul_1602[3];
		fgets(controller4vul_1602 ,3 ,stdin);
		if( strcmp( controller4vul_1602, "(Y") > 0)
		{
			int int_3 = 1;
			v__cb_ctxp_link_content_copy(char_1,uni_para);

			int_3 = int_1 * int_2;
			short_3 = short_1 * short_3;
			if(1)
			{
			}
		}
		double_2 = double_3 * double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				long_3 = long_1 + long_2;
			}
		}
		float_3 = float_1 * float_2;
		double_2 = double_2;
		if(1)
		{
			double_2 = double_3 + double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			unsigned_int_6 = unsigned_int_7;
		}
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			short_5 = short_4 * short_5;
		}
		unsigned_int_6 = unsigned_int_8;
		float_1 = float_1 * float_3;
		char_1 = char_2 * char_1;
		double_4 = double_1 + double_4;
		short_3 = short_6;
	}
	return unsigned_int_6;
}
void v_main_term_popup_exists( int parameter_1)
{
}
short v__update_link( char parameter_1,char parameter_2,char parameter_3,double parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int_3 = int_1 * int_2;
	double_2 = double_1 + double_2;
	float_2 = float_1 + float_2;
	char_3 = char_1 + char_2;
	char_3 = char_4 + char_5;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		float_3 = float_1 + float_3;
	}
	if(1)
	{
	}
	double_2 = double_2 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int_4 = int_2 + int_2;
		int_2 = int_4;
		short_2 = short_1 + short_2;
		char controller4vul_1599[3];
		fgets(controller4vul_1599 ,3 ,stdin);
		if( strcmp( controller4vul_1599, "fh") > 0)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
			char controller4vul_1600[2];
			fgets(controller4vul_1600 ,2 ,stdin);
			if( strcmp( controller4vul_1600, "[") > 0)
			{
				unsigned_int_2 = v__cb_link_down(long_1,float_3,uni_para);

				double_2 = double_3 * double_2;
			}
			if(1)
			{
				short short_3 = 1;
				short_2 = short_3 + short_3;
			}
		}
		if(1)
		{
			int_1 = int_4;
			int_3 = int_2 + int_4;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1;
			double_4 = double_2 + double_4;
		}
		double_1 = double_1 * double_2;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
		int_3 = int_1 * int_3;
		double_1 = double_2 * double_2;
		double_4 = double_1 + double_5;
		double_7 = double_5 + double_6;
		if(1)
		{
			unsigned_int_5 = unsigned_int_5;
		}
	}
	return short_1;
}
unsigned int v__remove_links( unsigned int parameter_1,float parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_1598[3];
	fgets(controller4vul_1598 ,3 ,stdin);
	if( strcmp( controller4vul_1598, "t{") < 0)
	{
		int int_1 = 1;
		short_1 = v__update_link(char_1,char_1,char_1,double_1,uni_para);

		double_1 = double_1;
		int_2 = int_1 * int_1;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_2;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	char_2 = char_2 + char_2;
	double_2 = double_2;
	return unsigned_int_1;
}
double v__sel_set( float parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		char_3 = char_1 * char_2;
		long_1 = long_2 + long_1;
		long_4 = long_3 + long_3;
	}
	return double_1;
}
int v_termio_scroll_get( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	return int_1;
}
void v_miniview_position_offset( double parameter_1,int parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		short_1 = short_2;
	}
	if(1)
	{
		int_1 = v_termio_scroll_get(short_3);

		short_1 = short_3 * short_3;
		int_1 = int_2 + int_1;
		if(1)
		{
			double double_3 = 1;
			short_1 = short_3 + short_2;
			double_1 = double_3;
			short_1 = short_1 * short_3;
		}
		if(1)
		{
			short_3 = short_3 + short_3;
			double_1 = double_2;
			char_1 = char_1 * char_1;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			short short_4 = 1;
			double_4 = double_1;
			short_4 = short_1 * short_1;
			if(1)
			{
				char char_2 = 1;
				char_1 = char_1 + char_2;
			}
			if(1)
			{
				int int_3 = 1;
				int_3 = int_2;
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
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_2;
	int_1 = int_1 * int_1;
	short_2 = short_1 * short_2;
	if(1)
	{
		int_1 = int_2 * int_1;
		if(1)
		{
			int_1 = int_1 * int_2;
		}
		int_2 = int_2 + int_1;
	}
	double_1 = double_3 + double_2;
	char controller4vul_1595[2];
	fgets(controller4vul_1595 ,2 ,stdin);
	if( strcmp( controller4vul_1595, "&") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		char_2 = char_1 * char_1;
		long_1 = long_1;
		double_4 = double_4 + double_3;
		if(1)
		{
			int_1 = int_2 + int_3;
		}
		char controller4vul_1596[3];
		fgets(controller4vul_1596 ,3 ,stdin);
		if( strcmp( controller4vul_1596, "wA") > 0)
		{
			long long_2 = 1;
			float float_1 = 1;
			long_2 = long_1 * long_1;
			int_2 = int_3 + int_2;
			double_5 = double_5 + double_3;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			float_1 = float_1 + float_1;
			char controller4vul_1597[3];
			fgets(controller4vul_1597 ,3 ,stdin);
			if( strcmp( controller4vul_1597, "AL") > 0)
			{
				unsigned_int_1 = v__remove_links(unsigned_int_1,float_2,uni_para);

				int_2 = int_2;
			}
		}
		if(1)
		{
			double_6 = double_3 + double_5;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			double_6 = double_2;
			unsigned_int_5 = unsigned_int_4;
		}
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "vE") < 0)
	{
		if(1)
		{
			double double_7 = 1;
			double_7 = double_5 * double_4;
		}
	}
}
long v_termpty_save_new( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	char char_5 = 1;
	long long_1 = 1;
	char_1 = char_1 + char_1;
	v_termpty_save_free(double_1);

	char_4 = char_2 * char_3;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	char_5 = char_3;
	return long_1;
}
double v_termpty_save_expand( long parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	double_2 = double_2;
	int_1 = int_2;
	return double_3;
}
double v__termpty_cell_is_empty()
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
double v_termpty_line_length( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double_1 = v__termpty_cell_is_empty();

	char_1 = char_1 * char_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_1;
		if(1)
		{
		}
	}
	return double_2;
}
long v_verify_beacon( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
void v_termpty_text_save_top( double parameter_1,unsigned int parameter_2,double parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	float float_1 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	double double_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long_1 = v_verify_beacon(long_1,int_1);

	char_3 = char_1 * char_2;
	long_3 = long_2 + long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_2;
	char_3 = char_4 + char_3;
	int_2 = int_2 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		char char_5 = 1;
		double_3 = v_termpty_line_length(double_4,short_1);

		char_1 = char_5;
		if(1)
		{
			double_4 = double_3 + double_4;
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_1 = short_2;
			double_5 = double_5 * double_3;
			v_termpty_backlog_lock();

			long_1 = long_1;
			v_termpty_backlog_unlock();

			short_3 = short_1 * short_1;
		}
	}
	float_1 = float_1 + float_1;
	long_4 = v_termpty_save_new(unsigned_int_1,int_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
	}
	long_5 = long_1;
	int_3 = int_2 * int_1;
	if(1)
	{
		double_1 = double_2 + double_4;
	}
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_5 = unsigned_int_4;
	int_1 = int_1 * int_4;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_4 * double_6;
		double_7 = double_1 + double_5;
	}
	int_5 = int_5 + int_6;
	double_7 = v_termpty_save_expand(long_3,int_5,float_1);

}
void v_termpty_text_scroll( int parameter_1,unsigned int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	int_3 = int_2;
	unsigned_int_1 = unsigned_int_2;
	char controller4vul_1593[2];
	fgets(controller4vul_1593 ,2 ,stdin);
	if( strcmp( controller4vul_1593, "n") > 0)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		char controller4vul_1594[2];
		fgets(controller4vul_1594 ,2 ,stdin);
		if( strcmp( controller4vul_1594, "Y") > 0)
		{
			long long_1 = 1;
			v_termio_scroll(float_1,int_4,int_1,int_5,uni_para);

			long_2 = long_1 * long_2;
		}
		double_2 = double_1 + double_1;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 + char_3;
		}
	}
	if(1)
	{
		double double_3 = 1;
		char char_4 = 1;
		double_2 = double_1 * double_3;
		char_1 = char_4 + char_1;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_2 + float_3;
		}
		int_3 = int_3 * int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_3 = 1;
			double double_4 = 1;
			long_2 = long_3;
			double_3 = double_4 + double_2;
			short_2 = short_2 + short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		}
	}
}
void v_termpty_text_scroll_test( float parameter_1,int parameter_2,int uni_para)
{
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_1;
	char controller4vul_1591[3];
	fgets(controller4vul_1591 ,3 ,stdin);
	if( strcmp( controller4vul_1591, "0p") > 0)
	{
		double double_1 = 1;
		double_1 = double_1 * double_2;
		char controller4vul_1592[2];
		fgets(controller4vul_1592 ,2 ,stdin);
		if( strcmp( controller4vul_1592, "G") > 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			short short_2 = 1;
			double double_3 = 1;
			v_termpty_text_scroll(int_1,unsigned_int_1,uni_para);

			char_2 = char_1 * char_2;
			short_2 = short_2;
			double_2 = double_1 + double_3;
		}
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_5 = double_4 * double_2;
		long_1 = long_1 * long_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
}
float v__cursor_to_start_of_line( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return float_1;
}
char v__tab_forward( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
int v__handle_cursor_control( int parameter_1,short parameter_2)
{
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	long long_5 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	if(1)
	{
		long long_1 = 1;
		long_3 = long_1 + long_2;
	}
	long_3 = long_2 + long_3;
	double_1 = double_1 * double_1;
	v_termpty_text_scroll_test(float_1,int_1,-1 );

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_4 * long_2;
	int_2 = int_1;
	long_5 = long_5 * long_2;
	int_2 = int_3;
	char_1 = v__tab_forward(double_1,int_1);

	float_2 = v__cursor_to_start_of_line(unsigned_int_2);

	int_1 = int_4 + int_1;
	if(1)
	{
		int int_6 = 1;
		int_5 = int_6;
	}
	short_1 = short_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	char_3 = char_2 + char_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
		double_2 = double_2;
		unsigned_int_5 = unsigned_int_7 + unsigned_int_2;
	}
	double_1 = double_2 + double_3;
	return int_5;
}
int v_termpty_handle_seq( long parameter_1,int parameter_2,double parameter_3,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_4 = 1;
	float_1 = float_1 + float_1;
	char controller4vul_1588[2];
	fgets(controller4vul_1588 ,2 ,stdin);
	if( strcmp( controller4vul_1588, "P") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		v_termpty_text_append(double_1,double_1,int_1,uni_para);

		short_2 = short_1 + short_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_2 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int_4 = int_4 * int_4;
	}
	return int_4;
}
void v_termpty_handle_buf( long parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 + double_1;
	double_4 = double_1 * double_3;
	float_1 = float_1 + float_1;
	int_1 = int_2;
	char controller4vul_1587[2];
	fgets(controller4vul_1587 ,2 ,stdin);
	if( strcmp( controller4vul_1587, "w") > 0)
	{
		int int_3 = 1;
		int_1 = v_termpty_handle_seq(long_1,int_2,double_1,uni_para);

		int_1 = int_3 + int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
}
void v_theme_reload( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_1;
	char_1 = char_1 + char_2;
	int_2 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
}
char v_theme_reload_cb(int parameter_2,long parameter_3,char parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_5 = 1;
	v_theme_reload(double_1);

	int_1 = int_1;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	long_2 = long_1 + long_1;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2 * int_2;
	}
	return char_5;
}
void v_theme_auto_reload_enable( float parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = v_theme_reload_cb(int_1,long_1,char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
long v__cursor_shape_to_group_name( char parameter_1)
{
	long long_1 = 1;
	return long_1;
}
unsigned int v_config_theme_path_default_get( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	char_2 = char_1 + char_1;
	return unsigned_int_3;
}
short v_theme_path_get()
{
	short short_1 = 1;
	return short_1;
}
double v_config_theme_path_get( unsigned int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short_1 = v_theme_path_get();

	char_1 = char_1 * char_2;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	return double_1;
}
char v_theme_apply( float parameter_1,double parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	short_3 = short_1 * short_2;
	short_1 = short_4 + short_3;
	unsigned_int_1 = v_config_theme_path_default_get(double_1);

	long_1 = long_1 + long_2;
	short_2 = short_1;
	if(1)
	{
	}
	double_1 = double_1;
	double_1 = v_config_theme_path_get(unsigned_int_2);

	char_2 = char_1 * char_1;
	if(1)
	{
	}
	char_2 = char_1 + char_3;
	long_1 = long_3 * long_3;
	return char_3;
}
void v_termio_set_cursor_shape( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_2 = double_1 + double_1;
	double_2 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = v__cursor_shape_to_group_name(char_1);

	char_3 = char_2 * char_1;
	v_theme_auto_reload_enable(float_1);

	float_1 = float_1 * float_2;
	char_4 = v_theme_apply(float_3,double_1,unsigned_int_3);

	char_4 = char_2 * char_2;
	short_1 = short_1 * short_1;
	short_1 = short_1;
	short_1 = short_2 * short_2;
	if(1)
	{
		short short_3 = 1;
		short_2 = short_3;
		if(1)
		{
			long long_2 = 1;
			long_1 = long_2;
		}
		if(1)
		{
			char_2 = char_3;
		}
	}
}
void v_termpty_clear_tabs_on_screen( char parameter_1)
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( float parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	if(1)
	{
	}
	v_termpty_backlog_lock();

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		float float_1 = 1;
		int_2 = int_1 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			int_1 = int_1 + int_3;
		}
		v_termpty_backlog_unlock();

		float_1 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3;
	}
	char_3 = char_1 + char_2;
	v_termpty_save_free(double_1);

	int_5 = int_4 * int_2;
	char_2 = char_4 + char_1;
}
void v__ts_free()
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
}
void v_termpty_save_free( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2;
		}
		short_2 = short_1 + short_1;
	}
	v__ts_free();

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_4 = int_1 * int_3;
	float_1 = float_1 * float_2;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_termpty_backlog_unlock();

	double_2 = double_1 + double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	double_3 = double_2 + double_3;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			v_termpty_save_free(double_1);

			short_1 = short_1 * short_2;
		}
		int_2 = int_1 + int_2;
		v_termpty_backlog_size_set(float_1,short_1);

		double_1 = double_3 + double_3;
	}
	float_3 = float_2 + float_2;
	short_1 = short_3 * short_2;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	short_2 = short_2;
	v_termpty_backlog_lock();

	long_1 = long_1 + long_1;
}
void v_termpty_reset_att( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	float_2 = float_1 * float_1;
	float_1 = float_3 + float_3;
	long_2 = long_1 * long_1;
	short_1 = short_1 + short_1;
	double_2 = double_1 * double_2;
	short_3 = short_1 + short_2;
	float_3 = float_1 * float_3;
	int_4 = int_1 * int_3;
	int_4 = int_3 + int_1;
	int_6 = int_5 + int_3;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 + double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_5 = short_4 + short_3;
	long_1 = long_1;
	float_4 = float_4 + float_1;
	float_2 = float_3;
	short_3 = short_4 + short_2;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	char_2 = char_1 * char_1;
}
unsigned int v_termio_config_get( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 + float_2;
	int_2 = int_1 + int_1;
	return unsigned_int_1;
}
void v_termpty_reset_state( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_4 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_6 = 1;
	long long_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	int_3 = int_1 * int_2;
	char_3 = char_1 + char_2;
	char_3 = char_3 * char_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	long_2 = long_1 * long_1;
	double_3 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_2;
	int_2 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_7;
	short_2 = short_1 * short_1;
	long_3 = long_2;
	long_5 = long_4 * long_5;
	unsigned_int_4 = v_termio_config_get(long_1);

	v_termio_set_cursor_shape(unsigned_int_4,char_4);

	double_1 = double_2 + double_1;
	double_4 = double_2 * double_3;
	v_termpty_reset_att(short_3);

	long_5 = long_4 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_3;
	short_1 = short_4 * short_5;
	long_1 = long_3 * long_5;
	float_1 = float_2;
	short_5 = short_3 + short_3;
	v_termpty_clear_backlog(long_2);

	unsigned_int_9 = unsigned_int_8 * unsigned_int_1;
	char_6 = char_2 + char_5;
	float_2 = float_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_9;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_6 = unsigned_int_9 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	v_termpty_clear_tabs_on_screen(char_6);

	long_7 = long_3 + long_6;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_8 + unsigned_int_4;
	long_2 = long_1 + long_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		float_1 = float_3 * float_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	}
}
void v_termpty_resize_tabs( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double_3 = double_2 * double_1;
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_2 * char_3;
		}
		double_1 = double_3;
	}
	double_3 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 + int_1;
	}
}
void v__termpty_init()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	double_3 = double_3 + double_1;
	v_termpty_resize_tabs(short_1,int_4,int_3);

	char_1 = char_1 + char_2;
	int_3 = int_3 + int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_3;
	double_4 = double_5;
	int_1 = int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	v_termpty_reset_state(unsigned_int_1);

	char_5 = char_3 + char_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
}
double v__add_default_keys( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_5 = 1;
	float float_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	long long_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	long long_7 = 1;
	double_3 = double_1 + double_2;
	double_2 = double_3 * double_3;
	long_1 = long_2;
	char_1 = char_1 * char_2;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 * char_3;
	int_2 = int_1 * int_3;
	int_2 = int_3 * int_4;
	float_3 = float_1 + float_2;
	short_3 = short_1 * short_2;
	int_2 = int_1 + int_2;
	char_2 = char_3 * char_1;
	long_5 = long_3 + long_4;
	double_3 = double_3 * double_3;
	short_2 = short_3 * short_3;
	int_4 = int_3 + int_2;
	int_2 = int_5;
	int_1 = int_5 * int_4;
	float_3 = float_4 * float_1;
	double_3 = double_3 * double_4;
	float_1 = float_2 + float_4;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	long_2 = long_3 * long_1;
	int_5 = int_1 + int_6;
	float_3 = float_1 * float_4;
	int_1 = int_5 + int_2;
	float_1 = float_3;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_5 = double_4;
	long_1 = long_3 * long_6;
	long_3 = long_3 * long_4;
	char_4 = char_1 + char_2;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	char_5 = char_4;
	long_2 = long_3 + long_4;
	float_3 = float_5 + float_6;
	int_3 = int_2 + int_3;
	double_5 = double_5 * double_3;
	char_4 = char_3 + char_3;
	double_1 = double_6 + double_5;
	int_2 = int_3 + int_2;
	int_6 = int_6 + int_7;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_3;
	double_6 = double_5;
	double_2 = double_1 * double_1;
	int_4 = int_8 * int_1;
	long_7 = long_3;
	double_1 = double_3 + double_3;
	double_5 = double_6 * double_1;
	return double_5;
}
void v_colors_standard_get( int parameter_1,int parameter_2,short parameter_3,long parameter_4,short parameter_5,long parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	if(1)
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		long_1 = long_1 * long_1;
		double_1 = double_1 + double_2;
		int_3 = int_1 * int_2;
		double_1 = double_2;
		short_1 = short_1 + short_1;
		short_2 = short_1 * short_1;
		char_1 = char_1 + char_1;
	}
	float_3 = float_1 + float_2;
	float_2 = float_1 * float_3;
	long_4 = long_2 + long_3;
	float_2 = float_3 + float_1;
}
int v_config_new()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_5 = 1;
	double_2 = double_1 * double_1;
	short_2 = short_1 + short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "|") < 0)
	{
		float float_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_4 = 1;
		long long_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		float float_4 = 1;
		float float_5 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int int_7 = 1;
		int int_8 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float_1 = float_1 + float_1;
		char_1 = char_1 + char_1;
		unsigned_int_1 = unsigned_int_2;
		short_2 = short_1 * short_3;
		double_3 = double_1 * double_1;
		int_2 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		short_2 = short_3 + short_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		short_2 = short_3 * short_1;
		char_1 = char_1 * char_1;
		int_1 = int_2 * int_1;
		float_1 = float_2 + float_1;
		int_3 = int_1 * int_1;
		int_1 = int_2 * int_3;
		unsigned_int_5 = unsigned_int_3;
		int_3 = int_1 + int_1;
		double_4 = double_3 * double_3;
		float_3 = float_3 * float_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		double_4 = double_4 + double_1;
		char_1 = char_2 * char_3;
		long_3 = long_1 + long_2;
		char_2 = char_1 * char_2;
		float_3 = float_2 + float_2;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
		int_1 = int_2 * int_4;
		long_3 = long_4 + long_3;
		int_6 = int_1 * int_5;
		float_3 = float_3;
		int_2 = int_6 + int_5;
		float_5 = float_3 * float_4;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
		int_3 = int_5;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		long_4 = long_3 * long_4;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
		double_3 = double_4 + double_1;
		double_4 = v__add_default_keys(short_1);

		float_1 = float_4 * float_2;
		long_1 = long_3 + long_2;
		short_3 = short_4 + short_1;
		int_6 = int_5;
		char_2 = char_3 + char_3;
		v_colors_standard_get(int_1,int_1,short_1,long_5,short_1,long_1);

		short_5 = short_4 * short_2;
		double_4 = double_1 + double_4;
		int_1 = int_7 + int_2;
		float_3 = float_2 + float_5;
		int_2 = int_7 + int_8;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char char_4 = 1;
				unsigned int unsigned_int_7 = 1;
				double_5 = double_5 + double_6;
				int_8 = int_3 * int_2;
				double_5 = double_2 * double_1;
				char_2 = char_1 * char_2;
				char_4 = char_3 + char_1;
				unsigned_int_7 = unsigned_int_3 * unsigned_int_2;
			}
		}
		double_5 = double_5 * double_6;
		int_8 = int_6 * int_5;
	}
	return int_1;
}
int main()
{
	int uni_para =447;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_9 = 1;
	short short_8 = 1;
	int_1 = int_2;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2 * int_3;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_2;
	double_3 = double_1 * double_2;
	double_3 = double_3;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	float_3 = float_4;
	float_1 = float_2 + float_1;
	double_1 = double_1;
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3 * char_1;
	}
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	short_2 = short_2;
	if(1)
	{
	}
	float_3 = float_5 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_1;
	char controller4vul_1584[2];
	fgets(controller4vul_1584 ,2 ,stdin);
	if( strcmp( controller4vul_1584, ".") > 0)
	{
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			double_4 = double_2 * double_3;
		}
		if(1)
		{
			short_3 = short_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		long_2 = long_1 + long_1;
		if(1)
		{
			long_1 = long_2 + long_2;
		}
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			short_5 = short_1 * short_4;
		}
		short_2 = short_4 + short_3;
		if(1)
		{
			int_1 = int_4;
		}
		double_1 = double_3 * double_2;
		if(1)
		{
			short_4 = short_1 * short_6;
		}
		if(1)
		{
			int_1 = int_4 + int_4;
		}
		long_1 = long_1 * long_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		}
		unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
		if(1)
		{
			double_3 = double_2 * double_2;
		}
		char controller4vul_1585[3];
		fgets(controller4vul_1585 ,3 ,stdin);
		if( strcmp( controller4vul_1585, "}{") < 0)
		{
			double double_5 = 1;
			double_4 = double_2 + double_5;
			char controller4vul_1586[2];
			fgets(controller4vul_1586 ,2 ,stdin);
			if( strcmp( controller4vul_1586, "K") < 0)
			{
				v_termpty_handle_buf(long_3,int_5,int_5,uni_para);

				long_2 = long_1;
				short_1 = short_6 + short_2;
				if(1)
				{
					long long_4 = 1;
					long long_5 = 1;
					long_5 = long_4 + long_1;
				}
				if(1)
				{
					float_2 = float_4 * float_3;
				}
				if(1)
				{
					int_2 = int_1 + int_4;
				}
				if(1)
				{
					char char_4 = 1;
					char_2 = char_4 + char_1;
				}
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					unsigned_int_5 = unsigned_int_2 + unsigned_int_6;
				}
				if(1)
				{
					double_5 = double_4 + double_3;
				}
				if(1)
				{
					double_2 = double_2 + double_6;
				}
				if(1)
				{
					unsigned int unsigned_int_7 = 1;
					unsigned_int_1 = unsigned_int_7 + unsigned_int_1;
				}
				if(1)
				{
					int_5 = int_4 + int_4;
				}
				if(1)
				{
					short short_7 = 1;
					short_7 = short_1 + short_4;
				}
				if(1)
				{
					short_3 = short_4;
				}
				if(1)
				{
					double_1 = double_6 * double_4;
				}
			}
			if(1)
			{
				double_4 = double_7;
			}
		}
	}
	if(1)
	{
		int_2 = int_4 + int_5;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		int_2 = int_3 * int_4;
	}
	if(1)
	{
		double double_8 = 1;
		double_8 = double_2 * double_6;
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_1 = unsigned_int_8 + unsigned_int_4;
		}
	}
	int_4 = int_1;
	short_3 = short_4 + short_3;
	double_9 = double_7 * double_2;
	short_3 = short_8 * short_5;
	if(1)
	{
		float_2 = float_5 + float_3;
		float_3 = float_1;
	}
	return int_3;
}

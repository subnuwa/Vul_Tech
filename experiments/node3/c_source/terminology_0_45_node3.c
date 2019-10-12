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

unsigned int v__termpty_shutdown( float parameter_1);
void v_termpty_text_scroll_rev_test( double parameter_1,int parameter_2);
unsigned int v__handle_esc_dcs( int parameter_1,float parameter_2,long parameter_3);
void v__handle_op_a( char parameter_1,unsigned int parameter_2,int parameter_3);
void v__termpty_ext_handle( double parameter_1,long parameter_2,long parameter_3);
double v__handle_esc_terminology( long parameter_1,double parameter_2,double parameter_3);
void v__handle_xterm_777_command( long parameter_1,char parameter_2,int parameter_3);
long v__smart_calculate_226( long parameter_1);
char v__smart_size( double parameter_1,int parameter_2,int parameter_3,short parameter_4);
void v_colors_term_init( float parameter_1,unsigned int parameter_2,double parameter_3);
void v_termio_config_update();
int v__font_size_set( long parameter_1,int parameter_2);
void v_termio_font_size_set( short parameter_1,int parameter_2);
long v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3);
double v__eina_unicode_to_hex( short parameter_1);
long v__xterm_parse_color( double parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5);
unsigned int v__xterm_arg_get( unsigned int parameter_1);
int v__handle_esc_xterm( unsigned int parameter_1,unsigned int parameter_2,long parameter_3);
void v_termpty_cells_set_content( int parameter_1,char parameter_2,double parameter_3,int parameter_4);
long v__handle_esc_csi_decera( double parameter_1,double parameter_2);
void v_termpty_cells_att_fill_preserve_colors( short parameter_1,char parameter_2,char parameter_3,int parameter_4);
unsigned int v__clean_up_rect_coordinates( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
long v__handle_esc_csi_decfra( char parameter_1,float parameter_2);
long v__handle_esc_csi_decslrm( float parameter_1,int parameter_2);
char v__handle_esc_csi_decstbm( short parameter_1,unsigned int parameter_2);
unsigned int v__handle_esc_csi_decscusr( float parameter_1,double parameter_2);
short v__handle_esc_csi_dsr( long parameter_1,unsigned int parameter_2);
long v__handle_esc_csi_truecolor_cmyk( float parameter_1,short parameter_2);
int v__handle_esc_csi_truecolor_cmy( double parameter_1,short parameter_2);
unsigned int v__approximate_truecolor_rgb( short parameter_1,int parameter_2,int parameter_3,int parameter_4);
double v__csi_truecolor_arg_get( double parameter_1);
void v__handle_esc_csi_truecolor_rgb( short parameter_1,long parameter_2);
int v__handle_esc_csi_color_set( double parameter_1,short parameter_2);
void v_termpty_cursor_copy( unsigned int parameter_1,char parameter_2);
int v__switch_to_alternative_screen( long parameter_1,int parameter_2);
short v__move_cursor_to_origin( char parameter_1);
short v__pty_size( unsigned int parameter_1);
int v__limit_coord( short parameter_1);
double v__check_screen_info( int parameter_1,double parameter_2);
char v__termpty_line_rewrap( double parameter_1,long parameter_2,int parameter_3,int parameter_4,long parameter_5);
float v__backlog_remove_latest_nolock( unsigned int parameter_1);
float v_termpty_save_extract( char parameter_1);
unsigned int v__termpty_line_is_empty( double parameter_1,double parameter_2);
void v_termpty_screen_swap( unsigned int parameter_1);
void v_termpty_resize( long parameter_1,int parameter_2,int parameter_3);
char v_termio_win_get( int parameter_1);
char v__handle_esc_csi_reset_mode( unsigned int parameter_1,char parameter_2,int parameter_3,int uni_para);
char v__handle_esc_csi_cursor_pos_set( short parameter_1,char parameter_2,double parameter_3);
void v_termpty_text_scroll_rev( float parameter_1,int parameter_2);
void v_termpty_clear_line( float parameter_1,unsigned int parameter_2,int parameter_3);
void v_termpty_clear_screen( double parameter_1,float parameter_2,int uni_para);
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
char v__termpty_charset_trans( int parameter_1,float parameter_2);
void v_termio_content_change( char parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,int uni_para);
void v_termpty_text_append( double parameter_1,int parameter_2,int parameter_3);
int v__csi_arg_get( char parameter_1);
char v__handle_esc_csi( short parameter_1,char parameter_2,short parameter_3,int uni_para);
float v__safechar( float parameter_1);
double v__handle_esc( short parameter_1,short parameter_2,unsigned int parameter_3,int uni_para);
void v_termpty_cell_fill( char parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4);
void v_termpty_cells_fill( double parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_cells_clear( int parameter_1,unsigned int parameter_2,int parameter_3);
float v__tooltip_del(long parameter_2);
char v__tooltip_content(int parameter_2,float parameter_3);
void v_MD5Final( short parameter_1,short parameter_2);
void v_MD5Transform( int parameter_1,float parameter_2);
void v_byteReverse( unsigned int parameter_1,char parameter_2);
void v_MD5Update( int parameter_1,short parameter_2,char parameter_3);
void v_MD5Init( short parameter_1);
void v_gravatar_tooltip( int parameter_1,float parameter_2,char parameter_3);
unsigned int v__cb_link_drag_done(float parameter_2);
long v__cb_link_drag_accept(int parameter_2,char parameter_3);
double v__cb_link_drag_move(float parameter_2,float parameter_3,short parameter_4,unsigned int parameter_5);
char v__cb_link_icon_new(long parameter_2,float parameter_3,long parameter_4);
short v__cb_link_move(float parameter_2,char parameter_3);
double v__cb_link_up_delay();
int v__cb_link_up(unsigned int parameter_2,short parameter_3);
void v_term_focus( short parameter_1);
char v__term_is_focused( long parameter_1);
void v_term_unfocus( float parameter_1);
long v__cb_ctxp_del(long parameter_2,unsigned int parameter_3);
char v__cb_ctxp_dismissed(long parameter_2);
unsigned int v__cb_ctxp_link_copy(double parameter_2);
double v__screen_visual_bounds( char parameter_1);
char v__draw_cell( int parameter_1,short parameter_2,char parameter_3,char parameter_4);
long v__draw_line( double parameter_1,float parameter_2,char parameter_3,int parameter_4,float parameter_5);
char v_termpty_backlog_length( long parameter_1);
char v_termio_pty_get( char parameter_1);
unsigned int v_termio_textgrid_get( float parameter_1);
unsigned int v_miniview_colors_get( unsigned int parameter_1,short parameter_2);
void v__deferred_renderer();
double v__queue_render( long parameter_1);
void v_miniview_redraw( short parameter_1);
long v__block_obj_del( unsigned int parameter_1);
int v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2);
long v__termpty_is_dblwidth_get( double parameter_1,int parameter_2);
char v_term_preedit_str_get();
char v_media_get( unsigned int parameter_1);
double v__smart_media_clicked(unsigned int parameter_2);
float v_media_control_get( unsigned int parameter_1);
float v__smart_media_stop(long parameter_2);
float v__smart_media_pause(int parameter_2);
float v__smart_media_play(unsigned int parameter_2);
char v__smart_media_del(int parameter_2,char parameter_3);
void v_media_visualize_set( short parameter_1,unsigned int parameter_2);
void v_media_mute_set( double parameter_1,long parameter_2);
void v_media_volume_set( unsigned int parameter_1,double parameter_2);
char v__cb_media_vol(char parameter_2,double parameter_3,int parameter_4);
long v__cb_media_pos(long parameter_2,unsigned int parameter_3,int parameter_4);
float v__cb_media_pos_drag_stop(float parameter_2,double parameter_3,float parameter_4);
short v__cb_media_pos_drag_start(int parameter_2,float parameter_3,unsigned int parameter_4);
void v_media_stop( float parameter_1);
long v__cb_media_stop(unsigned int parameter_2,int parameter_3,unsigned int parameter_4);
short v__cb_media_pause(short parameter_2,float parameter_3,float parameter_4);
void v_media_play_set( unsigned int parameter_1,char parameter_2);
long v__cb_media_play(float parameter_2,long parameter_3,char parameter_4);
void v_media_position_set( float parameter_1,double parameter_2);
int v__cb_mov_ref(unsigned int parameter_2);
int v__cb_mov_progress(char parameter_2);
int v__cb_mov_restart();
char v__cb_mov_decode_stop(int parameter_2);
int v__cb_mov_len_change(long parameter_2);
char v__cb_mov_frame_resize(float parameter_2);
double v__cb_mov_frame_decode(double parameter_2);
long v__type_mov_init( short parameter_1);
int v__cb_edje_preloaded(short parameter_2,short parameter_3,float parameter_4);
int v__type_edje_init( char parameter_1);
unsigned int v__type_scale_init( long parameter_1);
char v__cb_img_frame();
char v__type_img_anim_handle( float parameter_1);
short v__cb_img_preloaded(long parameter_2,double parameter_3);
void v__type_img_init( float parameter_1);
unsigned int v__url_compl_cb(int parameter_2);
float v__url_prog_cb(int parameter_2);
void v__type_thumb_calc( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,short parameter_5);
void v__type_mov_calc( unsigned int parameter_1,double parameter_2,double parameter_3,float parameter_4,int parameter_5);
char v__type_edje_calc( char parameter_1,int parameter_2,float parameter_3,short parameter_4,char parameter_5);
unsigned int v__type_img_calc( char parameter_1,char parameter_2,int parameter_3,char parameter_4,double parameter_5);
short v__cb_scale_preloaded(unsigned int parameter_2,char parameter_3,int uni_para);
char v__type_scale_calc( unsigned int parameter_1,char parameter_2,int parameter_3,short parameter_4,long parameter_5,int uni_para);
long v__unsmooth_timeout(int uni_para);
void v__smooth_handler(int uni_para);
void v__smart_calculate( short parameter_1,int uni_para);
float v__smart_move( unsigned int parameter_1,char parameter_2,float parameter_3);
long v__smart_resize( long parameter_1,unsigned int parameter_2,char parameter_3);
unsigned int v__smart_del( int parameter_1);
double v__smart_add( int parameter_1);
double v__smart_init(int uni_para);
short v_media_add( int parameter_1,short parameter_2,long parameter_3,int parameter_4,char parameter_5,int uni_para);
void v__block_media_activate( long parameter_1,int parameter_2,int uni_para);
short v__block_edje_message_cb(char parameter_2,float parameter_3,int parameter_4);
void v_termpty_write( short parameter_1,long parameter_2,int parameter_3);
void v__block_edje_signal_cb(short parameter_2,unsigned int parameter_3,float parameter_4);
void v_termpty_block_chid_update( short parameter_1,float parameter_2);
void v__block_edje_cmds( short parameter_1,long parameter_2,int parameter_3,short parameter_4);
int v_homedir_get( char parameter_1,short parameter_2);
char v__block_edje_activate( double parameter_1,char parameter_2);
int v__block_activate( char parameter_1,unsigned int parameter_2,int uni_para);
float v_termpty_block_get( unsigned int parameter_1,int parameter_2);
int v_termpty_block_id_get( char parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( char parameter_1,int parameter_2);
int v__smart_apply( short parameter_1,int uni_para);
int v__smart_cb_change(int uni_para);
double v__smart_update_queue( float parameter_1,char parameter_2,int uni_para);
void v__lost_selection_reset_job();
void v__lost_selection(char parameter_2,int uni_para);
void v__take_selection_text( int parameter_1,short parameter_2,float parameter_3,int uni_para);
int v__cb_ctxp_link_content_copy(char parameter_2,int uni_para);
void v_ty_sb_free( double parameter_1);
void v_ty_sb_steal_buf( unsigned int parameter_1);
int v_codepoint_to_utf8( unsigned int parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( char parameter_1);
int v_ty_sb_add( long parameter_1,char parameter_2,float parameter_3);
unsigned int v__termpty_cellrow_from_beacon_get( long parameter_1,int parameter_2,float parameter_3);
short v_termpty_cellrow_get( char parameter_1,int parameter_2,short parameter_3);
long v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,float parameter_7);
int v__cb_ctxp_link_open(double parameter_2);
double v__should_inline( unsigned int parameter_1);
void v_link_is_email( long parameter_1);
void v_link_is_protocol( char parameter_1);
short v_link_is_url( long parameter_1);
float v__activate_link( double parameter_1,double parameter_2);
short v__cb_ctxp_link_preview(short parameter_2);
double v__is_fmt( long parameter_1,unsigned int parameter_2);
double v_media_src_type_get( double parameter_1);
int v__mouse_in_selection( int parameter_1,int parameter_2,int parameter_3);
int v__smart_xy_to_cursor( int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5);
int v__cb_link_down(int parameter_2,float parameter_3,int uni_para);
unsigned int v_main_term_popup_exists( unsigned int parameter_1);
double v__update_link( double parameter_1,long parameter_2,char parameter_3,long parameter_4,int uni_para);
float v__remove_links( float parameter_1,long parameter_2,int uni_para);
void v__sel_set( char parameter_1,double parameter_2);
int v_termio_scroll_get( double parameter_1);
void v_miniview_position_offset( float parameter_1,int parameter_2,float parameter_3);
long v_term_miniview_get();
void v_termio_scroll( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
long v_termpty_save_new( long parameter_1,int parameter_2);
void v_termpty_save_expand( long parameter_1,float parameter_2,unsigned int parameter_3);
int v__termpty_cell_is_empty( long parameter_1);
long v_termpty_line_length( int parameter_1,char parameter_2);
double v_verify_beacon( char parameter_1,int parameter_2);
void v_termpty_text_save_top( unsigned int parameter_1,double parameter_2,float parameter_3);
void v_termpty_text_scroll( char parameter_1,long parameter_2);
void v_termpty_text_scroll_test( double parameter_1,unsigned int parameter_2);
int v__cursor_to_start_of_line( long parameter_1);
char v__tab_forward( long parameter_1,int parameter_2);
short v__handle_cursor_control( char parameter_1,int parameter_2);
int v_termpty_handle_seq( char parameter_1,short parameter_2,int parameter_3,int uni_para);
void v_termpty_handle_buf( long parameter_1,long parameter_2,int parameter_3,int uni_para);
void v_theme_reload( char parameter_1);
float v_theme_reload_cb(float parameter_2,char parameter_3,int parameter_4);
void v_theme_auto_reload_enable( unsigned int parameter_1);
short v__cursor_shape_to_group_name( unsigned int parameter_1);
void v_config_theme_path_default_get( double parameter_1);
short v_theme_path_get();
short v_config_theme_path_get( double parameter_1);
double v_theme_apply( long parameter_1,double parameter_2,int parameter_3);
void v_termio_set_cursor_shape( int parameter_1,double parameter_2);
void v_termpty_clear_tabs_on_screen();
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( long parameter_1,unsigned int parameter_2);
float v__ts_free();
void v_termpty_save_free( long parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( int parameter_1);
void v_termpty_reset_att( unsigned int parameter_1);
unsigned int v_termio_config_get( char parameter_1);
void v_termpty_reset_state();
void v_termpty_resize_tabs( short parameter_1,int parameter_2,int parameter_3);
unsigned int v__termpty_init( double parameter_1);
short v__add_default_keys( char parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,short parameter_3,int parameter_4,short parameter_5,int parameter_6);
float v_config_new();
unsigned int v__termpty_shutdown( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 + long_1;
	return unsigned_int_1;
}
void v_termpty_text_scroll_rev_test( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		int_2 = int_1 * int_1;
	}
	v_termpty_text_scroll_rev(float_1,int_2);

}
unsigned int v__handle_esc_dcs( int parameter_1,float parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				}
				if(1)
				{
					v_termpty_write(short_1,long_1,int_1);

					long_2 = long_2 + long_2;
				}
			}
		}
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2 * int_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 + double_2;
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_2 = 1;
			float_1 = v__safechar(float_2);

			short_2 = short_1 + short_1;
		}
	}
	return unsigned_int_2;
}
void v__handle_op_a( char parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_3 = double_1 * double_2;
	float_2 = float_1 + float_2;
}
void v__termpty_ext_handle( double parameter_1,long parameter_2,long parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	v__handle_op_a(char_1,unsigned_int_1,int_1);

	short_2 = short_1 * short_1;
	double_1 = double_1 + double_1;
}
double v__handle_esc_terminology( long parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	v__termpty_ext_handle(double_1,long_1,long_2);

	long_2 = long_3 + long_3;
	return double_1;
	unsigned_int_1 = v_termio_config_get(char_1);

}
void v__handle_xterm_777_command( long parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_3 = int_2 + int_3;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	int_4 = int_3 + int_1;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "@Z") < 0)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	char_2 = char_1 * char_1;
	unsigned_int_6 = unsigned_int_4;
	char_2 = char_3 + char_1;
	unsigned_int_5 = unsigned_int_2;
}
long v__smart_calculate_226( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_1;
	float_2 = float_1 * float_1;
	int_1 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	int_4 = int_1 * int_3;
	int_4 = int_1;
	return long_1;
}
char v__smart_size( double parameter_1,int parameter_2,int parameter_3,short parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	short_1 = short_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		float float_2 = 1;
		long_1 = long_1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	int_1 = v__smart_apply(short_1,-1 );

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_2 + double_2;
	v_termpty_resize(long_1,int_1,int_2);

	double_1 = double_2 * double_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_4 = double_1 * double_1;
	double_4 = double_2 * double_4;
	if(1)
	{
		char char_2 = 1;
		char_3 = char_1 + char_2;
	}
	char_4 = char_1 * char_3;
	long_1 = v__smart_calculate_226(long_1);

	double_5 = double_1 + double_4;
	float_3 = float_3 + float_4;
	float_3 = float_1 * float_4;
	char_1 = char_3 * char_4;
	int_3 = int_1 + int_2;
	return char_1;
	v__sel_set(char_1,double_2);

}
void v_colors_term_init( float parameter_1,unsigned int parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float_2 = float_1 * float_1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		long long_1 = 1;
		long long_3 = 1;
		double_4 = double_2 + double_4;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			short_2 = short_1 * short_1;
			double_2 = double_3 + double_1;
			int_2 = int_1 * int_1;
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				long long_2 = 1;
				short short_3 = 1;
				short short_4 = 1;
				long_1 = long_1 + long_2;
				short_2 = short_2 + short_3;
				unsigned_int_1 = unsigned_int_2;
				int_1 = int_1;
				short_4 = short_3 + short_3;
			}
		}
		long_1 = long_3 * long_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int_4 = int_3 + int_3;
			if(1)
			{
				int_5 = int_3 * int_3;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			int int_6 = 1;
			int_5 = int_3 + int_6;
			if(1)
			{
				unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short short_5 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			int int_7 = 1;
			unsigned int unsigned_int_5 = 1;
			int_4 = int_4 * int_1;
			double_4 = double_1 * double_3;
			int_1 = int_7 + int_2;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
			int_3 = int_7 + int_7;
		}
		short_1 = short_5 + short_1;
	}
}
void v_termio_config_update()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	int int_5 = 1;
	float float_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	v_termio_set_cursor_shape(int_2,double_1);

	long_2 = long_1 + long_1;
	long_1 = long_1 + long_2;
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		float_1 = float_1 + float_1;
		int_3 = int_2;
	}
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	char_2 = char_2 * char_1;
	double_2 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_2 * short_2;
	v_termpty_backlog_size_set(long_3,unsigned_int_4);

	char_1 = v__smart_size(double_1,int_4,int_3,short_1);

	char_4 = char_3 * char_2;
	char_5 = char_3 * char_1;
	int_1 = int_2 * int_2;
	double_3 = double_3 * double_3;
	int_1 = int_3 * int_5;
	if(1)
	{
		v_colors_term_init(float_2,unsigned_int_1,double_2);

		long_1 = long_2 + long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
	}
	double_1 = double_2 + double_2;
	int_2 = int_5;
	double_2 = double_3;
	int_1 = int_2;
	float_1 = float_1;
}
int v__font_size_set( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_2;
	float_1 = float_1 * float_2;
	v_termio_config_update();

	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int int_1 = 1;
		unsigned_int_2 = unsigned_int_4;
		char_2 = char_3 * char_4;
		char_5 = char_1 * char_2;
		int_1 = int_2;
		double_2 = double_2;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	}
	return int_2;
}
void v_termio_font_size_set( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = v__font_size_set(long_1,int_1);

	double_3 = double_1 * double_2;
}
long v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	v_termio_font_size_set(short_1,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
double v__eina_unicode_to_hex( short parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
}
long v__xterm_parse_color( double parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	long_3 = long_3 * long_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			short_1 = short_1 * short_2;
		}
		long_4 = long_1 + long_2;
		short_1 = short_3 + short_1;
		if(1)
		{
			double_2 = double_1 + double_2;
		}
		double_1 = double_3 + double_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			int int_1 = 1;
			int_2 = int_1 + int_2;
		}
		short_2 = short_2 * short_2;
		float_3 = float_2;
		if(1)
		{
			long_2 = long_2 + long_2;
		}
		float_2 = float_2 * float_1;
		int_4 = int_3 * int_2;
		if(1)
		{
			double_3 = double_2;
		}
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_4;
		}
		unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float_3 = float_4 + float_5;
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		long_4 = long_3 * long_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4;
		}
		unsigned_int_3 = unsigned_int_2;
		unsigned_int_1 = unsigned_int_5;
		if(1)
		{
			char_2 = char_2;
		}
		unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
	}
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short_4 = short_5;
	}
	double_3 = v__eina_unicode_to_hex(short_1);

	char_1 = char_2 + char_3;
	return long_3;
}
unsigned int v__xterm_arg_get( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	char_2 = char_1 + char_2;
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 + double_1;
	int_1 = int_1;
	float_3 = float_1 + float_2;
	float_2 = float_3 * float_2;
	float_4 = float_4 * float_2;
	int_3 = int_1 * int_2;
	char_3 = char_2 + char_2;
	int_4 = int_3;
	double_2 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	int_2 = int_2 * int_5;
	char_1 = char_3 * char_2;
	short_4 = short_3 * short_2;
	long_1 = long_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	int_6 = int_1;
	char_2 = char_1 + char_2;
	int_5 = int_4;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	return unsigned_int_4;
}
int v__handle_esc_xterm( unsigned int parameter_1,unsigned int parameter_2,long parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_5 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	long long_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	int int_7 = 1;
	short short_5 = 1;
	double double_4 = 1;
	v__handle_xterm_777_command(long_1,char_1,int_1);

	short_1 = short_1 + short_1;
	int_1 = int_1 * int_2;
	long_2 = long_1 * long_2;
	long_3 = long_3 * long_2;
	long_3 = long_4 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	long_5 = v__handle_xterm_50_command(float_1,char_2,int_3);

	int_3 = int_4;
	double_1 = double_1 * double_1;
	long_2 = long_4 * long_2;
	if(1)
	{
		long_6 = long_5 + long_4;
	}
	short_1 = short_2 + short_3;
	if(1)
	{
		long_1 = long_2 + long_3;
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = v_termio_textgrid_get(float_2);

	char_1 = char_2 + char_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		long_4 = v__xterm_parse_color(double_1,float_2,int_3,unsigned_int_2,int_4);

		int_4 = int_3;
	}
	if(1)
	{
		double_3 = double_2 + double_1;
		int_2 = int_1 + int_5;
		double_3 = double_2;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_2 * int_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	double_1 = double_1 * double_1;
	short_3 = short_4;
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		short_2 = short_2 + short_2;
		int_1 = int_7 * int_2;
	}
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		unsigned_int_3 = v_termio_config_get(char_2);

		v_termpty_write(short_4,long_5,int_5);

		long_5 = long_6 * long_2;
	}
	unsigned_int_4 = v__xterm_arg_get(unsigned_int_2);

	short_5 = short_1 + short_2;
	double_2 = double_1 + double_4;
	return int_7;
}
void v_termpty_cells_set_content( int parameter_1,char parameter_2,double parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long_3 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_2;
	}
}
long v__handle_esc_csi_decera( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int_1 = v__csi_arg_get(char_1);

	unsigned_int_1 = v__clean_up_rect_coordinates(float_1,int_1,int_2,int_3,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_2;
	short_2 = short_2 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_2 * float_1;
	short_3 = short_3 + short_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "5") > 0)
	{
	}
	v_termpty_cells_set_content(int_3,char_1,double_1,int_4);

	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_4 = 1;
		unsigned int unsigned_int_3 = 1;
		short_2 = short_2 * short_4;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
	return long_1;
}
void v_termpty_cells_att_fill_preserve_colors( short parameter_1,char parameter_2,char parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_3;
		int_1 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			double_2 = double_1 * double_1;
			int_3 = int_2 * int_3;
			int_4 = int_4 + int_3;
			double_1 = double_2;
			int_3 = int_3 + int_5;
			double_2 = double_1 + double_1;
		}
	}
}
unsigned int v__clean_up_rect_coordinates( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 + int_1;
	int_2 = int_2 * int_3;
	char_3 = char_1 * char_2;
	double_2 = double_1 * double_1;
	double_2 = double_1;
	int_2 = int_4 * int_3;
	if(1)
	{
		char_3 = char_3 + char_3;
	}
	double_2 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_3 + long_4;
		if(1)
		{
			char char_4 = 1;
			char_3 = char_4 + char_1;
		}
	}
	if(1)
	{
		char_3 = char_1 * char_1;
	}
	if(1)
	{
		int_3 = int_2;
	}
	if(1)
	{
		char_2 = char_2 + char_3;
		if(1)
		{
			int_2 = int_4;
		}
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	char controller_10[3];
	fgets(controller_10 ,3 ,stdin);
	if( strcmp( controller_10, "B1") > 0)
	{
		double_4 = double_3 * double_2;
	}
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	double_4 = double_2 + double_1;
	double_4 = double_5 + double_3;
	double_3 = double_3 * double_5;
	return unsigned_int_5;
}
long v__handle_esc_csi_decfra( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int int_5 = 1;
	long long_1 = 1;
	unsigned_int_1 = v__clean_up_rect_coordinates(float_1,int_1,int_2,int_3,int_1);

	char_1 = char_2;
	char_2 = char_1 + char_3;
	int_4 = int_3;
	double_1 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_2 * double_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		v_termpty_cells_att_fill_preserve_colors(short_1,char_3,char_1,int_5);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
		int_1 = v__csi_arg_get(char_2);

		unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	}
	return long_1;
}
long v__handle_esc_csi_decslrm( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_2;
	double_1 = double_2 * double_3;
	int_3 = int_3 * int_4;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		short_1 = v__move_cursor_to_origin(char_1);

		long_3 = long_1 * long_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		int int_5 = 1;
		int_2 = int_5 * int_5;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_6 = v__csi_arg_get(char_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_7 + int_8;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	int_6 = int_2;
	return long_1;
}
char v__handle_esc_csi_decstbm( short parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_3 = 1;
	short short_4 = 1;
	char char_2 = 1;
	float_1 = float_1 + float_1;
	double_1 = double_1 * double_2;
	int_1 = int_1;
	int_2 = int_1;
	unsigned_int_1 = unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "/-") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	float_1 = float_2;
	int_2 = int_1 + int_2;
	int_2 = v__csi_arg_get(char_1);

	short_3 = v__move_cursor_to_origin(char_1);

	double_1 = double_1 * double_2;
	int_3 = int_1 + int_1;
	short_3 = short_1 + short_4;
	return char_2;
}
unsigned int v__handle_esc_csi_decscusr( float parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double_1 = double_1 + double_1;
	int_1 = v__csi_arg_get(char_1);

	int_1 = int_1 * int_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2 + double_1;
	short_3 = short_1 * short_2;
	double_2 = double_1 + double_1;
	short_1 = short_3 + short_3;
	v_termio_set_cursor_shape(int_2,double_2);

	short_4 = short_2 * short_4;
	int_2 = int_2 * int_3;
	char_1 = char_2 * char_2;
	double_3 = double_2 * double_2;
	double_5 = double_4 * double_4;
	char_2 = char_1 + char_3;
	char_4 = char_1;
	return unsigned_int_1;
}
short v__handle_esc_csi_dsr( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_2 = short_1 + short_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		int_1 = int_1 + int_1;
		int_1 = v__csi_arg_get(char_1);

		int_1 = int_1 + int_2;
		double_2 = double_1 + double_2;
		short_3 = short_3;
		v_termpty_write(short_4,long_1,int_3);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		float_1 = float_2;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		float float_3 = 1;
		double double_4 = 1;
		long_3 = long_2 + long_2;
		double_3 = double_2 * double_2;
		float_3 = float_2 * float_1;
		int_3 = int_3 + int_2;
		long_2 = long_2;
		double_3 = double_2 + double_4;
	}
	return short_4;
}
long v__handle_esc_csi_truecolor_cmyk( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int_1 = int_2;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_2;
	int_2 = int_1;
	unsigned_int_1 = v__approximate_truecolor_rgb(short_1,int_2,int_3,int_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	int_2 = int_4 * int_1;
	unsigned_int_2 = unsigned_int_2;
	double_1 = v__csi_truecolor_arg_get(double_1);

	int_1 = int_3 + int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	return long_3;
}
int v__handle_esc_csi_truecolor_cmy( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = v__csi_truecolor_arg_get(double_1);

	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 * short_2;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	return int_1;
	unsigned_int_2 = v__approximate_truecolor_rgb(short_1,int_2,int_2,int_1);

}
unsigned int v__approximate_truecolor_rgb( short parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned_int_2 = v_termio_textgrid_get(float_1);

			int_3 = int_1 + int_2;
			if(1)
			{
				int int_4 = 1;
				int_2 = int_4 + int_4;
			}
		}
	}
	return unsigned_int_2;
}
double v__csi_truecolor_arg_get( double parameter_1)
{
	double double_1 = 1;
	return double_1;
}
void v__handle_esc_csi_truecolor_rgb( short parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int_1 = int_2;
	unsigned_int_1 = v__approximate_truecolor_rgb(short_1,int_3,int_4,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	double_1 = v__csi_truecolor_arg_get(double_1);

	int_1 = int_2 * int_2;
	if(1)
	{
		double double_2 = 1;
		int int_5 = 1;
		double_2 = double_2 * double_1;
		int_4 = int_4;
		int_5 = int_3 + int_4;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Ko") > 0)
	{
	}
}
int v__handle_esc_csi_color_set( double parameter_1,short parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v__csi_arg_get(char_1);

	v__handle_esc_csi_truecolor_rgb(short_1,long_1);

	int_1 = v__handle_esc_csi_truecolor_cmy(double_1,short_1);

	char_2 = char_1 * char_1;
	long_2 = v__handle_esc_csi_truecolor_cmyk(float_1,short_1);

	float_1 = float_2 + float_1;
	return int_1;
	v_termpty_reset_att(unsigned_int_1);

}
void v_termpty_cursor_copy( unsigned int parameter_1,char parameter_2)
{
	double double_2 = 1;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_1 + double_2;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double_2 = double_3 * double_2;
		short_1 = short_2;
		short_2 = short_2 + short_3;
		short_2 = short_4 * short_1;
	}
}
int v__switch_to_alternative_screen( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		int int_1 = 1;
		v_termpty_screen_swap(unsigned_int_1);

		int_2 = int_1 * int_1;
	}
	return int_2;
}
short v__move_cursor_to_origin( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short_1 = short_1 + short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_1 + double_2;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_3 = 1;
		float_2 = float_1 + float_1;
		short_3 = short_3 * short_1;
	}
	return short_2;
}
short v__pty_size( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_3 = short_1 * short_2;
	short_3 = short_4 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	return short_3;
}
int v__limit_coord( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_2;
	int_1 = int_2;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_1 = double_3 * double_4;
	int_3 = int_1 + int_3;
	return int_1;
}
double v__check_screen_info( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		v_termpty_text_save_top(unsigned_int_1,double_1,float_1);

		v_termpty_cells_clear(int_1,unsigned_int_1,int_1);

		long_2 = long_1 * long_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_3 = double_2 * double_1;
		float_1 = float_1 * float_1;
		short_1 = short_1 * short_2;
		if(1)
		{
			long_2 = long_2;
		}
		int_1 = int_2 * int_2;
	}
	return double_1;
}
char v__termpty_line_rewrap( double parameter_1,long parameter_2,int parameter_3,int parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = v__check_screen_info(int_1,double_1);

	char_1 = char_2;
	double_2 = double_2 * double_1;
	return char_3;
}
float v__backlog_remove_latest_nolock( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	if(1)
	{
		short_3 = short_2;
	}
	if(1)
	{
		v_termpty_save_free(long_1);

		short_3 = short_1 + short_2;
	}
	double_2 = double_1 * double_1;
	float_3 = float_2 * float_1;
	int_1 = int_1 * int_1;
	long_3 = long_1 + long_2;
	return float_2;
	double_1 = v_verify_beacon(char_1,int_2);

}
float v_termpty_save_extract( char parameter_1)
{
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "^;") < 0)
	{
	}
	if(1)
	{
		if(1)
		{
			float float_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			float float_3 = 1;
			float_2 = float_1 + float_1;
			char_1 = char_1 + char_1;
			char_2 = char_1 + char_2;
			double_1 = double_1 + double_2;
			int_1 = int_1 + int_2;
			if(1)
			{
			}
			float_2 = float_2 + float_1;
			short_2 = short_1 + short_2;
			float_3 = float_3 + float_3;
			if(1)
			{
				short_1 = short_2 + short_1;
			}
		}
	}
	return float_1;
}
unsigned int v__termpty_line_is_empty( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char_3 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_3 * char_3;
		if(1)
		{
		}
	}
	return unsigned_int_1;
	int_1 = v__termpty_cell_is_empty(long_1);

}
void v_termpty_screen_swap( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_2;
	float_1 = float_2;
	short_3 = short_1 + short_2;
	double_1 = double_2 * double_2;
	char_1 = char_1;
	double_4 = double_3 + double_2;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		long_2 = long_3;
	}
}
void v_termpty_resize( long parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_3 = 1;
	char char_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	char char_5 = 1;
	double double_8 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_6 = 1;
	int int_10 = 1;
	double_1 = double_1 + double_2;
	v_termpty_screen_swap(unsigned_int_1);

	float_1 = v_termpty_save_extract(char_1);

	double_3 = double_2 + double_2;
	int_1 = int_1 + int_1;
	float_2 = float_2;
	if(1)
	{
	}
	double_4 = v_verify_beacon(char_1,int_1);

	int_4 = int_2 * int_3;
	if(1)
	{
		char_2 = char_2 + char_1;
		long_1 = long_2;
	}
	short_1 = short_2;
	if(1)
	{
		char_1 = char_2 * char_2;
	}
	short_1 = short_3 + short_4;
	long_1 = long_1;
	if(1)
	{
		int_3 = int_4;
	}
	long_1 = v_termpty_line_length(int_1,char_3);

	long_3 = long_2 + long_1;
	int_5 = v__limit_coord(short_1);

	double_1 = double_5 * double_6;
	double_3 = double_2 + double_4;
	double_3 = double_1 * double_7;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_3 + char_1;
		if(1)
		{
			char_1 = char_2;
			unsigned_int_1 = v__termpty_line_is_empty(double_5,double_3);

			float_2 = float_2 * float_3;
		}
	}
	char_1 = char_4;
	if(1)
	{
		int_3 = int_6 * int_6;
	}
	int_2 = int_4 * int_7;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		v_termpty_backlog_unlock();

		long_2 = long_1 * long_3;
		int_5 = int_4 + int_7;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			short short_5 = 1;
			unsigned int unsigned_int_5 = 1;
			int_7 = int_3 + int_5;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
			float_4 = v__backlog_remove_latest_nolock(unsigned_int_4);

			char_4 = char_4 * char_5;
			if(1)
			{
				double_7 = double_4;
			}
			double_6 = double_7 * double_8;
			float_3 = float_5;
			v_termpty_backlog_lock();

			long_1 = long_1 + long_2;
			int_7 = int_6 + int_2;
			short_3 = short_5;
			char_4 = char_1;
			unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_9 = 1;
		char_1 = char_5 * char_1;
		char_2 = char_3 * char_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		v_termpty_resize_tabs(short_2,int_2,int_8);

		int_9 = int_2 + int_7;
	}
	double_2 = double_1;
	double_7 = double_8 + double_3;
	long_1 = long_2 + long_1;
	short_1 = v__pty_size(unsigned_int_6);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_7;
	char_1 = v__termpty_line_rewrap(double_7,long_2,int_6,int_3,long_3);

	float_4 = float_6 * float_5;
	short_1 = short_4 + short_4;
	char_1 = char_5;
	double_3 = double_5 * double_7;
	if(1)
	{
		int_8 = int_7 + int_10;
	}
	unsigned_int_2 = unsigned_int_6;
	int_10 = int_7 + int_6;
	long_2 = long_2 * long_3;
	float_3 = float_3 * float_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	int_7 = int_4 + int_7;
	char_3 = char_5 + char_5;
	int_6 = int_6 + int_2;
}
char v_termio_win_get( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_1 + int_3;
	return char_1;
}
char v__handle_esc_csi_reset_mode( unsigned int parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v_termpty_clear_screen(double_1,float_1,uni_para);

	char_1 = char_1 + char_1;
	int_2 = int_1 * int_2;
	double_2 = double_3;
	return char_1;
}
char v__handle_esc_csi_cursor_pos_set( short parameter_1,char parameter_2,double parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_2 = 1;
	int int_4 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3;
	int_1 = int_1 * int_1;
	int_1 = v__csi_arg_get(char_1);

	int_3 = int_2 + int_3;
	short_2 = short_2 * short_1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		float_2 = float_1 + float_1;
		if(1)
		{
			int_2 = int_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
	short_1 = short_4 * short_5;
	float_2 = float_2 * float_1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		short_3 = short_5 * short_1;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_2 = double_3 + double_4;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_3 + float_4;
	}
	int_4 = int_1 + int_1;
	return char_1;
}
void v_termpty_text_scroll_rev( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		v_termio_scroll(int_4,int_4,int_2,int_4);

		float_1 = float_1 + float_2;
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	long_1 = long_2;
	if(1)
	{
		long long_3 = 1;
		int_4 = int_4 + int_2;
		if(1)
		{
			v_termpty_cells_clear(int_1,unsigned_int_1,int_2);

			unsigned_int_4 = unsigned_int_4;
		}
		long_2 = long_1 + long_3;
		if(1)
		{
			double_1 = double_1 * double_1;
		}
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_5 = long_4 * long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
			float_1 = float_1 + float_1;
		}
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 + double_1;
		}
	}
}
void v_termpty_clear_line( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	short_1 = short_1 + short_1;
	short_4 = short_2 * short_3;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
	long_1 = long_1;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_6;
	v_termio_content_change(char_1,unsigned_int_1,long_2,int_1,-1 );

	double_5 = double_4 * double_5;
	short_2 = short_1 + short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "3W") < 0)
	{
		v_termpty_cells_clear(int_2,unsigned_int_3,int_3);

		short_3 = short_4 + short_3;
	}
	char_3 = char_2 * char_1;
	double_3 = double_2 * double_3;
}
void v_termpty_clear_screen( double parameter_1,float parameter_2,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char controller4vul_792[3];
	fgets(controller4vul_792 ,3 ,stdin);
	if( strcmp( controller4vul_792, "fZ") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		v_termio_content_change(char_1,unsigned_int_1,long_1,int_1,uni_para);

		short_2 = short_1 + short_2;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "=") > 0)
	{
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	double_1 = double_1;
	char_2 = char_1 * char_1;
	double_4 = double_2 + double_3;
	double_5 = double_1 + double_5;
}
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		double double_1 = 1;
		int_2 = int_3 + int_2;
		double_1 = double_1;
	}
}
char v__termpty_charset_trans( int parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	float_4 = float_4 * float_3;
	long_1 = long_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
	}
	if(1)
	{
		long long_3 = 1;
		if(1)
		{
			long_1 = long_3 * long_1;
		}
		if(1)
		{
			int_1 = int_2;
		}
		if(1)
		{
			long long_4 = 1;
			long_4 = long_3 + long_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
	}
	return char_1;
}
void v_termio_content_change( char parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1 + int_1;
	int_2 = int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_3 + int_3;
	char controller4vul_793[2];
	fgets(controller4vul_793 ,2 ,stdin);
	if( strcmp( controller4vul_793, "n") > 0)
	{
		double double_3 = 1;
		short short_2 = 1;
		short_1 = short_1;
		short_1 = short_1 + short_1;
		int_2 = int_4 * int_2;
		double_1 = double_1 * double_2;
		double_4 = double_3 + double_2;
		short_1 = short_2 + short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_2 = int_2;
			char controller4vul_794[2];
			fgets(controller4vul_794 ,2 ,stdin);
			if( strcmp( controller4vul_794, "j") > 0)
			{
				float_1 = v__remove_links(float_2,long_1,uni_para);

				short_2 = short_2 + short_2;
				double_1 = double_5 + double_5;
			}
			double_5 = double_2 + double_5;
			short_3 = short_2 * short_1;
		}
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_5 + double_4;
	float_2 = float_1 * float_1;
	int_4 = int_1 * int_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	}
	if(1)
	{
		short short_4 = 1;
		long_2 = long_1;
		short_4 = short_4 * short_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_3 = 1;
			long long_3 = 1;
			float_3 = float_1 + float_3;
			if(1)
			{
				double double_6 = 1;
				double_4 = double_6 * double_4;
				unsigned_int_5 = unsigned_int_4;
			}
			long_1 = long_3 + long_2;
			double_2 = double_4;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_4 = 1;
		long long_5 = 1;
		char_1 = char_2;
		int_4 = int_2 + int_1;
		long_4 = long_2 * long_4;
		short_1 = short_1;
		long_5 = long_4 * long_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		}
	}
}
void v_termpty_text_append( double parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_2;
	double_1 = double_2;
	long_3 = long_1 + long_2;
	if(1)
	{
		long_2 = long_4;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_5 = 1;
		float float_3 = 1;
		char char_2 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_4 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
			double_3 = double_3;
			long_1 = long_1 * long_2;
			short_3 = short_2 * short_3;
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				long_5 = long_1 * long_5;
			}
		}
		float_1 = float_1 * float_3;
		if(1)
		{
			long_4 = long_5 * long_1;
		}
		if(1)
		{
			if(1)
			{
				char_1 = char_2;
			}
			double_3 = double_1 + double_1;
		}
		float_5 = float_4 + float_4;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
		}
		float_4 = float_3 * float_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_7 + unsigned_int_4;
			int_1 = int_2 + int_1;
		}
		if(1)
		{
			short short_5 = 1;
			unsigned_int_4 = unsigned_int_7;
			v_termpty_text_scroll_test(double_2,unsigned_int_8);

			short_5 = short_4 * short_4;
			if(1)
			{
				v_termio_content_change(char_3,unsigned_int_6,long_3,int_3,-1 );

				unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			}
			if(1)
			{
				int_1 = int_2 + int_3;
			}
			if(1)
			{
				char char_4 = 1;
				char char_5 = 1;
				char char_6 = 1;
				char_4 = char_2;
				char_6 = char_5 + char_5;
			}
		}
		if(1)
		{
			short short_6 = 1;
			double_2 = double_2 + double_3;
			int_1 = int_2 + int_2;
			if(1)
			{
				char_3 = char_3;
			}
			short_3 = short_1 + short_4;
			if(1)
			{
				float float_6 = 1;
				v_termpty_cell_codepoint_att_fill(unsigned_int_6,int_4,int_3,int_5,int_6);

				long_1 = v__termpty_is_dblwidth_get(double_3,int_7);

				float_5 = float_4 + float_6;
				double_2 = double_2;
			}
			short_1 = short_2 + short_6;
		}
	}
	char_1 = v__termpty_charset_trans(int_7,float_7);

}
int v__csi_arg_get( char parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	return int_2;
}
char v__handle_esc_csi( short parameter_1,char parameter_2,short parameter_3,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char_1 = v__handle_esc_csi_reset_mode(unsigned_int_1,char_1,int_1,uni_para);

	long_1 = long_1 + long_1;
	float_3 = float_1 * float_2;
	return char_1;
}
float v__safechar( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	short_3 = short_1 + short_2;
	return float_1;
}
double v__handle_esc( short parameter_1,short parameter_2,unsigned int parameter_3,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_3 = 1;
	float float_5 = 1;
	double double_4 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	int int_5 = 1;
	char char_5 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	float_1 = float_1;
	if(1)
	{
	}
	long_1 = long_1;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_1 = int_1;
	float_1 = float_2 * float_3;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
	unsigned_int_7 = unsigned_int_7 * unsigned_int_7;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	char_4 = char_3 * char_3;
	float_3 = float_4 * float_3;
	int_1 = int_1;
	int_1 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_8 * unsigned_int_3;
	double_1 = double_1 + double_3;
	int_1 = int_2 + int_1;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_1;
	float_4 = float_5 + float_3;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
	double_1 = double_2 * double_4;
	if(1)
	{
		double_4 = double_2;
	}
	if(1)
	{
	}
	long_3 = long_2;
	float_3 = float_1 + float_2;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	int_4 = int_2 * int_2;
	double_5 = double_3 * double_5;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_7;
	unsigned_int_4 = unsigned_int_8 + unsigned_int_3;
	if(1)
	{
	}
	long_4 = long_1 * long_4;
	int_1 = int_4 * int_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_1;
	float_1 = float_2 * float_3;
	if(1)
	{
	}
	char controller4vul_790[3];
	fgets(controller4vul_790 ,3 ,stdin);
	if( strcmp( controller4vul_790, "Z&") < 0)
	{
		unsigned int unsigned_int_9 = 1;
		int int_6 = 1;
		int int_7 = 1;
		unsigned_int_4 = unsigned_int_8 + unsigned_int_8;
		unsigned_int_4 = unsigned_int_6;
		int_4 = int_5;
		unsigned_int_5 = unsigned_int_9;
		int_6 = int_6 + int_1;
		char controller4vul_791[2];
		fgets(controller4vul_791 ,2 ,stdin);
		if( strcmp( controller4vul_791, "u") < 0)
		{
			char_4 = v__handle_esc_csi(short_2,char_2,short_1,uni_para);

			unsigned_int_2 = unsigned_int_6;
		}
		int_7 = int_4 + int_2;
		int_4 = int_1 * int_3;
		if(1)
		{
			int int_8 = 1;
			int_6 = int_3 * int_2;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_9;
			int_8 = int_4 + int_1;
		}
	}
	if(1)
	{
	}
	int_5 = int_5 + int_5;
	char_5 = char_3 * char_5;
	char_2 = char_1 * char_5;
	char_5 = char_4 * char_4;
	float_2 = float_3;
	return double_2;
}
void v_termpty_cell_fill( char parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			int int_1 = 1;
			double_2 = double_3 * double_3;
			int_1 = int_1 * int_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char_1 = char_1;
			long_1 = long_2;
		}
	}
}
void v_termpty_cells_fill( double parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double double_2 = 1;
	v_termpty_cell_fill(char_1,unsigned_int_1,double_1,int_1);

	int_2 = int_2 * int_1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 + short_1;
	double_1 = double_1 + double_2;
}
void v_termpty_cells_clear( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	v_termpty_cells_fill(double_3,int_1,unsigned_int_1,int_2);

}
float v__tooltip_del(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	short_2 = short_1 + short_2;
	return float_1;
}
char v__tooltip_content(int parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 + char_2;
	float_1 = float_1 + float_1;
	short_1 = v_media_add(int_1,short_2,long_1,int_2,char_3,-1 );

	int_2 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_2;
	return char_3;
}
void v_MD5Final( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_1;
	double_3 = double_1 * double_2;
	char_2 = char_1 + char_1;
	v_byteReverse(unsigned_int_3,char_1);

	int_2 = int_2;
	if(1)
	{
		long long_2 = 1;
		char char_3 = 1;
		int int_4 = 1;
		long_3 = long_2 + long_1;
		v_MD5Transform(int_3,float_1);

		char_1 = char_3 * char_3;
		int_4 = int_2 + int_2;
		double_3 = double_3 + double_1;
	}
	if(1)
	{
		double_4 = double_3;
	}
	int_3 = int_1 + int_1;
	short_2 = short_1 * short_2;
	double_4 = double_1 + double_2;
	short_2 = short_3;
	char_4 = char_4;
	short_4 = short_2 * short_1;
	long_3 = long_1 + long_1;
}
void v_MD5Transform( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_7 = 1;
	char char_3 = 1;
	double double_6 = 1;
	long long_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_5 = 1;
	char char_4 = 1;
	int int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_10 = 1;
	int int_11 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_2;
	int_1 = int_2;
	int_3 = int_2 + int_1;
	long_2 = long_1 * long_2;
	char_2 = char_1;
	long_2 = long_3 * long_2;
	double_2 = double_1 * double_2;
	char_2 = char_1 * char_2;
	int_3 = int_1 * int_2;
	double_2 = double_3 + double_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	short_3 = short_2 + short_2;
	double_2 = double_4 + double_2;
	int_3 = int_4 * int_2;
	double_3 = double_4 + double_2;
	int_2 = int_2 * int_4;
	double_1 = double_4 * double_5;
	int_1 = int_1 + int_2;
	long_4 = long_3 * long_3;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
	int_6 = int_5 * int_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
	float_3 = float_1 + float_2;
	char_1 = char_1 + char_1;
	long_3 = long_3 * long_4;
	unsigned_int_3 = unsigned_int_3;
	double_2 = double_4 * double_2;
	int_2 = int_1 + int_6;
	int_4 = int_1 + int_7;
	char_3 = char_3 * char_2;
	double_6 = double_4 + double_3;
	long_1 = long_5 * long_1;
	long_2 = long_4 + long_4;
	short_4 = short_4 * short_4;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_6;
	int_5 = int_4 * int_4;
	double_6 = double_1 + double_7;
	short_3 = short_1 * short_3;
	float_1 = float_2 + float_3;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	float_5 = float_4 + float_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_6;
	double_4 = double_6 * double_7;
	short_5 = short_3 * short_3;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
	short_3 = short_3 * short_2;
	char_1 = char_1 * char_4;
	double_1 = double_6 * double_5;
	double_3 = double_5 * double_1;
	int_5 = int_8 + int_6;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_2;
	char_4 = char_3 + char_2;
	long_4 = long_5 * long_3;
	unsigned_int_1 = unsigned_int_5;
	char_2 = char_4;
	int_9 = int_6;
	unsigned_int_9 = unsigned_int_3 * unsigned_int_8;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	double_3 = double_7 * double_6;
	int_9 = int_1 * int_10;
	int_9 = int_11 * int_4;
	double_2 = double_2;
	int_2 = int_11 * int_6;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_5;
	int_9 = int_4 * int_7;
	int_6 = int_10;
	short_2 = short_5;
}
void v_byteReverse( unsigned int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_2;
}
void v_MD5Update( int parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = double_1 * double_1;
	char_3 = char_1 * char_2;
	int_2 = int_1 * int_1;
	short_1 = short_1 * short_1;
	long_3 = long_1 + long_2;
	char_3 = char_3 * char_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	v_byteReverse(unsigned_int_1,char_1);

	long_2 = long_4 * long_3;
	double_2 = double_3;
	v_MD5Transform(int_2,float_1);

	int_3 = int_2;
	long_1 = long_4 * long_2;
	double_5 = double_2 * double_4;
	float_3 = float_2 + float_1;
	double_4 = double_6 + double_2;
	short_3 = short_2 + short_1;
	unsigned_int_5 = unsigned_int_4;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
	float_4 = float_1 * float_4;
	float_4 = float_3 + float_4;
	int_1 = int_4 + int_5;
}
void v_MD5Init( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_2 + double_1;
	long_1 = long_1 + long_2;
	int_1 = int_1 + int_1;
	int_1 = int_2 + int_2;
	int_3 = int_3 + int_4;
}
void v_gravatar_tooltip( int parameter_1,float parameter_2,char parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = v__tooltip_content(int_1,float_1);

	short_2 = short_1 * short_1;
	long_1 = long_1 * long_1;
	char_1 = char_2 + char_2;
	short_4 = short_1 * short_3;
	v_MD5Init(short_3);

	v_MD5Final(short_3,short_3);

	char_1 = char_2 + char_3;
	long_4 = long_2 * long_3;
	float_2 = float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "_D") > 0)
	{
	}
	int_1 = int_2 + int_3;
	if(1)
	{
	}
	float_4 = float_3 + float_4;
	int_4 = int_2 * int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_3;
	float_5 = v__tooltip_del(long_1);

	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_3 * int_4;
		double_3 = double_1 + double_2;
	}
	double_4 = double_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_2;
	double_2 = double_2 + double_3;
	v_MD5Update(int_3,short_3,char_1);

}
unsigned int v__cb_link_drag_done(float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	char_1 = char_2;
	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	long_3 = long_1 * long_1;
	return unsigned_int_4;
}
long v__cb_link_drag_accept(int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double_1 = double_2;
	short_1 = short_1 + short_2;
	double_4 = double_3 * double_3;
	return long_1;
}
double v__cb_link_drag_move(float parameter_2,float parameter_3,short parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_3 = int_1 + int_2;
	short_1 = short_1 * short_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		}
	}
	return double_2;
}
char v__cb_link_icon_new(long parameter_2,float parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_2;
	long_1 = long_1 + long_2;
	short_1 = short_1 + short_1;
	long_4 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	return char_1;
}
short v__cb_link_move(float parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	char_1 = v__cb_link_icon_new(long_1,float_1,long_2);

	short_2 = short_1 * short_2;
	if(1)
	{
	}
	double_4 = double_2 * double_3;
	char_2 = char_1 + char_1;
	if(1)
	{
		float float_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = v__cb_link_drag_done(float_2);

		float_3 = float_3 + float_1;
		char_3 = char_2 + char_1;
		int_3 = int_3 * int_4;
		if(1)
		{
			char char_4 = 1;
			char_4 = char_3;
		}
		if(1)
		{
			double_4 = v__cb_link_drag_move(float_2,float_2,short_2,unsigned_int_1);

			short_1 = short_2;
		}
		long_2 = v__cb_link_drag_accept(int_2,char_3);

		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		double_4 = double_1 * double_3;
	}
	return short_3;
}
double v__cb_link_up_delay()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int_3 = int_1 * int_2;
	double_1 = double_1 * double_1;
	float_1 = v__activate_link(double_1,double_1);

	short_2 = short_1 + short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") == 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return double_2;
}
int v__cb_link_up(unsigned int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float_1 = float_1 * float_2;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double_1 = double_1 + double_1;
		double_2 = v__cb_link_up_delay();

		int_2 = int_1 * int_1;
		int_1 = int_2 + int_1;
		float_4 = float_3 + float_2;
		if(1)
		{
			if(1)
			{
				short short_1 = 1;
				short_1 = short_1 * short_1;
			}
			if(1)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_1 = double_3 + double_4;
			}
		}
		int_2 = int_3 + int_1;
	}
	return int_3;
}
void v_term_focus( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_2;
	char_1 = v__term_is_focused(long_1);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_3;
}
char v__term_is_focused( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	float_2 = float_1 + float_2;
	return char_1;
}
void v_term_unfocus( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_1 = v__term_is_focused(long_1);

	float_4 = float_2 * float_3;
	short_2 = short_1 + short_1;
	char_1 = char_1 * char_1;
}
long v__cb_ctxp_del(long parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_2 = char_1 + char_1;
	v_term_focus(short_1);

	float_2 = float_1 + float_1;
	v_term_unfocus(float_1);

	int_1 = int_1 * int_1;
	long_3 = long_1 + long_2;
	double_3 = double_1 + double_2;
	return long_2;
}
char v__cb_ctxp_dismissed(long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double_1 = double_2;
	int_1 = int_2;
	double_3 = double_3 * double_3;
	float_2 = float_1 * float_2;
	return char_1;
}
unsigned int v__cb_ctxp_link_copy(double parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 + char_1;
	float_1 = float_2;
	v__take_selection_text(int_1,short_1,float_2,-1 );

	short_1 = short_2;
	int_2 = int_3;
	double_1 = double_1;
	double_1 = double_1 * double_1;
	int_1 = int_1 + int_3;
	return unsigned_int_1;
}
double v__screen_visual_bounds( char parameter_1)
{
	double double_2 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		long_2 = long_1 * long_1;
		double_3 = double_1 * double_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "ai") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		float_1 = float_2;
		short_1 = short_1 + short_1;
	}
	return double_2;
}
char v__draw_cell( int parameter_1,short parameter_2,char parameter_3,char parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_1;
	char_2 = char_1 * char_2;
	short_1 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_3 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	int_3 = int_3;
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			short_2 = short_3 + short_3;
		}
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
	}
	if(1)
	{
		double_1 = double_3 * double_2;
	}
	if(1)
	{
		double_3 = double_2 + double_4;
	}
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int_3 = int_1 + int_2;
		float_3 = float_1 * float_1;
		long_2 = long_1 + long_1;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_7;
		int_1 = int_4 * int_5;
		double_4 = double_3 * double_4;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
	}
	if(1)
	{
		double double_5 = 1;
		double_4 = double_5 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_8 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		char_1 = char_2 * char_2;
	}
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		if(1)
		{
			short_1 = short_4;
		}
		if(1)
		{
			long_2 = long_2 * long_2;
		}
	}
	if(1)
	{
		short_1 = short_4 * short_1;
	}
	return char_3;
}
long v__draw_line( double parameter_1,float parameter_2,char parameter_3,int parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		char_1 = v__draw_cell(int_3,short_1,char_1,char_2);

		long_2 = long_1 * long_2;
	}
	return long_1;
}
char v_termpty_backlog_length( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	double double_8 = 1;
	char char_5 = 1;
	int int_4 = 1;
	float float_3 = 1;
	char char_6 = 1;
	float_2 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_2;
	double_3 = double_2 + double_1;
	int_1 = int_1 * int_2;
	double_3 = double_1 * double_4;
	double_4 = double_1 * double_4;
	short_1 = short_1;
	double_6 = double_5 * double_5;
	char_1 = char_1 + char_1;
	short_1 = short_2 + short_2;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_5;
	}
	double_4 = double_3 + double_6;
	if(1)
	{
		double double_7 = 1;
		double_7 = double_6 + double_6;
	}
	int_2 = int_3;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	int_3 = int_3;
	if(1)
	{
		int_1 = int_2;
	}
	short_1 = short_2;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_3 + char_3;
	}
	char_1 = char_3 + char_3;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_6;
	double_5 = double_2 + double_6;
	short_2 = short_3;
	double_8 = v_verify_beacon(char_5,int_4);

	float_3 = float_3 * float_1;
	return char_6;
}
char v_termio_pty_get( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_1;
	return char_1;
}
unsigned int v_termio_textgrid_get( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 * short_2;
	long_1 = long_1 + long_1;
	return unsigned_int_1;
}
unsigned int v_miniview_colors_get( unsigned int parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_2 = float_1 + float_2;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
		unsigned_int_1 = v_termio_textgrid_get(float_2);

		long_2 = long_1 * long_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_2 = 1;
		long_2 = long_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	return unsigned_int_3;
}
void v__deferred_renderer()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	long long_4 = 1;
	float float_4 = 1;
	char char_2 = 1;
	long long_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_6 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	long_1 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	double_3 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_3 = v_miniview_colors_get(unsigned_int_1,short_1);

	short_1 = v_termpty_cellrow_get(char_1,int_1,short_1);

	float_2 = float_1 + float_2;
	float_3 = float_3 * float_3;
	double_3 = double_3 * double_4;
	if(1)
	{
	}
	if(1)
	{
		long_3 = long_1;
	}
	double_1 = double_4 * double_1;
	double_5 = double_1 * double_5;
	long_1 = long_3;
	long_3 = long_1 + long_4;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	short_1 = short_1 * short_1;
	float_2 = float_4;
	int_1 = v_termio_scroll_get(double_4);

	char_2 = char_1 + char_2;
	double_5 = double_4 + double_3;
	long_5 = v__draw_line(double_3,float_5,char_2,int_1,float_1);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		double_1 = double_1 + double_6;
	}
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_1 * int_3;
		if(1)
		{
			int_1 = int_1 * int_3;
		}
		char_1 = v_termpty_backlog_length(long_1);

		int_3 = int_4;
	}
	char_2 = char_3 * char_2;
	double_6 = double_5 + double_2;
	char_4 = char_1 + char_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	}
	if(1)
	{
		float_5 = float_1 * float_5;
	}
	float_2 = float_5 * float_6;
	short_2 = short_1 + short_1;
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		double_4 = v__screen_visual_bounds(char_1);

		int_5 = int_4 * int_1;
		int_2 = int_2 * int_6;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_3 = unsigned_int_6 * unsigned_int_1;
			double_3 = double_6 * double_2;
		}
		if(1)
		{
			if(1)
			{
				short short_3 = 1;
				short short_4 = 1;
				double_4 = double_3 + double_6;
				short_4 = short_3 + short_4;
				short_3 = short_1 * short_1;
				char_4 = v_termio_pty_get(char_1);

				short_1 = short_3 * short_4;
			}
			if(1)
			{
				int_3 = int_4 + int_5;
				double_2 = double_4 + double_2;
			}
		}
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
	}
	unsigned_int_5 = unsigned_int_5;
	double_2 = double_6 + double_1;
	long_1 = long_2 + long_5;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
}
double v__queue_render( long parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	v__deferred_renderer();

	int_1 = int_1 * int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	return double_1;
}
void v_miniview_redraw( short parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	double_1 = v__queue_render(long_1);

	double_1 = double_1 + double_1;
}
long v__block_obj_del( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = v__smart_media_del(int_1,char_2);

	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	return long_1;
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
long v__termpty_is_dblwidth_get( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
	int_1 = v__termpty_is_dblwidth_slow_get(long_2,int_1);

}
char v_term_preedit_str_get()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	long_1 = long_2;
	if(1)
	{
	}
	return char_1;
}
char v_media_get( unsigned int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	return char_1;
}
double v__smart_media_clicked(unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	long_1 = long_2;
	double_1 = v_media_src_type_get(double_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 + short_2;
			short_1 = short_3;
			if(1)
			{
				if(1)
				{
					long long_3 = 1;
					long long_4 = 1;
					short short_4 = 1;
					char char_1 = 1;
					char char_3 = 1;
					long_4 = long_3 + long_2;
					short_1 = short_4 * short_1;
					if(1)
					{
						char_3 = char_1 * char_2;
					}
					if(1)
					{
						int_2 = int_1 + int_2;
						char_2 = char_1;
						if(1)
						{
							char char_4 = 1;
							unsigned int unsigned_int_4 = 1;
							char_2 = char_4 + char_3;
							unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
							unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
						}
					}
				}
				unsigned_int_3 = v_termio_config_get(char_5);

				int_2 = int_2 * int_3;
			}
		}
	}
	char_2 = v_media_get(unsigned_int_5);

	int_2 = int_3 + int_1;
	return double_3;
}
float v_media_control_get( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	return float_1;
}
float v__smart_media_stop(long parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	return float_1;
}
float v__smart_media_pause(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	double_3 = double_2;
	return float_1;
}
float v__smart_media_play(unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return float_3;
}
char v__smart_media_del(int parameter_2,char parameter_3)
{
	double double_1 = 1;
	char char_3 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	return char_3;
}
void v_media_visualize_set( short parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
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
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
}
void v_media_mute_set( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_4;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
}
void v_media_volume_set( unsigned int parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_2 = long_1 * long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ">z") > 0)
	{
	}
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_2;
}
char v__cb_media_vol(char parameter_2,double parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_2;
	if(1)
	{
	}
	v_media_volume_set(unsigned_int_1,double_3);

	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return char_1;
}
long v__cb_media_pos(long parameter_2,unsigned int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_1;
	float_2 = float_1 * float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ">?") > 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_media_position_set(float_1,double_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	return long_1;
}
float v__cb_media_pos_drag_stop(float parameter_2,double parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "W") > 0)
	{
	}
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_1 + int_2;
	char_3 = char_1 + char_2;
	return float_2;
}
short v__cb_media_pos_drag_start(int parameter_2,float parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	float_1 = float_2;
	v_media_position_set(float_1,double_1);

	double_1 = double_1 + double_2;
	short_1 = short_3 * short_3;
	return short_4;
}
void v_media_stop( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
long v__cb_media_stop(unsigned int parameter_2,int parameter_3,unsigned int parameter_4)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	v_media_stop(float_1);

	long_3 = long_1 * long_2;
	return long_3;
}
short v__cb_media_pause(short parameter_2,float parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	v_media_play_set(unsigned_int_1,char_1);

	long_2 = long_1 * long_1;
	return short_1;
}
void v_media_play_set( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		char_3 = char_1 + char_2;
		int_1 = int_1 + int_1;
	}
}
long v__cb_media_play(float parameter_2,long parameter_3,char parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long_2 = long_1 + long_1;
	return long_3;
	v_media_play_set(unsigned_int_1,char_1);

}
void v_media_position_set( float parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_2;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	int_2 = int_1 + int_1;
}
int v__cb_mov_ref(unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	return int_3;
}
int v__cb_mov_progress(char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1;
	return int_2;
}
int v__cb_mov_restart()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	int_2 = int_1 + int_1;
	double_2 = double_1 + double_1;
	return int_3;
}
char v__cb_mov_decode_stop(int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v__cb_mov_restart();

	char_2 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	short_3 = short_1 * short_2;
	double_2 = double_1 + double_2;
	return char_2;
}
int v__cb_mov_len_change(long parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	return int_1;
}
char v__cb_mov_frame_resize(float parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "^V") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	v__type_mov_calc(unsigned_int_2,double_1,double_2,float_1,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return char_1;
}
double v__cb_mov_frame_decode(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	v__type_mov_calc(unsigned_int_3,double_1,double_2,float_1,int_3);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
	}
	float_1 = float_2 + float_2;
	short_1 = short_1;
	char_3 = char_1 * char_2;
	double_1 = double_3;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_3 * float_3;
	double_2 = double_1;
	return double_4;
}
long v__type_mov_init( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_6 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_4 = 1;
	long long_2 = 1;
	double double_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	float float_5 = 1;
	long long_5 = 1;
	int int_7 = 1;
	char char_6 = 1;
	v_media_play_set(unsigned_int_1,char_1);

	float_1 = float_1 * float_1;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	double_2 = double_1 * double_2;
	short_1 = v__cb_media_pos_drag_start(int_1,float_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	char_1 = char_1 + char_1;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		int int_5 = 1;
		short_1 = v__cb_media_pause(short_2,float_2,float_3);

		char_2 = v__cb_media_vol(char_1,double_3,int_4);

		int_6 = int_1 * int_5;
		short_1 = short_1;
		float_2 = float_3 * float_3;
	}
	long_1 = v__cb_media_pos(long_1,unsigned_int_6,int_6);

	short_3 = short_2 + short_3;
	char_4 = char_1 * char_3;
	double_3 = double_1 + double_4;
	double_2 = v__cb_mov_frame_decode(double_3);

	unsigned_int_6 = unsigned_int_4;
	float_2 = float_4 + float_1;
	double_4 = double_4 + double_4;
	unsigned_int_3 = unsigned_int_7;
	if(1)
	{
		double_3 = double_2 + double_2;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "(_") > 0)
	{
		short_2 = short_2 * short_3;
	}
	char_1 = v__cb_mov_decode_stop(int_4);

	short_3 = short_2 + short_4;
	int_1 = v__cb_mov_ref(unsigned_int_2);

	double_4 = double_2;
	char_1 = char_4 * char_1;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_1;
	int_1 = v__cb_mov_progress(char_2);

	v_media_mute_set(double_1,long_2);

	double_5 = double_2;
	short_2 = short_4 + short_1;
	long_1 = v__cb_media_stop(unsigned_int_7,int_2,unsigned_int_7);

	short_3 = short_5 + short_6;
	v_media_position_set(float_1,double_3);

	long_1 = long_2 * long_1;
	double_2 = double_4;
	v_media_visualize_set(short_1,unsigned_int_3);

	int_2 = int_2 + int_2;
	long_2 = long_3;
	float_2 = v__cb_media_pos_drag_stop(float_3,double_2,float_3);

	long_3 = long_1 + long_4;
	unsigned_int_2 = unsigned_int_8 * unsigned_int_1;
	char_5 = v__cb_mov_frame_resize(float_1);

	double_5 = double_1 * double_3;
	long_4 = v__cb_media_play(float_5,long_5,char_2);

	long_5 = long_4 * long_2;
	long_4 = long_4 + long_1;
	int_7 = v__cb_mov_len_change(long_1);

	char_2 = char_4 * char_6;
	if(1)
	{
		short_1 = short_6;
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		double_2 = v_theme_apply(long_3,double_1,int_3);

		unsigned_int_9 = unsigned_int_3 + unsigned_int_3;
	}
	return long_1;
}
int v__cb_edje_preloaded(short parameter_2,short parameter_3,float parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long_1 = long_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	return int_1;
}
int v__type_edje_init( char parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	short_1 = short_2;
	int_1 = v__cb_edje_preloaded(short_3,short_1,float_1);

	double_1 = double_2;
	short_1 = short_4;
	int_2 = int_2 + int_1;
	int_2 = int_1 * int_3;
	float_1 = float_2;
	double_2 = double_2 + double_2;
	double_2 = double_2 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "f") < 0)
		{
			int int_4 = 1;
			long long_1 = 1;
			float_1 = float_1 * float_2;
			v_theme_auto_reload_enable(unsigned_int_1);

			int_4 = int_4 * int_3;
			long_1 = long_1 * long_1;
		}
	}
	return int_2;
}
unsigned int v__type_scale_init( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_2 = long_1 + long_2;
	char_1 = char_1;
	long_1 = long_3 + long_4;
	short_2 = short_1 + short_2;
	char_2 = char_3;
	double_2 = double_1 + double_2;
	int_1 = int_1 + int_2;
	double_2 = double_1 + double_2;
	int_3 = int_1 + int_3;
	int_2 = int_3 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_2 = v__cb_scale_preloaded(unsigned_int_3,char_1,-1 );

	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	return unsigned_int_3;
}
char v__cb_img_frame()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double_1 = double_2;
	short_2 = short_1 + short_1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	long_2 = long_1 + long_1;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		char_5 = char_4 * char_5;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_3 = float_1 * float_2;
		}
		float_4 = float_3 * float_4;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			char controller_5[3];
			fgets(controller_5 ,3 ,stdin);
			if( strcmp( controller_5, "Vo") < 0)
			{
				long long_3 = 1;
				long_3 = long_2 + long_2;
			}
		}
	}
	double_3 = double_2 + double_3;
	char_3 = char_2 * char_3;
	short_1 = short_3 * short_1;
	return char_2;
}
char v__type_img_anim_handle( float parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	short_1 = short_1 + short_1;
	int_2 = int_1 + int_1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	int_1 = int_2 + int_1;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	char_1 = v__cb_img_frame();

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2 * int_3;
	return char_2;
}
short v__cb_img_preloaded(long parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	int_1 = int_1 + int_2;
	return short_1;
}
void v__type_img_init( float parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = v__cb_img_preloaded(long_1,double_1);

	char_1 = char_2;
	char_2 = char_1 * char_1;
	char_3 = v__type_img_anim_handle(float_2);

	long_1 = long_1;
	long_1 = long_2 + long_2;
	short_3 = short_2 + short_2;
	double_1 = double_1 * double_1;
	short_1 = short_3 * short_4;
	long_2 = long_3 + long_4;
	int_2 = int_2;
}
unsigned int v__url_compl_cb(int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	int_1 = v__type_edje_init(char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = v__type_scale_init(long_1);

	long_2 = long_1 + long_1;
	v__type_img_init(float_1);

	int_1 = int_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "aj") > 0)
	{
	}
	double_1 = double_1 + double_1;
	double_2 = double_2 + double_2;
	long_1 = long_1;
	short_1 = short_1 + short_2;
	float_1 = float_1 * float_1;
	float_1 = float_1 * float_1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_1 * long_3;
	short_4 = short_1 + short_3;
	int_2 = int_2 + int_1;
	short_6 = short_5 * short_6;
	v__smart_calculate(short_5,-1 );

	unsigned_int_1 = unsigned_int_1;
	long_2 = v__type_mov_init(short_2);

	float_2 = float_2;
	int_1 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_3 * int_4;
	int_3 = int_4;
	char_2 = char_1 * char_2;
	return unsigned_int_3;
}
float v__url_prog_cb(int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1;
	float_1 = float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char_1 = char_1 + char_1;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_2;
		}
		double_1 = double_3 + double_1;
		long_3 = long_1 * long_2;
		if(1)
		{
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_2 = 1;
			short_1 = short_1 * short_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			float_2 = float_1 * float_2;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
	}
	return float_3;
}
void v__type_thumb_calc( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,short parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char_2 = char_1 * char_2;
		double_1 = double_1;
		int_2 = int_1 + int_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			int_1 = int_2 * int_3;
			float_2 = float_1 + float_1;
			if(1)
			{
				char char_3 = 1;
				char_3 = char_3 + char_1;
			}
		}
		if(1)
		{
			double double_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			double_1 = double_1 + double_2;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		long_2 = long_1 * long_2;
		int_2 = int_3 * int_2;
	}
	int_1 = int_4;
	int_6 = int_1 + int_5;
}
void v__type_mov_calc( unsigned int parameter_1,double parameter_2,double parameter_3,float parameter_4,int parameter_5)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	short_1 = short_1 * short_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		short_2 = short_3 * short_2;
		short_4 = short_1;
	}
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		double_2 = double_1 * double_1;
		float_2 = float_1 * float_1;
		short_2 = short_4;
		if(1)
		{
			float_3 = float_1 + float_3;
		}
		if(1)
		{
			float float_4 = 1;
			float_3 = float_2 * float_4;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 + int_1;
			double_1 = double_2 + double_3;
			if(1)
			{
				double double_5 = 1;
				double double_6 = 1;
				double_4 = double_4 + double_5;
				double_6 = double_4 * double_6;
				if(1)
				{
					double_5 = double_5 + double_1;
				}
			}
		}
		if(1)
		{
			double_3 = double_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				char char_1 = 1;
				short_3 = short_1 + short_1;
				char_1 = char_2;
				if(1)
				{
					unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
				}
			}
		}
		if(1)
		{
			int int_4 = 1;
			double_4 = double_4 + double_3;
			int_4 = int_4 + int_2;
		}
		double_3 = double_7;
		char_2 = char_3 + char_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_4;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	double_4 = double_7 * double_2;
}
char v__type_edje_calc( char parameter_1,int parameter_2,float parameter_3,short parameter_4,char parameter_5)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return char_2;
}
unsigned int v__type_img_calc( char parameter_1,char parameter_2,int parameter_3,char parameter_4,double parameter_5)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_7 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_1 * short_1;
		double_2 = double_3;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_5 = 1;
		char_1 = char_2;
		if(1)
		{
			double_3 = double_3 * double_4;
			int_3 = int_1 * int_2;
			if(1)
			{
				short_1 = short_3 + short_1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				if(1)
				{
					char_1 = char_1 + char_2;
				}
			}
		}
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			double_4 = double_5 * double_6;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			if(1)
			{
				int_2 = int_3 * int_4;
				int_5 = int_1;
				if(1)
				{
					float float_1 = 1;
					float_1 = float_1 + float_1;
				}
			}
			if(1)
			{
				short short_4 = 1;
				unsigned int unsigned_int_3 = 1;
				short_4 = short_2;
				unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
		int_2 = int_5 * int_5;
		short_5 = short_2 + short_3;
		short_5 = short_1 * short_3;
	}
	int_2 = int_4 + int_3;
	double_2 = double_7 * double_7;
	return unsigned_int_2;
}
short v__cb_scale_preloaded(unsigned int parameter_2,char parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	char * vul_var;
	long_2 = long_1 * long_1;
	char controller4vul_828[2];
	fgets(controller4vul_828 ,2 ,stdin);
	if( strcmp( controller4vul_828, "b") < 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 387)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		double_3 = double_1 + double_2;
		char_1 = char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		long_1 = long_2 + long_2;
		int_1 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_2 = short_1 * short_1;
	}
	char_1 = char_3;
}
char v__type_scale_calc( unsigned int parameter_1,char parameter_2,int parameter_3,short parameter_4,long parameter_5,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float float_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_3 = double_1 * double_2;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 * int_2;
		int_1 = int_2 + int_1;
	}
	char controller4vul_824[3];
	fgets(controller4vul_824 ,3 ,stdin);
	if( strcmp( controller4vul_824, "{;") > 0)
	{
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		char controller4vul_825[2];
		fgets(controller4vul_825 ,2 ,stdin);
		if( strcmp( controller4vul_825, "X") < 0)
		{
			double_2 = double_2;
			double_3 = double_2 * double_3;
			char controller4vul_826[3];
			fgets(controller4vul_826 ,3 ,stdin);
			if( strcmp( controller4vul_826, "^C") > 0)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				double_3 = double_3 + double_3;
				char controller4vul_827[2];
				fgets(controller4vul_827 ,2 ,stdin);
				if( strcmp( controller4vul_827, "e") > 0)
				{
					short_1 = v__cb_scale_preloaded(unsigned_int_3,char_1,uni_para);

					char_2 = char_1 * char_1;
				}
			}
		}
		if(1)
		{
			long long_1 = 1;
			long_3 = long_1 + long_2;
			double_3 = double_2 + double_2;
			if(1)
			{
				float float_3 = 1;
				float_1 = float_3 * float_4;
				char_2 = char_1 + char_3;
				char controller_3[2];
				fgets(controller_3 ,2 ,stdin);
				if( strcmp( controller_3, "g") < 0)
				{
					double_2 = double_3 + double_3;
				}
			}
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			float_4 = float_1 * float_4;
		}
		long_2 = long_3 * long_3;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		int_3 = int_2 + int_3;
		double_5 = double_4 + double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double_3 = double_5 * double_5;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		char_1 = char_1 * char_2;
		if(1)
		{
			float_2 = float_4;
		}
		if(1)
		{
			double_2 = double_4 + double_4;
		}
		if(1)
		{
			char char_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_2 = 1;
			double_1 = double_3;
			char_4 = char_3 + char_2;
			long_2 = long_2;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
			int_3 = int_2;
			int_1 = int_1;
			int_3 = int_1 * int_2;
			short_2 = short_1 + short_1;
		}
		unsigned_int_3 = unsigned_int_6 * unsigned_int_6;
		double_5 = double_3;
	}
	if(1)
	{
		float float_5 = 1;
		int int_4 = 1;
		float_2 = float_5 + float_5;
		int_2 = int_4;
	}
	char_2 = char_3 + char_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	return char_2;
}
long v__unsmooth_timeout(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 + int_2;
	int_1 = int_3 * int_1;
	if(1)
	{
	}
	char_1 = char_1;
	double_2 = double_1 * double_2;
	float_2 = float_1 + float_1;
	char controller4vul_822[3];
	fgets(controller4vul_822 ,3 ,stdin);
	if( strcmp( controller4vul_822, "VG") < 0)
	{
		int int_4 = 1;
		int_3 = int_3 + int_4;
		char controller4vul_823[3];
		fgets(controller4vul_823 ,3 ,stdin);
		if( strcmp( controller4vul_823, "qf") < 0)
		{
			char_1 = v__type_scale_calc(unsigned_int_1,char_1,int_1,short_1,long_1,uni_para);

			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	}
	return long_1;
}
void v__smooth_handler(int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char_2 = char_1 + char_2;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	char_3 = char_2;
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4;
	}
	char controller4vul_818[2];
	fgets(controller4vul_818 ,2 ,stdin);
	if( strcmp( controller4vul_818, "A") > 0)
	{
		char controller4vul_819[3];
		fgets(controller4vul_819 ,3 ,stdin);
		if( strcmp( controller4vul_819, "=L") < 0)
		{
			float float_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			float_1 = float_1 + float_1;
			int_2 = int_1 * int_1;
			char controller4vul_820[3];
			fgets(controller4vul_820 ,3 ,stdin);
			if( strcmp( controller4vul_820, "1b") < 0)
			{
				float float_2 = 1;
				float_2 = float_2 + float_1;
				char controller4vul_821[3];
				fgets(controller4vul_821 ,3 ,stdin);
				if( strcmp( controller4vul_821, "qn") < 0)
				{
					int int_3 = 1;
					long_1 = v__unsmooth_timeout(uni_para);

					int_1 = int_3 * int_1;
				}
			}
			if(1)
			{
				int int_4 = 1;
				int_4 = int_4 * int_4;
			}
			if(1)
			{
				char char_5 = 1;
				char char_6 = 1;
				char_5 = char_6;
			}
			float_1 = float_1 + float_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2 + double_2;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
}
void v__smart_calculate( short parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_2;
	char controller4vul_817[2];
	fgets(controller4vul_817 ,2 ,stdin);
	if( strcmp( controller4vul_817, "V") < 0)
	{
		v__smooth_handler(uni_para);

	}
	char_3 = char_1 + char_2;
	if(1)
	{
		double_3 = double_2 + double_2;
	}
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	long_1 = long_2 + long_2;
	double_2 = double_4 + double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_3;
	char_1 = char_2 + char_2;
	double_4 = double_1 * double_5;
	double_4 = double_6 + double_4;
	int_2 = int_1 * int_2;
	short_2 = short_1 * short_2;
	double_1 = double_2 + double_1;
	float_2 = float_1 + float_2;
	double_3 = double_6 + double_3;
	char_1 = char_2;
	double_6 = double_4 + double_6;
	float_3 = float_1 * float_3;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = int_3 + int_1;
		unsigned_int_2 = unsigned_int_3;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, ")F") == 0)
	{
		int int_4 = 1;
		int_4 = int_3 + int_3;
		short_2 = short_2 * short_1;
	}
}
float v__smart_move( unsigned int parameter_1,char parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	return float_1;
}
long v__smart_resize( long parameter_1,unsigned int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_1;
	return long_2;
}
unsigned int v__smart_del( int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_1 + double_1;
		double_2 = double_1;
		double_3 = double_2 * double_1;
	}
	int_3 = int_1 + int_2;
	float_1 = float_2;
	char_2 = char_1 + char_1;
	if(1)
	{
		if(1)
		{
			short_2 = short_1 * short_1;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3 + char_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_1 * int_3;
	}
	if(1)
	{
		short_2 = short_2 + short_1;
	}
	if(1)
	{
		char_2 = char_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		char char_5 = 1;
		char_1 = char_1 + char_5;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 + float_1;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	char_4 = char_4 + char_4;
	return unsigned_int_2;
}
double v__smart_add( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	short_2 = short_1 * short_2;
	short_1 = short_1 + short_2;
	double_1 = double_2;
	short_1 = short_1 * short_2;
	double_2 = double_3 + double_4;
	double_2 = double_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	char_1 = char_1 + char_2;
	return double_5;
}
double v__smart_init(int uni_para)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	double double_2 = 1;
	v__smart_calculate(short_1,uni_para);

	float_1 = float_1 * float_2;
	double_1 = double_1;
	int_1 = int_1 * int_2;
	int_2 = int_1 + int_2;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	short_2 = short_2 * short_2;
	char_3 = char_1 + char_2;
	char_4 = char_3 + char_4;
	long_1 = long_1 * long_1;
	return double_2;
}
short v_media_add( int parameter_1,short parameter_2,long parameter_3,int parameter_4,char parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_6 = 1;
	int int_4 = 1;
	char char_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_6 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_11 = 1;
	double double_12 = 1;
	double double_13 = 1;
	double double_14 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_4;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		char_2 = char_1 + char_1;
	}
	short_2 = short_1 + short_1;
	float_1 = float_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
	char_2 = char_2 * char_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
	double_3 = double_1 + double_2;
	double_3 = double_1 + double_3;
	char controller4vul_811[2];
	fgets(controller4vul_811 ,2 ,stdin);
	if( strcmp( controller4vul_811, ":") > 0)
	{
		int int_5 = 1;
		char controller4vul_812[3];
		fgets(controller4vul_812 ,3 ,stdin);
		if( strcmp( controller4vul_812, "m`") < 0)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			double double_4 = 1;
			short short_3 = 1;
			char_1 = char_1 * char_1;
			long_3 = long_2;
			if(1)
			{
				double_1 = double_1 * double_1;
				unsigned_int_7 = unsigned_int_1 + unsigned_int_6;
				short_1 = short_2 + short_2;
			}
			if(1)
			{
				float_2 = float_1 * float_2;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_8;
			}
			if(1)
			{
				char_2 = char_1 + char_2;
			}
			if(1)
			{
				double_4 = double_1 + double_3;
			}
			if(1)
			{
				char_1 = char_2;
			}
			if(1)
			{
				double_2 = double_2 + double_1;
			}
			if(1)
			{
				short_3 = short_3;
			}
			if(1)
			{
				char_1 = char_1 + char_2;
				double_2 = double_1;
				int_1 = int_1 + int_1;
				unsigned_int_8 = unsigned_int_1 * unsigned_int_4;
				unsigned_int_5 = unsigned_int_2 + unsigned_int_7;
				short_1 = short_4 * short_4;
				unsigned_int_3 = unsigned_int_6 + unsigned_int_4;
			}
			char controller4vul_813[3];
			fgets(controller4vul_813 ,3 ,stdin);
			if( strcmp( controller4vul_813, "er") < 0)
			{
				char char_3 = 1;
				double_5 = double_1;
				int_3 = int_2 + int_3;
				char_2 = char_3;
				char controller4vul_814[3];
				fgets(controller4vul_814 ,3 ,stdin);
				if( strcmp( controller4vul_814, "Tv") < 0)
				{
					short short_5 = 1;
					short_1 = short_1 * short_5;
					if(1)
					{
						short_6 = short_3 + short_4;
						unsigned_int_3 = unsigned_int_6;
					}
					char controller4vul_815[3];
					fgets(controller4vul_815 ,3 ,stdin);
					if( strcmp( controller4vul_815, ":L") < 0)
					{
						int_3 = int_3;
						char controller4vul_816[3];
						fgets(controller4vul_816 ,3 ,stdin);
						if( strcmp( controller4vul_816, "q8") < 0)
						{
							short short_7 = 1;
							double_5 = v__smart_init(uni_para);

							int_1 = int_4 + int_5;
							double_1 = double_3 + double_2;
							short_7 = short_4 + short_3;
						}
						if(1)
						{
							double double_7 = 1;
							char_4 = char_3 * char_1;
							long_2 = long_2;
							int_1 = int_3 + int_2;
							long_2 = long_2 + long_3;
							double_7 = double_1 + double_6;
							unsigned_int_9 = unsigned_int_1;
							unsigned_int_3 = unsigned_int_5 * unsigned_int_10;
							double_5 = double_6 + double_4;
							int_4 = int_1 + int_5;
						}
					}
				}
				if(1)
				{
					int_1 = int_6 + int_6;
				}
			}
		}
		if(1)
		{
			int_3 = int_4 * int_5;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_4 = unsigned_int_6 * unsigned_int_2;
			float_1 = float_2 * float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_8 = 1;
			short_1 = short_4 * short_6;
			double_8 = double_6 + double_5;
		}
		double_3 = double_5;
		if(1)
		{
			float_1 = float_2;
			double_10 = double_2 * double_9;
		}
		unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
		if(1)
		{
			int_1 = int_4 * int_4;
			unsigned_int_9 = unsigned_int_3 * unsigned_int_5;
		}
		int_4 = int_3 * int_1;
		if(1)
		{
			int int_7 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
			int_7 = int_2 + int_6;
		}
		char_4 = char_4;
		double_5 = double_9 * double_1;
	}
	unsigned_int_11 = unsigned_int_10;
	double_10 = double_11 + double_1;
	double_12 = double_3 * double_1;
	double_6 = double_9;
	double_13 = double_9;
	char_4 = char_1;
	double_9 = double_14 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		long_2 = long_3 * long_3;
	}
	return short_1;
}
void v__block_media_activate( long parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_3 = int_1 * int_2;
	int_1 = int_4 + int_4;
	int_3 = int_2 * int_5;
	unsigned_int_1 = unsigned_int_1;
	int_4 = int_1 * int_5;
	char controller4vul_810[2];
	fgets(controller4vul_810 ,2 ,stdin);
	if( strcmp( controller4vul_810, "Q") > 0)
	{
		short_1 = v_media_add(int_2,short_2,long_1,int_2,char_1,uni_para);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		int int_6 = 1;
		int_2 = int_6;
	}
	if(1)
	{
		char_2 = char_2 + char_1;
	}
	char_1 = char_2 + char_2;
	long_1 = long_2 + long_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	int_5 = int_5;
	int_4 = int_1;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	double_1 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	char_2 = char_1 + char_3;
	if(1)
	{
		double double_4 = 1;
		short short_3 = 1;
		double_2 = double_4;
		short_3 = short_1 + short_1;
	}
	long_3 = long_2 + long_2;
	long_4 = long_3 + long_2;
	unsigned_int_5 = unsigned_int_4;
	if(1)
	{
		char char_4 = 1;
		char_1 = char_1 + char_4;
	}
}
short v__block_edje_message_cb(char parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_7 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_8 = 1;
	long long_4 = 1;
	char char_4 = 1;
	int int_9 = 1;
	float float_5 = 1;
	long long_5 = 1;
	short short_3 = 1;
	int int_10 = 1;
	char char_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_1;
	int_3 = int_1 * int_2;
	v_termpty_write(short_1,long_1,int_3);

	int_4 = int_2 * int_1;
	int_3 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		int_6 = int_5 + int_4;
	}
	int_1 = int_6 * int_2;
	if(1)
	{
	}
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_2;
	float_1 = float_1 + float_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	long_1 = long_2 + long_2;
	int_4 = int_3 + int_5;
	char_1 = char_1 + char_2;
	double_1 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	double_4 = double_3 * double_3;
	long_1 = long_2 + long_2;
	double_6 = double_5 + double_3;
	int_5 = int_4;
	char_2 = char_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_3 + char_2;
		float_3 = float_2 + float_2;
	}
	float_1 = float_1 + float_4;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
	short_2 = short_1 + short_1;
	int_1 = int_6 + int_5;
	char_1 = char_1 * char_3;
	long_1 = long_1 * long_3;
	int_3 = int_1 + int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		int_3 = int_7 * int_1;
		int_6 = int_4;
	}
	int_6 = int_5 * int_6;
	double_7 = double_1 + double_5;
	double_8 = double_7 + double_2;
	short_2 = short_2;
	double_9 = double_4 + double_6;
	int_2 = int_8 + int_5;
	int_6 = int_5 * int_8;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float_2 = float_2 * float_3;
		long_4 = long_3 * long_4;
		char_1 = char_4 * char_3;
	}
	unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
	int_6 = int_5;
	double_4 = double_9;
	int_8 = int_1 * int_7;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
	double_4 = double_1;
	int_9 = int_2 * int_5;
	int_5 = int_6;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
	float_2 = float_4 + float_5;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_3 = int_9 * int_7;
	long_5 = long_1 * long_4;
	short_2 = short_2;
	short_2 = short_2 * short_3;
	double_3 = double_2 + double_7;
	float_5 = float_4 * float_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_4 = double_3;
		char_4 = char_1 * char_3;
		int_7 = int_2;
	}
	int_2 = int_10 * int_8;
	short_1 = short_3 + short_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	char_4 = char_2 + char_1;
	double_2 = double_6 + double_2;
	char_3 = char_3 * char_4;
	long_1 = long_1;
	char_4 = char_1 + char_5;
	int_1 = int_10 + int_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		char char_6 = 1;
		char_6 = char_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_4 = unsigned_int_4;
	}
	double_2 = double_3;
	int_8 = int_7;
	int_6 = int_10;
	return short_1;
}
void v_termpty_write( short parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 + double_2;
	}
}
void v__block_edje_signal_cb(short parameter_2,unsigned int parameter_3,float parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_2;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	int_3 = int_1 + int_2;
	long_4 = long_1 * long_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	v_termpty_write(short_1,long_2,int_3);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double_1 = double_1 * double_3;
		unsigned_int_2 = unsigned_int_4;
		int_4 = int_1;
		int_3 = int_3 + int_1;
		int_4 = int_2 * int_4;
		int_3 = int_5;
		short_1 = short_1;
		char_1 = char_2 + char_1;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		int int_6 = 1;
		int int_7 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		char_4 = char_2 + char_3;
		int_7 = int_6 + int_2;
	}
}
void v_termpty_block_chid_update( short parameter_1,float parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	long_1 = long_1 + long_1;
}
void v__block_edje_cmds( short parameter_1,long parameter_2,int parameter_3,short parameter_4)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	v__block_edje_signal_cb(short_1,unsigned_int_1,float_1);

	int_1 = int_1 * int_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "!H") > 0)
	{
	}
	v_termpty_block_chid_update(short_2,float_1);

	short_1 = v__block_edje_message_cb(char_1,float_2,int_1);

}
int v_homedir_get( char parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float_3 = float_1 * float_2;
		double_2 = double_1 + double_1;
		if(1)
		{
			int_2 = int_3;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	return int_3;
}
char v__block_edje_activate( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short_1 = short_1 + short_1;
	float_3 = float_1 * float_2;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	double_4 = double_2 + double_1;
	if(1)
	{
		v_config_theme_path_default_get(double_5);

		v__block_edje_cmds(short_2,long_1,int_1,short_3);

		short_4 = short_3 * short_2;
	}
	if(1)
	{
		double_2 = double_6 * double_7;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2 + long_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_3 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			long_1 = long_3 + long_2;
		}
		if(1)
		{
			float_3 = float_3 * float_4;
			double_3 = double_4 * double_1;
		}
	}
	char_3 = char_1 * char_2;
	float_4 = float_4;
	double_6 = double_6 + double_6;
	int_1 = v_homedir_get(char_1,short_4);

	short_1 = short_4 + short_1;
	if(1)
	{
		double_7 = double_7 * double_1;
	}
	if(1)
	{
		double double_8 = 1;
		double_8 = double_7;
	}
	return char_2;
}
int v__block_activate( char parameter_1,unsigned int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1;
	char controller4vul_809[2];
	fgets(controller4vul_809 ,2 ,stdin);
	if( strcmp( controller4vul_809, "[") < 0)
	{
		v__block_media_activate(long_1,int_2,uni_para);

	}
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_2 * float_2;
	}
	return int_1;
}
float v_termpty_block_get( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	if(1)
	{
	}
	return float_1;
}
int v_termpty_block_id_get( char parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "VB") < 0)
	{
	}
	long_3 = long_1 * long_2;
	short_2 = short_1 + short_1;
	double_1 = double_1;
	return int_1;
}
void v_termpty_backscroll_adjust( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
	char_1 = char_1 + char_2;
	double_1 = v_verify_beacon(char_3,int_1);

}
int v__smart_apply( short parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_7 = 1;
	int int_10 = 1;
	int int_11 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	float float_5 = 1;
	double double_6 = 1;
	float float_6 = 1;
	float float_7 = 1;
	int int_12 = 1;
	int int_13 = 1;
	int int_14 = 1;
	int int_15 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_12 = 1;
	float float_8 = 1;
	double double_11 = 1;
	short short_7 = 1;
	char char_8 = 1;
	long long_7 = 1;
	int int_16 = 1;
	float float_10 = 1;
	float_1 = float_2;
	float_1 = float_2 * float_2;
	int_2 = int_1 + int_2;
	int_1 = int_1 + int_1;
	char_2 = char_1 * char_2;
	double_1 = double_1;
	double_1 = double_2 + double_2;
	short_3 = short_1 * short_2;
	short_3 = short_4 * short_2;
	double_3 = double_1 + double_1;
	int_1 = int_1 * int_3;
	int_6 = int_4 * int_5;
	short_5 = short_5 + short_1;
	double_1 = double_1 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		double_2 = double_1 + double_2;
		int_2 = int_7 + int_6;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_1;
		if(1)
		{
			int_5 = int_6;
		}
		float_1 = float_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		int_3 = int_6 * int_7;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_5 = 1;
			char controller4vul_806[2];
			fgets(controller4vul_806 ,2 ,stdin);
			if( strcmp( controller4vul_806, "l") > 0)
			{
				char controller4vul_807[2];
				fgets(controller4vul_807 ,2 ,stdin);
				if( strcmp( controller4vul_807, "L") < 0)
				{
					char controller4vul_808[2];
					fgets(controller4vul_808 ,2 ,stdin);
					if( strcmp( controller4vul_808, "+") < 0)
					{
						int_4 = v__block_activate(char_2,unsigned_int_3,uni_para);

						unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
					}
					float_3 = float_3 + float_4;
				}
				unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
				if(1)
				{
					int_8 = int_3 * int_4;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
				}
				long_2 = long_1 + long_1;
				double_1 = double_2 + double_2;
				unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
				int_4 = int_5 * int_5;
				double_3 = double_1 * double_1;
				short_6 = short_2 + short_6;
			}
			if(1)
			{
				char char_6 = 1;
				float_1 = float_3 + float_2;
				char_5 = char_3 + char_4;
				if(1)
				{
					long long_3 = 1;
					if(1)
					{
						unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
					}
					long_4 = long_2 + long_3;
					double_5 = double_4 + double_3;
					unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
					int_2 = int_7 + int_4;
					int_7 = int_4 * int_4;
					float_4 = float_3 * float_3;
					float_1 = float_3;
					int_4 = int_7 + int_4;
					long_4 = long_4 + long_5;
					unsigned_int_7 = unsigned_int_2 * unsigned_int_1;
					long_4 = long_4 + long_2;
					unsigned_int_3 = unsigned_int_8 + unsigned_int_8;
					if(1)
					{
						char_6 = char_2 * char_6;
						int_9 = int_3 * int_6;
						unsigned_int_9 = unsigned_int_8;
						double_2 = double_5;
						double_5 = double_5;
					}
				}
				if(1)
				{
					if(1)
					{
						if(1)
						{
							unsigned_int_3 = unsigned_int_7 + unsigned_int_8;
						}
						char_7 = char_4;
					}
					char_4 = char_4 * char_6;
					if(1)
					{
						unsigned_int_5 = unsigned_int_5 + unsigned_int_9;
					}
					if(1)
					{
						int_9 = int_9 + int_10;
					}
					short_6 = short_3 * short_1;
					double_3 = double_5 + double_3;
					short_5 = short_2 + short_1;
					char_6 = char_2 + char_4;
					int_1 = int_5 * int_11;
					float_3 = float_3;
					if(1)
					{
						unsigned_int_11 = unsigned_int_10 + unsigned_int_2;
					}
				}
				if(1)
				{
					long long_6 = 1;
					long_2 = long_1;
					long_5 = long_2 * long_4;
					short_4 = short_3 + short_4;
					float_5 = float_3 * float_2;
					long_6 = long_5 * long_5;
					double_3 = double_5 * double_6;
					if(1)
					{
						double_1 = double_2;
						short_2 = short_5;
					}
					if(1)
					{
						int_11 = int_3 * int_5;
						float_7 = float_6 + float_6;
					}
					if(1)
					{
						int_6 = int_12 * int_12;
					}
					if(1)
					{
						if(1)
						{
							int_12 = int_5 + int_10;
						}
						if(1)
						{
							unsigned_int_4 = unsigned_int_3;
						}
					}
					if(1)
					{
						short_4 = short_5 + short_2;
					}
					if(1)
					{
						double_2 = double_1 * double_3;
					}
					if(1)
					{
						char_6 = char_5 * char_1;
						unsigned_int_6 = unsigned_int_8;
						long_6 = long_1;
						int_13 = int_8 * int_6;
						double_2 = double_4;
						double_1 = double_4 + double_6;
						float_5 = float_2 * float_7;
					}
					if(1)
					{
						short_4 = short_4 * short_6;
					}
					if(1)
					{
						short_6 = short_6 * short_5;
					}
					if(1)
					{
						if(1)
						{
							int_14 = int_15;
						}
						int_15 = int_8 + int_4;
					}
					double_7 = double_6 * double_1;
					char_5 = char_1 * char_6;
					unsigned_int_9 = unsigned_int_11;
					double_7 = double_8 + double_4;
					if(1)
					{
						double_9 = double_1 + double_5;
						unsigned_int_9 = unsigned_int_9 * unsigned_int_8;
					}
					if(1)
					{
						short_2 = short_1 * short_6;
						double_9 = double_9 * double_8;
					}
					double_4 = double_6 * double_10;
					double_5 = double_4 * double_1;
					double_5 = double_1 + double_3;
					char_3 = char_5 * char_7;
					if(1)
					{
						unsigned_int_6 = unsigned_int_12 + unsigned_int_9;
					}
				}
			}
		}
		char_2 = char_4 + char_1;
		if(1)
		{
			double_8 = double_10 + double_7;
		}
	}
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_9;
		double_7 = double_9 + double_3;
		float_5 = float_4 + float_8;
		float_6 = float_1 * float_5;
		unsigned_int_4 = unsigned_int_8;
		int_5 = int_15 + int_10;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				long long_8 = 1;
				unsigned int unsigned_int_13 = 1;
				double_1 = double_9 * double_10;
				unsigned_int_3 = unsigned_int_7;
				short_2 = short_2 * short_2;
				if(1)
				{
					double_11 = double_9 * double_7;
				}
				double_11 = double_11 + double_9;
				if(1)
				{
					if(1)
					{
						short_7 = short_2 + short_3;
						int_15 = int_6 + int_13;
						double_4 = double_11 * double_4;
					}
				}
				if(1)
				{
					short_4 = short_3 * short_2;
					int_1 = int_10 * int_9;
				}
				char_2 = char_3 * char_2;
				char_8 = char_8 + char_5;
				unsigned_int_11 = unsigned_int_3 + unsigned_int_9;
				double_11 = double_6;
				double_3 = double_5;
				int_3 = int_1 + int_4;
				short_7 = short_1 + short_5;
				int_7 = int_15 + int_7;
				unsigned_int_6 = unsigned_int_11 + unsigned_int_7;
				long_8 = long_4 * long_7;
				unsigned_int_4 = unsigned_int_12 + unsigned_int_13;
				if(1)
				{
					float float_9 = 1;
					short short_8 = 1;
					double double_12 = 1;
					int_7 = int_9;
					double_2 = double_2 * double_9;
					float_2 = float_4 + float_6;
					double_1 = double_3 + double_3;
					float_2 = float_9 + float_2;
					short_8 = short_2 * short_4;
					unsigned_int_7 = unsigned_int_4 + unsigned_int_9;
					double_3 = double_9 * double_12;
					float_5 = float_9;
					short_2 = short_8;
				}
				unsigned_int_10 = unsigned_int_3;
				if(1)
				{
					if(1)
					{
						long_2 = long_4 * long_8;
						int_16 = int_11 + int_1;
					}
				}
			}
			unsigned_int_7 = unsigned_int_3 + unsigned_int_3;
		}
		short_6 = short_4 * short_3;
		int_13 = int_7;
	}
	char_5 = char_3;
	if(1)
	{
		short_4 = short_5;
		long_2 = long_7 + long_5;
		float_6 = float_4 * float_10;
	}
	if(1)
	{
		int_10 = int_5 + int_15;
	}
	if(1)
	{
		double_10 = double_4 + double_1;
	}
	int_11 = int_6 + int_6;
	char_1 = char_4 + char_1;
	int_11 = int_10 + int_6;
	if(1)
	{
		unsigned int unsigned_int_14 = 1;
		int int_17 = 1;
		short_7 = short_5 + short_4;
		double_5 = double_11 + double_4;
		short_5 = short_7 * short_1;
		double_6 = double_6 * double_11;
		short_7 = short_3 * short_3;
		double_2 = double_2 * double_1;
		if(1)
		{
			double_11 = double_9 * double_1;
			char_7 = char_1 * char_5;
		}
		int_5 = int_12 * int_5;
		int_9 = int_14 * int_8;
		float_10 = float_7 * float_5;
		int_1 = int_3 * int_1;
		unsigned_int_14 = unsigned_int_11 * unsigned_int_8;
		float_2 = float_10;
		long_7 = long_7 * long_2;
		short_1 = short_3 + short_3;
		if(1)
		{
			double_8 = double_7 + double_9;
		}
		if(1)
		{
			if(1)
			{
				float_8 = float_1;
			}
			if(1)
			{
				double double_13 = 1;
				double_13 = double_5 * double_2;
			}
			if(1)
			{
				char_8 = char_8 * char_5;
			}
			if(1)
			{
				long_4 = long_1 + long_5;
			}
			if(1)
			{
				int_7 = int_16;
			}
		}
		int_13 = int_1 + int_17;
	}
	if(1)
	{
		int_15 = int_4;
	}
	if(1)
	{
		short_7 = short_7 * short_3;
	}
	float_1 = float_1;
	return int_10;
}
int v__smart_cb_change(int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int_1 = v__smart_apply(short_1,uni_para);

	double_2 = double_1 * double_1;
	short_2 = short_2 * short_2;
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_3 + double_2;
	float_2 = float_1 + float_1;
	return int_2;
}
double v__smart_update_queue( float parameter_1,char parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char controller4vul_805[2];
	fgets(controller4vul_805 ,2 ,stdin);
	if( strcmp( controller4vul_805, "o") > 0)
	{
		int_1 = v__smart_cb_change(uni_para);

	}
	int_1 = int_2 * int_3;
	return double_1;
}
void v__lost_selection_reset_job()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double_3 = double_1 * double_2;
	v__lost_selection(char_1,-1 );

	long_2 = long_1 * long_1;
	double_2 = double_4 + double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int_2 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
}
void v__lost_selection(char parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_2 + int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	char controller4vul_802[3];
	fgets(controller4vul_802 ,3 ,stdin);
	if( strcmp( controller4vul_802, "cA") < 0)
	{
		char controller4vul_803[3];
		fgets(controller4vul_803 ,3 ,stdin);
		if( strcmp( controller4vul_803, "OH") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_2;
			char controller4vul_804[3];
			fgets(controller4vul_804 ,3 ,stdin);
			if( strcmp( controller4vul_804, "eB") > 0)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_2 = v__smart_update_queue(float_1,char_2,uni_para);

				double_4 = double_1 * double_3;
			}
			long_2 = long_1 * long_1;
		}
		char_1 = char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		int int_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_4;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		char_2 = char_1 + char_3;
		int_5 = int_5 + int_6;
		unsigned_int_3 = unsigned_int_4;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	}
}
void v__take_selection_text( int parameter_1,short parameter_2,float parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_2 = int_1 * int_1;
	short_3 = short_1 + short_2;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 + long_1;
	short_4 = short_5;
	int_1 = int_2 * int_1;
	int_1 = int_1 * int_3;
	double_1 = double_2;
	char controller4vul_801[3];
	fgets(controller4vul_801 ,3 ,stdin);
	if( strcmp( controller4vul_801, "kO") > 0)
	{
		v__lost_selection(char_1,uni_para);

		double_2 = double_1 * double_2;
	}
	long_2 = long_2 * long_3;
}
int v__cb_ctxp_link_content_copy(char parameter_2,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v__take_selection_text(int_1,short_1,float_1,uni_para);

	int_2 = int_1 * int_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_3 + int_2;
	double_1 = double_1 * double_2;
	double_1 = double_1 * double_3;
	short_2 = short_2 + short_1;
	double_2 = double_2 * double_2;
	int_4 = int_1 + int_1;
	return int_1;
}
void v_ty_sb_free( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_2;
	int_1 = int_1;
	char_2 = char_1 * char_2;
}
void v_ty_sb_steal_buf( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	long_1 = long_1 + long_2;
	double_1 = double_1 + double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "a") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_2 = float_1 * float_1;
		}
		int_3 = int_1 * int_2;
	}
	float_1 = float_3 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	short_1 = short_1 + short_1;
	double_1 = double_2 * double_2;
}
int v_codepoint_to_utf8( unsigned int parameter_1,char parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_3 = 1;
	int int_6 = 1;
	if(1)
	{
		short_1 = short_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short short_2 = 1;
		double_2 = double_1 + double_1;
		float_2 = float_1 + float_2;
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		float float_3 = 1;
		double double_3 = 1;
		float float_4 = 1;
		float_2 = float_3 + float_2;
		int_3 = int_1 * int_2;
		double_3 = double_3 + double_2;
		float_4 = float_1 + float_2;
	}
	if(1)
	{
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_3 = int_4 * int_4;
		long_2 = long_1 + long_1;
		int_5 = int_2 * int_4;
		double_1 = double_4 * double_5;
	}
	if(1)
	{
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_3 = char_1 * char_2;
		int_4 = int_1 + int_6;
		float_2 = float_2 * float_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_5 * double_2;
		int_6 = int_2 * int_4;
		char_3 = char_1 + char_3;
		int_5 = int_4;
		int_5 = int_3 * int_1;
		int_2 = int_5 * int_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 + long_3;
	}
	return int_1;
}
void v_ty_sb_spaces_rtrim( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	double_2 = double_1 + double_2;
	char_2 = char_1 * char_2;
	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short_3 = short_1 * short_2;
		long_2 = long_1 + long_1;
		long_3 = long_4;
		int_2 = int_1 + int_2;
	}
}
int v_ty_sb_add( long parameter_1,char parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_1 * float_1;
		float_2 = float_2 * float_2;
		if(1)
		{
		}
		int_4 = int_3 * int_4;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	double_1 = double_2;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
	return int_4;
}
unsigned int v__termpty_cellrow_from_beacon_get( long parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_5 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	double_1 = double_1 + double_1;
	char_3 = char_1 * char_2;
	long_3 = long_1 + long_2;
	float_2 = float_1 * float_2;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_3 + char_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		double_2 = v_verify_beacon(char_5,int_1);

		double_4 = double_2 + double_3;
		long_3 = long_1 + long_2;
	}
	int_1 = int_1 * int_2;
	long_2 = long_4 * long_3;
	int_1 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		short short_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_3 = 1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		double_2 = double_1 + double_4;
		double_3 = double_5 + double_5;
		short_1 = short_1 * short_1;
		float_2 = float_2 + float_1;
		int_4 = int_3 + int_4;
		float_1 = float_3 * float_3;
	}
	short_2 = short_2 * short_3;
	return unsigned_int_4;
}
short v_termpty_cellrow_get( char parameter_1,int parameter_2,short parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
		}
		long_2 = long_1 + long_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "B") < 0)
	{
	}
	return short_1;
	unsigned_int_1 = v__termpty_cellrow_from_beacon_get(long_3,int_1,float_1);

}
long v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,float parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		double double_1 = 1;
		if(1)
		{
			long_1 = long_1 * long_1;
			int_1 = v_ty_sb_add(long_1,char_1,float_1);

			v_ty_sb_steal_buf(unsigned_int_2);

			long_2 = long_1 * long_2;
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						long_3 = long_3 + long_2;
					}
					if(1)
					{
						double_1 = double_1;
					}
				}
				if(1)
				{
					int int_2 = 1;
					v_ty_sb_spaces_rtrim(char_2);

					int_1 = int_2 * int_2;
				}
			}
		}
		if(1)
		{
			double double_2 = 1;
			double_3 = double_2 + double_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_2 = 1;
				if(1)
				{
					float_1 = float_1 * float_2;
				}
				if(1)
				{
					long long_4 = 1;
					long_2 = long_4 + long_4;
				}
				if(1)
				{
					long long_5 = 1;
					short_1 = v_termpty_cellrow_get(char_2,int_1,short_2);

					long_5 = long_1 + long_5;
				}
				if(1)
				{
					float float_3 = 1;
					v_termpty_backlog_unlock();

					float_3 = float_1 * float_2;
				}
				if(1)
				{
					char char_3 = 1;
					char char_4 = 1;
					char_4 = char_1 * char_3;
				}
			}
			double_3 = double_2 + double_2;
		}
		if(1)
		{
			double double_4 = 1;
			v_termpty_backlog_lock();

			int_1 = v_codepoint_to_utf8(unsigned_int_2,char_2);

			v_ty_sb_free(double_3);

			double_3 = double_1 + double_4;
		}
	}
	return long_3;
}
int v__cb_ctxp_link_open(double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	double_2 = double_1 + double_1;
	double_5 = double_3 + double_4;
	float_1 = float_1 * float_1;
	long_1 = long_1 + long_2;
	float_1 = v__activate_link(double_3,double_2);

	short_1 = short_1;
	return int_1;
}
double v__should_inline( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_1 = v_termio_config_get(char_1);

	char_2 = char_2;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	return double_1;
}
void v_link_is_email( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
	}
}
void v_link_is_protocol( char parameter_1)
{
}
short v_link_is_url( long parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "r4") > 0)
	{
	}
	return short_1;
	v_link_is_protocol(char_1);

}
float v__activate_link( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_4 = 1;
	char_2 = char_1 + char_1;
	double_3 = double_1 * double_2;
	double_2 = double_4 * double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	long_1 = long_1 * long_2;
	float_1 = float_1 + float_1;
	short_2 = short_1 + short_2;
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
			int_1 = int_2 + int_2;
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 * char_3;
		}
	}
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		double_1 = double_3 + double_1;
	}
	if(1)
	{
		double_5 = double_2 + double_2;
		int_3 = int_4;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		double_4 = double_3 + double_6;
		unsigned_int_4 = unsigned_int_3;
		if(1)
		{
			int int_5 = 1;
			int_5 = int_4 + int_4;
		}
		if(1)
		{
			double_6 = double_3 + double_6;
		}
		long_1 = long_1 * long_2;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_2;
			char_4 = char_4 * char_4;
		}
	}
	if(1)
	{
		short_2 = short_1;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
			if(1)
			{
				if(1)
				{
					double double_7 = 1;
					float_3 = float_1 * float_2;
					double_7 = double_7 + double_1;
				}
				if(1)
				{
					short short_3 = 1;
					double_5 = v_media_src_type_get(double_1);

					short_3 = short_3 + short_1;
					double_6 = double_4 * double_1;
				}
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						unsigned_int_4 = unsigned_int_6;
					}
				}
				if(1)
				{
					if(1)
					{
						int_3 = int_2 + int_2;
					}
				}
				if(1)
				{
					if(1)
					{
						double_5 = double_2;
					}
				}
				unsigned_int_7 = unsigned_int_4 * unsigned_int_2;
				double_5 = double_4;
			}
		}
	}
	if(1)
	{
		int int_6 = 1;
		double_3 = v__should_inline(unsigned_int_8);

		int_4 = int_6 * int_2;
		short_2 = short_1 * short_1;
		if(1)
		{
			int int_7 = 1;
			int_7 = int_2 * int_7;
			if(1)
			{
				char char_5 = 1;
				short_4 = short_4 * short_1;
				short_4 = v_link_is_url(long_1);

				char_4 = char_2 * char_5;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						int_1 = int_1 * int_4;
					}
				}
				if(1)
				{
					if(1)
					{
						float_1 = float_1 + float_1;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned int unsigned_int_9 = 1;
						unsigned_int_5 = unsigned_int_6 + unsigned_int_9;
					}
				}
				unsigned_int_1 = unsigned_int_4 + unsigned_int_7;
				short_1 = short_2 + short_4;
			}
		}
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	}
	float_2 = float_3 * float_2;
	if(1)
	{
		v_link_is_email(long_2);

		int_1 = int_2;
	}
	return float_2;
}
short v__cb_ctxp_link_preview(short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	float_1 = v__activate_link(double_2,double_3);

	char_1 = char_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	double_4 = double_3 + double_1;
	return short_1;
}
double v__is_fmt( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double_3 = double_1 + double_2;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		}
		if(1)
		{
		}
	}
	return double_4;
}
double v_media_src_type_get( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
		char char_4 = 1;
		char_1 = char_4 * char_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double_3 = v__is_fmt(long_1,unsigned_int_1);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	return double_2;
}
int v__mouse_in_selection( int parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_3 + float_3;
		float_3 = float_2;
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
	return int_2;
}
int v__smart_xy_to_cursor( int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_1 * double_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	return int_1;
}
int v__cb_link_down(int parameter_2,float parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int_1 = int_3 + int_1;
		double_2 = double_1 + double_2;
		int_1 = int_3 + int_3;
	}
	char controller4vul_798[2];
	fgets(controller4vul_798 ,2 ,stdin);
	if( strcmp( controller4vul_798, "v") > 0)
	{
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_2 = 1;
		double double_6 = 1;
		short_3 = short_1 * short_2;
		double_4 = double_3 + double_2;
		int_2 = int_1 + int_1;
		double_2 = double_1 + double_1;
		char controller4vul_799[2];
		fgets(controller4vul_799 ,2 ,stdin);
		if( strcmp( controller4vul_799, "F") > 0)
		{
			float float_1 = 1;
			float_1 = float_1;
			int_4 = int_3 * int_1;
			char controller4vul_800[3];
			fgets(controller4vul_800 ,3 ,stdin);
			if( strcmp( controller4vul_800, "FH") > 0)
			{
				int_5 = v__cb_ctxp_link_content_copy(char_1,uni_para);

			}
		}
		char_1 = char_1;
		int_3 = int_6 + int_2;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_2 + float_3;
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
			}
		}
		double_2 = double_5 + double_2;
		int_7 = int_5 * int_2;
		if(1)
		{
			short short_4 = 1;
			short_3 = short_3 + short_4;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
			int_4 = int_2 * int_5;
		}
		if(1)
		{
			int_2 = int_2 + int_1;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		int_6 = int_5;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		char_1 = char_2;
		double_2 = double_6 + double_2;
	}
	return int_3;
}
unsigned int v_main_term_popup_exists( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v__update_link( double parameter_1,long parameter_2,char parameter_3,long parameter_4,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_4 = 1;
	double double_5 = 1;
	char_2 = char_1 + char_2;
	double_1 = double_1 + double_2;
	char_1 = char_2 * char_2;
	int_2 = int_1 + int_1;
	int_2 = int_2 * int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = short_2;
	if(1)
	{
		short short_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_1 = short_3 + short_3;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
	}
	short_4 = short_2 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		char controller4vul_796[2];
		fgets(controller4vul_796 ,2 ,stdin);
		if( strcmp( controller4vul_796, "+") > 0)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			char controller4vul_797[2];
			fgets(controller4vul_797 ,2 ,stdin);
			if( strcmp( controller4vul_797, "S") > 0)
			{
				unsigned int unsigned_int_4 = 1;
				int_2 = v__cb_link_down(int_2,float_1,uni_para);

				unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
			}
			if(1)
			{
				int_1 = int_4;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
		}
		if(1)
		{
			int_4 = int_1 + int_1;
			double_3 = double_3 + double_2;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		long_2 = long_1 + long_1;
		double_2 = double_4 + double_3;
		int_2 = int_1 * int_5;
		double_4 = double_5 * double_1;
		unsigned_int_8 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			double double_6 = 1;
			double_6 = double_3 + double_1;
		}
	}
	return double_5;
}
float v__remove_links( float parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	char controller4vul_795[3];
	fgets(controller4vul_795 ,3 ,stdin);
	if( strcmp( controller4vul_795, "!]") > 0)
	{
		int int_4 = 1;
		double_1 = v__update_link(double_2,long_1,char_1,long_1,uni_para);

		long_4 = long_2 + long_3;
		int_2 = int_3 + int_4;
	}
	double_1 = double_2 * double_2;
	int_1 = int_3;
	long_2 = long_4 + long_3;
	long_3 = long_4 + long_4;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return float_1;
}
void v__sel_set( char parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
	}
	short_1 = short_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_2 = double_1 * double_2;
		float_3 = float_1 * float_2;
		double_2 = double_2 * double_2;
	}
}
int v_termio_scroll_get( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_2;
	int_3 = int_1 + int_3;
	return int_4;
}
void v_miniview_position_offset( float parameter_1,int parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char_3 = char_1 * char_2;
	long_2 = long_1 * long_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = short_1 * short_2;
		double_1 = double_1 + double_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float_3 = float_1 * float_2;
			float_4 = float_2 * float_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_2 = double_2 + double_1;
			int_1 = int_2 * int_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_4 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int_1 = v_termio_scroll_get(double_3);

			char_4 = char_2 * char_3;
			short_4 = short_3 + short_4;
			if(1)
			{
				long_2 = long_2 * long_2;
			}
			if(1)
			{
				char_3 = char_1 + char_1;
			}
		}
	}
}
long v_term_miniview_get()
{
	long long_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
	}
	return long_1;
}
void v_termio_scroll( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	float_1 = v__remove_links(float_2,long_1,-1 );

	float_2 = float_2 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v__sel_set(char_1,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		v_miniview_position_offset(float_2,int_1,float_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
		int_3 = int_1 * int_2;
	}
	double_1 = double_1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 * long_3;
		int_2 = int_3 * int_2;
		int_1 = int_1 * int_1;
		if(1)
		{
			float float_3 = 1;
			float_1 = float_1 * float_3;
		}
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 + char_2;
			double_1 = double_1 * double_1;
			int_2 = int_3 * int_3;
			long_3 = long_2 * long_3;
			char_1 = char_1 + char_1;
			if(1)
			{
				long_4 = v_term_miniview_get();

				unsigned_int_2 = unsigned_int_1;
			}
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_1 * float_4;
		}
		if(1)
		{
			long long_5 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			long_3 = long_3 * long_5;
			int_1 = int_2 + int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		}
	}
}
long v_termpty_save_new( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long_1 = long_1 + long_1;
	v_termpty_save_free(long_1);

	float_1 = float_2;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	short_1 = short_1 * short_1;
	return long_3;
}
void v_termpty_save_expand( long parameter_1,float parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = double_2;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	long_1 = long_1;
	long_3 = long_2 * long_1;
	long_3 = long_1 + long_2;
}
int v__termpty_cell_is_empty( long parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
long v_termpty_line_length( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
		}
	}
	return long_1;
	int_1 = v__termpty_cell_is_empty(long_1);

}
double v_verify_beacon( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	return double_1;
}
void v_termpty_text_save_top( unsigned int parameter_1,double parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_6 = 1;
	long_3 = long_1 + long_2;
	long_2 = v_termpty_line_length(int_1,char_1);

	float_2 = float_1 * float_2;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	int_2 = int_2 * int_3;
	short_1 = short_1;
	double_1 = v_verify_beacon(char_1,int_4);

	long_3 = v_termpty_save_new(long_4,int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
		if(1)
		{
			v_termpty_backlog_unlock();

			double_2 = double_2 * double_2;
		}
		if(1)
		{
			char char_2 = 1;
			v_termpty_backlog_lock();

			v_termpty_save_expand(long_1,float_1,unsigned_int_1);

			double_2 = double_1 * double_2;
			long_5 = long_3 * long_2;
			int_2 = int_4 * int_5;
			char_2 = char_1 * char_2;
		}
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_1 = int_5 * int_3;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_4 = int_6 + int_4;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_2 + double_3;
	}
	int_1 = int_6 + int_5;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2;
		int_5 = int_5;
	}
	long_6 = long_5 * long_6;
}
void v_termpty_text_scroll( char parameter_1,long parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	int_3 = int_1 + int_2;
	int_4 = int_3;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 + double_4;
		if(1)
		{
			double_1 = double_1 + double_3;
		}
		int_2 = int_2 * int_4;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			v_termpty_cells_clear(int_4,unsigned_int_1,int_3);

			short_2 = short_1 * short_2;
		}
	}
	if(1)
	{
		float float_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		float_1 = float_1;
		if(1)
		{
			long long_2 = 1;
			v_termio_scroll(int_3,int_1,int_2,int_2);

			long_2 = long_2 + long_2;
		}
		char_3 = char_2 + char_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_3 = 1;
			short short_3 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_4 = 1;
			v_termpty_text_save_top(unsigned_int_3,double_5,float_2);

			float_1 = float_3 + float_1;
			short_3 = short_3 * short_4;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		}
		if(1)
		{
			int int_5 = 1;
			int_4 = int_4 + int_5;
		}
	}
}
void v_termpty_text_scroll_test( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		v_termpty_text_scroll(char_1,long_1);

		short_2 = short_1 + short_2;
		if(1)
		{
			short short_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short_2 = short_3 * short_2;
			long_1 = long_1 * long_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int_1 = int_1 * int_3;
		int_3 = int_2 * int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
}
int v__cursor_to_start_of_line( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
char v__tab_forward( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
short v__handle_cursor_control( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_3 = 1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	long_2 = long_1 + long_1;
	long_1 = long_2 * long_3;
	double_3 = double_1 + double_2;
	int_2 = v__cursor_to_start_of_line(long_1);

	long_4 = long_5;
	double_1 = double_2;
	float_3 = float_1 * float_2;
	char_1 = char_1 * char_2;
	v_termpty_text_scroll_test(double_3,unsigned_int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_2 = double_2;
	}
	float_1 = float_3 + float_3;
	double_1 = double_2 + double_4;
	int_3 = int_1 * int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_4 = 1;
		short_1 = short_2;
		int_1 = int_4 + int_1;
		short_2 = short_2 * short_1;
	}
	char_1 = v__tab_forward(long_4,int_1);

	char_3 = char_3 * char_3;
	return short_3;
}
int v_termpty_handle_seq( char parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_1;
	char controller4vul_789[3];
	fgets(controller4vul_789 ,3 ,stdin);
	if( strcmp( controller4vul_789, "GL") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = v__handle_esc(short_1,short_2,unsigned_int_1,uni_para);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		short_2 = short_1;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	return int_3;
}
void v_termpty_handle_buf( long parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_2;
	double_1 = double_2;
	char controller4vul_788[3];
	fgets(controller4vul_788 ,3 ,stdin);
	if( strcmp( controller4vul_788, "J@") < 0)
	{
		int_2 = v_termpty_handle_seq(char_1,short_1,int_1,uni_para);

		float_2 = float_1 * float_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3;
	}
	float_1 = float_2;
}
void v_theme_reload( char parameter_1)
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
	double_1 = double_2;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_3 + int_4;
	if(1)
	{
	}
}
float v_theme_reload_cb(float parameter_2,char parameter_3,int parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	v_theme_reload(char_1);

	int_1 = int_1;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_3;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "o ") > 0)
	{
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	return float_3;
}
void v_theme_auto_reload_enable( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short_3 = short_1 + short_2;
	float_1 = v_theme_reload_cb(float_2,char_1,int_1);

}
short v__cursor_shape_to_group_name( unsigned int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
void v_config_theme_path_default_get( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
}
short v_theme_path_get()
{
	short short_1 = 1;
	return short_1;
}
short v_config_theme_path_get( double parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short_1 = v_theme_path_get();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "S") < 0)
	{
	}
	return short_2;
}
double v_theme_apply( long parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_8 = 1;
	v_config_theme_path_default_get(double_1);

	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 * long_2;
	double_3 = double_2 * double_3;
	if(1)
	{
	}
	double_4 = double_4 * double_5;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	short_1 = v_config_theme_path_get(double_5);

	double_7 = double_1 * double_6;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	return double_8;
}
void v_termio_set_cursor_shape( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	char_3 = char_1 * char_2;
	double_1 = v_theme_apply(long_1,double_2,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	char_1 = char_3 + char_3;
	double_2 = double_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 * int_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			short_1 = v__cursor_shape_to_group_name(unsigned_int_1);

			float_2 = float_1 + float_1;
		}
	}
	v_theme_auto_reload_enable(unsigned_int_1);

}
void v_termpty_clear_tabs_on_screen()
{
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	v_termpty_backlog_lock();

	int_2 = int_1 + int_1;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			int_3 = int_3;
		}
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 + double_1;
	}
	if(1)
	{
		float float_3 = 1;
		v_termpty_save_free(long_1);

		float_3 = float_1 * float_3;
	}
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1;
	v_termpty_backlog_unlock();

}
float v__ts_free()
{
	int int_1 = 1;
	float float_1 = 1;
	int_1 = int_1;
	return float_1;
}
void v_termpty_save_free( long parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "#") < 0)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
		if(1)
		{
			float_1 = v__ts_free();

			short_1 = short_1;
		}
		int_2 = int_1 * int_1;
	}
	int_3 = int_3;
	short_2 = short_1;
	unsigned_int_1 = unsigned_int_2;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 * int_2;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		int int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int_4 = int_1 + int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_1 = char_2;
		}
		char_1 = char_3 + char_2;
		char_2 = char_1 * char_4;
	}
	v_termpty_save_free(long_1);

	v_termpty_backlog_unlock();

	double_1 = double_2;
	v_termpty_backlog_size_set(long_2,unsigned_int_1);

	unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
	int_5 = int_1 * int_2;
	double_1 = double_3;
	v_termpty_backlog_lock();

	char_1 = char_2;
}
void v_termpty_reset_att( unsigned int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1;
	long_1 = long_2;
	double_1 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_2 * double_3;
	double_1 = double_2 * double_4;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_6 = double_5 * double_6;
	double_7 = double_2 * double_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	char_3 = char_1 * char_2;
	long_3 = long_1 * long_2;
	int_2 = int_4 + int_5;
	short_2 = short_1 + short_1;
	int_6 = int_2 * int_3;
	int_7 = int_2 * int_2;
	char_4 = char_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
}
unsigned int v_termio_config_get( char parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_1;
	return unsigned_int_1;
}
void v_termpty_reset_state()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_7 = 1;
	short short_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_5 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_6 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_1;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	int_3 = int_1 + int_2;
	double_2 = double_3 + double_4;
	long_1 = long_1 * long_1;
	int_3 = int_2;
	v_termpty_clear_backlog(int_4);

	float_1 = float_2;
	double_4 = double_5 + double_1;
	v_termio_set_cursor_shape(int_2,double_3);

	int_2 = int_2 + int_3;
	char_1 = char_1 * char_1;
	v_termpty_reset_att(unsigned_int_2);

	int_1 = int_1;
	char_1 = char_1 + char_1;
	int_1 = int_1;
	double_6 = double_5;
	double_6 = double_3 + double_6;
	long_3 = long_2 + long_1;
	short_3 = short_1 * short_2;
	double_5 = double_7;
	short_4 = short_4 * short_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	char_1 = char_2 + char_2;
	double_3 = double_2 + double_7;
	char_2 = char_3 + char_2;
	double_4 = double_2 + double_1;
	v_termpty_clear_tabs_on_screen();

	short_3 = short_5;
	int_5 = int_1 + int_1;
	float_1 = float_3 + float_4;
	unsigned_int_3 = unsigned_int_2;
	double_1 = double_2;
	char_4 = char_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = v_termio_config_get(char_4);

	unsigned_int_3 = unsigned_int_3;
	float_3 = float_4 + float_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	short_1 = short_6 * short_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_8 = 1;
		double_8 = double_6 * double_6;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	}
}
void v_termpty_resize_tabs( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double_3 = double_1 + double_2;
	float_1 = float_1 + float_1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	double_3 = double_4 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4;
		}
		if(1)
		{
			double_3 = double_3 + double_4;
		}
		int_1 = int_2 + int_1;
	}
	int_4 = int_4 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_4 = double_3 * double_1;
	}
}
unsigned int v__termpty_init( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 + float_2;
	int_2 = int_1 + int_2;
	v_termpty_resize_tabs(short_1,int_1,int_3);

	double_1 = double_1 * double_1;
	short_3 = short_2 + short_1;
	int_1 = int_1 * int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_termpty_reset_state();

	double_3 = double_2 + double_2;
	long_2 = long_1 * long_1;
	short_4 = short_3 * short_1;
	long_3 = long_4;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_2 + int_4;
	double_2 = double_2;
	return unsigned_int_3;
}
short v__add_default_keys( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_6 = 1;
	float float_4 = 1;
	double double_6 = 1;
	float float_5 = 1;
	short short_3 = 1;
	long long_2 = 1;
	float float_6 = 1;
	long long_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_3;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	double_1 = double_1 * double_2;
	float_1 = float_1 * float_1;
	char_1 = char_2 * char_3;
	short_2 = short_1 + short_1;
	char_4 = char_3 * char_2;
	double_2 = double_2;
	char_3 = char_5 + char_5;
	double_1 = double_1;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	double_2 = double_1 * double_2;
	int_1 = int_1 + int_2;
	int_3 = int_3;
	double_2 = double_1 + double_2;
	double_1 = double_1 + double_3;
	float_1 = float_1 * float_2;
	double_3 = double_3 + double_1;
	unsigned_int_5 = unsigned_int_3;
	char_1 = char_4 * char_2;
	int_1 = int_1 * int_2;
	short_2 = short_2 * short_2;
	long_1 = long_1 + long_1;
	float_3 = float_1 + float_2;
	int_2 = int_4 + int_3;
	unsigned_int_5 = unsigned_int_7;
	double_4 = double_4 + double_5;
	char_6 = char_1 + char_2;
	float_1 = float_3 + float_4;
	int_2 = int_3 + int_2;
	double_5 = double_4 + double_2;
	int_4 = int_1 * int_1;
	double_6 = double_6 * double_3;
	short_2 = short_2 * short_2;
	float_5 = float_3 * float_5;
	short_3 = short_3 + short_2;
	long_1 = long_2;
	float_3 = float_6 * float_4;
	char_4 = char_3 + char_2;
	long_3 = long_3 + long_3;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_2;
	long_3 = long_3 * long_2;
	int_3 = int_2 * int_4;
	double_8 = double_2 * double_7;
	unsigned_int_8 = unsigned_int_7 + unsigned_int_4;
	short_5 = short_4 * short_1;
	double_5 = double_4 * double_6;
	char_4 = char_3 + char_4;
	return short_6;
}
void v_colors_standard_get( int parameter_1,int parameter_2,short parameter_3,int parameter_4,short parameter_5,int parameter_6)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	if(1)
	{
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		double_2 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		float_2 = float_1 * float_2;
		short_2 = short_1 + short_1;
		float_4 = float_3 + float_1;
		char_2 = char_1 * char_2;
		float_6 = float_5 + float_2;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	double_1 = double_1;
	char_2 = char_1 + char_3;
}
float v_config_new()
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_6 = 1;
	int_1 = int_1;
	float_1 = float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		short short_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_5 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		short short_4 = 1;
		int int_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char char_5 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long_2 = long_1 + long_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		double_2 = double_2 + double_3;
		int_1 = int_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		int_1 = int_2;
		double_1 = double_2 * double_2;
		unsigned_int_1 = unsigned_int_2;
		long_4 = long_2 + long_3;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
		char_1 = char_1 + char_2;
		double_4 = double_2 * double_2;
		short_1 = short_1 + short_2;
		float_2 = float_1 + float_1;
		unsigned_int_6 = unsigned_int_3;
		long_1 = long_5 + long_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		int_2 = int_2 + int_2;
		int_1 = int_3 * int_3;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
		char_3 = char_1 + char_3;
		double_2 = double_2 * double_1;
		unsigned_int_7 = unsigned_int_7 * unsigned_int_8;
		short_4 = short_3 + short_2;
		int_4 = int_2 + int_4;
		int_4 = int_1 + int_2;
		char_4 = char_2 * char_2;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
		float_2 = float_3 + float_4;
		short_4 = short_4 + short_2;
		short_3 = v__add_default_keys(char_4);

		float_2 = float_3 + float_4;
		v_colors_standard_get(int_3,int_5,short_1,int_6,short_3,int_5);

		char_1 = char_2 * char_1;
		char_5 = char_1 * char_5;
		char_5 = char_5 + char_4;
		double_1 = double_4 * double_1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
		int_6 = int_2;
		short_3 = short_3 * short_2;
		double_1 = double_1 * double_1;
		unsigned_int_6 = unsigned_int_7;
		double_6 = double_5 + double_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
		double_2 = double_7 + double_2;
		char_2 = char_1;
		int_2 = int_5 + int_2;
		long_4 = long_5 + long_5;
		unsigned_int_5 = unsigned_int_7 + unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_5 = 1;
				unsigned int unsigned_int_9 = 1;
				float_2 = float_5 * float_5;
				unsigned_int_1 = unsigned_int_5 * unsigned_int_8;
				unsigned_int_2 = unsigned_int_9 * unsigned_int_9;
				short_3 = short_1 + short_1;
				unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
				double_6 = double_4 * double_7;
			}
		}
		float_1 = float_3 * float_1;
		double_8 = double_3;
	}
	return float_6;
}
int main()
{
	int uni_para =387;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_6 = 1;
	long long_6 = 1;
	double double_5 = 1;
	float float_2 = 1;
	double double_6 = 1;
	int int_8 = 1;
	double_3 = double_1 + double_2;
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 + char_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	char_4 = char_3 * char_2;
	int_1 = int_3 * int_1;
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		char_5 = char_1 + char_5;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	long_4 = long_1 + long_3;
	unsigned_int_3 = unsigned_int_2;
	short_2 = short_2 + short_3;
	char controller4vul_784[2];
	fgets(controller4vul_784 ,2 ,stdin);
	if( strcmp( controller4vul_784, "f") < 0)
	{
		int int_5 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			double_3 = double_4;
		}
		if(1)
		{
			int_5 = int_4 + int_2;
		}
		if(1)
		{
			double_4 = double_1 + double_1;
		}
		int_4 = int_1 * int_5;
		if(1)
		{
			long long_5 = 1;
			long_5 = long_2 * long_5;
		}
		double_3 = double_1;
		if(1)
		{
			char_5 = char_2;
		}
		int_7 = int_6 + int_3;
		if(1)
		{
			long_4 = long_6 * long_4;
		}
		unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
		if(1)
		{
			double_3 = double_1 + double_3;
		}
		if(1)
		{
			double_5 = double_3;
		}
		char_5 = char_1 * char_2;
		if(1)
		{
			unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
		}
		float_2 = float_1 * float_1;
		if(1)
		{
			int_3 = int_7;
		}
		char controller4vul_785[2];
		fgets(controller4vul_785 ,2 ,stdin);
		if( strcmp( controller4vul_785, "R") < 0)
		{
			int_3 = int_4 + int_3;
			char controller4vul_786[2];
			fgets(controller4vul_786 ,2 ,stdin);
			if( strcmp( controller4vul_786, "8") > 0)
			{
				unsigned int unsigned_int_7 = 1;
				short short_4 = 1;
				unsigned_int_7 = unsigned_int_4 * unsigned_int_1;
				unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
				char controller4vul_787[2];
				fgets(controller4vul_787 ,2 ,stdin);
				if( strcmp( controller4vul_787, "A") < 0)
				{
					v_termpty_handle_buf(long_3,long_6,int_4,uni_para);

					unsigned_int_3 = unsigned_int_3;
				}
				if(1)
				{
					unsigned int unsigned_int_8 = 1;
					unsigned_int_8 = unsigned_int_3;
				}
				if(1)
				{
					long_6 = long_3;
				}
				if(1)
				{
					short_4 = short_3 * short_2;
				}
				if(1)
				{
					int_3 = int_1 * int_7;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_6;
				}
				if(1)
				{
					char_1 = char_3;
				}
				if(1)
				{
					int_1 = int_5 + int_1;
				}
				if(1)
				{
					char_4 = char_4 + char_4;
				}
				if(1)
				{
					short_2 = short_4 * short_4;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_7 + unsigned_int_4;
				}
				if(1)
				{
					double_3 = double_1;
				}
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_4;
			}
		}
	}
	if(1)
	{
		long_3 = long_1 + long_3;
	}
	if(1)
	{
		int_3 = int_6 + int_6;
	}
	if(1)
	{
		double_3 = double_2;
	}
	if(1)
	{
		char_1 = char_3 + char_2;
		if(1)
		{
			short_2 = short_1;
		}
	}
	int_3 = int_2 * int_6;
	double_6 = double_4 + double_5;
	float_2 = float_2 * float_1;
	int_8 = int_1 + int_4;
	if(1)
	{
		long long_7 = 1;
		long_4 = long_7 * long_7;
		int_1 = int_2 + int_8;
	}
	return int_4;
}

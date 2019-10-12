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

float v__termpty_shutdown( double parameter_1);
void v_termpty_text_scroll_rev_test( float parameter_1,short parameter_2);
void v__handle_esc_dcs( short parameter_1,char parameter_2,short parameter_3);
void v__handle_op_a( float parameter_1,unsigned int parameter_2,unsigned int parameter_3);
float v__termpty_ext_handle( char parameter_1,long parameter_2,float parameter_3);
long v__handle_esc_terminology( char parameter_1,long parameter_2,int parameter_3);
unsigned int v__handle_xterm_777_command( double parameter_1,char parameter_2,int parameter_3);
unsigned int v__smart_calculate_226( long parameter_1);
void v__smart_size( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
void v_colors_term_init( double parameter_1,double parameter_2,unsigned int parameter_3);
void v_termio_config_update( char parameter_1);
short v__font_size_set( unsigned int parameter_1,int parameter_2);
void v_termio_font_size_set( long parameter_1,int parameter_2);
float v__handle_xterm_50_command( long parameter_1,char parameter_2,int parameter_3);
short v__eina_unicode_to_hex( short parameter_1);
long v__xterm_parse_color( double parameter_1,float parameter_2,char parameter_3,short parameter_4,int parameter_5);
short v__xterm_arg_get( double parameter_1);
int v__handle_esc_xterm( char parameter_1,unsigned int parameter_2,double parameter_3);
void v_termpty_cells_set_content( int parameter_1,long parameter_2,double parameter_3,int parameter_4);
int v__handle_esc_csi_decera( int parameter_1,double parameter_2);
void v_termpty_cells_att_fill_preserve_colors( long parameter_1,int parameter_2,long parameter_3,int parameter_4);
int v__clean_up_rect_coordinates( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
long v__handle_esc_csi_decfra( int parameter_1,int parameter_2);
int v__handle_esc_csi_decslrm( double parameter_1,int parameter_2);
unsigned int v__handle_esc_csi_decstbm( long parameter_1,int parameter_2);
double v__handle_esc_csi_decscusr( double parameter_1,short parameter_2);
long v__handle_esc_csi_dsr( char parameter_1,float parameter_2);
char v__handle_esc_csi_truecolor_cmyk( int parameter_1,long parameter_2);
unsigned int v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,short parameter_2);
char v__approximate_truecolor_rgb( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4);
unsigned int v__csi_truecolor_arg_get( float parameter_1);
double v__handle_esc_csi_truecolor_rgb( long parameter_1,double parameter_2);
double v__handle_esc_csi_color_set( unsigned int parameter_1,float parameter_2);
void v_termpty_cursor_copy( short parameter_1,float parameter_2);
short v__switch_to_alternative_screen( float parameter_1,int parameter_2);
void v__move_cursor_to_origin();
double v__pty_size( int parameter_1);
unsigned int v__limit_coord( char parameter_1);
short v__check_screen_info( char parameter_1,int parameter_2);
long v__termpty_line_rewrap( double parameter_1,short parameter_2,int parameter_3,float parameter_4,double parameter_5);
double v__backlog_remove_latest_nolock( float parameter_1);
void v_termpty_save_extract( long parameter_1);
int v__termpty_line_is_empty( char parameter_1,unsigned int parameter_2);
void v_termpty_screen_swap( char parameter_1);
void v_termpty_resize( unsigned int parameter_1,int parameter_2,int parameter_3);
char v_termio_win_get( int parameter_1);
double v__handle_esc_csi_reset_mode( long parameter_1,unsigned int parameter_2,float parameter_3);
short v__handle_esc_csi_cursor_pos_set( int parameter_1,int parameter_2,double parameter_3);
void v_termpty_text_scroll_rev( int parameter_1,unsigned int parameter_2);
void v_termpty_clear_line( double parameter_1,char parameter_2,int parameter_3);
void v_termpty_clear_screen( unsigned int parameter_1,unsigned int parameter_2);
void v_termpty_cell_codepoint_att_fill( double parameter_1,long parameter_2,double parameter_3,char parameter_4,int parameter_5);
int v__termpty_charset_trans( long parameter_1,int parameter_2);
void v_termio_content_change( int parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4);
void v_termpty_text_append( double parameter_1,float parameter_2,int parameter_3,int uni_para);
char v__csi_arg_get( int parameter_1);
long v__handle_esc_csi( char parameter_1,long parameter_2,int parameter_3,int uni_para);
void v__safechar( float parameter_1);
double v__handle_esc( float parameter_1,float parameter_2,double parameter_3,int uni_para);
void v_termpty_cell_fill( long parameter_1,long parameter_2,long parameter_3,int parameter_4);
void v_termpty_cells_fill( int parameter_1,int parameter_2,double parameter_3,int parameter_4);
void v_termpty_cells_clear( char parameter_1,float parameter_2,int parameter_3);
int v__tooltip_del(short parameter_2);
double v__tooltip_content(unsigned int parameter_2,unsigned int parameter_3);
void v_MD5Final( short parameter_1,char parameter_2);
void v_MD5Transform( int parameter_1,float parameter_2);
void v_byteReverse( double parameter_1,double parameter_2);
void v_MD5Update( int parameter_1,unsigned int parameter_2,short parameter_3);
void v_MD5Init();
void v_gravatar_tooltip( int parameter_1,char parameter_2,char parameter_3);
unsigned int v__cb_link_drag_done(char parameter_2);
long v__cb_link_drag_accept(long parameter_2,float parameter_3);
double v__cb_link_drag_move(int parameter_2,unsigned int parameter_3,long parameter_4,float parameter_5);
short v__cb_link_icon_new(char parameter_2,double parameter_3,int parameter_4);
float v__cb_link_move(float parameter_2,char parameter_3);
double v__cb_link_up_delay();
double v__cb_link_up(float parameter_2,float parameter_3);
void v_term_focus( long parameter_1);
long v__term_is_focused( long parameter_1);
void v_term_unfocus( double parameter_1);
char v__cb_ctxp_del(float parameter_2,long parameter_3);
unsigned int v__cb_ctxp_dismissed(double parameter_2);
short v__cb_ctxp_link_copy(unsigned int parameter_2);
char v__screen_visual_bounds( double parameter_1);
int v__draw_cell( double parameter_1,long parameter_2,unsigned int parameter_3,float parameter_4);
char v__draw_line( short parameter_1,short parameter_2,float parameter_3,int parameter_4,short parameter_5);
float v_termpty_backlog_length( int parameter_1);
short v_termio_pty_get( unsigned int parameter_1);
unsigned int v_termio_textgrid_get( long parameter_1);
unsigned int v_miniview_colors_get( short parameter_1,double parameter_2);
char v__deferred_renderer();
char v__queue_render( int parameter_1);
void v_miniview_redraw( float parameter_1);
short v__block_obj_del( float parameter_1);
double v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2);
void v__termpty_is_dblwidth_get( int parameter_1,int parameter_2);
void v_term_preedit_str_get( unsigned int parameter_1);
double v_media_get( int parameter_1);
char v__smart_media_clicked(unsigned int parameter_2);
unsigned int v_media_control_get();
short v__smart_media_stop(int parameter_2);
void v__smart_media_pause(int parameter_2);
unsigned int v__smart_media_play(unsigned int parameter_2);
float v__smart_media_del(double parameter_2,short parameter_3);
void v_media_visualize_set( int parameter_1,char parameter_2);
void v_media_mute_set( float parameter_1,unsigned int parameter_2);
void v_media_volume_set( long parameter_1,double parameter_2);
short v__cb_media_vol(int parameter_2,int parameter_3,float parameter_4);
int v__cb_media_pos(long parameter_2,short parameter_3,long parameter_4);
int v__cb_media_pos_drag_stop(int parameter_2,float parameter_3,int parameter_4);
unsigned int v__cb_media_pos_drag_start(int parameter_2,char parameter_3,float parameter_4);
void v_media_stop( long parameter_1);
double v__cb_media_stop(char parameter_2,long parameter_3,int parameter_4);
double v__cb_media_pause(float parameter_2,unsigned int parameter_3,float parameter_4);
void v_media_play_set( unsigned int parameter_1,unsigned int parameter_2);
int v__cb_media_play(int parameter_2,long parameter_3,float parameter_4);
void v_media_position_set( short parameter_1,double parameter_2);
double v__cb_mov_ref(float parameter_2);
void v__cb_mov_progress(double parameter_2);
double v__cb_mov_restart();
short v__cb_mov_decode_stop(char parameter_2);
long v__cb_mov_len_change(double parameter_2);
short v__cb_mov_frame_resize(float parameter_2);
float v__cb_mov_frame_decode(float parameter_2);
char v__type_mov_init( long parameter_1);
unsigned int v__cb_edje_preloaded(float parameter_2,char parameter_3,double parameter_4);
char v__type_edje_init( int parameter_1);
short v__type_scale_init( short parameter_1);
int v__cb_img_frame(int uni_para);
int v__type_img_anim_handle( float parameter_1,int uni_para);
long v__cb_img_preloaded(int parameter_2,int parameter_3);
char v__type_img_init(int uni_para);
int v__url_compl_cb(int parameter_2,int uni_para);
char v__url_prog_cb(int parameter_2);
unsigned int v__type_thumb_calc( float parameter_1,short parameter_2,float parameter_3,long parameter_4,long parameter_5);
float v__type_mov_calc( short parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4,short parameter_5);
short v__type_edje_calc( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,unsigned int parameter_5);
short v__type_img_calc( float parameter_1,int parameter_2,float parameter_3,long parameter_4,short parameter_5);
double v__cb_scale_preloaded(double parameter_2,short parameter_3);
char v__type_scale_calc( short parameter_1,short parameter_2,unsigned int parameter_3,float parameter_4,unsigned int parameter_5);
double v__unsmooth_timeout();
short v__smooth_handler( short parameter_1);
void v__smart_calculate();
char v__smart_move( short parameter_1,long parameter_2,short parameter_3);
char v__smart_resize( int parameter_1,int parameter_2,long parameter_3);
char v__smart_del( unsigned int parameter_1);
int v__smart_add( char parameter_1);
double v__smart_init();
void v_media_add( float parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,double parameter_5,int uni_para);
char v__block_media_activate( short parameter_1,double parameter_2,int uni_para);
int v__block_edje_message_cb(int parameter_2,float parameter_3,int parameter_4);
void v_termpty_write( double parameter_1,float parameter_2,int parameter_3);
void v__block_edje_signal_cb(float parameter_2,short parameter_3,int parameter_4);
void v_termpty_block_chid_update( char parameter_1,unsigned int parameter_2);
float v__block_edje_cmds( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,float parameter_4);
unsigned int v_homedir_get( char parameter_1,int parameter_2);
short v__block_edje_activate( int parameter_1,short parameter_2);
long v__block_activate( double parameter_1,float parameter_2,int uni_para);
short v_termpty_block_get( unsigned int parameter_1,int parameter_2);
int v_termpty_block_id_get( char parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( int parameter_1,int parameter_2);
short v__smart_apply( char parameter_1,int uni_para);
float v__smart_cb_change(int uni_para);
void v__smart_update_queue( float parameter_1,char parameter_2,int uni_para);
void v__lost_selection_reset_job();
int v__lost_selection(long parameter_2,int uni_para);
unsigned int v__take_selection_text( int parameter_1,float parameter_2,long parameter_3,int uni_para);
void v__cb_ctxp_link_content_copy(float parameter_2,int uni_para);
void v_ty_sb_free();
float v_ty_sb_steal_buf( char parameter_1);
int v_codepoint_to_utf8( double parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( unsigned int parameter_1);
int v_ty_sb_add( unsigned int parameter_1,float parameter_2,long parameter_3);
unsigned int v__termpty_cellrow_from_beacon_get( short parameter_1,int parameter_2,double parameter_3);
double v_termpty_cellrow_get( double parameter_1,int parameter_2,short parameter_3);
float v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,int parameter_7);
unsigned int v__cb_ctxp_link_open(double parameter_2);
float v__should_inline( short parameter_1);
unsigned int v_link_is_email( float parameter_1);
void v_link_is_protocol( double parameter_1);
float v_link_is_url( long parameter_1);
void v__activate_link( short parameter_1,float parameter_2);
double v__cb_ctxp_link_preview(short parameter_2);
char v__is_fmt( char parameter_1,long parameter_2);
char v_media_src_type_get( double parameter_1);
void v__mouse_in_selection( char parameter_1,int parameter_2,int parameter_3);
char v__smart_xy_to_cursor( unsigned int parameter_1,long parameter_2,char parameter_3,int parameter_4,int parameter_5);
unsigned int v__cb_link_down(char parameter_2,float parameter_3,int uni_para);
double v_main_term_popup_exists( unsigned int parameter_1);
short v__update_link( int parameter_1,unsigned int parameter_2,long parameter_3,double parameter_4,int uni_para);
unsigned int v__remove_links( int parameter_1,double parameter_2,int uni_para);
double v__sel_set( double parameter_1,int parameter_2);
int v_termio_scroll_get( int parameter_1);
void v_miniview_position_offset( short parameter_1,int parameter_2,char parameter_3);
char v_term_miniview_get( char parameter_1);
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
void v_termpty_save_new( float parameter_1,int parameter_2);
int v_termpty_save_expand( int parameter_1,double parameter_2,float parameter_3);
short v__termpty_cell_is_empty( unsigned int parameter_1);
long v_termpty_line_length( double parameter_1,long parameter_2);
double v_verify_beacon( unsigned int parameter_1,int parameter_2);
void v_termpty_text_save_top( double parameter_1,double parameter_2,int parameter_3);
void v_termpty_text_scroll( char parameter_1,unsigned int parameter_2,int uni_para);
void v_termpty_text_scroll_test( unsigned int parameter_1,char parameter_2,int uni_para);
double v__cursor_to_start_of_line( int parameter_1);
int v__tab_forward( long parameter_1,int parameter_2);
unsigned int v__handle_cursor_control( char parameter_1,char parameter_2);
int v_termpty_handle_seq( short parameter_1,long parameter_2,unsigned int parameter_3,int uni_para);
void v_termpty_handle_buf( char parameter_1,float parameter_2,int parameter_3,int uni_para);
void v_theme_reload( long parameter_1);
void v_theme_reload_cb(unsigned int parameter_2,int parameter_3,short parameter_4);
void v_theme_auto_reload_enable( char parameter_1);
void v__cursor_shape_to_group_name( int parameter_1);
double v_config_theme_path_default_get( double parameter_1);
int v_theme_path_get();
char v_config_theme_path_get( unsigned int parameter_1);
unsigned int v_theme_apply( float parameter_1,int parameter_2,double parameter_3);
void v_termio_set_cursor_shape( double parameter_1,char parameter_2);
void v_termpty_clear_tabs_on_screen( int parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( unsigned int parameter_1,long parameter_2);
float v__ts_free();
void v_termpty_save_free( short parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( int parameter_1);
void v_termpty_reset_att( short parameter_1);
char v_termio_config_get( int parameter_1);
void v_termpty_reset_state( float parameter_1);
void v_termpty_resize_tabs( long parameter_1,int parameter_2,int parameter_3);
int v__termpty_init( double parameter_1);
short v__add_default_keys( int parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,long parameter_4,short parameter_5,long parameter_6);
char v_config_new();
float v__termpty_shutdown( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	return float_1;
}
void v_termpty_text_scroll_rev_test( float parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_1 * float_3;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	v_termpty_text_scroll_rev(int_1,unsigned_int_2);

}
void v__handle_esc_dcs( short parameter_1,char parameter_2,short parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_2 = 1;
		if(1)
		{
			char controller_3[3];
			fgets(controller_3 ,3 ,stdin);
			if( strcmp( controller_3, "pe") < 0)
			{
				if(1)
				{
					v__safechar(float_1);

					unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				}
				if(1)
				{
					char char_1 = 1;
					char char_2 = 1;
					char_1 = char_1 * char_2;
				}
			}
		}
		if(1)
		{
			float_1 = float_2;
		}
		if(1)
		{
			float_1 = float_2 * float_2;
		}
		if(1)
		{
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_3 + float_4;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			v_termpty_write(double_1,float_3,int_1);

			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
	}
	char controller_11[3];
	fgets(controller_11 ,3 ,stdin);
	if( strcmp( controller_11, "o4") > 0)
	{
		if(1)
		{
			short_1 = short_1 + short_1;
		}
	}
}
void v__handle_op_a( float parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	double_1 = double_3;
}
float v__termpty_ext_handle( char parameter_1,long parameter_2,float parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	v__handle_op_a(float_1,unsigned_int_1,unsigned_int_2);

	float_1 = float_1;
	int_1 = int_1 * int_2;
	return float_2;
}
long v__handle_esc_terminology( char parameter_1,long parameter_2,int parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	float_1 = v__termpty_ext_handle(char_1,long_1,float_1);

	int_1 = int_1;
	return long_2;
	char_1 = v_termio_config_get(int_1);

}
unsigned int v__handle_xterm_777_command( double parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_2;
	}
	double_4 = double_3 * double_1;
	if(1)
	{
	}
	short_2 = short_2 + short_1;
	int_1 = int_2;
	int_1 = int_3;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	long_3 = long_2 + long_2;
	short_1 = short_1 * short_3;
	double_4 = double_2 * double_3;
	int_4 = int_3 * int_2;
	int_5 = int_3 + int_2;
	return unsigned_int_1;
}
unsigned int v__smart_calculate_226( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_2;
	int_2 = int_1 * int_1;
	float_1 = float_3 * float_1;
	long_1 = long_1 * long_1;
	long_3 = long_2 * long_1;
	char_1 = char_1;
	int_1 = int_1 * int_2;
	return unsigned_int_1;
}
void v__smart_size( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short_1 = short_2;
	short_2 = short_3 + short_2;
	if(1)
	{
		int_1 = int_1 + int_2;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	v_termpty_resize(unsigned_int_1,int_3,int_4);

	char_1 = char_1 * char_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_1 + long_1;
	float_2 = float_1 + float_2;
	double_2 = double_3 * double_3;
	if(1)
	{
		double_1 = double_3 * double_1;
	}
	double_3 = v__sel_set(double_4,int_1);

	int_6 = int_5 * int_2;
	int_7 = int_7 + int_2;
	short_2 = v__smart_apply(char_2,-1 );

	int_5 = int_4 * int_6;
	unsigned_int_2 = v__smart_calculate_226(long_1);

	long_3 = long_2 * long_1;
	int_7 = int_5;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
}
void v_colors_term_init( double parameter_1,double parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_4 = 1;
	int_2 = int_1 + int_2;
	long_2 = long_1 + long_2;
	float_1 = float_1 * float_2;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		char_1 = char_1 * char_2;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_3 + char_1;
			float_2 = float_2;
			double_3 = double_2 + double_2;
			short_1 = short_1 * short_1;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_1 = int_3 + int_4;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				short short_2 = 1;
				float float_3 = 1;
				float float_4 = 1;
				int_4 = int_4 * int_1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
				short_1 = short_2 * short_1;
				short_2 = short_3;
				float_3 = float_3 * float_4;
			}
		}
		short_5 = short_4 + short_4;
		int_6 = int_5 + int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_3 = long_3 + long_4;
			if(1)
			{
				short_5 = short_5 * short_6;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			short short_7 = 1;
			short_3 = short_7 * short_6;
			if(1)
			{
				double_4 = double_1 + double_1;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char char_4 = 1;
		char_2 = char_4 + char_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			double_1 = double_3 * double_3;
			short_6 = short_6 + short_5;
			unsigned_int_3 = unsigned_int_2;
			double_2 = double_3 + double_2;
			double_5 = double_5 + double_4;
		}
		double_1 = double_3;
	}
}
void v_termio_config_update( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	double double_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 + char_2;
	double_3 = double_1 + double_2;
	int_1 = int_1 + int_1;
	short_1 = short_1 + short_2;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_1 * char_3;
	}
	v_termpty_backlog_size_set(unsigned_int_1,long_1);

	long_1 = long_2 * long_3;
	if(1)
	{
		double double_4 = 1;
		long_2 = long_4;
		double_1 = double_4;
	}
	if(1)
	{
		char char_5 = 1;
		char_5 = char_5 * char_5;
	}
	v__smart_size(double_5,int_1,int_1,int_1);

	int_2 = int_2 * int_1;
	v_colors_term_init(double_2,double_6,unsigned_int_1);

	short_4 = short_1 + short_3;
	int_2 = int_2 * int_2;
	int_2 = int_1;
	short_4 = short_3 + short_2;
	long_3 = long_3 + long_4;
	v_termio_set_cursor_shape(double_1,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	short_5 = short_2 + short_4;
	if(1)
	{
		short_3 = short_3 * short_4;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	long_1 = long_4 * long_2;
	int_1 = int_3 + int_3;
}
short v__font_size_set( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_termio_config_update(char_1);

	short_2 = short_1 + short_1;
	int_1 = int_1 + int_1;
	int_3 = int_1 * int_2;
	float_1 = float_1 + float_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int_6 = int_4 * int_5;
		double_1 = double_1 + double_1;
		short_2 = short_1 + short_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		int_4 = int_6 * int_6;
		int_1 = int_1 + int_5;
	}
	return short_1;
}
void v_termio_font_size_set( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_1 = v__font_size_set(unsigned_int_1,int_1);

	double_3 = double_1 * double_2;
}
float v__handle_xterm_50_command( long parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	return float_1;
	v_termio_font_size_set(long_1,int_1);

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
long v__xterm_parse_color( double parameter_1,float parameter_2,char parameter_3,short parameter_4,int parameter_5)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_1 = double_1;
	long_1 = long_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	float_2 = float_1 + float_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		int int_3 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		int_1 = int_2 * int_2;
		if(1)
		{
			short_2 = short_1 + short_2;
		}
		float_3 = float_2 + float_2;
		double_2 = double_2;
		if(1)
		{
			int_2 = int_1 * int_3;
		}
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		char_1 = char_2;
		if(1)
		{
			double_1 = double_1;
		}
		double_1 = double_3;
		short_2 = short_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
		}
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_7 = unsigned_int_6;
		if(1)
		{
			long_1 = long_1 * long_2;
		}
		short_4 = short_2 * short_3;
		int_3 = int_2 + int_3;
		if(1)
		{
			unsigned_int_6 = unsigned_int_2;
		}
		short_2 = v__eina_unicode_to_hex(short_1);

		short_2 = short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		char char_3 = 1;
		short_1 = short_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_8;
		}
		unsigned_int_9 = unsigned_int_8 + unsigned_int_4;
		char_3 = char_1 + char_1;
		if(1)
		{
			float_3 = float_3 + float_3;
		}
		short_4 = short_4 * short_2;
		long_2 = long_1 * long_2;
		if(1)
		{
			short_4 = short_1 * short_1;
		}
		short_4 = short_1 + short_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_4 * double_3;
	}
	double_1 = double_2 + double_3;
	return long_2;
}
short v__xterm_arg_get( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	float_3 = float_1 + float_2;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_2 + int_3;
	long_1 = long_2;
	long_2 = long_1 + long_3;
	int_3 = int_3;
	double_2 = double_1 * double_1;
	long_2 = long_3 * long_4;
	double_1 = double_3 + double_3;
	char_1 = char_1;
	char_1 = char_1;
	int_2 = int_3 + int_3;
	float_1 = float_2 + float_2;
	unsigned_int_3 = unsigned_int_3;
	short_1 = short_1 + short_2;
	double_1 = double_1 * double_1;
	long_4 = long_2 + long_3;
	double_3 = double_2;
	short_3 = short_3 + short_2;
	double_5 = double_2 * double_4;
	int_4 = int_1 * int_1;
	return short_4;
}
int v__handle_esc_xterm( char parameter_1,unsigned int parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	float float_5 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_7 = 1;
	char char_5 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_6 = 1;
	int_3 = int_1 + int_2;
	float_1 = float_1;
	int_5 = int_4 * int_2;
	short_1 = v__xterm_arg_get(double_1);

	long_1 = v__xterm_parse_color(double_2,float_2,char_1,short_2,int_3);

	int_3 = int_2;
	float_2 = float_1 * float_1;
	int_6 = int_6 + int_6;
	if(1)
	{
		double_2 = double_3 + double_3;
	}
	char_2 = v_termio_config_get(int_4);

	int_2 = int_3 * int_2;
	float_1 = float_1 * float_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2;
	}
	double_4 = double_3 + double_2;
	if(1)
	{
		float float_4 = 1;
		unsigned_int_1 = v_termio_textgrid_get(long_1);

		float_3 = float_1 + float_4;
	}
	float_5 = float_2;
	int_4 = int_1 + int_4;
	char_1 = char_3 + char_3;
	double_3 = double_5 + double_6;
	float_6 = float_1 * float_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4;
	}
	if(1)
	{
		char_3 = char_1 + char_3;
		int_6 = int_2 + int_2;
		char_1 = char_4;
	}
	if(1)
	{
		double_3 = double_3 * double_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
	}
	unsigned_int_1 = v__handle_xterm_777_command(double_1,char_4,int_6);

	int_6 = int_5 * int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		unsigned_int_5 = unsigned_int_3;
	}
	if(1)
	{
		double_2 = double_1 * double_6;
	}
	if(1)
	{
		v_termpty_write(double_2,float_3,int_2);

		double_5 = double_2;
		int_7 = int_4;
	}
	if(1)
	{
		float_6 = v__handle_xterm_50_command(long_1,char_5,int_7);

		float_2 = float_5 * float_3;
	}
	if(1)
	{
		char char_6 = 1;
		char_3 = char_6 * char_2;
	}
	int_3 = int_8 + int_2;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_4;
	return int_5;
}
void v_termpty_cells_set_content( int parameter_1,long parameter_2,double parameter_3,int parameter_4)
{
	short short_1 = 1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
}
int v__handle_esc_csi_decera( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_5 = 1;
	char_1 = v__csi_arg_get(int_1);

	v_termpty_cells_set_content(int_2,long_1,double_1,int_1);

	float_1 = float_1 + float_2;
	int_3 = int_4;
	char_1 = char_1 * char_2;
	int_1 = int_1 + int_1;
	short_2 = short_1 + short_2;
	long_2 = long_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "G") > 0)
	{
	}
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double_3 = double_3;
		int_4 = v__clean_up_rect_coordinates(long_1,int_5,int_2,int_4,int_3);

		double_1 = double_1;
	}
	return int_2;
}
void v_termpty_cells_att_fill_preserve_colors( long parameter_1,int parameter_2,long parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = long_1 * long_2;
	short_1 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_1;
		int_1 = int_2 * int_1;
		char_2 = char_1 * char_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			int_2 = int_2 * int_3;
			double_2 = double_1 * double_2;
			double_1 = double_1 * double_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
}
int v__clean_up_rect_coordinates( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	double double_6 = 1;
	int int_4 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	short_1 = short_1 + short_2;
	long_3 = long_2 * long_1;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double_1 = double_2 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
	}
	if(1)
	{
		double_3 = double_3 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_2 + int_3;
		if(1)
		{
			double_5 = double_3 * double_4;
		}
	}
	short_3 = short_1 + short_3;
	if(1)
	{
		double_6 = double_4;
	}
	if(1)
	{
	}
	int_1 = int_3 * int_3;
	int_1 = int_4;
	double_6 = double_5 + double_1;
	double_5 = double_5 + double_5;
	return int_3;
}
long v__handle_esc_csi_decfra( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_5 = 1;
	v_termpty_cells_att_fill_preserve_colors(long_1,int_1,long_1,int_2);

	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 + char_1;
	long_3 = long_2 + long_3;
	float_2 = float_1 + float_2;
	short_1 = short_1 * short_2;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "Y") > 0)
	{
	}
	int_2 = v__clean_up_rect_coordinates(long_4,int_3,int_3,int_4,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = v__csi_arg_get(int_3);

		int_3 = int_4;
		int_2 = int_3 * int_4;
	}
	return long_5;
}
int v__handle_esc_csi_decslrm( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	int_2 = int_1 * int_1;
	v__move_cursor_to_origin();

	double_1 = double_1;
	int_2 = int_1 * int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	char_2 = char_2 * char_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	short_2 = short_1 + short_1;
	char_2 = char_2 + char_3;
	double_3 = double_2 + double_2;
	float_1 = float_2;
	double_3 = double_1 * double_3;
	return int_2;
	char_4 = v__csi_arg_get(int_1);

}
unsigned int v__handle_esc_csi_decstbm( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	double_2 = double_1 * double_1;
	float_2 = float_1 + float_1;
	char_1 = v__csi_arg_get(int_1);

	int_2 = int_2 * int_2;
	int_2 = int_2 + int_2;
	if(1)
	{
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		char char_2 = 1;
		char_3 = char_2 + char_2;
	}
	short_2 = short_1 * short_2;
	int_2 = int_3 * int_1;
	v__move_cursor_to_origin();

	int_2 = int_2 * int_3;
	int_1 = int_2;
	char_1 = char_4 * char_3;
	return unsigned_int_1;
}
double v__handle_esc_csi_decscusr( double parameter_1,short parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char_1 = v__csi_arg_get(int_1);

	int_2 = int_1 + int_2;
	v_termio_set_cursor_shape(double_1,char_1);

	int_1 = int_2;
	double_3 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_2;
	int_3 = int_3 * int_1;
	int_3 = int_2 + int_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	int_3 = int_2 + int_4;
	long_2 = long_1 * long_1;
	char_2 = char_3 + char_3;
	long_1 = long_1;
	int_2 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return double_2;
}
long v__handle_esc_csi_dsr( char parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_5 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	long long_3 = 1;
	double_1 = double_2;
	double_3 = double_2 * double_2;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 + double_3;
	}
	if(1)
	{
		int int_2 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_2;
		v_termpty_write(double_5,float_1,int_3);

		char_1 = char_1 + char_1;
		int_3 = int_4 + int_3;
		char_1 = v__csi_arg_get(int_3);

		int_5 = int_3 * int_5;
		long_2 = long_1 * long_1;
		int_5 = int_5 * int_5;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		short_1 = short_1 * short_1;
		short_3 = short_2 * short_2;
		unsigned_int_2 = unsigned_int_1;
		int_5 = int_5 * int_1;
		double_2 = double_3 * double_6;
	}
	return long_3;
}
char v__handle_esc_csi_truecolor_cmyk( int parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char_3 = char_1 + char_2;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = v__csi_truecolor_arg_get(float_1);

	long_1 = long_1 + long_2;
	int_1 = int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "d{") > 0)
	{
	}
	int_3 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	char_1 = v__approximate_truecolor_rgb(unsigned_int_2,int_3,int_1,int_3);

	char_5 = char_3 * char_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	char_2 = char_3 * char_1;
	unsigned_int_4 = unsigned_int_4;
	return char_3;
}
unsigned int v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,short parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_1 + char_1;
	double_1 = double_2;
	char_1 = char_2 + char_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = v__csi_truecolor_arg_get(float_1);

	char_1 = v__approximate_truecolor_rgb(unsigned_int_2,int_1,int_1,int_1);

	long_2 = long_1 * long_1;
	double_3 = double_2;
	float_4 = float_2 + float_3;
	return unsigned_int_4;
}
char v__approximate_truecolor_rgb( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		if(1)
		{
			double_3 = double_4;
		}
		if(1)
		{
			double_1 = double_4 + double_3;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_2 = short_1 + short_2;
			}
		}
	}
	return char_1;
	unsigned_int_1 = v_termio_textgrid_get(long_1);

}
unsigned int v__csi_truecolor_arg_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v__handle_esc_csi_truecolor_rgb( long parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long_1 = long_1 * long_2;
	short_1 = short_1 + short_1;
	short_2 = short_3;
	char_1 = v__approximate_truecolor_rgb(unsigned_int_1,int_1,int_1,int_2);

	double_1 = double_1 * double_2;
	double_3 = double_3 + double_2;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		double_2 = double_3 * double_1;
		int_2 = int_1 * int_2;
		unsigned_int_1 = v__csi_truecolor_arg_get(float_1);

		char_3 = char_2 * char_3;
	}
	if(1)
	{
	}
	return double_3;
}
double v__handle_esc_csi_color_set( unsigned int parameter_1,float parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	v_termpty_reset_att(short_1);

	unsigned_int_1 = v__handle_esc_csi_truecolor_cmy(unsigned_int_1,short_1);

	float_1 = float_1 * float_1;
	double_1 = v__handle_esc_csi_truecolor_rgb(long_1,double_2);

	double_2 = double_1 * double_1;
	return double_2;
	char_1 = v__csi_arg_get(int_1);

	char_1 = v__handle_esc_csi_truecolor_cmyk(int_1,long_2);

}
void v_termpty_cursor_copy( short parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		float float_1 = 1;
		char_2 = char_1 * char_1;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = short_1 + short_2;
		char_1 = char_3 + char_2;
		long_1 = long_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
short v__switch_to_alternative_screen( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	return short_1;
	v_termpty_screen_swap(char_1);

}
void v__move_cursor_to_origin()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_1;
		int_3 = int_2 + int_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
}
double v__pty_size( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_3 = double_1 * double_2;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_2 + double_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	return double_1;
}
unsigned int v__limit_coord( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_2;
	float_1 = float_1 + float_2;
	double_3 = double_2 + double_1;
	float_2 = float_2 + float_2;
	return unsigned_int_2;
}
short v__check_screen_info( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		long_2 = long_1 + long_1;
		v_termpty_text_save_top(double_1,double_2,int_1);

		unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
		v_termpty_cells_clear(char_1,float_1,int_2);

		char_2 = char_2 * char_2;
		if(1)
		{
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	}
	return short_1;
}
long v__termpty_line_rewrap( double parameter_1,short parameter_2,int parameter_3,float parameter_4,double parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 * int_1;
	long_3 = long_1 * long_2;
	short_1 = v__check_screen_info(char_1,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return long_3;
}
double v__backlog_remove_latest_nolock( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		v_termpty_save_free(short_2);

		short_1 = short_1 * short_2;
	}
	float_1 = float_1 + float_1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_2 + double_2;
	return double_3;
	double_3 = v_verify_beacon(unsigned_int_2,int_3);

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
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double_2 = double_1 + double_1;
			long_3 = long_1 + long_2;
			float_1 = float_2;
			float_4 = float_3 + float_3;
			double_2 = double_3 + double_2;
			if(1)
			{
			}
			int_1 = int_1 * int_1;
			int_1 = int_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				float float_5 = 1;
				float_5 = float_1 * float_2;
			}
		}
	}
}
int v__termpty_line_is_empty( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
		if(1)
		{
		}
	}
	return int_1;
	short_1 = v__termpty_cell_is_empty(unsigned_int_1);

}
void v_termpty_screen_swap( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_2;
	long_2 = long_1 + long_1;
	float_1 = float_1 + float_2;
	double_4 = double_1 * double_3;
	long_2 = long_3 * long_3;
	long_2 = long_3 * long_2;
	char_1 = char_1;
	int_1 = int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "}") > 0)
	{
		int int_3 = 1;
		int_3 = int_2 * int_2;
	}
}
void v_termpty_resize( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_3 = 1;
	long long_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	double double_6 = 1;
	float float_2 = 1;
	int int_5 = 1;
	char char_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_8 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	long long_6 = 1;
	short short_6 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_8 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	long_1 = v__termpty_line_rewrap(double_1,short_1,int_1,float_1,double_1);

	int_1 = int_1 + int_2;
	if(1)
	{
	}
	long_1 = long_2;
	if(1)
	{
		float_1 = float_1;
		short_4 = short_2 + short_3;
	}
	int_1 = int_3;
	if(1)
	{
		long_4 = long_1 + long_3;
	}
	double_1 = double_2;
	int_2 = int_2 * int_4;
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	double_1 = double_1;
	v_termpty_backlog_unlock();

	double_3 = v_verify_beacon(unsigned_int_3,int_2);

	float_1 = float_1;
	long_3 = long_5 * long_2;
	long_3 = v_termpty_line_length(double_4,long_2);

	double_3 = double_1 * double_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_4 + int_1;
		if(1)
		{
			float_1 = float_1 + float_1;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
		}
	}
	int_2 = int_3 + int_3;
	char controller_6[2];
	fgets(controller_6 ,2 ,stdin);
	if( strcmp( controller_6, "F") < 0)
	{
		unsigned_int_1 = v__limit_coord(char_2);

		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	}
	v_termpty_resize_tabs(long_1,int_4,int_4);

	double_6 = double_6 + double_3;
	if(1)
	{
		short_1 = short_4 + short_2;
		char_2 = char_2 + char_1;
		int_4 = int_4 * int_4;
		if(1)
		{
			short short_5 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_3 = 1;
			short_1 = short_2 * short_2;
			short_5 = short_3 + short_1;
			float_1 = float_1 + float_2;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
			if(1)
			{
				int_2 = int_4;
			}
			int_4 = int_5 + int_5;
			v_termpty_screen_swap(char_3);

			int_5 = int_5 * int_6;
			double_6 = double_4 + double_4;
			int_3 = int_7 + int_6;
			float_3 = float_2 * float_2;
			unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
			int_2 = int_1 * int_8;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		int_3 = int_7 + int_6;
		v_termpty_save_extract(long_3);

		unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
		double_7 = v__pty_size(int_7);

		long_3 = long_2;
	}
	double_8 = v__backlog_remove_latest_nolock(float_2);

	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	double_2 = double_1 * double_9;
	long_3 = long_6 + long_5;
	double_1 = double_4;
	int_2 = int_4 * int_2;
	double_8 = double_7 * double_6;
	int_7 = int_1 + int_8;
	short_2 = short_3 + short_3;
	if(1)
	{
		int_5 = int_8 * int_8;
	}
	short_6 = short_6 * short_2;
	long_4 = long_2 * long_1;
	unsigned_int_2 = unsigned_int_3;
	int_1 = int_8 * int_7;
	int_9 = int_2 + int_3;
	v_termpty_backlog_lock();

	long_6 = long_6 + long_1;
	short_6 = short_3 + short_1;
	int_8 = v__termpty_line_is_empty(char_1,unsigned_int_8);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_7;
}
char v_termio_win_get( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
double v__handle_esc_csi_reset_mode( long parameter_1,unsigned int parameter_2,float parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	char_1 = v__csi_arg_get(int_1);

	char_2 = v_termio_win_get(int_2);

	v_termpty_clear_screen(unsigned_int_1,unsigned_int_2);

	short_1 = v__switch_to_alternative_screen(float_1,int_1);

	int_1 = int_2 * int_3;
	float_2 = float_1 * float_2;
	v_termpty_resize(unsigned_int_3,int_3,int_3);

	v_termpty_reset_state(float_2);

	long_2 = long_1 + long_1;
	return double_1;
	v__move_cursor_to_origin();

	v_termpty_cursor_copy(short_2,float_3);

}
short v__handle_esc_csi_cursor_pos_set( int parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	float_1 = float_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_3 = unsigned_int_6 + unsigned_int_2;
		if(1)
		{
			int int_4 = 1;
			int_1 = int_1 + int_4;
		}
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	char_3 = char_2 * char_3;
	unsigned_int_7 = unsigned_int_8;
	if(1)
	{
		char_2 = v__csi_arg_get(int_1);

		char_3 = char_1 + char_3;
	}
	if(1)
	{
		int_3 = int_1;
		if(1)
		{
			short_2 = short_1 + short_2;
		}
	}
	if(1)
	{
		short_2 = short_3 + short_1;
	}
	double_2 = double_1 + double_1;
	return short_3;
}
void v_termpty_text_scroll_rev( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_1;
	v_termpty_cells_clear(char_1,float_1,int_1);

	float_3 = float_2 + float_2;
	if(1)
	{
		long long_1 = 1;
		int_2 = int_2 * int_1;
		long_1 = long_1 + long_1;
	}
	char_3 = char_2 + char_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		float_2 = float_2 + float_2;
		if(1)
		{
			char_2 = char_1 + char_2;
		}
		int_2 = int_1;
		if(1)
		{
			double_2 = double_2 * double_1;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short short_2 = 1;
			char char_4 = 1;
			short_2 = short_1 * short_1;
			char_4 = char_3 + char_3;
			int_1 = int_2 + int_2;
		}
		if(1)
		{
			float_2 = float_2 + float_2;
		}
	}
	v_termio_scroll(float_1,int_1,int_1,int_1,-1 );

}
void v_termpty_clear_line( double parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_termio_content_change(int_1,unsigned_int_1,double_1,int_2);

	long_2 = long_1 + long_2;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_3 * int_4;
	double_2 = double_3 * double_2;
	int_4 = int_3 * int_2;
	double_3 = double_4 + double_4;
	double_2 = double_1 * double_2;
	float_1 = float_1 * float_1;
	char_1 = char_1 + char_2;
	v_termpty_cells_clear(char_2,float_1,int_1);

	int_4 = int_5 * int_4;
	double_4 = double_1 + double_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	short_3 = short_1 * short_2;
	int_1 = int_5 + int_2;
}
void v_termpty_clear_screen( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		int int_2 = 1;
		v_termpty_clear_line(double_1,char_1,int_1);

		int_1 = int_2 + int_1;
	}
	double_2 = double_2 * double_1;
	v_termio_content_change(int_3,unsigned_int_1,double_3,int_3);

	v_termpty_cells_clear(char_2,float_1,int_4);

	char_2 = char_3 + char_2;
	char_1 = char_3 + char_4;
	double_3 = double_4 + double_2;
}
void v_termpty_cell_codepoint_att_fill( double parameter_1,long parameter_2,double parameter_3,char parameter_4,int parameter_5)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float_2 = float_1 * float_1;
		double_1 = double_1 * double_2;
	}
}
int v__termpty_charset_trans( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
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
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
	}
	if(1)
	{
		int int_4 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int int_5 = 1;
			int_5 = int_3 * int_4;
		}
		if(1)
		{
			int_2 = int_1 * int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		}
	}
	return int_2;
}
void v_termio_content_change( int parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_6 = 1;
	int int_7 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		short short_4 = 1;
		int_1 = int_4 + int_5;
		short_1 = short_2 * short_4;
		float_1 = float_1 * float_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		int_5 = int_5 + int_2;
		short_2 = short_3 + short_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_5 = 1;
			short_4 = short_4 * short_4;
			if(1)
			{
				double_1 = double_1 + double_2;
				int_6 = int_2 + int_1;
			}
			short_2 = short_4 * short_1;
			short_5 = short_3 * short_5;
		}
	}
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	float_1 = float_2 + float_2;
	if(1)
	{
		float_1 = float_1;
		int_1 = int_4 * int_3;
	}
	if(1)
	{
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float_3 = float_1 * float_1;
		char_3 = char_1 + char_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double_4 = double_1 * double_3;
			if(1)
			{
				long long_3 = 1;
				double_5 = double_1 + double_5;
				long_2 = long_3 * long_2;
			}
			unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
			double_6 = v__sel_set(double_1,int_7);

			double_5 = double_2 * double_4;
		}
	}
	if(1)
	{
		double double_7 = 1;
		int int_8 = 1;
		long long_4 = 1;
		int_4 = int_4 * int_5;
		unsigned_int_5 = v__remove_links(int_2,double_3,-1 );

		double_7 = double_2 * double_4;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
		int_8 = int_6 * int_1;
		long_1 = long_4 * long_1;
		if(1)
		{
			int_3 = int_2 + int_6;
		}
	}
}
void v_termpty_text_append( double parameter_1,float parameter_2,int parameter_3,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 * char_1;
	int_1 = int_1;
	char_3 = char_3 + char_4;
	int_1 = int_1;
	if(1)
	{
		double_1 = double_1;
	}
	int_2 = int_2 * int_2;
	long_3 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		short short_1 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_4 = 1;
		float float_3 = 1;
		short short_2 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			int_1 = int_1 * int_1;
			double_1 = double_1 + double_1;
			double_1 = double_1 + double_2;
			short_1 = short_1 + short_1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_3 = int_2 * int_2;
			}
		}
		double_2 = double_3 + double_4;
		if(1)
		{
			int_1 = int_1 + int_2;
		}
		char controller4vul_2168[3];
		fgets(controller4vul_2168 ,3 ,stdin);
		if( strcmp( controller4vul_2168, "#Q") > 0)
		{
			char controller4vul_2169[3];
			fgets(controller4vul_2169 ,3 ,stdin);
			if( strcmp( controller4vul_2169, "eK") > 0)
			{
				v_termpty_text_scroll_test(unsigned_int_2,char_3,uni_para);

				int_1 = int_2 * int_1;
			}
			char_4 = char_1;
		}
		int_3 = int_3 + int_3;
		if(1)
		{
			double_4 = double_3 + double_5;
			int_2 = int_4 * int_2;
		}
		float_3 = float_2 + float_1;
		if(1)
		{
			double_2 = double_2 * double_3;
			double_4 = double_4 + double_5;
		}
		if(1)
		{
			long long_4 = 1;
			long_4 = long_4 * long_4;
			float_2 = float_2 + float_2;
			if(1)
			{
				double_2 = double_5 + double_3;
			}
			if(1)
			{
				char_4 = char_4;
			}
			if(1)
			{
				short short_3 = 1;
				short_3 = short_1 * short_2;
				double_1 = double_4 * double_1;
			}
		}
		if(1)
		{
			double_5 = double_4;
			double_3 = double_5 + double_3;
			if(1)
			{
				float_3 = float_1 + float_1;
			}
			short_1 = short_1 + short_2;
			if(1)
			{
				long_3 = long_3;
				int_4 = int_1 + int_1;
			}
			long_3 = long_2;
		}
	}
}
char v__csi_arg_get( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_2;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_2;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_2 + int_3;
	}
	return char_1;
}
long v__handle_esc_csi( char parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	v_termpty_text_append(double_1,float_1,int_1,uni_para);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return long_1;
}
void v__safechar( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
double v__handle_esc( float parameter_1,float parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_3 = 1;
	double double_5 = 1;
	char char_3 = 1;
	long long_2 = 1;
	short short_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	int int_6 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_7 = 1;
	long long_6 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	double_1 = double_2 + double_1;
	if(1)
	{
	}
	int_1 = int_2 + int_2;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	double_2 = double_3 + double_3;
	int_4 = int_3 + int_1;
	char_1 = char_2;
	long_1 = long_1;
	int_2 = int_2 * int_4;
	int_1 = int_5 + int_4;
	double_2 = double_2 * double_3;
	double_1 = double_4 * double_4;
	short_2 = short_3;
	double_5 = double_2 * double_1;
	char_3 = char_3 * char_3;
	double_5 = double_1 + double_5;
	int_3 = int_4 + int_1;
	long_2 = long_2 * long_1;
	short_4 = short_2 + short_1;
	long_2 = long_2 + long_2;
	long_3 = long_1 * long_3;
	double_2 = double_4 + double_2;
	short_1 = short_2;
	if(1)
	{
		char_1 = char_3 + char_1;
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_4 = char_2 + char_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_6 * int_1;
	if(1)
	{
	}
	short_6 = short_3 + short_5;
	double_3 = double_4 + double_2;
	if(1)
	{
	}
	int_4 = int_5 + int_3;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	int_5 = int_3 + int_3;
	if(1)
	{
	}
	char controller4vul_2166[3];
	fgets(controller4vul_2166 ,3 ,stdin);
	if( strcmp( controller4vul_2166, "=X") > 0)
	{
		int int_8 = 1;
		unsigned int unsigned_int_5 = 1;
		int_6 = int_3 * int_3;
		short_1 = short_3 + short_2;
		short_4 = short_3 + short_2;
		long_3 = long_4 + long_4;
		double_5 = double_1 * double_2;
		char controller4vul_2167[2];
		fgets(controller4vul_2167 ,2 ,stdin);
		if( strcmp( controller4vul_2167, "d") > 0)
		{
			long_4 = v__handle_esc_csi(char_1,long_5,int_7,uni_para);

			int_2 = int_3 * int_4;
		}
		int_2 = int_2 * int_8;
		unsigned_int_5 = unsigned_int_5;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "Mo") > 0)
		{
			short_1 = short_1 * short_6;
			double_2 = double_2 + double_4;
			char_1 = char_1;
		}
	}
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	double_5 = double_2;
	long_5 = long_4 * long_6;
	char_1 = char_4 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return double_4;
}
void v_termpty_cell_fill( long parameter_1,long parameter_2,long parameter_3,int parameter_4)
{
	long long_1 = 1;
	long_1 = long_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short short_2 = 1;
			long long_2 = 1;
			short_1 = short_1 + short_2;
			long_2 = long_1 + long_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double_2 = double_1 * double_1;
			unsigned_int_1 = unsigned_int_1;
		}
	}
}
void v_termpty_cells_fill( int parameter_1,int parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_1;
	long_1 = long_1 + long_2;
	int_1 = int_1 * int_2;
	long_1 = long_2 + long_3;
	v_termpty_cell_fill(long_4,long_2,long_5,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
void v_termpty_cells_clear( char parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	v_termpty_cells_fill(int_1,int_2,double_1,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
int v__tooltip_del(short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_3 = double_1 + double_2;
	int_2 = int_1 + int_2;
	double_2 = double_2;
	return int_1;
}
double v__tooltip_content(unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double_1 = double_1 + double_1;
	v_media_add(float_1,int_1,unsigned_int_1,int_2,double_2,-1 );

	char_2 = char_1 + char_2;
	double_3 = double_3 + double_4;
	short_2 = short_1 * short_1;
	return double_5;
}
void v_MD5Final( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_1;
	v_MD5Transform(int_1,float_2);

	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_3;
	double_1 = double_2 + double_2;
	if(1)
	{
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		int_1 = int_2;
		unsigned_int_3 = unsigned_int_3;
		short_2 = short_1 + short_1;
		int_1 = int_2 * int_3;
	}
	if(1)
	{
		v_byteReverse(double_1,double_2);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	double_2 = double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	double_3 = double_1 + double_3;
	double_4 = double_1 + double_1;
	long_1 = long_2;
	int_1 = int_4 * int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
}
void v_MD5Transform( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	double double_5 = 1;
	int int_7 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_7 = 1;
	double double_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	long_1 = long_2;
	double_2 = double_1 + double_1;
	char_1 = char_1 * char_2;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_2;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_2 + double_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	double_1 = double_3 * double_1;
	double_1 = double_2 * double_2;
	int_1 = int_3 + int_3;
	short_3 = short_1 * short_1;
	double_1 = double_4 * double_1;
	short_3 = short_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_4;
	unsigned_int_3 = unsigned_int_2;
	float_2 = float_1;
	float_1 = float_3 * float_1;
	int_6 = int_5 * int_6;
	short_4 = short_4 * short_4;
	float_5 = float_4 + float_2;
	short_3 = short_2 + short_3;
	float_2 = float_1 * float_6;
	double_2 = double_4 + double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	long_3 = long_3 * long_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_1;
	char_3 = char_2 * char_2;
	long_2 = long_1 * long_1;
	char_4 = char_2 + char_2;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	short_2 = short_5 + short_5;
	float_5 = float_2 * float_1;
	double_3 = double_1 + double_2;
	double_1 = double_2 * double_2;
	char_2 = char_3;
	float_1 = float_6;
	double_5 = double_5 + double_2;
	int_4 = int_2;
	double_2 = double_5 * double_2;
	int_5 = int_7 + int_2;
	double_4 = double_3;
	int_7 = int_2 * int_5;
	double_6 = double_2 + double_1;
	int_4 = int_7 + int_7;
	short_2 = short_4 + short_2;
	int_7 = int_5;
	int_3 = int_1;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_3;
	float_2 = float_7 * float_4;
	short_1 = short_5 * short_2;
	double_1 = double_4 + double_4;
	double_7 = double_7 + double_1;
	int_2 = int_8 + int_6;
	long_2 = long_1;
	int_3 = int_4 * int_5;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_1;
	double_7 = double_1;
	unsigned_int_6 = unsigned_int_7 + unsigned_int_5;
	char_2 = char_3 + char_1;
	char_1 = char_2 + char_5;
	int_5 = int_4 * int_1;
	unsigned_int_3 = unsigned_int_7 * unsigned_int_1;
	double_1 = double_6 + double_8;
	short_4 = short_1 + short_5;
	double_9 = double_7 * double_2;
}
void v_byteReverse( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
}
void v_MD5Update( int parameter_1,unsigned int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	v_byteReverse(double_1,double_2);

	unsigned_int_3 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_MD5Transform(int_1,float_1);

	double_3 = double_2 * double_1;
	float_2 = float_1;
	long_2 = long_1 * long_1;
	float_2 = float_2 + float_2;
	double_1 = double_4 + double_3;
	int_1 = int_2 * int_1;
	char_3 = char_2 * char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 + short_2;
	float_2 = float_1;
	int_2 = int_1 * int_1;
	int_2 = int_1;
	float_3 = float_1 + float_2;
	float_4 = float_4 * float_2;
}
void v_MD5Init()
{
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1;
	long_1 = long_2;
	long_2 = long_3 * long_1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_2;
}
void v_gravatar_tooltip( int parameter_1,char parameter_2,char parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	v_MD5Final(short_1,char_1);

	short_2 = short_1 * short_1;
	float_1 = float_1 + float_1;
	double_3 = double_1 * double_2;
	int_2 = int_1 + int_2;
	int_3 = int_2 * int_2;
	long_3 = long_1 * long_2;
	double_1 = double_3 + double_1;
	if(1)
	{
	}
	double_3 = double_3 * double_4;
	if(1)
	{
	}
	v_MD5Init();

	float_2 = float_3;
	char_4 = char_2 + char_3;
	int_3 = int_4 + int_3;
	v_MD5Update(int_4,unsigned_int_1,short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_5 = double_1;
		double_3 = double_4;
	}
	int_3 = v__tooltip_del(short_3);

	double_1 = double_3 + double_5;
	float_3 = float_3 + float_4;
	int_2 = int_2;
	double_5 = v__tooltip_content(unsigned_int_5,unsigned_int_3);

	double_5 = double_5 + double_5;
}
unsigned int v__cb_link_drag_done(char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_2 + int_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	unsigned_int_2 = unsigned_int_2;
	return unsigned_int_3;
}
long v__cb_link_drag_accept(long parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long_1 = long_1 + long_2;
	char_1 = char_1 * char_1;
	long_1 = long_1 + long_3;
	return long_2;
}
double v__cb_link_drag_move(int parameter_2,unsigned int parameter_3,long parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_1 + float_2;
	long_2 = long_1 * long_1;
	long_2 = long_3 * long_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_2;
		}
	}
	return double_1;
}
short v__cb_link_icon_new(char parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 * short_2;
	double_2 = double_1;
	double_4 = double_3 + double_3;
	double_4 = double_1 + double_1;
	double_1 = double_2 + double_5;
	return short_2;
}
float v__cb_link_move(float parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = v__cb_link_drag_done(char_1);

	int_1 = int_2;
	char_2 = char_2 + char_2;
	if(1)
	{
	}
	short_1 = v__cb_link_icon_new(char_2,double_1,int_1);

	double_4 = double_2 + double_3;
	short_3 = short_1 + short_2;
	if(1)
	{
		double double_5 = 1;
		int int_4 = 1;
		double double_7 = 1;
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_5 = double_1 + double_1;
		double_2 = v__cb_link_drag_move(int_3,unsigned_int_1,long_4,float_1);

		int_4 = int_3 + int_2;
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			double double_6 = 1;
			double_7 = double_6 * double_4;
		}
		long_3 = v__cb_link_drag_accept(long_4,float_1);

		int_5 = int_3 + int_5;
		double_4 = double_5 + double_7;
	}
	return float_2;
}
double v__cb_link_up_delay()
{
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v__activate_link(short_1,float_1);

	short_2 = short_1 + short_1;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_2 = double_2;
	}
	long_1 = long_1 * long_2;
	return double_1;
}
double v__cb_link_up(float parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 + long_1;
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_1 = v__cb_link_up_delay();

		double_1 = double_1 + double_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_2;
		if(1)
		{
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			}
			char controller_4[2];
			fgets(controller_4 ,2 ,stdin);
			if( strcmp( controller_4, "U") > 0)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_2 = float_1 * float_1;
			}
		}
		char_4 = char_1 + char_3;
	}
	return double_2;
}
void v_term_focus( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_2;
	long_1 = v__term_is_focused(long_2);

	double_3 = double_1 + double_2;
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	short_3 = short_3 * short_1;
	unsigned_int_1 = unsigned_int_1;
}
long v__term_is_focused( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	int_1 = int_3 * int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
void v_term_unfocus( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_2 = float_1 * float_1;
	double_2 = double_1 * double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "}") < 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 + char_2;
	double_3 = double_3;
	long_1 = v__term_is_focused(long_2);

}
char v__cb_ctxp_del(float parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	short_1 = short_1 + short_1;
	float_3 = float_1 + float_2;
	v_term_unfocus(double_1);

	long_2 = long_1 + long_1;
	return char_1;
	v_term_focus(long_3);

}
unsigned int v__cb_ctxp_dismissed(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	return unsigned_int_2;
}
short v__cb_ctxp_link_copy(unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = long_2;
	int_3 = int_1 + int_2;
	int_2 = int_2 * int_2;
	int_3 = int_1 * int_1;
	char_3 = char_1 * char_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = v__take_selection_text(int_4,float_1,long_1,-1 );

	short_2 = short_1 + short_2;
	return short_1;
}
char v__screen_visual_bounds( double parameter_1)
{
	char char_2 = 1;
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char_2 = char_1 * char_2;
		long_1 = long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 * int_2;
	}
	return char_2;
}
int v__draw_cell( double parameter_1,long parameter_2,unsigned int parameter_3,float parameter_4)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	int_1 = int_1 * int_1;
	float_1 = float_2;
	short_3 = short_1 * short_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_3 * float_3;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3;
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_2 + double_1;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		long_2 = long_1 * long_1;
		double_5 = double_2 * double_4;
		long_5 = long_1 + long_4;
		int_1 = int_3;
		int_2 = int_4 * int_5;
		short_3 = short_2 + short_2;
		int_6 = int_6 + int_2;
	}
	if(1)
	{
		double_6 = double_4 * double_6;
	}
	if(1)
	{
		short_2 = short_2 + short_3;
	}
	if(1)
	{
		double_2 = double_5 * double_6;
	}
	if(1)
	{
		float float_4 = 1;
		float_1 = float_4 * float_1;
	}
	if(1)
	{
		if(1)
		{
			int_4 = int_3;
		}
		if(1)
		{
			float_3 = float_1 + float_1;
		}
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2 + char_2;
	}
	return int_2;
}
char v__draw_line( short parameter_1,short parameter_2,float parameter_3,int parameter_4,short parameter_5)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	return char_1;
	int_2 = v__draw_cell(double_1,long_1,unsigned_int_1,float_1);

}
float v_termpty_backlog_length( int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	int int_6 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	int int_7 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 * short_2;
	double_2 = double_1 + double_1;
	double_1 = double_3 * double_3;
	char_1 = char_1 * char_2;
	double_3 = double_3 + double_3;
	int_4 = int_2 + int_3;
	float_2 = float_1 * float_2;
	char_1 = char_3;
	char_4 = char_2 + char_3;
	char_5 = char_1 * char_5;
	double_1 = double_3 * double_4;
	if(1)
	{
		int_4 = int_4;
	}
	double_5 = double_2;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_1 + int_1;
	}
	float_3 = float_1 * float_3;
	if(1)
	{
		double_5 = double_1;
	}
	int_6 = int_1 * int_1;
	if(1)
	{
		float_2 = float_2;
	}
	short_3 = short_1 + short_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	}
	long_1 = long_1;
	double_4 = v_verify_beacon(unsigned_int_2,int_7);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	double_4 = double_4 + double_3;
	int_4 = int_7 * int_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	long_2 = long_2 * long_2;
	return float_3;
}
short v_termio_pty_get( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	float_2 = float_1 * float_2;
	return short_1;
}
unsigned int v_termio_textgrid_get( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 * short_1;
	float_1 = float_1 * float_2;
	return unsigned_int_1;
}
unsigned int v_miniview_colors_get( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_2 = double_3;
		double_2 = double_3 * double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = v_termio_textgrid_get(long_1);

		short_2 = short_1 * short_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	return unsigned_int_4;
}
char v__deferred_renderer()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_4 = 1;
	float float_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	float float_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_7 = 1;
	float_3 = float_1 + float_2;
	char_1 = v__screen_visual_bounds(double_1);

	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2 + double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_2 * double_1;
	int_3 = int_3 + int_3;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_2 + char_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	double_3 = double_3 * double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	short_4 = short_1 * short_3;
	short_5 = short_3 + short_1;
	double_2 = v_termpty_cellrow_get(double_3,int_4,short_4);

	char_1 = v__draw_line(short_1,short_1,float_3,int_3,short_5);

	float_4 = float_1 * float_3;
	long_3 = long_3;
	short_3 = v_termio_pty_get(unsigned_int_4);

	int_2 = int_5;
	if(1)
	{
		int_6 = int_4 * int_5;
	}
	if(1)
	{
		unsigned_int_1 = v_miniview_colors_get(short_4,double_4);

		float_1 = float_2 * float_5;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_4 * double_2;
		if(1)
		{
			long_2 = long_3;
		}
		int_6 = int_5 + int_7;
	}
	int_7 = int_3 * int_6;
	short_4 = short_4;
	int_8 = int_9;
	if(1)
	{
		float float_6 = 1;
		float_1 = float_6 + float_1;
	}
	if(1)
	{
		int_8 = v_termio_scroll_get(int_10);

		short_5 = short_3 + short_3;
	}
	unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
	double_5 = double_2 + double_3;
	if(1)
	{
		int_8 = int_6;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			double double_6 = 1;
			long_1 = long_3 + long_3;
			double_4 = double_6 * double_2;
		}
		if(1)
		{
			if(1)
			{
				int int_11 = 1;
				int_11 = int_7 + int_9;
				unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
				unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
				int_1 = int_6 * int_9;
			}
			if(1)
			{
				short short_6 = 1;
				short_6 = short_5 + short_5;
				char_2 = char_2 * char_1;
			}
		}
	}
	if(1)
	{
		double_4 = double_1 + double_5;
	}
	float_5 = v_termpty_backlog_length(int_1);

	double_1 = double_7 + double_8;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	float_5 = float_3 + float_1;
	float_7 = float_1 + float_5;
	return char_1;
}
char v__queue_render( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		char_1 = v__deferred_renderer();

		double_1 = double_1;
	}
	return char_1;
}
void v_miniview_redraw( float parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	char_1 = v__queue_render(int_1);

	float_2 = float_1 + float_1;
}
short v__block_obj_del( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	float_1 = v__smart_media_del(double_1,short_1);

	double_2 = double_1 * double_2;
	double_1 = double_1;
	return short_1;
}
double v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "4") < 0)
	{
	}
	if(1)
	{
		if(1)
		{
		}
	}
	return double_1;
}
void v__termpty_is_dblwidth_get( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = v__termpty_is_dblwidth_slow_get(long_1,int_1);

}
void v_term_preedit_str_get( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
}
double v_media_get( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	return double_1;
}
char v__smart_media_clicked(unsigned int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_1;
	int_1 = int_2;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int_5 = int_3 * int_4;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				int int_6 = 1;
				if(1)
				{
					float float_1 = 1;
					float float_2 = 1;
					long long_1 = 1;
					int_2 = int_5;
					float_2 = float_1 + float_1;
					if(1)
					{
						long long_2 = 1;
						long_2 = long_1 * long_1;
					}
					if(1)
					{
						double_2 = v_media_get(int_4);

						float_1 = float_1 * float_2;
						char_1 = v_termio_config_get(int_5);

						int_5 = int_3;
						if(1)
						{
							unsigned int unsigned_int_3 = 1;
							unsigned int unsigned_int_4 = 1;
							long long_3 = 1;
							unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
							unsigned_int_3 = unsigned_int_4;
							long_1 = long_3 * long_3;
						}
					}
				}
				int_1 = int_2 * int_6;
			}
		}
	}
	short_1 = short_1;
	return char_1;
	char_2 = v_media_src_type_get(double_1);

}
unsigned int v_media_control_get()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	return unsigned_int_3;
}
short v__smart_media_stop(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	return short_1;
}
void v__smart_media_pause(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	int_1 = int_1;
}
unsigned int v__smart_media_play(unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	double_1 = double_1;
	return unsigned_int_1;
}
float v__smart_media_del(double parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	return float_1;
}
void v_media_visualize_set( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			double double_2 = 1;
			double_2 = double_2 + double_1;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
}
void v_media_mute_set( float parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		double_1 = double_3;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
}
void v_media_volume_set( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1;
	char_2 = char_1 + char_1;
}
short v__cb_media_vol(int parameter_2,int parameter_3,float parameter_4)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	v_media_volume_set(long_1,double_1);

	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "V") < 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_1;
	return short_1;
}
int v__cb_media_pos(long parameter_2,short parameter_3,long parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	v_media_position_set(short_1,double_1);

	char_1 = char_2;
	char_1 = char_1 * char_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "=`") < 0)
	{
	}
	char_2 = char_4 + char_1;
	int_1 = int_1;
	return int_1;
}
int v__cb_media_pos_drag_stop(int parameter_2,float parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_2;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	long_1 = long_1 * long_1;
	int_1 = int_1;
	double_1 = double_1 + double_1;
	double_1 = double_1 + double_1;
	return int_1;
}
unsigned int v__cb_media_pos_drag_start(int parameter_2,char parameter_3,float parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	v_media_position_set(short_1,double_1);

	unsigned_int_1 = unsigned_int_5;
	double_2 = double_1;
	return unsigned_int_1;
}
void v_media_stop( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_3 = double_1 + double_2;
}
double v__cb_media_stop(char parameter_2,long parameter_3,int parameter_4)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v_media_stop(long_1);

	double_1 = double_2;
	return double_2;
}
double v__cb_media_pause(float parameter_2,unsigned int parameter_3,float parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 * float_2;
	return double_1;
	v_media_play_set(unsigned_int_1,unsigned_int_2);

}
void v_media_play_set( unsigned int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_2 * double_2;
	}
}
int v__cb_media_play(int parameter_2,long parameter_3,float parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_1;
	return int_1;
	v_media_play_set(unsigned_int_1,unsigned_int_2);

}
void v_media_position_set( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	double_1 = double_2;
}
double v__cb_mov_ref(float parameter_2)
{
	double double_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	double_1 = double_1;
	return double_1;
}
void v__cb_mov_progress(double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "ab") > 0)
	{
	}
	long_1 = long_2;
}
double v__cb_mov_restart()
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	int_1 = int_2 + int_3;
	float_1 = float_1 + float_1;
	return double_2;
}
short v__cb_mov_decode_stop(char parameter_2)
{
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "+l") < 0)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	double_3 = v__cb_mov_restart();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_1;
	return short_1;
}
long v__cb_mov_len_change(double parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	return long_1;
}
short v__cb_mov_frame_resize(float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	int_1 = int_1 * int_2;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	float_1 = v__type_mov_calc(short_2,double_1,double_1,unsigned_int_1,short_1);

	int_1 = int_2 * int_1;
	float_4 = float_2 * float_3;
	return short_3;
}
float v__cb_mov_frame_decode(float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_2 = double_3 + double_3;
	char_1 = char_1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	int_2 = int_2 + int_3;
	char_2 = char_3;
	float_1 = float_1 * float_1;
	double_2 = double_2 + double_3;
	return float_2;
	float_3 = v__type_mov_calc(short_1,double_1,double_4,unsigned_int_1,short_2);

}
char v__type_mov_init( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_7 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	float float_4 = 1;
	long long_5 = 1;
	float float_5 = 1;
	int int_8 = 1;
	int_3 = int_1 * int_2;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_media_position_set(short_1,double_1);

	double_3 = double_1 + double_2;
	double_2 = v__cb_media_stop(char_1,long_1,int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	char_1 = char_1;
	short_1 = v__cb_mov_frame_resize(float_1);

	short_2 = short_1;
	v_media_mute_set(float_1,unsigned_int_2);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		int_3 = v__cb_media_pos_drag_stop(int_4,float_2,int_1);

		double_4 = double_3 * double_1;
	}
	if(1)
	{
		double double_5 = 1;
		int_3 = int_4 * int_4;
		short_2 = v__cb_media_vol(int_5,int_6,float_1);

		double_1 = double_4 * double_5;
		double_4 = v__cb_mov_ref(float_2);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
	}
	int_4 = int_2 + int_5;
	short_4 = short_3 + short_2;
	double_4 = double_3 * double_6;
	char_2 = char_3;
	short_1 = v__cb_mov_decode_stop(char_2);

	float_2 = float_3 * float_2;
	int_3 = int_5;
	v_media_play_set(unsigned_int_6,unsigned_int_7);

	int_5 = int_6;
	if(1)
	{
		double_6 = v__cb_media_pause(float_3,unsigned_int_3,float_3);

		long_3 = long_2 + long_2;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "D") > 0)
	{
		long_4 = v__cb_mov_len_change(double_4);

		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_9 = unsigned_int_3 + unsigned_int_8;
	double_1 = double_7 * double_4;
	int_5 = int_7 + int_6;
	int_1 = int_1;
	int_4 = int_6 + int_7;
	unsigned_int_8 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_7 = unsigned_int_1 * unsigned_int_8;
	int_6 = int_3 + int_4;
	int_1 = v__cb_media_pos(long_4,short_2,long_3);

	int_5 = int_3 * int_4;
	unsigned_int_10 = v__cb_media_pos_drag_start(int_5,char_1,float_1);

	unsigned_int_11 = unsigned_int_10 + unsigned_int_7;
	v__cb_mov_progress(double_4);

	short_1 = short_1 * short_1;
	int_6 = v__cb_media_play(int_5,long_2,float_4);

	long_1 = long_5 + long_4;
	float_1 = float_5 + float_3;
	unsigned_int_11 = v_theme_apply(float_2,int_4,double_4);

	unsigned_int_3 = unsigned_int_9;
	long_3 = long_2;
	unsigned_int_3 = unsigned_int_2;
	float_1 = v__cb_mov_frame_decode(float_3);

	int_7 = int_7 * int_8;
	if(1)
	{
		short short_5 = 1;
		short_5 = short_4 * short_1;
	}
	if(1)
	{
		double_6 = double_2 + double_4;
	}
	return char_3;
	v_media_visualize_set(int_3,char_3);

}
unsigned int v__cb_edje_preloaded(float parameter_2,char parameter_3,double parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short_1 = short_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 + float_1;
	return unsigned_int_2;
}
char v__type_edje_init( int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_1;
	float_2 = float_1 * float_1;
	v_theme_auto_reload_enable(char_1);

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = v__cb_edje_preloaded(float_1,char_2,double_1);

	double_2 = double_2;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	char_1 = char_2 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "q") < 0)
		{
			int int_3 = 1;
			int_3 = int_1 * int_3;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			double_2 = double_1;
		}
	}
	return char_1;
}
short v__type_scale_init( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short_2 = short_1 * short_1;
	double_3 = double_1 + double_2;
	double_3 = v__cb_scale_preloaded(double_3,short_2);

	short_1 = short_2;
	float_2 = float_1 * float_1;
	long_1 = long_2;
	double_4 = double_4 + double_2;
	double_4 = double_4;
	long_1 = long_1 + long_2;
	short_1 = short_2 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_2;
	return short_3;
}
int v__cb_img_frame(int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char * vul_var;
	long_1 = long_1;
	int_1 = int_1;
	float_1 = float_2;
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	double_3 = double_1 + double_2;
	char controller4vul_2202[2];
	fgets(controller4vul_2202 ,2 ,stdin);
	if( strcmp( controller4vul_2202, "+") < 0)
	{
		long long_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		long_2 = long_1;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_4 + double_4;
		}
		char_2 = char_2 * char_4;
		char_2 = char_1 * char_5;
		char controller4vul_2203[3];
		fgets(controller4vul_2203 ,3 ,stdin);
		if( strcmp( controller4vul_2203, "/|") < 0)
		{
			char controller4vul_2204[2];
			fgets(controller4vul_2204 ,2 ,stdin);
			if( strcmp( controller4vul_2204, "d") > 0)
			{
				if(uni_para == 985)
				{
					vul_var = vul_var + 1;
				}
				free(vul_var);
				char_2 = char_1;
			}
		}
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_2 * double_2;
	double_3 = double_1 * double_3;
}
int v__type_img_anim_handle( float parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	long_2 = long_1 * long_2;
	double_2 = double_1 * double_2;
	double_2 = double_2 * double_2;
	char controller4vul_2201[3];
	fgets(controller4vul_2201 ,3 ,stdin);
	if( strcmp( controller4vul_2201, "hh") > 0)
	{
		int_1 = v__cb_img_frame(uni_para);

	}
	long_4 = long_3 + long_3;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	double_2 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return int_2;
}
long v__cb_img_preloaded(int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	long_4 = long_2 * long_3;
	return long_5;
}
char v__type_img_init(int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int_1 = v__type_img_anim_handle(float_1,uni_para);

	float_1 = float_2 + float_1;
	char_1 = char_1 * char_1;
	double_2 = double_1 + double_1;
	int_1 = int_1 + int_1;
	int_1 = int_2 + int_3;
	float_1 = float_1 * float_1;
	int_3 = int_1 * int_1;
	double_4 = double_2 + double_3;
	short_3 = short_1 * short_2;
	double_1 = double_4 * double_4;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_2;
	return char_2;
}
int v__url_compl_cb(int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	char controller4vul_2200[2];
	fgets(controller4vul_2200 ,2 ,stdin);
	if( strcmp( controller4vul_2200, "$") < 0)
	{
		char_1 = v__type_img_init(uni_para);

	}
	if(1)
	{
	}
	short_3 = short_1 + short_2;
	float_2 = float_2 + float_2;
	short_2 = short_2 * short_3;
	double_1 = double_2 * double_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	int_3 = int_1 * int_2;
	char_2 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	int_4 = int_4 * int_3;
	short_1 = short_2 + short_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	double_5 = double_1 * double_4;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_2 * short_3;
	float_1 = float_1 * float_1;
	char_2 = char_3 + char_2;
	float_5 = float_3 + float_4;
	return int_3;
}
char v__url_prog_cb(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float_1 = float_1;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_3 + double_4;
		}
		int_1 = int_1 + int_2;
		short_3 = short_1 + short_2;
		if(1)
		{
			char char_4 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_5 = 1;
			char_4 = char_3 * char_2;
			float_1 = float_2 + float_1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
			char_5 = char_4 * char_2;
		}
	}
	return char_1;
}
unsigned int v__type_thumb_calc( float parameter_1,short parameter_2,float parameter_3,long parameter_4,long parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char_1 = char_1;
		int_2 = int_1 + int_2;
		short_2 = short_1 * short_1;
		if(1)
		{
			double_2 = double_2 * double_2;
			int_2 = int_3 * int_2;
			if(1)
			{
				int_5 = int_4 * int_1;
			}
		}
		if(1)
		{
			int int_6 = 1;
			float_1 = float_2 * float_2;
			int_4 = int_1 * int_6;
		}
		int_4 = int_1 * int_3;
		double_1 = double_3 + double_1;
		float_2 = float_1;
		int_2 = int_4 + int_5;
	}
	double_4 = double_4 + double_3;
	long_1 = long_2;
	return unsigned_int_3;
}
float v__type_mov_calc( short parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4,short parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	float float_7 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float_2 = float_1 + float_1;
		int_1 = int_1 * int_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "[d") < 0)
	{
		int int_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int_1 = int_1;
		int_1 = int_2;
		float_3 = float_1 + float_1;
		if(1)
		{
			float float_4 = 1;
			float_4 = float_1 * float_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
			if(1)
			{
				float float_6 = 1;
				float_5 = float_5 + float_6;
				int_1 = int_3 + int_1;
				if(1)
				{
					long_3 = long_2 * long_1;
				}
			}
		}
		if(1)
		{
			int_4 = int_4 + int_5;
			float_3 = float_3;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_1 = short_2;
				double_1 = double_1 + double_1;
				if(1)
				{
					unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
				}
			}
		}
		if(1)
		{
			char char_3 = 1;
			char_2 = char_3;
			float_7 = float_5;
		}
		double_2 = double_2;
		int_3 = int_5 + int_4;
		int_5 = int_5 + int_5;
		int_6 = int_2 + int_1;
	}
	long_2 = long_1 * long_3;
	char_2 = char_2;
	return float_7;
}
short v__type_edje_calc( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	double_2 = double_1;
	return short_3;
}
short v__type_img_calc( float parameter_1,int parameter_2,float parameter_3,long parameter_4,short parameter_5)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_7 = 1;
	short short_4 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 + long_2;
		short_1 = short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		long long_4 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		char char_3 = 1;
		double_2 = double_1 + double_2;
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 + short_1;
			char_1 = char_1;
			if(1)
			{
				long_4 = long_1 + long_2;
				short_1 = short_3 + short_1;
				if(1)
				{
					double_2 = double_2 + double_3;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			float_3 = float_1 + float_2;
			if(1)
			{
				long_1 = long_1 * long_4;
				double_1 = double_1 * double_3;
				if(1)
				{
					double double_4 = 1;
					double_4 = double_1 * double_2;
				}
			}
			if(1)
			{
				char char_2 = 1;
				char_2 = char_1 + char_1;
				double_5 = double_1 * double_5;
			}
		}
		if(1)
		{
			int_1 = int_2 + int_3;
			float_3 = float_1 + float_2;
		}
		double_7 = double_3 + double_6;
		int_1 = int_3 + int_2;
		int_6 = int_4 + int_5;
		char_1 = char_1 * char_3;
	}
	short_1 = short_4;
	double_5 = double_7 + double_5;
	return short_3;
}
double v__cb_scale_preloaded(double parameter_2,short parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	if(1)
	{
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = int_1 * int_1;
		long_1 = long_1 + long_1;
		double_2 = double_1 * double_1;
		double_3 = double_3 + double_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	return double_1;
}
char v__type_scale_calc( short parameter_1,short parameter_2,unsigned int parameter_3,float parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_4 = 1;
	char char_4 = 1;
	float float_5 = 1;
	double_3 = double_1 + double_2;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "V") < 0)
	{
		short short_1 = 1;
		long long_2 = 1;
		short_2 = short_1 + short_1;
		long_2 = long_2 * long_3;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int_1 = int_1;
		if(1)
		{
			int_1 = int_1 + int_1;
			float_1 = float_1 + float_1;
			if(1)
			{
				double double_4 = 1;
				double_3 = double_4 + double_4;
				int_3 = int_1 * int_2;
				if(1)
				{
					unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				}
			}
		}
		if(1)
		{
			double_1 = double_1 + double_3;
			float_1 = float_2 + float_1;
			if(1)
			{
				short short_3 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				short_2 = short_3 * short_2;
				if(1)
				{
					unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
				}
			}
		}
		if(1)
		{
			float_2 = float_2 + float_1;
			int_4 = int_3 + int_2;
		}
		unsigned_int_5 = unsigned_int_6;
		float_3 = float_2 * float_2;
		long_1 = long_3 * long_3;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_6;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_7;
		if(1)
		{
			char_1 = char_1 * char_2;
		}
		if(1)
		{
			double_5 = v__cb_scale_preloaded(double_6,short_2);

			double_2 = double_2 + double_2;
		}
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_8 = 1;
			char char_3 = 1;
			long_5 = long_3 * long_4;
			float_4 = float_4 * float_1;
			double_3 = double_1;
			unsigned_int_8 = unsigned_int_2 * unsigned_int_4;
			int_1 = int_4 + int_1;
			long_3 = long_4;
			int_4 = int_4 + int_1;
			char_3 = char_2 + char_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		char_4 = char_2 * char_2;
		float_3 = float_2 * float_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4;
		int_4 = int_4;
	}
	float_2 = float_3 + float_2;
	float_4 = float_5 * float_4;
	return char_4;
}
double v__unsmooth_timeout()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double_1 = double_2;
	char_1 = v__type_scale_calc(short_1,short_2,unsigned_int_1,float_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	char_3 = char_2 + char_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 + double_4;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			double double_5 = 1;
			double_2 = double_2 + double_5;
		}
	}
	if(1)
	{
		double_4 = double_2 + double_4;
	}
	return double_1;
}
short v__smooth_handler( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_1 = v__unsmooth_timeout();

	float_2 = float_1 * float_1;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			long_3 = long_1 + long_2;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 * char_2;
				if(1)
				{
					int_1 = int_1;
				}
			}
			if(1)
			{
				float_2 = float_1;
			}
			if(1)
			{
				float_1 = float_1 * float_1;
			}
			double_1 = double_2 + double_3;
		}
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		float_2 = float_2 + float_2;
	}
	return short_3;
}
void v__smart_calculate()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	long long_5 = 1;
	long_3 = long_1 + long_2;
	double_1 = double_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		int_1 = int_2 + int_3;
	}
	long_3 = long_4 + long_2;
	long_3 = long_4 * long_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_4 = double_2 + double_3;
	double_2 = double_3 * double_4;
	double_5 = double_4 * double_3;
	short_1 = v__type_edje_calc(short_1,unsigned_int_2,unsigned_int_3,int_3,unsigned_int_1);

	int_2 = int_1 * int_4;
	float_1 = float_2 * float_1;
	float_1 = float_2 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	short_1 = v__smooth_handler(short_1);

	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	short_1 = v__type_img_calc(float_2,int_5,float_1,long_4,short_2);

	char_1 = v__type_scale_calc(short_3,short_3,unsigned_int_5,float_2,unsigned_int_5);

	unsigned_int_6 = unsigned_int_2 * unsigned_int_6;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_6;
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		short_5 = short_4 * short_3;
		float_1 = v__type_mov_calc(short_3,double_4,double_1,unsigned_int_4,short_2);

		short_2 = short_6 + short_4;
	}
	if(1)
	{
		double double_6 = 1;
		float_1 = float_1 + float_3;
		double_6 = double_3 * double_1;
	}
	unsigned_int_1 = v__type_thumb_calc(float_3,short_3,float_3,long_1,long_5);

}
char v__smart_move( short parameter_1,long parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	int_3 = int_1 + int_3;
	return char_1;
}
char v__smart_resize( int parameter_1,int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	float_3 = float_1 + float_2;
	return char_1;
}
char v__smart_del( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		short_2 = short_1 + short_1;
		int_1 = int_2;
	}
	int_2 = int_1 * int_1;
	double_3 = double_2 + double_3;
	float_1 = float_1 * float_2;
	if(1)
	{
		short short_3 = 1;
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 + char_2;
		}
		short_1 = short_2 * short_3;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		double_1 = double_4;
	}
	if(1)
	{
		double_1 = double_4 * double_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		double_2 = double_3 * double_2;
	}
	if(1)
	{
		double_6 = double_5 + double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		double_6 = double_1 * double_6;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		double_2 = double_5 + double_4;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	long_4 = long_1 * long_3;
	return char_3;
}
int v__smart_add( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int_1 = int_1 * int_2;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2 * int_3;
	int_1 = int_2 * int_2;
	int_1 = int_1 * int_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1;
	short_1 = short_1;
	int_2 = int_4 * int_1;
	return int_3;
}
double v__smart_init()
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	char_1 = v__smart_resize(int_1,int_2,long_1);

	long_2 = long_2 * long_2;
	int_1 = v__smart_add(char_2);

	char_3 = v__smart_move(short_1,long_2,short_1);

	float_1 = float_1 + float_1;
	double_1 = double_2;
	long_2 = long_1;
	char_4 = v__smart_del(unsigned_int_1);

	v__smart_calculate();

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_3;
	char_4 = char_4 * char_1;
	double_2 = double_3;
	int_2 = int_2 + int_1;
	double_4 = double_5;
	float_2 = float_2;
	return double_3;
}
void v_media_add( float parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,double parameter_5,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_5 = 1;
	long long_4 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_8 = 1;
	float float_4 = 1;
	long long_7 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_12 = 1;
	double_1 = double_2;
	double_2 = double_2;
	float_2 = float_1 + float_1;
	double_3 = double_2 + double_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		double_3 = double_2 + double_4;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_3 = int_1 * int_3;
	int_1 = int_4;
	int_5 = int_5;
	int_2 = int_1 * int_3;
	float_2 = float_2 + float_2;
	char controller4vul_2194[3];
	fgets(controller4vul_2194 ,3 ,stdin);
	if( strcmp( controller4vul_2194, "Kh") < 0)
	{
		unsigned int unsigned_int_4 = 1;
		char controller4vul_2195[3];
		fgets(controller4vul_2195 ,3 ,stdin);
		if( strcmp( controller4vul_2195, "ma") < 0)
		{
			double double_6 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_6 = 1;
			long long_5 = 1;
			double double_7 = 1;
			int_4 = int_1 * int_3;
			int_4 = int_5 + int_1;
			if(1)
			{
				short_1 = short_1 * short_1;
				int_1 = int_4 * int_3;
				double_1 = double_1;
			}
			if(1)
			{
				long_1 = long_1;
				double_4 = double_5 + double_6;
				int_1 = int_1 + int_2;
			}
			if(1)
			{
				long_2 = long_2 * long_3;
			}
			if(1)
			{
				double_6 = double_6 + double_5;
			}
			if(1)
			{
				double_3 = double_3 * double_5;
			}
			if(1)
			{
				char char_2 = 1;
				char_2 = char_1 + char_1;
			}
			if(1)
			{
				int_6 = int_1 + int_5;
			}
			if(1)
			{
				long_4 = long_2 + long_4;
				long_4 = long_3 * long_2;
				long_3 = long_4 + long_5;
				float_3 = float_2 * float_1;
				short_1 = short_1 + short_2;
				double_8 = double_5 * double_7;
				float_3 = float_4;
			}
			char controller4vul_2196[3];
			fgets(controller4vul_2196 ,3 ,stdin);
			if( strcmp( controller4vul_2196, "xw") > 0)
			{
				long long_6 = 1;
				double double_9 = 1;
				double double_10 = 1;
				long_7 = long_6 + long_4;
				double_10 = double_9 + double_1;
				double_11 = double_7 * double_3;
				char controller4vul_2197[3];
				fgets(controller4vul_2197 ,3 ,stdin);
				if( strcmp( controller4vul_2197, ".S") < 0)
				{
					int_2 = int_6 + int_1;
					if(1)
					{
						unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
						float_3 = float_2 + float_4;
					}
					char controller4vul_2198[2];
					fgets(controller4vul_2198 ,2 ,stdin);
					if( strcmp( controller4vul_2198, "<") > 0)
					{
						double_9 = double_6 * double_2;
						char controller4vul_2199[3];
						fgets(controller4vul_2199 ,3 ,stdin);
						if( strcmp( controller4vul_2199, "+4") < 0)
						{
							int_7 = v__url_compl_cb(int_1,uni_para);

							unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
							double_7 = double_9 * double_8;
							long_2 = long_1 + long_5;
						}
						if(1)
						{
							unsigned int unsigned_int_6 = 1;
							unsigned int unsigned_int_7 = 1;
							short_2 = short_3 + short_3;
							unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
							unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
							unsigned_int_1 = unsigned_int_4 * unsigned_int_7;
							int_8 = int_8 + int_7;
							long_3 = long_4 + long_7;
							int_2 = int_2 * int_5;
							int_3 = int_2 + int_6;
							unsigned_int_5 = unsigned_int_8 + unsigned_int_7;
						}
					}
				}
				if(1)
				{
					long_6 = long_3 + long_7;
				}
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 * unsigned_int_8;
			int_3 = int_8 + int_7;
		}
	}
	if(1)
	{
		short short_4 = 1;
		int int_9 = 1;
		if(1)
		{
			int_3 = int_2 + int_3;
			float_1 = float_1;
		}
		short_1 = short_2 + short_4;
		if(1)
		{
			long_4 = long_1 + long_4;
			int_7 = int_5 * int_9;
		}
		double_4 = double_11 + double_11;
		if(1)
		{
			char_1 = char_1 + char_3;
			int_4 = int_9 + int_8;
		}
		float_4 = float_1 + float_3;
		if(1)
		{
			char_1 = char_3 * char_4;
			unsigned_int_8 = unsigned_int_5 + unsigned_int_2;
		}
		short_4 = short_4 * short_3;
		int_4 = int_5 + int_7;
	}
	char_4 = char_5 * char_3;
	short_2 = short_5;
	long_4 = long_7 * long_4;
	short_5 = short_3 * short_1;
	char_4 = char_4 * char_6;
	unsigned_int_9 = unsigned_int_3 * unsigned_int_1;
	float_4 = float_3 * float_2;
	double_12 = double_5 + double_8;
	if(1)
	{
		int_8 = int_3 + int_2;
	}
}
char v__block_media_activate( short parameter_1,double parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_4 = 1;
	double double_6 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	char controller4vul_2193[2];
	fgets(controller4vul_2193 ,2 ,stdin);
	if( strcmp( controller4vul_2193, ",") > 0)
	{
		short short_2 = 1;
		v_media_add(float_1,int_2,unsigned_int_3,int_2,double_1,uni_para);

		short_3 = short_1 * short_2;
	}
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		double_1 = double_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	}
	if(1)
	{
		double_2 = double_4 + double_3;
	}
	if(1)
	{
		double_3 = double_1 + double_5;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
	long_3 = long_2 + long_3;
	if(1)
	{
		short_1 = short_4 * short_3;
	}
	unsigned_int_4 = unsigned_int_6;
	long_3 = long_2 * long_1;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_7;
	double_4 = double_4 * double_3;
	short_5 = short_3 + short_4;
	unsigned_int_8 = unsigned_int_6 * unsigned_int_1;
	long_4 = long_3 * long_3;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		double_4 = double_6;
		float_2 = float_2 + float_3;
	}
	int_2 = int_1 + int_1;
	long_1 = long_4 * long_4;
	double_2 = double_2 * double_6;
	if(1)
	{
		double_6 = double_5 + double_5;
	}
	return char_1;
}
int v__block_edje_message_cb(int parameter_2,float parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	float float_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_5 = 1;
	int int_5 = 1;
	float float_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_8 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_7 = 1;
	char_2 = char_1 * char_1;
	long_2 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	short_1 = short_2;
	float_1 = float_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
	}
	short_1 = short_2;
	if(1)
	{
	}
	char_2 = char_3 + char_3;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_6;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	double_1 = double_1;
	int_2 = int_1 + int_1;
	float_3 = float_2 + float_3;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_4;
	double_4 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	long_3 = long_2 + long_2;
	double_5 = double_2 * double_4;
	char_3 = char_1;
	char_1 = char_2;
	float_2 = float_3 * float_4;
	long_3 = long_2 + long_1;
	unsigned_int_1 = unsigned_int_7;
	unsigned_int_6 = unsigned_int_7;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_2 + double_6;
		unsigned_int_7 = unsigned_int_3 * unsigned_int_6;
	}
	short_1 = short_2 * short_2;
	double_2 = double_5 * double_7;
	short_2 = short_3 + short_2;
	int_2 = int_1 + int_3;
	double_7 = double_4;
	unsigned_int_4 = unsigned_int_8;
	double_5 = double_2 + double_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_2 = int_3 + int_4;
		unsigned_int_4 = unsigned_int_5;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_9;
	}
	float_2 = float_2 * float_4;
	short_3 = short_3 * short_3;
	unsigned_int_10 = unsigned_int_7;
	double_2 = double_5 + double_7;
	unsigned_int_7 = unsigned_int_1 + unsigned_int_9;
	v_termpty_write(double_1,float_5,int_4);

	int_5 = int_3 + int_4;
	float_6 = float_3 + float_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int_1 = int_1 + int_4;
		int_4 = int_3 + int_4;
		int_1 = int_4 * int_1;
	}
	long_4 = long_1 + long_2;
	double_7 = double_5 + double_5;
	long_3 = long_5 * long_4;
	unsigned_int_6 = unsigned_int_3;
	double_6 = double_2 * double_8;
	unsigned_int_1 = unsigned_int_6;
	double_4 = double_3 * double_1;
	long_2 = long_3 * long_3;
	double_3 = double_8 + double_6;
	unsigned_int_8 = unsigned_int_1 + unsigned_int_7;
	char_1 = char_1 + char_1;
	float_6 = float_6;
	double_5 = double_8 + double_1;
	long_2 = long_1;
	char_2 = char_1;
	long_2 = long_1 + long_5;
	unsigned_int_6 = unsigned_int_1;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned_int_9 = unsigned_int_9 * unsigned_int_9;
		unsigned_int_8 = unsigned_int_2 * unsigned_int_1;
		double_3 = double_4 + double_2;
	}
	char_3 = char_4 * char_5;
	short_2 = short_3 + short_2;
	int_2 = int_4;
	short_4 = short_4 * short_1;
	short_4 = short_5 * short_4;
	double_2 = double_2 + double_5;
	short_2 = short_6;
	int_3 = int_2;
	int_4 = int_2 * int_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int int_6 = 1;
		int_6 = int_2 + int_1;
		long_5 = long_6 * long_3;
		double_4 = double_3;
	}
	long_6 = long_5 * long_5;
	unsigned_int_11 = unsigned_int_4 + unsigned_int_2;
	double_10 = double_3 * double_9;
	return int_7;
}
void v_termpty_write( double parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = double_1 + double_1;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3;
	}
}
void v__block_edje_signal_cb(float parameter_2,short parameter_3,int parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	v_termpty_write(double_1,float_1,int_1);

	double_2 = double_1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2 + float_2;
	short_1 = short_2 * short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double double_6 = 1;
		double_4 = double_3 + double_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_1 = double_5;
		short_2 = short_3 + short_3;
		char_1 = char_1 * char_2;
		short_4 = short_5;
		double_6 = double_2 * double_2;
		double_1 = double_2 * double_2;
	}
	if(1)
	{
		char char_3 = 1;
		unsigned_int_3 = unsigned_int_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		char_3 = char_2 + char_1;
	}
}
void v_termpty_block_chid_update( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
	}
	int_2 = int_1 * int_2;
}
float v__block_edje_cmds( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,float parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	v_termpty_block_chid_update(char_1,unsigned_int_1);

	int_1 = v__block_edje_message_cb(int_2,float_1,int_2);

	int_3 = int_1 * int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_2;
	v__block_edje_signal_cb(float_1,short_1,int_1);

}
unsigned int v_homedir_get( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double_3 = double_1 * double_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	return unsigned_int_2;
}
short v__block_edje_activate( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 + int_3;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			float_1 = v__block_edje_cmds(char_1,unsigned_int_3,unsigned_int_2,float_2);

			unsigned_int_2 = unsigned_int_4;
			unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			float float_3 = 1;
			unsigned_int_1 = v_homedir_get(char_2,int_2);

			short_1 = short_1 * short_1;
			float_2 = float_3 + float_2;
		}
	}
	double_1 = v_config_theme_path_default_get(double_1);

	short_1 = short_1 * short_2;
	int_1 = int_3 + int_1;
	char_2 = char_1 * char_3;
	float_1 = float_2;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4;
	}
	return short_3;
}
long v__block_activate( double parameter_1,float parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_1;
	char controller4vul_2192[3];
	fgets(controller4vul_2192 ,3 ,stdin);
	if( strcmp( controller4vul_2192, "fS") < 0)
	{
		char_2 = v__block_media_activate(short_1,double_1,uni_para);

	}
	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "_&") > 0)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	short_2 = short_2 * short_2;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 + double_1;
	}
	return long_1;
}
short v_termpty_block_get( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
int v_termpty_block_id_get( char parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 * char_2;
	int_1 = int_2;
	return int_1;
}
void v_termpty_backscroll_adjust( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	double_1 = v_verify_beacon(unsigned_int_1,int_1);

	int_2 = int_1 * int_2;
}
short v__smart_apply( char parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_5 = 1;
	int int_2 = 1;
	long long_6 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_7 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	double double_12 = 1;
	double double_13 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_4 = 1;
	char char_7 = 1;
	short short_5 = 1;
	char char_8 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_14 = 1;
	double double_15 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_8 = 1;
	short short_6 = 1;
	float float_5 = 1;
	int int_10 = 1;
	double double_16 = 1;
	short short_8 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	long_1 = long_1 * long_2;
	long_1 = long_1 * long_1;
	long_1 = long_2 * long_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	float_2 = float_1 * float_1;
	double_2 = double_1 + double_1;
	long_5 = long_2 + long_4;
	double_1 = double_2 + double_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
	float_4 = float_1 + float_3;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_3 = char_1 + char_2;
		int_1 = int_1 + int_1;
		char_2 = char_3 * char_2;
		double_3 = double_1 + double_4;
		if(1)
		{
			char_6 = char_4 + char_5;
		}
		double_4 = double_4 + double_5;
		if(1)
		{
			int_1 = int_2 + int_2;
		}
		long_2 = long_6 + long_6;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						unsigned_int_4 = unsigned_int_6 + unsigned_int_6;
					}
					unsigned_int_6 = unsigned_int_2;
				}
				short_1 = short_1 * short_1;
				if(1)
				{
					char_5 = char_4 + char_6;
				}
				if(1)
				{
					int_3 = int_2 * int_1;
				}
				int_2 = int_2 + int_1;
				unsigned_int_7 = unsigned_int_5 + unsigned_int_7;
				double_5 = double_4 + double_5;
				int_4 = int_1 * int_2;
				int_3 = int_1 + int_4;
				double_5 = double_3 + double_1;
			}
			char controller4vul_2188[3];
			fgets(controller4vul_2188 ,3 ,stdin);
			if( strcmp( controller4vul_2188, ":-") < 0)
			{
				int_3 = int_4 * int_4;
				unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
				if(1)
				{
					if(1)
					{
						int_5 = int_2 * int_1;
					}
					float_2 = float_3;
					long_6 = long_1 + long_3;
					double_6 = double_5;
					short_3 = short_2 + short_2;
					short_2 = short_2;
					double_2 = double_7 + double_8;
					unsigned_int_2 = unsigned_int_6 * unsigned_int_7;
					char_6 = char_2 + char_6;
					float_2 = float_4 * float_2;
					double_2 = double_6 * double_8;
					long_1 = long_6;
					long_7 = long_7 * long_4;
					if(1)
					{
						int_4 = int_3;
						unsigned_int_6 = unsigned_int_7;
						double_6 = double_2 + double_2;
						short_3 = short_1 * short_3;
						int_2 = int_2 + int_3;
					}
				}
				char controller4vul_2189[2];
				fgets(controller4vul_2189 ,2 ,stdin);
				if( strcmp( controller4vul_2189, "w") > 0)
				{
					char controller4vul_2190[2];
					fgets(controller4vul_2190 ,2 ,stdin);
					if( strcmp( controller4vul_2190, "^") < 0)
					{
						char controller4vul_2191[3];
						fgets(controller4vul_2191 ,3 ,stdin);
						if( strcmp( controller4vul_2191, "0m") < 0)
						{
							long_6 = v__block_activate(double_7,float_1,uni_para);

							int_2 = int_5;
						}
						long_7 = long_3 * long_3;
					}
					int_3 = int_1 * int_5;
					if(1)
					{
						long_3 = long_7 + long_3;
					}
					if(1)
					{
						unsigned_int_7 = unsigned_int_2 + unsigned_int_2;
					}
					short_3 = short_1 + short_2;
					double_6 = double_4 * double_4;
					float_1 = float_4 * float_3;
					float_2 = float_3 + float_1;
					unsigned_int_7 = unsigned_int_5 * unsigned_int_1;
					double_9 = double_9 * double_6;
					if(1)
					{
						double_6 = double_7 * double_6;
					}
				}
				if(1)
				{
					double_10 = double_5;
					unsigned_int_2 = unsigned_int_5 * unsigned_int_3;
					long_1 = long_2;
					float_3 = float_3 + float_4;
					unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
					unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
					if(1)
					{
						char_4 = char_3 + char_5;
						double_12 = double_11 * double_7;
					}
					if(1)
					{
						double_8 = double_8 + double_6;
						double_13 = double_11 + double_10;
					}
					if(1)
					{
						unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
					}
					if(1)
					{
						if(1)
						{
							float_1 = float_3 + float_3;
						}
						if(1)
						{
							double_9 = double_4 * double_8;
						}
					}
					if(1)
					{
						unsigned_int_3 = unsigned_int_6 + unsigned_int_6;
					}
					if(1)
					{
						float_3 = float_4 * float_3;
					}
					if(1)
					{
						unsigned int unsigned_int_8 = 1;
						double_1 = double_10;
						unsigned_int_4 = unsigned_int_3 + unsigned_int_7;
						double_8 = double_11 * double_9;
						int_2 = int_5 * int_2;
						int_4 = int_6 + int_6;
						unsigned_int_9 = unsigned_int_8 + unsigned_int_5;
						short_3 = short_4 * short_1;
					}
					if(1)
					{
						unsigned_int_9 = unsigned_int_7 * unsigned_int_3;
					}
					if(1)
					{
						short_4 = short_1 + short_3;
					}
					if(1)
					{
						if(1)
						{
							char_2 = char_6 * char_1;
						}
						char_4 = char_7;
					}
					short_4 = short_5 + short_3;
					double_6 = double_7 * double_3;
					char_8 = char_1;
					double_4 = double_2 * double_11;
					if(1)
					{
						int_6 = int_2 + int_3;
						int_1 = int_5;
					}
					if(1)
					{
						int_4 = int_7 * int_2;
						int_4 = int_2;
					}
					unsigned_int_1 = unsigned_int_5 + unsigned_int_10;
					double_6 = double_14;
					int_3 = int_2;
					int_1 = int_3 * int_4;
					if(1)
					{
						double_15 = double_13 + double_7;
					}
				}
			}
		}
		char_3 = char_1 + char_4;
		if(1)
		{
			unsigned_int_6 = unsigned_int_11 * unsigned_int_11;
		}
	}
	double_4 = double_15 * double_12;
	if(1)
	{
		int_7 = int_5 * int_6;
		unsigned_int_1 = unsigned_int_9;
		long_5 = long_2 + long_4;
		float_2 = float_4;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		float_2 = float_1 * float_3;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				char char_9 = 1;
				unsigned int unsigned_int_12 = 1;
				unsigned_int_5 = unsigned_int_7 + unsigned_int_10;
				short_4 = short_5 * short_3;
				short_4 = short_2 + short_4;
				if(1)
				{
					long_5 = long_5 + long_6;
				}
				double_13 = double_9 * double_13;
				if(1)
				{
					if(1)
					{
						char_4 = char_8 * char_1;
						int_4 = int_5 + int_2;
						double_2 = double_2 + double_6;
					}
				}
				if(1)
				{
					char_9 = char_3;
					int_6 = int_8 + int_7;
				}
				char_7 = char_8 * char_6;
				int_3 = int_7;
				int_8 = int_5 + int_2;
				long_6 = long_7 * long_2;
				double_3 = double_6;
				double_7 = double_11;
				char_9 = char_8 * char_7;
				double_8 = double_6 * double_1;
				unsigned_int_2 = unsigned_int_6 + unsigned_int_11;
				short_1 = short_3 + short_2;
				float_4 = float_2 + float_2;
				if(1)
				{
					int int_9 = 1;
					double_8 = double_10 * double_2;
					int_6 = int_9 + int_3;
					int_2 = int_6;
					int_8 = int_3 + int_4;
					long_3 = long_6 + long_3;
					short_1 = short_6;
					unsigned_int_12 = unsigned_int_12 + unsigned_int_9;
					double_10 = double_7;
					unsigned_int_11 = unsigned_int_4 * unsigned_int_2;
					int_5 = int_7 * int_4;
				}
				double_5 = double_1 * double_15;
				if(1)
				{
					if(1)
					{
						double_8 = double_4;
						unsigned_int_3 = unsigned_int_12 + unsigned_int_10;
					}
				}
			}
			float_2 = float_4 * float_3;
		}
		double_10 = double_11 * double_8;
		int_4 = int_5 * int_5;
	}
	float_2 = float_5 + float_1;
	if(1)
	{
		char char_10 = 1;
		int_8 = int_7 * int_1;
		double_10 = double_14;
		char_10 = char_7 * char_3;
	}
	if(1)
	{
		double_14 = double_3 + double_10;
	}
	if(1)
	{
		long_7 = long_6 * long_6;
	}
	int_10 = int_3 + int_6;
	double_6 = double_14 * double_15;
	double_13 = double_15 * double_7;
	if(1)
	{
		long long_8 = 1;
		long long_9 = 1;
		long long_10 = 1;
		float float_6 = 1;
		short short_7 = 1;
		double double_17 = 1;
		short_5 = short_1 + short_5;
		long_8 = long_5;
		long_8 = long_9 + long_10;
		unsigned_int_11 = unsigned_int_1;
		double_1 = double_12 + double_8;
		long_4 = long_8 + long_9;
		if(1)
		{
			float_6 = float_6 * float_4;
			int_2 = int_1;
		}
		short_2 = short_6;
		double_13 = double_1 * double_9;
		short_4 = short_4 + short_7;
		double_2 = double_5 * double_2;
		char_5 = char_2 * char_6;
		long_8 = long_6 * long_8;
		double_2 = double_16 * double_3;
		double_17 = double_14 * double_16;
		if(1)
		{
			unsigned int unsigned_int_13 = 1;
			unsigned_int_13 = unsigned_int_5 + unsigned_int_10;
		}
		if(1)
		{
			if(1)
			{
				float float_7 = 1;
				float_5 = float_7 + float_4;
			}
			if(1)
			{
				int int_11 = 1;
				int_6 = int_10 * int_11;
			}
			if(1)
			{
				int int_12 = 1;
				int int_13 = 1;
				int_13 = int_12 + int_10;
			}
			if(1)
			{
				long_9 = long_1 * long_5;
			}
			if(1)
			{
				double_4 = double_1 + double_13;
			}
		}
		float_4 = float_6 + float_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_7 * unsigned_int_7;
	}
	if(1)
	{
		long long_11 = 1;
		long long_12 = 1;
		long_11 = long_12;
	}
	double_15 = double_16 * double_11;
	return short_8;
}
float v__smart_cb_change(int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short_1 = v__smart_apply(char_1,uni_para);

	int_2 = int_1 + int_2;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_1;
	int_1 = int_1 + int_2;
	float_2 = float_3;
	return float_3;
}
void v__smart_update_queue( float parameter_1,char parameter_2,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	char controller4vul_2187[3];
	fgets(controller4vul_2187 ,3 ,stdin);
	if( strcmp( controller4vul_2187, "?t") > 0)
	{
		float_1 = v__smart_cb_change(uni_para);

	}
	int_1 = int_1 * int_1;
}
void v__lost_selection_reset_job()
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_1;
	char_3 = char_1 * char_2;
	long_1 = long_3 + long_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_1 = v__lost_selection(long_1,-1 );

		double_1 = double_2;
		double_2 = double_3 * double_1;
	}
}
int v__lost_selection(long parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_2;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1;
	}
	char controller4vul_2184[2];
	fgets(controller4vul_2184 ,2 ,stdin);
	if( strcmp( controller4vul_2184, "q") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		char controller4vul_2185[3];
		fgets(controller4vul_2185 ,3 ,stdin);
		if( strcmp( controller4vul_2185, "P+") < 0)
		{
			short_2 = short_1 + short_2;
			char controller4vul_2186[2];
			fgets(controller4vul_2186 ,2 ,stdin);
			if( strcmp( controller4vul_2186, "M") < 0)
			{
				v__smart_update_queue(float_1,char_1,uni_para);

				char_1 = char_1 + char_1;
			}
			long_1 = long_1;
		}
		short_2 = short_2 + short_1;
	}
	if(1)
	{
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_2 = 1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "p") > 0)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_3 * double_3;
			long_2 = long_1 * long_2;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
		long_1 = long_2 * long_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
		char_2 = char_1 * char_1;
	}
	return int_3;
}
unsigned int v__take_selection_text( int parameter_1,float parameter_2,long parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float_2 = float_1 + float_2;
	char_2 = char_1 * char_2;
	float_3 = float_2 * float_1;
	double_3 = double_1 * double_2;
	double_5 = double_1 + double_4;
	double_6 = double_3 * double_3;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char controller4vul_2183[3];
	fgets(controller4vul_2183 ,3 ,stdin);
	if( strcmp( controller4vul_2183, "a+") < 0)
	{
		int_1 = v__lost_selection(long_1,uni_para);

		double_2 = double_4 * double_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_3;
}
void v__cb_ctxp_link_content_copy(float parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = v__take_selection_text(int_1,float_1,long_1,uni_para);

	double_2 = double_1 + double_1;
	char_2 = char_1 + char_1;
	double_1 = double_3 * double_1;
	int_2 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	float_1 = float_1;
	double_1 = double_3 + double_2;
}
void v_ty_sb_free()
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_1;
}
float v_ty_sb_steal_buf( char parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char_1 = char_1;
	double_2 = double_1 + double_1;
	if(1)
	{
		double double_3 = 1;
		double double_5 = 1;
		double_4 = double_3 + double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_1 = char_2 * char_3;
		}
		double_3 = double_5;
	}
	double_1 = double_1 * double_2;
	double_4 = double_2 * double_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_6 * double_1;
	long_1 = long_1 * long_1;
	return float_1;
}
int v_codepoint_to_utf8( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_5 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_2;
		double_1 = double_1 * double_3;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_5 = 1;
		float_1 = float_1 + float_1;
		int_1 = int_1 + int_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_6 + unsigned_int_4;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_7;
		char_2 = char_1 * char_2;
		long_2 = long_1 * long_1;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_1 = double_1 * double_2;
		long_3 = long_1 + long_3;
		double_4 = double_1 * double_4;
		int_3 = int_2 + int_3;
		short_3 = short_1 * short_2;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		int int_4 = 1;
		short short_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_4 = 1;
		int_3 = int_2 + int_2;
		long_3 = long_3;
		int_2 = int_3 + int_4;
		short_4 = short_4 + short_4;
		double_5 = double_2 + double_5;
		double_6 = double_6 + double_1;
		long_4 = long_3 * long_2;
	}
	if(1)
	{
		long_3 = long_3;
	}
	return int_5;
}
void v_ty_sb_spaces_rtrim( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_3 = char_1 * char_2;
	short_1 = short_1 * short_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_3 = int_1 * int_2;
		double_1 = double_1 * double_1;
		double_2 = double_2 + double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
int v_ty_sb_add( unsigned int parameter_1,float parameter_2,long parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_4;
		if(1)
		{
		}
		long_1 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_1;
	}
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_3;
	int_4 = int_3 * int_3;
	return int_1;
}
unsigned int v__termpty_cellrow_from_beacon_get( short parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	double_1 = double_3 * double_1;
	int_1 = int_1 * int_2;
	short_2 = short_1 + short_2;
	float_3 = float_1 + float_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	}
	int_3 = int_3 + int_3;
	if(1)
	{
		int int_4 = 1;
		int_2 = int_4;
		int_4 = int_3;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	long_1 = long_1 * long_1;
	double_5 = double_2 + double_4;
	char_1 = char_1 + char_1;
	if(1)
	{
		int int_5 = 1;
		double double_6 = 1;
		short short_3 = 1;
		long long_2 = 1;
		int_3 = int_5 + int_3;
		double_2 = double_1 * double_6;
		int_2 = int_3 + int_1;
		short_1 = short_1 + short_3;
		float_3 = float_3;
		long_2 = long_2;
		double_7 = v_verify_beacon(unsigned_int_1,int_3);

		unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_5;
	return unsigned_int_6;
}
double v_termpty_cellrow_get( double parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
		}
		unsigned_int_1 = v__termpty_cellrow_from_beacon_get(short_1,int_1,double_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "+!") < 0)
	{
	}
	return double_2;
}
float v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
			int int_2 = 1;
			double_1 = v_termpty_cellrow_get(double_2,int_1,short_1);

			long_2 = long_1 + long_1;
			int_1 = int_2 * int_2;
		}
		if(1)
		{
			long_1 = long_2 * long_1;
		}
		if(1)
		{
			int_3 = int_1 * int_3;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float_1 = v_ty_sb_steal_buf(char_1);

						double_2 = double_1 + double_1;
					}
					if(1)
					{
						double double_3 = 1;
						int_3 = v_ty_sb_add(unsigned_int_1,float_2,long_3);

						v_ty_sb_spaces_rtrim(unsigned_int_3);

						double_1 = double_1 * double_3;
					}
				}
				if(1)
				{
					double_4 = double_4 + double_1;
				}
			}
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_2 * short_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
				}
				if(1)
				{
					long long_4 = 1;
					long_4 = long_3 + long_2;
				}
				if(1)
				{
					float_3 = float_1 * float_1;
				}
				if(1)
				{
					int_1 = int_4 + int_4;
				}
				if(1)
				{
					v_termpty_backlog_lock();

					int_4 = v_codepoint_to_utf8(double_4,char_1);

					unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
				}
			}
			int_3 = int_3 * int_1;
		}
		if(1)
		{
			v_termpty_backlog_unlock();

			v_ty_sb_free();

			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	return float_3;
}
unsigned int v__cb_ctxp_link_open(double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	v__activate_link(short_1,float_1);

	float_2 = float_1;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_1 + float_2;
	short_2 = short_1 + short_2;
	char_2 = char_1 * char_2;
	return unsigned_int_1;
}
float v__should_inline( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_1;
	char_1 = v_termio_config_get(int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	return float_1;
}
unsigned int v_link_is_email( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_2;
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
float v_link_is_url( long parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "N") < 0)
	{
	}
	return float_1;
	v_link_is_protocol(double_1);

}
void v__activate_link( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_4 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_2;
	short_2 = short_1 + short_1;
	double_3 = double_1 + double_2;
	float_1 = v__should_inline(short_2);

	char_1 = char_1 + char_1;
	int_2 = int_1 + int_1;
	double_2 = double_4 * double_4;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
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
			short_1 = short_3 * short_2;
		}
		if(1)
		{
			float_2 = float_2 * float_2;
		}
	}
	if(1)
	{
		int_2 = int_3 + int_1;
	}
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		char_1 = char_1;
		double_4 = double_2 * double_1;
	}
	int_3 = int_3 + int_3;
	if(1)
	{
	}
	if(1)
	{
		float_4 = float_3 * float_2;
		double_3 = double_3 * double_2;
		if(1)
		{
			float_5 = float_2 + float_5;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		float_3 = v_link_is_url(long_1);

		char_2 = v_media_src_type_get(double_2);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			int_6 = int_4 + int_5;
			int_6 = int_5 * int_7;
		}
	}
	if(1)
	{
		double_2 = double_1 + double_3;
		short_4 = short_1 + short_1;
		if(1)
		{
			int_8 = int_4 + int_6;
			if(1)
			{
				if(1)
				{
					long_1 = long_1 * long_1;
					int_1 = int_2 + int_4;
				}
				if(1)
				{
					double_2 = double_2 * double_3;
					double_2 = double_3 * double_4;
				}
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						char char_3 = 1;
						char_3 = char_1 + char_2;
					}
				}
				if(1)
				{
					if(1)
					{
						int int_9 = 1;
						int_5 = int_9 * int_7;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_2;
					}
				}
				double_1 = double_3 * double_2;
				unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
			}
		}
	}
	if(1)
	{
		short_3 = short_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			short short_5 = 1;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
				short_1 = short_5 + short_3;
			}
			if(1)
			{
				float float_6 = 1;
				if(1)
				{
					if(1)
					{
						unsigned_int_2 = v_link_is_email(float_1);

						double_3 = double_2 * double_3;
					}
				}
				if(1)
				{
					if(1)
					{
						double_1 = double_4 + double_4;
					}
				}
				if(1)
				{
					if(1)
					{
						float_4 = float_1;
					}
				}
				float_1 = float_5 * float_6;
				short_5 = short_3;
			}
		}
	}
	if(1)
	{
		int_8 = int_1 * int_8;
	}
	short_1 = short_3 + short_4;
	if(1)
	{
		int_6 = int_1 + int_3;
	}
}
double v__cb_ctxp_link_preview(short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double_2 = double_1 + double_2;
	v__activate_link(short_1,float_1);

	int_3 = int_1 + int_2;
	int_2 = int_2 * int_3;
	long_3 = long_1 * long_2;
	int_2 = int_4 * int_1;
	int_4 = int_2 + int_2;
	return double_3;
}
char v__is_fmt( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	int_3 = int_3 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_2;
		}
		if(1)
		{
		}
	}
	return char_1;
}
char v_media_src_type_get( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char_1 = v__is_fmt(char_2,long_1);

	double_2 = double_1 + double_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_1 * double_3;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_1 * short_3;
	}
	return char_1;
}
void v__mouse_in_selection( char parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	float_3 = float_1 + float_2;
	double_4 = double_2 + double_3;
	int_3 = int_1 + int_2;
	if(1)
	{
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_5 = double_3 + double_2;
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
}
char v__smart_xy_to_cursor( unsigned int parameter_1,long parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	double_2 = double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	float_1 = float_2;
	if(1)
	{
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_2 + short_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	return char_1;
}
unsigned int v__cb_link_down(char parameter_2,float parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		short_2 = short_1 * short_1;
	}
	char controller4vul_2180[2];
	fgets(controller4vul_2180 ,2 ,stdin);
	if( strcmp( controller4vul_2180, "$") < 0)
	{
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		int int_2 = 1;
		char char_3 = 1;
		short short_3 = 1;
		char char_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_5 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_1 = int_1 + int_1;
		double_3 = double_2 + double_2;
		long_1 = long_1;
		char controller4vul_2181[2];
		fgets(controller4vul_2181 ,2 ,stdin);
		if( strcmp( controller4vul_2181, "F") < 0)
		{
			unsigned int unsigned_int_3 = 1;
			int_1 = int_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
			char controller4vul_2182[3];
			fgets(controller4vul_2182 ,3 ,stdin);
			if( strcmp( controller4vul_2182, "k7") < 0)
			{
				v__cb_ctxp_link_content_copy(float_2,uni_para);

			}
		}
		char_2 = char_3;
		short_1 = short_3 + short_1;
		if(1)
		{
			int_1 = int_1 + int_1;
			if(1)
			{
				float_1 = float_2 + float_2;
			}
		}
		short_2 = short_2 + short_2;
		char_4 = char_4 * char_3;
		if(1)
		{
			int_4 = int_1 * int_3;
		}
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			int_2 = int_3 + int_4;
			short_5 = short_4 * short_3;
		}
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "z8") < 0)
		{
			int int_5 = 1;
			int_5 = int_2 * int_2;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		int_4 = int_2 + int_3;
		char_3 = char_5;
		long_1 = long_2 * long_1;
		float_2 = float_2 * float_1;
	}
	return unsigned_int_2;
}
double v_main_term_popup_exists( unsigned int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
short v__update_link( int parameter_1,unsigned int parameter_2,long parameter_3,double parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	double_2 = double_1 * double_2;
	long_1 = long_1 + long_1;
	long_1 = long_1 + long_2;
	int_2 = int_1 + int_1;
	double_4 = double_3 * double_4;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	if(1)
	{
		char_1 = char_1 * char_1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		double double_6 = 1;
		long long_3 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double_3 = double_5;
		double_4 = double_6;
		long_3 = long_3 + long_2;
		char controller4vul_2178[3];
		fgets(controller4vul_2178 ,3 ,stdin);
		if( strcmp( controller4vul_2178, "5;") > 0)
		{
			double_6 = double_3;
			char controller4vul_2179[2];
			fgets(controller4vul_2179 ,2 ,stdin);
			if( strcmp( controller4vul_2179, "^") > 0)
			{
				double double_7 = 1;
				unsigned_int_2 = v__cb_link_down(char_1,float_2,uni_para);

				double_4 = double_7 + double_3;
			}
			if(1)
			{
				char_2 = char_2 + char_2;
			}
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			float_1 = float_3 * float_2;
		}
		if(1)
		{
			double double_8 = 1;
			char_4 = char_3 * char_2;
			double_4 = double_8 * double_8;
		}
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		double_3 = double_2 * double_1;
		short_3 = short_1 + short_2;
		double_2 = double_3;
		float_3 = float_4 + float_5;
		char_3 = char_2;
		if(1)
		{
			char_3 = char_4;
		}
	}
	return short_4;
}
unsigned int v__remove_links( int parameter_1,double parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_2 = double_1 * double_1;
	char controller4vul_2177[3];
	fgets(controller4vul_2177 ,3 ,stdin);
	if( strcmp( controller4vul_2177, "_m") < 0)
	{
		short_1 = v__update_link(int_1,unsigned_int_1,long_1,double_1,uni_para);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_4;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_5;
	long_3 = long_2 * long_1;
	short_2 = short_3;
	short_3 = short_4 + short_2;
	double_1 = double_1 + double_1;
	return unsigned_int_5;
}
double v__sel_set( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_1 = short_1 + short_1;
		int_2 = int_1 + int_2;
		char_1 = char_1 + char_2;
	}
	return double_3;
}
int v_termio_scroll_get( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_2;
	float_1 = float_2 + float_2;
	return int_1;
}
void v_miniview_position_offset( short parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_2;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		int_1 = v_termio_scroll_get(int_2);

		double_3 = double_1 * double_2;
		if(1)
		{
			char char_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double_3 = double_1 + double_3;
			char_1 = char_3 + char_2;
			short_1 = short_2;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			long long_3 = 1;
			long long_4 = 1;
			int_1 = int_3 * int_3;
			int_4 = int_3 + int_4;
			long_4 = long_3 * long_3;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
				double double_4 = 1;
				double_2 = double_3 * double_4;
			}
			if(1)
			{
				float float_2 = 1;
				float_2 = float_1 * float_2;
			}
		}
	}
}
char v_term_miniview_get( char parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char_1 = char_1 * char_1;
	double_2 = double_1 + double_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		float float_1 = 1;
		double_3 = double_3;
		if(1)
		{
			char_1 = char_2 + char_1;
		}
		float_2 = float_1 * float_2;
	}
	double_5 = double_1 * double_4;
	char controller4vul_2174[2];
	fgets(controller4vul_2174 ,2 ,stdin);
	if( strcmp( controller4vul_2174, "m") < 0)
	{
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float_2 = float_2;
		char_3 = char_1 * char_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
		char controller4vul_2175[3];
		fgets(controller4vul_2175 ,3 ,stdin);
		if( strcmp( controller4vul_2175, "L3") > 0)
		{
			unsigned int unsigned_int_3 = 1;
			int int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
			int_1 = int_1 * int_1;
			short_2 = short_1 * short_1;
			double_2 = double_2 * double_2;
			int_3 = int_2 + int_2;
			char controller4vul_2176[2];
			fgets(controller4vul_2176 ,2 ,stdin);
			if( strcmp( controller4vul_2176, "i") > 0)
			{
				unsigned_int_1 = v__remove_links(int_4,double_2,uni_para);

				unsigned_int_2 = unsigned_int_3;
			}
		}
		if(1)
		{
			char char_4 = 1;
			char_2 = char_4;
		}
		if(1)
		{
			int int_5 = 1;
			char char_5 = 1;
			short short_3 = 1;
			int_3 = int_2 + int_5;
			char_3 = char_3 + char_5;
			short_2 = short_3 + short_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_4 = 1;
			short_4 = short_2 * short_2;
		}
	}
}
void v_termpty_save_new( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_2;
	v_termpty_save_free(short_1);

	double_3 = double_3 * double_2;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
int v_termpty_save_expand( int parameter_1,double parameter_2,float parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long_1 = long_1 * long_1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	long_2 = long_2 * long_2;
	double_1 = double_2;
	double_3 = double_1;
	return int_3;
}
short v__termpty_cell_is_empty( unsigned int parameter_1)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
long v_termpty_line_length( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		short_1 = v__termpty_cell_is_empty(unsigned_int_2);

		int_1 = int_1 + int_2;
		if(1)
		{
		}
	}
	return long_1;
}
double v_verify_beacon( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	return double_1;
}
void v_termpty_text_save_top( double parameter_1,double parameter_2,int parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float_1 = float_1 + float_1;
	double_1 = double_1;
	if(1)
	{
	}
	float_2 = float_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_1 + double_1;
	}
	if(1)
	{
		int_1 = v_termpty_save_expand(int_1,double_1,float_1);

		double_2 = double_2 + double_2;
		if(1)
		{
			int_2 = int_2 + int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double_3 = double_1 + double_3;
			v_termpty_backlog_lock();

			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
			v_termpty_backlog_unlock();

			short_2 = short_1 * short_1;
			short_1 = short_2;
		}
	}
	int_2 = int_4 + int_1;
	double_1 = double_3 * double_1;
	if(1)
	{
	}
	double_1 = double_2 + double_1;
	int_1 = int_3 + int_5;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	v_termpty_save_new(float_3,int_3);

	double_3 = double_3 * double_2;
	float_2 = float_4 + float_3;
	char_1 = char_1 + char_2;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3 * long_3;
		long_4 = v_termpty_line_length(double_4,long_1);

		int_5 = int_4 * int_2;
	}
	double_5 = double_5;
	double_2 = v_verify_beacon(unsigned_int_2,int_2);

}
void v_termpty_text_scroll( char parameter_1,unsigned int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float_2 = float_1 + float_1;
	double_2 = double_1 * double_1;
	double_3 = double_2 * double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	double_4 = double_4 * double_1;
	double_5 = double_6;
	char controller4vul_2172[3];
	fgets(controller4vul_2172 ,3 ,stdin);
	if( strcmp( controller4vul_2172, "Q`") < 0)
	{
		double_5 = double_2 * double_3;
		char controller4vul_2173[2];
		fgets(controller4vul_2173 ,2 ,stdin);
		if( strcmp( controller4vul_2173, "^") > 0)
		{
			v_termio_scroll(float_2,int_1,int_2,int_3,uni_para);

			int_3 = int_3 + int_3;
		}
		long_1 = long_1 + long_1;
		if(1)
		{
			int_2 = int_2 + int_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int_2 = int_2;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			char char_3 = 1;
			char_1 = char_2 * char_3;
		}
		double_4 = double_6 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
			long_1 = long_2 + long_3;
			long_2 = long_2 + long_4;
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_1 * unsigned_int_1;
		}
	}
}
void v_termpty_text_scroll_test( unsigned int parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_2;
	char controller4vul_2170[3];
	fgets(controller4vul_2170 ,3 ,stdin);
	if( strcmp( controller4vul_2170, "<4") < 0)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_2 + double_3;
		char controller4vul_2171[2];
		fgets(controller4vul_2171 ,2 ,stdin);
		if( strcmp( controller4vul_2171, "+") > 0)
		{
			short short_1 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_3 = 1;
			v_termpty_text_scroll(char_1,unsigned_int_1,uni_para);

			short_2 = short_1 * short_1;
			long_1 = long_2;
			short_2 = short_1 + short_3;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_2 = int_1 * int_2;
		char_2 = char_3;
		float_3 = float_1 * float_2;
	}
}
double v__cursor_to_start_of_line( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	return double_1;
}
int v__tab_forward( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
unsigned int v__handle_cursor_control( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_3;
	char_2 = char_1 + char_2;
	double_3 = v__cursor_to_start_of_line(int_1);

	short_1 = short_1 * short_2;
	int_1 = int_1 * int_2;
	double_2 = double_2 + double_1;
	if(1)
	{
		double_3 = double_2 * double_2;
	}
	float_2 = float_1 * float_1;
	float_3 = float_2;
	int_2 = v__tab_forward(long_1,int_3);

	double_2 = double_2 + double_2;
	if(1)
	{
		char char_3 = 1;
		char_2 = char_3 * char_1;
		double_1 = double_2;
		v_termpty_text_scroll_test(unsigned_int_4,char_4,-1 );

		long_1 = long_1 * long_1;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	return unsigned_int_4;
}
int v_termpty_handle_seq( short parameter_1,long parameter_2,unsigned int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_2;
	char controller4vul_2165[3];
	fgets(controller4vul_2165 ,3 ,stdin);
	if( strcmp( controller4vul_2165, "7:") < 0)
	{
		double_1 = v__handle_esc(float_1,float_1,double_2,uni_para);

		int_3 = int_2 * int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "i") < 0)
	{
		int int_4 = 1;
		int_3 = int_4 + int_3;
	}
	return int_1;
}
void v_termpty_handle_buf( char parameter_1,float parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_2;
	int_3 = int_2 * int_2;
	float_1 = float_1 + float_1;
	int_4 = int_5;
	char controller4vul_2164[3];
	fgets(controller4vul_2164 ,3 ,stdin);
	if( strcmp( controller4vul_2164, "_&") > 0)
	{
		int_2 = v_termpty_handle_seq(short_1,long_1,unsigned_int_1,uni_para);

		long_1 = long_1 * long_2;
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 * double_1;
	}
	long_1 = long_1 + long_2;
}
void v_theme_reload( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	long_2 = long_1 + long_2;
	long_3 = long_1 + long_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "LJ") > 0)
	{
	}
}
void v_theme_reload_cb(unsigned int parameter_2,int parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	v_theme_reload(long_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
}
void v_theme_auto_reload_enable( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v_theme_reload_cb(unsigned_int_1,int_1,short_1);

	double_1 = double_1 * double_2;
}
void v__cursor_shape_to_group_name( int parameter_1)
{
}
double v_config_theme_path_default_get( double parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_1;
	int_1 = int_1 * int_1;
	int_2 = int_2 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "!<") > 0)
	{
	}
	double_2 = double_1 * double_1;
	return double_2;
}
int v_theme_path_get()
{
	int int_1 = 1;
	return int_1;
}
char v_config_theme_path_get( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int_1 = v_theme_path_get();

	int_1 = int_2 * int_1;
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	return char_1;
}
unsigned int v_theme_apply( float parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = v_config_theme_path_default_get(double_1);

	long_2 = long_1 + long_2;
	char_1 = char_1 * char_1;
	double_2 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "y1") == 0)
	{
	}
	char_1 = v_config_theme_path_get(unsigned_int_2);

	int_2 = int_1 + int_1;
	double_1 = double_2 * double_1;
	if(1)
	{
	}
	long_4 = long_3 + long_2;
	char_1 = char_2 + char_2;
	return unsigned_int_1;
}
void v_termio_set_cursor_shape( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	unsigned_int_1 = v_theme_apply(float_1,int_1,double_1);

	double_2 = double_1 + double_2;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	float_3 = float_2 * float_2;
	short_2 = short_1 * short_1;
	v__cursor_shape_to_group_name(int_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	short_3 = short_1 * short_1;
	long_1 = long_1 + long_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
		int int_3 = 1;
		v_theme_auto_reload_enable(char_1);

		int_3 = int_2;
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_3 = int_4 + int_5;
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_1;
		}
	}
}
void v_termpty_clear_tabs_on_screen( int parameter_1)
{
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "I") == 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_7 = 1;
	float float_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if(remainder_check(controller_2,100,1))
	{
		double double_2 = 1;
		long long_2 = 1;
		v_termpty_backlog_lock();

		v_termpty_backlog_unlock();

		double_2 = double_1 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_4 = double_3 * double_2;
		}
		long_1 = long_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double_3 = double_5 + double_6;
	}
	double_7 = double_4 * double_1;
	float_1 = float_1;
	long_1 = long_3 * long_3;
	v_termpty_save_free(short_1);

}
float v__ts_free()
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	return float_1;
}
void v_termpty_save_free( short parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
		}
		if(1)
		{
			float_1 = v__ts_free();

			int_1 = int_1;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	int_2 = int_2 + int_1;
	int_4 = int_1 * int_3;
	char_1 = char_1 * char_2;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	long_3 = long_1 * long_2;
	long_4 = long_3 + long_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		v_termpty_backlog_lock();

		char_3 = char_1 * char_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		float_1 = float_1 + float_1;
		unsigned_int_1 = unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	float_1 = float_1 + float_1;
	v_termpty_backlog_size_set(unsigned_int_3,long_3);

	v_termpty_backlog_unlock();

	float_2 = float_1;
	double_3 = double_3;
	v_termpty_save_free(short_1);

}
void v_termpty_reset_att( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	int int_4 = 1;
	long long_8 = 1;
	long long_9 = 1;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	float_1 = float_1 + float_1;
	double_1 = double_1 * double_1;
	int_3 = int_1 * int_2;
	short_1 = short_2;
	short_2 = short_3 + short_4;
	char_3 = char_3;
	double_2 = double_1 + double_2;
	long_1 = long_2;
	char_1 = char_1 * char_3;
	float_3 = float_1 + float_2;
	char_3 = char_2 + char_4;
	short_1 = short_2 * short_2;
	float_2 = float_3 * float_3;
	long_6 = long_4 * long_5;
	int_1 = int_1 * int_1;
	long_7 = long_2 + long_2;
	int_2 = int_4 * int_2;
	long_9 = long_8 + long_4;
}
char v_termio_config_get( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_1 * int_1;
	return char_1;
}
void v_termpty_reset_state( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	long long_3 = 1;
	float float_5 = 1;
	short short_2 = 1;
	float float_6 = 1;
	float float_7 = 1;
	int int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_8 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	v_termpty_clear_tabs_on_screen(int_1);

	double_2 = double_1 + double_1;
	int_2 = int_2 * int_2;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_3 * double_4;
	char_3 = char_1 * char_2;
	int_3 = int_2 * int_2;
	double_3 = double_4 * double_2;
	double_5 = double_1 + double_5;
	double_5 = double_6 + double_2;
	long_1 = long_1 * long_1;
	long_2 = long_1 + long_2;
	int_4 = int_1 * int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	int_5 = int_3 + int_5;
	float_1 = float_1;
	int_1 = int_4;
	float_4 = float_2 + float_3;
	v_termpty_reset_att(short_1);

	long_3 = long_2 * long_1;
	float_2 = float_3 * float_5;
	float_2 = float_1 * float_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	double_2 = double_1 * double_1;
	short_1 = short_2 + short_1;
	char_1 = v_termio_config_get(int_5);

	float_7 = float_6 + float_7;
	v_termpty_clear_backlog(int_6);

	double_4 = double_2 * double_7;
	double_2 = double_2 + double_8;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	int_7 = int_5 * int_7;
	int_3 = int_5;
	short_5 = short_3 + short_4;
	int_2 = int_3 * int_6;
	int_2 = int_8 + int_3;
	float_6 = float_6 * float_1;
	char_2 = char_4 * char_1;
	unsigned_int_4 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_termio_set_cursor_shape(double_3,char_2);

		float_7 = float_2 + float_2;
	}
	if(1)
	{
		int_4 = int_2 + int_5;
	}
}
void v_termpty_resize_tabs( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_1 + short_2;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		short_3 = short_1 * short_2;
		if(1)
		{
			double_1 = double_2 + double_2;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
		int_2 = int_1 + int_1;
	}
	long_1 = long_3 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_3 = short_2 + short_1;
	}
}
int v__termpty_init( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_1;
	long_1 = long_2;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_1;
	v_termpty_reset_state(float_1);

	long_1 = long_1 * long_3;
	int_1 = int_2 + int_1;
	char_3 = char_1 * char_2;
	char_4 = char_3;
	unsigned_int_2 = unsigned_int_2;
	int_3 = int_1 * int_2;
	long_3 = long_2 + long_1;
	v_termpty_resize_tabs(long_4,int_3,int_1);

	float_3 = float_2 * float_1;
	double_2 = double_1 * double_1;
	return int_1;
}
short v__add_default_keys( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_7 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_4 = 1;
	double double_6 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_8 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	float_2 = float_1 * float_1;
	float_2 = float_2 + float_3;
	int_1 = int_1 * int_1;
	char_2 = char_1 + char_2;
	float_2 = float_1 * float_2;
	double_1 = double_1 * double_1;
	short_2 = short_1 + short_1;
	int_3 = int_2 * int_3;
	double_2 = double_1 * double_1;
	int_2 = int_4 + int_2;
	unsigned_int_1 = unsigned_int_2;
	char_3 = char_1 + char_1;
	char_4 = char_1 * char_4;
	int_4 = int_5 + int_6;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_1 + double_1;
	short_2 = short_3 + short_2;
	int_2 = int_4 + int_7;
	float_3 = float_1;
	long_4 = long_2 + long_3;
	short_2 = short_1 + short_3;
	float_2 = float_2;
	char_5 = char_2 + char_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	char_5 = char_4 * char_2;
	double_4 = double_1 + double_3;
	double_4 = double_5 + double_1;
	short_1 = short_3 + short_1;
	int_6 = int_7;
	float_4 = float_5;
	int_6 = int_5 * int_1;
	double_5 = double_1 * double_4;
	int_1 = int_5 * int_4;
	double_1 = double_5 + double_3;
	short_4 = short_4;
	double_3 = double_6 * double_2;
	double_4 = double_4 + double_1;
	float_6 = float_7;
	double_1 = double_4 + double_2;
	long_3 = long_2 * long_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	int_7 = int_1 + int_5;
	float_8 = float_4 + float_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
	double_5 = double_6;
	double_1 = double_1 + double_5;
	float_1 = float_5 + float_2;
	short_5 = short_5 + short_5;
	return short_3;
}
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,long parameter_4,short parameter_5,long parameter_6)
{
	double double_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	double double_6 = 1;
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_1 = long_1 + long_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_2 = double_1 * double_1;
		unsigned_int_4 = unsigned_int_4;
		double_3 = double_1 + double_3;
		double_2 = double_4 + double_1;
		float_2 = float_1 * float_2;
	}
	double_5 = double_4 * double_5;
	int_1 = int_1;
	int_1 = int_1 + int_1;
	double_6 = double_2 + double_4;
}
char v_config_new()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char char_3 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_8 = 1;
		short short_7 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		float_2 = float_1 + float_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_1;
		char_1 = char_1;
		int_3 = int_1 + int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_4 = short_3 + short_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		float_1 = float_1 * float_1;
		long_1 = long_1;
		int_5 = int_1 + int_4;
		int_4 = int_3;
		char_2 = char_2 * char_2;
		char_3 = char_3 + char_1;
		float_2 = float_3 * float_1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
		char_3 = char_2;
		double_3 = double_1 + double_2;
		long_2 = long_2;
		int_5 = int_4 + int_6;
		float_3 = float_4 + float_5;
		double_4 = double_1 + double_4;
		char_1 = char_3 * char_2;
		short_5 = short_5;
		unsigned_int_4 = unsigned_int_3;
		short_1 = short_2 * short_5;
		int_3 = int_1 * int_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		short_1 = short_6 * short_4;
		short_2 = v__add_default_keys(int_2);

		float_4 = float_5 * float_1;
		float_5 = float_3;
		int_6 = int_4 * int_3;
		short_6 = short_1 + short_5;
		int_2 = int_1 + int_5;
		int_3 = int_6 * int_5;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
		v_colors_standard_get(int_3,int_6,unsigned_int_6,long_2,short_1,long_2);

		unsigned_int_7 = unsigned_int_1 + unsigned_int_6;
		long_4 = long_3 + long_3;
		long_5 = long_2 + long_5;
		unsigned_int_6 = unsigned_int_7 * unsigned_int_6;
		long_2 = long_2 * long_5;
		unsigned_int_5 = unsigned_int_8 * unsigned_int_3;
		float_1 = float_4 * float_1;
		short_5 = short_1;
		int_2 = int_3 * int_2;
		double_4 = double_2 + double_2;
		short_7 = short_3 * short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double double_5 = 1;
				char char_4 = 1;
				double double_6 = 1;
				double_5 = double_2 * double_3;
				float_5 = float_1 + float_3;
				char_4 = char_2 + char_1;
				double_6 = double_3 * double_4;
				double_2 = double_3;
				unsigned_int_2 = unsigned_int_3;
			}
		}
		long_2 = long_1 + long_3;
		unsigned_int_6 = unsigned_int_8 + unsigned_int_3;
	}
	return char_2;
}
int main()
{
	int uni_para =985;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_6 = 1;
	char char_4 = 1;
	short short_5 = 1;
	long long_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	double_2 = double_3 + double_4;
	double_2 = double_2 * double_5;
	float_1 = float_1 + float_2;
	float_2 = float_2 + float_2;
	char_1 = char_2;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_1 + long_2;
	if(1)
	{
		int_3 = int_2 + int_2;
	}
	if(1)
	{
		double_2 = double_4 * double_4;
	}
	short_4 = short_1 * short_3;
	if(1)
	{
	}
	double_1 = double_4 + double_4;
	double_4 = double_6 + double_1;
	int_1 = int_2 + int_3;
	char controller4vul_2160[3];
	fgets(controller4vul_2160 ,3 ,stdin);
	if( strcmp( controller4vul_2160, "SV") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			char_3 = char_3 * char_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
		}
		double_5 = double_1 + double_6;
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
		}
		char_3 = char_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
		double_5 = double_2 + double_1;
		if(1)
		{
			short_3 = short_1;
		}
		if(1)
		{
			double_3 = double_3;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_6;
		if(1)
		{
			float_3 = float_1 * float_1;
		}
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			double_6 = double_5 * double_4;
		}
		char controller4vul_2161[3];
		fgets(controller4vul_2161 ,3 ,stdin);
		if( strcmp( controller4vul_2161, "#P") > 0)
		{
			int_4 = int_4 * int_1;
			char controller4vul_2162[3];
			fgets(controller4vul_2162 ,3 ,stdin);
			if( strcmp( controller4vul_2162, "MN") > 0)
			{
				int int_5 = 1;
				unsigned int unsigned_int_7 = 1;
				int_5 = int_4 + int_3;
				unsigned_int_3 = unsigned_int_1;
				char controller4vul_2163[3];
				fgets(controller4vul_2163 ,3 ,stdin);
				if( strcmp( controller4vul_2163, "Hy") > 0)
				{
					v_termpty_handle_buf(char_1,float_3,int_6,uni_para);

					char_4 = char_3 + char_2;
				}
				if(1)
				{
					double double_7 = 1;
					double_2 = double_7;
				}
				if(1)
				{
					long long_3 = 1;
					long long_4 = 1;
					long_4 = long_3 + long_4;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_2 * unsigned_int_7;
				}
				if(1)
				{
					int int_7 = 1;
					int_7 = int_3 + int_5;
				}
				if(1)
				{
					float_2 = float_2;
				}
				if(1)
				{
					unsigned int unsigned_int_8 = 1;
					unsigned_int_8 = unsigned_int_1 * unsigned_int_7;
				}
				if(1)
				{
					float float_4 = 1;
					float_1 = float_4 * float_3;
				}
				if(1)
				{
					long long_5 = 1;
					long_2 = long_5 + long_5;
				}
				if(1)
				{
					double_3 = double_1 + double_1;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_7 * unsigned_int_2;
				}
				if(1)
				{
					short_5 = short_5;
				}
			}
			if(1)
			{
				long_6 = long_6 * long_6;
			}
		}
	}
	if(1)
	{
		char_5 = char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_9;
	}
	if(1)
	{
		char_4 = char_2 + char_5;
	}
	if(1)
	{
		long long_7 = 1;
		long_6 = long_1 * long_7;
		if(1)
		{
			unsigned_int_6 = unsigned_int_1 * unsigned_int_1;
		}
	}
	char_3 = char_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	char_3 = char_6 * char_1;
	short_4 = short_5 * short_4;
	if(1)
	{
		float float_5 = 1;
		float_5 = float_2 * float_1;
		double_5 = double_4 + double_1;
	}
	return int_4;
}

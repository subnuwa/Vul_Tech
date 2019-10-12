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

float v__termpty_shutdown( float parameter_1);
void v_termpty_text_scroll_rev_test( long parameter_1,char parameter_2);
float v__handle_esc_dcs( char parameter_1,unsigned int parameter_2,char parameter_3);
double v__handle_op_a( double parameter_1,char parameter_2,int parameter_3);
int v__termpty_ext_handle( short parameter_1,double parameter_2,double parameter_3);
unsigned int v__handle_esc_terminology( long parameter_1,unsigned int parameter_2,int parameter_3);
double v__handle_xterm_777_command( int parameter_1,char parameter_2,int parameter_3);
short v__smart_calculate_226();
short v__smart_size( unsigned int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4);
void v_colors_term_init( int parameter_1,int parameter_2,long parameter_3);
void v_termio_config_update( double parameter_1);
short v__font_size_set( float parameter_1,int parameter_2);
void v_termio_font_size_set( char parameter_1,int parameter_2);
long v__handle_xterm_50_command( int parameter_1,char parameter_2,int parameter_3);
double v__eina_unicode_to_hex( float parameter_1);
long v__xterm_parse_color( long parameter_1,float parameter_2,short parameter_3,int parameter_4,int parameter_5);
float v__xterm_arg_get( float parameter_1);
long v__handle_esc_xterm( double parameter_1,float parameter_2,char parameter_3);
void v_termpty_cells_set_content( float parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4);
int v__handle_esc_csi_decera( int parameter_1,double parameter_2);
void v_termpty_cells_att_fill_preserve_colors( int parameter_1,float parameter_2,int parameter_3,int parameter_4);
double v__clean_up_rect_coordinates( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
unsigned int v__handle_esc_csi_decfra( float parameter_1,int parameter_2);
void v__handle_esc_csi_decslrm( unsigned int parameter_1,float parameter_2);
char v__handle_esc_csi_decstbm( unsigned int parameter_1,int parameter_2);
unsigned int v__handle_esc_csi_decscusr( double parameter_1,char parameter_2);
char v__handle_esc_csi_dsr( char parameter_1,int parameter_2);
unsigned int v__handle_esc_csi_truecolor_cmyk( float parameter_1,float parameter_2);
unsigned int v__handle_esc_csi_truecolor_cmy( double parameter_1,char parameter_2);
void v__approximate_truecolor_rgb( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
int v__csi_truecolor_arg_get();
double v__handle_esc_csi_truecolor_rgb( char parameter_1,double parameter_2);
unsigned int v__handle_esc_csi_color_set( int parameter_1,char parameter_2);
void v_termpty_cursor_copy( float parameter_1,short parameter_2);
float v__switch_to_alternative_screen( short parameter_1,int parameter_2);
short v__move_cursor_to_origin( char parameter_1);
long v__pty_size( long parameter_1);
char v__limit_coord( long parameter_1);
short v__check_screen_info( long parameter_1,long parameter_2);
short v__termpty_line_rewrap( long parameter_1,int parameter_2,int parameter_3,short parameter_4,double parameter_5);
void v__backlog_remove_latest_nolock( unsigned int parameter_1);
void v_termpty_save_extract( long parameter_1);
char v__termpty_line_is_empty( short parameter_1,double parameter_2);
void v_termpty_screen_swap( int parameter_1);
void v_termpty_resize( double parameter_1,int parameter_2,int parameter_3);
char v_termio_win_get();
long v__handle_esc_csi_reset_mode( int parameter_1,short parameter_2,char parameter_3);
double v__handle_esc_csi_cursor_pos_set( float parameter_1,float parameter_2,float parameter_3);
void v_termpty_text_scroll_rev( unsigned int parameter_1,long parameter_2);
void v_termpty_clear_line( int parameter_1,long parameter_2,int parameter_3);
void v_termpty_clear_screen( short parameter_1,short parameter_2);
void v_termpty_cell_codepoint_att_fill( float parameter_1,int parameter_2,double parameter_3,float parameter_4,int parameter_5);
long v__termpty_charset_trans( double parameter_1,short parameter_2);
void v_termio_content_change( char parameter_1,float parameter_2,short parameter_3,int parameter_4,int uni_para);
void v_termpty_text_append( int parameter_1,unsigned int parameter_2,int parameter_3,int uni_para);
char v__csi_arg_get();
unsigned int v__handle_esc_csi( short parameter_1,char parameter_2,int parameter_3,int uni_para);
char v__safechar( double parameter_1);
void v__handle_esc( int parameter_1,int parameter_2,double parameter_3);
void v_termpty_cell_fill( unsigned int parameter_1,double parameter_2,double parameter_3,int parameter_4);
void v_termpty_cells_fill( short parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4);
void v_termpty_cells_clear( int parameter_1,long parameter_2,int parameter_3);
float v__tooltip_del(float parameter_2);
double v__tooltip_content(char parameter_2,long parameter_3);
void v_MD5Final( int parameter_1,int parameter_2);
void v_MD5Transform( unsigned int parameter_1,long parameter_2);
void v_byteReverse( double parameter_1,short parameter_2);
void v_MD5Update( unsigned int parameter_1,short parameter_2,float parameter_3);
void v_MD5Init( unsigned int parameter_1);
void v_gravatar_tooltip( long parameter_1,int parameter_2,char parameter_3);
unsigned int v__cb_link_drag_done(float parameter_2);
double v__cb_link_drag_accept(char parameter_2,short parameter_3);
char v__cb_link_drag_move(long parameter_2,float parameter_3,float parameter_4,double parameter_5);
long v__cb_link_icon_new(int parameter_2,double parameter_3,long parameter_4);
float v__cb_link_move(float parameter_2,double parameter_3);
float v__cb_link_up_delay();
double v__cb_link_up(short parameter_2,float parameter_3);
void v_term_focus( int parameter_1);
long v__term_is_focused( int parameter_1);
void v_term_unfocus( short parameter_1);
float v__cb_ctxp_del(short parameter_2,double parameter_3);
char v__cb_ctxp_dismissed(float parameter_2);
double v__cb_ctxp_link_copy(long parameter_2,int uni_para);
float v__screen_visual_bounds( int parameter_1);
int v__draw_cell( double parameter_1,long parameter_2,char parameter_3,short parameter_4);
unsigned int v__draw_line( double parameter_1,short parameter_2,float parameter_3,int parameter_4,double parameter_5);
float v_termpty_backlog_length( short parameter_1);
char v_termio_pty_get();
int v_termio_textgrid_get( double parameter_1);
unsigned int v_miniview_colors_get( int parameter_1,unsigned int parameter_2);
char v__deferred_renderer();
void v__queue_render( long parameter_1);
void v_miniview_redraw( float parameter_1);
double v__block_obj_del( double parameter_1);
int v__termpty_is_dblwidth_slow_get( short parameter_1,int parameter_2);
float v__termpty_is_dblwidth_get( long parameter_1,int parameter_2);
short v_term_preedit_str_get( float parameter_1);
double v_media_get( float parameter_1);
unsigned int v__smart_media_clicked(long parameter_2);
short v_media_control_get( short parameter_1);
void v__smart_media_stop(int parameter_2);
char v__smart_media_pause(double parameter_2);
int v__smart_media_play(int parameter_2);
char v__smart_media_del(int parameter_2,double parameter_3);
void v_media_visualize_set( int parameter_1,double parameter_2);
void v_media_mute_set( double parameter_1,long parameter_2);
void v_media_volume_set( int parameter_1,double parameter_2);
double v__cb_media_vol(double parameter_2,short parameter_3,long parameter_4);
double v__cb_media_pos(unsigned int parameter_2,float parameter_3,int parameter_4);
long v__cb_media_pos_drag_stop(double parameter_2,double parameter_3,double parameter_4);
int v__cb_media_pos_drag_start(unsigned int parameter_2,char parameter_3,int parameter_4);
void v_media_stop( double parameter_1);
unsigned int v__cb_media_stop(unsigned int parameter_2,short parameter_3,short parameter_4);
int v__cb_media_pause(short parameter_2,double parameter_3,float parameter_4);
void v_media_play_set( double parameter_1,float parameter_2);
double v__cb_media_play(int parameter_2,unsigned int parameter_3,int parameter_4);
void v_media_position_set( short parameter_1,double parameter_2);
char v__cb_mov_ref(double parameter_2);
char v__cb_mov_progress(double parameter_2);
short v__cb_mov_restart();
short v__cb_mov_decode_stop(char parameter_2);
void v__cb_mov_len_change(float parameter_2);
char v__cb_mov_frame_resize(long parameter_2);
long v__cb_mov_frame_decode(double parameter_2);
float v__type_mov_init();
void v__cb_edje_preloaded(long parameter_2,unsigned int parameter_3,int parameter_4);
float v__type_edje_init( float parameter_1);
short v__type_scale_init( long parameter_1);
int v__cb_img_frame();
unsigned int v__type_img_anim_handle( long parameter_1);
short v__cb_img_preloaded(double parameter_2,long parameter_3);
unsigned int v__type_img_init( long parameter_1);
float v__url_compl_cb(int parameter_2);
float v__url_prog_cb(int parameter_2);
float v__type_thumb_calc( double parameter_1,long parameter_2,long parameter_3,unsigned int parameter_4,float parameter_5);
char v__type_mov_calc( double parameter_1,short parameter_2,short parameter_3,float parameter_4,short parameter_5);
void v__type_edje_calc( short parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4,char parameter_5);
void v__type_img_calc( unsigned int parameter_1,short parameter_2,int parameter_3,float parameter_4,char parameter_5);
char v__cb_scale_preloaded(double parameter_2,float parameter_3,int uni_para);
int v__type_scale_calc( short parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,float parameter_5,int uni_para);
short v__unsmooth_timeout();
float v__smooth_handler( long parameter_1);
char v__smart_calculate( unsigned int parameter_1,int uni_para);
char v__smart_move( char parameter_1,long parameter_2,float parameter_3);
void v__smart_resize( short parameter_1,short parameter_2,unsigned int parameter_3);
long v__smart_del( unsigned int parameter_1);
void v__smart_add( int parameter_1);
unsigned int v__smart_init(int uni_para);
short v_media_add( unsigned int parameter_1,char parameter_2,long parameter_3,int parameter_4,int parameter_5,int uni_para);
unsigned int v__block_media_activate( int parameter_1,float parameter_2,int uni_para);
int v__block_edje_message_cb(unsigned int parameter_2,short parameter_3,int parameter_4);
void v_termpty_write( double parameter_1,unsigned int parameter_2,int parameter_3);
float v__block_edje_signal_cb(int parameter_2,float parameter_3,long parameter_4);
void v_termpty_block_chid_update( double parameter_1,double parameter_2);
void v__block_edje_cmds( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,short parameter_4);
float v_homedir_get( char parameter_1,double parameter_2);
char v__block_edje_activate( int parameter_1,long parameter_2);
int v__block_activate( short parameter_1,long parameter_2,int uni_para);
int v_termpty_block_get( int parameter_1,int parameter_2);
int v_termpty_block_id_get( short parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( unsigned int parameter_1,int parameter_2);
double v__smart_apply( float parameter_1,int uni_para);
short v__smart_cb_change(int uni_para);
double v__smart_update_queue( long parameter_1,char parameter_2,int uni_para);
unsigned int v__lost_selection_reset_job();
short v__lost_selection(short parameter_2,int uni_para);
long v__take_selection_text( int parameter_1,double parameter_2,char parameter_3,int uni_para);
short v__cb_ctxp_link_content_copy(float parameter_2);
void v_ty_sb_free( short parameter_1);
float v_ty_sb_steal_buf( short parameter_1);
int v_codepoint_to_utf8( unsigned int parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( short parameter_1);
int v_ty_sb_add( char parameter_1,short parameter_2,unsigned int parameter_3);
unsigned int v__termpty_cellrow_from_beacon_get( float parameter_1,int parameter_2,double parameter_3);
char v_termpty_cellrow_get( int parameter_1,int parameter_2,float parameter_3);
long v_termio_selection_get( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,int parameter_7);
int v__cb_ctxp_link_open(double parameter_2);
char v__should_inline( unsigned int parameter_1);
int v_link_is_email( double parameter_1);
long v_link_is_protocol( char parameter_1);
double v_link_is_url( unsigned int parameter_1);
unsigned int v__activate_link( char parameter_1,unsigned int parameter_2);
float v__cb_ctxp_link_preview(char parameter_2);
float v__is_fmt( unsigned int parameter_1,char parameter_2);
long v_media_src_type_get( int parameter_1);
char v__mouse_in_selection( long parameter_1,int parameter_2,int parameter_3);
char v__smart_xy_to_cursor( char parameter_1,short parameter_2,char parameter_3,int parameter_4,int parameter_5);
unsigned int v__cb_link_down(char parameter_2,double parameter_3,int uni_para);
char v_main_term_popup_exists( short parameter_1);
int v__update_link( short parameter_1,unsigned int parameter_2,float parameter_3,long parameter_4,int uni_para);
int v__remove_links( unsigned int parameter_1,int parameter_2,int uni_para);
unsigned int v__sel_set( short parameter_1,unsigned int parameter_2);
int v_termio_scroll_get( unsigned int parameter_1);
void v_miniview_position_offset( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
float v_term_miniview_get( double parameter_1);
void v_termio_scroll( short parameter_1,int parameter_2,int parameter_3,int parameter_4);
char v_termpty_save_new( long parameter_1,int parameter_2);
char v_termpty_save_expand( long parameter_1,long parameter_2,short parameter_3);
double v__termpty_cell_is_empty( short parameter_1);
float v_termpty_line_length( short parameter_1,int parameter_2);
void v_verify_beacon( float parameter_1,int parameter_2);
void v_termpty_text_save_top( int parameter_1,unsigned int parameter_2,double parameter_3);
void v_termpty_text_scroll( double parameter_1,unsigned int parameter_2);
void v_termpty_text_scroll_test( double parameter_1,short parameter_2);
int v__cursor_to_start_of_line( long parameter_1);
void v__tab_forward( short parameter_1,int parameter_2);
char v__handle_cursor_control( float parameter_1,int parameter_2);
int v_termpty_handle_seq( double parameter_1,short parameter_2,short parameter_3,int uni_para);
void v_termpty_handle_buf( float parameter_1,char parameter_2,int parameter_3,int uni_para);
void v_theme_reload();
float v_theme_reload_cb(long parameter_2,char parameter_3,long parameter_4);
void v_theme_auto_reload_enable( char parameter_1);
double v__cursor_shape_to_group_name( short parameter_1);
short v_config_theme_path_default_get( char parameter_1);
double v_theme_path_get();
short v_config_theme_path_get( long parameter_1);
int v_theme_apply( double parameter_1,short parameter_2,unsigned int parameter_3);
void v_termio_set_cursor_shape( short parameter_1,char parameter_2);
void v_termpty_clear_tabs_on_screen();
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( char parameter_1,int parameter_2);
float v__ts_free();
void v_termpty_save_free( char parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( int parameter_1);
void v_termpty_reset_att();
short v_termio_config_get( long parameter_1);
void v_termpty_reset_state( int parameter_1);
void v_termpty_resize_tabs( long parameter_1,int parameter_2,int parameter_3);
int v__termpty_init( short parameter_1);
float v__add_default_keys();
void v_colors_standard_get( int parameter_1,int parameter_2,char parameter_3,double parameter_4,double parameter_5,int parameter_6);
int v_config_new();
float v__termpty_shutdown( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_3 = int_1 * int_2;
	return float_1;
}
void v_termpty_text_scroll_rev_test( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		int_3 = int_1 + int_2;
		long_1 = long_2;
		v_termpty_text_scroll_rev(unsigned_int_1,long_3);

		int_4 = int_1;
	}
}
float v__handle_esc_dcs( char parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	v_termpty_write(double_1,unsigned_int_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
				}
				if(1)
				{
					short short_1 = 1;
					short short_2 = 1;
					short_2 = short_1 * short_2;
				}
			}
		}
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		}
		if(1)
		{
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 + int_3;
		}
		char controller_10[3];
		fgets(controller_10 ,3 ,stdin);
		if( strcmp( controller_10, "q>") < 0)
		{
			char_1 = v__safechar(double_2);

			int_2 = int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_5 = 1;
			int_5 = int_2 + int_4;
		}
	}
	return float_1;
}
double v__handle_op_a( double parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	return double_1;
}
int v__termpty_ext_handle( short parameter_1,double parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_2 = char_1 + char_2;
	double_1 = v__handle_op_a(double_1,char_2,int_1);

	long_2 = long_1 * long_1;
	return int_1;
}
unsigned int v__handle_esc_terminology( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_1 = v__termpty_ext_handle(short_1,double_1,double_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_1;
	short_1 = v_termio_config_get(long_1);

}
double v__handle_xterm_777_command( int parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	double double_4 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_3;
	float_1 = float_1 * float_1;
	if(1)
	{
		short short_4 = 1;
		short_3 = short_3 + short_4;
	}
	float_2 = float_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	short_1 = short_3 * short_3;
	float_1 = float_1;
	long_1 = long_1;
	return double_4;
}
short v__smart_calculate_226()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	short_1 = short_1 * short_1;
	short_2 = short_1 + short_1;
	short_3 = short_4;
	float_1 = float_1 + float_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	short_5 = short_5;
	return short_4;
}
short v__smart_size( unsigned int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	short short_3 = 1;
	char_2 = char_1 + char_1;
	double_3 = double_1 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, " ") < 0)
	{
		int_1 = int_1 + int_1;
		int_3 = int_2 + int_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "K") < 0)
	{
		if(1)
		{
		}
	}
	v_termpty_resize(double_4,int_2,int_2);

	long_1 = long_1;
	int_5 = int_4 * int_3;
	double_6 = double_2 * double_5;
	short_1 = v__smart_calculate_226();

	double_4 = v__smart_apply(float_1,-1 );

	double_6 = double_4 + double_3;
	char_1 = char_3 * char_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned_int_1 = v__sel_set(short_2,unsigned_int_2);

		float_2 = float_3;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_6 = double_7 + double_6;
	int_5 = int_3;
	char_3 = char_4 * char_2;
	long_2 = long_2 + long_3;
	int_6 = int_6 * int_3;
	return short_3;
}
void v_colors_term_init( int parameter_1,int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	int_3 = int_1 + int_2;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_3 = double_1 + double_2;
		if(1)
		{
			char_1 = char_1 * char_1;
			short_2 = short_1 + short_1;
			int_4 = int_4 + int_2;
			long_2 = long_1 + long_1;
		}
		if(1)
		{
			double double_4 = 1;
			double_3 = double_1 * double_4;
			if(1)
			{
				double double_5 = 1;
				int_2 = int_1 * int_4;
				double_3 = double_4 * double_5;
				float_1 = float_1 + float_1;
				int_4 = int_5 + int_4;
				double_3 = double_1;
			}
		}
		long_2 = long_2 + long_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int int_6 = 1;
			int_7 = int_6 * int_5;
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char controller_6[2];
		fgets(controller_6 ,2 ,stdin);
		if( strcmp( controller_6, "B") > 0)
		{
			int_2 = int_5 + int_3;
			if(1)
			{
				int int_8 = 1;
				int_7 = int_8 * int_5;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_2 = int_7 + int_3;
		if(1)
		{
			char char_2 = 1;
			float float_2 = 1;
			int_2 = int_5 * int_2;
			short_1 = short_1 + short_2;
			char_1 = char_2 * char_1;
			int_3 = int_3 * int_7;
			float_2 = float_1;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
}
void v_termio_config_update( double parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_1 = double_1;
	v_colors_term_init(int_1,int_1,long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	short_1 = short_1 + short_2;
	if(1)
	{
		short_3 = v__smart_size(unsigned_int_1,int_2,int_1,unsigned_int_2);

		int_2 = int_2;
	}
	short_2 = short_1 + short_1;
	if(1)
	{
		char char_2 = 1;
		double_2 = double_1 * double_1;
		v_termio_set_cursor_shape(short_3,char_1);

		char_2 = char_1 + char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_4;
	double_1 = double_1 * double_1;
	long_1 = long_2;
	v_termpty_backlog_size_set(char_1,int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	double_4 = double_3 + double_4;
	double_3 = double_5 + double_5;
	double_2 = double_2 + double_3;
	int_4 = int_3 + int_1;
	float_2 = float_1 * float_2;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "[M") < 0)
	{
		int_4 = int_4 * int_1;
	}
	if(1)
	{
		int_3 = int_1 * int_5;
	}
	unsigned_int_2 = unsigned_int_1;
	int_5 = int_1 + int_3;
	short_5 = short_4 * short_3;
	long_1 = long_1 + long_1;
	long_4 = long_2 + long_3;
}
short v__font_size_set( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double_1 = double_1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		short_2 = short_2 + short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		int int_3 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		int_1 = int_2;
		unsigned_int_2 = unsigned_int_2;
		double_1 = double_2 + double_1;
		int_1 = int_1 + int_3;
		v_termio_config_update(double_3);

		int_1 = int_3;
	}
	return short_1;
}
void v_termio_font_size_set( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short_1 = v__font_size_set(float_1,int_1);

	long_1 = long_1 * long_1;
}
long v__handle_xterm_50_command( int parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_2;
	return long_1;
	v_termio_font_size_set(char_1,int_1);

}
double v__eina_unicode_to_hex( float parameter_1)
{
	double double_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "i{") < 0)
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
long v__xterm_parse_color( long parameter_1,float parameter_2,short parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double_3 = double_1 + double_2;
	double_4 = double_3 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_1 = int_1;
	double_1 = double_1 * double_4;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		float float_5 = 1;
		int int_3 = 1;
		long_1 = long_2;
		if(1)
		{
			double_5 = double_4 + double_3;
		}
		char_1 = char_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			double_1 = double_5 + double_5;
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_6 = double_5 * double_5;
		if(1)
		{
			long long_3 = 1;
			double_6 = v__eina_unicode_to_hex(float_1);

			long_3 = long_1 * long_1;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		char_2 = char_1;
		if(1)
		{
			double_5 = double_6 * double_2;
		}
		char_4 = char_2 * char_3;
		float_3 = float_2 * float_1;
		if(1)
		{
			float float_4 = 1;
			float_1 = float_2 + float_4;
		}
		float_3 = float_1 + float_2;
		float_2 = float_5;
		if(1)
		{
			char char_5 = 1;
			char char_6 = 1;
			char_6 = char_3 * char_5;
		}
		int_3 = int_2 * int_1;
	}
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		double_4 = double_3;
		if(1)
		{
			int int_4 = 1;
			int_2 = int_4;
		}
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		int_1 = int_1 * int_1;
		if(1)
		{
			double_4 = double_5 + double_4;
		}
		float_2 = float_1;
		float_1 = float_1 + float_3;
		if(1)
		{
			int int_5 = 1;
			int_5 = int_6;
		}
		int_6 = int_7 + int_6;
	}
	if(1)
	{
		long_2 = long_2 + long_2;
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
float v__xterm_arg_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_4 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 * char_2;
	char_2 = char_2 + char_1;
	short_1 = short_1;
	double_1 = double_1 * double_1;
	short_2 = short_1 * short_2;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	short_2 = short_3 + short_3;
	long_1 = long_2;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	float_1 = float_1 + float_1;
	short_3 = short_3 * short_1;
	short_3 = short_1 * short_4;
	double_2 = double_1 + double_2;
	long_3 = long_3;
	char_2 = char_2;
	int_2 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	return float_2;
}
long v__handle_esc_xterm( double parameter_1,float parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	float float_4 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	int int_7 = 1;
	char char_5 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		float_1 = v__xterm_arg_get(float_2);

		double_3 = double_2 * double_3;
	}
	char_4 = char_3 + char_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		char_1 = char_1 * char_3;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
		float_3 = float_1 + float_2;
	}
	int_3 = int_4 + int_3;
	int_1 = int_5 + int_5;
	char_4 = char_3 * char_1;
	unsigned_int_4 = unsigned_int_3;
	double_4 = v__handle_xterm_777_command(int_5,char_2,int_2);

	short_3 = short_1 + short_2;
	if(1)
	{
		double_5 = double_3 + double_2;
	}
	if(1)
	{
		float_4 = float_2 + float_1;
		int_4 = int_3 * int_6;
		char_3 = char_2 * char_1;
	}
	if(1)
	{
		short_1 = short_2 + short_1;
	}
	if(1)
	{
		double_3 = double_3 + double_2;
	}
	long_1 = long_1 * long_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		int_6 = int_1 * int_4;
	}
	if(1)
	{
		short_3 = v_termio_config_get(long_2);

		short_2 = short_2 * short_1;
	}
	if(1)
	{
		char_2 = char_4 + char_4;
		long_2 = v__xterm_parse_color(long_2,float_3,short_4,int_2,int_7);

		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
	}
	if(1)
	{
		float float_5 = 1;
		float_1 = float_5 * float_4;
	}
	long_2 = v__handle_xterm_50_command(int_1,char_5,int_5);

	int_3 = int_6 * int_7;
	int_3 = v_termio_textgrid_get(double_4);

	double_4 = double_5 + double_2;
	return long_1;
	v_termpty_write(double_1,unsigned_int_3,int_1);

}
void v_termpty_cells_set_content( float parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_1 = double_2;
		short_2 = short_1 + short_2;
	}
}
int v__handle_esc_csi_decera( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_6 = 1;
	char char_2 = 1;
	double_2 = double_1 * double_1;
	v_termpty_cells_set_content(float_1,int_1,unsigned_int_1,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_3 * double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_3 = v__clean_up_rect_coordinates(char_1,int_1,int_3,int_3,int_4);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	long_1 = long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "YR") < 0)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		int_5 = int_3 * int_3;
		char_1 = char_1 + char_1;
	}
	return int_6;
	char_2 = v__csi_arg_get();

}
void v_termpty_cells_att_fill_preserve_colors( int parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double_1 = double_1 + double_2;
		char_2 = char_1 * char_2;
		double_1 = double_3 + double_2;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			short_2 = short_1 * short_1;
			float_1 = float_2;
			char_3 = char_2 + char_3;
			int_3 = int_1 + int_2;
			int_3 = int_4 * int_4;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
}
double v__clean_up_rect_coordinates( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	float float_4 = 1;
	int int_6 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_7 = 1;
	float_2 = float_1 * float_1;
	int_1 = int_1 + int_2;
	float_2 = float_2;
	long_2 = long_1 * long_2;
	int_3 = int_2 + int_2;
	int_1 = int_3 * int_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "e") < 0)
	{
		int_5 = int_4 + int_5;
	}
	char_1 = char_1 + char_2;
	float_3 = float_2 * float_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "._") == 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		float float_5 = 1;
		float_5 = float_4 * float_5;
		if(1)
		{
			int_5 = int_6;
		}
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		short short_4 = 1;
		short_1 = short_4;
	}
	if(1)
	{
		float float_6 = 1;
		float_3 = float_4 * float_6;
		if(1)
		{
			char_2 = char_2;
		}
	}
	char_3 = char_3 + char_3;
	if(1)
	{
		int_6 = int_4 * int_6;
	}
	if(1)
	{
	}
	int_3 = int_2 + int_6;
	double_3 = double_1 * double_2;
	double_3 = double_3 * double_3;
	float_7 = float_1 + float_7;
	return double_2;
}
unsigned int v__handle_esc_csi_decfra( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char_2 = char_1 + char_2;
	short_3 = short_1 + short_2;
	v_termpty_cells_att_fill_preserve_colors(int_1,float_1,int_1,int_2);

	int_1 = int_1;
	double_1 = v__clean_up_rect_coordinates(char_1,int_1,int_1,int_1,int_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2 * int_2;
	char_2 = char_3 * char_2;
	int_3 = int_1 * int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	char_4 = v__csi_arg_get();

	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_1;
	}
	return unsigned_int_1;
}
void v__handle_esc_csi_decslrm( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_2 = double_1 + double_1;
	long_1 = long_1 + long_1;
	char_1 = char_1;
	short_1 = v__move_cursor_to_origin(char_2);

	short_2 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	double_4 = double_3 * double_3;
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		double_4 = double_3;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2 * long_2;
	}
	short_1 = short_3 + short_1;
	int_2 = int_2 * int_2;
	short_2 = short_4 * short_2;
	char_3 = v__csi_arg_get();

	long_4 = long_3 * long_4;
	double_2 = double_1 * double_3;
}
char v__handle_esc_csi_decstbm( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_1;
	char_2 = char_3 * char_4;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_3;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1;
	short_1 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	double_2 = double_2;
	return char_4;
	char_4 = v__csi_arg_get();

	short_1 = v__move_cursor_to_origin(char_3);

}
unsigned int v__handle_esc_csi_decscusr( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_termio_set_cursor_shape(short_1,char_1);

	short_1 = short_1 + short_1;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_1;
	long_1 = long_1 + long_2;
	float_1 = float_1 + float_2;
	double_2 = double_1;
	char_1 = v__csi_arg_get();

	double_1 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_3;
	double_1 = double_1 * double_3;
	short_3 = short_1 * short_2;
	double_4 = double_1 + double_3;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	return unsigned_int_2;
}
char v__handle_esc_csi_dsr( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_2;
	char_1 = v__csi_arg_get();

	long_1 = long_1 * long_2;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		long long_3 = 1;
		char_2 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_3 = long_1 + long_3;
		int_1 = int_3 * int_3;
		double_1 = double_3 * double_1;
	}
	if(1)
	{
		double double_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double_2 = double_1 * double_2;
		double_2 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_4 = double_1 + double_2;
		int_1 = int_2 * int_3;
		v_termpty_write(double_3,unsigned_int_2,int_2);

		short_4 = short_3 + short_2;
	}
	return char_2;
}
unsigned int v__handle_esc_csi_truecolor_cmyk( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v__approximate_truecolor_rgb(int_1,int_1,int_2,int_3);

	long_2 = long_1 + long_1;
	short_1 = short_1;
	short_2 = short_1 * short_2;
	int_2 = v__csi_truecolor_arg_get();

	float_1 = float_1 + float_1;
	short_4 = short_1 + short_3;
	if(1)
	{
	}
	int_2 = int_3 + int_2;
	int_1 = int_1 + int_4;
	int_1 = int_1 + int_5;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 + double_1;
	double_1 = double_2 * double_2;
	return unsigned_int_1;
}
unsigned int v__handle_esc_csi_truecolor_cmy( double parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float_1 = float_1 + float_2;
	v__approximate_truecolor_rgb(int_1,int_2,int_2,int_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	int_3 = v__csi_truecolor_arg_get();

	long_3 = long_1 * long_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1;
	return unsigned_int_1;
}
void v__approximate_truecolor_rgb( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			int_1 = int_1 + int_1;
			if(1)
			{
				double_2 = double_2 + double_1;
			}
		}
	}
	int_1 = v_termio_textgrid_get(double_1);

}
int v__csi_truecolor_arg_get()
{
	int int_1 = 1;
	return int_1;
}
double v__handle_esc_csi_truecolor_rgb( char parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short_1 = short_2;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = v__csi_truecolor_arg_get();

		v__approximate_truecolor_rgb(int_1,int_1,int_2,int_1);

		int_4 = int_2 * int_3;
		char_3 = char_2 * char_2;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
	}
	return double_3;
}
unsigned int v__handle_esc_csi_color_set( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = v__csi_arg_get();

	v_termpty_reset_att();

	double_1 = v__handle_esc_csi_truecolor_rgb(char_1,double_1);

	int_1 = int_1;
	double_2 = double_2 + double_1;
	return unsigned_int_1;
	unsigned_int_2 = v__handle_esc_csi_truecolor_cmy(double_3,char_1);

	unsigned_int_2 = v__handle_esc_csi_truecolor_cmyk(float_1,float_2);

}
void v_termpty_cursor_copy( float parameter_1,short parameter_2)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		int_2 = int_1 + int_1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_3 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		int_3 = int_3;
		long_1 = long_2;
	}
}
float v__switch_to_alternative_screen( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		float float_2 = 1;
		v_termpty_screen_swap(int_1);

		float_2 = float_1 * float_1;
	}
	return float_1;
}
short v__move_cursor_to_origin( char parameter_1)
{
	short short_2 = 1;
	if(1)
	{
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char_1 = char_1 * char_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_1 = int_1 * int_2;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_1 = 1;
		short short_3 = 1;
		float_3 = float_1 * float_2;
		short_3 = short_1 + short_2;
	}
	return short_2;
}
long v__pty_size( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_1;
	char_2 = char_1 * char_2;
	char_1 = char_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	return long_1;
}
char v__limit_coord( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	int_3 = int_2 + int_2;
	int_1 = int_2 + int_2;
	float_2 = float_1 + float_1;
	int_3 = int_4 + int_2;
	return char_2;
}
short v__check_screen_info( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		short_2 = short_1 * short_2;
		float_1 = float_1 + float_1;
		double_2 = double_1 + double_1;
		int_1 = int_2;
		if(1)
		{
			float float_2 = 1;
			v_termpty_text_save_top(int_1,unsigned_int_2,double_2);

			v_termpty_cells_clear(int_2,long_1,int_3);

			float_1 = float_2;
		}
		double_3 = double_1 * double_1;
	}
	return short_1;
}
short v__termpty_line_rewrap( long parameter_1,int parameter_2,int parameter_3,short parameter_4,double parameter_5)
{
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short_1 = v__check_screen_info(long_1,long_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_1;
	char_1 = char_1 * char_2;
	return short_2;
}
void v__backlog_remove_latest_nolock( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	v_termpty_save_free(char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		v_verify_beacon(float_1,int_1);

		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	char_2 = char_2 * char_1;
	int_2 = int_2 + int_1;
	int_2 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
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
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double_1 = double_1 + double_1;
			int_3 = int_1 + int_2;
			int_1 = int_1 * int_3;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			double_4 = double_2 + double_3;
			if(1)
			{
			}
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			short_2 = short_1 * short_2;
			double_4 = double_1 * double_1;
			if(1)
			{
				int_2 = int_1;
			}
		}
	}
}
char v__termpty_line_is_empty( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
		if(1)
		{
		}
	}
	return char_1;
	double_1 = v__termpty_cell_is_empty(short_3);

}
void v_termpty_screen_swap( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long_2 = long_1 * long_2;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1;
	long_2 = long_1 + long_1;
	double_1 = double_2 * double_1;
	short_3 = short_1 + short_2;
	int_2 = int_1 * int_2;
	long_3 = long_1 + long_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
}
void v_termpty_resize( double parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	char char_5 = 1;
	short short_3 = 1;
	long long_4 = 1;
	int int_8 = 1;
	double double_8 = 1;
	float float_3 = 1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	v_termpty_backlog_lock();

	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		float_2 = float_1 * float_2;
		double_2 = double_1 * double_1;
	}
	char_2 = v__termpty_line_is_empty(short_1,double_1);

	char_3 = char_1;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	v_verify_beacon(float_1,int_2);

	char_2 = char_2;
	int_3 = int_1 + int_3;
	if(1)
	{
		long_3 = long_2 + long_2;
	}
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	v__backlog_remove_latest_nolock(unsigned_int_3);

	v_termpty_backlog_unlock();

	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	int_4 = int_4 * int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4;
			double_1 = double_1 * double_1;
		}
	}
	double_2 = double_3 * double_2;
	if(1)
	{
		double_3 = double_3 + double_2;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		int int_6 = 1;
		double_3 = double_4;
		char_3 = char_1 + char_4;
		int_5 = int_6;
		if(1)
		{
			int_1 = int_5 * int_4;
			float_2 = float_2 * float_2;
			double_2 = double_2 * double_5;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
			if(1)
			{
				int_3 = int_2 * int_4;
			}
			double_1 = double_6 + double_7;
			unsigned_int_5 = unsigned_int_2;
			unsigned_int_3 = unsigned_int_6;
			float_2 = v_termpty_line_length(short_1,int_3);

			double_5 = double_3 + double_1;
			short_2 = short_1 * short_2;
			int_3 = int_1 * int_6;
			double_4 = double_3;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_7 = 1;
		int_1 = int_7 * int_2;
		double_4 = double_2 + double_3;
		char_5 = v__limit_coord(long_2);

		int_7 = int_4;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_2;
	}
	double_5 = double_4 * double_4;
	char_1 = char_4 + char_2;
	long_3 = v__pty_size(long_3);

	double_4 = double_5 * double_1;
	char_1 = char_4;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
	short_3 = short_2 + short_1;
	char_5 = char_5 * char_5;
	v_termpty_screen_swap(int_4);

	long_3 = long_3 * long_1;
	if(1)
	{
		v_termpty_save_extract(long_3);

		double_3 = double_6 + double_4;
	}
	short_2 = v__termpty_line_rewrap(long_2,int_4,int_5,short_1,double_4);

	double_7 = double_5 * double_2;
	float_2 = float_2 * float_2;
	float_1 = float_1 * float_1;
	v_termpty_resize_tabs(long_4,int_2,int_8);

	double_4 = double_5 * double_7;
	double_8 = double_1 * double_1;
	float_3 = float_3 + float_1;
	long_2 = long_3 * long_3;
	double_6 = double_4 * double_1;
}
char v_termio_win_get()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short_2 = short_1 + short_2;
	int_1 = int_1 + int_1;
	return char_1;
}
long v__handle_esc_csi_reset_mode( int parameter_1,short parameter_2,char parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char_1 = v_termio_win_get();

	short_1 = v__move_cursor_to_origin(char_2);

	v_termpty_cursor_copy(float_1,short_2);

	float_3 = float_1 + float_2;
	v_termpty_clear_screen(short_1,short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = v__csi_arg_get();

	float_2 = v__switch_to_alternative_screen(short_2,int_1);

	long_2 = long_1 + long_2;
	return long_3;
	v_termpty_resize(double_1,int_1,int_1);

	v_termpty_reset_state(int_2);

}
double v__handle_esc_csi_cursor_pos_set( float parameter_1,float parameter_2,float parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	char_1 = v__csi_arg_get();

	int_1 = int_1 * int_2;
	float_2 = float_1 + float_2;
	int_1 = int_2;
	double_3 = double_1 * double_2;
	double_1 = double_1 * double_4;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double_6 = double_1 * double_5;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 * float_2;
		if(1)
		{
			float float_4 = 1;
			float_3 = float_4;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_1 = int_3 + int_4;
	}
	unsigned_int_2 = unsigned_int_2;
	char_2 = char_2 + char_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		double_6 = double_3 + double_1;
		if(1)
		{
			double_4 = double_5;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	unsigned_int_3 = unsigned_int_3;
	return double_7;
}
void v_termpty_text_scroll_rev( unsigned int parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_2;
	float_1 = float_1 + float_1;
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3;
		int_1 = int_1 * int_1;
	}
	double_1 = double_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = short_1;
		if(1)
		{
			v_termio_scroll(short_2,int_1,int_1,int_1);

			double_3 = double_1 * double_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			double_1 = double_2 * double_3;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char_4 = char_2 + char_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_5 = 1;
			short short_3 = 1;
			v_termpty_cells_clear(int_2,long_1,int_2);

			double_1 = double_3 * double_1;
			int_5 = int_3 * int_4;
			short_1 = short_3;
		}
		if(1)
		{
			int int_6 = 1;
			int_4 = int_3 * int_6;
		}
	}
}
void v_termpty_clear_line( int parameter_1,long parameter_2,int parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	long_1 = long_1 * long_1;
	int_1 = int_1 * int_2;
	float_1 = float_1 + float_2;
	char_1 = char_1 * char_2;
	double_1 = double_1 + double_2;
	double_2 = double_2 + double_1;
	double_2 = double_2 * double_1;
	float_4 = float_3 * float_2;
	double_5 = double_3 + double_4;
	v_termpty_cells_clear(int_1,long_2,int_3);

	short_1 = short_1 + short_1;
	v_termio_content_change(char_2,float_3,short_2,int_1,-1 );

	double_5 = double_3 + double_3;
	double_1 = double_3 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "=") < 0)
	{
		long_2 = long_2 * long_1;
	}
	int_4 = int_2 * int_2;
	float_4 = float_4 * float_1;
}
void v_termpty_clear_screen( short parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "_") < 0)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	v_termpty_cells_clear(int_1,long_1,int_1);

	unsigned_int_2 = unsigned_int_1;
	v_termio_content_change(char_1,float_1,short_1,int_2,-1 );

	int_1 = int_3 + int_2;
	long_2 = long_2 + long_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	v_termpty_clear_line(int_3,long_2,int_3);

}
void v_termpty_cell_codepoint_att_fill( float parameter_1,int parameter_2,double parameter_3,float parameter_4,int parameter_5)
{
	short short_1 = 1;
	int int_1 = 1;
	short_1 = short_1;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_1 * double_1;
	}
}
long v__termpty_charset_trans( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
		}
	}
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "ST") < 0)
	{
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_2 = float_3;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			float float_4 = 1;
			float_1 = float_4;
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
		}
	}
	return long_1;
}
void v_termio_content_change( char parameter_1,float parameter_2,short parameter_3,int parameter_4,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_2;
	int_2 = int_1 + int_1;
	long_1 = long_2 + long_3;
	double_2 = double_1 + double_1;
	char_1 = char_1 + char_2;
	char controller4vul_1707[3];
	fgets(controller4vul_1707 ,3 ,stdin);
	if( strcmp( controller4vul_1707, "3M") < 0)
	{
		char char_3 = 1;
		double double_3 = 1;
		int_3 = v__remove_links(unsigned_int_1,int_2,uni_para);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_4 = int_4;
		char_1 = char_3 * char_2;
		double_4 = double_3 + double_1;
		double_3 = double_2 * double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_3 = 1;
			long_1 = long_2;
			if(1)
			{
				double_2 = double_1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
			}
			char_3 = char_1 * char_1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		}
	}
	if(1)
	{
	}
	char_5 = char_2 * char_4;
	short_3 = short_1 + short_2;
	int_2 = int_1 * int_4;
	float_1 = float_1;
	if(1)
	{
		double double_5 = 1;
		double_4 = double_5 * double_5;
		long_2 = long_2 + long_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_1 = long_4;
		int_1 = int_4 + int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_5 = 1;
			int int_6 = 1;
			unsigned_int_4 = unsigned_int_2;
			if(1)
			{
				long long_5 = 1;
				long_2 = long_5 + long_4;
				unsigned_int_1 = unsigned_int_4;
			}
			int_5 = int_4 + int_4;
			int_4 = int_6 + int_4;
		}
	}
	if(1)
	{
		int int_7 = 1;
		short_1 = short_1 * short_2;
		double_1 = double_1 + double_2;
		int_4 = int_7 * int_3;
		float_1 = float_1;
		int_3 = int_1;
		if(1)
		{
			short_3 = short_2 + short_1;
		}
	}
}
void v_termpty_text_append( int parameter_1,unsigned int parameter_2,int parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	long_1 = long_2;
	int_3 = int_1 * int_2;
	int_5 = int_3 * int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char_1 = char_1;
	}
	int_6 = int_2 + int_5;
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_4 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			double_1 = double_1 + double_1;
			long_1 = long_2 * long_3;
			unsigned_int_3 = unsigned_int_3;
			char_1 = char_2 * char_2;
			int_4 = int_1;
			short_1 = short_2;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_2 = int_2;
			}
		}
		char_3 = char_1 + char_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		}
		char controller4vul_1705[3];
		fgets(controller4vul_1705 ,3 ,stdin);
		if( strcmp( controller4vul_1705, "k`") < 0)
		{
			char controller4vul_1706[2];
			fgets(controller4vul_1706 ,2 ,stdin);
			if( strcmp( controller4vul_1706, "q") < 0)
			{
				v_termio_content_change(char_1,float_1,short_3,int_5,uni_para);

				unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
			}
			double_1 = double_2 * double_2;
		}
		double_1 = double_1 + double_2;
		if(1)
		{
			double_2 = double_1;
			float_2 = float_2 + float_2;
		}
		int_1 = int_1 + int_6;
		if(1)
		{
			int_5 = int_5 + int_2;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		}
		if(1)
		{
			double double_3 = 1;
			int_5 = int_3 + int_6;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
			if(1)
			{
				double_3 = double_1 * double_2;
			}
			if(1)
			{
				double_3 = double_2 + double_2;
			}
			if(1)
			{
				int int_7 = 1;
				char_2 = char_2 + char_4;
				int_7 = int_5 * int_2;
			}
		}
		if(1)
		{
			char char_5 = 1;
			long long_4 = 1;
			char_1 = char_3;
			char_5 = char_4 * char_3;
			if(1)
			{
				unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
			}
			unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
			if(1)
			{
				long_3 = long_2 * long_2;
				unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
			}
			long_1 = long_1 * long_4;
		}
	}
}
char v__csi_arg_get()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short_3 = short_1 + short_2;
	double_1 = double_1 + double_1;
	float_2 = float_1 + float_2;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	return char_1;
}
unsigned int v__handle_esc_csi( short parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	v_termpty_text_append(int_1,unsigned_int_1,int_2,uni_para);

	int_1 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	return unsigned_int_1;
}
char v__safechar( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	double_2 = double_1 + double_2;
	return char_1;
}
void v__handle_esc( int parameter_1,int parameter_2,double parameter_3)
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
	float float_3 = 1;
	char char_1 = 1;
	short short_4 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short short_5 = 1;
	int int_4 = 1;
	char char_2 = 1;
	short short_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short short_7 = 1;
	long long_7 = 1;
	long long_8 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_4 = 1;
	long long_9 = 1;
	float float_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	v_termpty_text_scroll_test(double_1,short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_3 = float_2 * float_2;
	if(1)
	{
	}
	char_1 = v__safechar(double_1);

	short_1 = short_2 + short_4;
	unsigned_int_1 = v__handle_esc_csi(short_4,char_1,int_1,-1 );

	double_3 = double_2 * double_1;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	v_termpty_reset_state(int_3);

	short_3 = short_5 * short_4;
	int_4 = int_4 + int_3;
	v_termpty_text_scroll_rev_test(long_3,char_2);

	int_4 = int_2;
	short_5 = short_6 + short_2;
	short_6 = short_1 * short_4;
	int_3 = int_5 + int_6;
	char_3 = char_2 * char_2;
	float_3 = float_2;
	long_5 = long_1 * long_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	short_4 = short_2 + short_2;
	long_6 = long_5 + long_1;
	v_termpty_clear_screen(short_1,short_4);

	short_1 = short_2 + short_7;
	long_8 = long_5 * long_7;
	if(1)
	{
		int_4 = int_5 + int_1;
	}
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	double_4 = double_4 * double_5;
	double_6 = double_5 * double_6;
	if(1)
	{
	}
	long_8 = v__handle_esc_xterm(double_3,float_4,char_1);

	int_3 = int_6 + int_6;
	char_1 = char_2 + char_1;
	if(1)
	{
	}
	long_9 = long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	float_1 = v__handle_esc_dcs(char_1,unsigned_int_2,char_2);

	v_termpty_cell_codepoint_att_fill(float_5,int_7,double_1,float_5,int_7);

	int_6 = int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	int_7 = int_5;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
		short_6 = short_6 + short_4;
		long_1 = long_5 * long_5;
		float_3 = float_5;
		if(1)
		{
			int_4 = int_4 * int_5;
		}
		float_3 = float_1 * float_2;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
			long_3 = long_5 + long_2;
			long_2 = long_7 * long_6;
		}
	}
	if(1)
	{
	}
	v_termpty_cursor_copy(float_4,short_4);

	float_2 = float_1 * float_1;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_3;
	int_5 = int_1 + int_7;
	unsigned_int_1 = v__handle_esc_terminology(long_2,unsigned_int_1,int_5);

	int_7 = int_5 + int_6;
	double_6 = double_3 * double_1;
}
void v_termpty_cell_fill( unsigned int parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_1 = 1;
			float float_2 = 1;
			int_1 = int_2;
			float_1 = float_1 + float_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_3 = 1;
			unsigned_int_2 = unsigned_int_2;
			int_1 = int_2 + int_3;
		}
	}
}
void v_termpty_cells_fill( short parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char_3 = char_1 + char_2;
	double_3 = double_1 * double_2;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_4 * long_4;
	v_termpty_cell_fill(unsigned_int_3,double_4,double_4,int_1);

}
void v_termpty_cells_clear( int parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_termpty_cells_fill(short_1,unsigned_int_1,char_1,int_1);

	int_1 = int_2;
}
float v__tooltip_del(float parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	return float_1;
}
double v__tooltip_content(char parameter_2,long parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = v_media_add(unsigned_int_1,char_1,long_1,int_1,int_2,-1 );

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	return double_2;
}
void v_MD5Final( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char_1 = char_1 + char_2;
	v_byteReverse(double_1,short_1);

	char_1 = char_1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
		int_1 = int_2 + int_3;
		double_3 = double_2 * double_3;
	}
	if(1)
	{
		int_1 = int_3;
	}
	float_2 = float_1 + float_1;
	float_2 = float_2 * float_1;
	long_1 = long_1 * long_2;
	double_2 = double_3 + double_1;
	double_4 = double_4 + double_3;
	int_1 = int_3 + int_2;
	double_5 = double_3 + double_2;
	v_MD5Transform(unsigned_int_3,long_1);

}
void v_MD5Transform( unsigned int parameter_1,long parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	char char_4 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short short_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	char_2 = char_1 + char_2;
	long_1 = long_1 + long_2;
	int_2 = int_1;
	float_1 = float_1 * float_1;
	int_1 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1;
	char_1 = char_3;
	long_3 = long_3 * long_1;
	int_2 = int_3 + int_1;
	int_1 = int_3 * int_1;
	double_1 = double_2;
	long_1 = long_2 * long_2;
	int_4 = int_1;
	char_4 = char_2;
	long_4 = long_1 * long_2;
	short_1 = short_1 * short_2;
	long_4 = long_3;
	long_5 = long_2 + long_3;
	double_2 = double_2 + double_1;
	float_1 = float_1 + float_1;
	long_2 = long_6 + long_4;
	char_2 = char_5 * char_6;
	double_2 = double_1 + double_3;
	int_3 = int_3 + int_4;
	double_3 = double_2 * double_2;
	long_2 = long_5;
	long_6 = long_4 * long_4;
	short_4 = short_1 + short_3;
	long_2 = long_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_4;
	double_2 = double_1 * double_1;
	double_5 = double_3 + double_4;
	char_4 = char_2;
	int_5 = int_6;
	int_6 = int_4 * int_5;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_2;
	long_1 = long_6 + long_2;
	long_5 = long_5 * long_6;
	unsigned_int_5 = unsigned_int_7 * unsigned_int_6;
	long_5 = long_1;
	short_4 = short_4 * short_5;
	float_3 = float_2 + float_3;
	long_2 = long_2 + long_6;
	double_2 = double_4 * double_6;
	double_2 = double_4 * double_4;
	double_7 = double_2 * double_2;
	char_1 = char_4 + char_2;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_8;
	unsigned_int_8 = unsigned_int_2;
	float_6 = float_4 + float_5;
	unsigned_int_1 = unsigned_int_7 * unsigned_int_3;
	short_3 = short_5 * short_6;
	unsigned_int_8 = unsigned_int_1 * unsigned_int_6;
	int_2 = int_6 * int_5;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_5;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_8;
	double_5 = double_2 + double_1;
	double_1 = double_7 + double_1;
	double_7 = double_3;
	short_4 = short_6 * short_4;
	int_7 = int_1 + int_2;
	int_5 = int_1 + int_7;
	char_6 = char_1 + char_2;
	short_2 = short_6;
	unsigned_int_6 = unsigned_int_9 * unsigned_int_9;
	int_2 = int_5;
	short_6 = short_2 + short_3;
}
void v_byteReverse( double parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_2;
}
void v_MD5Update( unsigned int parameter_1,short parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_byteReverse(double_1,short_1);

	v_MD5Transform(unsigned_int_2,long_1);

	char_2 = char_1 * char_2;
	double_2 = double_1;
	float_2 = float_1 + float_1;
	short_1 = short_2 + short_1;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	short_3 = short_2 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2 * double_2;
	short_2 = short_4 + short_4;
	short_2 = short_4 + short_2;
	int_3 = int_2;
	char_3 = char_3 + char_1;
	char_5 = char_3 + char_4;
	double_3 = double_2 + double_1;
	double_6 = double_4 * double_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_1 = int_2 + int_2;
	int_2 = int_2 * int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
}
void v_MD5Init( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	int_4 = int_1 * int_3;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
}
void v_gravatar_tooltip( long parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_MD5Update(unsigned_int_1,short_1,float_1);

	double_1 = v__tooltip_content(char_1,long_1);

	float_1 = float_1;
	float_2 = v__tooltip_del(float_1);

	double_2 = double_3;
	v_MD5Final(int_1,int_2);

	float_1 = float_1 + float_3;
	double_4 = double_3;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	v_MD5Init(unsigned_int_1);

	int_3 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	char_2 = char_1 * char_1;
	double_4 = double_5;
	long_3 = long_2 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char char_4 = 1;
		double double_6 = 1;
		char_4 = char_3 * char_2;
		double_6 = double_4;
	}
	long_2 = long_2 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	short_1 = short_1 + short_3;
}
unsigned int v__cb_link_drag_done(float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_3 = int_1 * int_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	long_1 = long_1 * long_2;
	return unsigned_int_1;
}
double v__cb_link_drag_accept(char parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_1 * int_2;
	double_3 = double_1 + double_2;
	char_2 = char_1 + char_2;
	return double_3;
}
char v__cb_link_drag_move(long parameter_2,float parameter_3,float parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double_1 = double_2;
	short_2 = short_1 + short_1;
	float_1 = float_1 * float_2;
	int_1 = int_1 * int_1;
	long_1 = long_1;
	if(1)
	{
		if(1)
		{
			int_1 = int_1 * int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	return char_1;
}
long v__cb_link_icon_new(int parameter_2,double parameter_3,long parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	short_2 = short_1 + short_1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	char_1 = char_2;
	int_1 = int_1 + int_1;
	return long_3;
}
float v__cb_link_move(float parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_3 = v__cb_link_drag_done(float_1);

	int_3 = int_3 + int_4;
	double_1 = v__cb_link_drag_accept(char_1,short_1);

	short_1 = short_1 + short_1;
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_5 = 1;
		int int_6 = 1;
		short_2 = short_2 * short_2;
		long_2 = long_1 * long_2;
		char_1 = v__cb_link_drag_move(long_3,float_1,float_2,double_2);

		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
		if(1)
		{
			long long_4 = 1;
			long_3 = long_4;
		}
		if(1)
		{
			double double_3 = 1;
			double_2 = double_1 * double_3;
		}
		int_3 = int_1 * int_3;
		long_2 = v__cb_link_icon_new(int_1,double_2,long_1);

		int_6 = int_2 + int_5;
	}
	return float_2;
}
float v__cb_link_up_delay()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	unsigned_int_1 = v__activate_link(char_1,unsigned_int_2);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	return float_1;
}
double v__cb_link_up(short parameter_2,float parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float_1 = v__cb_link_up_delay();

	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		long long_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		long_1 = long_1;
		float_1 = float_2 * float_1;
		long_1 = long_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
			}
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				double_1 = double_2 * double_3;
			}
		}
		double_1 = double_1 * double_4;
	}
	return double_1;
}
void v_term_focus( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
	}
	double_3 = double_3 * double_2;
	long_1 = v__term_is_focused(int_1);

	short_1 = short_2;
	float_1 = float_1 * float_1;
}
long v__term_is_focused( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "R") > 0)
	{
	}
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	float_1 = float_2;
	return long_1;
}
void v_term_unfocus( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short_1 = short_2;
	double_1 = double_1 * double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "rE") < 0)
	{
	}
	double_1 = double_1 + double_2;
	char_1 = char_1 + char_2;
	long_1 = v__term_is_focused(int_1);

	double_2 = double_3;
}
float v__cb_ctxp_del(short parameter_2,double parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	v_term_unfocus(short_1);

	long_1 = long_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 * float_1;
	v_term_focus(int_1);

	double_1 = double_1 + double_1;
	return float_1;
}
char v__cb_ctxp_dismissed(float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	double_1 = double_4 + double_1;
	return char_1;
}
double v__cb_ctxp_link_copy(long parameter_2,int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long_1 = v__take_selection_text(int_1,double_1,char_1,uni_para);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_1 + int_2;
	int_2 = int_3 * int_3;
	double_2 = double_2;
	float_2 = float_1 * float_2;
	short_1 = short_1;
	return double_1;
}
float v__screen_visual_bounds( int parameter_1)
{
	float float_3 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_3 = double_1 + double_2;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_2;
	}
	return float_3;
}
int v__draw_cell( double parameter_1,long parameter_2,char parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int_3 = int_1 + int_2;
	double_2 = double_1 * double_1;
	float_1 = float_1;
	int_1 = int_2 * int_3;
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 * double_2;
	}
	short_2 = short_1 * short_1;
	short_1 = short_1 * short_2;
	int_2 = int_1 * int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
		if(1)
		{
			double_5 = double_4 * double_2;
		}
	}
	if(1)
	{
		double double_6 = 1;
		double_2 = double_6 * double_4;
	}
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		double double_7 = 1;
		double double_8 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_2 = short_1;
		double_5 = double_7 + double_8;
		float_1 = float_1 + float_2;
		int_1 = int_1 + int_4;
		int_5 = int_2 * int_4;
		short_2 = short_2 * short_2;
		unsigned_int_3 = unsigned_int_3;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		double double_9 = 1;
		double_9 = double_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_3 + short_1;
	}
	if(1)
	{
		if(1)
		{
			short short_4 = 1;
			short_1 = short_4 + short_1;
		}
		if(1)
		{
			short short_5 = 1;
			short_2 = short_2 * short_5;
		}
	}
	if(1)
	{
		int_3 = int_5 * int_3;
	}
	return int_3;
}
unsigned int v__draw_line( double parameter_1,short parameter_2,float parameter_3,int parameter_4,double parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		int_1 = v__draw_cell(double_1,long_1,char_1,short_2);

		float_1 = float_1 * float_2;
	}
	return unsigned_int_1;
}
float v_termpty_backlog_length( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 * short_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_1;
	char_1 = char_1 * char_1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_2;
	double_1 = double_2;
	float_3 = float_1 * float_3;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_5;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
		float_2 = float_3 + float_1;
	}
	short_2 = short_2 + short_1;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_7;
	}
	short_4 = short_1 * short_3;
	if(1)
	{
		float_2 = float_1 * float_3;
	}
	int_2 = int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
	}
	int_3 = int_1;
	int_1 = int_3 + int_3;
	char_3 = char_3 + char_1;
	v_verify_beacon(float_2,int_3);

	double_1 = double_2 + double_1;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
	long_2 = long_1 * long_2;
	return float_1;
}
char v_termio_pty_get()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 + double_2;
	return char_1;
}
int v_termio_textgrid_get( double parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_1;
	float_1 = float_1 * float_1;
	return int_1;
}
unsigned int v_miniview_colors_get( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_1 = int_3 * int_1;
		int_1 = v_termio_textgrid_get(double_1);

		int_4 = int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1 * double_2;
	}
	return unsigned_int_3;
}
char v__deferred_renderer()
{
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	long long_3 = 1;
	short short_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_10 = 1;
	char_1 = v_termpty_cellrow_get(int_1,int_1,float_1);

	int_2 = int_2 + int_3;
	double_1 = double_1 + double_1;
	double_3 = double_2 * double_2;
	char_2 = char_1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_1 = int_3 * int_3;
	float_1 = v_termpty_backlog_length(short_1);

	char_2 = char_2 * char_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_1 = v__draw_line(double_4,short_2,float_2,int_1,double_2);

	long_2 = long_1 * long_2;
	int_5 = int_4 + int_4;
	double_5 = double_4 + double_1;
	int_4 = int_1 * int_3;
	if(1)
	{
	}
	float_1 = float_3 + float_3;
	double_3 = double_1;
	char_4 = char_2 + char_3;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	double_5 = double_5 + double_6;
	long_1 = long_2 + long_3;
	if(1)
	{
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		char_2 = char_3 + char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_3;
		if(1)
		{
			int_2 = int_4 * int_3;
		}
		float_2 = float_2 * float_3;
	}
	short_2 = short_3;
	double_8 = double_7 * double_2;
	float_2 = float_2;
	if(1)
	{
		char_1 = v_termio_pty_get();

		double_1 = double_4 * double_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	}
	float_3 = float_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
		char char_5 = 1;
		double double_9 = 1;
		short_4 = short_4 + short_1;
		char_5 = char_5;
		if(1)
		{
			double_6 = double_1 * double_2;
			double_1 = double_2 * double_9;
		}
		if(1)
		{
			if(1)
			{
				int int_7 = 1;
				double_1 = double_9 + double_7;
				short_2 = short_3 + short_4;
				unsigned_int_4 = v_miniview_colors_get(int_6,unsigned_int_3);

				int_1 = v_termio_scroll_get(unsigned_int_5);

				float_3 = v__screen_visual_bounds(int_3);

				int_2 = int_7;
				int_7 = int_5 * int_6;
			}
			if(1)
			{
				float_3 = float_3 + float_1;
				unsigned_int_2 = unsigned_int_3;
			}
		}
	}
	if(1)
	{
		short_4 = short_1;
	}
	int_4 = int_2 + int_6;
	int_4 = int_1;
	double_7 = double_10;
	int_5 = int_2 + int_6;
	return char_3;
}
void v__queue_render( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char_1 = v__deferred_renderer();

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
}
void v_miniview_redraw( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	v__queue_render(long_3);

	float_3 = float_1 * float_2;
}
double v__block_obj_del( double parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	char_1 = v__smart_media_del(int_1,double_1);

	short_2 = short_1 + short_2;
	short_2 = short_2 * short_1;
	return double_2;
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
float v__termpty_is_dblwidth_get( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
	int_1 = v__termpty_is_dblwidth_slow_get(short_1,int_1);

}
short v_term_preedit_str_get( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int_1 = int_2;
	int_1 = int_3 * int_2;
	if(1)
	{
	}
	char_1 = char_1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	return short_1;
}
double v_media_get( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	return double_1;
}
unsigned int v__smart_media_clicked(long parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	int int_1 = 1;
	double_1 = v_media_get(float_1);

	short_1 = v_termio_config_get(long_1);

	double_4 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	float_2 = float_2 + float_2;
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long_3 = long_2 * long_1;
			long_4 = v_media_src_type_get(int_1);

			char_2 = char_1 * char_1;
			if(1)
			{
				double double_6 = 1;
				if(1)
				{
					double double_5 = 1;
					short_1 = short_1;
					double_5 = double_5 * double_5;
					if(1)
					{
						long_3 = long_1 * long_1;
					}
					if(1)
					{
						int int_2 = 1;
						int int_3 = 1;
						int_2 = int_2 + int_3;
						double_6 = double_2 * double_4;
						if(1)
						{
							double double_7 = 1;
							int int_4 = 1;
							unsigned int unsigned_int_2 = 1;
							unsigned int unsigned_int_3 = 1;
							unsigned int unsigned_int_4 = 1;
							double_4 = double_7 * double_1;
							int_2 = int_4;
							unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
						}
					}
				}
				double_2 = double_1 * double_6;
			}
		}
	}
	double_1 = double_1 * double_4;
	return unsigned_int_1;
}
short v_media_control_get( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	return short_1;
}
void v__smart_media_stop(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
}
char v__smart_media_pause(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return char_1;
}
int v__smart_media_play(int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	return int_1;
}
char v__smart_media_del(int parameter_2,double parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	return char_1;
}
void v_media_visualize_set( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 * int_2;
	}
}
void v_media_mute_set( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2;
	}
}
void v_media_volume_set( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	char_1 = char_1;
	double_1 = double_1 + double_2;
}
double v__cb_media_vol(double parameter_2,short parameter_3,long parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	char_1 = char_1 + char_1;
	v_media_volume_set(int_1,double_1);

	char_2 = char_2 * char_3;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	int_5 = int_4 + int_3;
	return double_2;
}
double v__cb_media_pos(unsigned int parameter_2,float parameter_3,int parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	v_media_position_set(short_1,double_1);

	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	double_1 = double_2;
	return double_1;
}
long v__cb_media_pos_drag_stop(double parameter_2,double parameter_3,double parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	int_5 = int_3 + int_4;
	short_1 = short_2;
	short_3 = short_2 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
int v__cb_media_pos_drag_start(unsigned int parameter_2,char parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	v_media_position_set(short_1,double_3);

	double_3 = double_1 + double_3;
	long_3 = long_1 + long_2;
	short_3 = short_1 * short_2;
	return int_1;
}
void v_media_stop( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "D") > 0)
	{
	}
	float_3 = float_1 * float_2;
	double_1 = double_1 * double_2;
}
unsigned int v__cb_media_stop(unsigned int parameter_2,short parameter_3,short parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	v_media_stop(double_1);

	int_2 = int_1 + int_1;
	return unsigned_int_1;
}
int v__cb_media_pause(short parameter_2,double parameter_3,float parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	v_media_play_set(double_1,float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
void v_media_play_set( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		double double_4 = 1;
		double_2 = double_4 * double_2;
		double_1 = double_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short_3 = short_1 + short_2;
		short_4 = short_2 + short_3;
	}
}
double v__cb_media_play(int parameter_2,unsigned int parameter_3,int parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v_media_play_set(double_1,float_1);

	double_2 = double_1 * double_1;
	return double_3;
}
void v_media_position_set( short parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 + long_2;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	short_1 = short_1 + short_2;
	short_1 = short_1;
}
char v__cb_mov_ref(double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	return char_3;
}
char v__cb_mov_progress(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1;
	return char_1;
}
short v__cb_mov_restart()
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_2;
	return short_1;
}
short v__cb_mov_decode_stop(char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	short_1 = v__cb_mov_restart();

	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	return short_2;
}
void v__cb_mov_len_change(float parameter_2)
{
	float float_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
}
char v__cb_mov_frame_resize(long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char_1 = char_1 + char_1;
	char_2 = v__type_mov_calc(double_1,short_1,short_2,float_1,short_3);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "8") < 0)
	{
	}
	int_2 = int_1 * int_2;
	float_2 = float_1 * float_2;
	return char_3;
}
long v__cb_mov_frame_decode(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 + char_1;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	char_1 = v__type_mov_calc(double_1,short_1,short_2,float_1,short_2);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	char_2 = char_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	float_2 = float_2;
	int_1 = int_1 * int_2;
	int_2 = int_1;
	double_2 = double_3;
	return long_3;
}
float v__type_mov_init()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	float float_5 = 1;
	double double_5 = 1;
	long long_2 = 1;
	double double_6 = 1;
	long long_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	double double_8 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_6 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_3 = 1;
	float float_7 = 1;
	float_1 = float_2;
	int_1 = int_1 * int_1;
	short_1 = v__cb_mov_decode_stop(char_1);

	int_3 = int_2 + int_3;
	int_3 = int_2 + int_2;
	double_1 = v__cb_media_play(int_1,unsigned_int_1,int_4);

	int_1 = v__cb_media_pos_drag_start(unsigned_int_1,char_1,int_5);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v__cb_mov_len_change(float_3);

	char_1 = char_1;
	char_2 = v__cb_mov_ref(double_2);

	long_1 = long_1 + long_1;
	float_3 = float_1 * float_2;
	if(1)
	{
		v_media_position_set(short_2,double_1);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		char_1 = char_1 * char_1;
		int_2 = int_1 + int_2;
	}
	double_4 = double_3 + double_1;
	float_2 = float_2 + float_4;
	unsigned_int_5 = unsigned_int_3;
	char_3 = char_2 + char_2;
	float_5 = float_1 * float_4;
	unsigned_int_3 = v__cb_media_stop(unsigned_int_4,short_1,short_2);

	v_media_play_set(double_1,float_5);

	char_3 = char_2 + char_3;
	char_2 = v__cb_mov_progress(double_1);

	double_2 = double_5;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		v_media_mute_set(double_5,long_2);

		unsigned_int_6 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		double_6 = v__cb_media_vol(double_3,short_2,long_3);

		long_2 = long_1 * long_1;
	}
	double_5 = double_7;
	v_media_visualize_set(int_4,double_5);

	unsigned_int_1 = unsigned_int_7 + unsigned_int_2;
	long_4 = v__cb_media_pos_drag_stop(double_8,double_2,double_1);

	long_6 = long_5 + long_4;
	int_5 = int_1 * int_2;
	double_6 = v__cb_media_pos(unsigned_int_5,float_2,int_3);

	double_2 = double_2 + double_3;
	long_6 = v__cb_mov_frame_decode(double_7);

	double_5 = double_8 + double_3;
	double_3 = double_8 * double_6;
	unsigned_int_5 = unsigned_int_8;
	int_6 = v__cb_media_pause(short_1,double_1,float_6);

	float_6 = float_5 + float_4;
	double_3 = double_1 + double_3;
	short_2 = short_2 + short_2;
	double_1 = double_8 * double_8;
	char_1 = char_1 * char_2;
	double_8 = double_7;
	unsigned_int_10 = unsigned_int_9 + unsigned_int_10;
	double_7 = double_6 + double_3;
	unsigned_int_7 = unsigned_int_2;
	if(1)
	{
		int_4 = v_theme_apply(double_5,short_3,unsigned_int_8);

		int_1 = int_6 * int_6;
	}
	if(1)
	{
		char_2 = v__cb_mov_frame_resize(long_2);

		double_7 = double_3 + double_5;
	}
	return float_7;
}
void v__cb_edje_preloaded(long parameter_2,unsigned int parameter_3,int parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "-") > 0)
	{
	}
	double_3 = double_1 * double_2;
	short_1 = short_1 + short_1;
}
float v__type_edje_init( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = float_1 * float_2;
	float_2 = float_2 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v__cb_edje_preloaded(long_1,unsigned_int_3,int_1);

	unsigned_int_1 = unsigned_int_2;
	char_1 = char_2;
	short_2 = short_1 * short_1;
	int_2 = int_1 * int_1;
	v_theme_auto_reload_enable(char_3);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	char_2 = char_2 + char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_3 = 1;
			char char_4 = 1;
			char_3 = char_2 * char_2;
			short_1 = short_3;
			char_4 = char_2 * char_4;
		}
	}
	return float_1;
}
short v__type_scale_init( long parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_4 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = v__cb_scale_preloaded(double_1,float_1,-1 );

	long_3 = long_1 + long_2;
	double_1 = double_2 + double_1;
	long_2 = long_4 + long_4;
	short_2 = short_1 + short_2;
	double_1 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_2 = int_1;
	long_6 = long_5 * long_3;
	int_2 = int_2 + int_1;
	double_4 = double_1 * double_4;
	return short_1;
}
int v__cb_img_frame()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	double_1 = double_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_1 = int_2 * int_2;
		if(1)
		{
			char_1 = char_1 * char_2;
		}
		double_2 = double_2 + double_1;
		double_4 = double_3 + double_3;
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "&|") > 0)
		{
			if(1)
			{
				double_1 = double_3 * double_3;
			}
		}
	}
	int_4 = int_1 * int_3;
	char_3 = char_2 + char_2;
	char_2 = char_1 * char_1;
	return int_3;
}
unsigned int v__type_img_anim_handle( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	return unsigned_int_1;
	int_3 = v__cb_img_frame();

}
short v__cb_img_preloaded(double parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return short_2;
}
unsigned int v__type_img_init( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	char_1 = char_1 * char_1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1;
	int_1 = int_1 * int_1;
	long_1 = long_2;
	double_4 = double_3 + double_1;
	short_1 = v__cb_img_preloaded(double_3,long_2);

	unsigned_int_4 = v__type_img_anim_handle(long_1);

	double_1 = double_2 + double_2;
	char_2 = char_2 * char_3;
	int_1 = int_2 + int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	return unsigned_int_1;
}
float v__url_compl_cb(int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = v__type_mov_init();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1;
	char_1 = char_1 * char_2;
	int_1 = int_1;
	short_1 = short_1 + short_4;
	int_1 = int_2 + int_3;
	short_2 = short_5 + short_6;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	short_2 = v__type_scale_init(long_1);

	int_3 = int_1 * int_3;
	int_3 = int_1 + int_1;
	double_1 = double_2;
	int_4 = int_5;
	long_2 = long_2;
	double_3 = double_1 * double_2;
	float_1 = v__type_edje_init(float_1);

	float_1 = float_1 + float_2;
	double_2 = double_2;
	unsigned_int_3 = v__type_img_init(long_2);

	long_3 = long_2 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	int_2 = int_3 * int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	return float_2;
	char_2 = v__smart_calculate(unsigned_int_2,-1 );

}
float v__url_prog_cb(int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short_3 = short_1 * short_2;
	long_3 = long_1 + long_2;
	char_1 = char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		long long_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		char_2 = char_3;
		if(1)
		{
			char_2 = char_4 + char_1;
		}
		long_2 = long_3 * long_4;
		char_6 = char_4 + char_5;
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short_5 = short_4 + short_3;
			unsigned_int_1 = unsigned_int_1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			char_6 = char_4 + char_3;
		}
	}
	return float_1;
}
float v__type_thumb_calc( double parameter_1,long parameter_2,long parameter_3,unsigned int parameter_4,float parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		float_4 = float_1 * float_3;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		int_2 = int_1 * int_1;
		short_3 = short_1 + short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
			}
		}
		if(1)
		{
			char char_3 = 1;
			int int_3 = 1;
			char_3 = char_1 * char_2;
			int_1 = int_3;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		float_4 = float_4 + float_2;
		long_1 = long_2;
		double_1 = double_1 + double_1;
	}
	unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
	char_1 = char_1 * char_2;
	return float_3;
}
char v__type_mov_calc( double parameter_1,short parameter_2,short parameter_3,float parameter_4,short parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_3 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_2;
	float_1 = float_1 * float_2;
	if(1)
	{
		short_1 = short_1 * short_2;
		double_2 = double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		float float_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_5 = 1;
		double_2 = double_1 + double_1;
		double_4 = double_3 * double_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			float float_3 = 1;
			float_4 = float_2 * float_3;
		}
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		if(1)
		{
			double_5 = double_3 + double_1;
			unsigned_int_1 = unsigned_int_3;
			if(1)
			{
				double_5 = double_4 * double_5;
				int_2 = int_2;
				if(1)
				{
					long_1 = long_1 * long_1;
				}
			}
		}
		if(1)
		{
			double double_6 = 1;
			unsigned_int_3 = unsigned_int_3;
			double_3 = double_5 + double_6;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				long long_2 = 1;
				long long_3 = 1;
				unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
				long_3 = long_2 * long_2;
				if(1)
				{
					double_2 = double_6 * double_1;
				}
			}
		}
		if(1)
		{
			long long_4 = 1;
			long_1 = long_4 + long_4;
			float_4 = float_4 * float_4;
		}
		int_4 = int_3 + int_1;
		short_1 = short_1 + short_2;
		char_3 = char_1 * char_2;
		int_5 = int_5 + int_2;
	}
	int_8 = int_6 + int_7;
	short_3 = short_1 + short_3;
	return char_4;
}
void v__type_edje_calc( short parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void v__type_img_calc( unsigned int parameter_1,short parameter_2,int parameter_3,float parameter_4,char parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	long_1 = long_2;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_2 = short_1 + short_2;
		short_2 = short_3 * short_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_10 = 1;
		int_2 = int_1 + int_2;
		if(1)
		{
			char char_1 = 1;
			int_3 = int_2 * int_2;
			char_1 = char_1;
			if(1)
			{
				int int_5 = 1;
				double_1 = double_2;
				int_5 = int_4 * int_4;
				if(1)
				{
					int_1 = int_4;
				}
			}
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_1 * double_2;
			double_3 = double_2 * double_1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				long_1 = long_2 + long_3;
				if(1)
				{
					double_5 = double_3 * double_4;
				}
			}
			if(1)
			{
				float float_1 = 1;
				float_1 = float_1;
				int_3 = int_4 * int_2;
			}
		}
		if(1)
		{
			int_3 = int_3 + int_2;
			long_2 = long_1 + long_3;
		}
		double_7 = double_6 + double_2;
		double_7 = double_6 + double_5;
		double_8 = double_6 * double_8;
		double_9 = double_10;
	}
	int_3 = int_4 + int_3;
	double_8 = double_9 + double_4;
}
char v__cb_scale_preloaded(double parameter_2,float parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char * vul_var;
	int_2 = int_1 * int_1;
	char controller4vul_1723[3];
	fgets(controller4vul_1723 ,3 ,stdin);
	if( strcmp( controller4vul_1723, "+*") < 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 273)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double_1 = double_2;
		unsigned_int_1 = unsigned_int_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ";C") > 0)
	{
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_3 = double_3 + double_2;
		double_4 = double_1;
		float_2 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		double_6 = double_4 + double_5;
	}
	unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
}
int v__type_scale_calc( short parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,float parameter_5,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double double_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = v__cb_scale_preloaded(double_1,float_1,uni_para);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2 + char_3;
		int_1 = int_3;
	}
	if(1)
	{
		double double_3 = 1;
		float float_2 = 1;
		double_2 = double_1;
		if(1)
		{
			double_1 = double_3;
			float_1 = float_1 + float_1;
			if(1)
			{
				long_1 = long_1 + long_1;
				int_4 = int_3 + int_2;
				if(1)
				{
					float_1 = float_2;
				}
			}
		}
		if(1)
		{
			int_2 = int_1 * int_1;
			long_2 = long_1 * long_1;
			if(1)
			{
				unsigned_int_2 = unsigned_int_3;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
				if(1)
				{
					unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
				}
			}
		}
		if(1)
		{
			short_1 = short_1;
			double_1 = double_3 + double_4;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		long_2 = long_2;
		double_4 = double_1;
		float_2 = float_1;
	}
	if(1)
	{
		long long_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int_5 = int_5 + int_1;
		int_4 = int_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1;
		}
		if(1)
		{
			long long_4 = 1;
			long_4 = long_3 + long_1;
		}
		if(1)
		{
			long long_5 = 1;
			long long_6 = 1;
			short short_2 = 1;
			double double_7 = 1;
			int_4 = int_4;
			unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
			long_6 = long_5 * long_3;
			long_2 = long_1 * long_5;
			double_6 = double_2 + double_5;
			double_5 = double_4 * double_1;
			short_1 = short_2 * short_2;
			char_1 = char_3 * char_1;
			double_1 = double_4 * double_7;
		}
		int_4 = int_1 * int_1;
		double_5 = double_1 * double_6;
	}
	if(1)
	{
		int_3 = int_5 * int_2;
		char_1 = char_1 * char_1;
	}
	unsigned_int_5 = unsigned_int_2;
	char_3 = char_1 + char_1;
	return int_5;
}
short v__unsmooth_timeout()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_1 = v__type_scale_calc(short_1,int_1,double_2,unsigned_int_1,float_1,-1 );

	int_2 = int_2 * int_2;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_3 = short_3 + short_4;
		if(1)
		{
			int_1 = int_1 * int_1;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 + long_2;
		}
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_2 + float_1;
	}
	return short_2;
}
float v__smooth_handler( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	int_4 = int_1 + int_1;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			long long_1 = 1;
			short short_3 = 1;
			short short_4 = 1;
			short_1 = short_1 + short_2;
			short_2 = v__unsmooth_timeout();

			long_1 = long_1 * long_1;
			if(1)
			{
				double_3 = double_2 * double_1;
				if(1)
				{
					short_1 = short_2 + short_1;
				}
			}
			if(1)
			{
				double double_4 = 1;
				double_4 = double_1 + double_1;
			}
			if(1)
			{
				short_3 = short_2 * short_2;
			}
			short_3 = short_4 + short_2;
		}
	}
	if(1)
	{
		int int_5 = 1;
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_4 = char_3 * char_1;
		}
		int_2 = int_4 * int_5;
	}
	return float_1;
}
char v__smart_calculate( unsigned int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	char controller4vul_1722[2];
	fgets(controller4vul_1722 ,2 ,stdin);
	if( strcmp( controller4vul_1722, "=") > 0)
	{
		int_1 = v__type_scale_calc(short_1,int_1,double_1,unsigned_int_1,float_1,uni_para);

	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		int_3 = int_2 + int_1;
	}
	if(1)
	{
		char_2 = char_4 * char_4;
	}
	float_1 = float_2 + float_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_4 = int_4 + int_3;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_6;
	short_2 = short_2 + short_2;
	short_3 = short_2 * short_2;
	char_2 = char_3;
	float_2 = float_1 * float_1;
	char_3 = char_2;
	double_2 = double_2 * double_2;
	int_3 = int_2 + int_5;
	char_4 = char_5;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_2;
	}
	if(1)
	{
		double_2 = double_2 * double_2;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_5;
	}
	return char_6;
}
char v__smart_move( char parameter_1,long parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return char_1;
}
void v__smart_resize( short parameter_1,short parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short_2 = short_1 * short_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	float_3 = float_1 * float_2;
}
long v__smart_del( unsigned int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long_3 = long_1 + long_2;
		long_1 = long_4 * long_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	if(1)
	{
		int_2 = int_3 * int_4;
	}
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		int int_5 = 1;
		int_3 = int_4 + int_5;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	}
	if(1)
	{
		int int_6 = 1;
		int_1 = int_6 + int_6;
	}
	if(1)
	{
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_6;
	}
	if(1)
	{
		int int_7 = 1;
		int_4 = int_7;
	}
	short_1 = short_1 * short_1;
	short_3 = short_1 * short_2;
	return long_2;
}
void v__smart_add( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	short_1 = short_1 + short_2;
	double_3 = double_1 * double_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	char_3 = char_2 * char_2;
	double_2 = double_2 * double_4;
	double_2 = double_5 * double_4;
}
unsigned int v__smart_init(int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	char_1 = v__smart_calculate(unsigned_int_1,uni_para);

	double_1 = double_1;
	short_2 = short_1 * short_1;
	double_1 = double_2 * double_2;
	int_1 = int_1 + int_1;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
	double_1 = double_2 + double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	long_3 = long_1 + long_2;
	int_2 = int_2 + int_3;
	return unsigned_int_2;
}
short v_media_add( unsigned int parameter_1,char parameter_2,long parameter_3,int parameter_4,int parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_3 = 1;
	int int_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_6 = 1;
	long long_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	long long_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_7 = 1;
	long long_5 = 1;
	float float_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	short_2 = short_1 * short_2;
	short_3 = short_3 * short_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		double_4 = double_3 * double_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	int_3 = int_2 + int_2;
	if(1)
	{
	}
	int_2 = int_4 + int_3;
	unsigned_int_3 = unsigned_int_4;
	double_5 = double_1 + double_3;
	short_4 = short_1;
	char_1 = char_1 * char_2;
	char controller4vul_1719[3];
	fgets(controller4vul_1719 ,3 ,stdin);
	if( strcmp( controller4vul_1719, "V2") > 0)
	{
		char controller4vul_1720[2];
		fgets(controller4vul_1720 ,2 ,stdin);
		if( strcmp( controller4vul_1720, "i") < 0)
		{
			float float_2 = 1;
			char char_3 = 1;
			int_2 = int_2 + int_3;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
			char controller4vul_1721[2];
			fgets(controller4vul_1721 ,2 ,stdin);
			if( strcmp( controller4vul_1721, "*") < 0)
			{
				unsigned_int_4 = v__smart_init(uni_para);

				int_3 = int_3 + int_1;
				char_1 = char_1 * char_2;
				char_2 = char_1 * char_2;
			}
			if(1)
			{
				double_2 = double_1;
				int_1 = int_1 + int_4;
				double_4 = double_6 + double_6;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
			}
			if(1)
			{
				float_1 = float_1;
			}
			if(1)
			{
				int_1 = int_2;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_5;
			}
			if(1)
			{
				double_2 = double_3 * double_5;
			}
			if(1)
			{
				short short_5 = 1;
				double_6 = double_2 * double_6;
				float_3 = float_2 + float_2;
				unsigned_int_2 = unsigned_int_4;
				char_1 = char_3 + char_3;
				unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
				short_5 = short_3 + short_3;
				int_2 = int_1 * int_1;
			}
			if(1)
			{
				double_1 = double_5 + double_4;
				int_1 = int_3 * int_3;
				int_5 = int_5;
				if(1)
				{
					double_6 = double_7 * double_7;
					if(1)
					{
						double_3 = double_4 * double_7;
						unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
					}
					if(1)
					{
						double_9 = double_8 * double_4;
						if(1)
						{
							unsigned_int_6 = unsigned_int_6 + unsigned_int_5;
							short_6 = short_3 * short_6;
							long_3 = long_1;
						}
						if(1)
						{
							char_4 = char_1 + char_3;
							short_6 = short_2 + short_4;
							short_2 = short_1;
							char_5 = char_4 + char_4;
							float_2 = float_3 + float_3;
							double_2 = double_5 * double_3;
							int_2 = int_6 * int_3;
							unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
							unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
						}
					}
				}
				if(1)
				{
					int_4 = int_5;
				}
			}
		}
		if(1)
		{
			short_4 = short_6 * short_4;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			double_8 = double_2 + double_7;
			unsigned_int_7 = unsigned_int_5 + unsigned_int_2;
		}
	}
	if(1)
	{
		char char_6 = 1;
		double double_10 = 1;
		if(1)
		{
			int_3 = int_6 * int_2;
			unsigned_int_1 = unsigned_int_6;
		}
		double_4 = double_6 * double_2;
		if(1)
		{
			char_4 = char_6 * char_2;
			double_4 = double_9;
		}
		double_4 = double_10;
		if(1)
		{
			int_1 = int_4 + int_4;
			long_1 = long_4 * long_1;
		}
		unsigned_int_4 = unsigned_int_1;
		if(1)
		{
			double_6 = double_8;
			char_6 = char_1 * char_5;
		}
		int_3 = int_7 + int_2;
		short_2 = short_1 + short_4;
	}
	unsigned_int_3 = unsigned_int_8 + unsigned_int_2;
	int_1 = int_7 + int_5;
	double_3 = double_1 + double_3;
	short_7 = short_4 * short_3;
	int_1 = int_7 * int_6;
	long_3 = long_4 * long_5;
	short_6 = short_6 * short_1;
	float_4 = float_1 * float_3;
	if(1)
	{
		short short_8 = 1;
		short_8 = short_6 + short_8;
	}
	return short_6;
}
unsigned int v__block_media_activate( int parameter_1,float parameter_2,int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_6 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_7 = 1;
	long_1 = long_1;
	int_1 = int_1;
	long_3 = long_2 + long_1;
	long_1 = long_2 + long_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1718[2];
	fgets(controller4vul_1718 ,2 ,stdin);
	if( strcmp( controller4vul_1718, "]") < 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		short_1 = v_media_add(unsigned_int_1,char_1,long_4,int_2,int_2,uni_para);

		int_4 = int_3 * int_1;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		short_1 = short_2 * short_2;
	}
	if(1)
	{
		int_2 = int_2 * int_1;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		int_1 = int_5 + int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_2;
	if(1)
	{
		long long_5 = 1;
		long_5 = long_3 + long_4;
	}
	int_6 = int_5;
	unsigned_int_2 = unsigned_int_2;
	short_2 = short_1 * short_1;
	short_1 = short_2 * short_2;
	long_2 = long_1 * long_3;
	double_1 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_4 = double_4 * double_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	char_1 = char_1 * char_2;
	float_1 = float_1;
	int_1 = int_5 * int_7;
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "fk") < 0)
	{
		int_1 = int_6 + int_1;
	}
	return unsigned_int_1;
}
int v__block_edje_message_cb(unsigned int parameter_2,short parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	float float_2 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_5 = 1;
	short short_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_7 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_8 = 1;
	int int_9 = 1;
	double double_9 = 1;
	long_1 = long_2;
	int_2 = int_1 * int_1;
	v_termpty_write(double_1,unsigned_int_1,int_2);

	char_2 = char_1 + char_1;
	long_2 = long_1 * long_3;
	int_4 = int_3 * int_1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	double_3 = double_2 + double_1;
	if(1)
	{
	}
	short_4 = short_2 + short_2;
	double_2 = double_2 + double_1;
	double_4 = double_4 * double_3;
	float_1 = float_1 + float_2;
	int_1 = int_3 * int_3;
	short_5 = short_3 + short_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	long_3 = long_1;
	int_2 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_4;
	short_3 = short_5 * short_2;
	char_4 = char_3 * char_3;
	double_3 = double_3 + double_5;
	short_6 = short_6 + short_5;
	int_4 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_4 = int_5 * int_6;
		int_4 = int_1 + int_7;
	}
	char_1 = char_3;
	float_4 = float_1 * float_3;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	double_2 = double_6 + double_3;
	int_3 = int_1 + int_1;
	long_5 = long_2 + long_4;
	float_4 = float_2 * float_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float_2 = float_4 + float_1;
		char_2 = char_4 * char_4;
		double_6 = double_7 * double_7;
	}
	short_6 = short_6;
	short_6 = short_1 + short_6;
	char_5 = char_2 * char_4;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
	double_1 = double_6 * double_6;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_7 = int_7 + int_6;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int_2 = int_5 + int_8;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
		double_2 = double_1;
	}
	unsigned_int_6 = unsigned_int_5 + unsigned_int_7;
	int_6 = int_8 + int_2;
	int_6 = int_4 + int_4;
	short_2 = short_3 * short_2;
	int_6 = int_7;
	short_1 = short_4 + short_3;
	long_2 = long_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	double_5 = double_2 + double_8;
	int_7 = int_9 + int_1;
	int_8 = int_7 + int_7;
	char_2 = char_5;
	char_4 = char_2 + char_2;
	int_9 = int_8;
	double_9 = double_1 + double_2;
	short_3 = short_1 + short_2;
	int_8 = int_8 + int_2;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_8 = 1;
		int_3 = int_5 * int_5;
		unsigned_int_4 = unsigned_int_8 + unsigned_int_7;
		unsigned_int_5 = unsigned_int_3;
	}
	long_5 = long_4 + long_5;
	double_4 = double_5;
	int_5 = int_7 + int_7;
	double_7 = double_6;
	double_5 = double_3;
	unsigned_int_3 = unsigned_int_6;
	double_8 = double_4 + double_1;
	int_6 = int_4;
	long_4 = long_1 * long_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		short short_7 = 1;
		double_3 = double_2 * double_3;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
		short_6 = short_7;
	}
	float_1 = float_2 * float_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_6;
	double_2 = double_5;
	return int_2;
}
void v_termpty_write( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_1 + float_1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
}
float v__block_edje_signal_cb(int parameter_2,float parameter_3,long parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = float_1 * float_1;
	v_termpty_write(double_1,unsigned_int_1,int_1);

	double_2 = double_1;
	int_2 = int_2 * int_3;
	int_1 = int_2;
	int_3 = int_2 * int_3;
	double_2 = double_2 * double_3;
	if(1)
	{
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_4 * int_4;
	}
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_3;
		int_1 = int_3 * int_6;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
		char_2 = char_3 * char_3;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
		long_1 = long_2;
	}
	if(1)
	{
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double_3 = double_3 + double_4;
		short_2 = short_1 * short_2;
		double_5 = double_2 + double_2;
	}
	return float_1;
}
void v_termpty_block_chid_update( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	if(1)
	{
	}
	int_1 = int_2;
}
void v__block_edje_cmds( double parameter_1,unsigned int parameter_2,unsigned int parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	v_termpty_block_chid_update(double_1,double_2);

	int_1 = v__block_edje_message_cb(unsigned_int_1,short_1,int_1);

	char_2 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = v__block_edje_signal_cb(int_2,float_1,long_1);

}
float v_homedir_get( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_1 * double_1;
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 + double_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	return float_1;
}
char v__block_edje_activate( int parameter_1,long parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_1;
	int_1 = int_1 * int_1;
	v__block_edje_cmds(double_1,unsigned_int_1,unsigned_int_1,short_1);

	char_1 = char_1;
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	if(1)
	{
		float_1 = v_homedir_get(char_1,double_2);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		double double_3 = 1;
		short_1 = v_config_theme_path_default_get(char_1);

		double_3 = double_3 * double_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 + int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			float_2 = float_2 + float_1;
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_2 = short_3;
			float_2 = float_2 * float_3;
		}
	}
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	float_3 = float_1 + float_2;
	if(1)
	{
		float_3 = float_3 + float_3;
	}
	if(1)
	{
		double double_4 = 1;
		double_2 = double_4;
	}
	return char_1;
}
int v__block_activate( short parameter_1,long parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1 * char_2;
	float_1 = float_1 + float_2;
	char controller4vul_1717[3];
	fgets(controller4vul_1717 ,3 ,stdin);
	if( strcmp( controller4vul_1717, "5y") < 0)
	{
		unsigned_int_1 = v__block_media_activate(int_1,float_3,uni_para);

	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	return int_1;
}
int v_termpty_block_get( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
int v_termpty_block_id_get( short parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	int_3 = int_1 * int_3;
	double_2 = double_1 + double_2;
	return int_4;
}
void v_termpty_backscroll_adjust( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	double_1 = double_2;
	v_verify_beacon(float_1,int_1);

	long_1 = long_1 * long_1;
}
double v__smart_apply( float parameter_1,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_5 = 1;
	int int_6 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_7 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_7 = 1;
	int int_8 = 1;
	char char_4 = 1;
	double double_8 = 1;
	char char_5 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_9 = 1;
	char char_6 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_11 = 1;
	int int_12 = 1;
	int int_14 = 1;
	unsigned int unsigned_int_12 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_13 = 1;
	short short_6 = 1;
	long long_8 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_14 = 1;
	double double_12 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_15 = 1;
	float float_7 = 1;
	int int_15 = 1;
	char char_8 = 1;
	float float_8 = 1;
	int_1 = int_1 * int_1;
	long_2 = long_1 + long_2;
	char_2 = char_1 + char_1;
	double_2 = double_1 * double_2;
	char_2 = char_2 * char_1;
	double_1 = double_2 * double_2;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	short_2 = short_1 + short_1;
	float_3 = float_3 + float_1;
	float_3 = float_4;
	int_3 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
		long_3 = long_3 * long_2;
		short_2 = short_3 * short_1;
		double_2 = double_3;
		if(1)
		{
			long_2 = long_1;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
		}
		char_3 = char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char controller4vul_1715[2];
			fgets(controller4vul_1715 ,2 ,stdin);
			if( strcmp( controller4vul_1715, "O") > 0)
			{
				char controller4vul_1716[3];
				fgets(controller4vul_1716 ,3 ,stdin);
				if( strcmp( controller4vul_1716, "} ") > 0)
				{
					int_3 = v__block_activate(short_2,long_4,uni_para);

					if(1)
					{
						int_3 = int_2 + int_3;
					}
					int_5 = int_1 * int_4;
				}
				unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
				if(1)
				{
					float_3 = float_5 + float_5;
				}
				if(1)
				{
					float_4 = float_4;
				}
				int_1 = int_4 + int_3;
				unsigned_int_5 = unsigned_int_2;
				long_1 = long_2 + long_1;
				short_3 = short_3 * short_1;
				int_3 = int_2 * int_6;
				unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
				long_5 = long_6;
				if(1)
				{
					if(1)
					{
						unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
					}
					double_5 = double_4 * double_1;
					double_6 = double_4 + double_3;
					double_3 = double_3;
					unsigned_int_1 = unsigned_int_6 + unsigned_int_5;
					int_7 = int_4 + int_2;
					unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
					short_4 = short_4 + short_5;
					double_6 = double_1 + double_5;
					long_6 = long_2 + long_6;
					unsigned_int_5 = unsigned_int_6 + unsigned_int_6;
					int_1 = int_4;
					unsigned_int_9 = unsigned_int_7 * unsigned_int_8;
					if(1)
					{
						long_6 = long_1 * long_1;
						unsigned_int_7 = unsigned_int_6;
						double_7 = double_1;
						double_5 = double_3 + double_3;
						double_3 = double_3;
					}
				}
				if(1)
				{
					if(1)
					{
						if(1)
						{
							int_8 = int_1;
						}
						long_3 = long_1;
					}
					char_1 = char_4 + char_2;
					if(1)
					{
						unsigned_int_5 = unsigned_int_3 * unsigned_int_8;
					}
					if(1)
					{
						short_3 = short_4 + short_4;
					}
					int_3 = int_5;
					unsigned_int_4 = unsigned_int_3;
					long_5 = long_2 + long_6;
					float_2 = float_1 * float_1;
					double_3 = double_2;
					int_5 = int_4 * int_2;
					if(1)
					{
						double_8 = double_3 * double_1;
					}
				}
				if(1)
				{
					long long_7 = 1;
					char_1 = char_1 + char_5;
					double_9 = double_3;
					long_7 = long_1 + long_4;
					float_1 = float_4 + float_1;
					double_2 = double_10;
					double_9 = double_10;
					if(1)
					{
						short_5 = short_4 + short_2;
						unsigned_int_9 = unsigned_int_1 + unsigned_int_9;
					}
					if(1)
					{
						int_1 = int_2 + int_5;
						int_1 = int_9 + int_3;
					}
					if(1)
					{
						unsigned_int_3 = unsigned_int_2 * unsigned_int_7;
					}
					if(1)
					{
						if(1)
						{
							unsigned_int_9 = unsigned_int_6 * unsigned_int_6;
						}
						if(1)
						{
							char_1 = char_6 * char_5;
						}
					}
					if(1)
					{
						short_5 = short_3 + short_3;
					}
					if(1)
					{
						double_3 = double_9 + double_2;
					}
					if(1)
					{
						int_4 = int_7 * int_10;
						double_7 = double_3 * double_9;
						double_2 = double_3;
						unsigned_int_10 = unsigned_int_11;
						int_11 = int_10 + int_9;
						double_8 = double_4 + double_6;
						unsigned_int_9 = unsigned_int_11 + unsigned_int_3;
					}
					if(1)
					{
						unsigned_int_11 = unsigned_int_10 * unsigned_int_7;
					}
					if(1)
					{
						float_1 = float_4 * float_4;
					}
					if(1)
					{
						int int_13 = 1;
						if(1)
						{
							int_6 = int_3 + int_4;
						}
						int_12 = int_13;
					}
					long_2 = long_4 + long_4;
					float_5 = float_5 * float_2;
					int_9 = int_14 + int_2;
					double_8 = double_2 * double_4;
					if(1)
					{
						char_3 = char_4;
						unsigned_int_12 = unsigned_int_12 + unsigned_int_12;
					}
					if(1)
					{
						short_4 = short_3 + short_1;
						double_1 = double_8 + double_4;
					}
					unsigned_int_4 = unsigned_int_10;
					double_10 = double_3;
					float_5 = float_3 + float_6;
					unsigned_int_13 = unsigned_int_10 * unsigned_int_9;
					if(1)
					{
						int_5 = int_10 + int_7;
					}
				}
			}
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			unsigned_int_9 = unsigned_int_11;
		}
	}
	double_9 = double_4 + double_10;
	if(1)
	{
		double_2 = double_4 * double_8;
		float_1 = float_2 * float_2;
		unsigned_int_12 = unsigned_int_8 + unsigned_int_1;
		short_3 = short_6;
		char_3 = char_3 * char_5;
		unsigned_int_2 = unsigned_int_8;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				char_1 = char_5 + char_5;
				unsigned_int_12 = unsigned_int_7 * unsigned_int_2;
				double_5 = double_6 * double_1;
				if(1)
				{
					double_5 = double_8;
				}
				char_3 = char_6 * char_3;
				if(1)
				{
					if(1)
					{
						long_8 = long_8 + long_2;
						int_10 = int_2 + int_12;
						double_11 = double_4 * double_11;
					}
				}
				if(1)
				{
					float_1 = float_3 * float_3;
					unsigned_int_4 = unsigned_int_2 + unsigned_int_14;
				}
				char_2 = char_1 + char_4;
				unsigned_int_6 = unsigned_int_2 * unsigned_int_14;
				char_1 = char_5 + char_3;
				double_7 = double_9 + double_3;
				long_3 = long_4 + long_4;
				short_2 = short_4 + short_5;
				long_5 = long_1 * long_4;
				int_4 = int_9 * int_4;
				int_5 = int_6;
				int_11 = int_14 + int_14;
				double_7 = double_4 + double_12;
				if(1)
				{
					char_7 = char_3 + char_1;
					short_1 = short_3;
					unsigned_int_13 = unsigned_int_7 * unsigned_int_6;
					char_4 = char_5 + char_2;
					unsigned_int_5 = unsigned_int_7 * unsigned_int_15;
					unsigned_int_8 = unsigned_int_14 * unsigned_int_9;
					short_1 = short_3 + short_6;
					float_7 = float_7 + float_5;
					double_3 = double_3 * double_10;
					int_14 = int_7 * int_12;
				}
				short_4 = short_6 + short_3;
				if(1)
				{
					if(1)
					{
						int_5 = int_1 * int_15;
						unsigned_int_7 = unsigned_int_8 * unsigned_int_11;
					}
				}
			}
			unsigned_int_12 = unsigned_int_12;
		}
		int_6 = int_15;
		double_3 = double_1 * double_4;
	}
	char_6 = char_3 + char_4;
	if(1)
	{
		double_8 = double_12 + double_9;
		int_11 = int_10 + int_4;
		short_2 = short_4 * short_2;
	}
	if(1)
	{
		double_1 = double_12 * double_12;
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_11 * unsigned_int_15;
	}
	float_1 = float_6 + float_2;
	short_4 = short_2 * short_2;
	char_7 = char_8 * char_8;
	if(1)
	{
		double double_13 = 1;
		short short_7 = 1;
		long long_9 = 1;
		float_7 = float_2 + float_8;
		unsigned_int_10 = unsigned_int_9 * unsigned_int_9;
		float_1 = float_4 * float_2;
		double_12 = double_12 * double_8;
		double_4 = double_11 * double_6;
		double_13 = double_2 * double_6;
		if(1)
		{
			double_13 = double_4;
			short_4 = short_2;
		}
		short_5 = short_2 * short_3;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
		char_8 = char_2;
		char_8 = char_3 * char_6;
		long_6 = long_8 + long_8;
		char_5 = char_3 + char_3;
		short_7 = short_2 * short_5;
		short_1 = short_6 * short_1;
		if(1)
		{
			long_9 = long_9 + long_4;
		}
		if(1)
		{
			if(1)
			{
				double_6 = double_4;
			}
			if(1)
			{
				int_15 = int_4;
			}
			if(1)
			{
				char_8 = char_1 + char_5;
			}
			if(1)
			{
				int int_16 = 1;
				int_8 = int_16;
			}
			if(1)
			{
				short_1 = short_2;
			}
		}
		long_2 = long_9 * long_9;
	}
	if(1)
	{
		float_5 = float_8 * float_4;
	}
	if(1)
	{
		unsigned_int_14 = unsigned_int_9;
	}
	int_15 = int_1 + int_1;
	return double_2;
}
short v__smart_cb_change(int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double_1 = v__smart_apply(float_1,uni_para);

	double_3 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	short_1 = short_1 * short_2;
	int_1 = int_1 + int_1;
	return short_2;
}
double v__smart_update_queue( long parameter_1,char parameter_2,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char controller4vul_1714[3];
	fgets(controller4vul_1714 ,3 ,stdin);
	if( strcmp( controller4vul_1714, "b:") > 0)
	{
		short_1 = v__smart_cb_change(uni_para);

	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
unsigned int v__lost_selection_reset_job()
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_2;
	short_1 = v__lost_selection(short_1,-1 );

	long_1 = long_1 + long_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		float_1 = float_2;
		long_1 = long_2;
	}
	return unsigned_int_1;
}
short v__lost_selection(short parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double_2 = double_1 * double_2;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	char controller4vul_1711[2];
	fgets(controller4vul_1711 ,2 ,stdin);
	if( strcmp( controller4vul_1711, "7") < 0)
	{
		char controller4vul_1712[2];
		fgets(controller4vul_1712 ,2 ,stdin);
		if( strcmp( controller4vul_1712, "k") < 0)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			char controller4vul_1713[3];
			fgets(controller4vul_1713 ,3 ,stdin);
			if( strcmp( controller4vul_1713, "=m") < 0)
			{
				double_1 = v__smart_update_queue(long_1,char_1,uni_para);

				int_1 = int_1 + int_1;
			}
			double_2 = double_2 + double_2;
		}
		double_2 = double_3;
	}
	if(1)
	{
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			int_1 = int_1;
			long_3 = long_2 + long_3;
		}
		int_2 = int_1 * int_2;
		short_2 = short_1 * short_2;
		int_3 = int_2 * int_3;
		double_3 = double_1;
	}
	return short_3;
}
long v__take_selection_text( int parameter_1,double parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_2;
	double_2 = double_3 + double_2;
	double_4 = double_4;
	long_1 = long_2;
	double_2 = double_3 + double_2;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_1;
	char_1 = char_3;
	char controller4vul_1710[3];
	fgets(controller4vul_1710 ,3 ,stdin);
	if( strcmp( controller4vul_1710, "//") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		short_2 = v__lost_selection(short_2,uni_para);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	double_2 = double_4;
	return long_2;
}
short v__cb_ctxp_link_content_copy(float parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float_1 = float_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_1;
	char_2 = char_2;
	long_1 = v_termio_selection_get(double_1,int_1,int_1,int_1,int_1,long_1,int_2);

	int_1 = int_1;
	short_1 = short_1 * short_1;
	long_1 = long_1 + long_2;
	long_3 = v__take_selection_text(int_2,double_2,char_3,-1 );

	char_2 = char_3 + char_4;
	return short_1;
}
void v_ty_sb_free( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
float v_ty_sb_steal_buf( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	float_3 = float_1 + float_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		double_2 = double_1 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 * int_2;
		}
		double_2 = double_1 * double_1;
	}
	short_1 = short_2;
	double_2 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_4;
	return float_2;
}
int v_codepoint_to_utf8( unsigned int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	long long_5 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	if(1)
	{
		long long_2 = 1;
		long_3 = long_1 * long_2;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		int_1 = int_1 * int_2;
		int_2 = int_1;
		float_1 = float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double_1 = double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_2 = int_1 * int_1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		long long_4 = 1;
		float float_3 = 1;
		double double_4 = 1;
		long_4 = long_3 * long_1;
		float_2 = float_3 + float_4;
		double_3 = double_3 * double_4;
		long_4 = long_1 * long_5;
		double_1 = double_3 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		int_3 = int_3 + int_2;
		double_5 = double_3 * double_3;
		int_1 = int_4 + int_5;
		int_5 = int_6 + int_5;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	}
	if(1)
	{
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_5 = 1;
		short short_1 = 1;
		int_2 = int_6 * int_5;
		double_7 = double_5 * double_6;
		unsigned_int_5 = unsigned_int_6;
		float_4 = float_5;
		long_5 = long_3 + long_1;
		short_1 = short_1 + short_1;
		int_5 = int_1 + int_3;
	}
	if(1)
	{
		int_6 = int_5;
	}
	return int_1;
}
void v_ty_sb_spaces_rtrim( short parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	double_1 = double_1;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float_1 = float_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_2 = double_1;
		short_3 = short_1 + short_2;
	}
}
int v_ty_sb_add( char parameter_1,short parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_3 = 1;
		long_3 = long_1 * long_2;
		float_1 = float_1 + float_2;
		long_2 = long_3 + long_1;
		if(1)
		{
		}
		int_3 = int_1 * int_2;
		float_2 = float_2 + float_2;
	}
	short_1 = short_1 * short_1;
	int_2 = int_2;
	int_4 = int_1 * int_4;
	return int_5;
}
unsigned int v__termpty_cellrow_from_beacon_get( float parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	float_3 = float_3 * float_3;
	long_2 = long_1 * long_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	int_1 = int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		int_2 = int_1;
	}
	int_3 = int_2;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short short_2 = 1;
		float float_4 = 1;
		short_1 = short_1 + short_2;
		long_1 = long_1;
		float_4 = float_2;
		v_verify_beacon(float_1,int_3);

		short_1 = short_2 * short_1;
		double_2 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		short_1 = short_1 + short_1;
	}
	double_2 = double_1;
	return unsigned_int_2;
}
char v_termpty_cellrow_get( int parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	return char_1;
	unsigned_int_2 = v__termpty_cellrow_from_beacon_get(float_1,int_1,double_1);

}
long v_termio_selection_get( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,int parameter_7)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	long_1 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		if(1)
		{
			char_2 = char_1 * char_2;
			int_1 = int_1 * int_1;
		}
		if(1)
		{
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			int_2 = v_ty_sb_add(char_2,short_1,unsigned_int_1);

			double_3 = double_1 + double_3;
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "fE") > 0)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
					}
					if(1)
					{
						float_1 = v_ty_sb_steal_buf(short_1);

						v_ty_sb_free(short_1);

						double_1 = double_1 + double_2;
					}
				}
				if(1)
				{
					int_2 = v_codepoint_to_utf8(unsigned_int_2,char_1);

					int_3 = int_1 * int_2;
				}
			}
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			char_1 = char_2 + char_3;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					double_4 = double_1 * double_3;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_1;
				}
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
				}
				if(1)
				{
					v_ty_sb_spaces_rtrim(short_1);

					int_4 = int_4 * int_3;
				}
				if(1)
				{
					float_2 = float_2;
				}
			}
			v_termpty_backlog_unlock();

			float_2 = float_3 + float_4;
		}
		if(1)
		{
			char_3 = v_termpty_cellrow_get(int_4,int_2,float_2);

			double_4 = double_1 + double_3;
		}
	}
	return long_1;
	v_termpty_backlog_lock();

}
int v__cb_ctxp_link_open(double parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 * long_1;
	double_2 = double_1 + double_2;
	char_3 = char_1 + char_2;
	float_3 = float_1 + float_2;
	char_1 = char_4 * char_4;
	int_1 = int_1;
	return int_1;
	unsigned_int_1 = v__activate_link(char_4,unsigned_int_1);

}
char v__should_inline( unsigned int parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	short_1 = v_termio_config_get(long_1);

	char_2 = char_1 * char_1;
	double_1 = double_1 + double_1;
	double_3 = double_2 * double_2;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	return char_3;
}
int v_link_is_email( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
long v_link_is_protocol( char parameter_1)
{
	long long_1 = 1;
	return long_1;
}
double v_link_is_url( unsigned int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	return double_1;
	long_1 = v_link_is_protocol(char_1);

}
unsigned int v__activate_link( char parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_6 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_5 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_7 = 1;
	double double_7 = 1;
	long_2 = long_1 + long_2;
	int_1 = int_1 * int_1;
	int_2 = int_1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_4 = long_2 + long_3;
	char_3 = char_1 + char_2;
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
	if(1)
	{
		if(1)
		{
			double_2 = double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		}
	}
	if(1)
	{
		char_4 = char_2 * char_2;
	}
	if(1)
	{
		char_1 = char_1 + char_3;
	}
	if(1)
	{
		long long_5 = 1;
		int_2 = int_2 + int_2;
		long_4 = long_1 * long_5;
	}
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		char_5 = char_5 * char_1;
		unsigned_int_5 = unsigned_int_5;
		if(1)
		{
			long_1 = v_media_src_type_get(int_3);

			float_1 = float_3;
		}
		if(1)
		{
			long long_6 = 1;
			long_6 = long_1 * long_3;
		}
		unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
		if(1)
		{
			double double_3 = 1;
			long long_7 = 1;
			double_2 = v_link_is_url(unsigned_int_3);

			double_1 = double_1 * double_3;
			long_7 = long_7 * long_4;
		}
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_3 * unsigned_int_3;
		char_2 = char_6;
		if(1)
		{
			short_1 = short_2 + short_2;
			if(1)
			{
				if(1)
				{
					unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
					double_1 = double_4 * double_2;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_5 + unsigned_int_8;
					double_4 = double_4 + double_5;
				}
			}
			if(1)
			{
				int int_6 = 1;
				if(1)
				{
					if(1)
					{
						char_4 = v__should_inline(unsigned_int_7);

						short_1 = short_3 * short_3;
					}
				}
				if(1)
				{
					if(1)
					{
						float float_4 = 1;
						float_4 = float_4 * float_3;
					}
				}
				if(1)
				{
					if(1)
					{
						int_5 = int_4 + int_5;
					}
				}
				float_1 = float_1;
				int_6 = int_6 * int_2;
			}
		}
	}
	if(1)
	{
		char_4 = char_5 + char_6;
		int_1 = int_2 * int_7;
		if(1)
		{
			double_4 = double_5 * double_1;
			if(1)
			{
				unsigned int unsigned_int_9 = 1;
				unsigned_int_8 = unsigned_int_5 * unsigned_int_9;
				short_2 = short_3;
			}
			if(1)
			{
				int int_8 = 1;
				if(1)
				{
					if(1)
					{
						double double_6 = 1;
						double_6 = double_1 * double_1;
					}
				}
				if(1)
				{
					if(1)
					{
						char char_7 = 1;
						char_2 = char_7;
					}
				}
				if(1)
				{
					if(1)
					{
						int_7 = v_link_is_email(double_4);

						short_2 = short_2 + short_3;
					}
				}
				int_2 = int_5 + int_5;
				int_1 = int_8;
			}
		}
	}
	if(1)
	{
		char char_8 = 1;
		char_4 = char_8;
	}
	double_7 = double_2 * double_2;
	if(1)
	{
		int_7 = int_4;
	}
	return unsigned_int_6;
}
float v__cb_ctxp_link_preview(char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long_1 = long_1 * long_2;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_1;
	double_4 = double_1 * double_3;
	double_3 = double_4 + double_2;
	unsigned_int_1 = v__activate_link(char_1,unsigned_int_2);

	short_1 = short_1;
	return float_1;
}
float v__is_fmt( unsigned int parameter_1,char parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1;
		}
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "4") > 0)
		{
		}
	}
	return float_1;
}
long v_media_src_type_get( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		float_1 = v__is_fmt(unsigned_int_1,char_1);

		double_1 = double_2 * double_1;
	}
	if(1)
	{
		short_1 = short_1;
	}
	return long_3;
}
char v__mouse_in_selection( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_1;
	long_3 = long_1 * long_2;
	short_2 = short_2 * short_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double_2 = double_1 * double_1;
		float_1 = float_1 + float_1;
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
	return char_1;
}
char v__smart_xy_to_cursor( char parameter_1,short parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "E@") < 0)
	{
		char_1 = char_1 + char_1;
	}
	return char_1;
}
unsigned int v__cb_link_down(char parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = v__cb_ctxp_link_copy(long_1,uni_para);

	short_1 = short_1 + short_2;
	long_3 = long_2 + long_1;
	long_3 = long_1 + long_3;
	if(1)
	{
		double_2 = double_2 + double_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_5 = 1;
		long long_5 = 1;
		short short_5 = 1;
		int_2 = int_1 + int_2;
		long_2 = long_1 * long_2;
		long_4 = long_4 + long_4;
		int_3 = int_4;
		if(1)
		{
			double_2 = double_2 + double_2;
			long_1 = long_3;
			if(1)
			{
			}
		}
		short_1 = short_3 * short_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_2;
			if(1)
			{
				char_1 = char_2;
			}
		}
		char_1 = char_3 * char_2;
		int_2 = int_5 + int_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1;
		}
		if(1)
		{
			double double_3 = 1;
			short short_4 = 1;
			double_3 = double_1 + double_3;
			short_4 = short_1 + short_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		}
		long_2 = long_1 * long_3;
		long_5 = long_2 + long_5;
		unsigned_int_1 = unsigned_int_1;
		short_3 = short_3 + short_2;
		short_3 = short_5 + short_2;
	}
	return unsigned_int_3;
}
char v_main_term_popup_exists( short parameter_1)
{
	char char_1 = 1;
	return char_1;
}
int v__update_link( short parameter_1,unsigned int parameter_2,float parameter_3,long parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	int_1 = int_2;
	int_4 = int_3 * int_2;
	float_1 = float_2 * float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	if(1)
	{
		double_2 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
	}
	int_2 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		int int_5 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char_3 = char_1 * char_2;
		int_2 = int_3 + int_5;
		int_4 = int_3 + int_4;
		char controller4vul_1708[2];
		fgets(controller4vul_1708 ,2 ,stdin);
		if( strcmp( controller4vul_1708, "h") > 0)
		{
			float_3 = float_2 + float_1;
			char controller4vul_1709[2];
			fgets(controller4vul_1709 ,2 ,stdin);
			if( strcmp( controller4vul_1709, ":") > 0)
			{
				unsigned_int_1 = v__cb_link_down(char_1,double_1,uni_para);

				float_1 = float_4;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
			}
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_1;
			char_1 = char_3 + char_1;
		}
		if(1)
		{
			double_1 = double_2 * double_1;
			float_4 = float_3;
		}
		char_5 = char_2 * char_4;
		float_2 = float_1;
		unsigned_int_3 = unsigned_int_1;
		int_6 = int_3 + int_2;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
		double_4 = double_3 * double_4;
		if(1)
		{
			float float_5 = 1;
			float float_6 = 1;
			float_3 = float_5 + float_6;
		}
	}
	return int_1;
}
int v__remove_links( unsigned int parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int_1 = v__update_link(short_1,unsigned_int_1,float_1,long_1,uni_para);

	long_2 = long_2 + long_3;
	if(1)
	{
		int_3 = int_1 + int_2;
		float_1 = float_2 * float_2;
	}
	long_1 = long_3;
	char_1 = char_2;
	int_3 = int_1 * int_2;
	int_4 = int_4 + int_4;
	char_1 = char_2;
	float_2 = float_2 + float_2;
	return int_2;
}
unsigned int v__sel_set( short parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "S") == 0)
	{
		long long_1 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		double double_1 = 1;
		long long_4 = 1;
		long long_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_1 = double_1;
		long_2 = long_4 + long_5;
		int_2 = int_1 + int_2;
	}
	return unsigned_int_3;
}
int v_termio_scroll_get( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = double_2;
	double_2 = double_3 * double_1;
	return int_1;
}
void v_miniview_position_offset( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double_1 = double_1;
	double_1 = double_2;
	int_1 = v_termio_scroll_get(unsigned_int_1);

	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_3;
		int_4 = int_4 + int_1;
		if(1)
		{
			int int_5 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_1 = double_1;
			int_6 = int_1 * int_5;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			int int_7 = 1;
			double double_3 = 1;
			int_2 = int_7;
			double_2 = double_3;
			short_1 = short_1 * short_1;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_2;
			short_1 = short_1;
			if(1)
			{
				char char_3 = 1;
				char char_4 = 1;
				char_4 = char_3 * char_4;
			}
			if(1)
			{
				double double_4 = 1;
				double double_5 = 1;
				double_2 = double_4 + double_5;
			}
		}
	}
}
float v_term_miniview_get( double parameter_1)
{
	float float_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "v") > 0)
	{
	}
	return float_1;
}
void v_termio_scroll( short parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float_1 = float_2;
	double_1 = double_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			short_1 = short_1 + short_2;
		}
		unsigned_int_2 = unsigned_int_1;
	}
	int_1 = v__remove_links(unsigned_int_1,int_2,-1 );

	double_2 = double_3;
	if(1)
	{
		int int_3 = 1;
		double double_5 = 1;
		float float_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		float_3 = v_term_miniview_get(double_2);

		int_1 = int_3 * int_1;
		double_2 = double_2 + double_4;
		double_5 = double_2 + double_2;
		if(1)
		{
			float float_5 = 1;
			float_5 = float_1 + float_4;
		}
		if(1)
		{
			float float_6 = 1;
			short_1 = short_2 + short_3;
			int_3 = int_1 * int_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			double_4 = double_1 * double_4;
			float_6 = float_4 * float_3;
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
			}
		}
		if(1)
		{
			unsigned_int_1 = v__sel_set(short_1,unsigned_int_4);

			short_1 = short_3 * short_3;
		}
		if(1)
		{
			int int_4 = 1;
			short_2 = short_1 + short_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
			v_miniview_position_offset(unsigned_int_5,int_1,unsigned_int_5);

			int_4 = int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_2 * double_4;
		}
	}
}
char v_termpty_save_new( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_2;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	v_termpty_save_free(char_1);

	char_2 = char_2 + char_2;
	int_4 = int_1 * int_3;
	return char_2;
}
char v_termpty_save_expand( long parameter_1,long parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_2;
	return char_1;
}
double v__termpty_cell_is_empty( short parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
float v_termpty_line_length( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_1 = v__termpty_cell_is_empty(short_1);

		double_3 = double_2 * double_2;
		if(1)
		{
		}
	}
	return float_1;
}
void v_verify_beacon( float parameter_1,int parameter_2)
{
}
void v_termpty_text_save_top( int parameter_1,unsigned int parameter_2,double parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_6 = 1;
	char char_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 * int_3;
	short_1 = short_1 * short_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = v_termpty_save_expand(long_1,long_2,short_2);

		double_1 = double_1;
	}
	if(1)
	{
		int_3 = int_3 * int_3;
		if(1)
		{
			int_2 = int_4 + int_4;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			char char_2 = 1;
			char char_3 = 1;
			v_verify_beacon(float_1,int_4);

			float_2 = float_1 + float_1;
			long_4 = long_3 + long_2;
			char_3 = char_2 + char_2;
			int_4 = int_2 * int_5;
		}
	}
	double_2 = double_2 * double_3;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	int_4 = int_4 + int_2;
	float_3 = v_termpty_line_length(short_1,int_6);

	char_4 = v_termpty_save_new(long_5,int_6);

	v_termpty_backlog_unlock();

	short_1 = short_1 * short_2;
	if(1)
	{
		v_termpty_backlog_lock();

		short_1 = short_1 + short_2;
	}
	double_2 = double_2;
	int_1 = int_6;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
	if(1)
	{
		int_6 = int_6 + int_5;
		double_3 = double_1;
	}
	double_2 = double_1 + double_4;
}
void v_termpty_text_scroll( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int_3 = int_1 * int_2;
	int_3 = int_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		v_termpty_cells_clear(int_3,long_1,int_3);

		short_2 = short_1 + short_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	double_1 = double_1 + double_2;
	short_1 = short_1;
	if(1)
	{
		short short_3 = 1;
		short_2 = short_3 * short_3;
		if(1)
		{
			v_termpty_text_save_top(int_4,unsigned_int_1,double_2);

			int_1 = int_1 + int_4;
		}
		v_termio_scroll(short_1,int_2,int_1,int_3);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			long_1 = long_2;
		}
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int_6 = int_5 + int_3;
		double_1 = double_1 + double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		double_3 = double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_3 = 1;
			long_2 = long_2 * long_3;
			double_4 = double_5 * double_1;
			int_6 = int_2 * int_1;
		}
		if(1)
		{
			double_5 = double_3 + double_5;
		}
	}
}
void v_termpty_text_scroll_test( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	if(1)
	{
		long_1 = long_2;
		if(1)
		{
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short_1 = short_1 + short_2;
			double_3 = double_2 + double_3;
			float_2 = float_1 * float_1;
		}
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "CQ") > 0)
	{
		long long_3 = 1;
		long_1 = long_3 + long_2;
		double_2 = double_3 * double_4;
		v_termpty_text_scroll(double_4,unsigned_int_1);

		short_2 = short_2 + short_2;
	}
}
int v__cursor_to_start_of_line( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	return int_1;
}
void v__tab_forward( short parameter_1,int parameter_2)
{
}
char v__handle_cursor_control( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_1 = 1;
	char char_1 = 1;
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	int_3 = int_1 + int_1;
	float_3 = float_1 * float_2;
	v__tab_forward(short_1,int_2);

	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_2;
	int_1 = int_2 * int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	int_4 = int_5;
	float_2 = float_1 + float_3;
	v_termpty_text_scroll_test(double_1,short_3);

	short_5 = short_4 * short_4;
	if(1)
	{
		short short_6 = 1;
		double double_3 = 1;
		short_3 = short_6 * short_6;
		int_1 = v__cursor_to_start_of_line(long_1);

		double_2 = double_3 + double_2;
		int_4 = int_4 * int_5;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	return char_1;
}
int v_termpty_handle_seq( double parameter_1,short parameter_2,short parameter_3,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int_1 = int_1;
	char controller4vul_1704[2];
	fgets(controller4vul_1704 ,2 ,stdin);
	if( strcmp( controller4vul_1704, "P") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = v__handle_esc_csi(short_1,char_1,int_1,uni_para);

		long_2 = long_1 * long_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_4 = 1;
		int_4 = int_2 + int_3;
	}
	return int_3;
}
void v_termpty_handle_buf( float parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = v_termpty_handle_seq(double_1,short_1,short_1,uni_para);

	double_2 = double_1 + double_2;
	float_1 = float_1 + float_2;
	double_2 = double_2;
	short_3 = short_1 + short_2;
	if(1)
	{
		short_3 = short_1 * short_1;
	}
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_1 = int_4 * int_5;
	}
	short_3 = short_3 * short_3;
}
void v_theme_reload()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_2 = float_1 + float_1;
	double_2 = double_1 + double_2;
	long_1 = long_1 * long_1;
	long_1 = long_2;
	if(1)
	{
	}
}
float v_theme_reload_cb(long parameter_2,char parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_1 * char_2;
	float_1 = float_1 + float_2;
	float_3 = float_1 + float_2;
	v_theme_reload();

	double_1 = double_1 + double_1;
	float_3 = float_1 * float_2;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2 + double_1;
	}
	return float_2;
}
void v_theme_auto_reload_enable( char parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float_1 = v_theme_reload_cb(long_1,char_1,long_2);

	int_1 = int_1 * int_1;
}
double v__cursor_shape_to_group_name( short parameter_1)
{
	double double_1 = 1;
	return double_1;
}
short v_config_theme_path_default_get( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_2;
	return short_3;
}
double v_theme_path_get()
{
	double double_1 = 1;
	return double_1;
}
short v_config_theme_path_get( long parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	return short_1;
	double_1 = v_theme_path_get();

}
int v_theme_apply( double parameter_1,short parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_2 = int_1 + int_2;
	double_2 = double_1 * double_1;
	int_1 = int_3 + int_2;
	char_1 = char_2;
	if(1)
	{
	}
	double_3 = double_3 + double_3;
	int_1 = int_2 * int_4;
	if(1)
	{
	}
	short_1 = v_config_theme_path_get(long_1);

	double_3 = double_2;
	short_3 = short_1 * short_2;
	return int_1;
	short_3 = v_config_theme_path_default_get(char_2);

}
void v_termio_set_cursor_shape( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	short short_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	int_1 = v_theme_apply(double_1,short_1,unsigned_int_2);

	char_1 = char_1 + char_1;
	int_4 = int_2 * int_3;
	float_1 = float_1;
	v_theme_auto_reload_enable(char_1);

	int_5 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	double_1 = double_2;
	float_1 = float_1;
	if(1)
	{
		double_2 = double_2 * double_2;
		if(1)
		{
			double double_3 = 1;
			double_1 = v__cursor_shape_to_group_name(short_2);

			double_2 = double_3 * double_2;
		}
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "6<") > 0)
		{
			short short_3 = 1;
			short_2 = short_3 + short_1;
		}
	}
}
void v_termpty_clear_tabs_on_screen()
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	if(1)
	{
		short short_1 = 1;
		int int_4 = 1;
		short_1 = short_1 + short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
		int_1 = int_3 + int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	}
	float_2 = float_1 + float_1;
	v_termpty_backlog_unlock();

	double_3 = double_1 * double_2;
	v_termpty_backlog_lock();

	int_1 = int_3 * int_1;
	v_termpty_save_free(char_2);

}
float v__ts_free()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	return float_1;
}
void v_termpty_save_free( char parameter_1)
{
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		float float_2 = 1;
		if(1)
		{
			double_3 = double_1 + double_2;
		}
		if(1)
		{
			double_3 = double_4 + double_1;
		}
		float_1 = v__ts_free();

		float_2 = float_2 + float_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 * double_4;
	int_1 = int_1;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	double_3 = double_1 + double_2;
	double_2 = double_4;
	int_2 = int_1 + int_1;
	v_termpty_save_free(char_1);

	v_termpty_backlog_size_set(char_2,int_1);

	char_3 = char_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		long_3 = long_1 * long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_1 = double_4;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		char_5 = char_4 * char_1;
	}
	long_5 = long_4 + long_3;
	float_1 = float_1 * float_1;
	v_termpty_backlog_lock();

	double_4 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_5 = double_1 * double_5;
	v_termpty_backlog_unlock();

}
void v_termpty_reset_att()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_5 = 1;
	double double_2 = 1;
	long long_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float_3 = float_1 * float_2;
	long_1 = long_2;
	char_1 = char_1 + char_1;
	long_3 = long_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	int_4 = int_2 + int_3;
	short_3 = short_1 * short_2;
	double_1 = double_1 * double_1;
	int_4 = int_1 * int_5;
	double_2 = double_1 + double_1;
	long_3 = long_1 * long_4;
	int_5 = int_6;
	double_1 = double_1 * double_2;
	double_2 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	int_3 = int_3 * int_6;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
}
short v_termio_config_get( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	return short_1;
}
void v_termpty_reset_state( int parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_9 = 1;
	char char_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_10 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_termpty_clear_backlog(int_1);

	v_termio_set_cursor_shape(short_1,char_1);

	int_2 = int_1 * int_1;
	v_termpty_reset_att();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	int_2 = int_1 + int_3;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_3;
	char_2 = char_2 * char_2;
	long_1 = long_1 * long_2;
	long_3 = long_2 + long_2;
	int_4 = int_5;
	v_termpty_clear_tabs_on_screen();

	int_5 = int_6 + int_1;
	unsigned_int_2 = unsigned_int_1;
	double_1 = double_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_6 = int_1 + int_7;
	int_6 = int_6 * int_8;
	float_2 = float_1 + float_1;
	float_1 = float_3;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_4;
	short_1 = v_termio_config_get(long_2);

	char_1 = char_3;
	double_2 = double_3 + double_2;
	double_4 = double_1 * double_1;
	int_9 = int_1 * int_5;
	int_8 = int_4 * int_2;
	int_6 = int_8 + int_4;
	char_3 = char_4;
	int_7 = int_4 * int_3;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	double_5 = double_3 * double_1;
	int_8 = int_2 + int_3;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	int_10 = int_7 + int_5;
	double_3 = double_1;
	long_5 = long_3 * long_4;
	short_3 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		int int_11 = 1;
		int_11 = int_11 + int_1;
	}
}
void v_termpty_resize_tabs( long parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	char_1 = char_1 * char_1;
	double_2 = double_1 + double_2;
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	int_1 = int_1 + int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "oJ") > 0)
	{
	}
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int_1 = int_3 + int_3;
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "]=") > 0)
		{
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_2 = char_2 + char_3;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	long_3 = long_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_3 = long_2 * long_1;
	}
}
int v__termpty_init( short parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	v_termpty_reset_state(int_1);

	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	short_1 = short_2;
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_1;
	short_3 = short_3 + short_3;
	double_2 = double_3 + double_3;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_7;
	int_2 = int_1 * int_2;
	v_termpty_resize_tabs(long_2,int_1,int_3);

	double_1 = double_1 * double_1;
	double_4 = double_4 + double_1;
	return int_2;
}
float v__add_default_keys()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	double double_6 = 1;
	long long_3 = 1;
	int int_7 = 1;
	double double_7 = 1;
	float float_3 = 1;
	double double_8 = 1;
	short short_1 = 1;
	long long_4 = 1;
	int int_8 = 1;
	int_2 = int_1 * int_1;
	int_3 = int_3 + int_2;
	int_4 = int_4;
	int_2 = int_2 * int_5;
	long_1 = long_1 * long_1;
	double_3 = double_1 * double_2;
	char_3 = char_1 + char_2;
	int_2 = int_1 * int_5;
	double_1 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 * int_1;
	char_4 = char_2 * char_4;
	double_4 = double_1 * double_3;
	char_3 = char_4 + char_1;
	double_3 = double_2 + double_2;
	float_2 = float_1 * float_1;
	double_4 = double_1;
	int_1 = int_1 * int_5;
	unsigned_int_2 = unsigned_int_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	char_4 = char_5 * char_4;
	char_6 = char_2 * char_6;
	double_3 = double_5;
	int_1 = int_3 * int_1;
	int_6 = int_5 + int_2;
	long_1 = long_2;
	float_2 = float_1 + float_2;
	double_4 = double_6 * double_4;
	long_2 = long_3 * long_1;
	int_5 = int_5 + int_1;
	double_1 = double_4 + double_5;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	int_7 = int_4 + int_3;
	double_7 = double_3 + double_6;
	double_1 = double_3 + double_4;
	char_3 = char_1;
	float_3 = float_1 * float_2;
	int_1 = int_1 * int_5;
	int_6 = int_6 * int_1;
	double_3 = double_3;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	char_5 = char_5 * char_6;
	double_3 = double_6 * double_8;
	double_3 = double_7 * double_7;
	int_5 = int_6 + int_1;
	int_1 = int_7 * int_1;
	float_1 = float_3 * float_2;
	short_1 = short_1;
	long_4 = long_4;
	int_8 = int_2;
	return float_2;
}
void v_colors_standard_get( int parameter_1,int parameter_2,char parameter_3,double parameter_4,double parameter_5,int parameter_6)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		int int_4 = 1;
		double_2 = double_1 * double_1;
		int_3 = int_1 * int_2;
		short_1 = short_1;
		char_2 = char_1 * char_1;
		double_3 = double_2 * double_3;
		char_1 = char_3 + char_1;
		int_4 = int_3 + int_1;
	}
	char_1 = char_3 + char_4;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_1;
}
int v_config_new()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	double double_6 = 1;
	char char_1 = 1;
	double double_7 = 1;
	long_3 = long_1 + long_2;
	float_1 = float_1 + float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_8 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		int int_4 = 1;
		char char_4 = 1;
		int int_5 = 1;
		double double_10 = 1;
		short short_3 = 1;
		int_1 = int_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		float_2 = float_2 + float_1;
		double_1 = double_1 * double_2;
		double_4 = double_2 + double_3;
		int_2 = int_1 * int_2;
		float_1 = float_3 * float_2;
		int_1 = int_1 + int_1;
		long_3 = long_3 * long_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		int_2 = int_2;
		int_1 = int_2 + int_3;
		float_4 = float_4 + float_1;
		float_3 = float_3 + float_2;
		double_2 = double_5;
		int_2 = int_2;
		float_4 = float_5;
		double_2 = double_3 + double_6;
		long_1 = long_3 + long_3;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
		v_colors_standard_get(int_3,int_1,char_1,double_7,double_6,int_1);

		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		double_6 = double_8 + double_7;
		float_4 = v__add_default_keys();

		char_2 = char_2 * char_3;
		double_1 = double_9 * double_8;
		char_3 = char_1 + char_2;
		float_5 = float_4 + float_3;
		char_1 = char_3 + char_2;
		long_3 = long_2;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
		unsigned_int_6 = unsigned_int_5;
		short_2 = short_1 * short_1;
		unsigned_int_4 = unsigned_int_6 + unsigned_int_4;
		long_2 = long_4 + long_1;
		double_1 = double_2 * double_6;
		int_3 = int_2 + int_1;
		long_6 = long_1 + long_5;
		double_4 = double_1 + double_9;
		int_4 = int_3 * int_3;
		float_5 = float_2 * float_1;
		char_1 = char_2 + char_4;
		unsigned_int_3 = unsigned_int_3;
		short_1 = short_2 + short_1;
		int_5 = int_4 + int_2;
		char_4 = char_4 + char_2;
		long_4 = long_3 + long_5;
		unsigned_int_3 = unsigned_int_2;
		double_10 = double_2 * double_2;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
		short_1 = short_3 * short_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_6 = 1;
				short_2 = short_3 + short_2;
				float_6 = float_4;
				char_2 = char_3 * char_2;
				short_2 = short_2 * short_1;
				long_2 = long_2 + long_1;
				int_3 = int_4 * int_3;
			}
		}
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		double_8 = double_9;
	}
	return int_2;
}
int main()
{
	int uni_para =273;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	double double_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_7 = 1;
	char char_6 = 1;
	double double_8 = 1;
	v_termpty_handle_buf(float_1,char_1,int_1,uni_para);

	double_1 = double_1 + double_1;
	short_2 = short_1 + short_1;
	int_2 = int_2 * int_2;
	int_3 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 + int_4;
	double_1 = double_1 * double_2;
	int_3 = int_1 + int_3;
	int_1 = int_3 * int_1;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	char_2 = char_1 + char_1;
	float_1 = float_1;
	int_4 = int_1 * int_1;
	if(1)
	{
		int_4 = int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	double_2 = double_3 * double_4;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_2;
	if(1)
	{
		float float_5 = 1;
		if(1)
		{
			double_2 = double_3 + double_1;
		}
		if(1)
		{
			short_3 = short_2 * short_2;
		}
		if(1)
		{
			float_3 = float_4;
		}
		unsigned_int_4 = unsigned_int_5;
		if(1)
		{
			double_1 = double_4 * double_3;
		}
		float_3 = float_1 * float_5;
		if(1)
		{
			int_4 = int_3 * int_1;
		}
		int_5 = int_3;
		if(1)
		{
			unsigned_int_5 = unsigned_int_5;
		}
		long_3 = long_2 * long_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			int_1 = int_1 * int_4;
		}
		int_3 = int_3 * int_5;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
		short_3 = short_3;
		if(1)
		{
			int_4 = int_3 + int_3;
		}
		if(1)
		{
			double_3 = double_5 + double_4;
			if(1)
			{
				float float_6 = 1;
				unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
				int_6 = int_1 * int_3;
				if(1)
				{
					float_2 = float_6 + float_1;
				}
				if(1)
				{
					short short_4 = 1;
					short_4 = short_4 * short_4;
				}
				if(1)
				{
					float_2 = float_6 + float_6;
				}
				if(1)
				{
					int_6 = int_2 * int_1;
				}
				if(1)
				{
					double double_7 = 1;
					double_6 = double_7;
				}
				if(1)
				{
					char_4 = char_2 + char_3;
				}
				if(1)
				{
					short short_5 = 1;
					short_1 = short_3 + short_5;
				}
				if(1)
				{
					double_1 = double_3 * double_5;
				}
				if(1)
				{
					int_4 = int_1;
				}
				if(1)
				{
					long_2 = long_4 * long_5;
				}
				if(1)
				{
					int_2 = int_4;
				}
				if(1)
				{
					int_7 = int_1;
				}
			}
			if(1)
			{
				char char_5 = 1;
				char_2 = char_5 * char_2;
			}
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		float float_7 = 1;
		float_7 = float_3 + float_4;
	}
	if(1)
	{
		char_3 = char_3;
	}
	if(1)
	{
		short short_6 = 1;
		short_3 = short_3 + short_6;
		if(1)
		{
			long_4 = long_4 * long_3;
		}
	}
	char_1 = char_6 + char_4;
	long_5 = long_4 + long_5;
	double_6 = double_8 + double_6;
	double_4 = double_1 * double_5;
	if(1)
	{
		int_7 = int_3;
		int_6 = int_3 + int_5;
	}
	return int_7;
}

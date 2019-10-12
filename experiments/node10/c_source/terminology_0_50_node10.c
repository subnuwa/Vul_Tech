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

short v__termpty_shutdown( char parameter_1);
void v_termpty_text_scroll_rev_test( unsigned int parameter_1,double parameter_2);
char v__handle_esc_dcs( char parameter_1,double parameter_2,short parameter_3);
int v__handle_op_a( int parameter_1,char parameter_2,short parameter_3);
unsigned int v__termpty_ext_handle( char parameter_1,short parameter_2,long parameter_3);
int v__handle_esc_terminology( long parameter_1,short parameter_2,int parameter_3);
short v__handle_xterm_777_command( float parameter_1,char parameter_2,int parameter_3);
char v__smart_calculate_226( char parameter_1);
short v__smart_size( long parameter_1,int parameter_2,int parameter_3,int parameter_4);
void v_colors_term_init( double parameter_1,double parameter_2,long parameter_3);
void v_termio_config_update( unsigned int parameter_1);
float v__font_size_set( unsigned int parameter_1,int parameter_2);
void v_termio_font_size_set( unsigned int parameter_1,int parameter_2);
void v__handle_xterm_50_command( long parameter_1,char parameter_2,int parameter_3);
short v__eina_unicode_to_hex( float parameter_1);
void v__xterm_parse_color( float parameter_1,float parameter_2,char parameter_3,double parameter_4,int parameter_5);
int v__xterm_arg_get( char parameter_1);
long v__handle_esc_xterm( short parameter_1,double parameter_2,float parameter_3);
void v_termpty_cells_set_content( int parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4);
char v__handle_esc_csi_decera( long parameter_1,short parameter_2);
void v_termpty_cells_att_fill_preserve_colors( int parameter_1,float parameter_2,char parameter_3,int parameter_4);
long v__clean_up_rect_coordinates( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
void v__handle_esc_csi_decfra( short parameter_1,double parameter_2);
void v__handle_esc_csi_decslrm( short parameter_1,short parameter_2);
void v__handle_esc_csi_decstbm( int parameter_1,short parameter_2);
char v__handle_esc_csi_decscusr( float parameter_1,long parameter_2);
float v__handle_esc_csi_dsr( double parameter_1,char parameter_2);
double v__handle_esc_csi_truecolor_cmyk( double parameter_1,double parameter_2);
char v__handle_esc_csi_truecolor_cmy( char parameter_1,double parameter_2);
int v__approximate_truecolor_rgb( long parameter_1,int parameter_2,int parameter_3,int parameter_4);
short v__csi_truecolor_arg_get( long parameter_1);
float v__handle_esc_csi_truecolor_rgb( long parameter_1,long parameter_2);
long v__handle_esc_csi_color_set( double parameter_1,long parameter_2);
void v_termpty_cursor_copy( double parameter_1,short parameter_2);
unsigned int v__switch_to_alternative_screen( short parameter_1,int parameter_2);
long v__move_cursor_to_origin( unsigned int parameter_1);
char v__pty_size( double parameter_1);
int v__limit_coord( char parameter_1);
long v__check_screen_info( short parameter_1,double parameter_2);
short v__termpty_line_rewrap( long parameter_1,double parameter_2,int parameter_3,int parameter_4,long parameter_5);
unsigned int v__backlog_remove_latest_nolock( long parameter_1);
short v_termpty_save_extract( char parameter_1);
short v__termpty_line_is_empty( double parameter_1,short parameter_2);
void v_termpty_screen_swap( unsigned int parameter_1);
void v_termpty_resize( long parameter_1,int parameter_2,int parameter_3);
char v_termio_win_get( char parameter_1);
long v__handle_esc_csi_reset_mode( char parameter_1,int parameter_2,short parameter_3);
int v__handle_esc_csi_cursor_pos_set( int parameter_1,long parameter_2,unsigned int parameter_3);
void v_termpty_text_scroll_rev( short parameter_1,char parameter_2);
void v_termpty_clear_line( unsigned int parameter_1,long parameter_2,int parameter_3);
void v_termpty_clear_screen( float parameter_1,double parameter_2);
void v_termpty_cell_codepoint_att_fill( char parameter_1,float parameter_2,short parameter_3,char parameter_4,int parameter_5);
short v__termpty_charset_trans( short parameter_1,unsigned int parameter_2);
void v_termio_content_change( float parameter_1,short parameter_2,char parameter_3,int parameter_4);
void v_termpty_text_append( short parameter_1,int parameter_2,int parameter_3);
char v__csi_arg_get();
long v__handle_esc_csi( char parameter_1,float parameter_2,int parameter_3);
float v__safechar( float parameter_1);
char v__handle_esc( double parameter_1,long parameter_2,char parameter_3,int uni_para);
void v_termpty_cell_fill( float parameter_1,double parameter_2,long parameter_3,int parameter_4);
void v_termpty_cells_fill( unsigned int parameter_1,short parameter_2,long parameter_3,int parameter_4);
void v_termpty_cells_clear( short parameter_1,char parameter_2,int parameter_3);
long v__tooltip_del(long parameter_2);
long v__tooltip_content(unsigned int parameter_2,int parameter_3);
void v_MD5Final( unsigned int parameter_1,double parameter_2);
void v_MD5Transform( char parameter_1,float parameter_2);
void v_byteReverse( char parameter_1,double parameter_2);
void v_MD5Update( int parameter_1,char parameter_2,char parameter_3);
void v_MD5Init( int parameter_1);
void v_gravatar_tooltip( int parameter_1,long parameter_2,char parameter_3);
float v__cb_link_drag_done(int parameter_2);
short v__cb_link_drag_accept(double parameter_2,float parameter_3);
void v__cb_link_drag_move(short parameter_2,unsigned int parameter_3,double parameter_4,double parameter_5);
char v__cb_link_icon_new(float parameter_2,int parameter_3,short parameter_4);
void v__cb_link_move(short parameter_2,long parameter_3);
long v__cb_link_up_delay();
short v__cb_link_up(char parameter_2,int parameter_3);
void v_term_focus( double parameter_1);
int v__term_is_focused();
void v_term_unfocus( float parameter_1);
char v__cb_ctxp_del(char parameter_2,float parameter_3);
long v__cb_ctxp_dismissed(double parameter_2);
long v__cb_ctxp_link_copy(double parameter_2);
float v__screen_visual_bounds();
char v__draw_cell( double parameter_1,short parameter_2,double parameter_3,float parameter_4);
double v__draw_line( short parameter_1,char parameter_2,unsigned int parameter_3,int parameter_4,long parameter_5);
int v_termpty_backlog_length( double parameter_1);
double v_termio_pty_get( int parameter_1);
void v_termio_textgrid_get( float parameter_1);
void v_miniview_colors_get( long parameter_1,double parameter_2);
void v__deferred_renderer();
void v__queue_render( unsigned int parameter_1);
void v_miniview_redraw( long parameter_1);
double v__block_obj_del( float parameter_1);
unsigned int v__termpty_is_dblwidth_slow_get( double parameter_1,int parameter_2);
float v__termpty_is_dblwidth_get( long parameter_1,int parameter_2);
unsigned int v_term_preedit_str_get( short parameter_1);
char v_media_get( float parameter_1);
int v__smart_media_clicked(unsigned int parameter_2);
unsigned int v_media_control_get( long parameter_1);
double v__smart_media_stop(float parameter_2);
unsigned int v__smart_media_pause(char parameter_2);
short v__smart_media_play(long parameter_2);
short v__smart_media_del(double parameter_2,short parameter_3);
void v_media_visualize_set( int parameter_1,int parameter_2);
void v_media_mute_set( char parameter_1,unsigned int parameter_2);
void v_media_volume_set( unsigned int parameter_1,double parameter_2);
double v__cb_media_vol(char parameter_2,unsigned int parameter_3,short parameter_4);
void v__cb_media_pos(char parameter_2,short parameter_3,long parameter_4);
short v__cb_media_pos_drag_stop(char parameter_2,char parameter_3,float parameter_4);
short v__cb_media_pos_drag_start(int parameter_2,double parameter_3,short parameter_4);
void v_media_stop( float parameter_1);
char v__cb_media_stop(short parameter_2,char parameter_3,int parameter_4);
float v__cb_media_pause(char parameter_2,int parameter_3,double parameter_4);
void v_media_play_set( char parameter_1,short parameter_2);
int v__cb_media_play(float parameter_2,char parameter_3,char parameter_4);
void v_media_position_set( char parameter_1,double parameter_2);
float v__cb_mov_ref(float parameter_2);
float v__cb_mov_progress(unsigned int parameter_2);
float v__cb_mov_restart();
long v__cb_mov_decode_stop(unsigned int parameter_2);
double v__cb_mov_len_change(int parameter_2);
short v__cb_mov_frame_resize(unsigned int parameter_2);
unsigned int v__cb_mov_frame_decode(long parameter_2);
long v__type_mov_init( unsigned int parameter_1);
unsigned int v__cb_edje_preloaded(short parameter_2,unsigned int parameter_3,short parameter_4);
void v__type_edje_init( long parameter_1);
double v__type_scale_init( float parameter_1);
void v__cb_img_frame();
int v__type_img_anim_handle( double parameter_1);
int v__cb_img_preloaded(double parameter_2,double parameter_3);
short v__type_img_init();
unsigned int v__url_compl_cb(int parameter_2,int uni_para);
long v__url_prog_cb(int parameter_2);
int v__type_thumb_calc( double parameter_1,int parameter_2,long parameter_3,char parameter_4,long parameter_5);
unsigned int v__type_mov_calc( double parameter_1,short parameter_2,short parameter_3,short parameter_4,unsigned int parameter_5);
void v__type_edje_calc( long parameter_1,short parameter_2,short parameter_3,int parameter_4,unsigned int parameter_5);
void v__type_img_calc( char parameter_1,unsigned int parameter_2,short parameter_3,unsigned int parameter_4,int parameter_5);
float v__cb_scale_preloaded(unsigned int parameter_2,unsigned int parameter_3);
int v__type_scale_calc( float parameter_1,int parameter_2,float parameter_3,long parameter_4,char parameter_5,int uni_para);
double v__unsmooth_timeout(int uni_para);
int v__smooth_handler( short parameter_1,int uni_para);
float v__smart_calculate( unsigned int parameter_1,int uni_para);
void v__smart_move( unsigned int parameter_1,short parameter_2,long parameter_3);
unsigned int v__smart_resize( unsigned int parameter_1,float parameter_2,double parameter_3);
int v__smart_del( float parameter_1);
char v__smart_add( double parameter_1);
int v__smart_init();
unsigned int v_media_add( short parameter_1,char parameter_2,short parameter_3,int parameter_4,long parameter_5,int uni_para);
char v__block_media_activate( char parameter_1,char parameter_2,int uni_para);
double v__block_edje_message_cb(double parameter_2,short parameter_3,int parameter_4);
void v_termpty_write( char parameter_1,int parameter_2,int parameter_3);
void v__block_edje_signal_cb(int parameter_2,char parameter_3,double parameter_4);
void v_termpty_block_chid_update( char parameter_1,float parameter_2);
float v__block_edje_cmds( char parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4);
char v_homedir_get( char parameter_1,short parameter_2);
float v__block_edje_activate( unsigned int parameter_1,unsigned int parameter_2);
short v__block_activate( double parameter_1,double parameter_2,int uni_para);
double v_termpty_block_get( char parameter_1,int parameter_2);
int v_termpty_block_id_get( short parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( float parameter_1,int parameter_2);
double v__smart_apply( short parameter_1,int uni_para);
char v__smart_cb_change(int uni_para);
unsigned int v__smart_update_queue( long parameter_1,float parameter_2,int uni_para);
unsigned int v__lost_selection_reset_job();
char v__lost_selection(char parameter_2,int uni_para);
int v__take_selection_text( char parameter_1,float parameter_2,long parameter_3,int uni_para);
void v__cb_ctxp_link_content_copy(short parameter_2,int uni_para);
void v_ty_sb_free();
short v_ty_sb_steal_buf();
int v_codepoint_to_utf8( char parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( float parameter_1);
int v_ty_sb_add( short parameter_1,double parameter_2,long parameter_3);
char v__termpty_cellrow_from_beacon_get( double parameter_1,int parameter_2,unsigned int parameter_3);
char v_termpty_cellrow_get( long parameter_1,int parameter_2,unsigned int parameter_3);
long v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,short parameter_6,char parameter_7);
float v__cb_ctxp_link_open(double parameter_2);
int v__should_inline( long parameter_1);
int v_link_is_email( char parameter_1);
double v_link_is_protocol( int parameter_1);
long v_link_is_url( unsigned int parameter_1);
double v__activate_link( char parameter_1,long parameter_2);
unsigned int v__cb_ctxp_link_preview(short parameter_2);
unsigned int v__is_fmt( double parameter_1,double parameter_2);
long v_media_src_type_get( int parameter_1);
int v__mouse_in_selection( short parameter_1,int parameter_2,int parameter_3);
short v__smart_xy_to_cursor( double parameter_1,char parameter_2,int parameter_3,int parameter_4,int parameter_5);
short v__cb_link_down(unsigned int parameter_2,long parameter_3,int uni_para);
char v_main_term_popup_exists( char parameter_1);
double v__update_link( int parameter_1,long parameter_2,double parameter_3,short parameter_4,int uni_para);
unsigned int v__remove_links( int parameter_1,unsigned int parameter_2,int uni_para);
char v__sel_set( short parameter_1,char parameter_2);
int v_termio_scroll_get( short parameter_1);
void v_miniview_position_offset( double parameter_1,int parameter_2,int parameter_3);
char v_term_miniview_get( long parameter_1);
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
int v_termpty_save_new( float parameter_1,int parameter_2);
int v_termpty_save_expand( long parameter_1,unsigned int parameter_2,short parameter_3);
char v__termpty_cell_is_empty( char parameter_1);
long v_termpty_line_length( double parameter_1,float parameter_2);
char v_verify_beacon( short parameter_1,int parameter_2);
void v_termpty_text_save_top( double parameter_1,float parameter_2,char parameter_3);
void v_termpty_text_scroll( long parameter_1,unsigned int parameter_2,int uni_para);
void v_termpty_text_scroll_test( long parameter_1,int parameter_2,int uni_para);
char v__cursor_to_start_of_line( long parameter_1);
short v__tab_forward( unsigned int parameter_1,int parameter_2);
int v__handle_cursor_control( int parameter_1,double parameter_2);
int v_termpty_handle_seq( float parameter_1,float parameter_2,double parameter_3,int uni_para);
void v_termpty_handle_buf( char parameter_1,char parameter_2,int parameter_3,int uni_para);
void v_theme_reload( char parameter_1);
long v_theme_reload_cb(unsigned int parameter_2,unsigned int parameter_3,long parameter_4);
void v_theme_auto_reload_enable( char parameter_1);
long v__cursor_shape_to_group_name( double parameter_1);
short v_config_theme_path_default_get( short parameter_1);
short v_theme_path_get();
char v_config_theme_path_get();
int v_theme_apply( unsigned int parameter_1,double parameter_2,float parameter_3);
void v_termio_set_cursor_shape( int parameter_1,unsigned int parameter_2);
void v_termpty_clear_tabs_on_screen( double parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( short parameter_1,double parameter_2);
long v__ts_free();
void v_termpty_save_free( long parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( float parameter_1);
void v_termpty_reset_att();
unsigned int v_termio_config_get( char parameter_1);
void v_termpty_reset_state( short parameter_1);
void v_termpty_resize_tabs( unsigned int parameter_1,int parameter_2,int parameter_3);
double v__termpty_init( double parameter_1);
unsigned int v__add_default_keys( char parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,char parameter_4,short parameter_5,long parameter_6);
void v_config_new();
short v__termpty_shutdown( char parameter_1)
{
	short short_1 = 1;
	short_1 = short_1;
	return short_1;
}
void v_termpty_text_scroll_rev_test( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		short short_3 = 1;
		v_termpty_text_scroll_rev(short_1,char_1);

		short_1 = short_1 * short_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_2;
	}
}
char v__handle_esc_dcs( char parameter_1,double parameter_2,short parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					float_1 = v__safechar(float_2);

					unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				}
				if(1)
				{
					short short_1 = 1;
					short_1 = short_1;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
		if(1)
		{
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			v_termpty_write(char_1,int_1,int_2);

			long_2 = long_2 + long_3;
		}
		if(1)
		{
			int int_3 = 1;
			int_4 = int_3 * int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_5 = 1;
			int_2 = int_5 + int_4;
		}
	}
	return char_1;
}
int v__handle_op_a( int parameter_1,char parameter_2,short parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_1;
	int_1 = int_1 + int_2;
	return int_1;
}
unsigned int v__termpty_ext_handle( char parameter_1,short parameter_2,long parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1;
	int_1 = v__handle_op_a(int_2,char_1,short_1);

	int_3 = int_2;
	return unsigned_int_1;
}
int v__handle_esc_terminology( long parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_termio_config_get(char_1);

	unsigned_int_1 = v__termpty_ext_handle(char_1,short_1,long_1);

	double_1 = double_1 + double_1;
	return int_1;
}
short v__handle_xterm_777_command( float parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		long_1 = long_2;
	}
	int_1 = int_1 + int_2;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "s") < 0)
	{
	}
	short_1 = short_2 + short_3;
	char_2 = char_3;
	double_2 = double_1 + double_2;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_3;
	}
	long_1 = long_2 + long_1;
	int_1 = int_1 + int_2;
	double_1 = double_2 + double_1;
	double_1 = double_3 + double_3;
	unsigned_int_1 = unsigned_int_2;
	return short_3;
}
char v__smart_calculate_226( char parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float_1 = float_1;
	short_1 = short_2;
	int_2 = int_1 + int_1;
	double_2 = double_1 + double_1;
	double_1 = double_2 * double_2;
	char_1 = char_1 * char_2;
	short_2 = short_1 + short_2;
	char_3 = char_3;
	float_1 = float_2;
	return char_2;
}
short v__smart_size( long parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	char char_3 = 1;
	long long_2 = 1;
	float_3 = float_1 + float_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_3 = float_4 * float_5;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	double_1 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	char_1 = char_2;
	int_1 = int_1;
	v_termpty_resize(long_1,int_2,int_3);

	float_6 = float_3 * float_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	double_2 = v__smart_apply(short_1,-1 );

	short_2 = short_1 * short_1;
	int_4 = int_2 * int_3;
	char_1 = v__smart_calculate_226(char_2);

	int_5 = int_4;
	double_3 = double_1;
	int_1 = int_2;
	char_3 = v__sel_set(short_1,char_2);

	long_2 = long_1;
	return short_2;
}
void v_colors_term_init( double parameter_1,double parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	long_2 = long_1 * long_1;
	short_1 = short_1;
	long_2 = long_1 + long_2;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		double double_3 = 1;
		float_1 = float_1 + float_1;
		if(1)
		{
			short short_2 = 1;
			int_3 = int_1 + int_2;
			int_2 = int_3;
			int_1 = int_1 + int_2;
			short_1 = short_2;
		}
		if(1)
		{
			int_1 = int_1 * int_3;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				int int_5 = 1;
				double_1 = double_1 * double_2;
				int_4 = int_2 + int_3;
				long_1 = long_1 * long_2;
				char_2 = char_1 + char_1;
				int_6 = int_4 * int_5;
			}
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_3 = double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int_7 = int_6 + int_3;
			if(1)
			{
				double_1 = double_2 + double_2;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short_4 = short_1 + short_3;
			int_3 = int_1 + int_2;
			unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
			int_3 = int_4 + int_7;
			unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
		}
		float_2 = float_3;
	}
}
void v_termio_config_update( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	v_colors_term_init(double_1,double_1,long_1);

	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	short_1 = short_2;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
		short_2 = short_3;
	}
	if(1)
	{
		short_4 = short_1;
	}
	double_2 = double_3;
	double_1 = double_3 * double_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	v_termio_set_cursor_shape(int_1,unsigned_int_1);

	char_1 = char_1;
	int_3 = int_1 * int_1;
	short_1 = v__smart_size(long_2,int_4,int_1,int_1);

	long_1 = long_2 * long_2;
	char_2 = char_1 * char_1;
	long_1 = long_2 * long_1;
	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_6;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	short_4 = short_3 + short_3;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_6;
	v_termpty_backlog_size_set(short_5,double_4);

	float_1 = float_2;
	unsigned_int_6 = unsigned_int_7 + unsigned_int_4;
}
float v__font_size_set( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char_3 = char_1 + char_2;
	short_1 = short_2;
	char_4 = char_1 * char_3;
	long_1 = long_1 + long_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		short short_3 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		v_termio_config_update(unsigned_int_2);

		long_3 = long_1 * long_3;
		short_1 = short_3;
		char_1 = char_1 + char_1;
		long_3 = long_3 + long_1;
		char_2 = char_1 * char_4;
	}
	return float_1;
}
void v_termio_font_size_set( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_2;
	float_1 = v__font_size_set(unsigned_int_1,int_1);

}
void v__handle_xterm_50_command( long parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	v_termio_font_size_set(unsigned_int_1,int_1);

	int_1 = int_1 * int_1;
}
short v__eina_unicode_to_hex( float parameter_1)
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
void v__xterm_parse_color( float parameter_1,float parameter_2,char parameter_3,double parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	float float_3 = 1;
	short short_5 = 1;
	double_2 = double_1 * double_2;
	short_2 = short_1 * short_1;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	int_1 = int_1;
	int_1 = int_1;
	if(1)
	{
		double double_4 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		short short_3 = 1;
		char char_4 = 1;
		double_3 = double_3;
		if(1)
		{
			double_5 = double_4 * double_1;
		}
		int_2 = int_2 * int_3;
		float_2 = float_1 + float_2;
		if(1)
		{
			double_6 = double_5 * double_5;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_6 = double_3 + double_2;
		if(1)
		{
			int int_4 = 1;
			int_2 = int_4 * int_5;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		char_2 = char_1 + char_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
		}
		double_2 = double_6;
		short_3 = short_1 + short_1;
		if(1)
		{
			short_1 = short_2;
		}
		char_2 = char_3 * char_4;
		int_2 = int_1 + int_6;
		if(1)
		{
			double_6 = double_5 * double_4;
		}
		unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		long long_1 = 1;
		long long_3 = 1;
		double double_7 = 1;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_2;
		if(1)
		{
			int_3 = int_3 * int_3;
		}
		int_6 = int_2;
		int_6 = int_5 * int_6;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
		double_5 = double_3;
		long_3 = long_1 * long_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
		}
		double_5 = double_7 + double_2;
	}
	if(1)
	{
		char_3 = char_2;
	}
	short_4 = v__eina_unicode_to_hex(float_3);

	short_4 = short_1 + short_5;
}
int v__xterm_arg_get( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_5 = 1;
	long long_3 = 1;
	double_1 = double_1 * double_1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_2;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	double_3 = double_1 * double_2;
	int_3 = int_2 + int_2;
	double_4 = double_1 * double_2;
	char_3 = char_2 + char_1;
	int_5 = int_4 * int_4;
	double_5 = double_4 + double_2;
	char_1 = char_3 * char_4;
	double_5 = double_1 * double_3;
	int_2 = int_2;
	int_5 = int_5 * int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_1 * long_2;
	char_1 = char_5;
	long_2 = long_3 * long_2;
	return int_4;
}
long v__handle_esc_xterm( short parameter_1,double parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_6 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	char char_6 = 1;
	int int_8 = 1;
	float float_6 = 1;
	double double_7 = 1;
	int int_9 = 1;
	short_1 = short_1 + short_2;
	v_termio_textgrid_get(float_1);

	int_3 = int_1 + int_2;
	double_3 = double_1 + double_2;
	v__xterm_parse_color(float_2,float_2,char_1,double_3,int_3);

	long_1 = long_1 + long_1;
	float_2 = float_2 + float_2;
	int_2 = int_3 + int_1;
	if(1)
	{
		float_2 = float_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_5 = int_4 * int_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
	}
	int_1 = v__xterm_arg_get(char_2);

	double_1 = double_2 * double_4;
	char_1 = char_3 + char_3;
	v_termpty_write(char_4,int_6,int_4);

	long_1 = long_3 + long_3;
	float_3 = float_1 * float_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		v__handle_xterm_50_command(long_4,char_5,int_4);

		char_2 = char_4 * char_4;
	}
	if(1)
	{
		float float_4 = 1;
		double double_5 = 1;
		unsigned_int_2 = v_termio_config_get(char_3);

		float_3 = float_4 * float_1;
		double_2 = double_3;
		double_5 = double_3 * double_2;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
	}
	if(1)
	{
		int int_7 = 1;
		int_2 = int_7 * int_4;
	}
	short_1 = short_1 + short_2;
	short_2 = v__handle_xterm_777_command(float_5,char_6,int_8);

	float_5 = float_6;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_5;
	}
	if(1)
	{
		double double_6 = 1;
		double_4 = double_6 + double_7;
		long_4 = long_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_6;
	}
	if(1)
	{
		double_7 = double_4 + double_7;
	}
	int_6 = int_1 * int_9;
	float_3 = float_1;
	return long_1;
}
void v_termpty_cells_set_content( int parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
}
char v__handle_esc_csi_decera( long parameter_1,short parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	char_1 = v__csi_arg_get();

	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 + int_1;
	int_4 = int_1 * int_3;
	float_3 = float_1 * float_2;
	double_2 = double_1 * double_1;
	long_1 = v__clean_up_rect_coordinates(char_1,int_5,int_5,int_5,int_5);

	short_2 = short_1 * short_1;
	if(1)
	{
	}
	long_1 = long_2 + long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_2 * double_1;
		long_3 = long_2;
	}
	return char_2;
	v_termpty_cells_set_content(int_4,unsigned_int_3,double_3,int_6);

}
void v_termpty_cells_att_fill_preserve_colors( int parameter_1,float parameter_2,char parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_2 = double_2 * double_1;
		long_1 = long_1 * long_1;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned_int_2 = unsigned_int_3;
			long_1 = long_1;
			unsigned_int_1 = unsigned_int_1;
			float_2 = float_1 * float_2;
			char_2 = char_1 + char_2;
			unsigned_int_2 = unsigned_int_1;
		}
	}
}
long v__clean_up_rect_coordinates( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 * double_2;
	long_1 = long_1;
	int_3 = int_2 * int_1;
	int_4 = int_1;
	long_1 = long_1 * long_2;
	if(1)
	{
		int_1 = int_2 + int_3;
	}
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		long_2 = long_2 + long_1;
	}
	if(1)
	{
		int_3 = int_2 * int_2;
		if(1)
		{
			int_3 = int_2 * int_1;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_3 * char_1;
	}
	if(1)
	{
		int int_5 = 1;
		int_6 = int_2 + int_5;
	}
	if(1)
	{
		int_6 = int_6;
		if(1)
		{
			double_3 = double_3 * double_2;
		}
	}
	float_2 = float_1 * float_1;
	if(1)
	{
		double_3 = double_4 * double_1;
	}
	if(1)
	{
	}
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_3;
	long_1 = long_1 + long_1;
	double_4 = double_1 + double_1;
	return long_1;
}
void v__handle_esc_csi_decfra( short parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	float_3 = float_1 + float_2;
	double_2 = double_1 * double_1;
	short_1 = short_1 * short_1;
	char_1 = v__csi_arg_get();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = v__clean_up_rect_coordinates(char_2,int_1,int_2,int_2,int_1);

	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1;
	v_termpty_cells_att_fill_preserve_colors(int_3,float_4,char_2,int_3);

	int_3 = int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
		float_2 = float_1 + float_1;
	}
}
void v__handle_esc_csi_decslrm( short parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 + char_1;
	char_1 = char_1;
	char_2 = v__csi_arg_get();

	short_1 = short_1;
	short_3 = short_1 * short_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	long_1 = v__move_cursor_to_origin(unsigned_int_3);

	int_1 = int_1 * int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "JK") < 0)
	{
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2 + long_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	int_2 = int_2 * int_3;
	double_2 = double_1 * double_1;
}
void v__handle_esc_csi_decstbm( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_2;
	int_3 = int_2 + int_1;
	char_1 = v__csi_arg_get();

	short_1 = short_1 + short_2;
	int_5 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "A") < 0)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	long_1 = v__move_cursor_to_origin(unsigned_int_3);

	double_1 = double_2 * double_1;
	float_2 = float_1 + float_1;
	int_1 = int_3 * int_3;
}
char v__handle_esc_csi_decscusr( float parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	int int_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long_1 = long_1 + long_2;
	short_2 = short_1 + short_2;
	int_1 = int_1 * int_1;
	double_2 = double_1 + double_1;
	short_2 = short_2 + short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_termio_set_cursor_shape(int_1,unsigned_int_2);

	short_1 = short_2 + short_3;
	int_2 = int_3;
	int_3 = int_3 * int_4;
	short_4 = short_1 * short_2;
	int_1 = int_5;
	char_1 = v__csi_arg_get();

	int_6 = int_5 + int_6;
	char_4 = char_2 + char_3;
	float_1 = float_1 * float_1;
	long_1 = long_2 * long_3;
	return char_2;
}
float v__handle_esc_csi_dsr( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double double_2 = 1;
		char char_2 = 1;
		double_1 = double_1 * double_2;
		char_1 = v__csi_arg_get();

		long_2 = long_1 + long_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		char_1 = char_2 * char_2;
		double_2 = double_2;
		double_2 = double_2 * double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
		int_2 = int_1 * int_3;
		v_termpty_write(char_3,int_2,int_3);

		long_2 = long_2 + long_2;
		int_3 = int_2 + int_1;
		unsigned_int_3 = unsigned_int_2;
		long_1 = long_2 * long_2;
	}
	return float_1;
}
double v__handle_esc_csi_truecolor_cmyk( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 * int_2;
	double_1 = double_1;
	short_1 = v__csi_truecolor_arg_get(long_1);

	float_2 = float_1 * float_1;
	int_3 = v__approximate_truecolor_rgb(long_1,int_2,int_1,int_4);

	int_5 = int_4 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_3 * float_3;
	short_3 = short_2 + short_2;
	double_1 = double_2 + double_2;
	char_1 = char_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	return double_2;
}
char v__handle_esc_csi_truecolor_cmy( char parameter_1,double parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
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
	char char_1 = 1;
	short_1 = v__csi_truecolor_arg_get(long_1);

	double_1 = double_2;
	double_1 = double_3 * double_1;
	int_1 = v__approximate_truecolor_rgb(long_1,int_2,int_1,int_3);

	unsigned_int_1 = unsigned_int_2;
	int_2 = int_3 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "!") < 0)
	{
	}
	double_4 = double_4 * double_1;
	int_3 = int_2 * int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return char_1;
}
int v__approximate_truecolor_rgb( long parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			v_termio_textgrid_get(float_1);

			int_2 = int_1 * int_2;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			}
		}
	}
	return int_2;
}
short v__csi_truecolor_arg_get( long parameter_1)
{
	short short_1 = 1;
	return short_1;
}
float v__handle_esc_csi_truecolor_rgb( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_2 + double_1;
	char_1 = char_1 + char_1;
	long_2 = long_1 * long_1;
	int_1 = v__approximate_truecolor_rgb(long_2,int_1,int_1,int_2);

	char_2 = char_1 + char_1;
	if(1)
	{
		float float_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double_1 = double_1;
		float_2 = float_1 + float_1;
		char_1 = char_3 + char_4;
	}
	if(1)
	{
	}
	return float_2;
	short_1 = v__csi_truecolor_arg_get(long_2);

}
long v__handle_esc_csi_color_set( double parameter_1,long parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_2 = 1;
	char_1 = v__csi_arg_get();

	float_1 = v__handle_esc_csi_truecolor_rgb(long_1,long_1);

	char_1 = v__handle_esc_csi_truecolor_cmy(char_1,double_1);

	double_1 = v__handle_esc_csi_truecolor_cmyk(double_2,double_3);

	float_1 = float_2 + float_1;
	float_1 = float_2;
	return long_2;
	v_termpty_reset_att();

}
void v_termpty_cursor_copy( double parameter_1,short parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		short_1 = short_1 + short_1;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_2;
		short_2 = short_1 + short_1;
		char_1 = char_2;
	}
}
unsigned int v__switch_to_alternative_screen( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		v_termpty_screen_swap(unsigned_int_1);

		char_3 = char_1 + char_2;
	}
	return unsigned_int_2;
}
long v__move_cursor_to_origin( unsigned int parameter_1)
{
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_2;
		double_3 = double_1 + double_2;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		int_1 = int_2;
	}
	return long_1;
}
char v__pty_size( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 + int_1;
	}
	return char_1;
}
int v__limit_coord( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = int_1 * int_2;
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_2;
	int_1 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_2;
	float_2 = float_1 + float_1;
	short_3 = short_1 * short_2;
	return int_1;
}
long v__check_screen_info( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		double double_2 = 1;
		int int_2 = 1;
		float float_2 = 1;
		int int_3 = 1;
		v_termpty_text_save_top(double_1,float_1,char_1);

		double_2 = double_2 * double_1;
		double_2 = double_2 + double_1;
		v_termpty_cells_clear(short_1,char_2,int_1);

		int_1 = int_2;
		float_2 = float_1 * float_2;
		int_3 = int_2 + int_1;
		if(1)
		{
			float float_3 = 1;
			float_2 = float_2 * float_3;
		}
		double_1 = double_1 * double_2;
	}
	return long_1;
}
short v__termpty_line_rewrap( long parameter_1,double parameter_2,int parameter_3,int parameter_4,long parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double_1 = double_2;
	long_1 = v__check_screen_info(short_1,double_3);

	long_1 = long_1 + long_2;
	double_3 = double_4 * double_2;
	return short_2;
}
unsigned int v__backlog_remove_latest_nolock( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	float_1 = float_3 + float_2;
	if(1)
	{
		float float_4 = 1;
		float_2 = float_1 + float_4;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_2;
	}
	double_1 = double_1 + double_2;
	v_termpty_save_free(long_1);

	double_4 = double_3 * double_1;
	char_1 = v_verify_beacon(short_2,int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_4 * double_1;
	return unsigned_int_3;
}
short v_termpty_save_extract( char parameter_1)
{
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			short_1 = short_1 + short_1;
			float_1 = float_1 + float_1;
			float_2 = float_2 * float_3;
			double_1 = double_2;
			if(1)
			{
			}
			double_2 = double_2 + double_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			double_2 = double_2 + double_2;
			if(1)
			{
				int int_1 = 1;
				int_1 = int_1 + int_1;
			}
		}
	}
	return short_1;
}
short v__termpty_line_is_empty( double parameter_1,short parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char_1 = v__termpty_cell_is_empty(char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_1 = int_1;
		if(1)
		{
		}
	}
	return short_1;
}
void v_termpty_screen_swap( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	long_1 = long_1 + long_1;
	if(1)
	{
		double_2 = double_2;
	}
}
void v_termpty_resize( long parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	int int_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_7 = 1;
	float float_5 = 1;
	short_1 = short_1;
	float_1 = float_1 * float_2;
	short_2 = v_termpty_save_extract(char_1);

	float_3 = float_2 * float_3;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	v_termpty_resize_tabs(unsigned_int_1,int_1,int_1);

	double_2 = double_2 * double_1;
	if(1)
	{
		short_2 = short_1 + short_2;
		double_2 = double_3 + double_3;
	}
	char_4 = char_2 * char_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	long_2 = long_1 + long_1;
	int_1 = int_2 * int_1;
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	double_1 = double_3 + double_2;
	short_2 = short_2 * short_3;
	short_3 = v__termpty_line_is_empty(double_3,short_4);

	long_1 = long_3 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 + double_3;
		if(1)
		{
			v_termpty_screen_swap(unsigned_int_1);

			char_3 = v_verify_beacon(short_4,int_3);

			long_3 = long_1 + long_4;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		}
	}
	float_1 = float_1 * float_3;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	float_4 = float_1 + float_4;
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		unsigned_int_4 = unsigned_int_1;
		double_4 = double_4;
		long_2 = v_termpty_line_length(double_5,float_2);

		int_3 = v__limit_coord(char_1);

		short_2 = short_5 + short_6;
		if(1)
		{
			int int_4 = 1;
			float_1 = float_3;
			char_2 = char_3 + char_5;
			unsigned_int_5 = v__backlog_remove_latest_nolock(long_1);

			long_1 = long_4;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
			if(1)
			{
				int_3 = int_2 * int_3;
			}
			double_1 = double_4;
			double_1 = double_6 * double_2;
			double_7 = double_7 * double_7;
			int_4 = int_1;
			v_termpty_backlog_unlock();

			double_7 = double_6 + double_6;
			float_2 = float_3 + float_4;
			unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_2 = int_1 * int_1;
		char_1 = char_2 + char_2;
		float_1 = float_3 * float_3;
		double_2 = double_7;
	}
	char_1 = char_4;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
	long_3 = long_1 + long_2;
	v_termpty_backlog_lock();

	long_5 = long_5 * long_2;
	unsigned_int_3 = unsigned_int_8 + unsigned_int_7;
	double_5 = double_3 + double_2;
	short_1 = v__termpty_line_rewrap(long_1,double_4,int_5,int_3,long_5);

	double_2 = double_8 * double_6;
	unsigned_int_7 = unsigned_int_8 + unsigned_int_1;
	if(1)
	{
		unsigned_int_8 = unsigned_int_9 * unsigned_int_6;
	}
	double_3 = double_6 * double_7;
	short_7 = short_3 + short_1;
	char_4 = char_3;
	char_1 = v__pty_size(double_4);

	char_4 = char_3 + char_3;
	float_2 = float_4 + float_2;
	unsigned_int_9 = unsigned_int_8 + unsigned_int_9;
	float_5 = float_4 + float_2;
	char_5 = char_3 * char_4;
}
char v_termio_win_get( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_2;
	int_1 = int_1 * int_2;
	return char_1;
}
long v__handle_esc_csi_reset_mode( char parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = v__switch_to_alternative_screen(short_1,int_1);

	unsigned_int_2 = unsigned_int_2;
	char_1 = v__csi_arg_get();

	v_termpty_cursor_copy(double_1,short_1);

	int_3 = int_1 + int_2;
	v_termpty_clear_screen(float_1,double_1);

	unsigned_int_3 = unsigned_int_1;
	return long_1;
	char_1 = v_termio_win_get(char_2);

	v_termpty_resize(long_2,int_4,int_3);

	v_termpty_reset_state(short_2);

	long_3 = v__move_cursor_to_origin(unsigned_int_1);

}
int v__handle_esc_csi_cursor_pos_set( int parameter_1,long parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1;
	char_1 = v__csi_arg_get();

	int_1 = int_1 + int_1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2 + char_2;
		if(1)
		{
			char char_4 = 1;
			char_4 = char_3 + char_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	}
	int_1 = int_1 * int_2;
	double_3 = double_3 * double_4;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 + long_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
		if(1)
		{
			char_1 = char_3 * char_3;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 + int_3;
	}
	float_2 = float_1 * float_2;
	return int_3;
}
void v_termpty_text_scroll_rev( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 * float_2;
	if(1)
	{
		v_termio_scroll(float_2,int_1,int_1,int_1,-1 );

		int_2 = int_1 * int_1;
		short_2 = short_1 + short_2;
	}
	int_1 = int_1;
	int_3 = int_2 * int_3;
	if(1)
	{
		short short_3 = 1;
		int_1 = int_1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_2;
		}
		v_termpty_cells_clear(short_2,char_1,int_3);

		short_2 = short_2 + short_3;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		float_1 = float_1 * float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_3 = 1;
			float_3 = float_1 * float_1;
			float_2 = float_2;
			short_1 = short_2 * short_1;
		}
		if(1)
		{
			int int_4 = 1;
			int_2 = int_4;
		}
	}
}
void v_termpty_clear_line( unsigned int parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	short_1 = short_1 + short_2;
	double_1 = double_1 + double_1;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_1;
	int_2 = int_2 * int_1;
	v_termpty_cells_clear(short_2,char_1,int_3);

	long_3 = long_1 + long_2;
	int_2 = int_1 * int_4;
	int_2 = int_3 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_termio_content_change(float_1,short_3,char_1,int_3);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_6;
	}
	unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
	short_2 = short_2 + short_4;
}
void v_termpty_clear_screen( float parameter_1,double parameter_2)
{
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	v_termio_content_change(float_1,short_1,char_3,int_2);

	v_termpty_cells_clear(short_2,char_2,int_3);

	double_1 = double_1 + double_1;
	v_termpty_clear_line(unsigned_int_1,long_1,int_4);

	long_2 = long_1 * long_1;
	long_4 = long_3 * long_2;
	unsigned_int_1 = unsigned_int_2;
}
void v_termpty_cell_codepoint_att_fill( char parameter_1,float parameter_2,short parameter_3,char parameter_4,int parameter_5)
{
	short short_1 = 1;
	char char_1 = 1;
	short_1 = short_1;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		long long_1 = 1;
		double_1 = double_1;
		long_1 = long_1;
	}
}
short v__termpty_charset_trans( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	int_1 = int_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	double_2 = double_1 + double_1;
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			double_4 = double_3 + double_3;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 * int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			int int_4 = 1;
			int_1 = int_4;
		}
		if(1)
		{
			int_1 = int_2;
		}
		if(1)
		{
			double_3 = double_2;
		}
	}
	return short_1;
}
void v_termio_content_change( float parameter_1,short parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_1 = 1;
	long long_3 = 1;
	int int_7 = 1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_1;
	int_1 = int_3 + int_2;
	double_2 = double_2 * double_2;
	if(1)
	{
		int int_5 = 1;
		char char_2 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		int_5 = int_2 + int_4;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		char_3 = char_1 * char_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
		char_1 = v__sel_set(short_1,char_3);

		unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_3 = double_1 * double_3;
			if(1)
			{
				unsigned_int_4 = unsigned_int_7 + unsigned_int_5;
				double_1 = double_4 * double_5;
			}
			double_4 = double_4 + double_4;
			double_2 = double_4 * double_2;
		}
	}
	if(1)
	{
	}
	short_2 = short_2 + short_2;
	char_4 = char_1;
	double_1 = double_2 * double_6;
	unsigned_int_7 = v__remove_links(int_1,unsigned_int_6,-1 );

	double_4 = double_5 + double_7;
	if(1)
	{
		char char_5 = 1;
		long long_2 = 1;
		char_5 = char_4 * char_1;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		int_4 = int_2 + int_4;
		long_3 = long_3 + long_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_6 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double_6 = double_5 * double_6;
			if(1)
			{
				unsigned_int_6 = unsigned_int_4 + unsigned_int_3;
				double_3 = double_7;
			}
			int_7 = int_6 * int_3;
			float_1 = float_2;
		}
	}
	if(1)
	{
		double double_8 = 1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
		double_2 = double_2 + double_2;
		double_8 = double_6 * double_6;
		double_6 = double_8 * double_1;
		int_1 = int_4 * int_3;
		if(1)
		{
			int_7 = int_4;
		}
	}
}
void v_termpty_text_append( short parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	char char_6 = 1;
	char char_7 = 1;
	long long_5 = 1;
	char_1 = char_1 * char_2;
	float_1 = float_1 + float_1;
	short_1 = short_1;
	float_2 = v__termpty_is_dblwidth_get(long_1,int_1);

	float_2 = float_2 * float_3;
	if(1)
	{
		long_2 = long_2 + long_1;
	}
	int_2 = int_2;
	double_3 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		long long_3 = 1;
		int int_4 = 1;
		double_4 = double_3 * double_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
			double_4 = double_3 * double_4;
			char_1 = char_3 + char_2;
			short_2 = short_1 + short_1;
			short_4 = short_2 * short_3;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
			}
		}
		long_3 = long_2 + long_1;
		if(1)
		{
			int_2 = int_2 + int_2;
		}
		if(1)
		{
			char char_4 = 1;
			char char_5 = 1;
			if(1)
			{
				double_1 = double_3 + double_3;
			}
			char_4 = char_4 + char_5;
		}
		short_3 = v__termpty_charset_trans(short_5,unsigned_int_1);

		long_3 = long_3 + long_1;
		if(1)
		{
			float_3 = float_1 + float_2;
			double_1 = double_4 * double_1;
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		if(1)
		{
			v_termio_content_change(float_2,short_1,char_3,int_1);

			char_3 = char_3 * char_1;
			int_3 = int_1 + int_2;
		}
		if(1)
		{
			v_termpty_cell_codepoint_att_fill(char_6,float_3,short_4,char_7,int_3);

			float_1 = float_1 + float_2;
			short_3 = short_4 * short_2;
			if(1)
			{
				long long_4 = 1;
				long_1 = long_4 + long_4;
			}
			if(1)
			{
				int_3 = int_4 * int_4;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
				double_3 = double_2 * double_1;
			}
		}
		if(1)
		{
			int int_5 = 1;
			unsigned int unsigned_int_5 = 1;
			float_2 = float_3;
			int_5 = int_4 + int_1;
			if(1)
			{
				float float_4 = 1;
				float_1 = float_4;
			}
			unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
			if(1)
			{
				short short_6 = 1;
				long_2 = long_3 * long_3;
				v_termpty_text_scroll_test(long_5,int_1,-1 );

				short_6 = short_4 * short_1;
			}
			int_1 = int_5 + int_2;
		}
	}
}
char v__csi_arg_get()
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	return char_1;
}
long v__handle_esc_csi( char parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	long long_3 = 1;
	char char_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int_1 = v__handle_cursor_control(int_2,double_1);

	char_1 = v__csi_arg_get();

	v_termpty_text_scroll(long_1,unsigned_int_1,-1 );

	int_3 = v__handle_esc_csi_cursor_pos_set(int_1,long_2,unsigned_int_2);

	v_termpty_clear_tabs_on_screen(double_2);

	long_2 = v__handle_esc_csi_reset_mode(char_2,int_4,short_1);

	long_2 = v__handle_esc_csi_color_set(double_2,long_2);

	v_termpty_cursor_copy(double_3,short_2);

	double_5 = double_1 + double_4;
	float_1 = v__safechar(float_1);

	v_termpty_clear_screen(float_1,double_2);

	v_termpty_clear_line(unsigned_int_1,long_3,int_2);

	v_termpty_text_scroll_rev(short_1,char_3);

	v_termpty_reset_state(short_2);

	char_3 = v__handle_esc_csi_decscusr(float_1,long_4);

	v__handle_esc_csi_decslrm(short_2,short_3);

	short_1 = short_3 + short_3;
	return long_2;
	v_termpty_text_append(short_2,int_1,int_3);

	short_4 = v__tab_forward(unsigned_int_1,int_3);

	v_termpty_clear_backlog(float_2);

	v_termpty_write(char_3,int_2,int_3);

	float_3 = v__handle_esc_csi_dsr(double_4,char_1);

	v__handle_esc_csi_decstbm(int_5,short_3);

	v__handle_esc_csi_decfra(short_4,double_4);

	char_3 = v__handle_esc_csi_decera(long_2,short_4);

}
float v__safechar( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	char_3 = char_3 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return float_1;
}
char v__handle_esc( double parameter_1,long parameter_2,char parameter_3,int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_5 = 1;
	char char_5 = 1;
	short short_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_13 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_7;
	long_1 = long_1;
	unsigned_int_8 = unsigned_int_5 + unsigned_int_8;
	short_1 = short_1;
	int_2 = int_1 * int_1;
	double_2 = double_2 + double_3;
	short_4 = short_2 * short_3;
	long_2 = long_1;
	unsigned_int_9 = unsigned_int_3 * unsigned_int_4;
	float_1 = float_1 * float_2;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
	int_3 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	int_4 = int_2;
	int_2 = int_4 * int_4;
	double_1 = double_4 * double_1;
	short_4 = short_1 + short_4;
	float_4 = float_2 + float_3;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_4;
	}
	if(1)
	{
	}
	unsigned_int_10 = unsigned_int_9 * unsigned_int_4;
	double_1 = double_4 + double_3;
	double_5 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_2;
	long_1 = long_2 * long_2;
	if(1)
	{
	}
	char_5 = char_5;
	float_3 = float_1;
	if(1)
	{
	}
	short_5 = short_5 + short_1;
	short_1 = short_3 + short_4;
	if(1)
	{
	}
	unsigned_int_9 = unsigned_int_7;
	double_1 = double_3 + double_6;
	if(1)
	{
	}
	char controller4vul_2751[3];
	fgets(controller4vul_2751 ,3 ,stdin);
	if( strcmp( controller4vul_2751, "|X") > 0)
	{
		unsigned int unsigned_int_11 = 1;
		unsigned int unsigned_int_12 = 1;
		float float_5 = 1;
		long long_3 = 1;
		int int_6 = 1;
		unsigned_int_10 = unsigned_int_11 * unsigned_int_12;
		double_3 = double_1;
		float_1 = float_2 + float_3;
		float_5 = float_4 * float_2;
		unsigned_int_12 = unsigned_int_2 + unsigned_int_4;
		char controller4vul_2752[3];
		fgets(controller4vul_2752 ,3 ,stdin);
		if( strcmp( controller4vul_2752, "F$") < 0)
		{
			int int_5 = 1;
			v_termpty_text_scroll_test(long_2,int_4,uni_para);

			int_5 = int_5 * int_2;
		}
		long_2 = long_3 + long_3;
		int_1 = int_2 * int_6;
		if(1)
		{
			double double_7 = 1;
			double double_8 = 1;
			unsigned_int_8 = unsigned_int_1 + unsigned_int_4;
			double_8 = double_7 + double_3;
			char_2 = char_1 + char_1;
		}
	}
	if(1)
	{
	}
	char_5 = char_5 + char_4;
	int_1 = int_1 * int_2;
	double_6 = double_4 + double_2;
	unsigned_int_13 = unsigned_int_8 + unsigned_int_3;
	unsigned_int_13 = unsigned_int_4 + unsigned_int_1;
	return char_1;
}
void v_termpty_cell_fill( float parameter_1,double parameter_2,long parameter_3,int parameter_4)
{
	float float_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short short_2 = 1;
			float_1 = float_1;
			short_1 = short_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_2 = 1;
			double double_1 = 1;
			float_1 = float_2 + float_1;
			double_1 = double_1 + double_1;
		}
	}
}
void v_termpty_cells_fill( unsigned int parameter_1,short parameter_2,long parameter_3,int parameter_4)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_1;
	double_1 = double_1 + double_1;
	double_3 = double_2 + double_1;
	double_1 = double_1 + double_4;
	long_2 = long_1 * long_1;
	v_termpty_cell_fill(float_1,double_2,long_3,int_1);

}
void v_termpty_cells_clear( short parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_termpty_cells_fill(unsigned_int_1,short_1,long_1,int_1);

	int_3 = int_1 * int_2;
}
long v__tooltip_del(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	int_2 = int_1;
	int_3 = int_2 * int_2;
	return long_1;
}
long v__tooltip_content(unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
	unsigned_int_3 = v_media_add(short_1,char_1,short_1,int_1,long_1,-1 );

	unsigned_int_1 = unsigned_int_3;
	return long_1;
}
void v_MD5Final( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_1;
	short_1 = short_1 + short_1;
	int_1 = int_1;
	double_1 = double_1 + double_1;
	v_MD5Transform(char_1,float_1);

	double_1 = double_2 + double_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		double_3 = double_3;
		char_1 = char_1 * char_1;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 * unsigned_int_5;
	}
	double_3 = double_1;
	short_1 = short_1 * short_1;
	int_2 = int_2 * int_2;
	v_byteReverse(char_2,double_1);

	int_3 = int_2 + int_2;
	short_2 = short_1 * short_1;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_3;
	int_3 = int_4;
}
void v_MD5Transform( char parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	double double_6 = 1;
	long long_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	char char_4 = 1;
	short short_4 = 1;
	long long_6 = 1;
	long long_7 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_7 = 1;
	char char_5 = 1;
	int int_8 = 1;
	float float_7 = 1;
	short_2 = short_1 * short_1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	double_2 = double_2;
	long_1 = long_1 + long_1;
	double_2 = double_2;
	double_3 = double_2 + double_1;
	long_2 = long_1;
	long_1 = long_2 + long_1;
	int_2 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
	double_3 = double_1 * double_1;
	long_1 = long_2 + long_1;
	short_3 = short_1 + short_3;
	int_4 = int_3 + int_4;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	double_5 = double_2 * double_4;
	long_3 = long_4;
	float_3 = float_1 + float_2;
	char_3 = char_1 + char_2;
	int_5 = int_1;
	long_1 = long_2 + long_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	double_3 = double_1 + double_5;
	unsigned_int_3 = unsigned_int_5;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_6 * double_6;
	float_1 = float_2;
	long_3 = long_1 + long_5;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	float_4 = float_1 * float_2;
	short_1 = short_3;
	long_5 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_3 = double_5 * double_2;
	int_2 = int_3 + int_2;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_2;
	int_6 = int_1 + int_4;
	float_2 = float_2 * float_4;
	long_5 = long_2;
	char_2 = char_4 + char_1;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
	long_4 = long_1 + long_1;
	short_3 = short_4 + short_4;
	long_6 = long_7;
	double_6 = double_7 * double_8;
	int_5 = int_5 * int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_7;
	unsigned_int_8 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_7 + unsigned_int_5;
	char_1 = char_3;
	float_2 = float_5 + float_6;
	unsigned_int_4 = unsigned_int_4;
	short_2 = short_3 * short_2;
	int_5 = int_5;
	long_5 = long_1 + long_3;
	int_2 = int_7 + int_6;
	float_5 = float_1;
	float_5 = float_4 + float_3;
	int_1 = int_4 * int_1;
	char_3 = char_5;
	short_4 = short_4 * short_4;
	unsigned_int_1 = unsigned_int_3;
	int_3 = int_2 * int_3;
	int_8 = int_2 * int_2;
	float_4 = float_7 * float_1;
	int_2 = int_1 + int_2;
	double_8 = double_4 + double_3;
	long_1 = long_1 + long_5;
	int_8 = int_7 + int_8;
}
void v_byteReverse( char parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_3 = char_1 + char_2;
}
void v_MD5Update( int parameter_1,char parameter_2,char parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float_1 = float_1;
	double_2 = double_1 * double_2;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2 * int_2;
	float_2 = float_2;
	int_3 = int_1 * int_2;
	int_4 = int_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_2;
	double_3 = double_2 + double_1;
	double_3 = double_1 * double_1;
	v_byteReverse(char_3,double_3);

	v_MD5Transform(char_1,float_1);

	long_2 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_3 = int_2 + int_4;
	short_1 = short_1;
}
void v_MD5Init( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_1;
	long_2 = long_1 + long_1;
	double_1 = double_2;
	short_3 = short_1 + short_2;
	char_1 = char_2;
	int_2 = int_1 * int_2;
}
void v_gravatar_tooltip( int parameter_1,long parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short_2 = short_1 * short_2;
	int_1 = int_1;
	float_2 = float_1 + float_2;
	int_2 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_MD5Update(int_3,char_1,char_2);

	v_MD5Final(unsigned_int_2,double_1);

	int_2 = int_2 + int_1;
	int_2 = int_3;
	if(1)
	{
	}
	int_1 = int_3 * int_2;
	if(1)
	{
	}
	float_3 = float_1 + float_1;
	long_1 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_4 = int_2 * int_2;
	double_1 = double_2 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		long_1 = v__tooltip_del(long_1);

		double_3 = double_1 + double_1;
		double_3 = double_4 + double_2;
	}
	v_MD5Init(int_2);

	long_2 = long_2 + long_1;
	long_3 = v__tooltip_content(unsigned_int_3,int_4);

	long_1 = long_1 * long_2;
	int_6 = int_5 + int_3;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
}
float v__cb_link_drag_done(int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	unsigned_int_3 = unsigned_int_3;
	return float_4;
}
short v__cb_link_drag_accept(double parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float_3 = float_1 * float_2;
	float_2 = float_2 * float_3;
	char_1 = char_2;
	return short_1;
}
void v__cb_link_drag_move(short parameter_2,unsigned int parameter_3,double parameter_4,double parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long_2 = long_1 * long_1;
	double_2 = double_1 * double_2;
	long_1 = long_2 + long_3;
	char_1 = char_1 + char_2;
	double_5 = double_3 * double_4;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			double_5 = double_4 + double_1;
		}
	}
}
char v__cb_link_icon_new(float parameter_2,int parameter_3,short parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	long_1 = long_1 + long_2;
	char_1 = char_1 + char_1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_3 + double_4;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	return char_2;
}
void v__cb_link_move(short parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	short_4 = short_4 * short_3;
	short_5 = v__cb_link_drag_accept(double_1,float_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		long long_3 = 1;
		float_1 = v__cb_link_drag_done(int_1);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		long_2 = long_1 * long_1;
		v__cb_link_drag_move(short_5,unsigned_int_1,double_4,double_4);

		int_1 = int_1 + int_1;
		if(1)
		{
			int_1 = int_2 * int_2;
		}
		if(1)
		{
			float float_2 = 1;
			char_1 = v__cb_link_icon_new(float_1,int_2,short_5);

			float_2 = float_1 * float_2;
		}
		int_2 = int_3 * int_1;
		long_3 = long_1 * long_2;
	}
}
long v__cb_link_up_delay()
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double_1 = v__activate_link(char_1,long_1);

	double_2 = double_1 + double_1;
	char_1 = char_1 * char_2;
	short_3 = short_1 * short_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	char_2 = char_3;
	return long_2;
}
short v__cb_link_up(char parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short_3 = short_1 * short_2;
	char_1 = char_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short_2 = short_2 + short_3;
		long_1 = v__cb_link_up_delay();

		double_3 = double_3 + double_2;
		long_1 = long_2 + long_1;
		double_3 = double_2 + double_2;
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
				int int_1 = 1;
				int int_2 = 1;
				int_2 = int_1 + int_1;
			}
		}
		double_5 = double_4 + double_2;
	}
	return short_1;
}
void v_term_focus( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = v__term_is_focused();

	int_1 = int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "9<") < 0)
	{
	}
	float_3 = float_1 + float_2;
	short_1 = short_2;
	int_3 = int_4;
}
int v__term_is_focused()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	return int_1;
}
void v_term_unfocus( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = int_2;
	char_1 = char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
	}
	double_1 = double_1;
	int_3 = v__term_is_focused();

	double_2 = double_2;
	double_4 = double_2 + double_3;
}
char v__cb_ctxp_del(char parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 * char_2;
	char_3 = char_3 + char_3;
	double_3 = double_1 * double_2;
	v_term_unfocus(float_1);

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return char_2;
	v_term_focus(double_2);

}
long v__cb_ctxp_dismissed(double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	float_2 = float_1 * float_1;
	int_3 = int_3 + int_3;
	char_1 = char_2;
	return long_1;
}
long v__cb_ctxp_link_copy(double parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	float float_2 = 1;
	int_1 = v__take_selection_text(char_1,float_1,long_1,-1 );

	double_1 = double_1 * double_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	int_1 = int_1 * int_2;
	float_1 = float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return long_1;
}
float v__screen_visual_bounds()
{
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "r") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		char_1 = char_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	}
	return float_1;
}
char v__draw_cell( double parameter_1,short parameter_2,double parameter_3,float parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	long long_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	short short_5 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float_1 = float_2;
	double_3 = double_1 * double_2;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_2 = double_1 * double_3;
	}
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	double_2 = double_4 * double_2;
	if(1)
	{
		long_3 = long_1;
	}
	if(1)
	{
		if(1)
		{
			float float_3 = 1;
			float_1 = float_3 * float_4;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
		}
	}
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "]d") < 0)
	{
		short short_4 = 1;
		short_5 = short_3 * short_4;
	}
	if(1)
	{
		long_3 = long_3 + long_4;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
		long_1 = long_4 * long_3;
		float_1 = float_4 + float_4;
		double_1 = double_3 * double_1;
		short_5 = short_5 * short_3;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_6;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		if(1)
		{
			float_4 = float_4;
		}
		if(1)
		{
			double double_5 = 1;
			double_4 = double_3 * double_5;
		}
	}
	if(1)
	{
		char_1 = char_2;
	}
	return char_3;
}
double v__draw_line( short parameter_1,char parameter_2,unsigned int parameter_3,int parameter_4,long parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		char_1 = v__draw_cell(double_1,short_1,double_2,float_1);

		float_2 = float_2 * float_1;
	}
	return double_2;
}
int v_termpty_backlog_length( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	short short_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short_1 = short_2;
	double_1 = double_1 * double_1;
	int_1 = int_1;
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_2;
	double_1 = double_2 + double_3;
	int_3 = int_1 * int_2;
	double_2 = double_1 * double_3;
	int_3 = int_2 + int_1;
	long_3 = long_1 * long_2;
	long_2 = long_3;
	char_1 = char_3;
	double_2 = double_2 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	float_1 = float_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_3;
	}
	double_1 = double_3 + double_2;
	if(1)
	{
		long_3 = long_4;
	}
	char_2 = v_verify_beacon(short_3,int_3);

	float_4 = float_4 + float_4;
	if(1)
	{
		char_2 = char_3 * char_1;
	}
	int_2 = int_2 + int_2;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	float_5 = float_1 + float_2;
	short_1 = short_4;
	long_3 = long_1 + long_4;
	int_4 = int_3 * int_3;
	int_6 = int_5 + int_3;
	return int_6;
}
double v_termio_pty_get( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_1;
	return double_1;
}
void v_termio_textgrid_get( float parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
void v_miniview_colors_get( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_2;
	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		v_termio_textgrid_get(float_3);

		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float_1 = float_2;
		double_2 = double_2 + double_2;
	}
}
void v__deferred_renderer()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_7 = 1;
	short short_7 = 1;
	double double_8 = 1;
	double double_10 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_11 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	short_2 = short_1 * short_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_1 = int_1;
	int_1 = int_1 + int_1;
	short_3 = short_3;
	double_1 = v__draw_line(short_3,char_1,unsigned_int_2,int_2,long_1);

	int_1 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_4;
	}
	double_2 = double_3;
	double_1 = double_3 + double_1;
	unsigned_int_5 = unsigned_int_5;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	int_1 = int_2 + int_3;
	char_2 = char_1 + char_2;
	v_miniview_colors_get(long_1,double_2);

	short_6 = short_5 * short_1;
	long_1 = long_2 + long_3;
	int_4 = v_termio_scroll_get(short_3);

	unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	double_4 = double_3;
	short_5 = short_1 * short_4;
	if(1)
	{
		char_1 = char_2 + char_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_6 = unsigned_int_1;
		if(1)
		{
			long_1 = long_1 + long_1;
		}
		double_3 = double_2 * double_3;
	}
	int_3 = int_2 + int_1;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_7;
	int_2 = v_termpty_backlog_length(double_4);

	double_5 = double_3 * double_3;
	if(1)
	{
		double_1 = double_6 * double_3;
	}
	if(1)
	{
		float_1 = v__screen_visual_bounds();

		char_2 = char_2 * char_1;
	}
	int_2 = int_5;
	int_2 = int_4 + int_6;
	if(1)
	{
		int_1 = int_6 * int_2;
		unsigned_int_3 = unsigned_int_4;
		if(1)
		{
			char_1 = v_termpty_cellrow_get(long_1,int_1,unsigned_int_6);

			int_7 = int_7;
			long_1 = long_1;
		}
		if(1)
		{
			if(1)
			{
				double double_9 = 1;
				double_5 = double_7 * double_4;
				short_2 = short_7 + short_5;
				double_7 = double_6 * double_8;
				double_5 = double_1 * double_9;
			}
			if(1)
			{
				char char_3 = 1;
				double_10 = v_termio_pty_get(int_7);

				float_2 = float_2 * float_2;
				char_1 = char_3 + char_3;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_8;
	}
	long_5 = long_1 + long_4;
	double_7 = double_8 * double_11;
	float_2 = float_3;
	short_7 = short_5 * short_1;
}
void v__queue_render( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	v__deferred_renderer();

	double_1 = double_1 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "h") > 0)
	{
		double double_3 = 1;
		double_1 = double_3;
	}
}
void v_miniview_redraw( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	v__queue_render(unsigned_int_1);

}
double v__block_obj_del( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	int_1 = int_2;
	short_1 = v__smart_media_del(double_1,short_1);

	long_1 = long_1 + long_2;
	return double_2;
}
unsigned int v__termpty_is_dblwidth_slow_get( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ":I") > 0)
	{
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
float v__termpty_is_dblwidth_get( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
	unsigned_int_1 = v__termpty_is_dblwidth_slow_get(double_1,int_1);

}
unsigned int v_term_preedit_str_get( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
	}
	return unsigned_int_3;
}
char v_media_get( float parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	return char_1;
}
int v__smart_media_clicked(unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float_2 = float_1 * float_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	if(1)
	{
		if(1)
		{
			float_2 = float_1 * float_1;
			float_1 = float_1 * float_1;
			char controller_4[2];
			fgets(controller_4 ,2 ,stdin);
			if( strcmp( controller_4, "S") < 0)
			{
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				if(1)
				{
					short short_1 = 1;
					short short_2 = 1;
					unsigned int unsigned_int_1 = 1;
					double double_1 = 1;
					long_2 = v_media_src_type_get(int_1);

					short_2 = short_1 * short_2;
					unsigned_int_1 = unsigned_int_2;
					if(1)
					{
						double_1 = double_1;
					}
					if(1)
					{
						char char_3 = 1;
						char_3 = char_3 * char_1;
						double_1 = double_2 * double_2;
						if(1)
						{
							double double_5 = 1;
							char_3 = char_2 * char_2;
							double_4 = double_1 * double_3;
							double_2 = double_3 + double_5;
						}
					}
				}
				double_3 = double_4 + double_2;
			}
		}
	}
	unsigned_int_2 = v_termio_config_get(char_2);

	short_3 = short_4;
	return int_1;
	char_1 = v_media_get(float_2);

}
unsigned int v_media_control_get( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	return unsigned_int_2;
}
double v__smart_media_stop(float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	return double_1;
}
unsigned int v__smart_media_pause(char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1;
	return unsigned_int_3;
}
short v__smart_media_play(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	return short_1;
}
short v__smart_media_del(double parameter_2,short parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return short_1;
}
void v_media_visualize_set( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 * long_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_2;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3;
	}
}
void v_media_mute_set( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "X") > 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
}
void v_media_volume_set( unsigned int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	int_2 = int_2;
	float_1 = float_1 + float_1;
}
double v__cb_media_vol(char parameter_2,unsigned int parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Yj") < 0)
	{
	}
	int_3 = int_4;
	v_media_volume_set(unsigned_int_1,double_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return double_1;
}
void v__cb_media_pos(char parameter_2,short parameter_3,long parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_media_position_set(char_1,double_1);

	unsigned_int_1 = unsigned_int_1;
	float_1 = float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") == 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
}
short v__cb_media_pos_drag_stop(char parameter_2,char parameter_3,float parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long_2 = long_1 + long_2;
	long_1 = long_2 * long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "]t") > 0)
	{
	}
	float_1 = float_1;
	char_1 = char_1 * char_1;
	int_1 = int_1 + int_2;
	char_2 = char_2 + char_1;
	short_1 = short_1;
	return short_1;
}
short v__cb_media_pos_drag_start(int parameter_2,double parameter_3,short parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double_1 = double_1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	char_1 = char_1;
	short_2 = short_1 + short_1;
	return short_2;
	v_media_position_set(char_1,double_1);

}
void v_media_stop( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	short_1 = short_2;
	char_2 = char_1 + char_1;
}
char v__cb_media_stop(short parameter_2,char parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	return char_1;
	v_media_stop(float_1);

}
float v__cb_media_pause(char parameter_2,int parameter_3,double parameter_4)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	v_media_play_set(char_1,short_1);

	int_1 = int_1 * int_2;
	return float_1;
}
void v_media_play_set( char parameter_1,short parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_4 = double_1 * double_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int_1 = int_1;
		unsigned_int_3 = unsigned_int_4;
	}
}
int v__cb_media_play(float parameter_2,char parameter_3,char parameter_4)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_media_play_set(char_1,short_1);

	int_1 = int_1;
	return int_2;
}
void v_media_position_set( char parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
}
float v__cb_mov_ref(float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return float_1;
}
float v__cb_mov_progress(unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	char_1 = char_1 + char_2;
	return float_1;
}
float v__cb_mov_restart()
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	float_1 = float_2;
	int_3 = int_1 + int_2;
	long_3 = long_3 + long_3;
	return float_3;
}
long v__cb_mov_decode_stop(unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_1;
	float_2 = v__cb_mov_restart();

}
double v__cb_mov_len_change(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	return double_1;
}
short v__cb_mov_frame_resize(unsigned int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char_1 = char_1 + char_1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_1 = v__type_mov_calc(double_1,short_1,short_1,short_1,unsigned_int_1);

	short_3 = short_1 + short_2;
	short_4 = short_1 + short_2;
	return short_4;
}
unsigned int v__cb_mov_frame_decode(long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_3 = 1;
	float_3 = float_1 * float_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = v__type_mov_calc(double_1,short_1,short_1,short_2,unsigned_int_2);

	double_2 = double_2 * double_3;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "|;") > 0)
	{
	}
	short_1 = short_1 + short_1;
	short_1 = short_3;
	int_2 = int_1;
	int_3 = int_3;
	return unsigned_int_1;
}
long v__type_mov_init( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_5 = 1;
	long long_2 = 1;
	short short_4 = 1;
	long long_3 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_7 = 1;
	int int_5 = 1;
	char char_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_7 = 1;
	int int_6 = 1;
	double double_7 = 1;
	double_1 = v__cb_mov_len_change(int_1);

	float_1 = v__cb_mov_progress(unsigned_int_1);

	v_media_visualize_set(int_1,int_1);

	short_2 = short_1 + short_1;
	int_3 = int_2 + int_3;
	v_media_play_set(char_1,short_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_2;
	short_1 = v__cb_mov_frame_resize(unsigned_int_1);

	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1;
	short_1 = v__cb_media_pos_drag_stop(char_2,char_1,float_2);

	double_3 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		int_1 = v_theme_apply(unsigned_int_1,double_4,float_3);

		char_1 = char_1;
	}
	if(1)
	{
		char_2 = char_2 + char_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		long_1 = long_1 + long_1;
	}
	unsigned_int_4 = unsigned_int_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	double_1 = double_4;
	double_2 = double_1;
	int_2 = int_3 * int_2;
	int_1 = int_2 + int_4;
	double_3 = v__cb_media_vol(char_1,unsigned_int_1,short_3);

	float_1 = float_3;
	if(1)
	{
		int_1 = v__cb_media_play(float_4,char_3,char_4);

		double_2 = double_1;
	}
	if(1)
	{
		short_1 = short_2;
	}
	float_5 = v__cb_mov_ref(float_5);

	long_1 = long_2;
	double_2 = double_2 * double_4;
	short_4 = short_4;
	long_3 = long_1 * long_1;
	short_2 = short_1 * short_1;
	short_6 = short_2 + short_5;
	unsigned_int_5 = v__cb_mov_frame_decode(long_2);

	double_4 = double_1 + double_3;
	char_2 = v__cb_media_stop(short_7,char_3,int_5);

	unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	short_3 = v__cb_media_pos_drag_start(int_3,double_1,short_7);

	v_media_mute_set(char_5,unsigned_int_3);

	long_1 = long_1 * long_2;
	double_6 = double_4 * double_5;
	v_media_position_set(char_5,double_5);

	v__cb_media_pos(char_6,short_2,long_4);

	long_5 = long_2 * long_1;
	long_1 = v__cb_mov_decode_stop(unsigned_int_3);

	double_5 = double_1 * double_4;
	int_5 = int_3 + int_3;
	long_6 = long_4 * long_3;
	float_5 = v__cb_media_pause(char_7,int_6,double_2);

	unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
	double_5 = double_5 * double_7;
	char_6 = char_4 * char_6;
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		char_5 = char_4 * char_4;
	}
	return long_6;
}
unsigned int v__cb_edje_preloaded(short parameter_2,unsigned int parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	int_1 = int_1 * int_1;
	return unsigned_int_1;
}
void v__type_edje_init( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_5 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned_int_1 = v__cb_edje_preloaded(short_1,unsigned_int_2,short_1);

	short_1 = short_2 * short_3;
	char_2 = char_1 + char_2;
	double_1 = double_2;
	char_4 = char_3 * char_1;
	double_3 = double_1 + double_2;
	int_2 = int_1 + int_2;
	v_theme_auto_reload_enable(char_5);

	double_1 = double_1 * double_3;
	float_1 = float_1 + float_1;
	double_3 = double_1 * double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_5 = 1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			double_5 = double_2 * double_2;
			int_1 = int_2 * int_2;
		}
	}
}
double v__type_scale_init( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short_2 = short_1 * short_2;
	float_1 = v__cb_scale_preloaded(unsigned_int_1,unsigned_int_2);

	short_4 = short_3 + short_3;
	int_1 = int_1 * int_1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	float_3 = float_1 * float_2;
	double_3 = double_1 + double_2;
	char_2 = char_1 * char_2;
	int_3 = int_1 + int_2;
	char_2 = char_3 * char_1;
	double_3 = double_1 * double_3;
	return double_4;
}
void v__cb_img_frame()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_2;
	long_2 = long_1 + long_1;
	long_2 = long_3 + long_4;
	if(1)
	{
	}
	int_1 = int_2;
	long_3 = long_4 * long_2;
	if(1)
	{
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float_1 = float_1;
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		double_1 = double_1 + double_3;
		char_3 = char_1 + char_2;
		if(1)
		{
			if(1)
			{
				int int_3 = 1;
				int_1 = int_2 * int_3;
			}
		}
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	double_2 = double_1 * double_3;
}
int v__type_img_anim_handle( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v__cb_img_frame();

	int_2 = int_1 * int_1;
	short_1 = short_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	char_1 = char_1 * char_1;
	return int_3;
}
int v__cb_img_preloaded(double parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	int_4 = int_1 * int_3;
	return int_4;
}
short v__type_img_init()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_6 = 1;
	float float_1 = 1;
	char char_5 = 1;
	short_3 = short_1 + short_2;
	int_1 = v__cb_img_preloaded(double_1,double_1);

	char_1 = char_1;
	long_1 = long_1;
	char_4 = char_2 * char_3;
	int_3 = int_2 * int_1;
	double_2 = double_1 * double_2;
	int_5 = int_4 * int_1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = v__type_img_anim_handle(double_2);

	int_6 = int_3 + int_6;
	float_1 = float_1 * float_1;
	char_4 = char_1 + char_5;
	return short_3;
}
unsigned int v__url_compl_cb(int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = double_1 + double_2;
	float_2 = float_1 * float_1;
	long_2 = long_1 + long_1;
	char controller4vul_2783[2];
	fgets(controller4vul_2783 ,2 ,stdin);
	if( strcmp( controller4vul_2783, "c") < 0)
	{
		float_3 = v__smart_calculate(unsigned_int_1,uni_para);

	}
	if(1)
	{
	}
	double_3 = double_1 + double_1;
	short_1 = short_2;
	float_2 = float_1 * float_4;
	int_2 = int_1 + int_1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2 * short_1;
	double_1 = double_4 * double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	long_1 = long_1;
	double_1 = double_2 * double_3;
	double_5 = double_4 * double_2;
	char_4 = char_2 + char_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	long_2 = long_3 * long_3;
	unsigned_int_5 = unsigned_int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
	unsigned_int_2 = unsigned_int_5;
	return unsigned_int_3;
}
long v__url_prog_cb(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long_2 = long_1 + long_1;
	short_1 = short_1;
	int_1 = int_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "[") < 0)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			long_2 = long_3 * long_4;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_1 * int_2;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			long long_5 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int_2 = int_3 + int_4;
			long_4 = long_5 * long_2;
			int_3 = int_2 + int_4;
			double_2 = double_1 * double_1;
		}
	}
	return long_3;
}
int v__type_thumb_calc( double parameter_1,int parameter_2,long parameter_3,char parameter_4,long parameter_5)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_2 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_1 * int_2;
		int_3 = int_2 * int_3;
	}
	if(1)
	{
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		int_4 = int_3 + int_2;
		short_1 = short_1 + short_1;
		char_2 = char_1 * char_2;
		if(1)
		{
			double_1 = double_1 + double_1;
			int_1 = int_4 * int_3;
			if(1)
			{
				int_5 = int_1 + int_3;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			float_1 = float_2;
		}
		int_2 = int_3;
		int_6 = int_3 * int_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		char_3 = char_2 + char_1;
	}
	int_1 = int_5 + int_6;
	double_1 = double_2 + double_2;
	return int_4;
}
unsigned int v__type_mov_calc( double parameter_1,short parameter_2,short parameter_3,short parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_3 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	int_2 = int_4 * int_2;
	int_2 = int_4 + int_2;
	short_1 = short_2;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_4 = 1;
		long_2 = long_2 + long_3;
		int_1 = int_2 + int_3;
		short_2 = short_2 + short_3;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		if(1)
		{
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_2 * double_3;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				double_3 = double_2 + double_2;
				long_4 = long_4 * long_1;
				if(1)
				{
					double_2 = double_2 + double_4;
				}
			}
		}
		if(1)
		{
			char char_1 = 1;
			unsigned_int_3 = unsigned_int_3;
			char_1 = char_1 + char_2;
			if(1)
			{
				int_3 = int_2 + int_5;
				unsigned_int_4 = unsigned_int_1;
				if(1)
				{
					char_1 = char_2 * char_2;
				}
			}
		}
		if(1)
		{
			long_4 = long_2;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		}
		int_2 = int_5 * int_2;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		short_2 = short_4 + short_1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
	}
	int_7 = int_3 + int_6;
	char_3 = char_2 + char_3;
	return unsigned_int_5;
}
void v__type_edje_calc( long parameter_1,short parameter_2,short parameter_3,int parameter_4,unsigned int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Q") < 0)
	{
	}
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
}
void v__type_img_calc( char parameter_1,unsigned int parameter_2,short parameter_3,unsigned int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 + int_1;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_1 + double_1;
		if(1)
		{
			double_3 = double_2 + double_1;
			int_1 = int_2 * int_2;
			if(1)
			{
				short short_1 = 1;
				int_3 = int_3 * int_3;
				short_1 = short_1;
				if(1)
				{
					int_2 = int_2 * int_2;
				}
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
			int_1 = int_2;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_1 = char_2;
				int_1 = int_1 * int_3;
				if(1)
				{
					char char_3 = 1;
					char_3 = char_2 + char_1;
				}
			}
			if(1)
			{
				long_1 = long_3 * long_4;
				double_3 = double_2 * double_3;
			}
		}
		if(1)
		{
			short short_2 = 1;
			long_3 = long_4 + long_2;
			short_4 = short_2 + short_3;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		long_4 = long_3 * long_3;
		float_1 = float_1 * float_2;
		int_3 = int_2 + int_1;
	}
	unsigned_int_3 = unsigned_int_2;
	short_4 = short_3;
}
float v__cb_scale_preloaded(unsigned int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		double_1 = double_1 * double_2;
		long_2 = long_1 * long_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "Y[") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		char_1 = char_2;
		double_2 = double_1 + double_3;
		short_1 = short_1;
		long_2 = long_3;
		long_2 = long_4 * long_4;
	}
	return float_1;
}
int v__type_scale_calc( float parameter_1,int parameter_2,float parameter_3,long parameter_4,char parameter_5,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char * vul_var;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_1;
		unsigned_int_3 = unsigned_int_1;
	}
	char controller4vul_2791[2];
	fgets(controller4vul_2791 ,2 ,stdin);
	if( strcmp( controller4vul_2791, "<") < 0)
	{
		short short_4 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		int_1 = int_2;
		char controller4vul_2792[3];
		fgets(controller4vul_2792 ,3 ,stdin);
		if( strcmp( controller4vul_2792, "<W") < 0)
		{
			short_1 = short_1 + short_1;
			double_3 = double_1 + double_2;
			char controller4vul_2793[2];
			fgets(controller4vul_2793 ,2 ,stdin);
			if( strcmp( controller4vul_2793, "j") < 0)
			{
				long long_2 = 1;
				long_1 = long_2 + long_1;
				long_1 = long_2 + long_3;
				char controller4vul_2794[2];
				fgets(controller4vul_2794 ,2 ,stdin);
				if( strcmp( controller4vul_2794, "_") > 0)
				{
					if(uni_para == 949)
					{
						vul_var = vul_var + 1;
					}
					free(vul_var);
					unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
				}
			}
		}
		if(1)
		{
			int_1 = int_1 * int_3;
			short_1 = short_1 + short_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
				double_4 = double_2 + double_3;
				if(1)
				{
					short_3 = short_3;
				}
			}
		}
		if(1)
		{
			int_4 = int_4;
			long_4 = long_3 + long_1;
		}
		int_4 = int_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		float_2 = float_1 * float_2;
		short_4 = short_1 * short_3;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_2 * float_3;
		short_1 = short_3 * short_3;
		double_2 = double_1;
		if(1)
		{
			int_1 = int_5;
		}
		if(1)
		{
			char_1 = char_1 * char_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
			double_4 = double_1 + double_2;
			double_2 = double_4 * double_3;
			int_1 = int_3;
			int_4 = int_2 + int_2;
			short_2 = short_1;
			double_2 = double_1 + double_5;
			short_2 = short_2;
			long_4 = long_3;
		}
		double_4 = double_2 * double_4;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_5;
	}
	if(1)
	{
		double_4 = double_4 + double_5;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
	}
	float_1 = float_1 + float_1;
	unsigned_int_8 = unsigned_int_6 * unsigned_int_7;
	int_5 = int_4 + int_5;
}
double v__unsmooth_timeout(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_2;
	char controller4vul_2789[2];
	fgets(controller4vul_2789 ,2 ,stdin);
	if( strcmp( controller4vul_2789, "/") > 0)
	{
		double_2 = double_1 * double_2;
		char controller4vul_2790[3];
		fgets(controller4vul_2790 ,3 ,stdin);
		if( strcmp( controller4vul_2790, "#B") < 0)
		{
			int_3 = v__type_scale_calc(float_2,int_4,float_2,long_1,char_1,uni_para);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	}
	return double_1;
}
int v__smooth_handler( short parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	char controller4vul_2785[3];
	fgets(controller4vul_2785 ,3 ,stdin);
	if( strcmp( controller4vul_2785, "=`") < 0)
	{
		char controller4vul_2786[2];
		fgets(controller4vul_2786 ,2 ,stdin);
		if( strcmp( controller4vul_2786, "|") > 0)
		{
			int int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int_2 = int_2 * int_3;
			float_1 = float_1 + float_2;
			char controller4vul_2787[3];
			fgets(controller4vul_2787 ,3 ,stdin);
			if( strcmp( controller4vul_2787, "z@") < 0)
			{
				double_4 = double_2;
				char controller4vul_2788[3];
				fgets(controller4vul_2788 ,3 ,stdin);
				if( strcmp( controller4vul_2788, "G*") > 0)
				{
					char char_2 = 1;
					char char_3 = 1;
					double_1 = v__unsmooth_timeout(uni_para);

					char_2 = char_3;
				}
			}
			if(1)
			{
				long long_1 = 1;
				long_1 = long_1 * long_1;
			}
			if(1)
			{
				short short_1 = 1;
				short_1 = short_1 + short_1;
			}
			unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
		}
	}
	if(1)
	{
		double double_5 = 1;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
		}
		double_3 = double_5 + double_4;
	}
	return int_3;
}
float v__smart_calculate( unsigned int parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_2784[3];
	fgets(controller4vul_2784 ,3 ,stdin);
	if( strcmp( controller4vul_2784, " a") < 0)
	{
		int_2 = v__smooth_handler(short_1,uni_para);

	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	int_3 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	double_3 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	float_3 = float_1 + float_3;
	short_3 = short_2 + short_1;
	unsigned_int_3 = unsigned_int_3;
	float_2 = float_4 + float_1;
	char_1 = char_1 * char_1;
	int_2 = int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	int_4 = int_5;
	char_2 = char_2 + char_3;
	double_2 = double_4 + double_3;
	long_3 = long_1 + long_2;
	if(1)
	{
		int int_6 = 1;
		int_3 = int_3 + int_4;
		int_4 = int_6 + int_4;
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_4 = char_3 + char_4;
		char_5 = char_1 + char_2;
	}
	return float_2;
}
void v__smart_move( unsigned int parameter_1,short parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	char_1 = char_1;
}
unsigned int v__smart_resize( unsigned int parameter_1,float parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 * long_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	long_4 = long_2 * long_3;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	char_2 = char_2 + char_2;
	return unsigned_int_1;
}
int v__smart_del( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		char char_3 = 1;
		int int_1 = 1;
		int int_3 = 1;
		char_3 = char_1 * char_2;
		int_1 = int_2;
		int_2 = int_3 + int_1;
	}
	long_1 = long_2;
	short_4 = short_3 + short_1;
	double_3 = double_3;
	if(1)
	{
		if(1)
		{
			double_2 = double_2 + double_1;
		}
		double_1 = double_4 * double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	}
	if(1)
	{
		short short_5 = 1;
		short_3 = short_5 + short_4;
	}
	if(1)
	{
		double_1 = double_2 + double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	}
	if(1)
	{
		double double_5 = 1;
		double_4 = double_5 + double_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_3 + double_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3;
	}
	if(1)
	{
		char_2 = char_1;
	}
	char_2 = char_4 + char_1;
	char_4 = char_1;
	return int_2;
}
char v__smart_add( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_1 * double_2;
	double_3 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_2 = short_3 + short_2;
	short_1 = short_4 + short_3;
	return char_1;
}
int v__smart_init()
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 + int_1;
	float_1 = v__smart_calculate(unsigned_int_1,-1 );

	int_1 = int_2;
	unsigned_int_2 = unsigned_int_2;
	long_1 = long_1 + long_1;
	long_2 = long_2 + long_3;
	unsigned_int_1 = v__smart_resize(unsigned_int_3,float_1,double_1);

	v__smart_move(unsigned_int_1,short_1,long_1);

	double_1 = double_2;
	unsigned_int_3 = unsigned_int_2;
	char_1 = char_1 * char_1;
	int_2 = int_2;
	char_1 = v__smart_add(double_1);

	int_2 = v__smart_del(float_1);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	int_2 = int_1 + int_1;
	return int_2;
}
unsigned int v_media_add( short parameter_1,char parameter_2,short parameter_3,int parameter_4,long parameter_5,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_8 = 1;
	int int_9 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_10 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_6 = 1;
	short short_3 = 1;
	float float_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_12 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_2;
	float_1 = float_1 + float_1;
	double_3 = double_2;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	char_2 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_5;
	long_1 = long_1;
	char_1 = char_2;
	char controller4vul_2777[3];
	fgets(controller4vul_2777 ,3 ,stdin);
	if( strcmp( controller4vul_2777, "rj") < 0)
	{
		char controller4vul_2778[3];
		fgets(controller4vul_2778 ,3 ,stdin);
		if( strcmp( controller4vul_2778, ")v") < 0)
		{
			int int_4 = 1;
			double_1 = double_2 * double_1;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
			if(1)
			{
				int int_5 = 1;
				int_5 = int_3 * int_4;
				int_5 = int_4 * int_1;
				int_6 = int_1 * int_4;
			}
			if(1)
			{
				long_1 = long_1;
				unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
				unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
			}
			if(1)
			{
				int_6 = int_4 + int_7;
			}
			if(1)
			{
				int_4 = int_6 + int_1;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
			}
			if(1)
			{
				int_6 = int_7 * int_6;
			}
			if(1)
			{
				double_1 = double_4 * double_5;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
				unsigned_int_6 = unsigned_int_6 + unsigned_int_6;
				int_1 = int_8;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
				int_6 = int_9 * int_4;
				unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
				double_5 = double_1 + double_2;
			}
			char controller4vul_2779[3];
			fgets(controller4vul_2779 ,3 ,stdin);
			if( strcmp( controller4vul_2779, "Q;") < 0)
			{
				double_3 = double_1 + double_2;
				double_4 = double_4 + double_2;
				long_2 = long_1 + long_1;
				char controller4vul_2780[2];
				fgets(controller4vul_2780 ,2 ,stdin);
				if( strcmp( controller4vul_2780, "9") < 0)
				{
					short_1 = short_2;
					if(1)
					{
						float float_2 = 1;
						int_10 = int_10 + int_7;
						float_1 = float_1 * float_2;
					}
					char controller4vul_2781[3];
					fgets(controller4vul_2781 ,3 ,stdin);
					if( strcmp( controller4vul_2781, "cO") > 0)
					{
						double_2 = double_4 * double_5;
						char controller4vul_2782[3];
						fgets(controller4vul_2782 ,3 ,stdin);
						if( strcmp( controller4vul_2782, "rs") < 0)
						{
							unsigned_int_2 = v__url_compl_cb(int_7,uni_para);

							unsigned_int_4 = unsigned_int_6;
							int_3 = int_10 + int_1;
							unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
						}
						if(1)
						{
							float_4 = float_3 * float_3;
							double_5 = double_2;
							short_2 = short_2 + short_1;
							unsigned_int_7 = unsigned_int_4 * unsigned_int_4;
							unsigned_int_7 = unsigned_int_8;
							int_2 = int_3 + int_7;
							double_1 = double_3 * double_4;
							unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
							int_10 = int_1 * int_3;
						}
					}
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_7 + unsigned_int_5;
				}
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_9 = 1;
			unsigned_int_7 = unsigned_int_9 * unsigned_int_7;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
		}
	}
	if(1)
	{
		long long_4 = 1;
		unsigned int unsigned_int_10 = 1;
		int int_11 = 1;
		char char_3 = 1;
		if(1)
		{
			long long_3 = 1;
			int_10 = int_9 * int_2;
			long_3 = long_4;
		}
		short_1 = short_2 * short_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_7 * unsigned_int_10;
			double_6 = double_2 + double_4;
		}
		float_4 = float_3 + float_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_10 * unsigned_int_6;
			short_2 = short_3 + short_3;
		}
		int_6 = int_6 * int_9;
		if(1)
		{
			long_4 = long_2;
			int_9 = int_6 + int_8;
		}
		int_6 = int_11 + int_9;
		char_3 = char_1;
	}
	float_3 = float_4 + float_5;
	int_6 = int_3;
	double_7 = double_3 * double_5;
	unsigned_int_11 = unsigned_int_1 * unsigned_int_5;
	double_6 = double_4 + double_3;
	int_12 = int_12 * int_10;
	short_2 = short_2 + short_3;
	float_4 = float_5 * float_3;
	if(1)
	{
		unsigned_int_6 = unsigned_int_1 + unsigned_int_8;
	}
	return unsigned_int_2;
}
char v__block_media_activate( char parameter_1,char parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long_1 = long_2;
	short_1 = short_1 * short_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2 * long_1;
	char controller4vul_2776[3];
	fgets(controller4vul_2776 ,3 ,stdin);
	if( strcmp( controller4vul_2776, "jC") < 0)
	{
		unsigned_int_3 = v_media_add(short_1,char_1,short_2,int_1,long_1,uni_para);

		double_1 = double_3 + double_1;
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		long_2 = long_3 + long_3;
	}
	if(1)
	{
		double_2 = double_2 + double_3;
	}
	if(1)
	{
		double_4 = double_3 * double_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3;
	}
	unsigned_int_4 = unsigned_int_5;
	short_2 = short_2;
	if(1)
	{
		int int_2 = 1;
		int_3 = int_2 * int_3;
	}
	char_3 = char_1 * char_2;
	double_1 = double_4 * double_5;
	double_3 = double_1;
	long_3 = long_3 * long_3;
	int_3 = int_4 + int_5;
	int_3 = int_4 * int_5;
	long_2 = long_1 * long_1;
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		double_4 = double_4 + double_5;
		long_4 = long_5;
	}
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_6 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_7 + unsigned_int_7;
	if(1)
	{
		int_4 = int_4;
	}
	return char_3;
}
double v__block_edje_message_cb(double parameter_2,short parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_3 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_6 = 1;
	char char_3 = 1;
	long long_7 = 1;
	long long_8 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_6 = 1;
	long long_9 = 1;
	long long_10 = 1;
	char char_5 = 1;
	double double_4 = 1;
	int int_9 = 1;
	int int_10 = 1;
	int int_11 = 1;
	char char_6 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_5 = 1;
	char char_7 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_2;
	int_3 = int_1 + int_3;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
	if(1)
	{
	}
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	long_1 = long_1;
	if(1)
	{
	}
	long_3 = long_2 + long_1;
	int_3 = int_3 * int_4;
	long_4 = long_1 * long_2;
	long_5 = long_5 + long_3;
	float_3 = float_1 * float_1;
	int_2 = int_1 * int_5;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_7 + unsigned_int_2;
	short_1 = short_1;
	int_5 = int_1 + int_5;
	int_3 = int_6 * int_1;
	double_3 = double_1 * double_2;
	char_2 = char_1 + char_2;
	int_8 = int_7 * int_5;
	long_6 = long_1 * long_5;
	short_2 = short_1 * short_1;
	long_1 = long_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_3 = char_2 + char_1;
		int_8 = int_2 + int_7;
	}
	unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
	long_7 = long_8;
	short_5 = short_3 * short_4;
	char_3 = char_1 + char_2;
	unsigned_int_8 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_4;
	float_2 = float_3 * float_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_5 = short_5 * short_1;
		int_7 = int_3 + int_3;
		float_2 = float_4 * float_5;
	}
	unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
	short_6 = short_4 * short_3;
	char_3 = char_2 + char_1;
	long_1 = long_9 + long_10;
	char_2 = char_5;
	short_6 = short_1;
	double_4 = double_1 + double_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float_4 = float_1 + float_1;
		float_1 = float_4;
		int_6 = int_9 + int_4;
	}
	v_termpty_write(char_5,int_2,int_9);

	int_6 = int_10 + int_11;
	char_3 = char_5 * char_2;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_3;
	int_2 = int_9 * int_8;
	char_2 = char_6;
	float_2 = float_6 * float_3;
	long_10 = long_6;
	int_1 = int_9 * int_7;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_9;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_8 = int_6 * int_5;
	long_6 = long_2 + long_6;
	long_3 = long_9 + long_8;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_4;
	int_11 = int_7 * int_10;
	int_9 = int_7;
	long_7 = long_5 * long_9;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short_3 = short_1 * short_6;
		int_10 = int_6 * int_8;
		int_1 = int_10;
	}
	double_4 = double_5;
	int_6 = int_6 * int_1;
	char_7 = char_2 * char_6;
	unsigned_int_8 = unsigned_int_7 + unsigned_int_1;
	short_4 = short_2 + short_6;
	float_6 = float_1 + float_5;
	char_7 = char_2;
	double_5 = double_5;
	double_1 = double_3 + double_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double_3 = double_5 + double_5;
		unsigned_int_8 = unsigned_int_1 * unsigned_int_1;
		short_1 = short_2 * short_2;
	}
	int_4 = int_9 * int_7;
	int_6 = int_4;
	unsigned_int_9 = unsigned_int_6 + unsigned_int_1;
	return double_3;
}
void v_termpty_write( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "CB") > 0)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
}
void v__block_edje_signal_cb(int parameter_2,char parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_6 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_7 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_2 + int_4;
	double_3 = double_1 * double_2;
	double_2 = double_1 * double_2;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	int_1 = int_4 + int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_5 = int_1 + int_5;
		double_3 = double_1 * double_3;
		int_6 = int_1 + int_1;
		int_6 = int_4 * int_5;
		double_4 = double_2 + double_1;
		long_1 = long_1;
		double_2 = double_1 + double_1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double_3 = double_5 * double_1;
		double_4 = double_6 * double_4;
		double_2 = double_5;
	}
	v_termpty_write(char_1,int_6,int_7);

}
void v_termpty_block_chid_update( char parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
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
	short_2 = short_1 * short_2;
}
float v__block_edje_cmds( char parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	v__block_edje_signal_cb(int_1,char_1,double_1);

	double_3 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
	v_termpty_block_chid_update(char_1,float_2);

	double_2 = v__block_edje_message_cb(double_4,short_1,int_1);

}
char v_homedir_get( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_2 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			double double_3 = 1;
			double_1 = double_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	}
	return char_1;
}
float v__block_edje_activate( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double_1 = double_2;
	double_2 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
			int_2 = int_3;
			char_3 = char_3;
		}
		if(1)
		{
			char_4 = char_1 * char_2;
			char_3 = v_homedir_get(char_4,short_2);

			int_4 = int_4 + int_3;
		}
	}
	long_1 = long_1 + long_2;
	short_2 = short_2 + short_1;
	long_3 = long_1 + long_3;
	int_5 = int_4 + int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float_1 = v__block_edje_cmds(char_1,unsigned_int_2,float_2,int_2);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		short_3 = v_config_theme_path_default_get(short_2);

		int_2 = int_5 + int_2;
	}
	return float_1;
}
short v__block_activate( double parameter_1,double parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_2775[3];
	fgets(controller4vul_2775 ,3 ,stdin);
	if( strcmp( controller4vul_2775, "G_") < 0)
	{
		char_1 = v__block_media_activate(char_2,char_1,uni_para);

	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 + char_1;
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_2;
	}
	return short_1;
}
double v_termpty_block_get( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
int v_termpty_block_id_get( short parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	double_1 = double_1;
	short_1 = short_2;
	return int_2;
}
void v_termpty_backscroll_adjust( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "ot") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	long_3 = long_1 * long_2;
	char_1 = v_verify_beacon(short_1,int_1);

}
double v__smart_apply( short parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_6 = 1;
	int int_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_7 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_8 = 1;
	double double_8 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_9 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_12 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_10 = 1;
	long long_6 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_13 = 1;
	double double_11 = 1;
	short short_6 = 1;
	long long_8 = 1;
	int int_8 = 1;
	double double_12 = 1;
	float float_9 = 1;
	char char_9 = 1;
	float float_10 = 1;
	char char_10 = 1;
	double double_15 = 1;
	double double_16 = 1;
	float float_11 = 1;
	int int_9 = 1;
	long long_9 = 1;
	short short_8 = 1;
	float float_12 = 1;
	float float_13 = 1;
	double double_18 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1;
	char_1 = char_1 * char_2;
	double_1 = double_1 * double_1;
	float_2 = float_1 * float_2;
	double_3 = double_2 + double_1;
	int_2 = int_1;
	short_2 = short_3;
	int_1 = int_1;
	char_3 = char_2 + char_2;
	short_5 = short_3 + short_4;
	float_3 = float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		int_1 = int_2;
		double_3 = double_3 * double_4;
		int_2 = int_1 + int_3;
		if(1)
		{
			float_1 = float_2 + float_4;
		}
		double_5 = double_5 + double_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		}
		char_2 = char_3 + char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float_3 = float_4 * float_1;
					}
					unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
				}
				long_1 = long_1;
				if(1)
				{
					unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
				}
				if(1)
				{
					long_1 = long_2;
				}
				int_2 = int_4 * int_4;
				double_5 = double_2 * double_6;
				int_3 = int_1;
				int_5 = int_5 + int_5;
				unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
				float_5 = float_2 + float_2;
			}
			char controller4vul_2771[2];
			fgets(controller4vul_2771 ,2 ,stdin);
			if( strcmp( controller4vul_2771, ",") < 0)
			{
				float float_6 = 1;
				char char_7 = 1;
				int_2 = int_4 + int_1;
				short_4 = short_4;
				if(1)
				{
					if(1)
					{
						unsigned_int_4 = unsigned_int_6 + unsigned_int_5;
					}
					unsigned_int_5 = unsigned_int_5 * unsigned_int_1;
					short_4 = short_5 + short_1;
					float_4 = float_6 * float_7;
					double_1 = double_5 * double_2;
					char_2 = char_1;
					short_3 = short_4;
					char_3 = char_4 + char_1;
					unsigned_int_5 = unsigned_int_7 + unsigned_int_4;
					short_2 = short_3;
					unsigned_int_9 = unsigned_int_8 * unsigned_int_1;
					double_2 = double_4 + double_1;
					char_3 = char_3 + char_4;
					if(1)
					{
						double_3 = double_3 * double_7;
						unsigned_int_10 = unsigned_int_4 * unsigned_int_5;
						char_6 = char_5 + char_2;
						double_7 = double_6 + double_5;
						int_7 = int_6 + int_5;
					}
				}
				char controller4vul_2772[3];
				fgets(controller4vul_2772 ,3 ,stdin);
				if( strcmp( controller4vul_2772, "D,") > 0)
				{
					char controller4vul_2773[3];
					fgets(controller4vul_2773 ,3 ,stdin);
					if( strcmp( controller4vul_2773, ";#") > 0)
					{
						char controller4vul_2774[3];
						fgets(controller4vul_2774 ,3 ,stdin);
						if( strcmp( controller4vul_2774, "BB") < 0)
						{
							short_1 = v__block_activate(double_5,double_6,uni_para);

							int_4 = int_5 + int_3;
						}
						char_7 = char_3 * char_4;
					}
					float_8 = float_1 * float_7;
					if(1)
					{
						double_5 = double_8 * double_5;
					}
					if(1)
					{
						double_5 = double_6 * double_2;
					}
					long_1 = long_2 * long_1;
					char_1 = char_8 + char_6;
					unsigned_int_1 = unsigned_int_5 * unsigned_int_9;
					unsigned_int_5 = unsigned_int_4 + unsigned_int_11;
					double_9 = double_8 + double_6;
					long_3 = long_2 + long_1;
					if(1)
					{
						unsigned_int_7 = unsigned_int_6 * unsigned_int_4;
					}
				}
				if(1)
				{
					long_3 = long_3 * long_2;
					char_4 = char_2;
					char_3 = char_7 + char_2;
					double_7 = double_3;
					double_8 = double_8 * double_2;
					int_7 = int_7 + int_1;
					if(1)
					{
						char_2 = char_3 * char_5;
						float_3 = float_1 * float_4;
					}
					if(1)
					{
						unsigned_int_4 = unsigned_int_12 + unsigned_int_10;
						float_5 = float_8;
					}
					if(1)
					{
						long_5 = long_4 + long_3;
					}
					if(1)
					{
						if(1)
						{
							long_3 = long_5 * long_5;
						}
						if(1)
						{
							unsigned_int_7 = unsigned_int_3 + unsigned_int_4;
						}
					}
					if(1)
					{
						short_3 = short_4 * short_1;
					}
					if(1)
					{
						int_5 = int_3 + int_7;
					}
					if(1)
					{
						double_5 = double_10;
						float_3 = float_2;
						long_6 = long_4 * long_1;
						short_5 = short_1;
						short_1 = short_2 * short_2;
						long_6 = long_7;
						double_2 = double_3 + double_1;
					}
					if(1)
					{
						unsigned_int_11 = unsigned_int_13;
					}
					if(1)
					{
						double_11 = double_1 * double_4;
					}
					if(1)
					{
						if(1)
						{
							float_6 = float_1 + float_7;
						}
						float_8 = float_3 + float_4;
					}
					char_3 = char_1 * char_7;
					double_10 = double_2 + double_2;
					int_7 = int_7;
					unsigned_int_12 = unsigned_int_9 + unsigned_int_12;
					if(1)
					{
						short_3 = short_6 + short_5;
						long_1 = long_8 * long_1;
					}
					if(1)
					{
						int_5 = int_4 * int_8;
						double_4 = double_6 + double_12;
					}
					float_9 = float_9;
					double_4 = double_12 + double_9;
					int_8 = int_4 + int_6;
					char_9 = char_6 + char_1;
					if(1)
					{
						long_7 = long_4 + long_6;
					}
				}
			}
		}
		double_5 = double_3 + double_9;
		if(1)
		{
			long_1 = long_3 + long_8;
		}
	}
	short_5 = short_1 * short_1;
	if(1)
	{
		double double_13 = 1;
		short short_7 = 1;
		double_6 = double_7 + double_9;
		float_3 = float_10 + float_4;
		double_13 = double_12 + double_5;
		int_4 = int_6 + int_3;
		float_4 = float_10 * float_1;
		long_6 = long_4 + long_4;
		if(1)
		{
			double double_17 = 1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double double_14 = 1;
				long_6 = long_7 + long_5;
				char_1 = char_10 * char_5;
				double_4 = double_12 * double_11;
				if(1)
				{
					short_6 = short_4 + short_1;
				}
				int_5 = int_2 * int_7;
				if(1)
				{
					if(1)
					{
						double_15 = double_14 * double_5;
						unsigned_int_5 = unsigned_int_3 * unsigned_int_8;
						int_2 = int_1;
					}
				}
				if(1)
				{
					float_7 = float_9 * float_3;
					short_4 = short_2;
				}
				double_10 = double_5 + double_4;
				double_11 = double_7 * double_16;
				unsigned_int_8 = unsigned_int_2;
				short_4 = short_3;
				unsigned_int_11 = unsigned_int_7;
				int_8 = int_6 + int_3;
				int_6 = int_1;
				unsigned_int_13 = unsigned_int_13 * unsigned_int_3;
				double_3 = double_13 + double_12;
				unsigned_int_12 = unsigned_int_9;
				float_8 = float_8 * float_10;
				if(1)
				{
					unsigned int unsigned_int_14 = 1;
					double_2 = double_1 + double_8;
					float_9 = float_5 * float_7;
					double_1 = double_1 + double_16;
					double_14 = double_9 + double_17;
					float_7 = float_5 + float_11;
					int_1 = int_4 + int_8;
					double_9 = double_4;
					char_9 = char_2 + char_4;
					unsigned_int_5 = unsigned_int_14 + unsigned_int_12;
					int_9 = int_7 * int_3;
				}
				short_1 = short_3;
				if(1)
				{
					if(1)
					{
						double_12 = double_13 * double_17;
						float_5 = float_8 * float_10;
					}
				}
			}
			double_17 = double_16;
		}
		short_7 = short_1;
		long_9 = long_2 * long_7;
	}
	long_3 = long_2 + long_6;
	if(1)
	{
		char char_11 = 1;
		int int_10 = 1;
		int int_11 = 1;
		char_4 = char_6;
		char_11 = char_4 + char_10;
		int_11 = int_10 + int_8;
	}
	if(1)
	{
		short_4 = short_5 * short_8;
	}
	if(1)
	{
		float_1 = float_12 * float_12;
	}
	char_3 = char_6 + char_6;
	float_13 = float_10 + float_12;
	int_8 = int_8;
	if(1)
	{
		char char_12 = 1;
		int int_12 = 1;
		int int_13 = 1;
		float float_14 = 1;
		int_9 = int_8 * int_2;
		long_5 = long_5 + long_1;
		double_1 = double_3 * double_12;
		long_3 = long_2 * long_9;
		char_12 = char_2 * char_4;
		int_13 = int_12 + int_12;
		if(1)
		{
			long long_10 = 1;
			float_11 = float_14 * float_2;
			long_10 = long_1 * long_1;
		}
		double_18 = double_3 + double_15;
		int_5 = int_3 + int_6;
		long_9 = long_5 * long_4;
		char_12 = char_8 + char_5;
		long_2 = long_6 + long_9;
		long_5 = long_9 + long_9;
		int_12 = int_13;
		unsigned_int_10 = unsigned_int_7 + unsigned_int_4;
		if(1)
		{
			int_3 = int_9 * int_6;
		}
		if(1)
		{
			if(1)
			{
				double_5 = double_1 * double_1;
			}
			if(1)
			{
				char_6 = char_12 * char_1;
			}
			if(1)
			{
				unsigned int unsigned_int_15 = 1;
				unsigned_int_11 = unsigned_int_6 + unsigned_int_15;
			}
			if(1)
			{
				float float_15 = 1;
				float_15 = float_14;
			}
			if(1)
			{
				char_2 = char_5 + char_8;
			}
		}
		int_4 = int_2;
	}
	if(1)
	{
		long_4 = long_6 + long_8;
	}
	if(1)
	{
		double_16 = double_8 * double_18;
	}
	short_6 = short_8 + short_6;
	return double_16;
}
char v__smart_cb_change(int uni_para)
{
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	double_1 = v__smart_apply(short_1,uni_para);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_2 * double_3;
	char_2 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	return char_3;
}
unsigned int v__smart_update_queue( long parameter_1,float parameter_2,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller4vul_2770[2];
	fgets(controller4vul_2770 ,2 ,stdin);
	if( strcmp( controller4vul_2770, "{") > 0)
	{
		char_1 = v__smart_cb_change(uni_para);

	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_1;
}
unsigned int v__lost_selection_reset_job()
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 + long_1;
	char_1 = v__lost_selection(char_1,-1 );

	int_2 = int_1 * int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int_1 = int_1 + int_1;
		double_2 = double_3;
	}
	return unsigned_int_1;
}
char v__lost_selection(char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double_1 = double_2;
	char_1 = char_2;
	char_2 = char_3 + char_1;
	short_2 = short_1 + short_2;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	char controller4vul_2767[3];
	fgets(controller4vul_2767 ,3 ,stdin);
	if( strcmp( controller4vul_2767, "{;") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char controller4vul_2768[2];
		fgets(controller4vul_2768 ,2 ,stdin);
		if( strcmp( controller4vul_2768, "v") > 0)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short_2 = short_1 + short_1;
			char controller4vul_2769[2];
			fgets(controller4vul_2769 ,2 ,stdin);
			if( strcmp( controller4vul_2769, "A") < 0)
			{
				short short_3 = 1;
				unsigned_int_1 = v__smart_update_queue(long_1,float_1,uni_para);

				short_3 = short_3 * short_2;
			}
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		double double_3 = 1;
		char char_4 = 1;
		float float_4 = 1;
		float float_5 = 1;
		char char_5 = 1;
		char char_6 = 1;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			float_3 = float_1 * float_2;
		}
		double_2 = double_3;
		char_2 = char_4 + char_2;
		float_1 = float_4 + float_5;
		char_5 = char_5 + char_6;
	}
	return char_1;
}
int v__take_selection_text( char parameter_1,float parameter_2,long parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int_3 = int_1 + int_2;
	int_1 = int_1 + int_3;
	int_2 = int_2 + int_4;
	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	int_1 = int_2 + int_2;
	int_5 = int_1;
	int_2 = int_1 * int_4;
	char controller4vul_2766[3];
	fgets(controller4vul_2766 ,3 ,stdin);
	if( strcmp( controller4vul_2766, "?b") < 0)
	{
		char_1 = v__lost_selection(char_2,uni_para);

		int_1 = int_1;
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	return int_5;
}
void v__cb_ctxp_link_content_copy(short parameter_2,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int_1 = v__take_selection_text(char_1,float_1,long_1,uni_para);

	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_1;
	char_1 = char_1 * char_2;
	int_1 = int_1;
	int_3 = int_2 * int_3;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_5 = char_3 + char_4;
}
void v_ty_sb_free()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	char_2 = char_1 + char_1;
}
short v_ty_sb_steal_buf()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_2 = 1;
			float_2 = float_2 + float_2;
		}
		double_2 = double_2;
	}
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_3;
	return short_1;
}
int v_codepoint_to_utf8( char parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	long long_2 = 1;
	double double_5 = 1;
	float float_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		float float_1 = 1;
		char_2 = char_1 * char_2;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		long_1 = long_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		double_1 = double_3 + double_4;
		float_3 = float_2 * float_2;
	}
	if(1)
	{
		char char_3 = 1;
		long_2 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		char_3 = char_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char_2 = char_2 + char_1;
	}
	if(1)
	{
		long long_3 = 1;
		double double_6 = 1;
		float float_5 = 1;
		int int_2 = 1;
		long_3 = long_2 + long_2;
		double_5 = double_1 + double_2;
		double_6 = double_1 * double_5;
		float_3 = float_4 + float_4;
		float_5 = float_5;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		double double_7 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_4 = 1;
		double_5 = double_4;
		double_7 = double_1 + double_3;
		int_4 = int_3 * int_3;
		float_3 = float_3 * float_4;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		long_4 = long_2 + long_1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_3 + short_1;
	}
	return int_1;
}
void v_ty_sb_spaces_rtrim( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double_3 = double_1 + double_2;
	long_1 = long_1;
	long_1 = long_1 * long_1;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_3 = int_1 * int_2;
	}
}
int v_ty_sb_add( short parameter_1,double parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		short_1 = short_1 * short_1;
		long_1 = long_1 + long_2;
		char_2 = char_1 + char_1;
		if(1)
		{
		}
		short_1 = short_1 * short_1;
		double_2 = double_1 + double_2;
	}
	double_3 = double_3 + double_2;
	double_4 = double_3;
	int_2 = int_1 * int_1;
	return int_1;
}
char v__termpty_cellrow_from_beacon_get( double parameter_1,int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	long long_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	char_1 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 * long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		long long_3 = 1;
		double_1 = double_3;
		long_2 = long_3;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_4 = double_3 + double_1;
	long_4 = long_1 + long_1;
	double_5 = double_4;
	if(1)
	{
		float float_3 = 1;
		long long_5 = 1;
		long long_6 = 1;
		float_3 = float_2 + float_2;
		long_5 = long_5;
		int_1 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
		float_2 = float_2;
		double_4 = double_1;
		long_6 = long_6;
	}
	unsigned_int_3 = unsigned_int_4;
	return char_1;
	char_1 = v_verify_beacon(short_1,int_1);

}
char v_termpty_cellrow_get( long parameter_1,int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
		}
		float_2 = float_1 * float_1;
	}
	if(1)
	{
	}
	return char_1;
	char_1 = v__termpty_cellrow_from_beacon_get(double_1,int_1,unsigned_int_1);

}
long v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,short parameter_6,char parameter_7)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	char char_2 = 1;
	short short_4 = 1;
	int_1 = v_ty_sb_add(short_1,double_1,long_1);

	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			v_ty_sb_free();

			long_1 = long_2 * long_2;
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_2 + short_3;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float float_3 = 1;
						char_1 = v_termpty_cellrow_get(long_3,int_1,unsigned_int_1);

						float_2 = float_3 * float_1;
					}
					if(1)
					{
						unsigned int unsigned_int_5 = 1;
						unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
					}
				}
				if(1)
				{
					long long_4 = 1;
					v_termpty_backlog_lock();

					long_4 = long_1 * long_1;
				}
			}
		}
		if(1)
		{
			char_1 = char_1 * char_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					int_1 = v_codepoint_to_utf8(char_2,char_1);

					v_termpty_backlog_unlock();

					unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
				}
				if(1)
				{
					short_4 = v_ty_sb_steal_buf();

					long_1 = long_3 + long_1;
				}
				if(1)
				{
					char_2 = char_2 * char_2;
				}
				if(1)
				{
					int int_2 = 1;
					v_ty_sb_spaces_rtrim(float_2);

					int_2 = int_1 * int_1;
				}
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					unsigned_int_1 = unsigned_int_3 * unsigned_int_6;
				}
			}
			unsigned_int_7 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_7;
		}
	}
	return long_2;
}
float v__cb_ctxp_link_open(double parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 * int_2;
	double_1 = v__activate_link(char_1,long_1);

	float_1 = float_1;
	char_1 = char_2 * char_1;
	short_2 = short_2 * short_2;
	return float_1;
}
int v__should_inline( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_3 = char_2;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	return int_1;
	unsigned_int_2 = v_termio_config_get(char_3);

}
int v_link_is_email( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
double v_link_is_protocol( int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
long v_link_is_url( unsigned int parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	return long_1;
	double_1 = v_link_is_protocol(int_1);

}
double v__activate_link( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	long long_3 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_2 * int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_4;
	int_3 = int_1 + int_1;
	double_1 = double_1 * double_1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_3;
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
			unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		double_4 = double_2 * double_3;
		double_6 = double_4 + double_5;
	}
	float_1 = float_2;
	if(1)
	{
	}
	char controller_11[3];
	fgets(controller_11 ,3 ,stdin);
	if( strcmp( controller_11, "T4") < 0)
	{
		char_1 = char_2;
		double_7 = double_4 + double_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_1;
		}
		if(1)
		{
			double_7 = double_3 * double_6;
		}
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
			double_4 = double_1;
			double_2 = double_3 + double_1;
		}
	}
	if(1)
	{
		double double_8 = 1;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
		double_3 = double_8 * double_8;
		if(1)
		{
			double_1 = double_6 + double_2;
			if(1)
			{
				if(1)
				{
					unsigned_int_1 = unsigned_int_6 + unsigned_int_2;
					double_4 = double_8 * double_5;
				}
				if(1)
				{
					float float_3 = 1;
					unsigned_int_7 = unsigned_int_3;
					float_3 = float_1 * float_3;
				}
			}
			if(1)
			{
				char char_3 = 1;
				if(1)
				{
					if(1)
					{
						char_1 = char_1 + char_2;
					}
				}
				if(1)
				{
					if(1)
					{
						long_1 = v_link_is_url(unsigned_int_8);

						double_8 = double_5 + double_2;
					}
				}
				if(1)
				{
					if(1)
					{
						long long_2 = 1;
						long_2 = long_1 * long_1;
					}
				}
				double_4 = double_8 * double_5;
				char_3 = char_1;
			}
		}
	}
	if(1)
	{
		int_1 = int_3 * int_5;
		int_2 = int_2 + int_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_7;
			if(1)
			{
				int_1 = v__should_inline(long_3);

				unsigned_int_7 = unsigned_int_8 * unsigned_int_7;
				unsigned_int_8 = unsigned_int_6 + unsigned_int_7;
			}
			if(1)
			{
				unsigned int unsigned_int_9 = 1;
				if(1)
				{
					if(1)
					{
						double_2 = double_5 * double_5;
					}
				}
				if(1)
				{
					if(1)
					{
						int_5 = v_link_is_email(char_2);

						unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
					}
				}
				if(1)
				{
					if(1)
					{
						int_1 = int_2 * int_5;
					}
				}
				double_7 = double_3 + double_7;
				long_1 = v_media_src_type_get(int_3);

				unsigned_int_2 = unsigned_int_9 * unsigned_int_5;
			}
		}
	}
	if(1)
	{
		double_6 = double_5;
	}
	int_1 = int_2 + int_1;
	if(1)
	{
		int_4 = int_5;
	}
	return double_6;
}
unsigned int v__cb_ctxp_link_preview(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 * int_2;
	double_1 = v__activate_link(char_1,long_1);

	int_3 = int_3 + int_3;
	float_1 = float_1 + float_1;
	int_3 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_2;
	return unsigned_int_3;
}
unsigned int v__is_fmt( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
long v_media_src_type_get( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "S") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, " c") == 0)
	{
		unsigned_int_6 = v__is_fmt(double_1,double_2);

		unsigned_int_4 = unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_1 * unsigned_int_4;
	}
	return long_1;
}
int v__mouse_in_selection( short parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_1;
	float_1 = float_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
		int_4 = int_3 * int_2;
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
	return int_4;
}
short v__smart_xy_to_cursor( double parameter_1,char parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	long_1 = long_1 * long_2;
	float_1 = float_1 + float_1;
	short_1 = short_1 + short_1;
	double_1 = double_1 + double_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		long_2 = long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	return short_2;
}
short v__cb_link_down(unsigned int parameter_2,long parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	char_1 = char_1;
	int_4 = int_3 + int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_2 = double_1 + double_2;
		long_1 = long_2;
	}
	char controller4vul_2763[3];
	fgets(controller4vul_2763 ,3 ,stdin);
	if( strcmp( controller4vul_2763, " w") > 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		long long_3 = 1;
		int int_5 = 1;
		int int_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_7 = 1;
		double double_4 = 1;
		char char_4 = 1;
		float float_4 = 1;
		double double_5 = 1;
		char_3 = char_2 + char_2;
		int_3 = int_3 * int_3;
		double_3 = double_2 * double_1;
		long_2 = long_1 * long_3;
		char controller4vul_2764[3];
		fgets(controller4vul_2764 ,3 ,stdin);
		if( strcmp( controller4vul_2764, ",#") > 0)
		{
			int_1 = int_2 + int_1;
			long_1 = long_1 * long_3;
			char controller4vul_2765[2];
			fgets(controller4vul_2765 ,2 ,stdin);
			if( strcmp( controller4vul_2765, "<") < 0)
			{
				v__cb_ctxp_link_content_copy(short_1,uni_para);

			}
		}
		int_6 = int_5 + int_6;
		float_1 = float_1;
		if(1)
		{
			int_1 = int_3 + int_2;
			if(1)
			{
				float_3 = float_1 + float_2;
			}
		}
		int_2 = int_7;
		double_4 = double_2 * double_2;
		if(1)
		{
			double_2 = double_3 + double_1;
		}
		if(1)
		{
			int int_8 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int_8 = int_1 * int_5;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			long_3 = long_3;
		}
		char_4 = char_1;
		short_1 = short_2 * short_1;
		float_3 = float_4 + float_2;
		int_2 = int_1 * int_5;
		double_4 = double_5;
	}
	return short_2;
}
char v_main_term_popup_exists( char parameter_1)
{
	char char_1 = 1;
	return char_1;
}
double v__update_link( int parameter_1,long parameter_2,double parameter_3,short parameter_4,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	double double_7 = 1;
	float_2 = float_1 * float_1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_2;
	char_3 = char_2 + char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char_2 = char_2 * char_3;
	if(1)
	{
		char char_4 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		char_3 = char_4 + char_2;
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_4 = 1;
		double double_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_5 = 1;
		long_1 = long_1;
		short_1 = short_1 * short_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		char controller4vul_2761[2];
		fgets(controller4vul_2761 ,2 ,stdin);
		if( strcmp( controller4vul_2761, "=") < 0)
		{
			long_2 = long_1;
			char controller4vul_2762[3];
			fgets(controller4vul_2762 ,3 ,stdin);
			if( strcmp( controller4vul_2762, "3n") > 0)
			{
				int int_4 = 1;
				short_1 = v__cb_link_down(unsigned_int_3,long_2,uni_para);

				int_4 = int_3 + int_1;
			}
			if(1)
			{
				double_1 = double_1;
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
			double_1 = double_2 + double_2;
		}
		if(1)
		{
			float float_3 = 1;
			double double_4 = 1;
			float_1 = float_3 * float_4;
			double_2 = double_3 * double_4;
		}
		int_1 = int_2;
		double_1 = double_1 * double_3;
		float_2 = float_4 + float_1;
		short_2 = short_1 + short_1;
		double_6 = double_2 + double_5;
		int_5 = int_3 * int_2;
		if(1)
		{
			short_1 = short_3 * short_3;
		}
	}
	return double_7;
}
unsigned int v__remove_links( int parameter_1,unsigned int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_2;
	char controller4vul_2760[3];
	fgets(controller4vul_2760 ,3 ,stdin);
	if( strcmp( controller4vul_2760, "K7") < 0)
	{
		short short_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_3 = v__update_link(int_1,long_1,double_1,short_1,uni_para);

		short_2 = short_2 + short_2;
		long_3 = long_1 + long_2;
	}
	char_1 = char_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1;
	char_1 = char_2;
	int_2 = int_1 + int_2;
	return unsigned_int_3;
}
char v__sel_set( short parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char_3 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		float_3 = float_3;
	}
	return char_3;
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
void v_miniview_position_offset( double parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_2;
	float_1 = float_1 + float_1;
	short_2 = short_1 + short_1;
	int_1 = int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double_3 = double_2;
		int_1 = int_1;
		if(1)
		{
			double double_4 = 1;
			double double_5 = 1;
			double_4 = double_1 + double_4;
			double_3 = double_5;
			double_2 = double_1 + double_3;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			int_1 = int_1;
			unsigned_int_3 = unsigned_int_1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_6 = 1;
			short_2 = short_2 + short_1;
			double_2 = double_6;
			if(1)
			{
				double_2 = double_2 + double_3;
			}
			if(1)
			{
				int int_2 = 1;
				int_2 = int_2 * int_2;
			}
		}
	}
	int_3 = v_termio_scroll_get(short_2);

}
char v_term_miniview_get( long parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_1 * short_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		float float_3 = 1;
		unsigned_int_2 = unsigned_int_1;
		if(1)
		{
			long long_1 = 1;
			long_2 = long_1 + long_2;
		}
		float_3 = float_1 * float_2;
	}
	unsigned_int_2 = unsigned_int_1;
	char controller4vul_2757[3];
	fgets(controller4vul_2757 ,3 ,stdin);
	if( strcmp( controller4vul_2757, "={") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		float float_5 = 1;
		float_1 = float_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		float_2 = float_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		}
		char controller4vul_2758[3];
		fgets(controller4vul_2758 ,3 ,stdin);
		if( strcmp( controller4vul_2758, "{}") < 0)
		{
			float float_4 = 1;
			double double_1 = 1;
			long long_3 = 1;
			float_5 = float_4 + float_5;
			double_1 = double_1 * double_1;
			unsigned_int_4 = unsigned_int_2;
			int_1 = int_2 * int_2;
			long_2 = long_3 + long_2;
			char controller4vul_2759[3];
			fgets(controller4vul_2759 ,3 ,stdin);
			if( strcmp( controller4vul_2759, "WG") < 0)
			{
				char char_1 = 1;
				unsigned_int_2 = v__remove_links(int_2,unsigned_int_4,uni_para);

				char_1 = char_1 + char_1;
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
			float_5 = float_2 * float_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short_1 = short_2 + short_1;
		}
	}
}
int v_termpty_save_new( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_2;
	return int_1;
	v_termpty_save_free(long_1);

}
int v_termpty_save_expand( long parameter_1,unsigned int parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "V") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 * double_2;
	int_2 = int_1 + int_1;
	return int_3;
}
char v__termpty_cell_is_empty( char parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
long v_termpty_line_length( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "(") < 0)
		{
		}
	}
	return long_1;
	char_1 = v__termpty_cell_is_empty(char_1);

}
char v_verify_beacon( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
void v_termpty_text_save_top( double parameter_1,float parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	char char_5 = 1;
	float_3 = float_1 * float_2;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_1;
	int_3 = v_termpty_save_new(float_2,int_4);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_termpty_backlog_unlock();

		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2 * long_1;
		if(1)
		{
			double_1 = double_2;
		}
		if(1)
		{
			char char_3 = 1;
			unsigned int unsigned_int_5 = 1;
			char_3 = char_1 + char_1;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
			double_1 = double_1 * double_1;
			char_4 = v_verify_beacon(short_1,int_2);

			short_2 = short_2 * short_2;
		}
	}
	double_3 = double_1 + double_2;
	double_3 = double_3 * double_3;
	if(1)
	{
	}
	long_4 = long_1 + long_3;
	double_1 = double_4 * double_1;
	if(1)
	{
		double double_5 = 1;
		long_3 = v_termpty_line_length(double_1,float_1);

		double_4 = double_3 + double_5;
	}
	v_termpty_backlog_lock();

	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	int_4 = int_5 + int_4;
	int_1 = v_termpty_save_expand(long_1,unsigned_int_2,short_2);

	int_3 = int_5;
	if(1)
	{
		int int_6 = 1;
		unsigned_int_4 = unsigned_int_3;
		int_1 = int_6 + int_5;
	}
	char_5 = char_1 + char_4;
}
void v_termpty_text_scroll( long parameter_1,unsigned int parameter_2,int uni_para)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float_1 = float_1 + float_1;
	float_1 = float_1;
	short_2 = short_1 * short_2;
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	float_3 = float_2 + float_1;
	long_1 = long_1;
	char controller4vul_2755[2];
	fgets(controller4vul_2755 ,2 ,stdin);
	if( strcmp( controller4vul_2755, "y") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		char controller4vul_2756[2];
		fgets(controller4vul_2756 ,2 ,stdin);
		if( strcmp( controller4vul_2756, "/") < 0)
		{
			float float_4 = 1;
			v_termio_scroll(float_3,int_3,int_2,int_3,uni_para);

			float_3 = float_3 + float_4;
		}
		double_1 = double_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		double_2 = double_1 * double_2;
		double_3 = double_3 + double_4;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 + char_2;
		}
		double_2 = double_3 + double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_2 = 1;
			int_4 = int_3 * int_2;
			double_2 = double_3;
			long_1 = long_2;
		}
		if(1)
		{
			int_1 = int_4;
		}
	}
}
void v_termpty_text_scroll_test( long parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	char controller4vul_2753[3];
	fgets(controller4vul_2753 ,3 ,stdin);
	if( strcmp( controller4vul_2753, "!Z") > 0)
	{
		float float_2 = 1;
		float_2 = float_1 + float_2;
		char controller4vul_2754[3];
		fgets(controller4vul_2754 ,3 ,stdin);
		if( strcmp( controller4vul_2754, "0O") > 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			long long_2 = 1;
			long long_3 = 1;
			v_termpty_text_scroll(long_1,unsigned_int_1,uni_para);

			int_1 = int_1;
			char_3 = char_1 * char_2;
			long_3 = long_2 * long_1;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_3 = int_1 * int_2;
		float_4 = float_3 * float_1;
		double_2 = double_1 + double_1;
	}
}
char v__cursor_to_start_of_line( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float_2 = float_1 * float_1;
	return char_1;
}
short v__tab_forward( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
int v__handle_cursor_control( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	char char_5 = 1;
	short short_3 = 1;
	int int_6 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	char_1 = v__cursor_to_start_of_line(long_1);

	double_1 = double_1 + double_1;
	int_1 = int_1 * int_2;
	short_2 = short_1 + short_1;
	char_4 = char_2 + char_3;
	int_2 = int_1 * int_3;
	v_termpty_text_scroll_test(long_1,int_3,-1 );

	char_2 = char_4 * char_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_3 = int_3 + int_3;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "@B") < 0)
	{
		int_1 = int_4 + int_2;
	}
	char_2 = char_4 * char_5;
	char_2 = char_5 + char_2;
	short_1 = v__tab_forward(unsigned_int_2,int_2);

	short_1 = short_2 * short_3;
	if(1)
	{
		int int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_5 = int_5 + int_5;
		float_2 = float_1 + float_1;
		unsigned_int_4 = unsigned_int_4;
	}
	int_1 = int_4 * int_2;
	return int_6;
}
int v_termpty_handle_seq( float parameter_1,float parameter_2,double parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long_1 = long_2;
	char controller4vul_2750[3];
	fgets(controller4vul_2750 ,3 ,stdin);
	if( strcmp( controller4vul_2750, "A*") > 0)
	{
		char char_2 = 1;
		char_1 = v__handle_esc(double_1,long_2,char_1,uni_para);

		char_1 = char_1 + char_2;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "8") < 0)
	{
		char char_3 = 1;
		char_1 = char_3;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	return int_1;
}
void v_termpty_handle_buf( char parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_1;
	double_3 = double_1 + double_2;
	char controller4vul_2749[3];
	fgets(controller4vul_2749 ,3 ,stdin);
	if( strcmp( controller4vul_2749, "um") > 0)
	{
		int_2 = v_termpty_handle_seq(float_1,float_2,double_1,uni_para);

		double_1 = double_2 * double_1;
	}
	if(1)
	{
		double_2 = double_3 + double_3;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2 + char_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	int_3 = int_3 * int_2;
}
void v_theme_reload( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float_1 = float_2;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1;
	if(1)
	{
	}
}
long v_theme_reload_cb(unsigned int parameter_2,unsigned int parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double_1 = double_2;
	double_4 = double_3 * double_1;
	char_1 = char_1 * char_1;
	double_3 = double_1 + double_2;
	char_2 = char_2 + char_3;
	v_theme_reload(char_1);

	short_1 = short_1 + short_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	return long_1;
}
void v_theme_auto_reload_enable( char parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = v_theme_reload_cb(unsigned_int_1,unsigned_int_1,long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
long v__cursor_shape_to_group_name( double parameter_1)
{
	long long_1 = 1;
	return long_1;
}
short v_config_theme_path_default_get( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_2;
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	return short_1;
}
short v_theme_path_get()
{
	short short_1 = 1;
	return short_1;
}
char v_config_theme_path_get()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double_1 = double_2;
	short_1 = v_theme_path_get();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	return char_1;
}
int v_theme_apply( unsigned int parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_1;
	int_2 = int_1 * int_1;
	char_1 = v_config_theme_path_get();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	long_1 = long_2;
	short_1 = v_config_theme_path_default_get(short_1);

	short_2 = short_1 + short_1;
	if(1)
	{
	}
	char_1 = char_2 + char_1;
	short_2 = short_3 + short_3;
	return int_3;
}
void v_termio_set_cursor_shape( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	char char_1 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1 + double_2;
	int_1 = v_theme_apply(unsigned_int_2,double_3,float_1);

	double_2 = double_3 + double_4;
	int_3 = int_1 + int_1;
	double_5 = double_3 * double_2;
	long_2 = long_1 + long_1;
	double_2 = double_6;
	if(1)
	{
		v_theme_auto_reload_enable(char_1);

		double_2 = double_2 * double_3;
		if(1)
		{
			long_1 = v__cursor_shape_to_group_name(double_4);

			unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		}
		if(1)
		{
			int int_4 = 1;
			int_3 = int_4 + int_4;
		}
	}
}
void v_termpty_clear_tabs_on_screen( double parameter_1)
{
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( short parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	if(1)
	{
	}
	v_termpty_backlog_lock();

	char_1 = char_1 * char_2;
	if(1)
	{
		long long_1 = 1;
		v_termpty_backlog_unlock();

		short_1 = short_1 * short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
		}
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	v_termpty_save_free(long_2);

	short_3 = short_2 * short_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_3 + double_2;
}
long v__ts_free()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return long_1;
}
void v_termpty_save_free( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
			short_1 = short_1 + short_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 + double_2;
		}
		long_1 = long_1 * long_1;
	}
	float_3 = float_1 + float_2;
	int_1 = int_1 * int_1;
	short_3 = short_1 * short_2;
	long_2 = v__ts_free();

}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( float parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float_1 = float_1 * float_1;
	short_1 = short_1 + short_2;
	v_termpty_backlog_size_set(short_2,double_1);

	int_1 = int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double_3 = double_1 + double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_3 = int_2 * int_3;
		}
		char_1 = char_2;
		int_3 = int_2 + int_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_termpty_backlog_lock();

	char_1 = char_1 + char_1;
	v_termpty_save_free(long_1);

	short_1 = short_2 * short_3;
	v_termpty_backlog_unlock();

	char_1 = char_2 + char_2;
	short_5 = short_4 + short_5;
}
void v_termpty_reset_att()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	long long_3 = 1;
	int_3 = int_1 + int_2;
	int_3 = int_1 + int_3;
	double_1 = double_1 * double_1;
	long_1 = long_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_3 + int_2;
	float_3 = float_1 * float_2;
	double_1 = double_1;
	double_2 = double_2 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_1 + int_1;
	char_2 = char_1 + char_1;
	long_2 = long_2;
	double_3 = double_4;
	double_4 = double_1 + double_5;
	float_3 = float_3 + float_4;
	long_2 = long_1 + long_3;
}
unsigned int v_termio_config_get( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_2;
	float_1 = float_1;
	return unsigned_int_1;
}
void v_termpty_reset_state( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double double_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	char char_4 = 1;
	long long_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	double double_8 = 1;
	float float_4 = 1;
	double_3 = double_1 + double_2;
	float_2 = float_1 + float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "R") < 0)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	v_termpty_clear_tabs_on_screen(double_1);

	long_1 = long_1 * long_2;
	unsigned_int_3 = v_termio_config_get(char_1);

	short_1 = short_1 * short_2;
	int_3 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	v_termpty_reset_att();

	double_4 = double_3 + double_1;
	char_1 = char_1 + char_1;
	char_3 = char_2 + char_3;
	short_1 = short_3 * short_3;
	double_4 = double_5 + double_2;
	float_3 = float_2 + float_1;
	unsigned_int_5 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	float_1 = float_1 + float_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1;
	short_4 = short_2 * short_1;
	char_4 = char_2 + char_3;
	v_termio_set_cursor_shape(int_2,unsigned_int_2);

	int_2 = int_2 * int_1;
	long_1 = long_3 + long_3;
	double_6 = double_2 * double_6;
	double_7 = double_6 + double_3;
	char_4 = char_4 * char_5;
	double_5 = double_3 * double_3;
	char_2 = char_5 * char_6;
	char_3 = char_7 * char_2;
	v_termpty_clear_backlog(float_1);

	double_8 = double_6 * double_6;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	char_3 = char_1 + char_1;
	double_3 = double_1;
	double_8 = double_5 + double_4;
	char_3 = char_3 * char_2;
	float_2 = float_4 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_2 = short_3 * short_3;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "w") < 0)
	{
		long long_4 = 1;
		long_1 = long_2 + long_4;
	}
}
void v_termpty_resize_tabs( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 * float_1;
	int_2 = int_1 + int_2;
	int_2 = int_2 + int_3;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_3;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 * long_2;
		}
		if(1)
		{
			int_1 = int_3;
		}
		char_1 = char_1 * char_2;
	}
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double_1 = double_4 + double_2;
	}
}
double v__termpty_init( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_3 = int_1 + int_2;
	v_termpty_resize_tabs(unsigned_int_1,int_3,int_2);

	float_2 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_1 + long_2;
	short_1 = short_1 * short_1;
	v_termpty_reset_state(short_2);

	unsigned_int_2 = unsigned_int_4;
	int_1 = int_4;
	int_5 = int_1 * int_3;
	double_1 = double_1 * double_1;
	float_2 = float_2;
	int_3 = int_3;
	long_2 = long_1 * long_2;
	double_1 = double_2;
	short_2 = short_2 * short_2;
	return double_3;
}
unsigned int v__add_default_keys( char parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	short short_3 = 1;
	double double_7 = 1;
	float float_5 = 1;
	double double_8 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_10 = 1;
	char char_7 = 1;
	double double_11 = 1;
	double_1 = double_1 + double_1;
	float_1 = float_1 * float_2;
	double_3 = double_2 * double_3;
	double_3 = double_1 + double_2;
	double_1 = double_4 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_3;
	int_1 = int_1 * int_1;
	double_3 = double_2;
	int_2 = int_1 * int_1;
	long_2 = long_1 * long_1;
	double_3 = double_1 + double_5;
	long_2 = long_3 + long_1;
	int_3 = int_3 + int_1;
	int_4 = int_4 + int_5;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	long_4 = long_4 + long_1;
	double_2 = double_4 * double_1;
	short_2 = short_1 + short_1;
	float_3 = float_4;
	float_2 = float_3;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	float_2 = float_2 + float_3;
	char_2 = char_1 * char_2;
	double_5 = double_6 + double_6;
	short_2 = short_2 + short_2;
	short_1 = short_2 + short_3;
	unsigned_int_2 = unsigned_int_2;
	double_7 = double_1 + double_7;
	float_5 = float_5 + float_4;
	long_2 = long_2 * long_3;
	double_2 = double_4 * double_4;
	double_2 = double_2 + double_8;
	char_1 = char_3 * char_4;
	char_3 = char_2 + char_5;
	short_3 = short_1 + short_3;
	char_1 = char_4 + char_6;
	double_7 = double_6;
	double_2 = double_9 * double_8;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
	double_4 = double_7 + double_9;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
	double_7 = double_10 * double_5;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_6;
	char_7 = char_2 + char_3;
	long_4 = long_1;
	short_2 = short_3 + short_3;
	int_2 = int_5 + int_1;
	int_1 = int_1 * int_4;
	double_11 = double_3;
	char_1 = char_6 * char_7;
	return unsigned_int_3;
}
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,char parameter_4,short parameter_5,long parameter_6)
{
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		double double_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_2 = double_1 + double_2;
		double_2 = double_1 * double_1;
		int_1 = int_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		long_1 = long_1;
		int_4 = int_3 + int_2;
		short_2 = short_1 * short_2;
	}
	double_1 = double_3;
	int_3 = int_2 + int_5;
	char_2 = char_1 + char_1;
	double_3 = double_3 * double_1;
}
void v_config_new()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	char char_4 = 1;
	unsigned_int_1 = v__add_default_keys(char_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_3 = float_1 + float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_4 = 1;
		long long_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_5 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_4 = 1;
		short short_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_4 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double double_6 = 1;
		double double_7 = 1;
		long long_5 = 1;
		short short_5 = 1;
		double double_8 = 1;
		float float_5 = 1;
		float float_6 = 1;
		unsigned_int_3 = unsigned_int_2;
		double_1 = double_2;
		char_3 = char_2 * char_1;
		short_1 = short_1 * short_1;
		int_1 = int_1;
		double_3 = double_1 * double_1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
		float_1 = float_1 * float_3;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
		float_1 = float_2 + float_2;
		float_4 = float_1 * float_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		long_2 = long_1 * long_1;
		int_3 = int_1 * int_2;
		int_4 = int_2 + int_2;
		v_colors_standard_get(int_1,int_4,unsigned_int_3,char_4,short_1,long_2);

		double_1 = double_3 * double_2;
		double_3 = double_1 + double_2;
		int_4 = int_5;
		short_2 = short_1 + short_1;
		int_3 = int_3 * int_4;
		double_1 = double_1 * double_1;
		char_2 = char_3 + char_3;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
		int_5 = int_1 + int_3;
		short_1 = short_2 + short_2;
		double_2 = double_4 + double_2;
		float_2 = float_2 * float_2;
		short_1 = short_3 * short_2;
		float_1 = float_2 + float_3;
		long_4 = long_1 + long_3;
		char_1 = char_1;
		int_1 = int_5;
		double_2 = double_5 * double_1;
		unsigned_int_5 = unsigned_int_7 * unsigned_int_3;
		char_3 = char_1 * char_4;
		short_2 = short_4 + short_4;
		int_7 = int_6 + int_7;
		double_7 = double_6 + double_6;
		long_5 = long_2 * long_5;
		double_6 = double_4 * double_5;
		short_2 = short_1 + short_5;
		double_5 = double_7 + double_4;
		int_7 = int_3;
		long_1 = long_3;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		double_5 = double_8 + double_2;
		float_1 = float_1 * float_5;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_7;
		unsigned_int_3 = unsigned_int_6;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double double_9 = 1;
				double double_10 = 1;
				double_6 = double_1 + double_9;
				float_5 = float_5 * float_1;
				double_8 = double_9 * double_10;
				float_3 = float_1;
				double_5 = double_8 * double_3;
				int_1 = int_6 + int_2;
			}
		}
		float_2 = float_5 * float_6;
		int_1 = int_6 + int_7;
	}
}
int main()
{
	int uni_para =949;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	short short_5 = 1;
	int int_4 = 1;
	short short_6 = 1;
	char char_4 = 1;
	char char_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float float_4 = 1;
	short short_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 * float_1;
	short_1 = short_1;
	short_2 = short_2 * short_1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_1;
	char_1 = char_1 * char_1;
	short_1 = short_2 * short_3;
	if(1)
	{
	}
	double_3 = double_3 * double_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		double_5 = double_1 + double_1;
	}
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	short_3 = short_4;
	int_2 = int_3 + int_1;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_2;
	char controller4vul_2745[3];
	fgets(controller4vul_2745 ,3 ,stdin);
	if( strcmp( controller4vul_2745, "VD") > 0)
	{
		double double_6 = 1;
		float float_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		char char_2 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_7;
		}
		if(1)
		{
			double_1 = double_2 + double_4;
		}
		if(1)
		{
			double_6 = double_2 * double_5;
		}
		long_1 = long_2 * long_2;
		if(1)
		{
			float_3 = float_2 * float_2;
		}
		long_1 = long_3 * long_4;
		if(1)
		{
			double_5 = double_4 * double_7;
		}
		double_5 = double_2 + double_1;
		if(1)
		{
			short_3 = short_5 * short_3;
		}
		char_2 = char_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_6 * unsigned_int_1;
		}
		if(1)
		{
			int_4 = int_3;
		}
		short_6 = short_3 + short_2;
		if(1)
		{
			double_6 = double_1 * double_7;
		}
		unsigned_int_5 = unsigned_int_3;
		if(1)
		{
			int int_5 = 1;
			int int_6 = 1;
			int_5 = int_6;
		}
		char controller4vul_2746[3];
		fgets(controller4vul_2746 ,3 ,stdin);
		if( strcmp( controller4vul_2746, "+G") < 0)
		{
			long_1 = long_4 * long_2;
			char controller4vul_2747[2];
			fgets(controller4vul_2747 ,2 ,stdin);
			if( strcmp( controller4vul_2747, "T") > 0)
			{
				char char_3 = 1;
				char char_5 = 1;
				unsigned_int_6 = unsigned_int_3 * unsigned_int_7;
				char_5 = char_3 + char_4;
				char controller4vul_2748[2];
				fgets(controller4vul_2748 ,2 ,stdin);
				if( strcmp( controller4vul_2748, "8") > 0)
				{
					v_termpty_handle_buf(char_4,char_6,int_4,uni_para);

					long_2 = long_1 + long_3;
				}
				if(1)
				{
					int_3 = int_3;
				}
				if(1)
				{
					char_3 = char_2 * char_2;
				}
				if(1)
				{
					char_5 = char_2 * char_1;
				}
				if(1)
				{
					unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
				}
				if(1)
				{
					int_8 = int_7 * int_8;
				}
				if(1)
				{
					short_6 = short_1 * short_3;
				}
				if(1)
				{
					float_1 = float_4 * float_3;
				}
				if(1)
				{
					double_2 = double_6 + double_2;
				}
				if(1)
				{
					long_4 = long_1;
				}
				if(1)
				{
					short_4 = short_1 * short_4;
				}
				if(1)
				{
					unsigned_int_7 = unsigned_int_7 + unsigned_int_3;
				}
			}
			if(1)
			{
				int_4 = int_3 * int_2;
			}
		}
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		short_4 = short_6 * short_5;
	}
	if(1)
	{
		short_4 = short_3 * short_3;
	}
	if(1)
	{
		short_5 = short_2;
		if(1)
		{
			int int_9 = 1;
			int_9 = int_3 * int_1;
		}
	}
	float_4 = float_2 * float_4;
	int_7 = int_8;
	short_7 = short_1 + short_5;
	double_1 = double_3 * double_7;
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_8 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_8 * unsigned_int_4;
	}
	return int_3;
}

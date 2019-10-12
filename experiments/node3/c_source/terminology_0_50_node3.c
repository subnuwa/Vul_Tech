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

unsigned int v__termpty_shutdown();
void v_termpty_text_scroll_rev_test( float parameter_1,long parameter_2);
short v__handle_esc_dcs( long parameter_1,short parameter_2,char parameter_3);
double v__handle_op_a( float parameter_1,double parameter_2,float parameter_3);
unsigned int v__termpty_ext_handle( float parameter_1,long parameter_2,short parameter_3);
unsigned int v__handle_esc_terminology( float parameter_1,float parameter_2,double parameter_3);
short v__handle_xterm_777_command( double parameter_1,char parameter_2,int parameter_3);
int v__smart_calculate_226();
int v__smart_size( char parameter_1,int parameter_2,int parameter_3,float parameter_4);
void v_colors_term_init( double parameter_1,char parameter_2,float parameter_3);
void v_termio_config_update();
char v__font_size_set( short parameter_1,int parameter_2);
void v_termio_font_size_set( float parameter_1,int parameter_2);
void v__handle_xterm_50_command( double parameter_1,char parameter_2,int parameter_3);
unsigned int v__eina_unicode_to_hex( char parameter_1);
long v__xterm_parse_color( short parameter_1,char parameter_2,double parameter_3,char parameter_4,int parameter_5);
void v__xterm_arg_get( int parameter_1);
char v__handle_esc_xterm( long parameter_1,short parameter_2,int parameter_3);
void v_termpty_cells_set_content( short parameter_1,char parameter_2,unsigned int parameter_3,int parameter_4);
long v__handle_esc_csi_decera( char parameter_1,short parameter_2);
void v_termpty_cells_att_fill_preserve_colors( double parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4);
double v__clean_up_rect_coordinates( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
int v__handle_esc_csi_decfra( short parameter_1,float parameter_2);
float v__handle_esc_csi_decslrm( unsigned int parameter_1,int parameter_2);
unsigned int v__handle_esc_csi_decstbm( int parameter_1,char parameter_2);
double v__handle_esc_csi_decscusr( char parameter_1,long parameter_2);
void v__handle_esc_csi_dsr( char parameter_1,int parameter_2);
void v__handle_esc_csi_truecolor_cmyk( char parameter_1,double parameter_2);
float v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,float parameter_2);
int v__approximate_truecolor_rgb( float parameter_1,int parameter_2,int parameter_3,int parameter_4);
void v__csi_truecolor_arg_get( long parameter_1);
unsigned int v__handle_esc_csi_truecolor_rgb( float parameter_1,short parameter_2);
unsigned int v__handle_esc_csi_color_set( char parameter_1,double parameter_2);
void v_termpty_cursor_copy( float parameter_1,int parameter_2);
short v__switch_to_alternative_screen( long parameter_1,int parameter_2);
void v__move_cursor_to_origin( short parameter_1);
unsigned int v__pty_size( unsigned int parameter_1);
double v__limit_coord( double parameter_1);
short v__check_screen_info( float parameter_1,int parameter_2);
long v__termpty_line_rewrap( long parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4,char parameter_5);
short v__backlog_remove_latest_nolock( int parameter_1);
float v_termpty_save_extract();
short v__termpty_line_is_empty( float parameter_1,char parameter_2);
void v_termpty_screen_swap();
void v_termpty_resize( unsigned int parameter_1,int parameter_2,int parameter_3);
float v_termio_win_get( double parameter_1);
short v__handle_esc_csi_reset_mode( char parameter_1,unsigned int parameter_2,char parameter_3);
void v__handle_esc_csi_cursor_pos_set( long parameter_1,double parameter_2,unsigned int parameter_3);
void v_termpty_text_scroll_rev( long parameter_1,float parameter_2);
void v_termpty_clear_line( unsigned int parameter_1,unsigned int parameter_2,int parameter_3);
void v_termpty_clear_screen( long parameter_1,unsigned int parameter_2);
void v_termpty_cell_codepoint_att_fill( int parameter_1,char parameter_2,char parameter_3,char parameter_4,int parameter_5);
void v__termpty_charset_trans( int parameter_1,double parameter_2);
void v_termio_content_change( double parameter_1,char parameter_2,char parameter_3,int parameter_4);
void v_termpty_text_append( char parameter_1,float parameter_2,int parameter_3);
double v__csi_arg_get( int parameter_1);
float v__handle_esc_csi( unsigned int parameter_1,float parameter_2,long parameter_3);
short v__safechar( double parameter_1);
long v__handle_esc( short parameter_1,short parameter_2,unsigned int parameter_3,int uni_para);
void v_termpty_cell_fill( float parameter_1,double parameter_2,short parameter_3,int parameter_4);
void v_termpty_cells_fill( float parameter_1,double parameter_2,char parameter_3,int parameter_4);
void v_termpty_cells_clear( char parameter_1,float parameter_2,int parameter_3);
int v__tooltip_del(long parameter_2);
float v__tooltip_content(int parameter_2,unsigned int parameter_3);
void v_MD5Final( char parameter_1,short parameter_2);
void v_MD5Transform( unsigned int parameter_1,unsigned int parameter_2);
void v_byteReverse( double parameter_1,char parameter_2);
void v_MD5Update( long parameter_1,char parameter_2,char parameter_3);
void v_MD5Init( float parameter_1);
void v_gravatar_tooltip( float parameter_1,unsigned int parameter_2,char parameter_3);
double v__cb_link_drag_done(unsigned int parameter_2);
void v__cb_link_drag_accept(char parameter_2,double parameter_3);
float v__cb_link_drag_move(long parameter_2,unsigned int parameter_3,short parameter_4,double parameter_5);
unsigned int v__cb_link_icon_new(short parameter_2,long parameter_3,char parameter_4);
char v__cb_link_move(long parameter_2,int parameter_3);
unsigned int v__cb_link_up_delay();
char v__cb_link_up(double parameter_2,unsigned int parameter_3);
void v_term_focus( double parameter_1);
long v__term_is_focused( float parameter_1);
void v_term_unfocus( double parameter_1);
int v__cb_ctxp_del(short parameter_2,char parameter_3);
unsigned int v__cb_ctxp_dismissed(char parameter_2);
int v__cb_ctxp_link_copy(long parameter_2);
double v__screen_visual_bounds( double parameter_1);
double v__draw_cell( long parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4);
long v__draw_line( long parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,unsigned int parameter_5);
char v_termpty_backlog_length( double parameter_1);
char v_termio_pty_get( long parameter_1);
int v_termio_textgrid_get( double parameter_1);
char v_miniview_colors_get( double parameter_1,char parameter_2);
void v__deferred_renderer();
long v__queue_render( char parameter_1);
void v_miniview_redraw();
float v__block_obj_del( int parameter_1);
double v__termpty_is_dblwidth_slow_get( int parameter_1,int parameter_2);
char v__termpty_is_dblwidth_get( float parameter_1,int parameter_2);
void v_term_preedit_str_get( float parameter_1);
long v_media_get( double parameter_1);
float v__smart_media_clicked(int parameter_2);
double v_media_control_get( double parameter_1);
long v__smart_media_stop(int parameter_2);
unsigned int v__smart_media_pause(float parameter_2);
short v__smart_media_play(long parameter_2);
double v__smart_media_del(double parameter_2,short parameter_3);
void v_media_visualize_set( unsigned int parameter_1,double parameter_2);
void v_media_mute_set( int parameter_1,unsigned int parameter_2);
void v_media_volume_set( double parameter_1,double parameter_2);
void v__cb_media_vol(short parameter_2,float parameter_3,double parameter_4);
float v__cb_media_pos(double parameter_2,unsigned int parameter_3,unsigned int parameter_4);
char v__cb_media_pos_drag_stop(long parameter_2,long parameter_3,short parameter_4);
char v__cb_media_pos_drag_start(float parameter_2,int parameter_3,char parameter_4);
void v_media_stop();
unsigned int v__cb_media_stop(char parameter_2,double parameter_3,unsigned int parameter_4);
double v__cb_media_pause(short parameter_2,double parameter_3,short parameter_4);
void v_media_play_set( float parameter_1,char parameter_2);
unsigned int v__cb_media_play(char parameter_2,unsigned int parameter_3,double parameter_4);
void v_media_position_set( short parameter_1,double parameter_2);
short v__cb_mov_ref(double parameter_2);
char v__cb_mov_progress(int parameter_2);
double v__cb_mov_restart();
int v__cb_mov_decode_stop(int parameter_2);
char v__cb_mov_len_change(char parameter_2);
char v__cb_mov_frame_resize(int parameter_2);
void v__cb_mov_frame_decode(float parameter_2);
char v__type_mov_init( float parameter_1);
double v__cb_edje_preloaded(long parameter_2,char parameter_3,long parameter_4);
unsigned int v__type_edje_init( char parameter_1);
float v__type_scale_init( int parameter_1);
void v__cb_img_frame();
short v__type_img_anim_handle( long parameter_1);
char v__cb_img_preloaded(long parameter_2,char parameter_3);
char v__type_img_init();
int v__url_compl_cb(int parameter_2);
double v__url_prog_cb(int parameter_2);
short v__type_thumb_calc( double parameter_1,double parameter_2,char parameter_3,long parameter_4,long parameter_5);
long v__type_mov_calc( char parameter_1,int parameter_2,char parameter_3,double parameter_4,unsigned int parameter_5);
void v__type_edje_calc( int parameter_1,unsigned int parameter_2,long parameter_3,long parameter_4,char parameter_5);
float v__type_img_calc( double parameter_1,double parameter_2,short parameter_3,long parameter_4,long parameter_5);
double v__cb_scale_preloaded(char parameter_2,int parameter_3,int uni_para);
char v__type_scale_calc( int parameter_1,short parameter_2,long parameter_3,short parameter_4,char parameter_5,int uni_para);
short v__unsmooth_timeout(int uni_para);
char v__smooth_handler( float parameter_1,int uni_para);
float v__smart_calculate( double parameter_1,int uni_para);
double v__smart_move( double parameter_1,char parameter_2,short parameter_3);
long v__smart_resize( double parameter_1,float parameter_2,unsigned int parameter_3);
void v__smart_del( char parameter_1);
void v__smart_add();
double v__smart_init(int uni_para);
long v_media_add( short parameter_1,char parameter_2,short parameter_3,int parameter_4,float parameter_5,int uni_para);
char v__block_media_activate( float parameter_1,short parameter_2,int uni_para);
int v__block_edje_message_cb(float parameter_2,long parameter_3,int parameter_4);
void v_termpty_write( int parameter_1,short parameter_2,int parameter_3);
float v__block_edje_signal_cb(short parameter_2,float parameter_3,double parameter_4);
void v_termpty_block_chid_update( char parameter_1,char parameter_2);
double v__block_edje_cmds( float parameter_1,long parameter_2,unsigned int parameter_3,double parameter_4);
short v_homedir_get( char parameter_1,unsigned int parameter_2);
long v__block_edje_activate( int parameter_1,long parameter_2);
void v__block_activate( double parameter_1,long parameter_2,int uni_para);
unsigned int v_termpty_block_get( char parameter_1,int parameter_2);
int v_termpty_block_id_get( short parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( unsigned int parameter_1,int parameter_2);
void v__smart_apply( unsigned int parameter_1,int uni_para);
void v__smart_cb_change(int uni_para);
unsigned int v__smart_update_queue( char parameter_1,char parameter_2,int uni_para);
double v__lost_selection_reset_job();
short v__lost_selection(unsigned int parameter_2,int uni_para);
short v__take_selection_text( float parameter_1,double parameter_2,long parameter_3,int uni_para);
unsigned int v__cb_ctxp_link_content_copy(float parameter_2,int uni_para);
void v_ty_sb_free( float parameter_1);
float v_ty_sb_steal_buf();
int v_codepoint_to_utf8( unsigned int parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( short parameter_1);
int v_ty_sb_add( double parameter_1,long parameter_2,double parameter_3);
char v__termpty_cellrow_from_beacon_get( unsigned int parameter_1,int parameter_2,char parameter_3);
float v_termpty_cellrow_get( int parameter_1,int parameter_2,double parameter_3);
float v_termio_selection_get( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,float parameter_6,int parameter_7);
int v__cb_ctxp_link_open(float parameter_2);
int v__should_inline();
short v_link_is_email( unsigned int parameter_1);
short v_link_is_protocol( float parameter_1);
short v_link_is_url( char parameter_1);
void v__activate_link( short parameter_1,unsigned int parameter_2);
float v__cb_ctxp_link_preview(int parameter_2);
double v__is_fmt( char parameter_1,float parameter_2);
long v_media_src_type_get( unsigned int parameter_1);
short v__mouse_in_selection( unsigned int parameter_1,int parameter_2,int parameter_3);
unsigned int v__smart_xy_to_cursor( short parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4,int parameter_5);
void v__cb_link_down(long parameter_2,double parameter_3,int uni_para);
float v_main_term_popup_exists( double parameter_1);
long v__update_link( float parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4,int uni_para);
unsigned int v__remove_links( float parameter_1,double parameter_2,int uni_para);
int v__sel_set( float parameter_1,long parameter_2);
int v_termio_scroll_get( int parameter_1);
void v_miniview_position_offset( short parameter_1,int parameter_2,float parameter_3);
char v_term_miniview_get( short parameter_1);
void v_termio_scroll( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
unsigned int v_termpty_save_new( unsigned int parameter_1,int parameter_2);
int v_termpty_save_expand( char parameter_1,long parameter_2,unsigned int parameter_3);
void v__termpty_cell_is_empty( long parameter_1);
double v_termpty_line_length( double parameter_1,char parameter_2);
double v_verify_beacon( char parameter_1,int parameter_2);
void v_termpty_text_save_top( float parameter_1,char parameter_2,int parameter_3);
void v_termpty_text_scroll( float parameter_1,float parameter_2,int uni_para);
void v_termpty_text_scroll_test( double parameter_1,double parameter_2,int uni_para);
long v__cursor_to_start_of_line( double parameter_1);
long v__tab_forward( double parameter_1,int parameter_2);
void v__handle_cursor_control( double parameter_1,short parameter_2);
int v_termpty_handle_seq( char parameter_1,int parameter_2,int parameter_3,int uni_para);
void v_termpty_handle_buf( int parameter_1,int parameter_2,int parameter_3,int uni_para);
void v_theme_reload( unsigned int parameter_1);
int v_theme_reload_cb(char parameter_2,char parameter_3,unsigned int parameter_4);
void v_theme_auto_reload_enable();
short v__cursor_shape_to_group_name( long parameter_1);
float v_config_theme_path_default_get( int parameter_1);
float v_theme_path_get();
int v_config_theme_path_get( unsigned int parameter_1);
double v_theme_apply( unsigned int parameter_1,short parameter_2,unsigned int parameter_3);
void v_termio_set_cursor_shape( int parameter_1,unsigned int parameter_2);
void v_termpty_clear_tabs_on_screen( long parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( long parameter_1,short parameter_2);
void v__ts_free();
void v_termpty_save_free( double parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( short parameter_1);
void v_termpty_reset_att( long parameter_1);
int v_termio_config_get( double parameter_1);
void v_termpty_reset_state( char parameter_1);
void v_termpty_resize_tabs( char parameter_1,int parameter_2,int parameter_3);
char v__termpty_init( char parameter_1);
unsigned int v__add_default_keys( short parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,long parameter_4,char parameter_5,unsigned int parameter_6);
char v_config_new();
unsigned int v__termpty_shutdown()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_1;
	return unsigned_int_1;
}
void v_termpty_text_scroll_rev_test( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
		float float_1 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char_3 = char_1 + char_2;
		v_termpty_text_scroll_rev(long_1,float_2);

		int_2 = int_1 + int_1;
		double_1 = double_1 * double_1;
	}
}
short v__handle_esc_dcs( long parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
			if(1)
			{
				double double_2 = 1;
				if(1)
				{
					double_2 = double_1;
				}
				if(1)
				{
					double double_3 = 1;
					double double_4 = 1;
					double_2 = double_3 + double_4;
				}
			}
		}
		if(1)
		{
			short_1 = v__safechar(double_5);

			float_2 = float_1 * float_1;
		}
		if(1)
		{
			int int_2 = 1;
			v_termpty_write(int_1,short_1,int_1);

			int_3 = int_1 + int_2;
		}
		if(1)
		{
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			float_5 = float_3 * float_4;
		}
		if(1)
		{
			float float_6 = 1;
			float_2 = float_1 + float_6;
		}
	}
	char controller_11[2];
	fgets(controller_11 ,2 ,stdin);
	if( strcmp( controller_11, "b") < 0)
	{
		if(1)
		{
			int_1 = int_1 * int_3;
		}
	}
	return short_2;
}
double v__handle_op_a( float parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_1;
	float_2 = float_1 * float_1;
	return double_1;
}
unsigned int v__termpty_ext_handle( float parameter_1,long parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1;
	return unsigned_int_1;
	double_1 = v__handle_op_a(float_1,double_1,float_1);

}
unsigned int v__handle_esc_terminology( float parameter_1,float parameter_2,double parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_termio_config_get(double_1);

	unsigned_int_1 = v__termpty_ext_handle(float_1,long_1,short_1);

	unsigned_int_2 = unsigned_int_2;
	return unsigned_int_1;
}
short v__handle_xterm_777_command( double parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	float_1 = float_2;
	unsigned_int_5 = unsigned_int_4;
	int_1 = int_2 + int_3;
	char_2 = char_3 * char_1;
	char_1 = char_1 + char_3;
	return short_1;
}
int v__smart_calculate_226()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_2;
	float_1 = float_1 + float_2;
	long_2 = long_3 * long_4;
	int_4 = int_3 + int_3;
	long_3 = long_5 * long_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return int_4;
}
int v__smart_size( char parameter_1,int parameter_2,int parameter_3,float parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short_3 = short_1 * short_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "*") > 0)
		{
		}
	}
	double_1 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_1;
	int_1 = v__sel_set(float_2,long_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_2 = v__smart_calculate_226();

	int_2 = int_3 * int_2;
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short_3 = short_4 + short_5;
	}
	double_3 = double_4 + double_3;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_2 + long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	v_termpty_resize(unsigned_int_4,int_4,int_4);

	int_1 = int_4 * int_5;
	int_2 = int_5;
	return int_1;
	v__smart_apply(unsigned_int_2,-1 );

}
void v_colors_term_init( double parameter_1,char parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 + short_2;
	long_3 = long_1 + long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_2 + short_3;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_5 = 1;
			long long_4 = 1;
			double_1 = double_1 * double_2;
			short_2 = short_4 + short_5;
			short_3 = short_2;
			long_4 = long_2 + long_2;
		}
		if(1)
		{
			int_2 = int_1 + int_1;
			char controller_3[2];
			fgets(controller_3 ,2 ,stdin);
			if( strcmp( controller_3, "f") > 0)
			{
				int int_3 = 1;
				int int_4 = 1;
				int int_5 = 1;
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
				int_1 = int_3 + int_3;
				int_1 = int_4 * int_5;
				float_2 = float_1 * float_1;
				unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
			}
		}
		float_2 = float_3 + float_3;
		short_1 = short_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned_int_4 = unsigned_int_2;
			if(1)
			{
				unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			int_2 = int_2 * int_1;
			if(1)
			{
				char_1 = char_1 + char_2;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float float_5 = 1;
		float float_6 = 1;
		char_1 = char_2 * char_1;
		if(1)
		{
			char char_3 = 1;
			double double_3 = 1;
			float float_4 = 1;
			char_3 = char_2 + char_2;
			double_3 = double_3 + double_3;
			float_3 = float_2 * float_4;
			float_4 = float_5 + float_1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
		}
		float_6 = float_3 * float_5;
	}
}
void v_termio_config_update()
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	float float_5 = 1;
	double double_4 = 1;
	v_termpty_backlog_size_set(long_1,short_1);

	float_2 = float_1 + float_1;
	float_1 = float_3 * float_1;
	v_termio_set_cursor_shape(int_1,unsigned_int_1);

	long_1 = long_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		int_3 = int_2 + int_2;
	}
	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		v_colors_term_init(double_3,char_1,float_3);

		float_2 = float_1 + float_1;
	}
	if(1)
	{
		int_1 = int_3;
	}
	int_1 = v__smart_size(char_1,int_4,int_2,float_1);

	int_4 = int_4 + int_1;
	float_4 = float_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_3 + int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	float_4 = float_2 * float_1;
	int_5 = int_2 + int_2;
	char_1 = char_2 * char_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 * short_1;
	}
	double_1 = double_2 + double_3;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_2;
	char_3 = char_1 + char_1;
	float_1 = float_5;
	double_4 = double_3 * double_2;
}
char v__font_size_set( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	v_termio_config_update();

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 + int_2;
	long_2 = long_1 + long_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "x.") < 0)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long_2 = long_2 * long_1;
		long_2 = long_2;
		int_1 = int_2 * int_1;
		float_2 = float_1 * float_2;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		double_2 = double_3;
	}
	return char_1;
}
void v_termio_font_size_set( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = v__font_size_set(short_1,int_1);

}
void v__handle_xterm_50_command( double parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_termio_font_size_set(float_1,int_1);

	int_1 = int_1 * int_2;
}
unsigned int v__eina_unicode_to_hex( char parameter_1)
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
long v__xterm_parse_color( short parameter_1,char parameter_2,double parameter_3,char parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		double_1 = double_1;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	short_2 = short_1 + short_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_4 = 1;
		float float_5 = 1;
		int_3 = int_3 * int_4;
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		double_2 = double_2 * double_1;
		short_1 = short_2 + short_2;
		if(1)
		{
			long_1 = long_1;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
		double_1 = double_1 + double_1;
		if(1)
		{
			char_2 = char_1 * char_1;
		}
		char_3 = char_2 * char_1;
		float_2 = float_1 * float_1;
		if(1)
		{
			unsigned_int_4 = v__eina_unicode_to_hex(char_1);

			float_3 = float_1 * float_3;
		}
		long_1 = long_2;
		int_5 = int_2 * int_3;
		if(1)
		{
			float float_4 = 1;
			float_4 = float_1;
		}
		char_4 = char_2;
		float_5 = float_3 * float_2;
		if(1)
		{
			double_2 = double_1 * double_3;
		}
		double_2 = double_3 * double_2;
	}
	if(1)
	{
		short short_4 = 1;
		int int_6 = 1;
		short short_5 = 1;
		int_2 = int_2 + int_5;
		if(1)
		{
			short short_3 = 1;
			short_1 = short_3 + short_4;
		}
		int_6 = int_2 + int_6;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
		if(1)
		{
			double_2 = double_1;
		}
		short_4 = short_2 * short_5;
		double_2 = double_1 * double_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_2 = long_3;
	}
	double_3 = double_2 + double_2;
	return long_2;
}
void v__xterm_arg_get( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_2;
	char_1 = char_2;
	float_1 = float_2;
	double_2 = double_2 * double_3;
	float_2 = float_3 * float_4;
	double_4 = double_1 + double_2;
	int_4 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_2;
	char_5 = char_3 + char_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	long_2 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	double_6 = double_1 * double_5;
	int_3 = int_1 * int_4;
	short_2 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_2;
	double_3 = double_4 + double_3;
	int_4 = int_4 * int_5;
}
char v__handle_esc_xterm( long parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	int int_4 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_6 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v__handle_xterm_50_command(double_1,char_1,int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_2 + double_3;
	int_3 = int_2 + int_2;
	long_1 = v__xterm_parse_color(short_1,char_1,double_4,char_2,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	double_2 = double_1;
	if(1)
	{
		v__xterm_arg_get(int_4);

		long_2 = long_1 * long_1;
	}
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1;
	short_1 = short_2 + short_2;
	if(1)
	{
		long_1 = long_2 * long_3;
	}
	float_2 = float_1;
	if(1)
	{
		int_3 = v_termio_textgrid_get(double_3);

		short_4 = short_3 + short_2;
	}
	double_2 = double_5 + double_4;
	short_2 = short_1 + short_3;
	int_4 = v_termio_config_get(double_5);

	long_3 = long_3 + long_3;
	int_5 = int_3 * int_2;
	float_1 = float_2 + float_1;
	if(1)
	{
		double_5 = double_1 * double_2;
	}
	if(1)
	{
		int_3 = int_2;
		long_2 = long_2 * long_3;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		short short_5 = 1;
		short_5 = short_4 * short_5;
	}
	int_4 = int_2 + int_4;
	short_4 = v__handle_xterm_777_command(double_4,char_2,int_4);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	char controller_8[2];
	fgets(controller_8 ,2 ,stdin);
	if( strcmp( controller_8, "<") < 0)
	{
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_1 = long_1 * long_4;
	}
	if(1)
	{
		int_4 = int_1 + int_1;
		long_3 = long_2 + long_1;
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		int_5 = int_5;
	}
	float_2 = float_2;
	int_5 = int_4;
	return char_1;
	v_termpty_write(int_5,short_6,int_5);

}
void v_termpty_cells_set_content( short parameter_1,char parameter_2,unsigned int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short_2 = short_1 + short_1;
		int_1 = int_2;
	}
}
long v__handle_esc_csi_decera( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	double_2 = double_1 + double_2;
	v_termpty_cells_set_content(short_1,char_1,unsigned_int_1,int_1);

	long_2 = long_1 + long_1;
	short_1 = short_2;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	double_1 = double_3 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_4 = v__csi_arg_get(int_3);

		double_2 = double_2 * double_1;
		double_4 = v__clean_up_rect_coordinates(int_3,int_4,int_5,int_5,int_6);

		long_1 = long_2;
	}
	return long_3;
}
void v_termpty_cells_att_fill_preserve_colors( double parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_2 = double_2 * double_1;
		double_2 = double_3 + double_4;
		int_2 = int_1 * int_2;
		if(1)
		{
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_1 = 1;
			int_3 = int_1 * int_2;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
			double_1 = double_1;
			short_1 = short_1 + short_1;
			int_1 = int_2 + int_3;
			int_2 = int_3;
		}
	}
}
double v__clean_up_rect_coordinates( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long_1 = long_1 + long_2;
	short_1 = short_1 + short_1;
	int_2 = int_1 + int_1;
	char_1 = char_1 * char_2;
	float_2 = float_1 * float_2;
	long_2 = long_3 + long_4;
	if(1)
	{
		long_4 = long_2 + long_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_3 + char_1;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_4 = double_1 + double_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			float_1 = float_2;
		}
	}
	if(1)
	{
		char_3 = char_3 * char_3;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3;
	}
	if(1)
	{
		short_2 = short_1 * short_2;
		if(1)
		{
			double_2 = double_4 + double_4;
		}
	}
	short_2 = short_2 + short_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 * short_1;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	char_5 = char_4 + char_4;
	char_1 = char_5 * char_3;
	return double_4;
}
int v__handle_esc_csi_decfra( short parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_1;
	v_termpty_cells_att_fill_preserve_colors(double_1,double_1,unsigned_int_1,int_2);

	short_1 = short_1;
	double_1 = v__clean_up_rect_coordinates(int_3,int_1,int_1,int_2,int_2);

	short_2 = short_2;
	int_1 = int_3;
	short_2 = short_2 + short_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "=}") > 0)
	{
	}
	if(1)
	{
	}
	int_4 = int_3 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		double_1 = v__csi_arg_get(int_5);

		int_3 = int_2 * int_2;
	}
	return int_4;
}
float v__handle_esc_csi_decslrm( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_1 + float_1;
	if(1)
	{
		long_1 = long_2 * long_1;
	}
	int_3 = int_1 + int_2;
	if(1)
	{
		v__move_cursor_to_origin(short_1);

		float_2 = float_1 + float_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		float_1 = float_2 * float_3;
	}
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	double_2 = v__csi_arg_get(int_1);

	long_3 = long_3;
	double_3 = double_3 * double_1;
	char_1 = char_1 * char_1;
	return float_3;
}
unsigned int v__handle_esc_csi_decstbm( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_3 = short_1 * short_2;
	short_4 = short_5;
	char_1 = char_2;
	long_1 = long_1;
	char_4 = char_3 + char_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	float_3 = float_3;
	char_4 = char_3 + char_2;
	double_1 = v__csi_arg_get(int_1);

	v__move_cursor_to_origin(short_3);

	long_2 = long_3;
	short_2 = short_3 * short_5;
	double_3 = double_3 * double_2;
	return unsigned_int_1;
}
double v__handle_esc_csi_decscusr( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_1;
	short_1 = short_1 * short_1;
	double_1 = double_1 * double_1;
	int_1 = int_1 + int_1;
	char_1 = char_1;
	v_termio_set_cursor_shape(int_2,unsigned_int_1);

	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1;
	double_1 = double_1 + double_2;
	int_3 = int_2 * int_1;
	short_1 = short_1 + short_2;
	int_2 = int_1 * int_2;
	float_3 = float_1 + float_2;
	double_2 = v__csi_arg_get(int_2);

	long_2 = long_2 + long_1;
	unsigned_int_2 = unsigned_int_2;
	double_2 = double_2 * double_1;
	return double_3;
}
void v__handle_esc_csi_dsr( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_termpty_write(int_1,short_1,int_1);

	float_1 = float_1;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		double_2 = v__csi_arg_get(int_2);

		long_1 = long_1 * long_2;
		short_3 = short_2 + short_2;
		int_5 = int_3 + int_4;
		char_1 = char_2;
		char_2 = char_2 + char_1;
		double_2 = double_2 + double_1;
		double_1 = double_4 * double_1;
	}
	if(1)
	{
		double double_5 = 1;
		int_3 = int_4 + int_1;
		long_1 = long_1 + long_1;
		int_1 = int_1;
		long_2 = long_2 + long_2;
		int_3 = int_3 + int_5;
		double_3 = double_3 + double_5;
	}
}
void v__handle_esc_csi_truecolor_cmyk( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	int_1 = v__approximate_truecolor_rgb(float_1,int_2,int_3,int_1);

	int_2 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 * int_1;
	float_2 = float_1 * float_1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	v__csi_truecolor_arg_get(long_1);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_1 * long_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	short_1 = short_1 * short_1;
}
float v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,float parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int int_5 = 1;
	float float_2 = 1;
	short_1 = short_1 * short_1;
	double_1 = double_1 * double_1;
	int_1 = int_2;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	int_2 = v__approximate_truecolor_rgb(float_1,int_2,int_2,int_3);

	double_1 = double_1 + double_1;
	int_2 = int_4 + int_4;
	v__csi_truecolor_arg_get(long_1);

	int_5 = int_5 * int_4;
	return float_2;
}
int v__approximate_truecolor_rgb( float parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char_1 = char_1;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		if(1)
		{
			short short_1 = 1;
			int_1 = v_termio_textgrid_get(double_1);

			short_2 = short_1 * short_1;
		}
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 * double_3;
			if(1)
			{
				short short_3 = 1;
				short_3 = short_2;
			}
		}
	}
	return int_1;
}
void v__csi_truecolor_arg_get( long parameter_1)
{
}
unsigned int v__handle_esc_csi_truecolor_rgb( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 * int_2;
	double_1 = double_1 + double_2;
	v__csi_truecolor_arg_get(long_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_2 + double_3;
	int_3 = v__approximate_truecolor_rgb(float_1,int_2,int_2,int_1);

	double_1 = double_1 * double_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_1 = int_2 * int_1;
		short_1 = short_1 * short_1;
		short_3 = short_2 + short_3;
	}
	if(1)
	{
	}
	return unsigned_int_2;
}
unsigned int v__handle_esc_csi_color_set( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double_1 = v__csi_arg_get(int_1);

	unsigned_int_1 = v__handle_esc_csi_truecolor_rgb(float_1,short_1);

	v__handle_esc_csi_truecolor_cmyk(char_1,double_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	return unsigned_int_2;
	v_termpty_reset_att(long_1);

	float_1 = v__handle_esc_csi_truecolor_cmy(unsigned_int_2,float_1);

}
void v_termpty_cursor_copy( float parameter_1,int parameter_2)
{
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		long_2 = long_1 * long_1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float_3 = float_1 + float_2;
		short_1 = short_1 * short_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		short_2 = short_2 + short_2;
	}
}
short v__switch_to_alternative_screen( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		v_termpty_screen_swap();

		int_2 = int_1 * int_2;
	}
	return short_1;
}
void v__move_cursor_to_origin( short parameter_1)
{
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double_1 = double_1 * double_1;
		double_1 = double_1;
		int_2 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_1 = short_1 * short_1;
		char_2 = char_1 + char_1;
	}
}
unsigned int v__pty_size( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	char_1 = char_1;
	short_1 = short_2;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	return unsigned_int_1;
}
double v__limit_coord( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	char_2 = char_1 + char_1;
	long_3 = long_1 * long_2;
	int_3 = int_2 + int_1;
	int_3 = int_2 + int_3;
	return double_1;
}
short v__check_screen_info( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_1 = 1;
		double double_3 = 1;
		char_1 = char_1 + char_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		v_termpty_text_save_top(float_1,char_2,int_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		double_1 = double_1;
		if(1)
		{
			double double_2 = 1;
			v_termpty_cells_clear(char_1,float_2,int_1);

			double_1 = double_2 + double_3;
		}
		double_1 = double_1 + double_3;
	}
	return short_1;
}
long v__termpty_line_rewrap( long parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4,char parameter_5)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short_1 = v__check_screen_info(float_1,int_1);

	float_2 = float_2 * float_2;
	int_2 = int_2 * int_3;
	long_1 = long_1 * long_1;
	return long_1;
}
short v__backlog_remove_latest_nolock( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double_1 = v_verify_beacon(char_1,int_1);

	double_1 = double_2 + double_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_2 = int_3;
	float_3 = float_1 + float_2;
	v_termpty_save_free(double_1);

	int_1 = int_1 + int_3;
	unsigned_int_3 = unsigned_int_3;
	return short_1;
}
float v_termpty_save_extract()
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float float_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double_1 = double_2;
			double_2 = double_3 + double_4;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			long_1 = long_1 + long_1;
			long_3 = long_1 * long_2;
			if(1)
			{
			}
			float_1 = float_2;
			long_1 = long_1 * long_3;
			int_2 = int_1 * int_1;
			if(1)
			{
				short short_1 = 1;
				short_1 = short_1 + short_1;
			}
		}
	}
	return float_1;
}
short v__termpty_line_is_empty( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_3;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "[V") == 0)
		{
		}
	}
	return short_1;
	v__termpty_cell_is_empty(long_1);

}
void v_termpty_screen_swap()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_2;
	int_2 = int_1 + int_1;
	int_1 = int_2 + int_2;
	unsigned_int_2 = unsigned_int_3;
	long_2 = long_1 + long_2;
	double_2 = double_1 + double_1;
	double_1 = double_1;
	int_2 = int_1 + int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "!z") > 0)
	{
		int_1 = int_2 * int_2;
	}
}
void v_termpty_resize( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	char char_3 = 1;
	int int_6 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	short short_4 = 1;
	double double_3 = 1;
	long long_5 = 1;
	int int_7 = 1;
	long long_6 = 1;
	char char_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_4 = 1;
	float float_6 = 1;
	char char_7 = 1;
	float float_7 = 1;
	double double_5 = 1;
	short short_6 = 1;
	int int_8 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3;
	short_2 = short_1 + short_1;
	int_1 = int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		short_3 = short_2;
		char_2 = char_1 + char_2;
	}
	int_1 = int_3 + int_4;
	if(1)
	{
		int_4 = int_2 + int_5;
	}
	unsigned_int_3 = unsigned_int_4;
	float_1 = v_termpty_save_extract();

	char_2 = char_3 * char_1;
	if(1)
	{
		v_termpty_screen_swap();

		int_6 = int_1 * int_1;
	}
	float_1 = float_1 + float_2;
	double_1 = v__limit_coord(double_2);

	char_2 = char_1;
	unsigned_int_4 = v__pty_size(unsigned_int_2);

	long_3 = long_1 * long_2;
	unsigned_int_5 = unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_3 = long_3 * long_4;
		if(1)
		{
			float float_3 = 1;
			v_termpty_backlog_lock();

			unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
			float_3 = float_3 + float_2;
		}
	}
	long_1 = long_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	int_4 = int_4 * int_5;
	if(1)
	{
		short short_5 = 1;
		int_5 = int_1 + int_6;
		short_5 = short_4 * short_5;
		double_3 = double_2 + double_2;
		if(1)
		{
			long_4 = long_3 + long_4;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
			unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
			long_4 = long_2 * long_5;
			if(1)
			{
				int_7 = int_5 * int_7;
			}
			v_termpty_backlog_unlock();

			double_2 = double_3;
			long_6 = v__termpty_line_rewrap(long_3,unsigned_int_4,int_1,long_4,char_4);

			float_5 = float_4 * float_4;
			short_2 = short_2 * short_4;
			short_5 = short_4 * short_3;
			unsigned_int_2 = unsigned_int_3;
			long_4 = long_5 * long_1;
			v_termpty_resize_tabs(char_1,int_5,int_4);

			long_5 = long_3;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_2 = char_5 + char_6;
		double_4 = double_2 + double_1;
		short_1 = v__backlog_remove_latest_nolock(int_1);

		short_4 = short_1;
		short_1 = short_1 + short_2;
	}
	short_2 = v__termpty_line_is_empty(float_6,char_4);

	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	char_7 = char_4 * char_3;
	long_2 = long_5 * long_3;
	double_4 = v_termpty_line_length(double_3,char_6);

	float_5 = float_4 + float_4;
	int_6 = int_3 + int_7;
	float_7 = float_6 + float_4;
	double_2 = double_2;
	if(1)
	{
		double double_6 = 1;
		double_5 = double_5 * double_6;
	}
	unsigned_int_4 = unsigned_int_2;
	int_7 = int_2 + int_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_7;
	short_6 = short_3 + short_3;
	double_5 = v_verify_beacon(char_5,int_1);

	int_8 = int_2 * int_6;
	short_6 = short_2 + short_4;
	int_1 = int_1 * int_3;
}
float v_termio_win_get( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float_2 = float_1 * float_2;
	char_2 = char_1 * char_2;
	return float_3;
}
short v__handle_esc_csi_reset_mode( char parameter_1,unsigned int parameter_2,char parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_termpty_cursor_copy(float_1,int_1);

	char_2 = char_1 + char_1;
	float_1 = v_termio_win_get(double_1);

	v_termpty_clear_screen(long_1,unsigned_int_1);

	long_3 = long_1 + long_2;
	v__move_cursor_to_origin(short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return short_1;
	double_2 = v__csi_arg_get(int_1);

	v_termpty_resize(unsigned_int_3,int_1,int_1);

	v_termpty_reset_state(char_2);

	short_1 = v__switch_to_alternative_screen(long_3,int_1);

}
void v__handle_esc_csi_cursor_pos_set( long parameter_1,double parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	short short_5 = 1;
	double_2 = double_1 * double_2;
	double_1 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_2;
	short_1 = short_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		char_1 = char_3 + char_1;
		if(1)
		{
			double_4 = double_4 * double_1;
		}
	}
	if(1)
	{
		char_1 = char_1 + char_3;
	}
	float_3 = float_1 * float_2;
	char_6 = char_4 + char_5;
	if(1)
	{
		double_4 = double_2 * double_4;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_1 * short_3;
		if(1)
		{
			char char_7 = 1;
			char_7 = char_2;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_1 + int_3;
	}
	double_4 = v__csi_arg_get(int_1);

	short_2 = short_2 * short_5;
}
void v_termpty_text_scroll_rev( long parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		int_1 = int_1 + int_1;
		double_3 = double_1 + double_2;
	}
	float_2 = float_1 + float_1;
	double_1 = double_3 * double_4;
	if(1)
	{
		char char_3 = 1;
		short short_2 = 1;
		char_2 = char_3 * char_3;
		if(1)
		{
			float float_4 = 1;
			v_termio_scroll(short_1,int_2,int_2,int_3,-1 );

			float_1 = float_3 * float_4;
		}
		short_2 = short_1 * short_1;
		if(1)
		{
			long long_1 = 1;
			v_termpty_cells_clear(char_2,float_2,int_1);

			long_1 = long_1 + long_1;
		}
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double_6 = double_5 * double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_5 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_3 = 1;
			float_6 = float_5 + float_1;
			float_1 = float_2 * float_3;
			unsigned_int_2 = unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		}
	}
}
void v_termpty_clear_line( unsigned int parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_1 * long_2;
	int_3 = int_1 + int_2;
	long_2 = long_3 * long_4;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_3 + int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_1 * int_1;
	float_1 = float_1 * float_2;
	v_termpty_cells_clear(char_1,float_2,int_5);

	double_1 = double_3 + double_2;
	long_2 = long_1;
	if(1)
	{
		v_termio_content_change(double_4,char_1,char_1,int_3);

		int_4 = int_1 * int_1;
	}
	double_1 = double_1 * double_3;
	long_4 = long_3 + long_5;
}
void v_termpty_clear_screen( long parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_6 = 1;
	if(1)
	{
		v_termpty_cells_clear(char_1,float_1,int_1);

		long_1 = long_1 + long_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ")") > 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		v_termpty_clear_line(unsigned_int_1,unsigned_int_2,int_1);

		char_3 = char_2 + char_1;
	}
	unsigned_int_3 = unsigned_int_1;
	char_5 = char_4 + char_1;
	int_3 = int_2 + int_1;
	v_termio_content_change(double_1,char_1,char_6,int_1);

	long_1 = long_2;
}
void v_termpty_cell_codepoint_att_fill( int parameter_1,char parameter_2,char parameter_3,char parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_2 = int_1;
		char_3 = char_1 + char_2;
	}
}
void v__termpty_charset_trans( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_1;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
	}
	if(1)
	{
		double double_2 = 1;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 * double_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
		}
	}
}
void v_termio_content_change( double parameter_1,char parameter_2,char parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1;
	double_2 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		int_1 = v__sel_set(float_1,long_1);

		unsigned_int_4 = unsigned_int_1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		short_1 = short_1 * short_2;
		double_1 = double_2 + double_2;
		double_3 = double_3 * double_1;
		double_3 = double_3 + double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_2 = char_1 + char_1;
			if(1)
			{
				double_1 = double_3 + double_1;
				int_2 = int_2 + int_3;
			}
			double_3 = double_2;
			long_2 = long_1 + long_2;
		}
	}
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_3 * double_1;
	char_1 = char_2 * char_1;
	double_1 = double_3 + double_2;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 + long_1;
		unsigned_int_6 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_3;
		float_1 = float_1 + float_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_3 = 1;
			int int_4 = 1;
			double double_5 = 1;
			int int_5 = 1;
			int int_6 = 1;
			char_3 = char_2 * char_1;
			if(1)
			{
				double double_4 = 1;
				double_2 = double_4;
				int_3 = int_4 + int_1;
			}
			double_1 = double_2 + double_5;
			int_6 = int_5 + int_4;
		}
	}
	if(1)
	{
		short short_3 = 1;
		int int_7 = 1;
		long long_4 = 1;
		long long_5 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float_1 = float_1 + float_2;
		short_3 = short_1 * short_1;
		int_2 = int_7 + int_3;
		long_5 = long_4 * long_4;
		unsigned_int_7 = v__remove_links(float_3,double_3,-1 );

		float_5 = float_2 * float_4;
		if(1)
		{
			double double_6 = 1;
			double_6 = double_3 + double_2;
		}
	}
}
void v_termpty_text_append( char parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_9 = 1;
	int_1 = int_1 * int_1;
	short_2 = short_1 + short_2;
	char_1 = v__termpty_is_dblwidth_get(float_1,int_2);

	int_2 = int_3 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 * short_2;
	}
	v_termpty_text_scroll_test(double_1,double_2,-1 );

	double_3 = double_2 + double_1;
	float_3 = float_2 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		long long_1 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_4 = 1;
		int int_5 = 1;
		float float_5 = 1;
		double_4 = double_2 * double_2;
		if(1)
		{
			long long_2 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			double_4 = double_1 + double_4;
			int_1 = int_3 * int_3;
			long_2 = long_1 + long_1;
			long_2 = long_3 + long_2;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_5 = double_6;
			}
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			double_7 = double_2 * double_2;
		}
		if(1)
		{
			if(1)
			{
				char char_3 = 1;
				char_4 = char_2 * char_3;
			}
			long_3 = long_1 + long_1;
		}
		int_1 = int_4;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
			float_4 = float_4;
		}
		short_1 = short_1 + short_2;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			int_6 = int_3 * int_5;
			unsigned_int_7 = unsigned_int_1 + unsigned_int_6;
		}
		if(1)
		{
			v__termpty_charset_trans(int_6,double_6);

			double_7 = double_4 * double_5;
			float_1 = float_5 * float_4;
			if(1)
			{
				int_6 = int_1 * int_7;
			}
			if(1)
			{
				float_4 = float_5 + float_2;
			}
			if(1)
			{
				int_1 = int_2;
				v_termpty_cell_codepoint_att_fill(int_7,char_5,char_4,char_6,int_2);

				float_3 = float_3 * float_4;
			}
		}
		if(1)
		{
			float float_6 = 1;
			double double_8 = 1;
			int_2 = int_1 * int_5;
			float_6 = float_5 * float_1;
			if(1)
			{
				int_3 = int_4;
			}
			double_2 = double_8 * double_5;
			if(1)
			{
				int_5 = int_1 + int_7;
				int_6 = int_4 * int_7;
			}
			int_2 = int_3 * int_2;
		}
	}
	v_termio_content_change(double_9,char_2,char_1,int_4);

}
double v__csi_arg_get( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char_1 = char_2;
	double_1 = double_1 * double_1;
	char_2 = char_1;
	float_1 = float_1 + float_1;
	double_1 = double_2 * double_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	return double_2;
}
float v__handle_esc_csi( unsigned int parameter_1,float parameter_2,long parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	char char_4 = 1;
	v__handle_cursor_control(double_1,short_1);

	v_termpty_text_append(char_1,float_1,int_1);

	v_termpty_text_scroll_rev(long_1,float_2);

	v__handle_esc_csi_cursor_pos_set(long_1,double_1,unsigned_int_1);

	short_2 = v__handle_esc_csi_reset_mode(char_2,unsigned_int_1,char_2);

	unsigned_int_1 = v__handle_esc_csi_color_set(char_2,double_1);

	v__handle_esc_csi_dsr(char_3,int_2);

	unsigned_int_1 = v__handle_esc_csi_decstbm(int_3,char_2);

	float_1 = v__handle_esc_csi_decslrm(unsigned_int_2,int_3);

	int_3 = v__handle_esc_csi_decfra(short_2,float_1);

	unsigned_int_2 = unsigned_int_2;
	short_2 = v__safechar(double_2);

	double_2 = v__csi_arg_get(int_4);

	long_2 = v__tab_forward(double_3,int_4);

	v_termpty_clear_screen(long_3,unsigned_int_3);

	v_termpty_clear_backlog(short_2);

	v_termpty_clear_line(unsigned_int_4,unsigned_int_2,int_1);

	v_termpty_write(int_1,short_3,int_3);

	v_termpty_clear_tabs_on_screen(long_4);

	long_3 = v__handle_esc_csi_decera(char_3,short_1);

	int_5 = int_5;
	return float_1;
	v_termpty_text_scroll(float_1,float_1,-1 );

	v_termpty_reset_state(char_3);

	double_4 = v__handle_esc_csi_decscusr(char_4,long_4);

	v_termpty_cursor_copy(float_1,int_1);

}
short v__safechar( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "#") < 0)
	{
	}
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	double_4 = double_3 * double_2;
	return short_1;
}
long v__handle_esc( short parameter_1,short parameter_2,unsigned int parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	float float_6 = 1;
	float float_7 = 1;
	double double_6 = 1;
	long long_5 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2 * short_2;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	short_3 = short_3 + short_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	double_2 = double_3 * double_3;
	float_3 = float_1 + float_2;
	short_1 = short_1;
	long_4 = long_1;
	double_5 = double_4 + double_2;
	char_1 = char_1;
	char_2 = char_1;
	char_2 = char_3 * char_2;
	float_3 = float_4 * float_4;
	float_3 = float_3 * float_5;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	char_5 = char_4 + char_5;
	int_3 = int_1 + int_3;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_1;
	int_1 = int_1;
	float_4 = float_2 * float_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
	}
	if(1)
	{
	}
	double_5 = double_2 + double_1;
	int_4 = int_1 + int_2;
	double_3 = double_1 * double_3;
	if(1)
	{
	}
	int_5 = int_3 + int_3;
	int_6 = int_2;
	if(1)
	{
	}
	int_1 = int_6;
	long_1 = long_4 * long_2;
	if(1)
	{
	}
	char_2 = char_2 + char_3;
	short_3 = short_3 + short_4;
	if(1)
	{
	}
	double_1 = double_5;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	char controller4vul_835[2];
	fgets(controller4vul_835 ,2 ,stdin);
	if( strcmp( controller4vul_835, "O") < 0)
	{
		short short_5 = 1;
		int_3 = int_3 * int_5;
		long_2 = long_4 * long_3;
		float_3 = float_5 + float_1;
		double_5 = double_5 + double_4;
		double_4 = double_1 * double_5;
		char controller4vul_836[2];
		fgets(controller4vul_836 ,2 ,stdin);
		if( strcmp( controller4vul_836, ".") < 0)
		{
			v_termpty_text_scroll_test(double_4,double_3,uni_para);

			double_2 = double_5 * double_4;
		}
		short_2 = short_5 * short_5;
		double_3 = double_4 + double_3;
		if(1)
		{
			float_4 = float_1 * float_5;
			double_2 = double_3 * double_5;
			unsigned_int_4 = unsigned_int_3;
		}
	}
	if(1)
	{
	}
	char_4 = char_6 * char_7;
	float_4 = float_6 + float_7;
	int_5 = int_4 * int_1;
	double_6 = double_4;
	double_5 = double_5 + double_2;
	return long_5;
}
void v_termpty_cell_fill( float parameter_1,double parameter_2,short parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char_1 = char_1 + char_1;
			float_2 = float_1 + float_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short_1 = short_2;
			int_2 = int_1 * int_1;
		}
	}
}
void v_termpty_cells_fill( float parameter_1,double parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	double double_6 = 1;
	double_1 = double_1 + double_2;
	v_termpty_cell_fill(float_1,double_3,short_1,int_1);

	double_5 = double_4 + double_3;
	char_1 = char_1 * char_1;
	double_6 = double_4;
	double_2 = double_4 + double_4;
}
void v_termpty_cells_clear( char parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_termpty_cells_fill(float_1,double_1,char_1,int_1);

}
int v__tooltip_del(long parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1;
	short_1 = short_1;
	int_1 = int_2;
	return int_1;
}
float v__tooltip_content(int parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	long_1 = v_media_add(short_1,char_1,short_2,int_1,float_1,-1 );

	int_4 = int_2 * int_3;
	long_1 = long_2 + long_2;
	double_1 = double_1 * double_2;
	long_4 = long_1 * long_3;
	return float_2;
}
void v_MD5Final( char parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	int_1 = int_1 + int_2;
	short_2 = short_1 * short_1;
	v_MD5Transform(unsigned_int_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 * float_2;
	if(1)
	{
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		v_byteReverse(double_1,char_1);

		int_3 = int_1 * int_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		int_2 = int_4;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2;
	}
	int_4 = int_4 + int_4;
	double_3 = double_1 + double_3;
	char_4 = char_1 + char_3;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_3 * float_4;
	short_3 = short_2 + short_3;
}
void v_MD5Transform( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	long long_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_6 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_10 = 1;
	int int_11 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_12 = 1;
	short short_2 = 1;
	double double_7 = 1;
	short short_3 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_3 = 1;
	float float_4 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_3;
	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	long_3 = long_3 + long_4;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_3;
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_1 + int_1;
	double_2 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	int_1 = int_4;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	int_5 = int_5 + int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_5 = long_4 + long_5;
	int_6 = int_4 + int_1;
	int_8 = int_7 * int_4;
	int_2 = int_8 * int_3;
	long_6 = long_1;
	int_5 = int_7 * int_2;
	int_5 = int_5 + int_7;
	float_2 = float_3 + float_3;
	double_2 = double_2 + double_2;
	int_7 = int_9 + int_7;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	int_11 = int_10 + int_11;
	float_2 = float_1;
	double_4 = double_2 + double_3;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	double_5 = double_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_6;
	char_1 = char_1 + char_1;
	char_2 = char_1 + char_2;
	double_6 = double_3;
	int_1 = int_6 * int_9;
	short_1 = short_1 * short_1;
	double_3 = double_2 + double_1;
	long_4 = long_3 * long_5;
	int_8 = int_8 * int_1;
	double_2 = double_3 + double_5;
	int_9 = int_4 + int_1;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_6;
	int_12 = int_6 + int_9;
	short_1 = short_2;
	float_2 = float_2 * float_3;
	double_1 = double_1 + double_7;
	float_3 = float_1;
	short_1 = short_3 + short_3;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
	float_2 = float_1 * float_2;
	double_3 = double_1 + double_8;
	long_1 = long_5 * long_2;
	short_2 = short_1 + short_3;
	int_8 = int_8 + int_11;
	unsigned_int_5 = unsigned_int_8;
	long_6 = long_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	double_6 = double_2 * double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	double_7 = double_9;
	unsigned_int_5 = unsigned_int_9;
	char_3 = char_2 + char_2;
	char_2 = char_3 + char_1;
	long_4 = long_5;
	float_4 = float_1;
}
void v_byteReverse( double parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 + long_2;
}
void v_MD5Update( long parameter_1,char parameter_2,char parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	int_1 = int_1 * int_1;
	short_2 = short_1 * short_2;
	char_1 = char_1 * char_1;
	v_byteReverse(double_1,char_2);

	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_1 * long_2;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	short_1 = short_2 + short_2;
	long_3 = long_3 + long_3;
	v_MD5Transform(unsigned_int_2,unsigned_int_4);

	int_2 = int_1 + int_1;
	int_1 = int_2;
	float_3 = float_2 + float_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_1 = int_2 * int_1;
	char_1 = char_2 + char_2;
	long_4 = long_1;
}
void v_MD5Init( float parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_1 * short_1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_1 + char_2;
	double_1 = double_1 + double_2;
	float_1 = float_2;
}
void v_gravatar_tooltip( float parameter_1,unsigned int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	float_1 = v__tooltip_content(int_1,unsigned_int_1);

	int_3 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2 * double_3;
	int_1 = int_3 * int_1;
	float_4 = float_2 * float_3;
	if(1)
	{
	}
	v_MD5Update(long_1,char_1,char_1);

	float_3 = float_4;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	float_3 = float_4 + float_4;
	char_2 = char_2 + char_2;
	short_1 = short_2;
	float_2 = float_5 * float_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	v_MD5Init(float_3);

	double_4 = double_4 * double_5;
	v_MD5Final(char_3,short_1);

	unsigned_int_1 = unsigned_int_3;
	int_2 = v__tooltip_del(long_3);

	long_2 = long_4 + long_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
}
double v__cb_link_drag_done(unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 * char_2;
	double_1 = double_1 * double_1;
	char_2 = char_1;
	float_2 = float_1 + float_2;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	int_2 = int_1 + int_1;
	return double_2;
}
void v__cb_link_drag_accept(char parameter_2,double parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
float v__cb_link_drag_move(long parameter_2,unsigned int parameter_3,short parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_4 = long_3 * long_1;
		}
	}
	return float_1;
}
unsigned int v__cb_link_icon_new(short parameter_2,long parameter_3,char parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_2 = float_1 * float_1;
	char_3 = char_1 + char_2;
	short_3 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	int_3 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	return unsigned_int_4;
}
char v__cb_link_move(long parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long long_2 = 1;
	double_1 = double_1;
	double_1 = v__cb_link_drag_done(unsigned_int_1);

	char_2 = char_1 * char_2;
	float_1 = float_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_4 = v__cb_link_icon_new(short_1,long_1,char_2);

	int_1 = int_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_3 = 1;
		float_1 = v__cb_link_drag_move(long_2,unsigned_int_4,short_1,double_1);

		unsigned_int_5 = unsigned_int_6;
		unsigned_int_2 = unsigned_int_4;
		int_2 = int_1;
		if(1)
		{
			v__cb_link_drag_accept(char_2,double_2);

			long_1 = long_2;
		}
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
		}
		unsigned_int_3 = unsigned_int_3;
		char_2 = char_2 + char_3;
	}
	return char_1;
}
unsigned int v__cb_link_up_delay()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_2;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	int_3 = int_2;
	return unsigned_int_1;
	v__activate_link(short_1,unsigned_int_1);

}
char v__cb_link_up(double parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = v__cb_link_up_delay();

	double_2 = double_1 * double_1;
	float_1 = float_2;
	long_1 = long_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		short_1 = short_1;
		short_1 = short_2 + short_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_1 = double_2 + double_2;
		if(1)
		{
			if(1)
			{
				long_1 = long_1 + long_1;
			}
			if(1)
			{
				float_2 = float_1 * float_2;
			}
		}
		double_3 = double_1 * double_1;
	}
	return char_1;
}
void v_term_focus( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_3 = int_1 + int_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_5 = int_1 * int_4;
	int_1 = int_2;
	long_1 = v__term_is_focused(float_1);

	double_2 = double_1 + double_2;
}
long v__term_is_focused( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	return long_1;
}
void v_term_unfocus( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_2;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	long_2 = v__term_is_focused(float_1);

	char_1 = char_2;
	float_2 = float_2;
}
int v__cb_ctxp_del(short parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	v_term_unfocus(double_1);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
	int_4 = int_1 * int_3;
	return int_3;
	v_term_focus(double_1);

}
unsigned int v__cb_ctxp_dismissed(char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_2;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_1;
}
int v__cb_ctxp_link_copy(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	short_1 = short_1 + short_2;
	char_1 = char_1 * char_2;
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_1;
	short_3 = v__take_selection_text(float_2,double_1,long_1,-1 );

	double_1 = double_2 + double_2;
	return int_1;
}
double v__screen_visual_bounds( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		short short_1 = 1;
		double_1 = double_2;
		short_1 = short_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		char_1 = char_2;
		double_3 = double_2 + double_2;
	}
	return double_1;
}
double v__draw_cell( long parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	int int_5 = 1;
	double double_2 = 1;
	long_1 = long_1 * long_1;
	char_1 = char_1 * char_1;
	double_1 = double_1;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1;
	long_4 = long_2 + long_3;
	int_1 = int_1 * int_1;
	if(1)
	{
		int_1 = int_2 + int_3;
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
			char_1 = char_1 + char_2;
		}
	}
	if(1)
	{
		int_1 = int_3 + int_2;
	}
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		int int_4 = 1;
		long long_5 = 1;
		int_4 = int_3 + int_3;
		int_4 = int_5 * int_4;
		double_2 = double_2 + double_1;
		long_2 = long_1 + long_1;
		long_5 = long_2;
		double_2 = double_1 * double_1;
		int_4 = int_1;
	}
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		long long_6 = 1;
		long_1 = long_6 + long_1;
	}
	if(1)
	{
		long long_7 = 1;
		long_7 = long_4 + long_7;
	}
	if(1)
	{
		int_5 = int_3 + int_5;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_3 * double_1;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_3 * float_4;
	}
	return double_1;
}
long v__draw_line( long parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double_1 = v__draw_cell(long_1,int_1,double_1,unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	return long_2;
}
char v_termpty_backlog_length( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	long long_4 = 1;
	int_3 = int_1 * int_2;
	int_1 = int_4 * int_1;
	short_2 = short_1 + short_1;
	char_1 = char_1 * char_1;
	long_3 = long_1 + long_2;
	double_2 = double_1 * double_2;
	double_3 = v_verify_beacon(char_2,int_3);

	double_1 = double_4 * double_5;
	float_1 = float_1 * float_1;
	double_7 = double_6 + double_6;
	int_2 = int_2 * int_5;
	double_2 = double_8 * double_9;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_4;
	if(1)
	{
		double_6 = double_6 + double_7;
	}
	float_3 = float_1 * float_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "!") > 0)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	}
	short_3 = short_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	int_1 = int_2 + int_3;
	if(1)
	{
		int int_6 = 1;
		int_2 = int_4 + int_6;
	}
	float_3 = float_1;
	int_5 = int_1;
	short_1 = short_2 * short_3;
	int_4 = int_4;
	long_4 = long_1 + long_3;
	int_1 = int_2 + int_2;
	return char_2;
}
char v_termio_pty_get( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float_1 = float_1 + float_2;
	double_1 = double_1 + double_2;
	return char_1;
}
int v_termio_textgrid_get( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return int_1;
}
char v_miniview_colors_get( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short_1 = short_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		long_1 = long_1 + long_2;
		short_2 = short_1 + short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
		double_2 = double_1 * double_2;
	}
	return char_1;
	int_1 = v_termio_textgrid_get(double_1);

}
void v__deferred_renderer()
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	long long_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_4 = 1;
	short short_7 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_1 * short_2;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	int_1 = v_termio_scroll_get(int_2);

	char_3 = char_1 * char_3;
	double_2 = double_1 * double_2;
	long_1 = v__draw_line(long_2,int_3,unsigned_int_3,int_3,unsigned_int_2);

	int_4 = int_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	double_1 = double_2 * double_1;
	long_3 = long_2 * long_3;
	char_2 = v_termpty_backlog_length(double_2);

	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	long_1 = long_4 * long_3;
	if(1)
	{
	}
	double_3 = double_2 * double_2;
	float_2 = float_1 * float_2;
	short_1 = short_2 + short_2;
	unsigned_int_5 = unsigned_int_1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		int_4 = int_3 + int_1;
	}
	if(1)
	{
		short_3 = short_4 + short_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_2 + int_2;
		if(1)
		{
			float_3 = v_termpty_cellrow_get(int_3,int_4,double_3);

			float_4 = float_3 + float_1;
		}
		unsigned_int_4 = unsigned_int_6 + unsigned_int_2;
	}
	long_4 = long_1 * long_4;
	double_3 = double_2 + double_3;
	int_5 = int_3 + int_5;
	if(1)
	{
		long_4 = long_1 + long_1;
	}
	if(1)
	{
		char_2 = v_termio_pty_get(long_5);

		short_5 = short_4 * short_4;
	}
	int_1 = int_3;
	short_5 = short_6 * short_4;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		short_1 = short_6 * short_6;
		char_3 = v_miniview_colors_get(double_4,char_3);

		unsigned_int_7 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			int_1 = int_5;
			double_3 = v__screen_visual_bounds(double_3);

			int_3 = int_1;
		}
		if(1)
		{
			double double_5 = 1;
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				double_5 = double_2 + double_5;
				unsigned_int_6 = unsigned_int_8 + unsigned_int_7;
				float_4 = float_1;
				long_1 = long_1 + long_1;
			}
			if(1)
			{
				double_5 = double_3 * double_2;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_7;
			}
		}
	}
	if(1)
	{
		int int_6 = 1;
		int_3 = int_6 + int_1;
	}
	unsigned_int_2 = unsigned_int_5 * unsigned_int_3;
	short_7 = short_3 * short_2;
	unsigned_int_2 = unsigned_int_6;
	char_5 = char_4 + char_4;
}
long v__queue_render( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	v__deferred_renderer();

	float_2 = float_1 + float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	return long_1;
}
void v_miniview_redraw()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	long_1 = v__queue_render(char_1);

}
float v__block_obj_del( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "@") < 0)
	{
	}
	int_1 = int_1 * int_2;
	long_3 = long_1 + long_2;
	double_1 = double_1 * double_1;
	return float_1;
	double_1 = v__smart_media_del(double_2,short_1);

}
double v__termpty_is_dblwidth_slow_get( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	if(1)
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
char v__termpty_is_dblwidth_get( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
	double_1 = v__termpty_is_dblwidth_slow_get(int_1,int_2);

}
void v_term_preedit_str_get( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
}
long v_media_get( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	return long_1;
}
float v__smart_media_clicked(int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_3 = 1;
	float float_3 = 1;
	short_3 = short_1 + short_2;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	double_4 = double_3 * double_2;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			float_1 = float_2;
			if(1)
			{
				int int_1 = 1;
				int int_4 = 1;
				if(1)
				{
					unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
					int_1 = int_1 * int_1;
					if(1)
					{
						char char_1 = 1;
						char char_2 = 1;
						char_1 = char_2;
					}
					if(1)
					{
						double_2 = double_4 + double_3;
						int_2 = v_termio_config_get(double_4);

						int_1 = int_1;
						if(1)
						{
							long long_2 = 1;
							int int_3 = 1;
							long_1 = long_1;
							long_1 = v_media_get(double_1);

							long_2 = long_1;
							int_1 = int_3 + int_3;
						}
					}
				}
				long_3 = v_media_src_type_get(unsigned_int_4);

				int_4 = int_1;
			}
		}
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	return float_3;
}
double v_media_control_get( double parameter_1)
{
	double double_1 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	return double_1;
}
long v__smart_media_stop(int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	return long_1;
}
unsigned int v__smart_media_pause(float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	return unsigned_int_3;
}
short v__smart_media_play(long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char_1 = char_2;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	return short_1;
}
double v__smart_media_del(double parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_3 = 1;
	double_1 = double_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 + double_1;
	}
	return double_3;
}
void v_media_visualize_set( unsigned int parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 + double_2;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
}
void v_media_mute_set( int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2 * char_2;
	}
}
void v_media_volume_set( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_1;
}
void v__cb_media_vol(short parameter_2,float parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_2;
	v_media_volume_set(double_1,double_2);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1;
	int_2 = int_3 * int_2;
}
float v__cb_media_pos(double parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	v_media_position_set(short_1,double_1);

	char_2 = char_1 * char_1;
	return float_1;
}
char v__cb_media_pos_drag_stop(long parameter_2,long parameter_3,short parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short_2 = short_1 + short_1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	double_1 = double_1 + double_2;
	double_2 = double_3 * double_1;
	double_5 = double_4 * double_1;
	short_1 = short_3 * short_3;
	return char_2;
}
char v__cb_media_pos_drag_start(float parameter_2,int parameter_3,char parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	v_media_position_set(short_1,double_1);

	double_1 = double_2 + double_3;
	short_2 = short_2;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	double_3 = double_3 * double_4;
	double_4 = double_5 * double_3;
	return char_1;
}
void v_media_stop()
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
unsigned int v__cb_media_stop(char parameter_2,double parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_2;
	v_media_stop();

}
double v__cb_media_pause(short parameter_2,double parameter_3,short parameter_4)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	v_media_play_set(float_1,char_1);

	short_3 = short_1 * short_2;
	return double_1;
}
void v_media_play_set( float parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	if(1)
	{
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short_1 = short_1;
		double_1 = double_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_1 * long_1;
		long_3 = long_1 * long_1;
	}
}
unsigned int v__cb_media_play(char parameter_2,unsigned int parameter_3,double parameter_4)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	v_media_play_set(float_1,char_1);

	int_1 = int_1 * int_2;
	return unsigned_int_1;
}
void v_media_position_set( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
}
short v__cb_mov_ref(double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "$f") > 0)
	{
	}
	char_1 = char_1;
	return short_1;
}
char v__cb_mov_progress(int parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "0") < 0)
	{
	}
	double_1 = double_1 + double_1;
	return char_1;
}
double v__cb_mov_restart()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	int_1 = int_3;
	char_2 = char_1 + char_2;
	return double_1;
}
int v__cb_mov_decode_stop(int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = v__cb_mov_restart();

	char_1 = char_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2;
	return int_2;
}
char v__cb_mov_len_change(char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	return char_1;
}
char v__cb_mov_frame_resize(int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_2;
	short_3 = short_3 + short_3;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	long_1 = v__type_mov_calc(char_1,int_1,char_1,double_1,unsigned_int_1);

	short_1 = short_1 * short_3;
	return char_1;
}
void v__cb_mov_frame_decode(float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_2;
	char_1 = char_1 + char_1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	long_1 = v__type_mov_calc(char_2,int_1,char_3,double_2,unsigned_int_1);

	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2;
	char_3 = char_2 * char_3;
	char_3 = char_3 + char_3;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	double_1 = double_1 * double_3;
	int_1 = int_2 * int_2;
}
char v__type_mov_init( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_5 = 1;
	char char_7 = 1;
	long long_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_media_visualize_set(unsigned_int_1,double_1);

	float_1 = float_1 + float_1;
	float_2 = float_1 * float_1;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	float_2 = v__cb_media_pos(double_2,unsigned_int_2,unsigned_int_1);

	int_2 = int_1 + int_2;
	v_media_play_set(float_1,char_1);

	int_2 = int_1 * int_1;
	char_2 = v__cb_media_pos_drag_stop(long_2,long_1,short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
		char_3 = v__cb_mov_frame_resize(int_1);

		int_2 = v__cb_mov_decode_stop(int_3);

		short_2 = v__cb_mov_ref(double_3);

		unsigned_int_4 = unsigned_int_7 * unsigned_int_3;
	}
	short_3 = short_3 + short_2;
	double_3 = double_1 * double_4;
	double_3 = v_theme_apply(unsigned_int_4,short_2,unsigned_int_1);

	int_4 = int_3;
	char_2 = char_1 * char_4;
	int_4 = int_5 + int_1;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_8;
	unsigned_int_2 = v__cb_media_stop(char_2,double_1,unsigned_int_1);

	int_1 = int_3 + int_1;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		v_media_position_set(short_2,double_1);

		v_media_mute_set(int_1,unsigned_int_2);

		short_1 = short_2;
	}
	float_3 = float_2 * float_2;
	int_2 = int_1 + int_1;
	v__cb_mov_frame_decode(float_2);

	long_1 = long_4 * long_3;
	char_4 = char_3 * char_1;
	float_1 = float_3 + float_4;
	char_4 = v__cb_mov_progress(int_6);

	int_1 = int_2;
	long_2 = long_1 * long_4;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
	unsigned_int_2 = v__cb_media_play(char_4,unsigned_int_6,double_4);

	unsigned_int_7 = unsigned_int_9 * unsigned_int_8;
	v__cb_media_vol(short_4,float_2,double_4);

	unsigned_int_8 = unsigned_int_3 * unsigned_int_1;
	char_5 = v__cb_media_pos_drag_start(float_2,int_3,char_1);

	char_2 = char_6 + char_3;
	float_4 = float_2;
	double_4 = double_2 + double_1;
	double_1 = double_5 * double_2;
	long_4 = long_4 + long_1;
	char_2 = v__cb_mov_len_change(char_7);

	double_4 = v__cb_media_pause(short_4,double_4,short_4);

	short_1 = short_2 + short_2;
	long_5 = long_5;
	if(1)
	{
		float_4 = float_3 * float_2;
	}
	if(1)
	{
		float_1 = float_4 + float_2;
	}
	return char_3;
}
double v__cb_edje_preloaded(long parameter_2,char parameter_3,long parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	int_2 = int_1 * int_2;
	return double_2;
}
unsigned int v__type_edje_init( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	double_1 = v__cb_edje_preloaded(long_1,char_1,long_2);

	int_1 = int_1 * int_1;
	double_3 = double_2 + double_1;
	double_1 = double_4 + double_2;
	double_5 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			double double_6 = 1;
			short_2 = short_1 * short_1;
			v_theme_auto_reload_enable();

			double_1 = double_2 + double_6;
			short_2 = short_1;
		}
	}
	return unsigned_int_1;
}
float v__type_scale_init( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_5 = 1;
	char_1 = char_2;
	double_2 = double_1 * double_1;
	int_3 = int_1 + int_2;
	int_3 = int_2 + int_3;
	long_2 = long_1 + long_1;
	int_4 = int_2 + int_4;
	long_1 = long_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	float_1 = float_2;
	short_1 = short_1 * short_1;
	double_3 = double_1;
	return float_1;
	double_3 = v__cb_scale_preloaded(char_3,int_5,-1 );

}
void v__cb_img_frame()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_3 = double_1 * double_2;
	double_3 = double_1 + double_2;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	double_1 = double_3 + double_3;
	if(1)
	{
		float float_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float_2 = float_3 + float_1;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "+}") > 0)
		{
			float float_4 = 1;
			float_2 = float_4 * float_1;
		}
		double_3 = double_4 * double_5;
		double_2 = double_5 * double_1;
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_2;
			}
		}
	}
	int_2 = int_1 + int_1;
	int_1 = int_2;
	short_3 = short_1 + short_2;
}
short v__type_img_anim_handle( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float_3 = float_1 * float_2;
	char_1 = char_1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	char_1 = char_2;
	char_3 = char_1 + char_3;
	if(1)
	{
	}
	v__cb_img_frame();

	int_2 = int_1 * int_2;
	double_2 = double_3;
	return short_1;
}
char v__cb_img_preloaded(long parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	return char_1;
}
char v__type_img_init()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = v__cb_img_preloaded(long_1,char_2);

	short_3 = short_3 * short_2;
	char_2 = char_3 + char_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	int_1 = int_1 + int_1;
	int_2 = int_2 + int_2;
	short_4 = short_1;
	short_5 = v__type_img_anim_handle(long_1);

	int_3 = int_2 * int_1;
	long_3 = long_2 * long_1;
	float_2 = float_1 * float_1;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
	return char_1;
}
int v__url_compl_cb(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	double_2 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "P ") < 0)
	{
	}
	if(1)
	{
	}
	char_1 = v__type_img_init();

	int_2 = int_1 + int_2;
	char_3 = char_1 + char_2;
	double_1 = double_2;
	float_1 = v__smart_calculate(double_3,-1 );

	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	char_1 = v__type_mov_init(float_1);

	float_2 = float_1 * float_1;
	int_3 = int_2 + int_3;
	char_1 = char_2 * char_3;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_2;
	unsigned_int_3 = v__type_edje_init(char_1);

	float_3 = float_2 + float_2;
	float_1 = float_2 + float_1;
	long_3 = long_1 * long_2;
	int_3 = int_4 * int_2;
	float_2 = v__type_scale_init(int_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	float_1 = float_2;
	char_4 = char_2 * char_1;
	short_2 = short_1 + short_1;
	int_3 = int_1;
	return int_4;
}
double v__url_prog_cb(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	int_1 = int_2;
	long_2 = long_1 + long_2;
	long_3 = long_2 * long_3;
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
		double double_1 = 1;
		long long_4 = 1;
		float_1 = float_1 * float_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		double_1 = double_1 * double_1;
		long_2 = long_4;
		if(1)
		{
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_2 = double_2 + double_2;
			char_3 = char_1 + char_2;
			double_3 = double_3;
			double_5 = double_4 + double_1;
		}
	}
	return double_6;
}
short v__type_thumb_calc( double parameter_1,double parameter_2,char parameter_3,long parameter_4,long parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 * int_2;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_5 = 1;
		short_4 = short_1 + short_3;
		short_4 = short_4 * short_5;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			long_1 = long_1 * long_1;
			double_3 = double_1;
			if(1)
			{
				double double_4 = 1;
				double_1 = double_4 * double_2;
			}
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_2 = long_1 + long_1;
			long_4 = long_3 * long_2;
		}
		int_3 = int_2 * int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		long_4 = long_5 + long_5;
		int_1 = int_1;
	}
	char_2 = char_1 * char_2;
	double_1 = double_3 * double_2;
	return short_1;
}
long v__type_mov_calc( char parameter_1,int parameter_2,char parameter_3,double parameter_4,unsigned int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_3 = 1;
	float_1 = float_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 * char_2;
	long_1 = long_1 * long_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4;
		double_1 = double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double_1 = double_1 * double_1;
		int_1 = int_1 + int_1;
		int_3 = int_2 * int_2;
		if(1)
		{
			unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
		}
		if(1)
		{
			int_1 = int_2 * int_2;
		}
		if(1)
		{
			int int_4 = 1;
			int_3 = int_1 * int_4;
			unsigned_int_3 = unsigned_int_7 + unsigned_int_6;
			if(1)
			{
				double_1 = double_1;
				double_1 = double_2 * double_2;
				if(1)
				{
					float float_3 = 1;
					float_3 = float_1;
				}
			}
		}
		if(1)
		{
			double_1 = double_2 * double_2;
			char_5 = char_2 * char_4;
			if(1)
			{
				int int_5 = 1;
				int int_6 = 1;
				int_6 = int_3 + int_5;
				int_6 = int_2 * int_1;
				if(1)
				{
					float_2 = float_2;
				}
			}
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_3 = double_2 + double_2;
			double_1 = double_4 * double_3;
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_7;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_8;
		char_5 = char_4;
	}
	unsigned_int_2 = unsigned_int_8;
	unsigned_int_2 = unsigned_int_7 + unsigned_int_8;
	return long_3;
}
void v__type_edje_calc( int parameter_1,unsigned int parameter_2,long parameter_3,long parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "F") < 0)
	{
	}
	char_3 = char_1 + char_2;
	int_1 = int_2;
}
float v__type_img_calc( double parameter_1,double parameter_2,short parameter_3,long parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_2 = 1;
		float float_4 = 1;
		int int_5 = 1;
		float_1 = float_2;
		if(1)
		{
			float_2 = float_1 + float_3;
			int_1 = int_1;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				short short_4 = 1;
				short_2 = short_1 + short_2;
				short_4 = short_2 + short_3;
				if(1)
				{
					double_1 = double_1;
				}
			}
		}
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_3 = 1;
			int_2 = int_2 * int_1;
			char_5 = char_3 * char_4;
			if(1)
			{
				long long_1 = 1;
				long_1 = long_1 * long_2;
				double_2 = double_2 * double_1;
				if(1)
				{
					int_2 = int_3 * int_3;
				}
			}
			if(1)
			{
				int int_4 = 1;
				int_1 = int_4 * int_3;
				double_1 = double_1 * double_2;
			}
		}
		if(1)
		{
			long_2 = long_2;
			float_2 = float_1 + float_1;
		}
		float_2 = float_4 * float_4;
		double_2 = double_1;
		float_3 = float_1;
		int_5 = int_2;
	}
	double_2 = double_3 * double_1;
	double_4 = double_2 + double_3;
	return float_1;
}
double v__cb_scale_preloaded(char parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	short_3 = short_1 * short_2;
	char controller4vul_878[2];
	fgets(controller4vul_878 ,2 ,stdin);
	if( strcmp( controller4vul_878, "!") < 0)
	{
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
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_1 + double_2;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		short_3 = short_3 + short_3;
		unsigned_int_1 = unsigned_int_2;
		int_1 = int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	long_2 = long_1 + long_1;
}
char v__type_scale_calc( int parameter_1,short parameter_2,long parameter_3,short parameter_4,char parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_8 = 1;
	short short_3 = 1;
	int int_9 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_10 = 1;
	int_2 = int_1 * int_2;
	int_3 = int_3 * int_4;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 + double_1;
		short_1 = short_1 * short_1;
	}
	char controller4vul_874[3];
	fgets(controller4vul_874 ,3 ,stdin);
	if( strcmp( controller4vul_874, "Lk") > 0)
	{
		long long_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		double_3 = double_1 + double_1;
		char controller4vul_875[2];
		fgets(controller4vul_875 ,2 ,stdin);
		if( strcmp( controller4vul_875, "k") < 0)
		{
			int_1 = int_5 * int_2;
			long_3 = long_1 + long_2;
			char controller4vul_876[3];
			fgets(controller4vul_876 ,3 ,stdin);
			if( strcmp( controller4vul_876, "E ") < 0)
			{
				unsigned int unsigned_int_2 = 1;
				int_1 = int_6;
				unsigned_int_1 = unsigned_int_2;
				char controller4vul_877[3];
				fgets(controller4vul_877 ,3 ,stdin);
				if( strcmp( controller4vul_877, ",$") > 0)
				{
					double_3 = v__cb_scale_preloaded(char_1,int_3,uni_para);

					int_3 = int_6;
				}
			}
		}
		if(1)
		{
			short_1 = short_1 * short_1;
			int_6 = int_5 * int_1;
			if(1)
			{
				int_4 = int_5;
				long_1 = long_3;
				if(1)
				{
					int_7 = int_3;
				}
			}
		}
		if(1)
		{
			char char_2 = 1;
			char_3 = char_2 * char_2;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		}
		float_1 = float_1 * float_2;
		int_3 = int_8 + int_4;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		short_3 = short_2 + short_1;
	}
	if(1)
	{
		double double_4 = 1;
		int_1 = int_9 + int_6;
		int_2 = int_3 * int_6;
		long_4 = long_2;
		if(1)
		{
			short_1 = short_3 + short_3;
		}
		if(1)
		{
			int_4 = int_7 + int_7;
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			short short_4 = 1;
			double_4 = double_1 + double_1;
			double_3 = double_2;
			int_3 = int_2;
			int_2 = int_7 * int_2;
			float_4 = float_3 * float_2;
			int_4 = int_1 * int_7;
			int_4 = int_5 * int_6;
			short_4 = short_4 * short_4;
			char_1 = char_3 + char_3;
		}
		double_4 = double_1 + double_4;
		int_9 = int_8;
	}
	if(1)
	{
		long_2 = long_4 + long_3;
		int_5 = int_9 * int_6;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	int_6 = int_10 * int_9;
	return char_3;
}
short v__unsmooth_timeout(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	long_1 = long_2;
	long_1 = long_3 * long_1;
	char controller4vul_872[3];
	fgets(controller4vul_872 ,3 ,stdin);
	if( strcmp( controller4vul_872, "(M") < 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		char controller4vul_873[2];
		fgets(controller4vul_873 ,2 ,stdin);
		if( strcmp( controller4vul_873, "j") < 0)
		{
			int int_3 = 1;
			int int_4 = 1;
			char_1 = v__type_scale_calc(int_1,short_2,long_4,short_1,char_1,uni_para);

			int_4 = int_3 + int_1;
		}
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "OB") < 0)
		{
			unsigned_int_2 = unsigned_int_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	}
	return short_2;
}
char v__smooth_handler( float parameter_1,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int_1 = int_1 + int_1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char_3 = char_1 + char_2;
	}
	char controller4vul_868[3];
	fgets(controller4vul_868 ,3 ,stdin);
	if( strcmp( controller4vul_868, "Hc") > 0)
	{
		char controller4vul_869[3];
		fgets(controller4vul_869 ,3 ,stdin);
		if( strcmp( controller4vul_869, "7k") < 0)
		{
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			float_3 = float_1 * float_1;
			char_4 = char_1 * char_1;
			char controller4vul_870[2];
			fgets(controller4vul_870 ,2 ,stdin);
			if( strcmp( controller4vul_870, "z") > 0)
			{
				int int_2 = 1;
				int_2 = int_1;
				char controller4vul_871[3];
				fgets(controller4vul_871 ,3 ,stdin);
				if( strcmp( controller4vul_871, "vq") > 0)
				{
					double double_1 = 1;
					double double_2 = 1;
					short_1 = v__unsmooth_timeout(uni_para);

					double_3 = double_1 * double_2;
				}
			}
			if(1)
			{
				char char_5 = 1;
				char_5 = char_1 + char_3;
			}
			if(1)
			{
				int int_3 = 1;
				int int_4 = 1;
				int_4 = int_3 * int_1;
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		char char_6 = 1;
		if(1)
		{
			double double_4 = 1;
			double_3 = double_3 * double_4;
		}
		char_6 = char_2 + char_1;
	}
	return char_4;
}
float v__smart_calculate( double parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	char controller4vul_867[2];
	fgets(controller4vul_867 ,2 ,stdin);
	if( strcmp( controller4vul_867, "d") < 0)
	{
		char_1 = v__smooth_handler(float_1,uni_para);

	}
	double_2 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	double_2 = double_3 + double_4;
	long_3 = long_4;
	int_2 = int_2;
	int_2 = int_3 * int_1;
	float_1 = float_2 + float_3;
	double_6 = double_5 * double_1;
	int_5 = int_4 * int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_4 + double_6;
	int_5 = int_4 + int_6;
	int_5 = int_4 + int_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		int int_7 = 1;
		int_7 = int_1;
		float_1 = float_2 * float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_5;
		unsigned_int_2 = unsigned_int_1;
	}
	return float_2;
}
double v__smart_move( double parameter_1,char parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	return double_1;
}
long v__smart_resize( double parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_3 + int_2;
	return long_1;
}
void v__smart_del( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	short short_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		short short_2 = 1;
		double_3 = double_2 + double_2;
		short_2 = short_1 * short_1;
		short_3 = short_1;
	}
	double_2 = double_3 * double_4;
	short_4 = short_1 * short_3;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		double_2 = double_4;
	}
	if(1)
	{
		double_2 = double_4 * double_4;
	}
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		int_2 = int_3 * int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		double_4 = double_3 * double_2;
	}
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_5 * double_6;
	}
	if(1)
	{
		double_3 = double_3 * double_5;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_3 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_1 = unsigned_int_6;
	}
	double_7 = double_3 + double_1;
	short_5 = short_4 + short_1;
}
void v__smart_add()
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_5 = 1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 * int_2;
	double_3 = double_1 * double_2;
	double_4 = double_2 * double_3;
	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	int_3 = int_1 + int_2;
	float_1 = float_1 * float_1;
	double_5 = double_1 * double_4;
}
double v__smart_init(int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float_1 = v__smart_calculate(double_1,uni_para);

	char_1 = char_1 + char_1;
	float_1 = float_1 * float_2;
	int_1 = int_1 * int_1;
	double_2 = double_1;
	short_1 = short_1;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_2 + short_2;
	double_2 = double_3 + double_2;
	return double_1;
}
long v_media_add( short parameter_1,char parameter_2,short parameter_3,int parameter_4,float parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_5 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_7 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_12 = 1;
	int int_8 = 1;
	int int_9 = 1;
	char char_6 = 1;
	long long_8 = 1;
	int_1 = int_2;
	short_1 = short_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_3 * int_1;
	if(1)
	{
		double_4 = double_1 * double_3;
	}
	if(1)
	{
		double_6 = double_4 + double_5;
	}
	char_3 = char_1 + char_2;
	char_2 = char_4 * char_3;
	if(1)
	{
	}
	double_2 = double_3;
	double_5 = double_6 + double_3;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_6;
	double_4 = double_1 + double_6;
	char controller4vul_861[2];
	fgets(controller4vul_861 ,2 ,stdin);
	if( strcmp( controller4vul_861, "j") > 0)
	{
		char controller4vul_862[2];
		fgets(controller4vul_862 ,2 ,stdin);
		if( strcmp( controller4vul_862, "|") < 0)
		{
			int int_4 = 1;
			unsigned int unsigned_int_8 = 1;
			long long_1 = 1;
			double_1 = double_5 * double_1;
			unsigned_int_6 = unsigned_int_4 * unsigned_int_4;
			if(1)
			{
				int_1 = int_3 * int_2;
				float_1 = float_1 * float_1;
				int_2 = int_1 * int_3;
			}
			if(1)
			{
				int_1 = int_4 * int_3;
				float_1 = float_1 * float_2;
				double_2 = double_1 * double_3;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_3 * unsigned_int_7;
			}
			if(1)
			{
				char_5 = char_2;
			}
			if(1)
			{
				int_3 = int_4 * int_5;
			}
			if(1)
			{
				short_1 = short_2 + short_3;
			}
			if(1)
			{
				double_6 = double_7 + double_4;
			}
			if(1)
			{
				int_3 = int_4 * int_1;
				double_4 = double_2 * double_3;
				double_2 = double_4;
				double_6 = double_7;
				unsigned_int_3 = unsigned_int_8 + unsigned_int_6;
				long_3 = long_1 + long_2;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_9;
			}
			char controller4vul_863[2];
			fgets(controller4vul_863 ,2 ,stdin);
			if( strcmp( controller4vul_863, "W") < 0)
			{
				double double_8 = 1;
				double double_9 = 1;
				double double_10 = 1;
				double_8 = double_6 * double_4;
				double_9 = double_6 + double_4;
				float_3 = float_1 + float_1;
				char controller4vul_864[3];
				fgets(controller4vul_864 ,3 ,stdin);
				if( strcmp( controller4vul_864, "ZK") > 0)
				{
					double_4 = double_2 + double_1;
					if(1)
					{
						double_4 = double_4 + double_2;
						long_4 = long_3 * long_4;
					}
					char controller4vul_865[3];
					fgets(controller4vul_865 ,3 ,stdin);
					if( strcmp( controller4vul_865, ",}") < 0)
					{
						int_5 = int_4 + int_2;
						char controller4vul_866[3];
						fgets(controller4vul_866 ,3 ,stdin);
						if( strcmp( controller4vul_866, "+!") < 0)
						{
							double_5 = v__smart_init(uni_para);

							int_4 = int_2;
							unsigned_int_2 = unsigned_int_7 + unsigned_int_8;
							unsigned_int_7 = unsigned_int_10 * unsigned_int_9;
						}
						if(1)
						{
							double_4 = double_9;
							unsigned_int_9 = unsigned_int_4 + unsigned_int_11;
							double_4 = double_10 * double_9;
							long_5 = long_3 * long_1;
							char_4 = char_3 + char_3;
							int_4 = int_5 * int_6;
							unsigned_int_2 = unsigned_int_8 * unsigned_int_7;
							int_2 = int_4;
							int_2 = int_6;
						}
					}
				}
				if(1)
				{
					double_10 = double_7 + double_9;
				}
			}
		}
		if(1)
		{
			double_3 = double_5 + double_5;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_6 = 1;
			long_6 = long_2 + long_3;
			float_2 = float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_5 * int_6;
			double_7 = double_3 + double_1;
		}
		short_1 = short_2 * short_1;
		if(1)
		{
			double double_11 = 1;
			float_3 = float_2 + float_3;
			double_11 = double_1 + double_1;
		}
		unsigned_int_10 = unsigned_int_10 + unsigned_int_7;
		if(1)
		{
			long long_7 = 1;
			unsigned_int_2 = unsigned_int_6 * unsigned_int_6;
			long_4 = long_7 + long_5;
		}
		long_4 = long_3;
		if(1)
		{
			int int_7 = 1;
			unsigned_int_9 = unsigned_int_10;
			int_7 = int_1 * int_2;
		}
		short_3 = short_3 + short_1;
		double_7 = double_6 * double_7;
	}
	char_2 = char_1;
	unsigned_int_11 = unsigned_int_11;
	float_2 = float_1 + float_2;
	int_5 = int_3 * int_5;
	unsigned_int_9 = unsigned_int_2 + unsigned_int_12;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
	int_9 = int_5 * int_8;
	char_6 = char_5 + char_2;
	if(1)
	{
		unsigned int unsigned_int_13 = 1;
		unsigned_int_5 = unsigned_int_13;
	}
	return long_8;
}
char v__block_media_activate( float parameter_1,short parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double double_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long_2 = long_1 * long_2;
	double_2 = double_1 + double_1;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_2 + double_2;
	char controller4vul_860[3];
	fgets(controller4vul_860 ,3 ,stdin);
	if( strcmp( controller4vul_860, "&?") > 0)
	{
		long_2 = v_media_add(short_1,char_1,short_1,int_1,float_1,uni_para);

		double_5 = double_3 * double_4;
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "]q") < 0)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_2;
	}
	if(1)
	{
		double_4 = double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "-t") < 0)
	{
		int_3 = int_1 + int_1;
	}
	long_3 = long_3 + long_2;
	int_1 = int_2 * int_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	}
	char_3 = char_1 + char_2;
	double_3 = double_1 * double_5;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	float_2 = float_1 * float_1;
	double_3 = double_6;
	int_3 = int_2;
	long_3 = long_1 + long_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	int_2 = int_4 + int_1;
	float_4 = float_3 + float_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_5 = long_2 * long_4;
	}
	return char_3;
}
int v__block_edje_message_cb(float parameter_2,long parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int int_7 = 1;
	char char_4 = 1;
	int int_8 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_9 = 1;
	char char_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	short short_8 = 1;
	int int_11 = 1;
	int int_12 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_2;
	double_1 = double_1 * double_1;
	short_1 = short_2;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		float_3 = float_2 * float_1;
	}
	double_2 = double_2 * double_2;
	if(1)
	{
	}
	double_3 = double_2 + double_1;
	long_1 = long_1 + long_1;
	int_3 = int_2 * int_2;
	int_1 = int_3 + int_1;
	int_5 = int_4 + int_2;
	short_3 = short_1;
	short_2 = short_4 + short_2;
	double_3 = double_2 + double_4;
	char_1 = char_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	v_termpty_write(int_3,short_3,int_6);

	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	short_2 = short_1 + short_2;
	double_5 = double_4 + double_4;
	int_7 = int_4 * int_3;
	char_4 = char_2 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_5 = int_8 + int_6;
		short_5 = short_3 * short_1;
	}
	short_4 = short_1 * short_3;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	double_6 = double_5 + double_6;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
	int_9 = int_1 * int_4;
	int_7 = int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_5 = char_3 + char_4;
		char_1 = char_4 * char_1;
		short_4 = short_1 + short_4;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_1 = long_1 * long_1;
	double_6 = double_3 + double_1;
	unsigned_int_3 = unsigned_int_3;
	double_3 = double_6 * double_4;
	int_8 = int_2 + int_1;
	short_6 = short_7;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short short_9 = 1;
		int int_10 = 1;
		int_7 = int_8 + int_5;
		short_9 = short_3 * short_8;
		int_10 = int_6 + int_1;
	}
	short_4 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
	double_1 = double_3 + double_6;
	int_6 = int_11 * int_12;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	int_4 = int_1 * int_9;
	short_8 = short_7 + short_2;
	float_1 = float_4;
	unsigned_int_5 = unsigned_int_6;
	double_1 = double_5 * double_5;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_5;
	double_2 = double_4 * double_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	float_5 = float_3;
	double_1 = double_2;
	double_7 = double_2 + double_6;
	double_8 = double_7 * double_8;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double double_9 = 1;
		float_1 = float_2 + float_5;
		double_2 = double_9 + double_9;
		short_8 = short_8 * short_3;
	}
	int_11 = int_7;
	float_5 = float_2 * float_4;
	short_3 = short_6;
	long_4 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_5;
	int_11 = int_4;
	short_5 = short_1 + short_8;
	unsigned_int_4 = unsigned_int_7 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_5;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		short short_10 = 1;
		char char_6 = 1;
		char char_7 = 1;
		short_1 = short_10 * short_2;
		double_1 = double_7 + double_1;
		char_7 = char_5 + char_6;
	}
	unsigned_int_7 = unsigned_int_6 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	float_1 = float_5 * float_4;
	return int_7;
}
void v_termpty_write( int parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
}
float v__block_edje_signal_cb(short parameter_2,float parameter_3,double parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_5 = 1;
	float_2 = float_1 * float_2;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 * long_1;
	}
	double_3 = double_1 * double_3;
	if(1)
	{
	}
	if(1)
	{
		float float_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		float_3 = float_2 * float_2;
		short_1 = short_3 + short_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		double_2 = double_2;
		double_5 = double_4 + double_5;
		v_termpty_write(int_1,short_2,int_1);

		int_2 = int_1 + int_2;
		int_1 = int_2 + int_3;
		char_1 = char_2;
	}
	if(1)
	{
		float float_4 = 1;
		int int_4 = 1;
		float_4 = float_1 + float_1;
		char_2 = char_2 * char_1;
		int_2 = int_4 + int_4;
	}
	return float_5;
}
void v_termpty_block_chid_update( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
}
double v__block_edje_cmds( float parameter_1,long parameter_2,unsigned int parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_2;
	v_termpty_block_chid_update(char_1,char_2);

	float_1 = v__block_edje_signal_cb(short_1,float_1,double_2);

	int_1 = v__block_edje_message_cb(float_1,long_1,int_1);

}
short v_homedir_get( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
		double_1 = double_1;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3 * double_3;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	return short_1;
}
long v__block_edje_activate( int parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_5 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_homedir_get(char_1,unsigned_int_2);

	short_4 = short_1 + short_4;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		int_1 = int_2 + int_1;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_1;
		if(1)
		{
			char char_2 = 1;
			short short_5 = 1;
			char_2 = char_2 * char_1;
			short_4 = short_5;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
			unsigned_int_1 = unsigned_int_3;
		}
	}
	float_3 = v_config_theme_path_default_get(int_2);

	unsigned_int_3 = unsigned_int_5;
	int_2 = int_1 + int_1;
	double_1 = v__block_edje_cmds(float_1,long_1,unsigned_int_3,double_1);

	int_2 = int_1 + int_2;
	double_1 = double_1 + double_2;
	if(1)
	{
		float float_4 = 1;
		float_1 = float_4 * float_5;
	}
	if(1)
	{
		float_5 = float_1;
	}
	return long_1;
}
void v__block_activate( double parameter_1,long parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char_2 = char_1 * char_1;
	long_3 = long_1 + long_2;
	char controller4vul_859[3];
	fgets(controller4vul_859 ,3 ,stdin);
	if( strcmp( controller4vul_859, "C7") < 0)
	{
		char_2 = v__block_media_activate(float_1,short_1,uni_para);

	}
	short_1 = short_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
}
unsigned int v_termpty_block_get( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "d") > 0)
	{
	}
	return unsigned_int_1;
}
int v_termpty_block_id_get( short parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	float_1 = float_1 * float_2;
	char_2 = char_1 + char_2;
	return int_2;
}
void v_termpty_backscroll_adjust( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	float_1 = float_1;
	double_1 = v_verify_beacon(char_1,int_1);

}
void v__smart_apply( unsigned int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_4 = 1;
	char char_6 = 1;
	long long_3 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_6 = 1;
	char char_7 = 1;
	char char_8 = 1;
	int int_10 = 1;
	int int_12 = 1;
	short short_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	long long_5 = 1;
	int int_13 = 1;
	char char_9 = 1;
	short short_7 = 1;
	long long_6 = 1;
	float float_7 = 1;
	double double_12 = 1;
	long long_7 = 1;
	int int_15 = 1;
	short short_8 = 1;
	short short_9 = 1;
	unsigned int unsigned_int_12 = 1;
	double double_14 = 1;
	short short_11 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	int_4 = int_2 + int_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	char_3 = char_1 + char_2;
	int_2 = int_1 * int_5;
	int_5 = int_2 * int_3;
	char_4 = char_3 * char_1;
	double_2 = double_1 * double_2;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_2;
	double_3 = double_2 * double_2;
	char_4 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		long long_4 = 1;
		int_1 = int_1 * int_6;
		long_2 = long_1 + long_1;
		unsigned_int_7 = unsigned_int_1 + unsigned_int_1;
		short_2 = short_1 * short_2;
		if(1)
		{
			double_4 = double_1 + double_4;
		}
		double_4 = double_3 + double_4;
		if(1)
		{
			char_3 = char_1 * char_4;
		}
		double_6 = double_5 + double_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_3 = 1;
			if(1)
			{
				if(1)
				{
					if(1)
					{
						double_4 = double_1 * double_2;
					}
					double_6 = double_1;
				}
				unsigned_int_8 = unsigned_int_5 + unsigned_int_5;
				if(1)
				{
					double_6 = double_4 * double_4;
				}
				if(1)
				{
					int_8 = int_7 * int_2;
				}
				char_2 = char_3 * char_2;
				float_3 = float_1 + float_2;
				char_5 = char_4 * char_2;
				short_1 = short_2 + short_2;
				float_5 = float_4 + float_1;
				short_1 = short_2 + short_3;
			}
			char controller4vul_855[3];
			fgets(controller4vul_855 ,3 ,stdin);
			if( strcmp( controller4vul_855, "N^") < 0)
			{
				short_2 = short_1 + short_2;
				unsigned_int_5 = unsigned_int_3;
				if(1)
				{
					if(1)
					{
						float_4 = float_3 + float_1;
					}
					int_8 = int_5;
					unsigned_int_4 = unsigned_int_4 * unsigned_int_8;
					unsigned_int_6 = unsigned_int_8 + unsigned_int_1;
					unsigned_int_1 = unsigned_int_6 + unsigned_int_8;
					short_4 = short_2 + short_2;
					int_3 = int_4 + int_3;
					char_5 = char_5 + char_2;
					char_3 = char_1 + char_3;
					char_2 = char_5 + char_6;
					char_4 = char_6 * char_2;
					unsigned_int_8 = unsigned_int_1;
					double_6 = double_3 * double_3;
					if(1)
					{
						long_1 = long_1 * long_1;
						long_3 = long_4;
						long_3 = long_3 + long_4;
						int_5 = int_3 + int_5;
						int_4 = int_3 + int_3;
					}
				}
				char controller4vul_856[3];
				fgets(controller4vul_856 ,3 ,stdin);
				if( strcmp( controller4vul_856, "Ht") < 0)
				{
					char controller4vul_857[2];
					fgets(controller4vul_857 ,2 ,stdin);
					if( strcmp( controller4vul_857, "e") < 0)
					{
						char controller4vul_858[3];
						fgets(controller4vul_858 ,3 ,stdin);
						if( strcmp( controller4vul_858, "Dc") < 0)
						{
							v__block_activate(double_1,long_3,uni_para);

							float_3 = float_4 * float_1;
						}
						short_5 = short_2 * short_2;
					}
					unsigned_int_4 = unsigned_int_6 + unsigned_int_9;
					char controller_1[2];
					fgets(controller_1 ,2 ,stdin);
					if( strcmp( controller_1, ")") > 0)
					{
						float_2 = float_3;
					}
					if(1)
					{
						unsigned_int_8 = unsigned_int_8 + unsigned_int_3;
					}
					int_1 = int_2 * int_5;
					int_9 = int_2 + int_2;
					int_5 = int_5 * int_2;
					unsigned_int_3 = unsigned_int_10 + unsigned_int_9;
					float_2 = float_6 + float_2;
					short_2 = short_4 + short_1;
					if(1)
					{
						char_6 = char_3 * char_7;
					}
				}
				if(1)
				{
					int int_11 = 1;
					unsigned_int_2 = unsigned_int_4 * unsigned_int_10;
					char_8 = char_3 + char_6;
					int_6 = int_10 + int_8;
					int_2 = int_5 * int_6;
					int_4 = int_9 + int_11;
					long_4 = long_4;
					if(1)
					{
						int_12 = int_6 * int_6;
						short_5 = short_1 + short_1;
					}
					if(1)
					{
						unsigned_int_1 = unsigned_int_2;
						short_6 = short_6 + short_3;
					}
					if(1)
					{
						unsigned_int_9 = unsigned_int_7 + unsigned_int_5;
					}
					if(1)
					{
						if(1)
						{
							double_4 = double_5;
						}
						if(1)
						{
							double_5 = double_7 + double_6;
						}
					}
					if(1)
					{
						unsigned_int_9 = unsigned_int_1 + unsigned_int_5;
					}
					if(1)
					{
						int_11 = int_2;
					}
					if(1)
					{
						char_3 = char_3 + char_3;
						unsigned_int_10 = unsigned_int_4;
						double_8 = double_7 * double_7;
						int_1 = int_10 * int_9;
						double_8 = double_9;
						float_5 = float_1 * float_3;
						long_5 = long_3;
					}
					if(1)
					{
						unsigned_int_3 = unsigned_int_7;
					}
					if(1)
					{
						int_11 = int_8 + int_2;
					}
					if(1)
					{
						if(1)
						{
							double_5 = double_5;
						}
						double_1 = double_3;
					}
					int_9 = int_13 + int_12;
					unsigned_int_2 = unsigned_int_9;
					char_1 = char_8 * char_3;
					double_3 = double_3 + double_5;
					if(1)
					{
						short_6 = short_1 * short_5;
						long_4 = long_4;
					}
					if(1)
					{
						double_9 = double_7 + double_1;
						int_12 = int_2;
					}
					char_7 = char_2 + char_9;
					long_3 = long_1;
					double_8 = double_1 + double_4;
					short_2 = short_7 + short_2;
					if(1)
					{
						int_3 = int_6 * int_11;
					}
				}
			}
		}
		unsigned_int_9 = unsigned_int_5 * unsigned_int_4;
		if(1)
		{
			long_5 = long_4 + long_6;
		}
	}
	int_2 = int_6 + int_8;
	if(1)
	{
		double double_10 = 1;
		short short_10 = 1;
		double_1 = double_7 + double_9;
		double_7 = double_7 * double_10;
		double_3 = double_4 + double_10;
		double_7 = double_4 + double_7;
		double_7 = double_3 * double_10;
		int_4 = int_3 * int_8;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int int_14 = 1;
				double double_11 = 1;
				double double_13 = 1;
				unsigned int unsigned_int_11 = 1;
				int_1 = int_2 + int_7;
				char_4 = char_2;
				int_1 = int_14 + int_13;
				if(1)
				{
					double_11 = double_5 + double_5;
				}
				float_4 = float_7 + float_7;
				if(1)
				{
					if(1)
					{
						double_9 = double_12 * double_2;
						double_8 = double_7;
						double_13 = double_4;
					}
				}
				if(1)
				{
					int_12 = int_13 + int_13;
					short_4 = short_5 * short_1;
				}
				unsigned_int_2 = unsigned_int_8 * unsigned_int_1;
				unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
				long_1 = long_6 * long_5;
				unsigned_int_8 = unsigned_int_6 + unsigned_int_1;
				char_1 = char_9 + char_1;
				unsigned_int_11 = unsigned_int_10 * unsigned_int_11;
				double_6 = double_11 * double_4;
				long_7 = long_6 * long_5;
				int_15 = int_5 * int_9;
				short_9 = short_7 + short_8;
				unsigned_int_11 = unsigned_int_3 * unsigned_int_12;
				if(1)
				{
					char char_10 = 1;
					long long_8 = 1;
					double_4 = double_13;
					short_8 = short_1;
					int_4 = int_7 + int_14;
					char_7 = char_2 + char_9;
					char_9 = char_2 + char_10;
					char_9 = char_6 * char_3;
					long_2 = long_7 + long_8;
					int_9 = int_3 * int_15;
					float_2 = float_5;
					int_2 = int_9 + int_9;
				}
				double_2 = double_2 * double_1;
				if(1)
				{
					if(1)
					{
						char_8 = char_7 + char_5;
						long_1 = long_6 * long_1;
					}
				}
			}
			double_5 = double_5 + double_8;
		}
		unsigned_int_7 = unsigned_int_2;
		short_1 = short_10 + short_9;
	}
	double_8 = double_4 + double_3;
	if(1)
	{
		int int_16 = 1;
		double_6 = double_2 * double_7;
		double_7 = double_3 * double_6;
		int_7 = int_16 * int_7;
	}
	if(1)
	{
		char_5 = char_9 * char_9;
	}
	if(1)
	{
		double_7 = double_3 + double_3;
	}
	int_1 = int_12 + int_5;
	double_14 = double_9 + double_7;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		float float_8 = 1;
		long long_9 = 1;
		double double_15 = 1;
		int int_17 = 1;
		int int_18 = 1;
		float_8 = float_8 + float_7;
		double_12 = double_9;
		short_4 = short_8 * short_5;
		int_7 = int_10 + int_1;
		double_9 = double_5 * double_12;
		long_7 = long_9 + long_6;
		if(1)
		{
			char_1 = char_5 * char_8;
			int_3 = int_15 * int_4;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
		long_7 = long_1;
		double_5 = double_12 * double_15;
		float_1 = float_5 + float_2;
		int_7 = int_17 * int_4;
		int_13 = int_17 * int_18;
		short_6 = short_9;
		unsigned_int_12 = unsigned_int_4;
		if(1)
		{
			unsigned_int_2 = unsigned_int_10 + unsigned_int_9;
		}
		if(1)
		{
			if(1)
			{
				float float_9 = 1;
				float_2 = float_9 + float_3;
			}
			if(1)
			{
				int_1 = int_4;
			}
			if(1)
			{
				short_1 = short_7 * short_9;
			}
			if(1)
			{
				int_15 = int_7 + int_4;
			}
			if(1)
			{
				long_2 = long_5;
			}
		}
		float_3 = float_4 * float_6;
	}
	if(1)
	{
		unsigned_int_9 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		char_2 = char_8 * char_1;
	}
	short_11 = short_9;
}
void v__smart_cb_change(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	v__smart_apply(unsigned_int_1,uni_para);

	short_1 = short_1 * short_1;
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_2;
	char_1 = char_2;
	long_1 = long_1;
	char_2 = char_1;
}
unsigned int v__smart_update_queue( char parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller4vul_854[3];
	fgets(controller4vul_854 ,3 ,stdin);
	if( strcmp( controller4vul_854, "w4") < 0)
	{
		v__smart_cb_change(uni_para);

	}
	double_1 = double_2;
	return unsigned_int_1;
}
double v__lost_selection_reset_job()
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	long_2 = long_1 + long_2;
	short_1 = v__lost_selection(unsigned_int_1,-1 );

	long_1 = long_1;
	long_3 = long_3 + long_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		char_1 = char_1 * char_2;
		double_1 = double_1 + double_2;
	}
	return double_2;
}
short v__lost_selection(unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_4 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 * float_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	char controller4vul_851[3];
	fgets(controller4vul_851 ,3 ,stdin);
	if( strcmp( controller4vul_851, "!6") > 0)
	{
		char char_3 = 1;
		char controller4vul_852[2];
		fgets(controller4vul_852 ,2 ,stdin);
		if( strcmp( controller4vul_852, "p") > 0)
		{
			int int_4 = 1;
			char char_4 = 1;
			int_3 = int_4 * int_4;
			char controller4vul_853[2];
			fgets(controller4vul_853 ,2 ,stdin);
			if( strcmp( controller4vul_853, "7") > 0)
			{
				char char_2 = 1;
				unsigned_int_1 = v__smart_update_queue(char_1,char_1,uni_para);

				char_2 = char_1 * char_1;
			}
			char_4 = char_3 * char_3;
		}
		char_3 = char_1 * char_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		if(1)
		{
			double double_4 = 1;
			double_3 = double_2 * double_4;
			short_1 = short_1 + short_1;
		}
		short_2 = short_1 + short_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		short_3 = short_2 * short_3;
		double_3 = double_2;
	}
	return short_4;
}
short v__take_selection_text( float parameter_1,double parameter_2,long parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_3;
	int_4 = int_1;
	long_2 = long_1 * long_2;
	long_2 = long_3;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_1;
	char controller4vul_850[2];
	fgets(controller4vul_850 ,2 ,stdin);
	if( strcmp( controller4vul_850, "0") < 0)
	{
		unsigned int unsigned_int_6 = 1;
		short_1 = v__lost_selection(unsigned_int_1,uni_para);

		unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
	}
	float_1 = float_1 + float_1;
	return short_2;
}
unsigned int v__cb_ctxp_link_content_copy(float parameter_2,int uni_para)
{
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short_1 = v__take_selection_text(float_1,double_1,long_1,uni_para);

	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_1 + int_1;
	float_3 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_3;
	double_1 = double_1 + double_1;
	int_1 = int_2;
	int_1 = int_2 * int_3;
	return unsigned_int_5;
}
void v_ty_sb_free( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_1;
	short_1 = short_2;
	float_2 = float_1 * float_2;
}
float v_ty_sb_steal_buf()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_1 * int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_1 = char_1;
		}
		char_2 = char_1 * char_1;
	}
	int_1 = int_2 * int_1;
	double_2 = double_1 + double_1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_3 = double_1;
	return float_1;
}
int v_codepoint_to_utf8( unsigned int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	if(1)
	{
		long_1 = long_2;
		long_1 = long_2 + long_3;
	}
	if(1)
	{
		short short_2 = 1;
		long long_4 = 1;
		short_1 = short_1 + short_2;
		long_3 = long_1 * long_1;
		long_4 = long_3 + long_1;
	}
	if(1)
	{
		char char_2 = 1;
		int_2 = int_1 + int_2;
		long_2 = long_5 + long_5;
		float_1 = float_1 * float_1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		char char_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short_1 = short_3 * short_1;
		char_1 = char_1 + char_3;
		float_1 = float_1 * float_1;
		int_1 = int_1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		int int_3 = 1;
		float float_3 = 1;
		int_1 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1 * int_3;
		long_2 = long_3;
		float_1 = float_2 * float_3;
		int_3 = int_2 + int_4;
	}
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		long long_6 = 1;
		long long_7 = 1;
		short_5 = short_4 * short_3;
		int_2 = int_5 * int_4;
		short_6 = short_3 * short_5;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_2 + float_2;
		double_4 = double_1 + double_4;
		long_7 = long_5 * long_6;
	}
	char controller_7[2];
	fgets(controller_7 ,2 ,stdin);
	if( strcmp( controller_7, "m") < 0)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	}
	return int_5;
}
void v_ty_sb_spaces_rtrim( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_2;
	short_2 = short_1 + short_2;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		int_1 = int_1 + int_1;
		int_2 = int_1;
		float_2 = float_1 + float_1;
		float_1 = float_3 + float_4;
	}
}
int v_ty_sb_add( double parameter_1,long parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_1 + long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "w*") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char_1 = char_1 + char_2;
		float_1 = float_1 * float_2;
		double_1 = double_1 + double_2;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_1 = int_1 + int_1;
	}
	long_2 = long_2 * long_1;
	int_1 = int_1 + int_2;
	int_1 = int_2 + int_2;
	return int_3;
}
char v__termpty_cellrow_from_beacon_get( unsigned int parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_2;
	double_1 = v_verify_beacon(char_2,int_3);

	long_3 = long_1 * long_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	long_4 = long_4 + long_5;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_2 = short_1 + short_1;
		short_1 = short_3 + short_1;
	}
	int_3 = int_1 * int_2;
	double_2 = double_1;
	double_4 = double_1 * double_3;
	int_2 = int_2 + int_2;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		int int_4 = 1;
		float float_2 = 1;
		long long_6 = 1;
		char_4 = char_1 * char_3;
		double_3 = double_1 * double_3;
		int_3 = int_1 + int_4;
		char_1 = char_3 + char_2;
		long_5 = long_4;
		float_2 = float_2 * float_1;
		long_4 = long_6;
	}
	int_1 = int_3;
	return char_1;
}
float v_termpty_cellrow_get( int parameter_1,int parameter_2,double parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
		}
		char_1 = v__termpty_cellrow_from_beacon_get(unsigned_int_1,int_1,char_2);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
	}
	return float_1;
}
float v_termio_selection_get( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,float parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_5 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			v_ty_sb_spaces_rtrim(short_1);

			double_3 = double_1 * double_2;
			v_ty_sb_free(float_1);

			float_1 = float_2 * float_1;
		}
		if(1)
		{
			float_5 = float_3 + float_4;
		}
		if(1)
		{
			int int_2 = 1;
			int_1 = v_codepoint_to_utf8(unsigned_int_2,char_1);

			int_1 = int_2 + int_3;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						double_1 = double_2 * double_4;
					}
					if(1)
					{
						short short_2 = 1;
						short short_3 = 1;
						short_1 = short_2 * short_3;
					}
				}
				if(1)
				{
					float_4 = v_ty_sb_steal_buf();

					float_5 = float_3 + float_2;
				}
			}
		}
		if(1)
		{
			double double_5 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int int_4 = 1;
				if(1)
				{
					int_5 = int_4 * int_3;
				}
				if(1)
				{
					v_termpty_backlog_unlock();

					int_4 = int_5 * int_5;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
				}
				if(1)
				{
					float_1 = v_termpty_cellrow_get(int_3,int_5,double_2);

					float_4 = float_1 + float_1;
				}
				if(1)
				{
					double_3 = double_5 * double_4;
				}
			}
			double_2 = double_1 + double_5;
		}
		if(1)
		{
			int_5 = v_ty_sb_add(double_6,long_1,double_3);

			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		}
	}
	return float_1;
	v_termpty_backlog_lock();

}
int v__cb_ctxp_link_open(float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_2;
	int_1 = int_1;
	char_2 = char_1 * char_1;
	v__activate_link(short_1,unsigned_int_1);

	double_1 = double_3 * double_1;
	double_1 = double_2 * double_3;
	int_3 = int_2 + int_3;
	return int_2;
}
int v__should_inline()
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int_1 = v_termio_config_get(double_1);

	int_3 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_3;
	if(1)
	{
	}
	return int_4;
}
short v_link_is_email( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
}
short v_link_is_protocol( float parameter_1)
{
	short short_1 = 1;
	return short_1;
}
short v_link_is_url( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	return short_1;
	short_2 = v_link_is_protocol(float_1);

}
void v__activate_link( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_4 = 1;
	long long_3 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_5 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_2;
	int_1 = int_1 * int_1;
	float_1 = float_1 * float_1;
	double_1 = double_1;
	float_3 = float_1 * float_2;
	float_3 = float_2 * float_1;
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
			char_2 = char_3;
		}
		if(1)
		{
			short_3 = short_1 * short_2;
		}
	}
	if(1)
	{
		long_1 = v_media_src_type_get(unsigned_int_2);

		short_2 = short_4 + short_5;
	}
	if(1)
	{
		double_1 = double_2 * double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char_3 = char_2 * char_1;
	}
	float_1 = float_2 * float_4;
	if(1)
	{
	}
	if(1)
	{
		char char_4 = 1;
		short_2 = short_3 * short_5;
		char_1 = char_1 * char_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			long long_2 = 1;
			short_2 = v_link_is_url(char_2);

			int_1 = v__should_inline();

			long_3 = long_2 + long_1;
		}
		float_6 = float_3 + float_5;
		if(1)
		{
			float float_7 = 1;
			float_7 = float_6 + float_1;
			int_3 = int_1 + int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		int_2 = int_2 * int_1;
		if(1)
		{
			char_5 = char_1 + char_5;
			if(1)
			{
				if(1)
				{
					float_4 = float_3 * float_5;
					short_2 = short_2 + short_3;
				}
				if(1)
				{
					int_5 = int_2 * int_4;
					short_4 = v_link_is_email(unsigned_int_4);

					double_2 = double_2;
				}
			}
			if(1)
			{
				short short_6 = 1;
				if(1)
				{
					if(1)
					{
						float_6 = float_4 * float_3;
					}
				}
				if(1)
				{
					if(1)
					{
						long_3 = long_3 + long_1;
					}
				}
				if(1)
				{
					if(1)
					{
						int int_6 = 1;
						int_4 = int_6 + int_3;
					}
				}
				short_7 = short_6 * short_1;
				int_5 = int_5;
			}
		}
	}
	if(1)
	{
		char char_6 = 1;
		int_1 = int_5;
		char_6 = char_5 + char_1;
		if(1)
		{
			double_1 = double_2 * double_2;
			if(1)
			{
				double_1 = double_1;
				int_1 = int_5 * int_4;
			}
			if(1)
			{
				double double_3 = 1;
				if(1)
				{
					if(1)
					{
						double double_4 = 1;
						double_1 = double_3 * double_4;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
					}
				}
				if(1)
				{
					if(1)
					{
						double double_5 = 1;
						double_5 = double_2 + double_1;
					}
				}
				float_6 = float_1 + float_1;
				double_3 = double_2;
			}
		}
	}
	if(1)
	{
		int int_7 = 1;
		int_7 = int_1 * int_5;
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		short_5 = short_2 + short_7;
	}
}
float v__cb_ctxp_link_preview(int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_1;
	int_3 = int_1 + int_2;
	int_1 = int_4 * int_5;
	v__activate_link(short_1,unsigned_int_1);

	double_2 = double_1 * double_2;
	double_4 = double_1 + double_3;
	char_1 = char_1 * char_1;
	return float_1;
}
double v__is_fmt( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "Q") == 0)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
		}
	}
	return double_1;
}
long v_media_src_type_get( unsigned int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 + int_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = v__is_fmt(char_1,float_2);

		double_1 = double_1 * double_2;
	}
	return long_2;
}
short v__mouse_in_selection( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	double_3 = double_1 + double_2;
	long_2 = long_1 * long_1;
	double_2 = double_1 * double_4;
	if(1)
	{
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_5 = double_3 + double_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if( strcmp( controller_6, "j0") < 0)
		{
		}
		if(1)
		{
		}
	}
	return short_1;
}
unsigned int v__smart_xy_to_cursor( short parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_1;
	char_1 = char_1 + char_1;
	int_1 = int_1 * int_2;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2 * short_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	return unsigned_int_1;
}
void v__cb_link_down(long parameter_2,double parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	float_2 = float_1 * float_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		int_2 = int_3 * int_1;
		int_3 = int_2 + int_2;
	}
	char controller4vul_847[3];
	fgets(controller4vul_847 ,3 ,stdin);
	if( strcmp( controller4vul_847, "* ") > 0)
	{
		int int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		float float_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		int int_5 = 1;
		int int_6 = 1;
		float float_7 = 1;
		int_4 = int_3 * int_1;
		double_1 = double_2;
		double_3 = double_2 + double_2;
		double_2 = double_4 * double_5;
		char controller4vul_848[3];
		fgets(controller4vul_848 ,3 ,stdin);
		if( strcmp( controller4vul_848, "/W") < 0)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
			double_4 = double_2;
			char controller4vul_849[2];
			fgets(controller4vul_849 ,2 ,stdin);
			if( strcmp( controller4vul_849, ">") > 0)
			{
				unsigned_int_1 = v__cb_ctxp_link_content_copy(float_1,uni_para);

			}
		}
		char_1 = char_1 + char_2;
		long_1 = long_1;
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			float_5 = float_3 * float_4;
			if(1)
			{
				float_3 = float_4 * float_4;
			}
		}
		long_4 = long_2 * long_3;
		long_2 = long_1 + long_4;
		if(1)
		{
			double double_6 = 1;
			double_6 = double_2 * double_2;
		}
		if(1)
		{
			float_1 = float_3 * float_6;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			float_6 = float_6 + float_2;
		}
		unsigned_int_1 = unsigned_int_4;
		short_1 = short_1 + short_2;
		int_6 = int_5 + int_1;
		double_5 = double_3 + double_4;
		float_1 = float_6 + float_7;
	}
}
float v_main_term_popup_exists( double parameter_1)
{
	float float_1 = 1;
	return float_1;
}
long v__update_link( float parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_2;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_3 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_1 = 1;
		float_3 = float_1 * float_2;
		unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
		float_3 = float_1 * float_3;
		char controller4vul_845[2];
		fgets(controller4vul_845 ,2 ,stdin);
		if( strcmp( controller4vul_845, "o") > 0)
		{
			unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
			char controller4vul_846[3];
			fgets(controller4vul_846 ,3 ,stdin);
			if( strcmp( controller4vul_846, "t]") < 0)
			{
				v__cb_link_down(long_2,double_2,uni_para);

				int_3 = int_1 * int_3;
			}
			if(1)
			{
				float_2 = float_2;
			}
		}
		if(1)
		{
			char char_2 = 1;
			unsigned_int_6 = unsigned_int_3 * unsigned_int_4;
			char_2 = char_2 + char_2;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2 + int_4;
			int_1 = int_3 + int_1;
		}
		double_1 = double_1 * double_2;
		unsigned_int_2 = unsigned_int_2;
		long_3 = long_3 * long_1;
		unsigned_int_4 = unsigned_int_3;
		unsigned_int_7 = unsigned_int_3 * unsigned_int_3;
		short_1 = short_1 + short_1;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 + char_3;
		}
	}
	return long_1;
}
unsigned int v__remove_links( float parameter_1,double parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long_1 = long_1;
	char controller4vul_844[2];
	fgets(controller4vul_844 ,2 ,stdin);
	if( strcmp( controller4vul_844, "x") > 0)
	{
		float float_2 = 1;
		long_2 = v__update_link(float_1,unsigned_int_1,double_1,double_1,uni_para);

		float_3 = float_2 * float_3;
		int_1 = int_1 + int_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2 + int_2;
	float_1 = float_3 * float_1;
	unsigned_int_4 = unsigned_int_5;
	int_3 = int_4;
	int_1 = int_3;
	return unsigned_int_1;
}
int v__sel_set( float parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		int_1 = int_1 * int_2;
		double_4 = double_3 * double_2;
		float_1 = float_1;
	}
	return int_3;
}
int v_termio_scroll_get( int parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
void v_miniview_position_offset( short parameter_1,int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = v_termio_scroll_get(int_1);

	int_1 = int_1 + int_2;
	double_3 = double_1 + double_2;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double_1 = double_4 * double_5;
		int_2 = int_3 + int_4;
		if(1)
		{
			int int_5 = 1;
			double_3 = double_5 + double_3;
			double_5 = double_3 * double_3;
			int_3 = int_3 * int_5;
		}
		if(1)
		{
			int_3 = int_3;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_6 = 1;
			int int_7 = 1;
			int_7 = int_1 + int_6;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_2 = float_1 + float_1;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
			}
		}
	}
}
char v_term_miniview_get( short parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
void v_termio_scroll( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	char_1 = char_1 * char_2;
	double_2 = double_1 + double_1;
	char_3 = char_3 * char_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_2;
		}
		char_2 = char_3;
	}
	double_2 = double_3 + double_3;
	char controller4vul_841[2];
	fgets(controller4vul_841 ,2 ,stdin);
	if( strcmp( controller4vul_841, "O") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_3;
		float_2 = float_1 + float_2;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			double_2 = double_3;
		}
		char controller4vul_842[2];
		fgets(controller4vul_842 ,2 ,stdin);
		if( strcmp( controller4vul_842, "i") < 0)
		{
			double double_4 = 1;
			double double_5 = 1;
			unsigned_int_3 = unsigned_int_3;
			double_5 = double_3 + double_4;
			double_2 = double_6;
			double_2 = double_6 + double_1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
			char controller4vul_843[3];
			fgets(controller4vul_843 ,3 ,stdin);
			if( strcmp( controller4vul_843, "y]") > 0)
			{
				unsigned_int_2 = v__remove_links(float_2,double_6,uni_para);

				unsigned_int_3 = unsigned_int_4;
			}
		}
		if(1)
		{
			double double_7 = 1;
			double_2 = double_7 * double_7;
		}
		if(1)
		{
			int int_1 = 1;
			char char_4 = 1;
			int int_2 = 1;
			int_1 = int_1;
			char_2 = char_4 + char_4;
			int_1 = int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			float_2 = float_2 * float_1;
		}
	}
}
unsigned int v_termpty_save_new( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	char_2 = char_1 + char_1;
	int_2 = int_1 + int_1;
	return unsigned_int_3;
	v_termpty_save_free(double_2);

}
int v_termpty_save_expand( char parameter_1,long parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	double_3 = double_3;
	int_1 = int_1 * int_1;
	return int_2;
}
void v__termpty_cell_is_empty( long parameter_1)
{
	if(1)
	{
	}
}
double v_termpty_line_length( double parameter_1,char parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
		if(1)
		{
		}
	}
	return double_1;
	v__termpty_cell_is_empty(long_2);

}
double v_verify_beacon( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	return double_1;
}
void v_termpty_text_save_top( float parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	int int_5 = 1;
	char char_6 = 1;
	long long_5 = 1;
	int int_6 = 1;
	long long_6 = 1;
	int int_7 = 1;
	short_1 = short_1 * short_2;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	double_1 = v_termpty_line_length(double_1,char_1);

	long_1 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_2 * long_2;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_4 = long_2 + long_3;
	}
	if(1)
	{
		int_3 = int_2 * int_2;
		if(1)
		{
			double_2 = v_verify_beacon(char_2,int_4);

			v_termpty_backlog_unlock();

			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			char char_3 = 1;
			char char_5 = 1;
			char_3 = char_3 * char_2;
			unsigned_int_4 = unsigned_int_4;
			short_1 = short_2 + short_2;
			char_5 = char_3 * char_4;
		}
	}
	v_termpty_backlog_lock();

	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	int_4 = v_termpty_save_expand(char_1,long_2,unsigned_int_4);

	float_2 = float_2 * float_3;
	if(1)
	{
	}
	unsigned_int_5 = v_termpty_save_new(unsigned_int_3,int_5);

	char_4 = char_6;
	double_2 = double_2 * double_2;
	if(1)
	{
		float_1 = float_2 + float_3;
	}
	long_5 = long_3;
	int_6 = int_3 + int_4;
	long_6 = long_2 * long_4;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_1 + short_3;
		int_2 = int_1 + int_6;
	}
	int_7 = int_4 * int_1;
}
void v_termpty_text_scroll( float parameter_1,float parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	short_3 = short_1 + short_2;
	short_3 = short_4 + short_5;
	double_2 = double_1 + double_1;
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	double_2 = double_2 * double_2;
	double_2 = double_2 * double_3;
	char controller4vul_839[3];
	fgets(controller4vul_839 ,3 ,stdin);
	if( strcmp( controller4vul_839, "dP") < 0)
	{
		int int_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char controller4vul_840[2];
		fgets(controller4vul_840 ,2 ,stdin);
		if( strcmp( controller4vul_840, "0") > 0)
		{
			short short_6 = 1;
			v_termio_scroll(short_5,int_2,int_2,int_2,uni_para);

			short_6 = short_5 * short_5;
		}
		int_4 = int_3 * int_4;
		if(1)
		{
			int_2 = int_4;
		}
	}
	if(1)
	{
		int int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int_5 = int_5;
		float_2 = float_1 * float_1;
		if(1)
		{
			long long_2 = 1;
			long_1 = long_1 * long_2;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int_2 = int_4;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		}
		if(1)
		{
			double double_4 = 1;
			double_4 = double_2;
		}
	}
}
void v_termpty_text_scroll_test( double parameter_1,double parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char_2 = char_1 * char_1;
	char controller4vul_837[3];
	fgets(controller4vul_837 ,3 ,stdin);
	if( strcmp( controller4vul_837, "}y") > 0)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
		char controller4vul_838[2];
		fgets(controller4vul_838 ,2 ,stdin);
		if( strcmp( controller4vul_838, " ") > 0)
		{
			double double_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			v_termpty_text_scroll(float_1,float_2,uni_para);

			double_1 = double_1 + double_2;
			int_3 = int_1 * int_2;
			int_1 = int_2 * int_1;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_3 = 1;
		short_2 = short_1 + short_1;
		float_2 = float_3 + float_2;
		double_2 = double_2 * double_2;
	}
}
long v__cursor_to_start_of_line( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 + long_2;
	return long_2;
}
long v__tab_forward( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
void v__handle_cursor_control( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	short short_1 = 1;
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	v_termpty_text_scroll_test(double_1,double_2,-1 );

	int_1 = int_1 + int_1;
	float_2 = float_1 + float_2;
	double_1 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_3 + float_1;
	}
	long_1 = v__cursor_to_start_of_line(double_2);

	char_4 = char_3 + char_3;
	long_1 = v__tab_forward(double_3,int_2);

	short_1 = short_1 + short_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "6") < 0)
	{
		int int_3 = 1;
		double double_4 = 1;
		int_3 = int_2 + int_2;
		char_1 = char_3;
		double_2 = double_4 * double_1;
	}
	unsigned_int_1 = unsigned_int_1;
}
int v_termpty_handle_seq( char parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float_1 = float_1 * float_1;
	char controller4vul_834[2];
	fgets(controller4vul_834 ,2 ,stdin);
	if( strcmp( controller4vul_834, "l") > 0)
	{
		long_1 = v__handle_esc(short_1,short_2,unsigned_int_1,uni_para);

		short_1 = short_1 * short_2;
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "2e") > 0)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_3 = int_1 + int_2;
	}
	return int_3;
}
void v_termpty_handle_buf( int parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_1 + double_2;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_833[2];
	fgets(controller4vul_833 ,2 ,stdin);
	if( strcmp( controller4vul_833, "&") < 0)
	{
		long long_3 = 1;
		int_3 = v_termpty_handle_seq(char_1,int_4,int_4,uni_para);

		long_2 = long_3 + long_2;
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
}
void v_theme_reload( unsigned int parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1;
	long_2 = long_1 + long_1;
	char_3 = char_1 + char_2;
	double_1 = double_2;
	if(1)
	{
	}
}
int v_theme_reload_cb(char parameter_2,char parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2;
	long_1 = long_1 + long_2;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	long_4 = long_3 * long_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	}
	return int_1;
	v_theme_reload(unsigned_int_1);

}
void v_theme_auto_reload_enable()
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_theme_reload_cb(char_1,char_2,unsigned_int_1);

	double_2 = double_1 + double_1;
}
short v__cursor_shape_to_group_name( long parameter_1)
{
	short short_1 = 1;
	return short_1;
}
float v_config_theme_path_default_get( int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double_1 = double_1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	short_2 = short_3;
	return float_1;
}
float v_theme_path_get()
{
	float float_1 = 1;
	return float_1;
}
int v_config_theme_path_get( unsigned int parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_1 = v_theme_path_get();

	short_1 = short_1 + short_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	return int_1;
}
double v_theme_apply( unsigned int parameter_1,short parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	short_1 = short_1 + short_2;
	long_3 = long_1 + long_2;
	float_3 = float_1 * float_2;
	float_1 = v_config_theme_path_default_get(int_1);

	double_2 = double_1 * double_1;
	if(1)
	{
	}
	int_2 = int_2 * int_1;
	int_3 = v_config_theme_path_get(unsigned_int_1);

	double_2 = double_2 * double_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_3 = short_3;
	return double_4;
}
void v_termio_set_cursor_shape( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	long_1 = long_1 + long_2;
	v_theme_auto_reload_enable();

	char_1 = char_1 + char_2;
	double_1 = v_theme_apply(unsigned_int_1,short_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_1;
	short_1 = v__cursor_shape_to_group_name(long_3);

	long_4 = long_1 + long_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		long_4 = long_5 + long_6;
		if(1)
		{
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		}
	}
}
void v_termpty_clear_tabs_on_screen( long parameter_1)
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
void v_termpty_backlog_size_set( long parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_3 = 1;
	long long_2 = 1;
	char char_3 = 1;
	if(1)
	{
	}
	v_termpty_backlog_lock();

	char_1 = char_1 * char_2;
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double_3 = double_1 + double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long_1 = long_1;
		}
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		v_termpty_backlog_unlock();

		char_1 = char_1 + char_1;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	float_3 = float_1 * float_3;
	long_1 = long_2;
	char_3 = char_2 * char_3;
	v_termpty_save_free(double_2);

}
void v__ts_free()
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_2;
}
void v_termpty_save_free( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 * float_2;
		}
		v__ts_free();

		double_2 = double_1 + double_1;
	}
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	v_termpty_backlog_lock();

	float_2 = float_1 * float_1;
	float_2 = float_3 + float_4;
	int_1 = int_1 + int_2;
	v_termpty_backlog_unlock();

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_5 = 1;
		v_termpty_save_free(double_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_3 = int_3 * int_1;
		}
		char_3 = char_1 + char_2;
		v_termpty_backlog_size_set(long_1,short_1);

		float_3 = float_1 * float_5;
	}
	int_3 = int_3 + int_1;
	long_2 = long_2 * long_3;
	double_1 = double_1 * double_1;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
}
void v_termpty_reset_att( long parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_5 = 1;
	long long_4 = 1;
	int int_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_5 = 1;
	short_1 = short_1;
	int_2 = int_1 * int_2;
	double_1 = double_1;
	int_1 = int_2 + int_2;
	double_2 = double_2 * double_2;
	short_2 = short_2 * short_2;
	long_1 = long_2;
	double_4 = double_3 * double_1;
	int_4 = int_3 * int_2;
	long_2 = long_3 + long_2;
	long_3 = long_1 + long_2;
	int_6 = int_1 + int_5;
	long_1 = long_3 * long_2;
	double_5 = double_3 + double_1;
	long_4 = long_1 * long_4;
	int_4 = int_7 * int_3;
	long_3 = long_1 + long_3;
	int_3 = int_6 + int_7;
	float_2 = float_1 + float_2;
	short_1 = short_1;
	int_4 = int_7 + int_4;
	long_2 = long_5 * long_1;
}
int v_termio_config_get( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1;
	return int_1;
}
void v_termpty_reset_state( char parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	float_1 = float_1;
	int_1 = int_1 * int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "6") < 0)
	{
		long_1 = long_1;
	}
	float_2 = float_3;
	short_2 = short_1 * short_1;
	double_1 = double_1 * double_1;
	v_termpty_clear_tabs_on_screen(long_2);

	long_1 = long_2;
	int_2 = v_termio_config_get(double_2);

	int_4 = int_3 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_5 = long_3 + long_4;
	float_4 = float_3 * float_4;
	int_3 = int_1 + int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	float_1 = float_3 * float_1;
	double_4 = double_3 + double_2;
	unsigned_int_2 = unsigned_int_2;
	double_3 = double_5;
	int_5 = int_5 * int_1;
	int_4 = int_1 + int_4;
	float_5 = float_4;
	v_termpty_clear_backlog(short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_2 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	int_1 = int_6 + int_6;
	double_4 = double_3 * double_3;
	double_1 = double_1;
	double_2 = double_2;
	unsigned_int_2 = unsigned_int_5;
	long_1 = long_3 + long_3;
	double_1 = double_4 * double_1;
	short_3 = short_3 * short_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	int_1 = int_1 * int_4;
	char_2 = char_1 * char_1;
	int_4 = int_1 * int_6;
	short_4 = short_1 * short_4;
	v_termpty_reset_att(long_2);

	double_3 = double_2 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_termio_set_cursor_shape(int_2,unsigned_int_4);

		float_1 = float_3 + float_4;
	}
	if(1)
	{
		float float_6 = 1;
		float_1 = float_6 * float_2;
	}
}
void v_termpty_resize_tabs( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		}
		float_1 = float_2 + float_2;
	}
	float_2 = float_2 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	}
}
char v__termpty_init( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	float_3 = float_1 + float_2;
	int_3 = int_1 + int_2;
	float_2 = float_3 + float_3;
	v_termpty_reset_state(char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	char_3 = char_2 + char_1;
	int_1 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_4;
	double_1 = double_3;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3;
	short_2 = short_1 + short_1;
	return char_4;
	v_termpty_resize_tabs(char_3,int_1,int_2);

}
unsigned int v__add_default_keys( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float float_3 = 1;
	char char_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_7 = 1;
	int_1 = int_2;
	long_2 = long_1 + long_1;
	int_1 = int_3 + int_1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_4;
	double_2 = double_1 * double_2;
	short_3 = short_2 + short_1;
	int_3 = int_3 * int_2;
	double_4 = double_1 * double_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 * short_1;
	float_2 = float_1 * float_1;
	double_5 = double_1 + double_5;
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	double_1 = double_3 * double_2;
	double_4 = double_2 * double_3;
	long_4 = long_3 + long_1;
	double_6 = double_2 + double_1;
	float_2 = float_2 * float_1;
	char_4 = char_3 + char_2;
	int_1 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_4;
	char_4 = char_3 + char_4;
	float_1 = float_2 * float_2;
	long_3 = long_3 + long_5;
	int_1 = int_3 + int_1;
	long_4 = long_2;
	int_2 = int_1 + int_3;
	double_4 = double_2 + double_6;
	double_6 = double_4 + double_3;
	int_3 = int_3 * int_2;
	long_6 = long_4;
	float_2 = float_1 * float_2;
	double_6 = double_5 * double_1;
	char_3 = char_1 * char_2;
	float_3 = float_1 * float_1;
	int_1 = int_3 + int_3;
	char_5 = char_1 + char_5;
	double_1 = double_7;
	char_1 = char_2 * char_3;
	double_4 = double_6 + double_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	char_3 = char_1 + char_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	char_5 = char_3 + char_5;
	short_1 = short_2 * short_3;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
	long_6 = long_5 * long_7;
	return unsigned_int_2;
}
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,long parameter_4,char parameter_5,unsigned int parameter_6)
{
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_1 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_1;
		long_1 = long_1;
		unsigned_int_2 = unsigned_int_3;
		short_2 = short_1 + short_2;
		unsigned_int_2 = unsigned_int_2;
		int_2 = int_1 * int_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	long_2 = long_2 + long_1;
	short_1 = short_1 + short_2;
	float_2 = float_1 * float_2;
}
char v_config_new()
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_6 = 1;
	char_1 = char_1 + char_2;
	short_2 = short_1 + short_1;
	if(1)
	{
		short short_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_4 = 1;
		float float_3 = 1;
		char char_5 = 1;
		short short_5 = 1;
		long long_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_4 = 1;
		int int_6 = 1;
		int int_7 = 1;
		char_2 = char_1 + char_2;
		short_1 = short_3 * short_2;
		char_2 = char_2 + char_1;
		char_1 = char_2 * char_2;
		int_3 = int_1 + int_2;
		int_3 = int_2;
		int_3 = int_2 * int_1;
		short_3 = short_1 * short_4;
		double_1 = double_1;
		double_1 = double_1 * double_1;
		unsigned_int_1 = v__add_default_keys(short_4);

		double_1 = double_2 * double_2;
		short_2 = short_1 * short_4;
		int_5 = int_3 * int_4;
		char_1 = char_3 + char_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		long_2 = long_1 * long_1;
		float_1 = float_2;
		long_2 = long_3 * long_1;
		double_4 = double_3 * double_2;
		long_1 = long_4 * long_2;
		int_3 = int_1 + int_5;
		double_2 = double_4 * double_4;
		long_4 = long_3 + long_4;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
		long_2 = long_3 + long_1;
		double_2 = double_3 * double_2;
		char_4 = char_1 + char_3;
		float_3 = float_1 * float_1;
		double_4 = double_2 * double_4;
		char_5 = char_4 * char_3;
		int_4 = int_2 * int_5;
		v_colors_standard_get(int_3,int_3,unsigned_int_6,long_3,char_2,unsigned_int_4);

		short_5 = short_5 + short_1;
		long_2 = long_3 * long_5;
		double_3 = double_4;
		double_4 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
		char_6 = char_3 * char_3;
		double_1 = double_2 * double_2;
		short_6 = short_2 * short_4;
		short_1 = short_5;
		unsigned_int_3 = unsigned_int_7 * unsigned_int_6;
		char_3 = char_6 * char_1;
		float_2 = float_4;
		short_4 = short_2 + short_1;
		int_2 = int_2 * int_5;
		short_4 = short_6 + short_2;
		int_6 = int_1 + int_1;
		double_2 = double_2 * double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_7 = unsigned_int_5 * unsigned_int_2;
				int_3 = int_4 + int_1;
				int_5 = int_6 * int_6;
				double_1 = double_3 + double_2;
				int_1 = int_3;
				unsigned_int_6 = unsigned_int_4;
			}
		}
		int_7 = int_6 * int_7;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	}
	return char_6;
}
int main()
{
	int uni_para =387;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int int_8 = 1;
	long long_3 = 1;
	char char_5 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	int int_10 = 1;
	short short_2 = 1;
	double double_6 = 1;
	short short_3 = 1;
	double double_7 = 1;
	long long_6 = 1;
	long long_7 = 1;
	long long_8 = 1;
	int int_12 = 1;
	int_3 = int_1 + int_2;
	int_3 = int_1 + int_4;
	char_2 = char_1 + char_1;
	long_2 = long_1 + long_1;
	int_5 = int_3 * int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3;
	char_2 = char_1 + char_2;
	char_4 = char_2 * char_3;
	if(1)
	{
	}
	int_6 = int_6 + int_7;
	unsigned_int_2 = unsigned_int_4;
	short_1 = short_1;
	int_8 = int_1 * int_5;
	if(1)
	{
		long_3 = long_2 + long_2;
	}
	if(1)
	{
		char char_6 = 1;
		char_6 = char_5 * char_6;
	}
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
	char controller4vul_829[3];
	fgets(controller4vul_829 ,3 ,stdin);
	if( strcmp( controller4vul_829, "^;") > 0)
	{
		int int_9 = 1;
		double double_5 = 1;
		if(1)
		{
			char_5 = char_4 + char_1;
		}
		if(1)
		{
			char_1 = char_5 + char_4;
		}
		if(1)
		{
			float_1 = float_1;
		}
		int_9 = int_5 + int_2;
		if(1)
		{
			double_4 = double_1;
		}
		long_2 = long_2 * long_3;
		if(1)
		{
			int_8 = int_3 + int_10;
		}
		unsigned_int_3 = unsigned_int_5;
		if(1)
		{
			short_2 = short_1 * short_1;
		}
		short_1 = short_1;
		if(1)
		{
			int_5 = int_4 * int_3;
		}
		if(1)
		{
			double_4 = double_2 + double_5;
		}
		int_2 = int_3;
		if(1)
		{
			long_1 = long_2;
		}
		double_2 = double_5;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		}
		char controller4vul_830[3];
		fgets(controller4vul_830 ,3 ,stdin);
		if( strcmp( controller4vul_830, "S^") < 0)
		{
			float float_2 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			float_1 = float_2 * float_2;
			char controller4vul_831[3];
			fgets(controller4vul_831 ,3 ,stdin);
			if( strcmp( controller4vul_831, "|9") < 0)
			{
				int int_11 = 1;
				long long_5 = 1;
				double_3 = double_2 * double_5;
				unsigned_int_5 = unsigned_int_6;
				char controller4vul_832[2];
				fgets(controller4vul_832 ,2 ,stdin);
				if( strcmp( controller4vul_832, "r") < 0)
				{
					v_termpty_handle_buf(int_10,int_1,int_4,uni_para);

					unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
				}
				if(1)
				{
					double_5 = double_2 * double_1;
				}
				if(1)
				{
					double_4 = double_1 + double_1;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_7 + unsigned_int_5;
				}
				if(1)
				{
					int_7 = int_11;
				}
				if(1)
				{
					long long_4 = 1;
					long_2 = long_4 + long_5;
				}
				if(1)
				{
					char char_7 = 1;
					char_7 = char_7;
				}
				if(1)
				{
					long_3 = long_1 * long_5;
				}
				if(1)
				{
					double_1 = double_6 * double_6;
				}
				if(1)
				{
					int_6 = int_11;
				}
				if(1)
				{
					float_1 = float_2;
				}
				if(1)
				{
					unsigned_int_7 = unsigned_int_2 * unsigned_int_5;
				}
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_7 + unsigned_int_1;
			}
		}
	}
	if(1)
	{
		int_3 = int_3 * int_5;
	}
	if(1)
	{
		int_8 = int_10 + int_4;
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		short_2 = short_2 + short_3;
		if(1)
		{
			double_6 = double_7 * double_2;
		}
	}
	long_6 = long_6;
	long_2 = long_7;
	double_7 = double_4 * double_2;
	long_8 = long_3;
	if(1)
	{
		short_2 = short_2 * short_3;
		char_1 = char_3;
	}
	return int_12;
}

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

char v__termpty_shutdown();
void v_termpty_text_scroll_rev_test( int parameter_1,float parameter_2);
int v__handle_esc_dcs( float parameter_1,unsigned int parameter_2,long parameter_3);
double v__handle_op_a( unsigned int parameter_1,double parameter_2,unsigned int parameter_3);
unsigned int v__termpty_ext_handle( int parameter_1,double parameter_2,long parameter_3);
void v__handle_esc_terminology( char parameter_1,float parameter_2,short parameter_3);
short v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3);
char v__smart_calculate_226( int parameter_1);
int v__smart_size( double parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4);
void v_colors_term_init( float parameter_1,unsigned int parameter_2,int parameter_3);
void v_termio_config_update( long parameter_1);
float v__font_size_set( int parameter_1,int parameter_2);
void v_termio_font_size_set( char parameter_1,int parameter_2);
short v__handle_xterm_50_command( char parameter_1,char parameter_2,int parameter_3);
int v__eina_unicode_to_hex( short parameter_1);
void v__xterm_parse_color( char parameter_1,float parameter_2,float parameter_3,unsigned int parameter_4,int parameter_5);
int v__xterm_arg_get( double parameter_1);
float v__handle_esc_xterm( long parameter_1,char parameter_2,char parameter_3);
void v_termpty_cells_set_content( short parameter_1,char parameter_2,short parameter_3,int parameter_4);
long v__handle_esc_csi_decera( int parameter_1,char parameter_2);
void v_termpty_cells_att_fill_preserve_colors( long parameter_1,float parameter_2,double parameter_3,int parameter_4);
double v__clean_up_rect_coordinates( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
float v__handle_esc_csi_decfra( double parameter_1,double parameter_2);
int v__handle_esc_csi_decslrm( double parameter_1,float parameter_2);
void v__handle_esc_csi_decstbm( long parameter_1,double parameter_2);
unsigned int v__handle_esc_csi_decscusr( float parameter_1,char parameter_2);
void v__handle_esc_csi_dsr( int parameter_1,float parameter_2);
char v__handle_esc_csi_truecolor_cmyk( char parameter_1,long parameter_2);
float v__handle_esc_csi_truecolor_cmy( char parameter_1,char parameter_2);
long v__approximate_truecolor_rgb( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
char v__csi_truecolor_arg_get( short parameter_1);
void v__handle_esc_csi_truecolor_rgb( unsigned int parameter_1,unsigned int parameter_2);
char v__handle_esc_csi_color_set( char parameter_1,long parameter_2);
void v_termpty_cursor_copy( short parameter_1,char parameter_2);
int v__switch_to_alternative_screen( short parameter_1,int parameter_2);
int v__move_cursor_to_origin( long parameter_1);
int v__pty_size( double parameter_1);
void v__limit_coord( float parameter_1);
double v__check_screen_info( short parameter_1,short parameter_2);
void v__termpty_line_rewrap( long parameter_1,long parameter_2,int parameter_3,double parameter_4,unsigned int parameter_5);
char v__backlog_remove_latest_nolock( float parameter_1);
int v_termpty_save_extract( char parameter_1);
double v__termpty_line_is_empty( unsigned int parameter_1,float parameter_2);
void v_termpty_screen_swap( double parameter_1);
void v_termpty_resize( unsigned int parameter_1,int parameter_2,int parameter_3);
unsigned int v_termio_win_get( char parameter_1);
void v__handle_esc_csi_reset_mode( char parameter_1,long parameter_2,long parameter_3,int uni_para);
short v__handle_esc_csi_cursor_pos_set( char parameter_1,long parameter_2,int parameter_3);
void v_termpty_text_scroll_rev( float parameter_1,float parameter_2);
void v_termpty_clear_line( int parameter_1,short parameter_2,int parameter_3,int uni_para);
void v_termpty_clear_screen( double parameter_1,short parameter_2,int uni_para);
void v_termpty_cell_codepoint_att_fill( char parameter_1,double parameter_2,long parameter_3,short parameter_4,int parameter_5);
unsigned int v__termpty_charset_trans( double parameter_1,float parameter_2);
void v_termio_content_change( float parameter_1,short parameter_2,unsigned int parameter_3,int parameter_4,int uni_para);
void v_termpty_text_append( int parameter_1,double parameter_2,int parameter_3);
char v__csi_arg_get( short parameter_1);
double v__handle_esc_csi( long parameter_1,char parameter_2,long parameter_3,int uni_para);
char v__safechar( double parameter_1);
double v__handle_esc( double parameter_1,float parameter_2,long parameter_3,int uni_para);
void v_termpty_cell_fill( char parameter_1,double parameter_2,char parameter_3,int parameter_4);
void v_termpty_cells_fill( long parameter_1,short parameter_2,char parameter_3,int parameter_4);
void v_termpty_cells_clear( unsigned int parameter_1,double parameter_2,int parameter_3);
void v__tooltip_del(short parameter_2);
short v__tooltip_content(long parameter_2,short parameter_3);
void v_MD5Final( double parameter_1,unsigned int parameter_2);
void v_MD5Transform( unsigned int parameter_1,long parameter_2);
void v_byteReverse( double parameter_1,char parameter_2);
void v_MD5Update( float parameter_1,double parameter_2,float parameter_3);
void v_MD5Init();
void v_gravatar_tooltip( double parameter_1,short parameter_2,char parameter_3);
short v__cb_link_drag_done(char parameter_2);
float v__cb_link_drag_accept(float parameter_2,long parameter_3);
void v__cb_link_drag_move(int parameter_2,short parameter_3,char parameter_4,short parameter_5);
float v__cb_link_icon_new(unsigned int parameter_2,long parameter_3,short parameter_4);
short v__cb_link_move(unsigned int parameter_2,long parameter_3);
double v__cb_link_up_delay();
float v__cb_link_up(short parameter_2,long parameter_3);
void v_term_focus( short parameter_1);
int v__term_is_focused( int parameter_1);
void v_term_unfocus();
int v__cb_ctxp_del(long parameter_2,long parameter_3);
unsigned int v__cb_ctxp_dismissed(unsigned int parameter_2);
long v__cb_ctxp_link_copy(long parameter_2,int uni_para);
float v__screen_visual_bounds( char parameter_1);
long v__draw_cell( int parameter_1,double parameter_2,double parameter_3,char parameter_4);
void v__draw_line( char parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,char parameter_5);
int v_termpty_backlog_length( double parameter_1);
unsigned int v_termio_pty_get( short parameter_1);
int v_termio_textgrid_get( double parameter_1);
long v_miniview_colors_get( float parameter_1,char parameter_2);
char v__deferred_renderer();
char v__queue_render( float parameter_1);
void v_miniview_redraw( float parameter_1);
char v__block_obj_del( int parameter_1);
short v__termpty_is_dblwidth_slow_get( unsigned int parameter_1,int parameter_2);
short v__termpty_is_dblwidth_get( long parameter_1,int parameter_2);
int v_term_preedit_str_get( int parameter_1);
unsigned int v_media_get();
unsigned int v__smart_media_clicked(char parameter_2);
float v_media_control_get( short parameter_1);
short v__smart_media_stop(short parameter_2);
double v__smart_media_pause(float parameter_2);
char v__smart_media_play(unsigned int parameter_2);
float v__smart_media_del(float parameter_2,int parameter_3);
void v_media_visualize_set( long parameter_1,long parameter_2);
void v_media_mute_set( char parameter_1,unsigned int parameter_2);
void v_media_volume_set( short parameter_1,double parameter_2);
void v__cb_media_vol(unsigned int parameter_2,unsigned int parameter_3,unsigned int parameter_4);
long v__cb_media_pos(int parameter_2,char parameter_3,int parameter_4);
unsigned int v__cb_media_pos_drag_stop(char parameter_2,char parameter_3,char parameter_4);
float v__cb_media_pos_drag_start(unsigned int parameter_2,int parameter_3,int parameter_4);
void v_media_stop( double parameter_1);
long v__cb_media_stop(long parameter_2,double parameter_3,char parameter_4);
char v__cb_media_pause(double parameter_2,long parameter_3,long parameter_4);
void v_media_play_set( unsigned int parameter_1,float parameter_2);
int v__cb_media_play(double parameter_2,short parameter_3,short parameter_4);
void v_media_position_set( int parameter_1,double parameter_2);
char v__cb_mov_ref(int parameter_2);
short v__cb_mov_progress(float parameter_2);
int v__cb_mov_restart();
long v__cb_mov_decode_stop(float parameter_2);
short v__cb_mov_len_change(float parameter_2);
int v__cb_mov_frame_resize(float parameter_2);
long v__cb_mov_frame_decode(short parameter_2);
char v__type_mov_init( int parameter_1);
unsigned int v__cb_edje_preloaded(long parameter_2,double parameter_3,long parameter_4);
short v__type_edje_init( float parameter_1);
char v__type_scale_init( int parameter_1);
void v__cb_img_frame();
float v__type_img_anim_handle( double parameter_1);
short v__cb_img_preloaded(long parameter_2,char parameter_3);
char v__type_img_init( int parameter_1);
long v__url_compl_cb(int parameter_2);
short v__url_prog_cb(int parameter_2);
char v__type_thumb_calc( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,double parameter_4,int parameter_5);
unsigned int v__type_mov_calc( long parameter_1,long parameter_2,float parameter_3,int parameter_4,double parameter_5);
float v__type_edje_calc( float parameter_1,short parameter_2,int parameter_3,float parameter_4,int parameter_5);
short v__type_img_calc( int parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5);
int v__cb_scale_preloaded(unsigned int parameter_2,float parameter_3);
double v__type_scale_calc( long parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4,float parameter_5,int uni_para);
short v__unsmooth_timeout(int uni_para);
unsigned int v__smooth_handler(int uni_para);
double v__smart_calculate( long parameter_1,int uni_para);
char v__smart_move( long parameter_1,char parameter_2,float parameter_3);
char v__smart_resize( unsigned int parameter_1,float parameter_2,long parameter_3);
void v__smart_del( long parameter_1);
short v__smart_add( char parameter_1);
double v__smart_init(int uni_para);
float v_media_add( long parameter_1,float parameter_2,char parameter_3,int parameter_4,long parameter_5,int uni_para);
int v__block_media_activate( long parameter_1,char parameter_2,int uni_para);
unsigned int v__block_edje_message_cb(long parameter_2,short parameter_3,int parameter_4);
void v_termpty_write( long parameter_1,long parameter_2,int parameter_3);
char v__block_edje_signal_cb(short parameter_2,int parameter_3,int parameter_4);
void v_termpty_block_chid_update( double parameter_1,float parameter_2);
void v__block_edje_cmds( long parameter_1,int parameter_2,double parameter_3,char parameter_4);
long v_homedir_get( char parameter_1,long parameter_2);
char v__block_edje_activate( unsigned int parameter_1,double parameter_2);
long v__block_activate( double parameter_1,char parameter_2,int uni_para);
short v_termpty_block_get( short parameter_1,int parameter_2);
int v_termpty_block_id_get( unsigned int parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( unsigned int parameter_1,int parameter_2);
long v__smart_apply( double parameter_1,int uni_para);
int v__smart_cb_change(int uni_para);
long v__smart_update_queue( int parameter_1,int parameter_2,int uni_para);
char v__lost_selection_reset_job();
unsigned int v__lost_selection(long parameter_2,int uni_para);
unsigned int v__take_selection_text( int parameter_1,unsigned int parameter_2,float parameter_3,int uni_para);
char v__cb_ctxp_link_content_copy(double parameter_2);
void v_ty_sb_free( float parameter_1);
short v_ty_sb_steal_buf( int parameter_1);
int v_codepoint_to_utf8( char parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( long parameter_1);
int v_ty_sb_add( char parameter_1,unsigned int parameter_2,double parameter_3);
void v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,int parameter_3);
unsigned int v_termpty_cellrow_get( short parameter_1,int parameter_2,unsigned int parameter_3);
int v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,float parameter_7);
double v__cb_ctxp_link_open(float parameter_2);
void v__should_inline( long parameter_1);
void v_link_is_email( char parameter_1);
short v_link_is_protocol( long parameter_1);
void v_link_is_url();
unsigned int v__activate_link( float parameter_1,float parameter_2);
short v__cb_ctxp_link_preview(long parameter_2);
short v__is_fmt( char parameter_1,long parameter_2);
double v_media_src_type_get( char parameter_1);
int v__mouse_in_selection( unsigned int parameter_1,int parameter_2,int parameter_3);
long v__smart_xy_to_cursor( float parameter_1,char parameter_2,double parameter_3,int parameter_4,int parameter_5);
int v__cb_link_down(long parameter_2,char parameter_3,int uni_para);
long v_main_term_popup_exists( long parameter_1);
char v__update_link( double parameter_1,short parameter_2,int parameter_3,double parameter_4,int uni_para);
double v__remove_links( char parameter_1,float parameter_2,int uni_para);
int v__sel_set( int parameter_1,float parameter_2);
int v_termio_scroll_get( float parameter_1);
void v_miniview_position_offset( double parameter_1,int parameter_2,long parameter_3);
void v_term_miniview_get( short parameter_1);
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4);
double v_termpty_save_new( long parameter_1,int parameter_2);
unsigned int v_termpty_save_expand( long parameter_1,short parameter_2,long parameter_3);
char v__termpty_cell_is_empty( float parameter_1);
float v_termpty_line_length( unsigned int parameter_1,long parameter_2);
float v_verify_beacon( char parameter_1,int parameter_2);
void v_termpty_text_save_top( short parameter_1,double parameter_2,unsigned int parameter_3);
void v_termpty_text_scroll( unsigned int parameter_1,short parameter_2);
void v_termpty_text_scroll_test( unsigned int parameter_1,unsigned int parameter_2);
char v__cursor_to_start_of_line( char parameter_1);
int v__tab_forward( int parameter_1,int parameter_2);
void v__handle_cursor_control( unsigned int parameter_1,long parameter_2);
int v_termpty_handle_seq( float parameter_1,long parameter_2,long parameter_3,int uni_para);
void v_termpty_handle_buf( float parameter_1,int parameter_2,int parameter_3,int uni_para);
void v_theme_reload( float parameter_1);
int v_theme_reload_cb(unsigned int parameter_2,long parameter_3,int parameter_4);
void v_theme_auto_reload_enable( unsigned int parameter_1);
void v__cursor_shape_to_group_name( int parameter_1);
unsigned int v_config_theme_path_default_get();
int v_theme_path_get();
int v_config_theme_path_get( float parameter_1);
double v_theme_apply( int parameter_1,long parameter_2,double parameter_3);
void v_termio_set_cursor_shape( char parameter_1,double parameter_2);
void v_termpty_clear_tabs_on_screen( float parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( char parameter_1,int parameter_2);
long v__ts_free();
void v_termpty_save_free();
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( long parameter_1);
void v_termpty_reset_att( short parameter_1);
long v_termio_config_get( double parameter_1);
void v_termpty_reset_state( int parameter_1);
void v_termpty_resize_tabs( int parameter_1,int parameter_2,int parameter_3);
double v__termpty_init( long parameter_1);
int v__add_default_keys( double parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,float parameter_5,unsigned int parameter_6);
double v_config_new();
char v__termpty_shutdown()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_3 = int_1 + int_2;
	return char_1;
}
void v_termpty_text_scroll_rev_test( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		v_termpty_text_scroll_rev(float_1,float_1);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
		int_3 = int_2 * int_1;
		int_1 = int_2 + int_3;
	}
}
int v__handle_esc_dcs( float parameter_1,unsigned int parameter_2,long parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	long long_3 = 1;
	char_1 = v__safechar(double_1);

	long_2 = long_1 + long_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					int int_2 = 1;
					int_2 = int_1 + int_1;
				}
				if(1)
				{
					short short_1 = 1;
					short short_2 = 1;
					short_1 = short_2;
				}
			}
		}
		if(1)
		{
			int_3 = int_1;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			v_termpty_write(long_3,long_1,int_3);

			char_3 = char_2 * char_3;
		}
		if(1)
		{
		}
		char controller_9[3];
		fgets(controller_9 ,3 ,stdin);
		if( strcmp( controller_9, ":+") < 0)
		{
			short short_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			short_5 = short_3 + short_4;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
	}
	return int_1;
}
double v__handle_op_a( unsigned int parameter_1,double parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	char_3 = char_1 + char_2;
	return double_3;
}
unsigned int v__termpty_ext_handle( int parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_2;
	float_3 = float_1 + float_2;
	return unsigned_int_1;
	double_1 = v__handle_op_a(unsigned_int_1,double_2,unsigned_int_1);

}
void v__handle_esc_terminology( char parameter_1,float parameter_2,short parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long_1 = v_termio_config_get(double_1);

	char_1 = char_1 + char_1;
	unsigned_int_1 = v__termpty_ext_handle(int_1,double_1,long_1);

}
short v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_2 + short_1;
	}
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	float_2 = float_1 + float_2;
	double_2 = double_3 * double_3;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_1 * double_4;
	}
	long_1 = long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_4 = short_3 + short_1;
	int_2 = int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	return short_1;
}
char v__smart_calculate_226( int parameter_1)
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
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 * short_1;
	short_2 = short_2 + short_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	float_4 = float_3 * float_3;
	long_1 = long_1 + long_1;
	return char_1;
}
int v__smart_size( double parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_7 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_2;
	if(1)
	{
		char char_1 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
		double_2 = double_2;
	}
	if(1)
	{
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "<") > 0)
		{
		}
	}
	short_2 = short_1 * short_2;
	double_3 = double_1 + double_1;
	double_2 = double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	char_2 = v__smart_calculate_226(int_1);

	int_3 = int_2 + int_1;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "J*") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		int_1 = v__sel_set(int_2,float_1);

		long_1 = long_1 + long_2;
	}
	double_2 = double_1 + double_1;
	int_5 = int_4 + int_3;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	v_termpty_resize(unsigned_int_2,int_1,int_6);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	long_3 = v__smart_apply(double_4,-1 );

	int_2 = int_7;
	return int_7;
}
void v_colors_term_init( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_2;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_6 = 1;
		float_1 = float_1 * float_3;
		if(1)
		{
			char char_1 = 1;
			unsigned int unsigned_int_4 = 1;
			char_1 = char_1 + char_1;
			unsigned_int_2 = unsigned_int_1;
			int_2 = int_1 * int_1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			double_1 = double_1;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				double_2 = double_2 + double_1;
				int_1 = int_1 + int_2;
				unsigned_int_3 = unsigned_int_2;
				int_4 = int_3 + int_2;
				unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
			}
		}
		int_1 = int_2 + int_2;
		unsigned_int_3 = unsigned_int_6;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int int_5 = 1;
			int_5 = int_3 + int_3;
			if(1)
			{
				short_1 = short_1 + short_1;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			float float_6 = 1;
			float_6 = float_4 * float_5;
			if(1)
			{
				long_1 = long_2 * long_2;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int int_6 = 1;
		int int_7 = 1;
		short short_2 = 1;
		int_7 = int_6 * int_2;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_3 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int_6 = int_4;
			double_2 = double_3;
			double_3 = double_4 * double_5;
			long_3 = long_2 * long_1;
			double_7 = double_1 * double_6;
		}
		short_1 = short_1 + short_2;
	}
}
void v_termio_config_update( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_6 = 1;
	short short_3 = 1;
	char char_7 = 1;
	float float_3 = 1;
	double_1 = double_1 * double_2;
	long_1 = long_1 * long_2;
	v_termpty_backlog_size_set(char_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	if(1)
	{
		int_2 = v__smart_size(double_3,int_2,int_1,unsigned_int_1);

		char_1 = char_2;
	}
	char_3 = char_3 * char_2;
	if(1)
	{
		int_1 = int_3 * int_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		v_termio_set_cursor_shape(char_2,double_1);

		short_2 = short_1 + short_1;
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_2 * int_4;
	v_colors_term_init(float_2,unsigned_int_3,int_4);

	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	int_3 = int_3 + int_3;
	char_5 = char_4 + char_2;
	int_6 = int_5 + int_5;
	int_6 = int_5 + int_7;
	char_1 = char_5 + char_6;
	float_1 = float_1;
	if(1)
	{
		short_3 = short_1 + short_3;
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_2 * double_4;
	}
	short_1 = short_3 * short_3;
	char_4 = char_7;
	short_2 = short_3 * short_1;
	float_1 = float_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
}
float v__font_size_set( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	long_2 = long_1 + long_2;
	long_1 = long_1 * long_3;
	char_1 = char_2;
	v_termio_config_update(long_3);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		int int_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_5 = 1;
		int_4 = int_1 * int_2;
		double_4 = double_2 + double_3;
		short_3 = short_1 + short_2;
		double_3 = double_3 + double_2;
		float_3 = float_1 + float_2;
		int_3 = int_5 + int_4;
	}
	return float_4;
}
void v_termio_font_size_set( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = v__font_size_set(int_1,int_1);

	unsigned_int_1 = unsigned_int_1;
}
short v__handle_xterm_50_command( char parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	v_termio_font_size_set(char_1,int_1);

	int_2 = int_2 + int_1;
	return short_1;
}
int v__eina_unicode_to_hex( short parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "za") < 0)
	{
	}
	if(1)
	{
	}
	return int_1;
}
void v__xterm_parse_color( char parameter_1,float parameter_2,float parameter_3,unsigned int parameter_4,int parameter_5)
{
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short_1 = short_1 * short_1;
	int_1 = v__eina_unicode_to_hex(short_2);

	long_2 = long_1 * long_1;
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		double double_1 = 1;
		int int_4 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_2 = 1;
		float float_3 = 1;
		long_3 = long_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
		int_2 = int_2 * int_2;
		double_1 = double_1 * double_1;
		if(1)
		{
			double_2 = double_2 * double_2;
		}
		double_1 = double_3 + double_1;
		int_3 = int_3 + int_4;
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
		double_1 = double_2 + double_2;
		if(1)
		{
			int_2 = int_2;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		char_1 = char_2 + char_2;
		if(1)
		{
			unsigned_int_6 = unsigned_int_6;
		}
		short_2 = short_2 + short_1;
		long_4 = long_1;
		if(1)
		{
			float_2 = float_1 * float_2;
		}
		float_3 = float_1 * float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		double double_6 = 1;
		int_2 = int_1 + int_3;
		if(1)
		{
			char char_3 = 1;
			char_1 = char_1 * char_3;
		}
		unsigned_int_7 = unsigned_int_1 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_7 * unsigned_int_7;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_3 + short_1;
		}
		double_4 = double_3 + double_3;
		double_6 = double_5 + double_3;
		if(1)
		{
			unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
		}
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_2 * float_2;
	}
	double_2 = double_5 * double_4;
}
int v__xterm_arg_get( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_2;
	float_2 = float_1 + float_1;
	char_1 = char_1 + char_1;
	char_2 = char_1 + char_2;
	long_2 = long_3 * long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	long_1 = long_2 + long_4;
	int_1 = int_1 + int_1;
	int_2 = int_3;
	double_1 = double_1 + double_2;
	int_2 = int_1 * int_3;
	short_1 = short_3 + short_2;
	int_1 = int_4 + int_3;
	int_1 = int_4 + int_2;
	float_3 = float_2 * float_1;
	double_3 = double_3 * double_3;
	char_1 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_5;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_4;
	return int_2;
}
float v__handle_esc_xterm( long parameter_1,char parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	short short_4 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
	if(1)
	{
		short_3 = short_2 + short_3;
	}
	int_3 = int_1 + int_2;
	long_1 = long_1 + long_1;
	char_2 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_4;
	}
	int_1 = v__xterm_arg_get(double_1);

	int_5 = int_4 * int_2;
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	unsigned_int_7 = unsigned_int_3 * unsigned_int_2;
	int_4 = int_6 + int_5;
	short_1 = short_4 + short_2;
	double_2 = double_1 + double_1;
	v__xterm_parse_color(char_1,float_1,float_2,unsigned_int_1,int_3);

	unsigned_int_2 = unsigned_int_7 + unsigned_int_2;
	if(1)
	{
		unsigned_int_7 = unsigned_int_8 * unsigned_int_5;
	}
	if(1)
	{
		float float_3 = 1;
		int_6 = int_3 * int_5;
		float_2 = float_1 * float_3;
		short_2 = v__handle_xterm_777_command(char_3,char_4,int_2);

		short_4 = short_4 + short_4;
	}
	if(1)
	{
		unsigned_int_9 = unsigned_int_7 * unsigned_int_5;
	}
	if(1)
	{
		float float_4 = 1;
		long_2 = v_termio_config_get(double_1);

		float_2 = float_4 * float_4;
	}
	int_3 = int_5 * int_2;
	char_4 = char_5 + char_6;
	if(1)
	{
		char_6 = char_7 * char_1;
	}
	if(1)
	{
		int_4 = v_termio_textgrid_get(double_1);

		unsigned_int_5 = unsigned_int_9 + unsigned_int_8;
	}
	if(1)
	{
		float float_5 = 1;
		float_2 = float_5 + float_5;
		long_2 = long_1;
	}
	if(1)
	{
		short_3 = v__handle_xterm_50_command(char_1,char_5,int_1);

		short_3 = short_4;
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	char_7 = char_5;
	v_termpty_write(long_2,long_1,int_1);

	int_2 = int_5 + int_2;
	return float_1;
}
void v_termpty_cells_set_content( short parameter_1,char parameter_2,short parameter_3,int parameter_4)
{
	char char_1 = 1;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = double_1 + double_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
}
long v__handle_esc_csi_decera( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	v_termpty_cells_set_content(short_1,char_1,short_1,int_1);

	short_2 = short_1 + short_2;
	double_2 = double_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	double_3 = double_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_2 = short_2 + short_3;
		double_2 = v__clean_up_rect_coordinates(short_4,int_2,int_2,int_3,int_2);

		long_1 = long_1 + long_2;
	}
	return long_3;
	char_1 = v__csi_arg_get(short_2);

}
void v_termpty_cells_att_fill_preserve_colors( long parameter_1,float parameter_2,double parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_2 = short_1 + short_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_2 = 1;
		long_2 = long_1 + long_2;
		int_1 = int_2;
		int_1 = int_2 * int_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float_2 = float_1 + float_1;
			short_4 = short_3 * short_2;
			float_2 = float_1 * float_1;
			long_3 = long_2 * long_3;
			short_1 = short_1 + short_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
}
double v__clean_up_rect_coordinates( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = double_2;
	long_1 = long_1 * long_2;
	short_1 = short_1 * short_2;
	double_2 = double_1 * double_2;
	double_4 = double_3 + double_2;
	double_3 = double_3;
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		short_3 = short_2 + short_3;
	}
	if(1)
	{
		short_4 = short_3 + short_4;
		if(1)
		{
			double_2 = double_3 + double_4;
		}
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		short short_5 = 1;
		short_2 = short_4 + short_5;
		if(1)
		{
			char_2 = char_2 + char_2;
		}
	}
	int_1 = int_3;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_1 = char_3 + char_4;
	}
	if(1)
	{
	}
	double_4 = double_3;
	long_5 = long_4 + long_1;
	int_2 = int_4 + int_3;
	double_2 = double_5 * double_6;
	return double_5;
}
float v__handle_esc_csi_decfra( double parameter_1,double parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float_1 = float_1 + float_1;
	v_termpty_cells_att_fill_preserve_colors(long_1,float_1,double_1,int_1);

	double_2 = double_2;
	char_1 = char_2;
	char_1 = v__csi_arg_get(short_1);

	int_2 = int_2 + int_2;
	long_2 = long_1 * long_1;
	int_1 = int_2 + int_2;
	int_1 = int_2 + int_3;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "dN") < 0)
	{
	}
	double_3 = double_3 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_6 = 1;
		double_2 = v__clean_up_rect_coordinates(short_1,int_4,int_2,int_2,int_5);

		int_1 = int_3 * int_5;
		int_6 = int_5;
	}
	return float_1;
}
int v__handle_esc_csi_decslrm( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	double_1 = double_2;
	short_1 = short_1 + short_1;
	long_1 = long_1 * long_1;
	double_3 = double_3;
	if(1)
	{
		char char_2 = 1;
		char_1 = v__csi_arg_get(short_2);

		char_1 = char_2 + char_2;
	}
	double_3 = double_2 * double_3;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Nw") < 0)
	{
		int_1 = v__move_cursor_to_origin(long_1);

		double_1 = double_1 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_3 = char_3 * char_4;
	}
	int_3 = int_2 + int_3;
	long_2 = long_1 + long_2;
	short_2 = short_3;
	long_2 = long_2 + long_3;
	int_2 = int_3 * int_1;
	return int_3;
}
void v__handle_esc_csi_decstbm( long parameter_1,double parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	short short_3 = 1;
	float float_3 = 1;
	long long_3 = 1;
	int_1 = v__move_cursor_to_origin(long_1);

	long_1 = long_2 + long_2;
	short_1 = short_2;
	double_2 = double_1 + double_1;
	int_4 = int_2 + int_3;
	int_3 = int_1 * int_1;
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		long_1 = long_2 * long_2;
	}
	char_1 = char_2 + char_3;
	char_1 = char_1;
	float_2 = float_1 + float_2;
	char_4 = v__csi_arg_get(short_3);

	float_1 = float_2 + float_3;
	long_3 = long_2 + long_1;
}
unsigned int v__handle_esc_csi_decscusr( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_1;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_1;
	short_3 = short_1 + short_2;
	int_3 = int_4 * int_5;
	double_2 = double_2;
	v_termio_set_cursor_shape(char_1,double_3);

	int_6 = int_4 + int_2;
	double_5 = double_3 + double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_6 = int_6 + int_6;
	short_4 = short_1 + short_4;
	float_1 = float_1 + float_2;
	char_1 = v__csi_arg_get(short_5);

	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_4;
}
void v__handle_esc_csi_dsr( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		double_1 = double_1;
		char_1 = char_1 * char_1;
		char_1 = v__csi_arg_get(short_1);

		double_1 = double_2;
		double_3 = double_2 + double_1;
		int_2 = int_2;
		unsigned_int_2 = unsigned_int_3;
		char_1 = char_2 * char_3;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char_1 = char_3;
		short_3 = short_2 + short_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		v_termpty_write(long_1,long_2,int_3);

		float_3 = float_1 + float_2;
		long_1 = long_2 + long_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	}
}
char v__handle_esc_csi_truecolor_cmyk( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	char char_2 = 1;
	float_1 = float_1 + float_1;
	short_2 = short_1 * short_2;
	char_1 = v__csi_truecolor_arg_get(short_3);

	double_2 = double_1 + double_2;
	double_1 = double_3;
	long_1 = long_1;
	if(1)
	{
	}
	double_4 = double_2 * double_4;
	int_1 = int_1;
	int_3 = int_2 + int_1;
	short_2 = short_2 + short_1;
	long_1 = v__approximate_truecolor_rgb(double_4,int_2,int_4,int_5);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_5 * double_1;
	return char_2;
}
float v__handle_esc_csi_truecolor_cmy( char parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	double double_6 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_2;
	int_2 = int_1 + int_2;
	char_1 = v__csi_truecolor_arg_get(short_1);

	int_1 = int_2 + int_3;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	double_3 = double_3 * double_4;
	long_3 = long_1 * long_2;
	long_4 = v__approximate_truecolor_rgb(double_5,int_4,int_4,int_2);

	double_6 = double_6 + double_6;
	return float_1;
}
long v__approximate_truecolor_rgb( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_3 = char_1 + char_2;
		}
		if(1)
		{
			double double_2 = 1;
			double_1 = double_2 + double_1;
			if(1)
			{
				char char_4 = 1;
				char_4 = char_3 * char_3;
			}
		}
	}
	return long_1;
	int_3 = v_termio_textgrid_get(double_3);

}
char v__csi_truecolor_arg_get( short parameter_1)
{
	char char_1 = 1;
	return char_1;
}
void v__handle_esc_csi_truecolor_rgb( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double_1 = double_2;
	short_2 = short_1 + short_1;
	int_1 = int_1;
	int_1 = int_1 * int_1;
	int_2 = int_2 + int_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 + int_2;
		short_2 = short_2 + short_1;
		short_1 = short_2;
	}
	if(1)
	{
	}
	char_1 = v__csi_truecolor_arg_get(short_2);

	long_1 = v__approximate_truecolor_rgb(double_1,int_2,int_2,int_1);

}
char v__handle_esc_csi_color_set( char parameter_1,long parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char_1 = v__csi_arg_get(short_1);

	float_1 = v__handle_esc_csi_truecolor_cmy(char_1,char_1);

	int_1 = int_1;
	v_termpty_reset_att(short_1);

	v__handle_esc_csi_truecolor_rgb(unsigned_int_1,unsigned_int_1);

	int_4 = int_2 + int_3;
	return char_2;
	char_3 = v__handle_esc_csi_truecolor_cmyk(char_1,long_1);

}
void v_termpty_cursor_copy( short parameter_1,char parameter_2)
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "w2") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_1 * int_2;
		int_1 = int_4;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		double_1 = double_1 * double_1;
		double_1 = double_2;
		long_1 = long_2;
		double_3 = double_2 * double_2;
	}
}
int v__switch_to_alternative_screen( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_termpty_screen_swap(double_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	return int_1;
}
int v__move_cursor_to_origin( long parameter_1)
{
	int int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		short_2 = short_1 * short_2;
		double_1 = double_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "sZ") == 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_2 = char_1 + char_1;
		char_2 = char_3 * char_3;
	}
	return int_1;
}
int v__pty_size( double parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_1;
	short_1 = short_1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	return int_1;
}
void v__limit_coord( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 + double_2;
	int_1 = int_1 * int_2;
	double_2 = double_1 + double_2;
	short_2 = short_1 + short_2;
	double_5 = double_3 * double_4;
	float_3 = float_1 + float_2;
	int_1 = int_1 + int_1;
}
double v__check_screen_info( short parameter_1,short parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	if(1)
	{
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		v_termpty_text_save_top(short_1,double_1,unsigned_int_1);

		double_1 = double_2 + double_3;
		int_3 = int_1 + int_2;
		char_1 = char_1 * char_1;
		int_3 = int_1 * int_3;
		char_1 = char_1 + char_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		v_termpty_cells_clear(unsigned_int_1,double_4,int_3);

		char_2 = char_1 * char_1;
	}
	return double_2;
}
void v__termpty_line_rewrap( long parameter_1,long parameter_2,int parameter_3,double parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1;
	double_2 = v__check_screen_info(short_1,short_2);

	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
char v__backlog_remove_latest_nolock( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_2;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	if(1)
	{
		float_1 = v_verify_beacon(char_1,int_4);

		float_2 = float_2;
	}
	if(1)
	{
		float_2 = float_3;
	}
	v_termpty_save_free();

	float_3 = float_2 * float_2;
	int_3 = int_3;
	char_3 = char_3;
	long_2 = long_1 + long_1;
	return char_1;
}
int v_termpty_save_extract( char parameter_1)
{
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			float float_1 = 1;
			int int_1 = 1;
			double double_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			long_1 = long_1 + long_2;
			long_1 = long_1 + long_1;
			double_1 = double_1 + double_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
			}
			float_1 = float_1 * float_1;
			int_2 = int_1 * int_1;
			double_2 = double_1 * double_1;
			if(1)
			{
				double double_3 = 1;
				double_2 = double_1 * double_3;
			}
		}
	}
	return int_2;
}
double v__termpty_line_is_empty( unsigned int parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		char_1 = v__termpty_cell_is_empty(float_1);

		double_1 = double_1 * double_1;
		if(1)
		{
		}
	}
	return double_2;
}
void v_termpty_screen_swap( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_2 = int_1 + int_1;
	char_1 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_2 + int_2;
	int_5 = int_3 * int_4;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1;
	long_1 = long_4 * long_3;
	char_1 = char_2;
	if(1)
	{
		int int_6 = 1;
		int_5 = int_6 * int_5;
	}
}
void v_termpty_resize( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_8 = 1;
	short short_3 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_8 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 * char_1;
	v_termpty_resize_tabs(int_1,int_1,int_1);

	char_3 = v__backlog_remove_latest_nolock(float_1);

	int_1 = int_1 * int_1;
	float_2 = v_verify_beacon(char_1,int_2);

	long_1 = long_1 * long_2;
	if(1)
	{
	}
	int_2 = int_1;
	if(1)
	{
		int_1 = int_3 + int_1;
		double_2 = double_1 + double_1;
	}
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	float_2 = float_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	int_4 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	float_1 = v_termpty_line_length(unsigned_int_4,long_1);

	double_3 = double_3 * double_2;
	double_3 = double_1 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_2 * double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
			int_1 = int_2 + int_2;
		}
	}
	double_4 = double_2 * double_1;
	if(1)
	{
		double_1 = double_4;
	}
	double_4 = double_4 + double_3;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		float_1 = float_1 + float_3;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_3;
		if(1)
		{
			long long_3 = 1;
			long long_5 = 1;
			double double_5 = 1;
			long_5 = long_3 * long_4;
			int_4 = int_5 + int_2;
			int_1 = v_termpty_save_extract(char_2);

			double_5 = double_2 * double_3;
			int_1 = int_2 * int_5;
			if(1)
			{
				double_4 = v__termpty_line_is_empty(unsigned_int_7,float_1);

				long_1 = long_6 + long_1;
			}
			float_2 = float_1 * float_3;
			unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
			char_1 = char_3 * char_2;
			v_termpty_backlog_unlock();

			short_1 = short_2;
			double_6 = double_3 + double_3;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
			v_termpty_backlog_lock();

			char_3 = char_3;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_8 = 1;
		double_4 = double_6 + double_7;
		unsigned_int_8 = unsigned_int_7;
		v_termpty_screen_swap(double_3);

		unsigned_int_6 = unsigned_int_7 + unsigned_int_3;
		int_1 = int_1;
	}
	float_4 = float_1;
	int_7 = int_4 + int_6;
	int_7 = v__pty_size(double_8);

	int_6 = int_5 + int_4;
	int_3 = int_7 * int_2;
	long_4 = long_6;
	short_3 = short_2 + short_2;
	int_1 = int_5 * int_2;
	v__termpty_line_rewrap(long_4,long_7,int_5,double_7,unsigned_int_9);

	char_4 = char_3 * char_4;
	if(1)
	{
		double double_9 = 1;
		double_2 = double_9 + double_6;
	}
	unsigned_int_10 = unsigned_int_10;
	int_1 = int_1 * int_2;
	int_8 = int_2 + int_3;
	short_3 = short_2 * short_1;
	int_2 = int_6 + int_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_10;
	long_1 = long_4 * long_1;
	int_7 = int_7 * int_5;
	v__limit_coord(float_3);

}
unsigned int v_termio_win_get( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_2;
	int_4 = int_2 * int_3;
	return unsigned_int_1;
}
void v__handle_esc_csi_reset_mode( char parameter_1,long parameter_2,long parameter_3,int uni_para)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	v_termpty_clear_screen(double_1,short_1,uni_para);

	int_1 = int_1;
	int_1 = int_1 + int_1;
	char_1 = char_2;
}
short v__handle_esc_csi_cursor_pos_set( char parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	char char_2 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_2;
	int_2 = int_1 + int_1;
	float_2 = float_1 + float_1;
	char_1 = char_1 * char_1;
	int_4 = int_3 * int_3;
	int_1 = int_2;
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		double_1 = double_1;
		if(1)
		{
			int_3 = int_4 + int_1;
		}
	}
	if(1)
	{
		int_3 = int_2;
	}
	short_2 = short_2 * short_3;
	double_1 = double_1 * double_2;
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 + double_2;
	}
	if(1)
	{
		float_1 = float_2 * float_1;
		if(1)
		{
			int_4 = int_2;
		}
	}
	if(1)
	{
		short short_5 = 1;
		char_2 = v__csi_arg_get(short_4);

		short_5 = short_1 * short_1;
	}
	int_5 = int_3 + int_2;
	return short_4;
}
void v_termpty_text_scroll_rev( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		float_2 = float_1 * float_1;
	}
	char_1 = char_1 * char_1;
	v_termpty_cells_clear(unsigned_int_1,double_1,int_2);

	int_4 = int_3 * int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_6 = 1;
		long_2 = long_1 * long_2;
		if(1)
		{
			double_2 = double_3;
		}
		v_termio_scroll(float_3,int_3,int_5,int_5);

		int_1 = int_2 * int_6;
		if(1)
		{
			int int_7 = 1;
			int_2 = int_2 * int_7;
		}
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_4 = 1;
			float float_4 = 1;
			char_1 = char_2 * char_2;
			unsigned_int_4 = unsigned_int_1;
			float_4 = float_2 * float_2;
		}
		if(1)
		{
			double double_4 = 1;
			double_3 = double_4 + double_2;
		}
	}
}
void v_termpty_clear_line( int parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	int_2 = int_1 + int_1;
	short_1 = short_1 * short_1;
	double_2 = double_1 * double_2;
	float_2 = float_1 + float_2;
	float_1 = float_1;
	double_1 = double_1 * double_1;
	long_1 = long_1 + long_1;
	double_3 = double_2 + double_1;
	char_2 = char_1 + char_2;
	double_4 = double_1 + double_4;
	long_1 = long_2 * long_2;
	short_3 = short_2 + short_3;
	char controller4vul_1331[2];
	fgets(controller4vul_1331 ,2 ,stdin);
	if( strcmp( controller4vul_1331, ">") > 0)
	{
		long long_3 = 1;
		v_termio_content_change(float_3,short_1,unsigned_int_1,int_2,uni_para);

		long_1 = long_1 * long_3;
	}
	short_3 = short_1;
	double_5 = double_3;
}
void v_termpty_clear_screen( double parameter_1,short parameter_2,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char controller4vul_1330[3];
	fgets(controller4vul_1330 ,3 ,stdin);
	if( strcmp( controller4vul_1330, "{D") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		v_termpty_clear_line(int_1,short_1,int_2,uni_para);

		double_2 = double_1 + double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	long_1 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_2;
	int_4 = int_3 * int_4;
}
void v_termpty_cell_codepoint_att_fill( char parameter_1,double parameter_2,long parameter_3,short parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		int int_3 = 1;
		short_1 = short_1 + short_1;
		int_3 = int_3 + int_3;
	}
}
unsigned int v__termpty_charset_trans( double parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			double_3 = double_3 * double_3;
		}
		if(1)
		{
			int_2 = int_1 * int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			float_2 = float_2 + float_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			int int_3 = 1;
			int_1 = int_3;
		}
		if(1)
		{
			int int_4 = 1;
			int_1 = int_4 + int_2;
		}
	}
	return unsigned_int_3;
}
void v_termio_content_change( float parameter_1,short parameter_2,unsigned int parameter_3,int parameter_4,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short_2 = short_1 * short_1;
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_4 = short_1 * short_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	char controller4vul_1332[2];
	fgets(controller4vul_1332 ,2 ,stdin);
	if( strcmp( controller4vul_1332, "a") > 0)
	{
		int_3 = int_1 + int_2;
		float_3 = float_1;
		int_2 = int_3 + int_3;
		long_2 = long_1 * long_2;
		float_2 = float_2;
		int_2 = int_1 + int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short_3 = short_4 * short_3;
			char controller4vul_1333[3];
			fgets(controller4vul_1333 ,3 ,stdin);
			if( strcmp( controller4vul_1333, "Ds") < 0)
			{
				float float_4 = 1;
				double_1 = v__remove_links(char_1,float_3,uni_para);

				float_1 = float_4 + float_2;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
			int_1 = int_3 + int_2;
			double_3 = double_1 + double_2;
		}
	}
	if(1)
	{
	}
	double_1 = double_3 * double_1;
	int_5 = int_2 * int_4;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_5 + int_2;
	if(1)
	{
		int_5 = int_1 * int_3;
		short_2 = short_3;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		int_4 = int_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_3 = 1;
			int int_6 = 1;
			long_3 = long_3 * long_1;
			if(1)
			{
				int_2 = int_4 * int_6;
				int_6 = int_5 + int_1;
			}
			unsigned_int_5 = unsigned_int_5;
			int_5 = int_5 * int_6;
		}
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_5 = 1;
		char_1 = char_1 + char_2;
		char_3 = char_3 + char_1;
		unsigned_int_7 = unsigned_int_2 + unsigned_int_6;
		float_1 = float_5 * float_3;
		double_2 = double_2 * double_1;
		if(1)
		{
			long long_4 = 1;
			long_2 = long_2 + long_4;
		}
	}
}
void v_termpty_text_append( int parameter_1,double parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	float float_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	char char_4 = 1;
	long long_4 = 1;
	char_2 = char_1 + char_1;
	float_1 = float_1 * float_1;
	short_1 = v__termpty_is_dblwidth_get(long_1,int_1);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		int_1 = int_2;
	}
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		float_1 = float_2 + float_2;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_3 + double_2;
			short_2 = short_2;
			long_1 = long_1 * long_2;
			char_2 = char_1 * char_2;
			float_2 = float_1 + float_1;
			unsigned_int_1 = unsigned_int_3;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
			}
		}
		float_1 = float_2 + float_1;
		if(1)
		{
			int_2 = int_3;
		}
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "HZ") > 0)
		{
			if(1)
			{
				double_1 = double_2 * double_5;
			}
			short_1 = short_1;
		}
		unsigned_int_4 = unsigned_int_1;
		if(1)
		{
			float float_3 = 1;
			double double_6 = 1;
			float_2 = float_2 + float_3;
			double_6 = double_3 * double_3;
		}
		int_4 = int_4 * int_1;
		if(1)
		{
			v_termio_content_change(float_4,short_3,unsigned_int_5,int_4,-1 );

			unsigned_int_5 = v__termpty_charset_trans(double_5,float_4);

			short_2 = short_3;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_6;
			long_2 = long_1 * long_1;
			if(1)
			{
				float float_5 = 1;
				float_1 = float_5 * float_5;
			}
			if(1)
			{
				long long_3 = 1;
				long_3 = long_3 + long_2;
			}
			if(1)
			{
				char char_3 = 1;
				char_2 = char_2 * char_3;
				unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
			}
		}
		if(1)
		{
			double double_8 = 1;
			int int_5 = 1;
			short_1 = short_3 * short_2;
			v_termpty_text_scroll_test(unsigned_int_7,unsigned_int_3);

			double_8 = double_3 + double_7;
			if(1)
			{
				float float_6 = 1;
				float_6 = float_4;
			}
			int_5 = int_3 + int_3;
			if(1)
			{
				int_1 = int_5 * int_2;
				v_termpty_cell_codepoint_att_fill(char_4,double_7,long_4,short_1,int_2);

				int_2 = int_1;
			}
			unsigned_int_1 = unsigned_int_4;
		}
	}
}
char v__csi_arg_get( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
	int_2 = int_1 * int_1;
	double_2 = double_1 * double_1;
	char_1 = char_1 * char_1;
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3;
	}
	return char_1;
}
double v__handle_esc_csi( long parameter_1,char parameter_2,long parameter_3,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	v__handle_esc_csi_reset_mode(char_1,long_1,long_1,uni_para);

	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2;
	return double_1;
}
char v__safechar( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short_1 = short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_1;
	return char_1;
}
double v__handle_esc( double parameter_1,float parameter_2,long parameter_3,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_4 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	short short_4 = 1;
	float float_6 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	long_2 = long_1;
	float_1 = float_1;
	char_2 = char_1 + char_1;
	int_3 = int_2 * int_1;
	long_1 = long_1;
	short_2 = short_1 * short_1;
	short_3 = short_2 * short_3;
	int_3 = int_3 * int_1;
	float_2 = float_1 * float_1;
	int_2 = int_1 * int_1;
	int_1 = int_1 + int_1;
	int_4 = int_3 + int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_1;
	long_3 = long_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1;
	char_2 = char_2;
	char_2 = char_1 + char_3;
	if(1)
	{
		int_4 = int_5;
	}
	if(1)
	{
	}
	long_1 = long_2 + long_2;
	int_3 = int_1 + int_3;
	int_3 = int_2 + int_1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	double_3 = double_3 + double_4;
	if(1)
	{
	}
	int_6 = int_3 * int_3;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
	}
	double_3 = double_1 + double_5;
	long_5 = long_4 + long_3;
	if(1)
	{
	}
	int_1 = int_6 + int_2;
	char_1 = char_1;
	if(1)
	{
	}
	char controller4vul_1328[3];
	fgets(controller4vul_1328 ,3 ,stdin);
	if( strcmp( controller4vul_1328, "ug") < 0)
	{
		float float_3 = 1;
		double double_6 = 1;
		float float_5 = 1;
		long long_7 = 1;
		char char_4 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		int_3 = int_2 + int_6;
		float_4 = float_3 * float_3;
		double_4 = double_2 * double_6;
		float_5 = float_2 + float_4;
		char controller4vul_1329[2];
		fgets(controller4vul_1329 ,2 ,stdin);
		if( strcmp( controller4vul_1329, "V") < 0)
		{
			double_5 = v__handle_esc_csi(long_6,char_2,long_3,uni_para);

			int_4 = int_5;
		}
		long_7 = long_5 * long_4;
		char_1 = char_4 * char_4;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			int_1 = int_2 + int_3;
			char_4 = char_4;
			unsigned_int_6 = unsigned_int_7;
		}
	}
	if(1)
	{
	}
	unsigned_int_7 = unsigned_int_5 * unsigned_int_5;
	int_7 = int_2 + int_3;
	short_4 = short_2 * short_3;
	float_4 = float_6 * float_2;
	int_6 = int_7 * int_5;
	return double_5;
}
void v_termpty_cell_fill( char parameter_1,double parameter_2,char parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char_2 = char_1 + char_1;
			int_2 = int_1 + int_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
	}
}
void v_termpty_cells_fill( long parameter_1,short parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double_3 = double_1 * double_2;
	short_2 = short_1 * short_1;
	v_termpty_cell_fill(char_1,double_4,char_2,int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_2;
	char_3 = char_3 * char_1;
}
void v_termpty_cells_clear( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_termpty_cells_fill(long_1,short_1,char_1,int_1);

}
void v__tooltip_del(short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_2;
	double_3 = double_2 + double_3;
	double_3 = double_4;
}
short v__tooltip_content(long parameter_2,short parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1 * short_1;
	float_1 = v_media_add(long_1,float_1,char_1,int_1,long_2,-1 );

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1;
	return short_1;
}
void v_MD5Final( double parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = long_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	long_3 = long_2 * long_1;
	int_5 = int_3 + int_4;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1;
		long_1 = long_2;
		long_1 = long_2 * long_3;
		int_4 = int_5 * int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	int_3 = int_5 + int_5;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1;
	float_3 = float_4 + float_3;
	float_3 = float_4 * float_3;
	double_3 = double_1 + double_2;
	v_byteReverse(double_3,char_1);

	v_MD5Transform(unsigned_int_1,long_4);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
}
void v_MD5Transform( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_10 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_4 = 1;
	int int_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_7 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_8 = 1;
	double double_9 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_5 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_12 = 1;
	int_1 = int_1 * int_2;
	char_1 = char_1;
	double_1 = double_1 + double_1;
	int_3 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	int_1 = int_2 + int_3;
	int_3 = int_1;
	int_2 = int_2 + int_4;
	float_1 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_2;
	int_4 = int_4;
	double_2 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_7;
	char_2 = char_1;
	float_3 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_8;
	double_4 = double_3 + double_1;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_3;
	short_2 = short_2 + short_1;
	unsigned_int_9 = unsigned_int_7 * unsigned_int_4;
	double_3 = double_1 * double_1;
	int_2 = int_4 + int_2;
	double_4 = double_3 * double_2;
	long_1 = long_1 * long_1;
	unsigned_int_10 = unsigned_int_2 + unsigned_int_1;
	double_2 = double_1 + double_3;
	long_2 = long_2 * long_3;
	int_5 = int_1 + int_4;
	float_4 = float_5;
	double_6 = double_5 + double_4;
	long_3 = long_4 * long_1;
	int_6 = int_6 * int_1;
	float_2 = float_5 + float_3;
	char_4 = char_3 * char_2;
	short_2 = short_2 + short_3;
	unsigned_int_8 = unsigned_int_11 + unsigned_int_9;
	unsigned_int_1 = unsigned_int_11;
	int_7 = int_1 + int_5;
	long_1 = long_2 * long_4;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
	short_3 = short_1 * short_1;
	int_1 = int_6;
	float_1 = float_5 * float_1;
	short_5 = short_4 * short_2;
	int_7 = int_4 * int_7;
	double_7 = double_7 * double_1;
	int_9 = int_8 + int_4;
	unsigned_int_11 = unsigned_int_6 + unsigned_int_5;
	double_9 = double_8 + double_1;
	int_3 = int_2 + int_9;
	char_1 = char_5 + char_5;
	short_1 = short_5 + short_5;
	float_3 = float_5;
	double_3 = double_2 + double_3;
	double_2 = double_7;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	char_5 = char_6;
	double_6 = double_8 * double_9;
	double_8 = double_7 + double_5;
	float_3 = float_2;
	char_3 = char_2;
	long_1 = long_5;
	float_5 = float_4 * float_3;
	double_10 = double_1 * double_5;
	unsigned_int_4 = unsigned_int_11 * unsigned_int_5;
	int_8 = int_9;
	unsigned_int_11 = unsigned_int_7 * unsigned_int_5;
	unsigned_int_9 = unsigned_int_11 * unsigned_int_12;
}
void v_byteReverse( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 * int_2;
}
void v_MD5Update( float parameter_1,double parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_5 = 1;
	short short_1 = 1;
	float float_3 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	long_3 = long_1 * long_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	long_4 = long_3 * long_4;
	int_4 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_2;
	double_2 = double_1 + double_1;
	long_2 = long_5;
	short_1 = short_1 + short_1;
	float_1 = float_2 * float_3;
	int_5 = int_1 + int_4;
	float_2 = float_1 * float_3;
	short_3 = short_2 + short_2;
	int_5 = int_1 * int_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_3 * double_4;
	short_2 = short_2 + short_3;
	v_byteReverse(double_5,char_3);

	v_MD5Transform(unsigned_int_2,long_6);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_3 + double_6;
}
void v_MD5Init()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_2;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	long_3 = long_1 + long_2;
	short_2 = short_1 * short_1;
}
void v_gravatar_tooltip( double parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	long long_5 = 1;
	short short_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_MD5Init();

	double_2 = double_1 * double_2;
	float_1 = float_1 + float_1;
	double_3 = double_2 + double_2;
	long_2 = long_1 + long_2;
	double_1 = double_2 + double_3;
	short_3 = short_1 + short_2;
	v_MD5Final(double_1,unsigned_int_1);

	char_1 = char_2;
	if(1)
	{
	}
	double_3 = double_1 * double_4;
	if(1)
	{
	}
	char_2 = char_3;
	long_3 = long_4;
	short_4 = v__tooltip_content(long_1,short_4);

	long_5 = long_3 + long_1;
	v__tooltip_del(short_5);

	double_5 = double_4 * double_2;
	double_1 = double_4 * double_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		v_MD5Update(float_1,double_5,float_1);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	}
	int_1 = int_1 + int_2;
	double_1 = double_1 + double_5;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_2;
}
short v__cb_link_drag_done(char parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int_1 = int_1;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	float_1 = float_2;
	return short_1;
}
float v__cb_link_drag_accept(float parameter_2,long parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1 + double_2;
	short_1 = short_2 * short_2;
	return float_1;
}
void v__cb_link_drag_move(int parameter_2,short parameter_3,char parameter_4,short parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long_2 = long_1 + long_2;
	char_2 = char_1 + char_2;
	char_3 = char_2;
	short_3 = short_1 * short_2;
	short_4 = short_3 + short_1;
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
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 * double_2;
		}
	}
}
float v__cb_link_icon_new(unsigned int parameter_2,long parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_2;
	char_1 = char_1;
	short_1 = short_1 + short_2;
	int_3 = int_1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_2;
	return float_1;
}
short v__cb_link_move(unsigned int parameter_2,long parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	long_1 = long_1;
	double_3 = double_1 * double_2;
	float_1 = v__cb_link_drag_accept(float_1,long_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		int int_4 = 1;
		short short_4 = 1;
		v__cb_link_drag_move(int_1,short_1,char_1,short_1);

		short_1 = short_1 + short_1;
		short_1 = short_1 * short_2;
		short_3 = v__cb_link_drag_done(char_1);

		int_3 = int_3;
		if(1)
		{
			float_1 = v__cb_link_icon_new(unsigned_int_2,long_2,short_2);

			int_3 = int_2;
		}
		if(1)
		{
			double_3 = double_1 + double_2;
		}
		int_4 = int_2;
		short_2 = short_4 * short_3;
	}
	return short_1;
}
double v__cb_link_up_delay()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_4 = v__activate_link(float_1,float_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	int_1 = int_1 + int_1;
	return double_1;
}
float v__cb_link_up(short parameter_2,long parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = v__cb_link_up_delay();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_2;
	float_1 = float_1 + float_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_1 = double_2;
		double_3 = double_2;
		int_1 = int_2;
		double_4 = double_2 * double_1;
		if(1)
		{
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			}
			if(1)
			{
				char char_1 = 1;
				char_1 = char_1 * char_1;
			}
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	return float_2;
}
void v_term_focus( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = v__term_is_focused(int_1);

	char_1 = char_2;
	if(1)
	{
	}
	long_1 = long_1;
	double_1 = double_2;
	long_2 = long_2;
}
int v__term_is_focused( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	return int_1;
}
void v_term_unfocus()
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	double_2 = double_1 + double_1;
	int_1 = v__term_is_focused(int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
}
int v__cb_ctxp_del(long parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_term_focus(short_1);

	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1;
	v_term_unfocus();

	double_3 = double_1 + double_2;
	float_3 = float_1 + float_2;
	return int_2;
}
unsigned int v__cb_ctxp_dismissed(unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	long_2 = long_1 + long_1;
	char_2 = char_1 * char_1;
	char_3 = char_2 + char_1;
	return unsigned_int_1;
}
long v__cb_ctxp_link_copy(long parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = v__take_selection_text(int_1,unsigned_int_2,float_1,uni_para);

	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 * char_1;
	float_2 = float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	return long_1;
}
float v__screen_visual_bounds( char parameter_1)
{
	float float_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double_2 = double_1 + double_1;
		float_1 = float_1 + float_1;
	}
	return float_2;
}
long v__draw_cell( int parameter_1,double parameter_2,double parameter_3,char parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		int_2 = int_1;
	}
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_3 = float_1 + float_2;
	double_3 = double_1;
	if(1)
	{
		double double_5 = 1;
		double_5 = double_4 + double_1;
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_4 + double_2;
		}
		if(1)
		{
			int_1 = int_1 + int_3;
		}
	}
	if(1)
	{
		double_2 = double_1;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "KC") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		short short_1 = 1;
		long long_2 = 1;
		unsigned_int_3 = unsigned_int_3;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		short_2 = short_1 * short_2;
		long_2 = long_1 * long_1;
		int_4 = int_4 * int_2;
		double_6 = double_6 * double_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_5;
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_3 + short_3;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_3 * long_1;
	}
	if(1)
	{
		int_2 = int_3 + int_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
		}
		if(1)
		{
			double double_7 = 1;
			double_6 = double_2 * double_7;
		}
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_4;
	}
	return long_1;
}
void v__draw_line( char parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	long_1 = v__draw_cell(int_1,double_1,double_1,char_1);

}
int v_termpty_backlog_length( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_1;
	double_2 = double_1 + double_1;
	int_2 = int_2 * int_2;
	int_1 = int_2 + int_1;
	double_1 = double_3 * double_3;
	float_1 = v_verify_beacon(char_1,int_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_3 * int_3;
	int_1 = int_4;
	int_4 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_3;
	int_1 = int_3 + int_3;
	if(1)
	{
		int int_5 = 1;
		int_5 = int_4 * int_4;
	}
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	long_3 = long_2 * long_3;
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4 + char_1;
	}
	float_1 = float_2 + float_1;
	if(1)
	{
		int_4 = int_4;
	}
	long_1 = long_2 * long_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_4;
	double_4 = double_4 + double_3;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	return int_2;
}
unsigned int v_termio_pty_get( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	double_1 = double_2 * double_1;
	return unsigned_int_1;
}
int v_termio_textgrid_get( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_1;
	long_3 = long_3 + long_3;
	return int_1;
}
long v_miniview_colors_get( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		short_1 = short_1 * short_2;
		int_1 = v_termio_textgrid_get(double_1);

		unsigned_int_2 = unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_3 = 1;
		short_1 = short_2 * short_1;
		short_3 = short_2;
	}
	return long_1;
}
char v__deferred_renderer()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	char char_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_1;
	char_1 = char_1 * char_1;
	double_2 = double_1 * double_1;
	int_2 = int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_2;
	if(1)
	{
	}
	if(1)
	{
		long_2 = long_1 + long_2;
	}
	double_2 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_1 = v_termpty_cellrow_get(short_1,int_1,unsigned_int_2);

	float_2 = float_1 + float_1;
	float_4 = float_3 * float_4;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	long_3 = long_2 + long_2;
	float_1 = float_1 + float_3;
	int_1 = v_termpty_backlog_length(double_3);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	long_4 = long_3 + long_3;
	float_4 = float_4 + float_3;
	int_4 = int_4 + int_4;
	if(1)
	{
		char_3 = char_2 + char_3;
	}
	if(1)
	{
		unsigned_int_3 = v_termio_pty_get(short_2);

		unsigned_int_2 = unsigned_int_5;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = v__screen_visual_bounds(char_2);

		long_4 = long_4 + long_5;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			int_4 = v_termio_scroll_get(float_4);

			unsigned_int_6 = unsigned_int_3 + unsigned_int_4;
		}
		short_1 = short_2 * short_2;
	}
	long_5 = v_miniview_colors_get(float_4,char_3);

	int_5 = int_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
	short_1 = short_3 * short_3;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_3 * char_3;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_4 * short_2;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	double_6 = double_4 * double_5;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_4 + unsigned_int_5;
		double_6 = double_5;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
			char_1 = char_2;
		}
		if(1)
		{
			if(1)
			{
				int int_7 = 1;
				int_4 = int_6 + int_4;
				int_7 = int_5 * int_7;
				unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
				int_7 = int_3 + int_4;
			}
			if(1)
			{
				long long_6 = 1;
				long_6 = long_5 + long_1;
				v__draw_line(char_5,int_5,unsigned_int_8,int_6,char_2);

				long_2 = long_5;
			}
		}
	}
	if(1)
	{
		char_2 = char_5 * char_2;
	}
	double_6 = double_2 + double_1;
	double_3 = double_7 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_2;
	return char_3;
}
char v__queue_render( float parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = v__deferred_renderer();

	double_2 = double_1 * double_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	return char_1;
}
void v_miniview_redraw( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	char_1 = v__queue_render(float_1);

}
char v__block_obj_del( int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	float_1 = v__smart_media_del(float_1,int_1);

	int_1 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_1 + float_2;
	return char_1;
}
short v__termpty_is_dblwidth_slow_get( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
		}
	}
	return short_1;
}
short v__termpty_is_dblwidth_get( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	short_1 = v__termpty_is_dblwidth_slow_get(unsigned_int_1,int_1);

}
int v_term_preedit_str_get( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_2;
	long_1 = long_1 * long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ":7") > 0)
	{
	}
	char_1 = char_1 * char_2;
	int_1 = int_1;
	if(1)
	{
	}
	return int_2;
}
unsigned int v_media_get()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	return unsigned_int_1;
}
unsigned int v__smart_media_clicked(char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_3 * double_3;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					double double_4 = 1;
					unsigned int unsigned_int_4 = 1;
					int_1 = int_1 + int_2;
					double_4 = double_3 + double_4;
					if(1)
					{
						unsigned_int_2 = v_media_get();

						unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
					}
					if(1)
					{
						unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
						double_4 = double_2 * double_2;
						if(1)
						{
							char char_2 = 1;
							char char_3 = 1;
							short short_3 = 1;
							int_2 = int_2 + int_1;
							double_2 = v_media_src_type_get(char_1);

							char_3 = char_2 + char_2;
							short_1 = short_3;
						}
					}
				}
				long_1 = v_termio_config_get(double_3);

				unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			}
		}
	}
	double_3 = double_2 + double_3;
	return unsigned_int_1;
}
float v_media_control_get( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	return float_1;
}
short v__smart_media_stop(short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "}") < 0)
	{
	}
	double_2 = double_1 * double_1;
	return short_1;
}
double v__smart_media_pause(float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "3") > 0)
	{
	}
	float_2 = float_1 + float_1;
	return double_1;
}
char v__smart_media_play(unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	return char_2;
}
float v__smart_media_del(float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	return float_1;
}
void v_media_visualize_set( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_1;
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
		double double_1 = 1;
		double_1 = double_1;
	}
}
void v_media_mute_set( char parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_1 = long_2 * long_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
}
void v_media_volume_set( short parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	int_2 = int_1 * int_2;
}
void v__cb_media_vol(unsigned int parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_1;
	v_media_volume_set(short_1,double_1);

	double_1 = double_2 * double_2;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	int_1 = int_1 + int_1;
}
long v__cb_media_pos(int parameter_2,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_2;
	int_2 = int_1 * int_3;
	if(1)
	{
	}
	long_1 = long_2;
	v_media_position_set(int_2,double_1);

	int_2 = int_3 + int_3;
	return long_1;
}
unsigned int v__cb_media_pos_drag_stop(char parameter_2,char parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_4 = double_3;
	unsigned_int_1 = unsigned_int_1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_3;
	double_5 = double_3 * double_5;
	return unsigned_int_4;
}
float v__cb_media_pos_drag_start(unsigned int parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float_1 = float_1 * float_1;
	float_3 = float_2 * float_3;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
	v_media_position_set(int_2,double_1);

	int_1 = int_3;
	return float_2;
}
void v_media_stop( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	int_3 = int_1 + int_2;
}
long v__cb_media_stop(long parameter_2,double parameter_3,char parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	v_media_stop(double_1);

	char_2 = char_1 + char_2;
	return long_1;
}
char v__cb_media_pause(double parameter_2,long parameter_3,long parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	return char_1;
	v_media_play_set(unsigned_int_1,float_1);

}
void v_media_play_set( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char_1 = char_1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		int_2 = int_1 * int_2;
		short_1 = short_1 + short_1;
	}
}
int v__cb_media_play(double parameter_2,short parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	return int_2;
	v_media_play_set(unsigned_int_1,float_1);

}
void v_media_position_set( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "^") < 0)
	{
	}
	float_1 = float_1 * float_2;
	int_2 = int_1 + int_1;
}
char v__cb_mov_ref(int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	double_1 = double_1;
	return char_1;
}
short v__cb_mov_progress(float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return short_1;
}
int v__cb_mov_restart()
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	return int_2;
}
long v__cb_mov_decode_stop(float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	long_1 = long_1 + long_1;
	long_4 = long_2 + long_3;
	return long_4;
	int_1 = v__cb_mov_restart();

}
short v__cb_mov_len_change(float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	return short_1;
}
int v__cb_mov_frame_resize(float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_1;
	int_2 = int_3 + int_1;
	if(1)
	{
	}
	char_1 = char_2;
	double_2 = double_1 + double_2;
	return int_1;
	unsigned_int_1 = v__type_mov_calc(long_1,long_1,float_1,int_4,double_3);

}
long v__cb_mov_frame_decode(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int_2 = int_1 * int_1;
	int_3 = int_3 + int_2;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	unsigned_int_1 = v__type_mov_calc(long_1,long_1,float_1,int_3,double_1);

	double_1 = double_1 + double_1;
	short_3 = short_3 * short_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	short_4 = short_3 + short_2;
	short_3 = short_5 * short_3;
	short_5 = short_3;
	double_1 = double_2;
	return long_2;
}
char v__type_mov_init( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_4 = 1;
	double double_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	double double_6 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	short short_4 = 1;
	double double_7 = 1;
	int int_10 = 1;
	int int_11 = 1;
	long long_7 = 1;
	short short_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	double_4 = double_3 + double_2;
	long_1 = long_1 * long_2;
	char_1 = char_1 + char_2;
	v_media_play_set(unsigned_int_3,float_1);

	float_1 = float_2 * float_2;
	int_1 = int_1 * int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		long_1 = v__cb_mov_frame_decode(short_1);

		long_2 = v__cb_mov_decode_stop(float_2);

		char_3 = v__cb_media_pause(double_1,long_1,long_1);

		long_3 = v__cb_media_stop(long_3,double_2,char_3);

		char_2 = char_2 * char_3;
		int_1 = int_2;
		float_2 = v__cb_media_pos_drag_start(unsigned_int_2,int_3,int_4);

		int_2 = int_5 * int_6;
	}
	unsigned_int_1 = v__cb_media_pos_drag_stop(char_3,char_4,char_3);

	double_4 = double_2 * double_5;
	char_1 = v__cb_mov_ref(int_1);

	int_7 = int_2 + int_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_4;
	v__cb_media_vol(unsigned_int_3,unsigned_int_1,unsigned_int_2);

	short_1 = short_1;
	int_1 = v__cb_media_play(double_2,short_2,short_3);

	float_2 = float_2 + float_3;
	double_5 = double_1 * double_4;
	if(1)
	{
		char_4 = char_3;
	}
	if(1)
	{
		int_3 = int_2 * int_7;
	}
	double_1 = double_5 + double_5;
	short_2 = v__cb_mov_progress(float_1);

	short_2 = short_3 + short_1;
	long_2 = long_2 + long_3;
	char_5 = char_4;
	char_2 = char_4 + char_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_4;
	double_4 = v_theme_apply(int_1,long_4,double_6);

	double_3 = double_3;
	int_7 = v__cb_mov_frame_resize(float_1);

	long_6 = long_1 + long_5;
	v_media_mute_set(char_4,unsigned_int_2);

	int_8 = int_5 * int_6;
	long_3 = v__cb_media_pos(int_1,char_1,int_1);

	int_8 = int_9;
	int_4 = int_5;
	short_4 = v__cb_mov_len_change(float_2);

	v_media_position_set(int_4,double_7);

	double_5 = double_1 + double_4;
	int_10 = int_7 + int_6;
	int_10 = int_11 + int_5;
	int_9 = int_9 + int_8;
	v_media_visualize_set(long_2,long_7);

	short_4 = short_4 + short_5;
	if(1)
	{
		double double_8 = 1;
		double_1 = double_8 + double_8;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	}
	return char_3;
}
unsigned int v__cb_edje_preloaded(long parameter_2,double parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	char_1 = char_1;
	return unsigned_int_1;
}
short v__type_edje_init( float parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long_1 = long_1 * long_1;
	int_1 = int_1 * int_2;
	double_1 = double_1 + double_2;
	unsigned_int_1 = v__cb_edje_preloaded(long_1,double_3,long_1);

	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_2 + int_2;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	double_3 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_4 = 1;
			double double_5 = 1;
			double_4 = double_1 + double_3;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			double_4 = double_4 + double_5;
		}
	}
	return short_2;
	v_theme_auto_reload_enable(unsigned_int_2);

}
char v__type_scale_init( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	char char_1 = 1;
	short_2 = short_1 + short_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	double_3 = double_1 + double_1;
	int_3 = int_1 * int_2;
	int_4 = v__cb_scale_preloaded(unsigned_int_3,float_1);

	short_1 = short_2 * short_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	double_2 = double_3 * double_1;
	int_5 = int_3 * int_5;
	double_3 = double_3 * double_1;
	short_3 = short_1 + short_3;
	return char_1;
}
void v__cb_img_frame()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	float_3 = float_3 * float_2;
	long_1 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		}
		double_2 = double_2 + double_1;
		short_1 = short_1 + short_1;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "w") < 0)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_1 = char_1 + char_2;
			}
		}
	}
	double_1 = double_1 + double_3;
	long_1 = long_2;
	float_1 = float_1;
}
float v__type_img_anim_handle( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_2;
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	v__cb_img_frame();

	short_2 = short_1 + short_2;
	if(1)
	{
	}
	double_3 = double_3 + double_2;
	int_3 = int_1 + int_2;
	return float_1;
}
short v__cb_img_preloaded(long parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_2;
	return short_1;
}
char v__type_img_init( int parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	long_1 = long_1;
	short_1 = v__cb_img_preloaded(long_2,char_1);

	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 + int_2;
	float_2 = float_1 * float_2;
	double_1 = double_1 + double_2;
	int_3 = int_1 * int_3;
	double_3 = double_3;
	short_2 = short_3;
	double_4 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_4 + int_1;
	float_2 = v__type_img_anim_handle(double_2);

	int_4 = int_1 + int_1;
	return char_1;
}
long v__url_compl_cb(int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char_1 = v__type_scale_init(int_1);

	char_1 = char_1 + char_1;
	int_1 = int_2 + int_1;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = v__type_edje_init(float_1);

	double_1 = v__smart_calculate(long_1,-1 );

	int_3 = int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_1;
	long_3 = long_2 + long_3;
	int_3 = int_4 + int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	char_2 = v__type_img_init(int_2);

	double_2 = double_3;
	int_2 = int_2 * int_3;
	double_1 = double_4;
	float_2 = float_3;
	int_2 = int_3 * int_2;
	char_1 = char_1 + char_3;
	short_2 = short_2 + short_3;
	int_1 = int_4 * int_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	short_5 = short_3 * short_4;
	long_1 = long_4 + long_3;
	int_5 = int_2;
	return long_3;
	char_3 = v__type_mov_init(int_6);

}
short v__url_prog_cb(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = double_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
		short_2 = short_1 + short_2;
		char_1 = char_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float_1 = float_2;
			float_1 = float_1 + float_1;
			long_2 = long_1 + long_2;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
	}
	return short_3;
}
char v__type_thumb_calc( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,double parameter_4,int parameter_5)
{
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
		long long_2 = 1;
		float float_2 = 1;
		long_1 = long_1 * long_2;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_5 = 1;
		double double_3 = 1;
		char_1 = char_1 + char_1;
		int_3 = int_1 * int_2;
		char_2 = char_1 + char_1;
		if(1)
		{
			short_1 = short_1 * short_1;
			long_3 = long_3 + long_3;
			if(1)
			{
				float float_3 = 1;
				float_1 = float_1 * float_3;
			}
		}
		if(1)
		{
			long long_4 = 1;
			char char_3 = 1;
			long_4 = long_1 + long_1;
			char_2 = char_2 + char_3;
		}
		double_2 = double_1 * double_1;
		long_3 = long_3 * long_5;
		int_2 = int_3 * int_2;
		double_3 = double_1 + double_2;
	}
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return char_1;
}
unsigned int v__type_mov_calc( long parameter_1,long parameter_2,float parameter_3,int parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_6 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_2 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_2;
	float_2 = float_1 * float_1;
	float_3 = float_1 + float_3;
	if(1)
	{
		double_2 = double_3 + double_2;
		double_3 = double_1 * double_3;
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_3 = double_4 * double_5;
		char_1 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			char_1 = char_1 * char_1;
		}
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			long long_2 = 1;
			long_1 = long_1 * long_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				long long_3 = 1;
				int int_3 = 1;
				long_2 = long_1 * long_3;
				int_3 = int_3 + int_1;
				if(1)
				{
					int_5 = int_4 + int_1;
				}
			}
		}
		if(1)
		{
			double_3 = double_3 + double_4;
			float_1 = float_1 + float_1;
			if(1)
			{
				long long_4 = 1;
				long long_5 = 1;
				int_6 = int_2 + int_1;
				long_5 = long_4 + long_1;
				if(1)
				{
					double_2 = double_3;
				}
			}
		}
		if(1)
		{
			long_6 = long_7;
			int_7 = int_4 + int_6;
		}
		double_4 = double_3 + double_2;
		short_2 = short_1 + short_2;
		double_3 = double_3 * double_1;
		int_5 = int_1 * int_7;
	}
	unsigned_int_1 = unsigned_int_2;
	long_6 = long_1 + long_7;
	return unsigned_int_2;
}
float v__type_edje_calc( float parameter_1,short parameter_2,int parameter_3,float parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	float_3 = float_1 * float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "po") > 0)
	{
	}
	short_2 = short_1 * short_1;
	int_1 = int_2;
	return float_4;
}
short v__type_img_calc( int parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		long_2 = long_1 * long_1;
		int_2 = int_3 * int_2;
	}
	if(1)
	{
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_6 = 1;
		int_4 = int_3 + int_1;
		if(1)
		{
			long long_4 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			long_4 = long_3 + long_4;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
				long_2 = long_4 + long_3;
				if(1)
				{
					int_1 = int_3 * int_4;
				}
			}
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
			double_1 = double_2;
			if(1)
			{
				long_1 = long_3 * long_2;
				int_4 = int_1;
				if(1)
				{
					float float_3 = 1;
					float_3 = float_3;
				}
			}
			if(1)
			{
				short short_2 = 1;
				double_2 = double_1;
				short_1 = short_1 + short_2;
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
			double_1 = double_2 * double_1;
		}
		int_5 = int_3 + int_3;
		double_2 = double_2 * double_3;
		double_4 = double_3 + double_2;
		int_6 = int_5 * int_2;
	}
	int_7 = int_3;
	char_1 = char_1 * char_2;
	return short_1;
}
int v__cb_scale_preloaded(unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 * double_1;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		int int_1 = 1;
		short_1 = short_1;
		short_4 = short_2 + short_3;
		unsigned_int_3 = unsigned_int_4;
		double_3 = double_1 + double_2;
		int_2 = int_1 * int_2;
	}
	return int_2;
}
double v__type_scale_calc( long parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4,float parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char * vul_var;
	int_2 = int_1 * int_2;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		short_4 = short_2 + short_3;
		double_2 = double_1 + double_1;
	}
	char controller4vul_1363[3];
	fgets(controller4vul_1363 ,3 ,stdin);
	if( strcmp( controller4vul_1363, "d0") < 0)
	{
		float float_2 = 1;
		int int_5 = 1;
		float float_3 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		int_2 = int_3 * int_3;
		char controller4vul_1364[3];
		fgets(controller4vul_1364 ,3 ,stdin);
		if( strcmp( controller4vul_1364, ">V") < 0)
		{
			strcpy(vul_var, "CWE-761");
			double_1 = double_2 + double_1;
			int_2 = int_1 * int_1;
			char controller4vul_1365[2];
			fgets(controller4vul_1365 ,2 ,stdin);
			if( strcmp( controller4vul_1365, "z") < 0)
			{
				char char_2 = 1;
				short_3 = short_3 + short_3;
				char_2 = char_1 + char_1;
				char controller4vul_1366[2];
				fgets(controller4vul_1366 ,2 ,stdin);
				if( strcmp( controller4vul_1366, "Z") > 0)
				{
					if(uni_para == 893)
					{
						vul_var = vul_var + 1;
					}
					free(vul_var);
					int_4 = int_4 * int_2;
				}
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			float_1 = float_1 + float_2;
			if(1)
			{
				char_1 = char_1 + char_3;
				int_2 = int_1 + int_4;
				if(1)
				{
					double_1 = double_3 * double_4;
				}
			}
		}
		if(1)
		{
			long_1 = long_2;
			int_4 = int_4 + int_1;
		}
		double_4 = double_4 + double_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_3 = int_5 * int_6;
		float_2 = float_1 * float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_4;
		double_1 = double_2 * double_2;
		unsigned_int_3 = unsigned_int_4;
		if(1)
		{
			double_3 = double_4 + double_5;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		}
		if(1)
		{
			short short_5 = 1;
			char char_4 = 1;
			long long_3 = 1;
			short_1 = short_2 + short_5;
			int_1 = int_3 * int_1;
			float_1 = float_1 * float_1;
			char_3 = char_4 * char_1;
			double_2 = double_1;
			double_5 = double_3 * double_5;
			long_3 = long_2 + long_1;
			double_2 = double_5 + double_2;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		double_2 = double_3 + double_1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	}
	if(1)
	{
		long_4 = long_1;
		int_6 = int_4 + int_2;
	}
	short_4 = short_2;
	long_6 = long_5 + long_4;
	double_4 = double_3 + double_4;
}
short v__unsmooth_timeout(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	int_2 = int_1 + int_1;
	double_3 = double_1;
	char controller4vul_1361[3];
	fgets(controller4vul_1361 ,3 ,stdin);
	if( strcmp( controller4vul_1361, "};") > 0)
	{
		double_5 = double_2 + double_4;
		char controller4vul_1362[3];
		fgets(controller4vul_1362 ,3 ,stdin);
		if( strcmp( controller4vul_1362, "5A") < 0)
		{
			int int_3 = 1;
			double_3 = v__type_scale_calc(long_1,long_2,char_2,unsigned_int_1,float_1,uni_para);

			int_2 = int_3 * int_2;
		}
		if(1)
		{
			double_1 = double_4 + double_4;
		}
	}
	if(1)
	{
		double double_6 = 1;
		double_4 = double_6 + double_5;
	}
	return short_1;
}
unsigned int v__smooth_handler(int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_2;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	if(1)
	{
		double double_2 = 1;
		double_3 = double_1 + double_2;
	}
	char controller4vul_1357[2];
	fgets(controller4vul_1357 ,2 ,stdin);
	if( strcmp( controller4vul_1357, "r") > 0)
	{
		char controller4vul_1358[2];
		fgets(controller4vul_1358 ,2 ,stdin);
		if( strcmp( controller4vul_1358, "]") < 0)
		{
			double double_4 = 1;
			double_3 = double_3 + double_4;
			int_2 = int_1 + int_1;
			char controller4vul_1359[2];
			fgets(controller4vul_1359 ,2 ,stdin);
			if( strcmp( controller4vul_1359, "=") < 0)
			{
				int_1 = int_2 + int_1;
				char controller4vul_1360[2];
				fgets(controller4vul_1360 ,2 ,stdin);
				if( strcmp( controller4vul_1360, ">") > 0)
				{
					short_1 = v__unsmooth_timeout(uni_para);

					double_1 = double_4 + double_1;
				}
			}
			if(1)
			{
				short short_2 = 1;
				short_1 = short_2 * short_1;
			}
			if(1)
			{
				int_2 = int_1;
			}
			int_3 = int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		int_1 = int_2 + int_3;
	}
	return unsigned_int_2;
}
double v__smart_calculate( long parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	char controller4vul_1356[3];
	fgets(controller4vul_1356 ,3 ,stdin);
	if( strcmp( controller4vul_1356, "6k") > 0)
	{
		unsigned_int_3 = v__smooth_handler(uni_para);

	}
	int_1 = int_1;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if(remainder_check(controller_2,100,2))
	{
		double_1 = double_2 + double_3;
	}
	short_1 = short_1 + short_1;
	double_4 = double_2 * double_2;
	float_1 = float_2;
	short_1 = short_1 * short_1;
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	short_1 = short_1 + short_1;
	long_1 = long_1 * long_1;
	float_1 = float_3;
	int_2 = int_1 * int_1;
	double_1 = double_3 + double_4;
	int_4 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_3 * int_2;
	short_2 = short_2 + short_1;
	if(1)
	{
		int int_5 = 1;
		double_2 = double_3;
		int_5 = int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_6 = 1;
		char_3 = char_1 + char_2;
		int_6 = int_2;
	}
	return double_3;
}
char v__smart_move( long parameter_1,char parameter_2,float parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return char_1;
}
char v__smart_resize( unsigned int parameter_1,float parameter_2,long parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	int_4 = int_3 * int_3;
	if(1)
	{
	}
	double_3 = double_2 * double_1;
	float_1 = float_1 + float_1;
	return char_1;
}
void v__smart_del( long parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		short_2 = short_2;
		int_1 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	short_2 = short_3 + short_3;
	short_3 = short_1 + short_4;
	int_2 = int_3;
	if(1)
	{
		if(1)
		{
			int_2 = int_3 + int_3;
		}
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		int_4 = int_3 * int_1;
	}
	if(1)
	{
		int_3 = int_4 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		char_2 = char_2;
	}
	if(1)
	{
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		char_1 = char_2 + char_1;
	}
	if(1)
	{
		int_4 = int_3 + int_2;
	}
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_6 = int_5 + int_1;
	}
	if(1)
	{
		char char_3 = 1;
		char_2 = char_3 + char_3;
	}
	long_1 = long_2 + long_3;
	double_3 = double_1 * double_2;
}
short v__smart_add( char parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int_1 = int_1;
	char_2 = char_1 * char_2;
	double_1 = double_1 * double_1;
	float_2 = float_1 * float_1;
	double_3 = double_1 + double_2;
	long_2 = long_1 + long_1;
	int_2 = int_1 * int_1;
	char_1 = char_1 * char_2;
	float_1 = float_1 * float_3;
	long_3 = long_2 + long_2;
	return short_1;
}
double v__smart_init(int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = v__smart_calculate(long_1,uni_para);

	long_2 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2 * double_1;
	double_2 = double_1;
	float_3 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
	char_1 = char_1 * char_1;
	float_2 = float_3 + float_4;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_4;
	return double_2;
}
float v_media_add( long parameter_1,float parameter_2,char parameter_3,int parameter_4,long parameter_5,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	double double_2 = 1;
	int int_8 = 1;
	double double_3 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char char_9 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_5 = 1;
	char char_11 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long_2 = long_1 + long_2;
	int_3 = int_1 * int_2;
	double_1 = double_1 * double_1;
	float_1 = float_1;
	int_2 = int_3 * int_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	float_2 = float_3;
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_1 * char_2;
	int_2 = int_3;
	char_3 = char_1 + char_2;
	char controller4vul_1350[3];
	fgets(controller4vul_1350 ,3 ,stdin);
	if( strcmp( controller4vul_1350, "Ei") < 0)
	{
		int int_7 = 1;
		char controller4vul_1351[2];
		fgets(controller4vul_1351 ,2 ,stdin);
		if( strcmp( controller4vul_1351, "q") < 0)
		{
			float float_4 = 1;
			float float_5 = 1;
			int_1 = int_4 + int_4;
			float_4 = float_3 + float_4;
			if(1)
			{
				float_3 = float_3 + float_5;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
				int_5 = int_4 * int_4;
			}
			if(1)
			{
				int_7 = int_5 + int_6;
				unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
				char_1 = char_3 * char_2;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
			}
			if(1)
			{
				int_7 = int_2 * int_6;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
			}
			if(1)
			{
				int_5 = int_7;
			}
			if(1)
			{
				short_2 = short_2 + short_1;
			}
			if(1)
			{
				int_7 = int_7 * int_4;
				char_2 = char_2 + char_4;
				char_3 = char_3 + char_3;
				short_3 = short_1 + short_3;
				unsigned_int_1 = unsigned_int_5;
				float_4 = float_1 * float_3;
				char_3 = char_2 + char_3;
			}
			char controller4vul_1352[2];
			fgets(controller4vul_1352 ,2 ,stdin);
			if( strcmp( controller4vul_1352, "(") > 0)
			{
				short short_5 = 1;
				float_5 = float_2 * float_4;
				float_1 = float_5;
				short_1 = short_4;
				char controller4vul_1353[2];
				fgets(controller4vul_1353 ,2 ,stdin);
				if( strcmp( controller4vul_1353, "{") > 0)
				{
					short_2 = short_5 + short_5;
					if(1)
					{
						double_2 = double_1 + double_1;
						double_1 = double_2;
					}
					char controller4vul_1354[2];
					fgets(controller4vul_1354 ,2 ,stdin);
					if( strcmp( controller4vul_1354, "2") < 0)
					{
						int_8 = int_8;
						char controller4vul_1355[2];
						fgets(controller4vul_1355 ,2 ,stdin);
						if( strcmp( controller4vul_1355, "z") > 0)
						{
							long long_3 = 1;
							double_3 = v__smart_init(uni_para);

							unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
							long_3 = long_1 + long_2;
							float_1 = float_5 + float_1;
						}
						char controller_1[3];
						fgets(controller_1 ,3 ,stdin);
						if( strcmp( controller_1, "]M") > 0)
						{
							double double_4 = 1;
							int_4 = int_6;
							int_9 = int_10;
							int_8 = int_3;
							char_2 = char_4;
							unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
							double_3 = double_4 + double_1;
							char_5 = char_6;
							float_4 = float_1 * float_2;
							char_7 = char_3;
						}
					}
				}
				if(1)
				{
					short short_6 = 1;
					short_5 = short_3 * short_6;
				}
			}
		}
		if(1)
		{
			int_7 = int_6 + int_7;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			int_8 = int_3 * int_6;
			unsigned_int_7 = unsigned_int_5 + unsigned_int_1;
		}
	}
	if(1)
	{
		short short_7 = 1;
		double double_5 = 1;
		long long_4 = 1;
		if(1)
		{
			char char_8 = 1;
			unsigned_int_1 = unsigned_int_1;
			char_1 = char_8 * char_3;
		}
		char_4 = char_9 + char_7;
		if(1)
		{
			int int_11 = 1;
			short_3 = short_7 * short_4;
			int_11 = int_11 + int_2;
		}
		double_5 = double_5 + double_6;
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_9 = unsigned_int_4 * unsigned_int_8;
			unsigned_int_6 = unsigned_int_3 + unsigned_int_2;
		}
		int_10 = int_5;
		if(1)
		{
			char char_10 = 1;
			short_7 = short_4;
			char_10 = char_10 * char_3;
		}
		long_4 = long_4 + long_5;
		int_9 = int_3 * int_9;
	}
	char_6 = char_7 + char_2;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_6;
	char_11 = char_3 + char_5;
	double_2 = double_7;
	char_9 = char_3 + char_3;
	double_2 = double_8 + double_6;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_9;
	long_5 = long_5 * long_5;
	if(1)
	{
		int_6 = int_10 + int_10;
	}
	return float_1;
}
int v__block_media_activate( long parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_2 * double_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	double_4 = double_4 * double_1;
	char controller4vul_1349[3];
	fgets(controller4vul_1349 ,3 ,stdin);
	if( strcmp( controller4vul_1349, "FN") < 0)
	{
		float_1 = v_media_add(long_1,float_1,char_1,int_1,long_2,uni_para);

		char_1 = char_1 * char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
	}
	if(1)
	{
		long_1 = long_3 * long_1;
	}
	if(1)
	{
		double_2 = double_4 + double_4;
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double_6 = double_5 * double_3;
	}
	long_2 = long_3 * long_1;
	char_2 = char_2 * char_1;
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	float_1 = float_1 + float_2;
	long_4 = long_4;
	char_3 = char_1 + char_1;
	double_4 = double_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_6;
	int_2 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double double_7 = 1;
		int int_4 = 1;
		double_7 = double_2 * double_4;
		int_4 = int_3;
	}
	unsigned_int_6 = unsigned_int_7;
	float_2 = float_2;
	int_1 = int_5;
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	return int_5;
}
unsigned int v__block_edje_message_cb(long parameter_2,short parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_4 = 1;
	short short_7 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_8 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_3 = int_1 + int_2;
	int_5 = int_3 + int_4;
	long_3 = long_1 * long_2;
	int_4 = int_4 * int_3;
	int_5 = int_1;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "R-") < 0)
	{
	}
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1;
	double_1 = double_2 + double_2;
	double_1 = double_1;
	long_4 = long_2 + long_2;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	float_1 = float_2;
	short_1 = short_1 + short_2;
	char_2 = char_1 * char_1;
	char_2 = char_2 + char_1;
	int_2 = int_5 * int_4;
	double_2 = double_2 + double_1;
	short_1 = short_1;
	double_1 = double_1 + double_2;
	long_2 = long_2 + long_4;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_3 + double_2;
		unsigned_int_3 = unsigned_int_1;
	}
	float_2 = float_3 * float_3;
	double_1 = double_4;
	double_3 = double_5 * double_4;
	float_3 = float_4;
	int_2 = int_4;
	int_2 = int_1 * int_1;
	char_3 = char_2 * char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		int_5 = int_5 * int_3;
		int_1 = int_5 + int_4;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_1;
	double_4 = double_5;
	int_6 = int_7;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	double_6 = double_1 * double_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short short_3 = 1;
		short_3 = short_3 * short_2;
		short_5 = short_4 * short_1;
		short_6 = short_2 * short_5;
	}
	char_1 = char_4 + char_2;
	short_6 = short_4 * short_5;
	double_2 = double_3;
	v_termpty_write(long_1,long_1,int_4);

	int_3 = int_3 + int_5;
	short_2 = short_1 + short_7;
	int_2 = int_1 * int_2;
	long_1 = long_1;
	double_4 = double_3 + double_7;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_7 = double_7 + double_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
	long_4 = long_2 * long_1;
	int_2 = int_3;
	long_1 = long_1 + long_3;
	short_6 = short_8 * short_4;
	long_4 = long_3 + long_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_7;
		unsigned_int_3 = unsigned_int_6 * unsigned_int_6;
		float_1 = float_3 * float_1;
	}
	unsigned_int_4 = unsigned_int_5;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_7;
	float_1 = float_4 + float_5;
	float_4 = float_3 + float_6;
	char_2 = char_3 * char_3;
	unsigned_int_8 = unsigned_int_9;
	int_8 = int_3 * int_5;
	int_9 = int_6 + int_5;
	int_9 = int_2 * int_7;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int_8 = int_1 + int_7;
		double_3 = double_1;
		double_5 = double_4;
	}
	float_6 = float_3 + float_2;
	float_1 = float_6 * float_5;
	unsigned_int_2 = unsigned_int_7 * unsigned_int_10;
	return unsigned_int_8;
}
void v_termpty_write( long parameter_1,long parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_2 = float_1 * float_2;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
}
char v__block_edje_signal_cb(short parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_1;
	char_1 = char_1 + char_1;
	float_1 = float_1;
	char_3 = char_2 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		v_termpty_write(long_1,long_1,int_1);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	char_4 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		int int_5 = 1;
		double_2 = double_2 * double_1;
		double_3 = double_3 * double_3;
		double_2 = double_2;
		int_4 = int_1 * int_3;
		double_2 = double_2 * double_4;
		int_5 = int_3 + int_1;
		float_1 = float_1;
		int_5 = int_4 + int_5;
	}
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		short_1 = short_1;
		int_2 = int_4 * int_1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	}
	return char_4;
}
void v_termpty_block_chid_update( double parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
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
	int_1 = int_2;
}
void v__block_edje_cmds( long parameter_1,int parameter_2,double parameter_3,char parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	v_termpty_block_chid_update(double_1,float_1);

	char_1 = v__block_edje_signal_cb(short_1,int_1,int_1);

	short_2 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = v__block_edje_message_cb(long_1,short_1,int_2);

}
long v_homedir_get( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_1 = double_2;
	if(1)
	{
		short short_1 = 1;
		double double_3 = 1;
		short_1 = short_1 + short_1;
		double_3 = double_2 + double_2;
		if(1)
		{
			double double_4 = 1;
			double_3 = double_3 * double_4;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	return long_1;
}
char v__block_edje_activate( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_2;
	short_2 = short_1 + short_2;
	double_2 = double_3 + double_2;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	if(1)
	{
		short short_3 = 1;
		short_4 = short_3 + short_3;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "h") > 0)
	{
		double_1 = double_4 + double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			short short_5 = 1;
			int int_1 = 1;
			short_4 = short_5 + short_2;
			int_1 = int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_3 * int_3;
			double_4 = double_2;
		}
	}
	long_1 = v_homedir_get(char_1,long_2);

	double_1 = double_4 * double_5;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = v_config_theme_path_default_get();

		v__block_edje_cmds(long_2,int_2,double_1,char_2);

		float_2 = float_1 + float_2;
	}
	return char_1;
}
long v__block_activate( double parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_3 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_2;
	char controller4vul_1348[3];
	fgets(controller4vul_1348 ,3 ,stdin);
	if( strcmp( controller4vul_1348, "_!") < 0)
	{
		int_1 = v__block_media_activate(long_1,char_1,uni_para);

	}
	float_2 = float_3;
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		char char_4 = 1;
		char_4 = char_2 * char_3;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_4 * float_2;
	}
	char_1 = char_3;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	return long_1;
}
short v_termpty_block_get( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
int v_termpty_block_id_get( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	int_4 = int_2 + int_3;
	int_4 = int_3 * int_4;
	long_3 = long_1 * long_2;
	return int_5;
}
void v_termpty_backscroll_adjust( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	float_1 = v_verify_beacon(char_1,int_1);

	long_1 = long_1 + long_2;
	double_2 = double_1 * double_2;
}
long v__smart_apply( double parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_6 = 1;
	float float_5 = 1;
	float float_6 = 1;
	char char_6 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_6 = 1;
	float float_7 = 1;
	char char_7 = 1;
	float float_8 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_6 = 1;
	double double_9 = 1;
	short short_6 = 1;
	long long_8 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_10 = 1;
	long long_9 = 1;
	short short_7 = 1;
	double double_11 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_8 = 1;
	float float_10 = 1;
	int int_9 = 1;
	long long_10 = 1;
	long long_11 = 1;
	int int_10 = 1;
	char char_9 = 1;
	double double_13 = 1;
	double double_14 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2;
	int_1 = int_1 + int_1;
	int_1 = int_1 * int_1;
	float_2 = float_1 * float_1;
	short_1 = short_1 + short_2;
	double_2 = double_1 * double_1;
	double_2 = double_2 + double_1;
	char_1 = char_1;
	unsigned_int_3 = unsigned_int_1;
	long_2 = long_2 + long_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	double_2 = double_2;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_5 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		long_4 = long_3 * long_1;
		long_3 = long_3;
		long_2 = long_4 * long_5;
		if(1)
		{
			float float_4 = 1;
			float_2 = float_3 + float_4;
		}
		double_3 = double_2 * double_1;
		if(1)
		{
			short_2 = short_2 + short_3;
		}
		unsigned_int_4 = unsigned_int_4 + unsigned_int_6;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char controller4vul_1345[3];
			fgets(controller4vul_1345 ,3 ,stdin);
			if( strcmp( controller4vul_1345, "-0") < 0)
			{
				char controller4vul_1346[3];
				fgets(controller4vul_1346 ,3 ,stdin);
				if( strcmp( controller4vul_1346, "q$") > 0)
				{
					char controller4vul_1347[3];
					fgets(controller4vul_1347 ,3 ,stdin);
					if( strcmp( controller4vul_1347, "Nj") > 0)
					{
						long_1 = v__block_activate(double_3,char_2,uni_para);

						int_1 = int_2 + int_2;
					}
					unsigned_int_6 = unsigned_int_7;
				}
				int_1 = int_2 * int_2;
				if(1)
				{
					char_3 = char_4;
				}
				if(1)
				{
					double_3 = double_4;
				}
				unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
				unsigned_int_2 = unsigned_int_8 * unsigned_int_7;
				char_5 = char_4;
				unsigned_int_4 = unsigned_int_1 + unsigned_int_8;
				int_2 = int_3 * int_4;
				double_5 = double_3 * double_2;
			}
			if(1)
			{
				int_5 = int_5 * int_2;
				int_1 = int_4 + int_4;
				if(1)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_1 * unsigned_int_8;
					}
					short_2 = short_3 * short_4;
					double_1 = double_4 + double_5;
					short_1 = short_1 * short_4;
					unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
					unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
					long_5 = long_5 + long_3;
					short_5 = short_4 * short_2;
					long_6 = long_4 * long_3;
					unsigned_int_5 = unsigned_int_5;
					float_6 = float_5 * float_5;
					char_2 = char_6 + char_4;
					int_3 = int_2 * int_5;
					if(1)
					{
						long_1 = long_6 + long_3;
						long_1 = long_7 * long_3;
						unsigned_int_9 = unsigned_int_9 + unsigned_int_4;
						double_6 = double_6 * double_2;
						int_5 = int_5;
					}
				}
				if(1)
				{
					if(1)
					{
						if(1)
						{
							char_1 = char_5 + char_2;
						}
						char_1 = char_6 + char_6;
					}
					float_5 = float_6 * float_7;
					if(1)
					{
						char_4 = char_7 + char_1;
					}
					if(1)
					{
						short_4 = short_5 + short_4;
					}
					double_1 = double_2;
					float_2 = float_8 + float_1;
					double_8 = double_6 * double_7;
					int_1 = int_4 * int_6;
					double_8 = double_9 + double_6;
					char_6 = char_3 * char_5;
					if(1)
					{
						short_1 = short_1 * short_6;
					}
				}
				if(1)
				{
					unsigned int unsigned_int_10 = 1;
					int_6 = int_4 * int_6;
					int_3 = int_4 + int_2;
					unsigned_int_4 = unsigned_int_1 * unsigned_int_10;
					int_4 = int_1 + int_4;
					long_5 = long_8 + long_3;
					double_4 = double_2 * double_2;
					if(1)
					{
						double_9 = double_2;
						unsigned_int_10 = unsigned_int_10 * unsigned_int_11;
					}
					if(1)
					{
						double_8 = double_10;
						double_2 = double_7 * double_9;
					}
					if(1)
					{
						short_6 = short_5 * short_3;
					}
					if(1)
					{
						if(1)
						{
							int_6 = int_3 + int_4;
						}
						if(1)
						{
							double_10 = double_8;
						}
					}
					if(1)
					{
						char_2 = char_1;
					}
					if(1)
					{
						short_5 = short_4 * short_2;
					}
					if(1)
					{
						double_6 = double_1 * double_6;
						double_8 = double_2 + double_4;
						double_7 = double_2 * double_8;
						int_5 = int_1 * int_1;
						long_9 = long_7 * long_1;
						long_3 = long_7 + long_3;
						double_8 = double_3 + double_8;
					}
					if(1)
					{
						int_2 = int_4 + int_1;
					}
					if(1)
					{
						short_1 = short_7 + short_6;
					}
					if(1)
					{
						if(1)
						{
							char_2 = char_1 * char_1;
						}
						double_3 = double_11 * double_10;
					}
					unsigned_int_10 = unsigned_int_7;
					char_4 = char_5 * char_4;
					short_7 = short_5 + short_4;
					int_8 = int_6 + int_7;
					if(1)
					{
						double_5 = double_3;
						double_1 = double_2 + double_2;
					}
					if(1)
					{
						int_2 = int_4 + int_1;
						unsigned_int_10 = unsigned_int_5 * unsigned_int_1;
					}
					double_9 = double_10 + double_6;
					double_7 = double_9;
					double_3 = double_6 * double_9;
					short_8 = short_6 + short_1;
					if(1)
					{
						unsigned_int_7 = unsigned_int_3 * unsigned_int_5;
					}
				}
			}
		}
		double_9 = double_11;
		if(1)
		{
			float float_9 = 1;
			float_8 = float_9 * float_10;
		}
	}
	short_8 = short_7 + short_4;
	if(1)
	{
		int_3 = int_1 + int_7;
		int_6 = int_1 * int_2;
		unsigned_int_11 = unsigned_int_7 * unsigned_int_5;
		int_1 = int_1 + int_8;
		float_7 = float_3;
		char_5 = char_2;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double double_12 = 1;
				char char_8 = 1;
				float float_11 = 1;
				int_2 = int_1;
				char_7 = char_5 * char_4;
				int_6 = int_2 * int_7;
				if(1)
				{
					float_7 = float_3;
				}
				char_2 = char_3 * char_4;
				if(1)
				{
					if(1)
					{
						unsigned_int_3 = unsigned_int_7 + unsigned_int_6;
						short_2 = short_2 + short_6;
						double_1 = double_12 * double_5;
					}
				}
				if(1)
				{
					char_8 = char_7 + char_8;
					char_4 = char_2 * char_3;
				}
				float_7 = float_11 + float_11;
				double_9 = double_3 + double_2;
				int_5 = int_8;
				double_8 = double_9 * double_5;
				int_6 = int_9 + int_9;
				double_6 = double_4 * double_7;
				short_6 = short_3;
				char_8 = char_8 + char_5;
				short_5 = short_7;
				int_9 = int_4;
				int_4 = int_1 * int_3;
				if(1)
				{
					short short_9 = 1;
					long long_12 = 1;
					char_1 = char_1 * char_8;
					double_12 = double_4 + double_11;
					long_2 = long_4 + long_7;
					short_2 = short_9;
					long_6 = long_10 * long_11;
					long_1 = long_9 * long_12;
					short_1 = short_6 + short_4;
					double_10 = double_10 + double_6;
					float_8 = float_5 * float_3;
					long_4 = long_7 + long_4;
				}
				short_4 = short_7;
				if(1)
				{
					if(1)
					{
						short short_10 = 1;
						float_11 = float_1 + float_5;
						short_10 = short_5 + short_7;
					}
				}
			}
			double_6 = double_2;
		}
		short_5 = short_8 + short_1;
		unsigned_int_11 = unsigned_int_8 + unsigned_int_6;
	}
	unsigned_int_11 = unsigned_int_11 * unsigned_int_5;
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_8;
		double_4 = double_1 * double_2;
		int_10 = int_2 + int_9;
	}
	if(1)
	{
		char char_10 = 1;
		char_10 = char_9 * char_4;
	}
	if(1)
	{
		double_5 = double_5 * double_8;
	}
	float_1 = float_2 + float_1;
	double_9 = double_13 + double_11;
	float_2 = float_6;
	if(1)
	{
		int int_11 = 1;
		int int_12 = 1;
		double_10 = double_3 * double_4;
		int_7 = int_3 * int_7;
		int_1 = int_3 * int_11;
		double_9 = double_14;
		int_1 = int_1 * int_7;
		double_5 = double_11;
		if(1)
		{
			double double_15 = 1;
			double_15 = double_9 * double_10;
			int_11 = int_4 * int_9;
		}
		char_9 = char_5;
		short_8 = short_7 * short_7;
		char_2 = char_6;
		short_2 = short_5;
		int_8 = int_3 + int_10;
		unsigned_int_6 = unsigned_int_7 * unsigned_int_9;
		int_8 = int_1 + int_2;
		int_9 = int_6 * int_12;
		if(1)
		{
			int int_13 = 1;
			int_10 = int_13;
		}
		if(1)
		{
			if(1)
			{
				long_7 = long_1 + long_9;
			}
			if(1)
			{
				float_5 = float_1 + float_3;
			}
			if(1)
			{
				float_10 = float_5 * float_10;
			}
			if(1)
			{
				long_1 = long_1 * long_11;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_8 * unsigned_int_6;
			}
		}
		int_9 = int_12 * int_2;
	}
	if(1)
	{
		long_10 = long_9 * long_8;
	}
	if(1)
	{
		double_9 = double_10 * double_3;
	}
	double_13 = double_14;
	return long_6;
}
int v__smart_cb_change(int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long_1 = v__smart_apply(double_1,uni_para);

	long_2 = long_1 + long_1;
	int_1 = int_1 * int_1;
	double_2 = double_1 * double_1;
	float_1 = float_1;
	short_3 = short_1 * short_2;
	int_1 = int_1 * int_1;
	return int_1;
}
long v__smart_update_queue( int parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char controller4vul_1344[2];
	fgets(controller4vul_1344 ,2 ,stdin);
	if( strcmp( controller4vul_1344, "^") < 0)
	{
		int_1 = v__smart_cb_change(uni_para);

	}
	double_2 = double_1 * double_1;
	return long_1;
}
char v__lost_selection_reset_job()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = v__lost_selection(long_1,-1 );

	unsigned_int_2 = unsigned_int_1;
	short_1 = short_1 + short_2;
	if(1)
	{
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_2 = int_2 + int_3;
		double_1 = double_1 + double_2;
	}
	return char_1;
}
unsigned int v__lost_selection(long parameter_2,int uni_para)
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
	long long_1 = 1;
	int int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_3 = double_1 * double_2;
	int_2 = int_1 * int_2;
	int_1 = int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_1 = int_3 + int_2;
	}
	char controller4vul_1341[3];
	fgets(controller4vul_1341 ,3 ,stdin);
	if( strcmp( controller4vul_1341, "M=") > 0)
	{
		long long_2 = 1;
		long long_5 = 1;
		char controller4vul_1342[3];
		fgets(controller4vul_1342 ,3 ,stdin);
		if( strcmp( controller4vul_1342, ")g") > 0)
		{
			long long_4 = 1;
			double_4 = double_3 * double_2;
			char controller4vul_1343[2];
			fgets(controller4vul_1343 ,2 ,stdin);
			if( strcmp( controller4vul_1343, "x") > 0)
			{
				long_1 = v__smart_update_queue(int_4,int_3,uni_para);

				long_1 = long_2 * long_1;
			}
			long_4 = long_3 + long_3;
		}
		long_3 = long_2 + long_5;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		if(1)
		{
			long long_6 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long_6 = long_3 * long_6;
			float_1 = float_1 * float_2;
		}
		unsigned_int_1 = unsigned_int_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		double_1 = double_4 * double_5;
		double_1 = double_6 * double_2;
	}
	return unsigned_int_4;
}
unsigned int v__take_selection_text( int parameter_1,unsigned int parameter_2,float parameter_3,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_2 = char_1 + char_1;
	int_1 = int_2;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_2;
	int_2 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char controller4vul_1340[2];
	fgets(controller4vul_1340 ,2 ,stdin);
	if( strcmp( controller4vul_1340, ">") > 0)
	{
		double double_1 = 1;
		unsigned_int_3 = v__lost_selection(long_1,uni_para);

		double_1 = double_1 + double_1;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	return unsigned_int_4;
}
char v__cb_ctxp_link_content_copy(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	unsigned_int_1 = v__take_selection_text(int_1,unsigned_int_2,float_1,-1 );

	short_1 = short_1 + short_1;
	int_2 = v_termio_selection_get(short_1,int_1,int_1,int_1,int_1,long_1,float_1);

	float_2 = float_1 + float_2;
	short_2 = short_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	float_3 = float_3 * float_3;
	double_2 = double_1 * double_2;
	float_4 = float_4;
	unsigned_int_2 = unsigned_int_4;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
	return char_1;
}
void v_ty_sb_free( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short_1 = short_2;
	double_1 = double_2;
	short_4 = short_1 + short_3;
}
short v_ty_sb_steal_buf( int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long_1 = long_1;
	char_2 = char_1 * char_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_1 = long_2 + long_3;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	char_2 = char_2 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
	int_1 = int_1;
	return short_1;
}
int v_codepoint_to_utf8( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	long long_5 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "t") == 0)
	{
		float float_2 = 1;
		short short_2 = 1;
		float_2 = float_1 * float_2;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		short short_3 = 1;
		long long_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_4 = short_1 * short_3;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_1 + double_1;
		int_2 = int_1 * int_2;
		double_2 = double_2 + double_3;
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		int int_3 = 1;
		double_1 = double_2 + double_2;
		long_4 = long_3 * long_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_3 = int_2;
		int_2 = int_3 * int_3;
	}
	if(1)
	{
		double double_4 = 1;
		char char_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_4 = float_3 * float_3;
		double_1 = double_4 + double_4;
		char_2 = char_1 * char_2;
		double_6 = double_5 + double_4;
		long_5 = long_2 + long_5;
	}
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		long_2 = long_2 * long_5;
		float_3 = float_4 + float_1;
		int_2 = int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		float_5 = float_6;
		short_4 = short_1 + short_4;
		char_2 = char_2;
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		short_1 = short_5 * short_6;
	}
	return int_2;
}
void v_ty_sb_spaces_rtrim( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_2;
	float_1 = float_1 * float_2;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_1 = int_1 + int_1;
		int_2 = int_1 * int_2;
		int_3 = int_2 + int_1;
		short_2 = short_1 * short_1;
	}
}
int v_ty_sb_add( char parameter_1,unsigned int parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = int_1;
		long_2 = long_1 + long_2;
		long_4 = long_1 + long_3;
		if(1)
		{
		}
		int_1 = int_2 * int_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_1;
	double_2 = double_1 * double_1;
	int_2 = int_1;
	return int_2;
}
void v__termpty_cellrow_from_beacon_get( int parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_5 = 1;
	char char_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	short_1 = short_1 * short_1;
	float_2 = float_3;
	double_3 = double_1 + double_2;
	float_3 = v_verify_beacon(char_1,int_1);

	char_2 = char_2 * char_1;
	if(1)
	{
		float_4 = float_3 + float_1;
	}
	double_4 = double_3 * double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_1 = float_3;
	}
	float_3 = float_4 + float_5;
	char_4 = char_2 + char_2;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		int_1 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_4 = float_3 * float_1;
		unsigned_int_3 = unsigned_int_1;
		unsigned_int_4 = unsigned_int_4;
		char_4 = char_1 + char_4;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
}
unsigned int v_termpty_cellrow_get( short parameter_1,int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		float float_1 = 1;
		if(1)
		{
		}
		float_1 = float_1 * float_1;
	}
	if(1)
	{
	}
	return unsigned_int_1;
	v__termpty_cellrow_from_beacon_get(int_1,int_1,int_2);

}
int v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6,float parameter_7)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	v_ty_sb_spaces_rtrim(long_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			short short_2 = 1;
			unsigned_int_2 = v_termpty_cellrow_get(short_1,int_1,unsigned_int_2);

			int_1 = v_ty_sb_add(char_1,unsigned_int_3,double_1);

			short_2 = short_1 + short_1;
			v_termpty_backlog_lock();

			unsigned_int_4 = unsigned_int_2;
		}
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_1 = double_2 + double_3;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
		}
		if(1)
		{
			if(1)
			{
				char controller_6[3];
				fgets(controller_6 ,3 ,stdin);
				if( strcmp( controller_6, "k|") < 0)
				{
					if(1)
					{
						int int_2 = 1;
						int_2 = int_2 + int_1;
					}
					if(1)
					{
						char_2 = char_1;
					}
				}
				if(1)
				{
					v_termpty_backlog_unlock();

					v_ty_sb_free(float_1);

					unsigned_int_1 = unsigned_int_7 + unsigned_int_4;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int_1 = v_codepoint_to_utf8(char_2,char_3);

			unsigned_int_5 = unsigned_int_8 + unsigned_int_5;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					char char_4 = 1;
					char char_5 = 1;
					char_5 = char_4 + char_2;
				}
				if(1)
				{
					short short_3 = 1;
					short_3 = short_1 + short_3;
				}
				if(1)
				{
					long long_2 = 1;
					long_2 = long_2 + long_2;
				}
				if(1)
				{
					float float_2 = 1;
					short_4 = v_ty_sb_steal_buf(int_3);

					float_1 = float_2 * float_1;
				}
				if(1)
				{
					char char_6 = 1;
					char char_7 = 1;
					char_7 = char_6 + char_3;
				}
			}
			double_5 = double_1 + double_4;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_4 * unsigned_int_7;
		}
	}
	return int_1;
}
double v__cb_ctxp_link_open(float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	char_2 = char_1 + char_1;
	long_1 = long_2;
	char_1 = char_1 * char_1;
	float_1 = float_1;
	long_3 = long_2;
	unsigned_int_1 = v__activate_link(float_1,float_2);

	char_4 = char_2 * char_3;
	return double_1;
}
void v__should_inline( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double_2 = double_1 + double_2;
	long_3 = long_1 * long_2;
	long_3 = v_termio_config_get(double_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1;
	double_3 = double_2 + double_1;
	if(1)
	{
	}
}
void v_link_is_email( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
	}
}
short v_link_is_protocol( long parameter_1)
{
	short short_1 = 1;
	return short_1;
}
void v_link_is_url()
{
	short short_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	short_1 = v_link_is_protocol(long_1);

}
unsigned int v__activate_link( float parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	int int_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_11 = 1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_2;
	float_1 = float_1;
	int_1 = int_1;
	double_3 = double_3 + double_3;
	char_2 = char_1 + char_1;
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
	if(1)
	{
		if(1)
		{
			double_3 = double_4 * double_3;
		}
		if(1)
		{
			short_1 = short_1 + short_2;
		}
	}
	if(1)
	{
		char_2 = char_2 + char_1;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		short_4 = short_1 + short_3;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_1 + long_2;
		v__should_inline(long_3);

		long_1 = long_3 + long_3;
		if(1)
		{
			double_3 = double_4;
		}
		if(1)
		{
			long_4 = long_3 + long_3;
		}
		double_4 = double_1 + double_4;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_6 = unsigned_int_7;
			long_3 = long_4 + long_1;
		}
	}
	if(1)
	{
		long_5 = long_3 + long_1;
		long_2 = long_6 * long_7;
		if(1)
		{
			short short_5 = 1;
			long long_8 = 1;
			double_4 = v_media_src_type_get(char_2);

			short_3 = short_5 + short_1;
			if(1)
			{
				if(1)
				{
					long_2 = long_4 + long_8;
					unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
				}
				if(1)
				{
					long long_9 = 1;
					int int_3 = 1;
					long_7 = long_9;
					int_4 = int_3 + int_1;
				}
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						double_4 = double_4 * double_5;
					}
				}
				if(1)
				{
					if(1)
					{
						float_2 = float_2 + float_1;
					}
				}
				if(1)
				{
					if(1)
					{
						double_1 = double_3;
					}
				}
				double_1 = double_5 * double_4;
				v_link_is_url();

				long_1 = long_8 * long_5;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_1 = unsigned_int_8 + unsigned_int_1;
		int_4 = int_1;
		if(1)
		{
			float_2 = float_2;
			if(1)
			{
				unsigned_int_9 = unsigned_int_5 + unsigned_int_2;
				long_2 = long_5 + long_7;
			}
			if(1)
			{
				unsigned int unsigned_int_10 = 1;
				if(1)
				{
					if(1)
					{
						double_3 = double_5 * double_3;
					}
				}
				if(1)
				{
					if(1)
					{
						double_4 = double_4 * double_1;
					}
				}
				if(1)
				{
					if(1)
					{
						double_1 = double_4;
					}
				}
				short_1 = short_3 * short_4;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_10;
			}
		}
	}
	if(1)
	{
		long_1 = long_6;
	}
	unsigned_int_4 = unsigned_int_9 + unsigned_int_11;
	if(1)
	{
		short short_6 = 1;
		short_2 = short_3 * short_6;
	}
	return unsigned_int_4;
	v_link_is_email(char_1);

}
short v__cb_ctxp_link_preview(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_2;
	double_2 = double_1 * double_2;
	char_1 = char_2;
	int_2 = int_3;
	return short_1;
	unsigned_int_1 = v__activate_link(float_1,float_1);

}
short v__is_fmt( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_2 = char_2 + char_3;
		}
		if(1)
		{
		}
	}
	return short_1;
}
double v_media_src_type_get( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		int_3 = int_3 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	return double_1;
	short_1 = v__is_fmt(char_1,long_1);

}
int v__mouse_in_selection( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	float_1 = float_1 + float_1;
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
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
long v__smart_xy_to_cursor( float parameter_1,char parameter_2,double parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	char_1 = char_1 + char_2;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_3 + int_3;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "]K") > 0)
	{
		float float_3 = 1;
		float_3 = float_2 * float_3;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return long_1;
}
int v__cb_link_down(long parameter_2,char parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_5 = 1;
	long_1 = long_1 * long_1;
	long_3 = long_2 + long_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_4 = 1;
		unsigned_int_1 = unsigned_int_2;
		short_1 = short_1 * short_2;
		int_2 = int_3 * int_4;
	}
	char controller4vul_1337[2];
	fgets(controller4vul_1337 ,2 ,stdin);
	if( strcmp( controller4vul_1337, ".") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		double_1 = double_1 + double_2;
		short_3 = short_3 + short_4;
		int_1 = int_3;
		char controller4vul_1338[2];
		fgets(controller4vul_1338 ,2 ,stdin);
		if( strcmp( controller4vul_1338, ":") < 0)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			double_4 = double_3 + double_2;
			char controller4vul_1339[3];
			fgets(controller4vul_1339 ,3 ,stdin);
			if( strcmp( controller4vul_1339, ".?") > 0)
			{
				long_3 = v__cb_ctxp_link_copy(long_3,uni_para);

			}
		}
		double_1 = double_5 * double_2;
		float_3 = float_1 + float_2;
		if(1)
		{
			double_4 = double_4 + double_3;
			if(1)
			{
				double_5 = double_1;
			}
		}
		long_2 = long_2 * long_3;
		float_1 = float_4 * float_4;
		if(1)
		{
			double_1 = double_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
			int_1 = int_2;
		}
		if(1)
		{
			long long_4 = 1;
			long_2 = long_4;
		}
		unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
		char_3 = char_1 * char_2;
		short_3 = short_5;
		int_3 = int_1 * int_3;
		int_7 = int_5 * int_6;
	}
	return int_5;
}
long v_main_term_popup_exists( long parameter_1)
{
	long long_1 = 1;
	return long_1;
}
char v__update_link( double parameter_1,short parameter_2,int parameter_3,double parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_2;
	short_1 = short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
		double_1 = double_1;
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
	}
	char_4 = char_3 + char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_3 = 1;
		double double_2 = 1;
		float float_4 = 1;
		long long_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_3 = 1;
		float_3 = float_1 * float_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		short_2 = short_2 * short_1;
		char controller4vul_1335[3];
		fgets(controller4vul_1335 ,3 ,stdin);
		if( strcmp( controller4vul_1335, "m]") < 0)
		{
			int_1 = int_1 * int_1;
			char controller4vul_1336[2];
			fgets(controller4vul_1336 ,2 ,stdin);
			if( strcmp( controller4vul_1336, "t") < 0)
			{
				int_1 = v__cb_link_down(long_1,char_4,uni_para);

				short_2 = short_2 + short_2;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_2 = unsigned_int_4;
			}
		}
		if(1)
		{
			double_2 = double_2;
			float_4 = float_4;
		}
		if(1)
		{
			int int_3 = 1;
			double_1 = double_2 + double_1;
			int_1 = int_3 * int_3;
		}
		long_2 = long_1 * long_1;
		double_1 = double_1 + double_2;
		float_4 = float_4 + float_4;
		float_4 = float_2 * float_4;
		double_1 = double_3 * double_4;
		short_2 = short_3;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "S") > 0)
		{
			double double_5 = 1;
			double_5 = double_5 * double_5;
		}
	}
	return char_2;
}
double v__remove_links( char parameter_1,float parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_1334[2];
	fgets(controller4vul_1334 ,2 ,stdin);
	if( strcmp( controller4vul_1334, "&") < 0)
	{
		double double_2 = 1;
		char_1 = v__update_link(double_1,short_1,int_1,double_1,uni_para);

		double_1 = double_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	double_3 = double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_2 + int_2;
	char_2 = char_2 * char_3;
	return double_4;
}
int v__sel_set( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		int_3 = int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	return int_3;
}
int v_termio_scroll_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	return int_1;
}
void v_miniview_position_offset( double parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int_1 = int_1 + int_2;
	int_2 = v_termio_scroll_get(float_1);

	double_1 = double_1 * double_1;
	double_2 = double_1 * double_1;
	double_3 = double_2 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_2 = int_1 * int_2;
		double_3 = double_3 * double_2;
		if(1)
		{
			int int_3 = 1;
			unsigned_int_1 = unsigned_int_2;
			int_4 = int_3 * int_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			double_1 = double_1 + double_3;
			unsigned_int_1 = unsigned_int_3;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			int_1 = int_4 + int_1;
			short_1 = short_1;
			if(1)
			{
				double_2 = double_2 * double_1;
			}
			if(1)
			{
				int_4 = int_2 * int_1;
			}
		}
	}
}
void v_term_miniview_get( short parameter_1)
{
	if(1)
	{
	}
}
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	float float_4 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	int_3 = int_1 + int_2;
	float_1 = float_1 + float_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		long long_2 = 1;
		float_2 = float_1;
		if(1)
		{
			float float_3 = 1;
			float_2 = float_1 + float_3;
		}
		long_2 = long_1 + long_1;
	}
	int_4 = int_1 * int_3;
	if(1)
	{
		char char_1 = 1;
		int int_5 = 1;
		char_1 = char_1;
		int_5 = int_2;
		float_2 = float_1 + float_4;
		if(1)
		{
			char_2 = char_1 * char_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			v_miniview_position_offset(double_4,int_1,long_1);

			short_3 = short_1 + short_2;
			v_term_miniview_get(short_3);

			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			int_3 = int_2;
			unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
			if(1)
			{
				long long_3 = 1;
				long_1 = long_1 * long_3;
			}
		}
		if(1)
		{
			int_1 = v__sel_set(int_1,float_4);

			double_5 = v__remove_links(char_2,float_1,-1 );

			double_2 = double_2 * double_4;
		}
		if(1)
		{
			int int_6 = 1;
			int int_7 = 1;
			int_6 = int_5 * int_4;
			int_1 = int_4;
			int_1 = int_7 * int_5;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_6 = unsigned_int_6;
		}
	}
}
double v_termpty_save_new( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	float_2 = float_1 + float_2;
	short_1 = short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "O") < 0)
	{
	}
	v_termpty_save_free();

	double_1 = double_1 + double_1;
	long_3 = long_1 * long_2;
	return double_2;
}
unsigned int v_termpty_save_expand( long parameter_1,short parameter_2,long parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 * int_1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	return unsigned_int_1;
}
char v__termpty_cell_is_empty( float parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
float v_termpty_line_length( unsigned int parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		char_1 = v__termpty_cell_is_empty(float_1);

		double_2 = double_3 + double_4;
		if(1)
		{
		}
	}
	return float_2;
}
float v_verify_beacon( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
void v_termpty_text_save_top( short parameter_1,double parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float_1 = v_termpty_line_length(unsigned_int_1,long_1);

	float_1 = float_2 + float_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = v_termpty_save_expand(long_1,short_1,long_1);

	int_1 = int_1 * int_2;
	char_2 = char_1 + char_1;
	int_1 = int_3 * int_2;
	float_3 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		short_2 = short_1 * short_2;
		if(1)
		{
			double_1 = double_2;
		}
		if(1)
		{
			char char_4 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			float_1 = float_3 + float_2;
			char_5 = char_3 * char_4;
			int_3 = int_1 + int_2;
		}
	}
	double_1 = double_1 + double_1;
	int_5 = int_4 * int_2;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	float_1 = v_verify_beacon(char_3,int_4);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		char_5 = char_1 * char_2;
	}
	short_3 = short_1 + short_2;
	v_termpty_backlog_lock();

	short_2 = short_1;
	long_1 = long_2 * long_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		v_termpty_backlog_unlock();

		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		double_3 = v_termpty_save_new(long_1,int_4);

		double_4 = double_2;
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
}
void v_termpty_text_scroll( unsigned int parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_1;
	int_2 = int_1 * int_2;
	float_2 = float_1 * float_2;
	if(1)
	{
		v_termpty_cells_clear(unsigned_int_1,double_1,int_2);

		double_3 = double_2 + double_2;
	}
	if(1)
	{
		double_1 = double_2 * double_3;
	}
	double_2 = double_4 * double_5;
	long_2 = long_1 * long_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
		char_3 = char_1 + char_3;
		if(1)
		{
			v_termpty_text_save_top(short_2,double_2,unsigned_int_3);

			int_1 = int_1 * int_2;
		}
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_3;
		double_3 = double_5 * double_3;
		if(1)
		{
			int_2 = int_2;
		}
		long_1 = long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_6 = 1;
			double double_7 = 1;
			int int_4 = 1;
			double_7 = double_3 * double_6;
			short_2 = short_2 + short_2;
			int_3 = int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		}
	}
	v_termio_scroll(float_1,int_3,int_2,int_3);

}
void v_termpty_text_scroll_test( unsigned int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_1 = 1;
			float_3 = float_1 + float_2;
			double_1 = double_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		v_termpty_text_scroll(unsigned_int_2,short_1);

		short_2 = short_1 * short_1;
		char_1 = char_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
}
char v__cursor_to_start_of_line( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	return char_1;
}
int v__tab_forward( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
void v__handle_cursor_control( unsigned int parameter_1,long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	int_2 = int_1 + int_1;
	char_2 = char_1 + char_2;
	char_1 = char_1 * char_1;
	long_2 = long_1 * long_1;
	short_2 = short_1 * short_2;
	short_2 = short_1 + short_1;
	double_3 = double_2 + double_1;
	char_3 = char_2;
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	v_termpty_text_scroll_test(unsigned_int_1,unsigned_int_2);

	short_3 = short_2 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1;
	if(1)
	{
		double double_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double_4 = double_2 * double_4;
		long_2 = long_3 + long_4;
		char_2 = v__cursor_to_start_of_line(char_4);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	int_3 = v__tab_forward(int_2,int_4);

	short_4 = short_2 + short_2;
}
int v_termpty_handle_seq( float parameter_1,long parameter_2,long parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	char controller4vul_1327[3];
	fgets(controller4vul_1327 ,3 ,stdin);
	if( strcmp( controller4vul_1327, "_X") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		double_1 = v__handle_esc(double_1,float_1,long_1,uni_para);

		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3;
	}
	return int_2;
}
void v_termpty_handle_buf( float parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	char_1 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char controller4vul_1326[3];
	fgets(controller4vul_1326 ,3 ,stdin);
	if( strcmp( controller4vul_1326, "I0") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		int_1 = v_termpty_handle_seq(float_1,long_1,long_1,uni_para);

		short_2 = short_1 + short_1;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 + long_3;
	}
	if(1)
	{
		double_3 = double_2 * double_2;
	}
	double_1 = double_3;
}
void v_theme_reload( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_2 = short_1 + short_2;
	double_1 = double_1 + double_2;
	double_1 = double_3 * double_4;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
}
int v_theme_reload_cb(unsigned int parameter_2,long parameter_3,int parameter_4)
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
	long long_1 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_1;
	double_1 = double_1 * double_1;
	double_1 = double_3 * double_3;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_theme_reload(float_1);

	long_1 = long_1 * long_1;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2 + long_1;
	}
	return int_3;
}
void v_theme_auto_reload_enable( unsigned int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = v_theme_reload_cb(unsigned_int_1,long_1,int_2);

	int_4 = int_2 + int_3;
}
void v__cursor_shape_to_group_name( int parameter_1)
{
}
unsigned int v_config_theme_path_default_get()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	return unsigned_int_1;
}
int v_theme_path_get()
{
	int int_1 = 1;
	return int_1;
}
int v_config_theme_path_get( float parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = v_theme_path_get();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	return int_1;
}
double v_theme_apply( int parameter_1,long parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = v_config_theme_path_get(float_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	float_3 = float_1 * float_2;
	float_3 = float_3 * float_3;
	if(1)
	{
	}
	unsigned_int_3 = v_config_theme_path_default_get();

	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	char_3 = char_2 * char_1;
	return double_1;
}
void v_termio_set_cursor_shape( char parameter_1,double parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = float_1;
	double_1 = v_theme_apply(int_1,long_1,double_2);

	v_theme_auto_reload_enable(unsigned_int_1);

	double_1 = double_2 * double_1;
	double_2 = double_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_1 + short_1;
	long_2 = long_1 + long_2;
	v__cursor_shape_to_group_name(int_1);

	double_2 = double_1 * double_1;
	char_1 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_4;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 * int_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		}
		if(1)
		{
			int_2 = int_3 * int_2;
		}
	}
}
void v_termpty_clear_tabs_on_screen( float parameter_1)
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ":T") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "OM") < 0)
	{
	}
	short_3 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			v_termpty_save_free();

			float_1 = float_1 * float_1;
		}
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		v_termpty_backlog_unlock();

		short_2 = short_3 * short_3;
	}
	if(1)
	{
		v_termpty_backlog_lock();

		long_1 = long_1 + long_1;
	}
	int_3 = int_1 + int_2;
	float_3 = float_1 * float_2;
	long_1 = long_2;
}
long v__ts_free()
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_2;
	return long_1;
}
void v_termpty_save_free()
{
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
		double_1 = double_1 * double_1;
	}
	long_3 = v__ts_free();

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_1;
	char_1 = char_2;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( long parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	v_termpty_backlog_size_set(char_1,int_1);

	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	short_2 = short_1 + short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "{") < 0)
	{
		short short_3 = 1;
		long long_2 = 1;
		short_1 = short_2 * short_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			v_termpty_backlog_lock();

			float_1 = float_1;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		long_1 = long_2 * long_1;
	}
	v_termpty_save_free();

	v_termpty_backlog_unlock();

	unsigned_int_2 = unsigned_int_3;
	int_2 = int_1 + int_1;
	int_2 = int_2 * int_2;
	float_1 = float_2 + float_3;
	double_2 = double_2 * double_1;
}
void v_termpty_reset_att( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short_3 = short_1 + short_2;
	float_1 = float_1 * float_1;
	double_1 = double_1 * double_2;
	double_3 = double_3 * double_1;
	char_2 = char_1 * char_2;
	int_2 = int_1 + int_1;
	float_1 = float_2 * float_3;
	long_3 = long_1 * long_2;
	long_4 = long_1 * long_3;
	double_4 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_2;
	int_3 = int_1 + int_3;
	int_4 = int_1 + int_1;
	char_3 = char_3 + char_2;
	int_2 = int_2 * int_4;
	int_6 = int_5 * int_1;
	int_4 = int_6 + int_7;
	double_2 = double_3 * double_5;
	double_5 = double_6 + double_2;
	long_2 = long_3 + long_3;
	int_1 = int_7 * int_6;
	short_2 = short_3;
}
long v_termio_config_get( double parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	char_1 = char_1;
	return long_1;
}
void v_termpty_reset_state( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_6 = 1;
	int int_8 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_7 = 1;
	short short_3 = 1;
	long_1 = long_1 * long_2;
	v_termpty_reset_att(short_1);

	int_1 = int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "N") < 0)
	{
		int_4 = int_2 + int_3;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_3 + long_1;
	v_termpty_clear_tabs_on_screen(float_1);

	float_2 = float_2 + float_2;
	char_1 = char_1;
	long_1 = long_3 + long_3;
	int_2 = int_1 * int_3;
	char_3 = char_2 + char_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	double_2 = double_1 * double_1;
	short_1 = short_2 + short_1;
	long_1 = long_1;
	int_5 = int_4;
	long_2 = long_3 + long_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	long_1 = long_4 * long_5;
	long_4 = v_termio_config_get(double_3);

	float_4 = float_2 * float_3;
	int_1 = int_4;
	char_1 = char_2 * char_3;
	int_7 = int_6 * int_1;
	long_3 = long_5 * long_6;
	float_2 = float_1 * float_2;
	int_5 = int_3 * int_4;
	v_termpty_clear_backlog(long_5);

	int_5 = int_6 * int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_8 = int_1 * int_7;
	int_6 = int_4 * int_3;
	double_1 = double_3 + double_3;
	char_1 = char_4 + char_2;
	int_4 = int_5 * int_6;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	double_6 = double_4 * double_5;
	long_1 = long_6;
	long_6 = long_7 * long_3;
	v_termio_set_cursor_shape(char_2,double_4);

	short_1 = short_3 + short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_7 = 1;
		double_2 = double_4 + double_7;
	}
	if(1)
	{
		long long_8 = 1;
		long_3 = long_5 * long_8;
	}
}
void v_termpty_resize_tabs( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2 * double_2;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		double double_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_5 = double_3 * double_4;
		}
		if(1)
		{
			double_2 = double_5;
		}
		long_2 = long_1 + long_2;
	}
	float_1 = float_3 + float_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
}
double v__termpty_init( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	short short_4 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_2 + int_3;
	short_3 = short_1 * short_2;
	char_1 = char_1 * char_1;
	v_termpty_resize_tabs(int_2,int_3,int_3);

	long_2 = long_1 * long_1;
	int_5 = int_1 * int_4;
	float_1 = float_1 * float_2;
	double_1 = double_1 + double_1;
	v_termpty_reset_state(int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	char_1 = char_1 + char_2;
	short_2 = short_2 + short_1;
	short_4 = short_4;
	int_3 = int_2 * int_1;
	return double_2;
}
int v__add_default_keys( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	double double_8 = 1;
	float float_7 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_6 = 1;
	short_1 = short_1 * short_2;
	float_1 = float_1 * float_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2 + int_2;
	long_1 = long_1 * long_1;
	short_1 = short_2 * short_1;
	double_1 = double_1 * double_1;
	float_4 = float_2 + float_3;
	double_2 = double_2 * double_2;
	double_3 = double_2 * double_1;
	unsigned_int_2 = unsigned_int_3;
	double_2 = double_3 * double_3;
	double_2 = double_4 + double_5;
	double_3 = double_6 * double_7;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	int_4 = int_3 * int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	char_2 = char_1 + char_1;
	short_3 = short_3 + short_4;
	double_4 = double_6 + double_5;
	char_2 = char_2 + char_2;
	short_6 = short_5 * short_2;
	int_4 = int_4 * int_4;
	double_7 = double_6 * double_4;
	char_1 = char_3 * char_2;
	char_4 = char_1;
	char_5 = char_4 + char_1;
	float_6 = float_4 + float_5;
	double_4 = double_2;
	int_4 = int_4 * int_2;
	float_2 = float_5 + float_4;
	float_2 = float_6 + float_3;
	long_2 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	char_5 = char_6 * char_4;
	char_4 = char_7 + char_2;
	double_2 = double_7 * double_7;
	long_2 = long_2;
	double_8 = double_2 + double_6;
	float_7 = float_7 + float_3;
	float_1 = float_7;
	long_2 = long_2 + long_3;
	int_5 = int_1 * int_5;
	double_5 = double_2 + double_6;
	char_4 = char_1 * char_6;
	float_7 = float_3 * float_7;
	int_4 = int_1;
	int_1 = int_5;
	double_9 = double_6 * double_8;
	double_10 = double_4;
	return int_6;
}
void v_colors_standard_get( int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,float parameter_5,unsigned int parameter_6)
{
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "y") < 0)
	{
		double double_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		double_1 = double_1 * double_1;
		long_1 = long_1 + long_2;
		double_1 = double_2 + double_1;
		double_1 = double_1 * double_3;
		short_1 = short_1 * short_1;
		double_3 = double_1 * double_4;
		long_2 = long_2 + long_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_3 * long_3;
	double_2 = double_2;
	int_1 = int_1 + int_1;
}
double v_config_new()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_5 = 1;
	double double_5 = 1;
	int int_6 = 1;
	double double_10 = 1;
	float float_6 = 1;
	int int_9 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 * char_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		double double_1 = 1;
		short short_4 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_4 = 1;
		short short_5 = 1;
		char char_4 = 1;
		int int_7 = 1;
		float float_4 = 1;
		double double_6 = 1;
		float float_5 = 1;
		short short_6 = 1;
		char char_5 = 1;
		int int_8 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_9 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_7 = 1;
		unsigned int unsigned_int_5 = 1;
		short_3 = short_1 + short_2;
		float_1 = float_1 * float_1;
		double_1 = double_1 * double_1;
		short_4 = short_1 * short_3;
		int_1 = int_1 * int_1;
		double_3 = double_2 + double_2;
		char_2 = char_2 * char_3;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		short_1 = short_1;
		char_1 = char_2;
		double_3 = double_4;
		int_1 = int_2 * int_1;
		int_3 = int_2 * int_1;
		float_3 = float_2 * float_1;
		int_4 = int_1 + int_3;
		short_1 = short_5 * short_1;
		char_2 = char_4 * char_1;
		int_5 = int_3 * int_4;
		double_4 = double_5 + double_2;
		int_7 = int_6 + int_5;
		float_3 = float_4 + float_1;
		int_4 = int_4 + int_2;
		double_4 = double_1 * double_6;
		float_5 = float_3 + float_5;
		double_2 = double_1 * double_3;
		short_1 = short_5 * short_2;
		float_5 = float_5 + float_4;
		int_6 = int_3 * int_4;
		unsigned_int_3 = unsigned_int_2;
		double_4 = double_5 * double_5;
		short_1 = short_4 * short_5;
		short_1 = short_5 * short_6;
		char_1 = char_5 + char_4;
		int_1 = int_8 * int_1;
		double_5 = double_7 + double_5;
		double_2 = double_8 * double_1;
		char_2 = char_3 + char_5;
		long_2 = long_1 + long_1;
		double_9 = double_9 * double_4;
		double_2 = double_7;
		int_8 = int_6 * int_8;
		float_2 = float_2 * float_3;
		double_10 = double_3;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		float_5 = float_4 * float_4;
		float_4 = float_5 + float_1;
		long_3 = long_4;
		short_3 = short_4 * short_7;
		float_2 = float_4 + float_6;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short short_8 = 1;
				double double_11 = 1;
				int int_10 = 1;
				int_5 = v__add_default_keys(double_5);

				int_6 = int_3 + int_2;
				short_8 = short_5 + short_1;
				v_colors_standard_get(int_6,int_2,int_9,unsigned_int_3,float_6,unsigned_int_3);

				double_8 = double_10 + double_2;
				double_1 = double_9 + double_11;
				float_3 = float_5 + float_3;
				int_5 = int_10 + int_3;
			}
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	}
	return double_10;
}
int main()
{
	int uni_para =893;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char_3 = char_1 * char_2;
	int_3 = int_1 + int_2;
	int_4 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	float_1 = float_1 * float_1;
	long_1 = long_2;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	char_3 = char_2;
	int_4 = int_1 * int_2;
	long_1 = long_2 + long_2;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		int_5 = int_3 + int_1;
	}
	double_1 = double_2 + double_3;
	if(1)
	{
	}
	double_3 = double_4 + double_5;
	char_3 = char_2 * char_2;
	int_3 = int_1 * int_5;
	char controller4vul_1322[3];
	fgets(controller4vul_1322 ,3 ,stdin);
	if( strcmp( controller4vul_1322, ">x") > 0)
	{
		unsigned int unsigned_int_4 = 1;
		double double_8 = 1;
		if(1)
		{
			double_3 = double_3 + double_6;
		}
		if(1)
		{
			double_2 = double_2 + double_5;
		}
		if(1)
		{
			int_5 = int_1 * int_6;
		}
		int_5 = int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			double_3 = double_7 + double_6;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			double_5 = double_4 * double_6;
		}
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			int_1 = int_6 * int_4;
		}
		if(1)
		{
			short_2 = short_1 * short_2;
		}
		double_6 = double_8;
		if(1)
		{
			double_4 = double_4;
		}
		unsigned_int_3 = unsigned_int_4;
		if(1)
		{
			float_2 = float_1 + float_2;
		}
		char controller4vul_1323[2];
		fgets(controller4vul_1323 ,2 ,stdin);
		if( strcmp( controller4vul_1323, "^") > 0)
		{
			int_2 = int_2 + int_2;
			char controller4vul_1324[3];
			fgets(controller4vul_1324 ,3 ,stdin);
			if( strcmp( controller4vul_1324, "76") < 0)
			{
				long long_3 = 1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
				unsigned_int_2 = unsigned_int_5;
				char controller4vul_1325[3];
				fgets(controller4vul_1325 ,3 ,stdin);
				if( strcmp( controller4vul_1325, "OO") > 0)
				{
					v_termpty_handle_buf(float_2,int_5,int_5,uni_para);

					long_3 = long_2 * long_3;
				}
				if(1)
				{
					long_3 = long_2 * long_3;
				}
				if(1)
				{
					double_7 = double_7 * double_1;
				}
				if(1)
				{
					short_2 = short_1 * short_1;
				}
				if(1)
				{
					long long_4 = 1;
					long long_5 = 1;
					long_3 = long_4 * long_5;
				}
				if(1)
				{
					double_5 = double_2 * double_4;
				}
				if(1)
				{
					float float_3 = 1;
					float_2 = float_2 * float_3;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_1;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
				}
				if(1)
				{
					int_2 = int_2;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_5;
				}
				if(1)
				{
					double_1 = double_4 + double_8;
				}
			}
			if(1)
			{
				double_8 = double_8;
			}
		}
	}
	if(1)
	{
		double_1 = double_3 + double_4;
	}
	if(1)
	{
		double_6 = double_3 + double_5;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		long_2 = long_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		}
	}
	double_6 = double_3;
	unsigned_int_6 = unsigned_int_7;
	short_2 = short_2 * short_1;
	double_1 = double_4 + double_2;
	if(1)
	{
		double double_9 = 1;
		double_9 = double_5 * double_7;
		short_1 = short_2;
	}
	return int_6;
}

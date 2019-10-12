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

short v__termpty_shutdown( int parameter_1);
void v_termpty_text_scroll_rev_test( double parameter_1,char parameter_2);
void v__handle_esc_dcs( double parameter_1,unsigned int parameter_2,char parameter_3);
unsigned int v__handle_op_a( unsigned int parameter_1,float parameter_2,char parameter_3);
char v__termpty_ext_handle( char parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void v__handle_esc_terminology( short parameter_1,float parameter_2,char parameter_3);
int v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3);
void v__smart_calculate_226( long parameter_1);
unsigned int v__smart_size( double parameter_1,int parameter_2,int parameter_3,float parameter_4);
void v_colors_term_init( long parameter_1,int parameter_2,short parameter_3);
void v_termio_config_update( int parameter_1);
double v__font_size_set( int parameter_1,int parameter_2);
void v_termio_font_size_set( int parameter_1,int parameter_2);
int v__handle_xterm_50_command( double parameter_1,char parameter_2,int parameter_3);
double v__eina_unicode_to_hex( float parameter_1);
void v__xterm_parse_color( int parameter_1,int parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5);
char v__xterm_arg_get( char parameter_1);
unsigned int v__handle_esc_xterm( unsigned int parameter_1,unsigned int parameter_2,short parameter_3);
void v_termpty_cells_set_content( float parameter_1,double parameter_2,double parameter_3,int parameter_4);
int v__handle_esc_csi_decera( char parameter_1,short parameter_2);
void v_termpty_cells_att_fill_preserve_colors( float parameter_1,long parameter_2,float parameter_3,int parameter_4);
short v__clean_up_rect_coordinates( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
double v__handle_esc_csi_decfra( char parameter_1,char parameter_2);
float v__handle_esc_csi_decslrm( char parameter_1,unsigned int parameter_2);
short v__handle_esc_csi_decstbm( double parameter_1,short parameter_2);
int v__handle_esc_csi_decscusr( int parameter_1,char parameter_2);
int v__handle_esc_csi_dsr( long parameter_1,short parameter_2);
float v__handle_esc_csi_truecolor_cmyk( char parameter_1,long parameter_2);
int v__handle_esc_csi_truecolor_cmy( double parameter_1,int parameter_2);
char v__approximate_truecolor_rgb( short parameter_1,int parameter_2,int parameter_3,int parameter_4);
double v__csi_truecolor_arg_get( unsigned int parameter_1);
long v__handle_esc_csi_truecolor_rgb( float parameter_1,int parameter_2);
long v__handle_esc_csi_color_set( long parameter_1,float parameter_2);
void v_termpty_cursor_copy( long parameter_1,double parameter_2);
void v__switch_to_alternative_screen( double parameter_1,int parameter_2);
int v__move_cursor_to_origin( long parameter_1);
int v__pty_size();
short v__limit_coord();
char v__check_screen_info( short parameter_1,char parameter_2);
short v__termpty_line_rewrap( char parameter_1,int parameter_2,int parameter_3,int parameter_4,char parameter_5);
char v__backlog_remove_latest_nolock( float parameter_1);
short v_termpty_save_extract( long parameter_1);
char v__termpty_line_is_empty( long parameter_1,float parameter_2);
void v_termpty_screen_swap( float parameter_1);
void v_termpty_resize( short parameter_1,int parameter_2,int parameter_3);
double v_termio_win_get( char parameter_1);
unsigned int v__handle_esc_csi_reset_mode( unsigned int parameter_1,char parameter_2,int parameter_3);
void v__handle_esc_csi_cursor_pos_set( int parameter_1,float parameter_2,float parameter_3);
void v_termpty_text_scroll_rev( char parameter_1,unsigned int parameter_2);
void v_termpty_clear_line( char parameter_1,double parameter_2,int parameter_3);
void v_termpty_clear_screen( short parameter_1,float parameter_2);
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,int parameter_2,unsigned int parameter_3,float parameter_4,int parameter_5);
void v__termpty_charset_trans( short parameter_1,double parameter_2);
void v_termio_content_change( short parameter_1,int parameter_2,char parameter_3,int parameter_4);
void v_termpty_text_append( unsigned int parameter_1,char parameter_2,int parameter_3);
char v__csi_arg_get();
int v__handle_esc_csi( unsigned int parameter_1,short parameter_2,long parameter_3,int uni_para);
int v__safechar( short parameter_1);
float v__handle_esc( int parameter_1,int parameter_2,float parameter_3,int uni_para);
void v_termpty_cell_fill( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_cells_fill( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
void v_termpty_cells_clear( unsigned int parameter_1,short parameter_2,int parameter_3);
int v__tooltip_del(double parameter_2);
short v__tooltip_content(int parameter_2,unsigned int parameter_3);
void v_MD5Final( int parameter_1,short parameter_2);
void v_MD5Transform( short parameter_1,short parameter_2);
void v_byteReverse( float parameter_1,double parameter_2);
void v_MD5Update( double parameter_1,char parameter_2,unsigned int parameter_3);
void v_MD5Init( unsigned int parameter_1);
void v_gravatar_tooltip( long parameter_1,unsigned int parameter_2,char parameter_3);
long v__cb_link_drag_done(short parameter_2);
short v__cb_link_drag_accept(char parameter_2,long parameter_3);
int v__cb_link_drag_move(int parameter_2,long parameter_3,int parameter_4,long parameter_5);
int v__cb_link_icon_new(int parameter_2,double parameter_3,char parameter_4);
double v__cb_link_move(int parameter_2,short parameter_3);
unsigned int v__cb_link_up_delay();
long v__cb_link_up(int parameter_2,unsigned int parameter_3);
void v_term_focus( float parameter_1);
void v__term_is_focused( short parameter_1);
void v_term_unfocus( char parameter_1);
double v__cb_ctxp_del(float parameter_2,char parameter_3);
short v__cb_ctxp_dismissed(char parameter_2);
short v__cb_ctxp_link_copy(char parameter_2);
float v__screen_visual_bounds( unsigned int parameter_1);
unsigned int v__draw_cell( double parameter_1,long parameter_2,short parameter_3,short parameter_4);
long v__draw_line( char parameter_1,char parameter_2,float parameter_3,int parameter_4,long parameter_5);
short v_termpty_backlog_length( char parameter_1);
int v_termio_pty_get( char parameter_1);
double v_termio_textgrid_get( char parameter_1);
double v_miniview_colors_get( long parameter_1,short parameter_2);
short v__deferred_renderer();
long v__queue_render( float parameter_1);
void v_miniview_redraw( long parameter_1);
long v__block_obj_del( float parameter_1);
int v__termpty_is_dblwidth_slow_get( double parameter_1,int parameter_2);
float v__termpty_is_dblwidth_get( float parameter_1,int parameter_2);
float v_term_preedit_str_get( char parameter_1);
void v_media_get();
double v__smart_media_clicked(int parameter_2);
void v_media_control_get( int parameter_1);
char v__smart_media_stop(char parameter_2);
char v__smart_media_pause(unsigned int parameter_2);
unsigned int v__smart_media_play(short parameter_2);
void v__smart_media_del(int parameter_2,double parameter_3);
void v_media_visualize_set( int parameter_1,long parameter_2);
void v_media_mute_set( short parameter_1,unsigned int parameter_2);
void v_media_volume_set( long parameter_1,double parameter_2);
float v__cb_media_vol(char parameter_2,long parameter_3,long parameter_4);
short v__cb_media_pos(unsigned int parameter_2,short parameter_3,unsigned int parameter_4);
long v__cb_media_pos_drag_stop(short parameter_2,int parameter_3,short parameter_4);
long v__cb_media_pos_drag_start(float parameter_2,short parameter_3,float parameter_4);
void v_media_stop( float parameter_1);
float v__cb_media_stop(double parameter_2,char parameter_3,double parameter_4);
char v__cb_media_pause(unsigned int parameter_2,char parameter_3,int parameter_4);
void v_media_play_set( unsigned int parameter_1,int parameter_2);
short v__cb_media_play(short parameter_2,int parameter_3,unsigned int parameter_4);
void v_media_position_set( unsigned int parameter_1,double parameter_2);
char v__cb_mov_ref(float parameter_2);
float v__cb_mov_progress(int parameter_2);
double v__cb_mov_restart();
double v__cb_mov_decode_stop(int parameter_2);
unsigned int v__cb_mov_len_change(char parameter_2);
int v__cb_mov_frame_resize(short parameter_2);
char v__cb_mov_frame_decode(float parameter_2);
short v__type_mov_init( int parameter_1);
char v__cb_edje_preloaded(short parameter_2,int parameter_3,float parameter_4);
long v__type_edje_init( char parameter_1);
short v__type_scale_init( double parameter_1);
short v__cb_img_frame();
double v__type_img_anim_handle( char parameter_1);
unsigned int v__cb_img_preloaded(short parameter_2,short parameter_3);
char v__type_img_init( float parameter_1);
unsigned int v__url_compl_cb(int parameter_2);
int v__url_prog_cb(int parameter_2);
int v__type_thumb_calc( char parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5);
double v__type_mov_calc( short parameter_1,double parameter_2,int parameter_3,int parameter_4,long parameter_5);
int v__type_edje_calc( float parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4,short parameter_5);
long v__type_img_calc( double parameter_1,short parameter_2,unsigned int parameter_3,float parameter_4,unsigned int parameter_5);
unsigned int v__cb_scale_preloaded(double parameter_2,short parameter_3,int uni_para);
char v__type_scale_calc( char parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5,int uni_para);
char v__unsmooth_timeout(int uni_para);
void v__smooth_handler( long parameter_1,int uni_para);
float v__smart_calculate( float parameter_1,int uni_para);
unsigned int v__smart_move( char parameter_1,unsigned int parameter_2,unsigned int parameter_3);
unsigned int v__smart_resize( short parameter_1,short parameter_2,short parameter_3);
long v__smart_del( float parameter_1);
char v__smart_add();
short v__smart_init(int uni_para);
int v_media_add( unsigned int parameter_1,double parameter_2,char parameter_3,int parameter_4,short parameter_5,int uni_para);
float v__block_media_activate( double parameter_1,float parameter_2,int uni_para);
unsigned int v__block_edje_message_cb(double parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_write( short parameter_1,unsigned int parameter_2,int parameter_3);
short v__block_edje_signal_cb(long parameter_2,int parameter_3,int parameter_4);
void v_termpty_block_chid_update( short parameter_1,float parameter_2);
double v__block_edje_cmds( char parameter_1,short parameter_2,char parameter_3,short parameter_4);
unsigned int v_homedir_get( char parameter_1,int parameter_2);
double v__block_edje_activate( double parameter_1,int parameter_2);
double v__block_activate( int parameter_1,long parameter_2,int uni_para);
unsigned int v_termpty_block_get( char parameter_1,int parameter_2);
int v_termpty_block_id_get( float parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( int parameter_1,int parameter_2);
int v__smart_apply(int uni_para);
int v__smart_cb_change(int uni_para);
short v__smart_update_queue( char parameter_1,unsigned int parameter_2,int uni_para);
int v__lost_selection_reset_job();
short v__lost_selection(short parameter_2,int uni_para);
int v__take_selection_text( short parameter_1,char parameter_2,short parameter_3,int uni_para);
int v__cb_ctxp_link_content_copy(int parameter_2,int uni_para);
void v_ty_sb_free( float parameter_1);
int v_ty_sb_steal_buf( short parameter_1);
int v_codepoint_to_utf8( char parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( short parameter_1);
int v_ty_sb_add( double parameter_1,long parameter_2,double parameter_3);
unsigned int v__termpty_cellrow_from_beacon_get( long parameter_1,int parameter_2,unsigned int parameter_3);
float v_termpty_cellrow_get( double parameter_1,int parameter_2,double parameter_3);
void v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,char parameter_6,int parameter_7);
double v__cb_ctxp_link_open(float parameter_2);
float v__should_inline( double parameter_1);
char v_link_is_email( int parameter_1);
short v_link_is_protocol( float parameter_1);
short v_link_is_url( int parameter_1);
unsigned int v__activate_link( unsigned int parameter_1,double parameter_2);
float v__cb_ctxp_link_preview(short parameter_2);
void v__is_fmt( double parameter_1,short parameter_2);
unsigned int v_media_src_type_get( double parameter_1);
void v__mouse_in_selection( float parameter_1,int parameter_2,int parameter_3);
short v__smart_xy_to_cursor( char parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5);
char v__cb_link_down(char parameter_2,float parameter_3,int uni_para);
short v_main_term_popup_exists( double parameter_1);
int v__update_link( long parameter_1,char parameter_2,long parameter_3,float parameter_4,int uni_para);
float v__remove_links( float parameter_1,int parameter_2,int uni_para);
int v__sel_set( int parameter_1,long parameter_2);
int v_termio_scroll_get( short parameter_1);
void v_miniview_position_offset( double parameter_1,int parameter_2,long parameter_3);
double v_term_miniview_get( char parameter_1);
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
int v_termpty_save_new( char parameter_1,int parameter_2);
char v_termpty_save_expand( short parameter_1,float parameter_2,long parameter_3);
int v__termpty_cell_is_empty( double parameter_1);
char v_termpty_line_length( float parameter_1,double parameter_2);
unsigned int v_verify_beacon( float parameter_1,int parameter_2);
void v_termpty_text_save_top( long parameter_1,long parameter_2,int parameter_3);
void v_termpty_text_scroll( int parameter_1,double parameter_2,int uni_para);
void v_termpty_text_scroll_test( short parameter_1,int parameter_2,int uni_para);
unsigned int v__cursor_to_start_of_line( int parameter_1);
int v__tab_forward( long parameter_1,int parameter_2);
char v__handle_cursor_control( unsigned int parameter_1,unsigned int parameter_2,int uni_para);
int v_termpty_handle_seq( float parameter_1,double parameter_2,int parameter_3,int uni_para);
void v_termpty_handle_buf( float parameter_1,short parameter_2,int parameter_3,int uni_para);
void v_theme_reload( float parameter_1);
float v_theme_reload_cb(long parameter_2,long parameter_3,int parameter_4);
void v_theme_auto_reload_enable( double parameter_1);
unsigned int v__cursor_shape_to_group_name( double parameter_1);
void v_config_theme_path_default_get( long parameter_1);
char v_theme_path_get();
unsigned int v_config_theme_path_get();
double v_theme_apply( double parameter_1,long parameter_2,int parameter_3);
void v_termio_set_cursor_shape( float parameter_1,int parameter_2);
void v_termpty_clear_tabs_on_screen( short parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( short parameter_1,float parameter_2);
int v__ts_free();
void v_termpty_save_free( unsigned int parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( char parameter_1);
void v_termpty_reset_att( double parameter_1);
unsigned int v_termio_config_get();
void v_termpty_reset_state( char parameter_1);
void v_termpty_resize_tabs( unsigned int parameter_1,int parameter_2,int parameter_3);
double v__termpty_init( double parameter_1);
void v__add_default_keys( int parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,float parameter_3,short parameter_4,float parameter_5,int parameter_6);
void v_config_new();
short v__termpty_shutdown( int parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_1;
	return short_1;
}
void v_termpty_text_scroll_rev_test( double parameter_1,char parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "*") > 0)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "c") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		double_3 = double_1 * double_2;
		short_2 = short_1 * short_2;
		v_termpty_text_scroll_rev(char_1,unsigned_int_1);

		int_1 = int_1 + int_1;
	}
}
void v__handle_esc_dcs( double parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					short_1 = short_1 * short_1;
				}
				if(1)
				{
					char char_1 = 1;
					v_termpty_write(short_1,unsigned_int_1,int_1);

					char_2 = char_1 * char_1;
				}
			}
		}
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			char_3 = char_3 + char_4;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
		if(1)
		{
		}
		if(1)
		{
			double_1 = double_2 + double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_5 = 1;
			char_2 = char_5;
		}
	}
	int_1 = v__safechar(short_2);

}
unsigned int v__handle_op_a( unsigned int parameter_1,float parameter_2,char parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_2;
}
char v__termpty_ext_handle( char parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = v__handle_op_a(unsigned_int_2,float_1,char_1);

	double_2 = double_1 * double_1;
	short_1 = short_2;
	return char_1;
}
void v__handle_esc_terminology( short parameter_1,float parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char_1 = v__termpty_ext_handle(char_2,unsigned_int_1,unsigned_int_2);

	long_1 = long_1 + long_1;
	unsigned_int_1 = v_termio_config_get();

}
int v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double_4 = double_2 + double_4;
	}
	short_1 = short_1;
	if(1)
	{
	}
	double_5 = double_2 + double_4;
	short_2 = short_1 + short_2;
	char_1 = char_2;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, ")E") < 0)
	{
		char_1 = char_1 + char_2;
	}
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	float_1 = float_1 * float_2;
	double_2 = double_6 + double_6;
	int_3 = int_2 * int_1;
	return int_1;
}
void v__smart_calculate_226( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_3 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_2;
	short_2 = short_2;
	long_2 = long_1 * long_1;
	float_2 = float_2 + float_1;
	double_1 = double_1;
	char_1 = char_1 * char_2;
}
unsigned int v__smart_size( double parameter_1,int parameter_2,int parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		int_2 = v__smart_apply(-1 );

		int_3 = int_2 + int_2;
		int_3 = int_4;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	double_1 = double_1;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	double_1 = double_2;
	v_termpty_resize(short_1,int_5,int_2);

	char_2 = char_2 * char_1;
	float_1 = float_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	short_3 = short_2 * short_3;
	short_3 = short_3 * short_3;
	int_3 = v__sel_set(int_4,long_1);

	v__smart_calculate_226(long_2);

	short_4 = short_2 * short_4;
	double_3 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	return unsigned_int_2;
}
void v_colors_term_init( long parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1 * int_1;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		char_2 = char_1 + char_1;
		if(1)
		{
			double_4 = double_2 * double_3;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				char char_3 = 1;
				long_2 = long_1 + long_2;
				short_2 = short_1 * short_2;
				char_2 = char_3 + char_4;
				double_4 = double_1 + double_5;
				unsigned_int_2 = unsigned_int_2;
			}
		}
		float_1 = float_2 * float_2;
		float_1 = float_2 + float_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_2 = short_3 * short_4;
			if(1)
			{
				int_2 = int_1;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
			if(1)
			{
				int_2 = int_2 * int_3;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float float_5 = 1;
		float float_6 = 1;
		char_4 = char_4 + char_4;
		char controller_8[2];
		fgets(controller_8 ,2 ,stdin);
		if( strcmp( controller_8, "T") > 0)
		{
			float float_4 = 1;
			int int_4 = 1;
			double_5 = double_1;
			double_2 = double_1 + double_1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
			float_3 = float_4 * float_3;
			int_2 = int_4 + int_3;
		}
		float_6 = float_5 * float_6;
	}
}
void v_termio_config_update( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	float_2 = float_1 + float_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = v__smart_size(double_3,int_1,int_2,float_1);

	int_4 = int_3 + int_4;
	double_4 = double_4;
	if(1)
	{
		v_colors_term_init(long_1,int_3,short_1);

		short_3 = short_1 + short_2;
	}
	double_5 = double_1 * double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	char_1 = char_1 * char_1;
	int_4 = int_3 + int_1;
	v_termio_set_cursor_shape(float_1,int_4);

	int_1 = int_5;
	int_2 = int_1;
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_6;
	double_6 = double_2 + double_1;
	int_1 = int_5;
	if(1)
	{
		long_1 = long_2 * long_2;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_3 * unsigned_int_6;
	}
	char_2 = char_3;
	v_termpty_backlog_size_set(short_4,float_1);

	float_2 = float_2;
	double_4 = double_5 + double_6;
	long_2 = long_1 * long_2;
	short_2 = short_1 + short_3;
}
double v__font_size_set( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_2;
	short_1 = short_1 * short_1;
	double_1 = double_3 * double_2;
	int_1 = int_2;
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_1 = float_1;
		char_3 = char_1 + char_2;
		v_termio_config_update(int_1);

		char_4 = char_4 + char_5;
		long_1 = long_1 + long_2;
		int_1 = int_2 * int_3;
	}
	return double_2;
}
void v_termio_font_size_set( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = v__font_size_set(int_1,int_1);

	char_3 = char_1 + char_2;
}
int v__handle_xterm_50_command( double parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return int_1;
	v_termio_font_size_set(int_2,int_2);

}
double v__eina_unicode_to_hex( float parameter_1)
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
void v__xterm_parse_color( int parameter_1,int parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	double double_9 = 1;
	double_1 = v__eina_unicode_to_hex(float_1);

	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		long_1 = long_1;
	}
	double_2 = double_1 * double_1;
	double_3 = double_1 * double_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		double double_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_8 = 1;
		double_4 = double_2 + double_3;
		if(1)
		{
			char_2 = char_1 + char_2;
		}
		unsigned_int_3 = unsigned_int_4;
		char_2 = char_3;
		if(1)
		{
			char_3 = char_1 * char_3;
		}
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
		double_5 = double_2 * double_5;
		if(1)
		{
			long_2 = long_2;
		}
		int_2 = int_1 + int_1;
		long_2 = long_3 + long_4;
		if(1)
		{
			double_6 = double_5 + double_4;
		}
		char_2 = char_1 * char_3;
		short_1 = short_2;
		if(1)
		{
			double_3 = double_3 * double_7;
		}
		unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
		double_8 = double_7 * double_1;
		if(1)
		{
			float float_4 = 1;
			float_4 = float_2 * float_3;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		short short_3 = 1;
		float float_5 = 1;
		short short_4 = 1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		if(1)
		{
			short_3 = short_2 + short_2;
		}
		float_3 = float_5 + float_2;
		double_7 = double_9;
		if(1)
		{
			int_1 = int_1 * int_1;
		}
		double_3 = double_6 * double_9;
		short_3 = short_1 * short_4;
		if(1)
		{
			int_1 = int_2;
		}
		long_2 = long_2 * long_1;
	}
	if(1)
	{
		double_1 = double_9 * double_4;
	}
	int_2 = int_2 + int_1;
}
char v__xterm_arg_get( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_6 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double_3 = double_1 + double_2;
	double_3 = double_1 + double_2;
	char_1 = char_1;
	int_1 = int_1 + int_1;
	long_1 = long_1 + long_2;
	int_1 = int_1 + int_2;
	short_1 = short_1 * short_2;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_4 * float_2;
	short_4 = short_2 + short_3;
	long_2 = long_1 + long_1;
	float_4 = float_4 * float_4;
	float_3 = float_5 * float_4;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	float_2 = float_6 + float_4;
	char_1 = char_1 + char_2;
	double_2 = double_3 + double_2;
	long_4 = long_1 + long_3;
	int_3 = int_3 * int_2;
	double_3 = double_4 + double_3;
	return char_1;
}
unsigned int v__handle_esc_xterm( unsigned int parameter_1,unsigned int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	int int_5 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	int int_8 = 1;
	int int_10 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	int_1 = int_2;
	float_1 = float_1;
	if(1)
	{
		int_3 = int_1 * int_1;
	}
	char_2 = char_1 + char_1;
	float_3 = float_2 * float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		float_2 = float_3 + float_4;
	}
	v__xterm_parse_color(int_1,int_4,unsigned_int_4,char_1,int_2);

	int_3 = int_2;
	char_4 = char_3 * char_1;
	int_1 = int_3 * int_3;
	double_3 = double_2 * double_3;
	char_3 = v__xterm_arg_get(char_2);

	float_4 = float_2 * float_4;
	if(1)
	{
		int_5 = int_2 + int_2;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_3;
		long_1 = long_3;
		unsigned_int_4 = v_termio_config_get();

		short_2 = short_1 + short_2;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		short_1 = short_2 * short_2;
	}
	double_1 = double_1 + double_4;
	v_termpty_write(short_1,unsigned_int_5,int_5);

	double_1 = double_4 + double_5;
	if(1)
	{
		float_4 = float_3;
	}
	if(1)
	{
		int_4 = v__handle_xterm_50_command(double_6,char_5,int_3);

		float_3 = float_4 * float_3;
	}
	if(1)
	{
		int int_7 = 1;
		char_4 = char_4 * char_5;
		double_4 = v_termio_textgrid_get(char_1);

		int_7 = int_1 * int_3;
	}
	if(1)
	{
		long_1 = long_2 * long_3;
	}
	if(1)
	{
		int int_9 = 1;
		int_5 = v__handle_xterm_777_command(char_3,char_1,int_8);

		int_1 = int_9 + int_1;
	}
	char_2 = char_3 + char_5;
	int_4 = int_8 * int_10;
	return unsigned_int_1;
}
void v_termpty_cells_set_content( float parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_3 = int_3 * int_1;
		long_2 = long_1 + long_1;
	}
}
int v__handle_esc_csi_decera( char parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char_3 = char_1 * char_2;
	char_2 = char_3 + char_1;
	int_1 = int_1 * int_2;
	char_3 = v__csi_arg_get();

	double_1 = double_1;
	long_1 = long_2;
	short_1 = v__clean_up_rect_coordinates(long_1,int_1,int_3,int_4,int_2);

	float_2 = float_1 * float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "?.") < 0)
	{
	}
	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		v_termpty_cells_set_content(float_2,double_2,double_1,int_1);

		double_1 = double_2;
		int_3 = int_5 + int_3;
	}
	return int_3;
}
void v_termpty_cells_att_fill_preserve_colors( float parameter_1,long parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double_3 = double_1 * double_2;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		float_1 = float_1 + float_2;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_4 = 1;
			char_3 = char_2 * char_1;
			int_2 = int_1 + int_1;
			double_3 = double_2 * double_2;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			short_1 = short_1 * short_2;
			char_2 = char_4 * char_3;
		}
	}
}
short v__clean_up_rect_coordinates( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	int_1 = int_2 + int_2;
	float_1 = float_1 + float_1;
	short_1 = short_1 * short_2;
	long_1 = long_1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 + float_2;
	}
	long_1 = long_1;
	double_2 = double_1 + double_1;
	if(1)
	{
		double_1 = double_1 * double_3;
	}
	if(1)
	{
		double_3 = double_1 * double_3;
	}
	if(1)
	{
		int_1 = int_2;
		if(1)
		{
			long long_3 = 1;
			long_3 = long_2 * long_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_2 + double_4;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
		}
	}
	short_3 = short_3 + short_1;
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4 + long_2;
	}
	if(1)
	{
	}
	short_4 = short_2 * short_3;
	long_5 = long_6;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return short_3;
}
double v__handle_esc_csi_decfra( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	double_2 = double_1 + double_1;
	char_1 = char_1 + char_2;
	v_termpty_cells_att_fill_preserve_colors(float_1,long_1,float_2,int_1);

	char_2 = char_2 * char_1;
	char_2 = v__csi_arg_get();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_4;
	short_1 = v__clean_up_rect_coordinates(long_1,int_1,int_2,int_3,int_4);

	double_2 = double_3;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
	}
	if(1)
	{
	}
	float_2 = float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		int int_5 = 1;
		short_2 = short_1 * short_1;
		int_4 = int_1 * int_5;
	}
	return double_3;
}
float v__handle_esc_csi_decslrm( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = v__move_cursor_to_origin(long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_2;
	double_1 = double_2 + double_2;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_3 * double_4;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 * int_1;
	}
	float_1 = float_1;
	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	char_1 = v__csi_arg_get();

	short_1 = short_1 + short_2;
	return float_1;
}
short v__handle_esc_csi_decstbm( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_2;
	float_1 = float_1 + float_1;
	int_1 = int_1;
	int_2 = v__move_cursor_to_origin(long_1);

	int_4 = int_3 + int_1;
	float_2 = float_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		double_1 = double_3 * double_3;
	}
	double_1 = double_3 + double_4;
	char_1 = v__csi_arg_get();

	short_3 = short_4;
	int_5 = int_5 + int_2;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 * char_2;
	return short_4;
}
int v__handle_esc_csi_decscusr( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	double_1 = double_2;
	short_2 = short_1 + short_1;
	float_1 = float_1 * float_2;
	int_3 = int_1 + int_2;
	int_3 = int_2 * int_3;
	float_2 = float_2 * float_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	char_1 = char_1 + char_2;
	char_3 = char_1 * char_1;
	v_termio_set_cursor_shape(float_1,int_4);

	double_1 = double_2 * double_1;
	int_4 = int_5;
	double_3 = double_3 + double_4;
	double_5 = double_1;
	return int_4;
	char_4 = v__csi_arg_get();

}
int v__handle_esc_csi_dsr( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 * int_2;
	int_3 = int_1 + int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		char char_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_1 + float_1;
		char_1 = v__csi_arg_get();

		char_2 = char_2 + char_2;
		v_termpty_write(short_1,unsigned_int_1,int_3);

		int_2 = int_4;
		long_1 = long_1 + long_1;
		float_2 = float_1 + float_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		long long_2 = 1;
		float float_4 = 1;
		short short_2 = 1;
		int int_5 = 1;
		double double_1 = 1;
		long_2 = long_1 + long_2;
		float_4 = float_4 + float_4;
		short_2 = short_1;
		int_1 = int_5 + int_4;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		double_1 = double_1 + double_1;
	}
	return int_1;
}
float v__handle_esc_csi_truecolor_cmyk( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 + int_2;
	float_3 = float_1 * float_2;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	short_1 = short_1 + short_2;
	char_1 = char_2 * char_1;
	char_2 = char_1;
	int_1 = int_1;
	char_3 = v__approximate_truecolor_rgb(short_3,int_1,int_3,int_2);

	float_2 = float_1;
	double_1 = v__csi_truecolor_arg_get(unsigned_int_1);

	double_3 = double_2 + double_3;
	return float_1;
}
int v__handle_esc_csi_truecolor_cmy( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	short_1 = short_1 + short_2;
	char_1 = v__approximate_truecolor_rgb(short_3,int_1,int_1,int_2);

	double_2 = double_1 * double_2;
	long_2 = long_1 + long_1;
	double_1 = double_2 * double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "u") > 0)
	{
	}
	int_1 = int_1 * int_1;
	double_2 = v__csi_truecolor_arg_get(unsigned_int_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_4 = double_1 * double_3;
	return int_3;
}
char v__approximate_truecolor_rgb( short parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_1;
			if(1)
			{
				char_1 = char_1 * char_2;
			}
		}
	}
	return char_1;
	double_1 = v_termio_textgrid_get(char_2);

}
double v__csi_truecolor_arg_get( unsigned int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
long v__handle_esc_csi_truecolor_rgb( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double_1 = double_1 * double_2;
	long_1 = long_1 + long_2;
	double_1 = v__csi_truecolor_arg_get(unsigned_int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = v__approximate_truecolor_rgb(short_1,int_1,int_1,int_2);

	long_4 = long_2 + long_3;
	long_5 = long_6;
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int_3 = int_1 * int_1;
		double_1 = double_2 * double_2;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	return long_5;
}
long v__handle_esc_csi_color_set( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	v_termpty_reset_att(double_1);

	char_2 = char_1 + char_1;
	float_1 = v__handle_esc_csi_truecolor_cmyk(char_2,long_1);

	unsigned_int_1 = unsigned_int_1;
	return long_1;
	char_1 = v__csi_arg_get();

	long_1 = v__handle_esc_csi_truecolor_rgb(float_1,int_1);

	int_1 = v__handle_esc_csi_truecolor_cmy(double_2,int_1);

}
void v_termpty_cursor_copy( long parameter_1,double parameter_2)
{
	char char_2 = 1;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		double_1 = double_1 * double_1;
		char_1 = char_2;
	}
	if(1)
	{
		char char_3 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char_2 = char_2 + char_3;
		long_1 = long_1;
		int_2 = int_1 * int_1;
		float_2 = float_1 + float_2;
	}
}
void v__switch_to_alternative_screen( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	v_termpty_screen_swap(float_1);

}
int v__move_cursor_to_origin( long parameter_1)
{
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		int int_1 = 1;
		float_2 = float_1 + float_1;
		double_1 = double_1;
		int_2 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return int_2;
}
int v__pty_size()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_1 + int_1;
	double_2 = double_1 * double_2;
	double_1 = double_1 * double_2;
	short_1 = short_2;
	if(1)
	{
		double_1 = double_2 * double_2;
	}
	return int_3;
}
short v__limit_coord()
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short_1 = short_1 + short_1;
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_1;
	int_2 = int_3;
	long_2 = long_3;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_2;
	return short_3;
}
char v__check_screen_info( short parameter_1,char parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		char char_1 = 1;
		v_termpty_text_save_top(long_1,long_1,int_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		long_1 = long_1;
		long_2 = long_2 + long_2;
		char_1 = char_1;
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			v_termpty_cells_clear(unsigned_int_3,short_1,int_1);

			long_3 = long_4;
		}
		unsigned_int_1 = unsigned_int_2;
	}
	return char_2;
}
short v__termpty_line_rewrap( char parameter_1,int parameter_2,int parameter_3,int parameter_4,char parameter_5)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_1;
	char_1 = v__check_screen_info(short_1,char_2);

	short_2 = short_1 * short_2;
	double_1 = double_1 + double_1;
	return short_1;
}
char v__backlog_remove_latest_nolock( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	long_1 = long_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		v_termpty_save_free(unsigned_int_1);

		int_2 = int_1 * int_2;
	}
	unsigned_int_1 = v_verify_beacon(float_2,int_2);

	short_2 = short_1 + short_1;
	short_1 = short_3 + short_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return char_1;
}
short v_termpty_save_extract( long parameter_1)
{
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			long long_1 = 1;
			int_1 = int_1 + int_1;
			int_2 = int_1 + int_1;
			int_2 = int_2 + int_1;
			double_1 = double_1 + double_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
			}
			int_4 = int_3 + int_1;
			float_3 = float_1 * float_2;
			long_1 = long_1 + long_1;
			if(1)
			{
				double double_2 = 1;
				double_2 = double_1 + double_2;
			}
		}
	}
	return short_1;
}
char v__termpty_line_is_empty( long parameter_1,float parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int_1 = v__termpty_cell_is_empty(double_1);

	double_3 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "#.") == 0)
		{
		}
	}
	return char_1;
}
void v_termpty_screen_swap( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_2;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_1 * double_3;
	int_1 = int_1 * int_1;
	long_2 = long_1 + long_1;
	float_1 = float_1 + float_2;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3;
	}
}
void v_termpty_resize( short parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	short short_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_4 = 1;
	double double_7 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_7 = 1;
	int int_6 = 1;
	char char_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	v_termpty_backlog_lock();

	short_1 = v__limit_coord();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	char_1 = v__backlog_remove_latest_nolock(float_1);

	double_2 = double_1 * double_2;
	if(1)
	{
		int_3 = int_1 * int_2;
		double_1 = double_2;
	}
	short_2 = short_3;
	if(1)
	{
		char_2 = v__termpty_line_is_empty(long_2,float_1);

		char_1 = v_termpty_line_length(float_1,double_3);

		char_2 = char_1 + char_2;
	}
	float_2 = float_2;
	long_3 = long_2 * long_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	short_1 = short_3;
	int_1 = int_1 * int_1;
	int_3 = int_3 * int_2;
	int_5 = int_3 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
		if(1)
		{
			double_3 = double_2 * double_4;
			short_4 = v_termpty_save_extract(long_1);

			float_3 = float_2 + float_2;
		}
	}
	unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		v_termpty_backlog_unlock();

		long_2 = long_3 + long_4;
	}
	unsigned_int_5 = unsigned_int_3;
	if(1)
	{
		v_termpty_resize_tabs(unsigned_int_3,int_3,int_5);

		char_3 = char_3 + char_3;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_5;
		if(1)
		{
			double double_5 = 1;
			short short_6 = 1;
			short short_7 = 1;
			double double_6 = 1;
			float_3 = float_2 + float_4;
			short_3 = short_2 * short_2;
			short_5 = v__termpty_line_rewrap(char_1,int_2,int_2,int_3,char_2);

			char_2 = char_2;
			float_5 = float_3 * float_2;
			if(1)
			{
				float float_6 = 1;
				float_6 = float_2 * float_6;
			}
			unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
			v_termpty_screen_swap(float_4);

			unsigned_int_5 = unsigned_int_2 * unsigned_int_7;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_7;
			double_4 = double_5 + double_1;
			short_7 = short_6 * short_6;
			double_6 = double_1 + double_1;
			unsigned_int_2 = unsigned_int_4;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_3 = char_4 + char_1;
		double_3 = double_3 + double_3;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
		long_1 = long_1 + long_3;
	}
	double_4 = double_7 * double_1;
	short_2 = short_2 + short_2;
	long_5 = long_3;
	long_5 = long_4 + long_4;
	int_2 = v__pty_size();

	long_5 = long_6 + long_6;
	double_1 = double_3 * double_7;
	unsigned_int_7 = unsigned_int_7 * unsigned_int_5;
	char_6 = char_5 + char_4;
	if(1)
	{
		long_6 = long_6 + long_6;
	}
	int_5 = int_5 + int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_7;
	int_4 = int_4 + int_5;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_2;
	unsigned_int_1 = v_verify_beacon(float_2,int_2);

	float_7 = float_5 * float_7;
	int_3 = int_1;
	int_1 = int_6 * int_6;
	char_7 = char_1 * char_2;
}
double v_termio_win_get( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return double_1;
}
unsigned int v__handle_esc_csi_reset_mode( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_termpty_clear_screen(short_1,float_1);

	v_termpty_cursor_copy(long_1,double_1);

	short_1 = short_1 + short_2;
	double_2 = v_termio_win_get(char_1);

	v_termpty_reset_state(char_2);

	int_1 = v__move_cursor_to_origin(long_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_1;
	char_2 = v__csi_arg_get();

	v_termpty_resize(short_1,int_1,int_2);

	v__switch_to_alternative_screen(double_3,int_3);

}
void v__handle_esc_csi_cursor_pos_set( int parameter_1,float parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float_2 = float_1 + float_1;
	char_2 = char_1 + char_2;
	double_1 = double_1 + double_1;
	long_2 = long_1 * long_2;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			float_2 = float_1 * float_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	}
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		char_2 = v__csi_arg_get();

		float_1 = float_1 * float_2;
		char controller_7[3];
		fgets(controller_7 ,3 ,stdin);
		if( strcmp( controller_7, "YM") > 0)
		{
			int int_2 = 1;
			int_2 = int_2 * int_2;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_5 = int_3 + int_4;
	}
	int_4 = int_5 + int_1;
}
void v_termpty_text_scroll_rev( char parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_termio_scroll(float_1,int_1,int_2,int_1,-1 );

	char_1 = char_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		v_termpty_cells_clear(unsigned_int_1,short_1,int_3);

		double_1 = double_1 + double_2;
		int_1 = int_1;
	}
	char_2 = char_1 * char_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
		if(1)
		{
			char_2 = char_3 + char_1;
		}
		float_1 = float_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		}
	}
	if(1)
	{
		float_1 = float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
			int_3 = int_1 + int_1;
			char_2 = char_2;
		}
		if(1)
		{
			double_2 = double_1;
		}
	}
}
void v_termpty_clear_line( char parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_1;
	int_1 = int_1;
	double_1 = double_1 * double_2;
	v_termpty_cells_clear(unsigned_int_1,short_1,int_2);

	double_3 = double_1 * double_3;
	long_1 = long_1 * long_1;
	long_2 = long_1 * long_2;
	char_1 = char_2;
	int_3 = int_2 * int_1;
	int_3 = int_2 * int_2;
	v_termio_content_change(short_1,int_2,char_1,int_2);

	char_2 = char_3 + char_4;
	long_1 = long_1;
	float_1 = float_2;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	long_2 = long_2 + long_1;
	char_3 = char_2 + char_1;
}
void v_termpty_clear_screen( short parameter_1,float parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	if(1)
	{
		short short_2 = 1;
		v_termio_content_change(short_1,int_1,char_1,int_2);

		short_2 = short_1 + short_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "}") < 0)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	float_1 = float_1 + float_2;
	float_2 = float_3 * float_3;
	v_termpty_cells_clear(unsigned_int_1,short_1,int_2);

	double_2 = double_1 + double_1;
	v_termpty_clear_line(char_3,double_3,int_1);

	double_2 = double_2 * double_2;
}
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,int parameter_2,unsigned int parameter_3,float parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_3 = unsigned_int_3;
		float_2 = float_1 * float_1;
	}
}
void v__termpty_charset_trans( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_3 + double_1;
		}
		if(1)
		{
			double_2 = double_1 * double_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
	}
}
void v_termio_content_change( short parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_3 = 1;
	double_3 = double_1 + double_2;
	double_2 = double_2 * double_3;
	double_4 = double_4 * double_4;
	short_2 = short_1 * short_1;
	double_1 = double_5 + double_2;
	if(1)
	{
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_2 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 + int_2;
		int_1 = int_2 + int_2;
		double_5 = double_4 + double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_3 = 1;
			double_4 = double_2;
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
				int_1 = int_2 + int_2;
			}
			short_1 = short_2 * short_2;
			short_2 = short_3 + short_2;
		}
	}
	if(1)
	{
	}
	double_3 = double_6 * double_5;
	char_1 = char_2;
	int_3 = int_1 + int_3;
	int_1 = v__sel_set(int_2,long_1);

	short_4 = short_2 + short_1;
	if(1)
	{
		char_1 = char_2 * char_1;
		int_4 = int_4 + int_3;
	}
	if(1)
	{
		float float_2 = 1;
		int_3 = int_4 * int_5;
		float_1 = float_1 + float_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_5 = 1;
			short short_6 = 1;
			float_1 = v__remove_links(float_3,int_5,-1 );

			short_6 = short_5 * short_1;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
				int_1 = int_5 * int_2;
			}
			int_2 = int_3 + int_2;
			double_1 = double_5 + double_6;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
		char_2 = char_1 + char_3;
		int_3 = int_3;
		int_4 = int_4 + int_3;
		unsigned_int_5 = unsigned_int_5;
		if(1)
		{
			int int_6 = 1;
			int int_7 = 1;
			int_6 = int_6 + int_7;
		}
	}
}
void v_termpty_text_append( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	float float_7 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_4 = 1;
	int int_7 = 1;
	double_2 = double_1 + double_1;
	short_3 = short_1 + short_2;
	char_1 = char_1 * char_1;
	char_1 = char_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_1 = int_1 * int_2;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		long long_1 = 1;
		int int_6 = 1;
		long long_3 = 1;
		int_2 = int_3;
		if(1)
		{
			float float_4 = 1;
			short_1 = short_2 + short_1;
			float_4 = float_2 + float_3;
			double_3 = double_1 * double_2;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			v_termpty_cell_codepoint_att_fill(unsigned_int_3,int_4,unsigned_int_4,float_5,int_1);

			unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
			char_1 = char_3 * char_1;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_2 = double_1 + double_2;
			}
		}
		int_3 = int_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
		}
		if(1)
		{
			if(1)
			{
				int_2 = int_1 * int_1;
			}
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
		double_2 = double_3;
		if(1)
		{
			float float_6 = 1;
			double_3 = double_1 + double_3;
			float_1 = float_6 + float_3;
		}
		double_1 = double_2 * double_3;
		if(1)
		{
			v_termio_content_change(short_2,int_3,char_1,int_4);

			long_1 = long_1 + long_1;
			float_7 = v__termpty_is_dblwidth_get(float_5,int_5);

			int_6 = int_3;
		}
		if(1)
		{
			long long_2 = 1;
			long_3 = long_2 * long_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
			if(1)
			{
				double_3 = double_4 + double_4;
			}
			if(1)
			{
				double double_5 = 1;
				double_1 = double_2 * double_5;
			}
			if(1)
			{
				double_4 = double_1 * double_1;
				double_2 = double_3 * double_3;
			}
		}
		if(1)
		{
			char char_4 = 1;
			char_3 = char_2 + char_4;
			int_2 = int_1 * int_3;
			if(1)
			{
				int_3 = int_5 * int_6;
			}
			v__termpty_charset_trans(short_4,double_4);

			double_3 = double_2 * double_1;
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned_int_3 = unsigned_int_6 + unsigned_int_4;
				long_1 = long_3 * long_3;
			}
			v_termpty_text_scroll_test(short_1,int_7,-1 );

			short_1 = short_1 * short_4;
		}
	}
}
char v__csi_arg_get()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2;
	short_1 = short_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_2;
	}
	return char_2;
}
int v__handle_esc_csi( unsigned int parameter_1,short parameter_2,long parameter_3,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char_1 = v__handle_cursor_control(unsigned_int_1,unsigned_int_1,uni_para);

	int_2 = int_1 * int_1;
	double_1 = double_1 + double_1;
	return int_3;
}
int v__safechar( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_1 = float_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Z@") < 0)
	{
	}
	int_1 = int_2;
	float_1 = float_1 * float_2;
	return int_3;
}
float v__handle_esc( int parameter_1,int parameter_2,float parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	int int_5 = 1;
	char char_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_6 = 1;
	short short_8 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	short short_9 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	short_3 = short_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	short_5 = short_1 * short_4;
	if(1)
	{
	}
	double_3 = double_3 * double_3;
	int_2 = int_1 * int_4;
	double_2 = double_4 * double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	float_2 = float_1 * float_2;
	double_1 = double_5 + double_6;
	int_1 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_2 + float_1;
	long_3 = long_1 + long_2;
	short_6 = short_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	double_5 = double_2 + double_7;
	int_5 = int_3 * int_5;
	char_1 = char_1;
	float_3 = float_2 * float_3;
	char_2 = char_2 * char_2;
	int_4 = int_4 + int_4;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		short_6 = short_2 + short_7;
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	int_2 = int_2;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_6;
	if(1)
	{
	}
	int_2 = int_4 + int_2;
	double_7 = double_1 * double_5;
	if(1)
	{
	}
	long_1 = long_4 + long_5;
	double_2 = double_3 * double_6;
	if(1)
	{
	}
	long_4 = long_2;
	int_1 = int_2 + int_6;
	if(1)
	{
	}
	int_1 = int_5 * int_6;
	int_6 = int_4;
	if(1)
	{
	}
	char controller4vul_1102[2];
	fgets(controller4vul_1102 ,2 ,stdin);
	if( strcmp( controller4vul_1102, "_") < 0)
	{
		double double_8 = 1;
		double double_9 = 1;
		char char_3 = 1;
		int int_7 = 1;
		int int_8 = 1;
		double_1 = double_5 * double_1;
		short_2 = short_3 * short_8;
		double_9 = double_8 + double_8;
		char_3 = char_2 + char_1;
		int_7 = int_5 * int_7;
		char controller4vul_1103[2];
		fgets(controller4vul_1103 ,2 ,stdin);
		if( strcmp( controller4vul_1103, "4") > 0)
		{
			int_1 = v__handle_esc_csi(unsigned_int_2,short_8,long_4,uni_para);

			unsigned_int_4 = unsigned_int_3 * unsigned_int_7;
		}
		int_7 = int_2 + int_8;
		char_1 = char_1;
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			float_4 = float_2;
			unsigned_int_8 = unsigned_int_1 + unsigned_int_6;
			unsigned_int_8 = unsigned_int_8 + unsigned_int_7;
		}
	}
	if(1)
	{
	}
	float_1 = float_3 + float_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_7;
	short_7 = short_7;
	float_2 = float_2 * float_4;
	short_2 = short_8 * short_9;
	return float_3;
}
void v_termpty_cell_fill( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float_1 = float_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			long_2 = long_1 + long_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			float_2 = float_2 + float_3;
		}
	}
}
void v_termpty_cells_fill( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2;
	v_termpty_cell_fill(unsigned_int_1,long_1,unsigned_int_2,int_1);

	unsigned_int_3 = unsigned_int_2;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
}
void v_termpty_cells_clear( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	v_termpty_cells_fill(short_1,unsigned_int_1,int_1,int_2);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
}
int v__tooltip_del(double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float_1 = float_2;
	char_1 = char_2;
	double_1 = double_2;
	return int_1;
}
short v__tooltip_content(int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short_1 = short_1;
	double_2 = double_1 * double_1;
	float_3 = float_1 * float_2;
	int_1 = v_media_add(unsigned_int_1,double_2,char_1,int_1,short_1,-1 );

	double_3 = double_3;
	return short_2;
}
void v_MD5Final( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	int int_5 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_1;
	double_2 = double_1 + double_2;
	long_3 = long_1 + long_2;
	int_3 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_4 = long_2 + long_3;
	if(1)
	{
		int int_4 = 1;
		float float_1 = 1;
		int_4 = int_1 * int_1;
		int_4 = int_3;
		v_MD5Transform(short_1,short_1);

		int_2 = int_2 * int_5;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	}
	char_1 = char_2;
	short_2 = short_1 + short_1;
	int_5 = int_5;
	int_2 = int_5;
	float_4 = float_2 * float_3;
	double_3 = double_3 + double_1;
	v_byteReverse(float_4,double_3);

	double_3 = double_2;
}
void v_MD5Transform( short parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_7 = 1;
	long long_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_8 = 1;
	char char_9 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	char_3 = char_1 * char_2;
	long_2 = long_1 * long_1;
	double_1 = double_1 * double_1;
	int_2 = int_1 + int_1;
	double_1 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_3 + int_3;
	long_2 = long_1 + long_1;
	char_1 = char_4 * char_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_3;
	long_4 = long_3 * long_1;
	int_4 = int_1 * int_1;
	int_4 = int_5 * int_1;
	double_2 = double_1 + double_2;
	double_2 = double_2 * double_1;
	long_2 = long_3 * long_4;
	int_6 = int_5 + int_4;
	int_6 = int_2 + int_5;
	char_1 = char_6 + char_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_2;
	long_1 = long_3 + long_1;
	double_2 = double_2 * double_2;
	long_5 = long_5 + long_6;
	double_3 = double_1 * double_2;
	int_2 = int_4;
	float_1 = float_1 * float_2;
	char_7 = char_2 + char_1;
	short_2 = short_1;
	float_2 = float_1 + float_1;
	float_3 = float_3 * float_4;
	int_7 = int_2 * int_1;
	long_1 = long_2 + long_1;
	int_1 = int_7 + int_4;
	double_2 = double_2 * double_1;
	long_1 = long_1 * long_7;
	long_3 = long_7 + long_5;
	int_7 = int_3 + int_7;
	char_5 = char_6 + char_1;
	short_1 = short_3 * short_2;
	short_2 = short_2 * short_2;
	short_4 = short_4 * short_5;
	double_3 = double_2 * double_2;
	int_4 = int_7;
	int_4 = int_5 * int_1;
	char_5 = char_8 * char_4;
	int_7 = int_7;
	float_3 = float_1 + float_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	char_8 = char_1 * char_7;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	double_3 = double_2 + double_3;
	long_7 = long_4 + long_6;
	double_4 = double_2 + double_3;
	unsigned_int_5 = unsigned_int_3;
	float_4 = float_2 + float_2;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
	long_8 = long_1 * long_8;
	char_9 = char_8 + char_1;
	double_5 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_6;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	float_2 = float_1 * float_4;
	float_3 = float_4 + float_1;
	double_3 = double_1 * double_5;
	int_6 = int_3;
	long_1 = long_3 + long_8;
	double_5 = double_5 + double_1;
	int_2 = int_8;
}
void v_byteReverse( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_2;
}
void v_MD5Update( double parameter_1,char parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	int int_5 = 1;
	short short_4 = 1;
	int int_6 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 * double_2;
	int_2 = int_1 * int_2;
	int_2 = int_1 + int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_2 = float_1 * float_1;
	char_1 = char_1 * char_1;
	double_3 = double_2 * double_3;
	v_byteReverse(float_3,double_4);

	int_1 = int_4;
	int_2 = int_3;
	long_1 = long_2 + long_1;
	int_4 = int_4 + int_4;
	short_3 = short_1 * short_2;
	char_2 = char_1 * char_1;
	double_1 = double_4 * double_2;
	int_3 = int_5 * int_3;
	double_2 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	v_MD5Transform(short_4,short_1);

	int_5 = int_1 + int_1;
	int_3 = int_6;
}
void v_MD5Init( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_1 + int_2;
	short_1 = short_1 + short_2;
	double_1 = double_1 + double_1;
}
void v_gravatar_tooltip( long parameter_1,unsigned int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	int int_6 = 1;
	v_MD5Init(unsigned_int_1);

	double_1 = double_1 + double_2;
	long_2 = long_1 + long_1;
	int_1 = v__tooltip_del(double_1);

	int_2 = int_2 * int_2;
	int_2 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	v_MD5Update(double_3,char_1,unsigned_int_1);

	char_2 = char_1 * char_1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	short_3 = short_2 * short_3;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	int_1 = int_2 * int_3;
	char_3 = char_3;
	int_4 = int_1 + int_4;
	v_MD5Final(int_5,short_1);

	double_1 = double_3 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_1 * long_3;
		double_4 = double_1 * double_3;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_5;
	char_4 = char_3 + char_1;
	double_4 = double_2 + double_1;
	short_1 = v__tooltip_content(int_6,unsigned_int_4);

}
long v__cb_link_drag_done(short parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_1 = double_1 + double_1;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "X") > 0)
	{
		double double_2 = 1;
		double_2 = double_2 + double_2;
	}
	long_4 = long_1 * long_3;
	return long_1;
}
short v__cb_link_drag_accept(char parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_2;
	double_1 = double_2 + double_2;
	double_3 = double_4;
	return short_1;
}
int v__cb_link_drag_move(int parameter_2,long parameter_3,int parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
	}
	return int_1;
}
int v__cb_link_icon_new(int parameter_2,double parameter_3,char parameter_4)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_1 * int_1;
	short_1 = short_1 * short_1;
	double_1 = double_1 * double_1;
	double_1 = double_1;
	long_3 = long_1 + long_2;
	double_2 = double_2 * double_1;
	return int_2;
}
double v__cb_link_move(int parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	char_1 = char_1 + char_2;
	int_1 = v__cb_link_drag_move(int_2,long_1,int_1,long_1);

	short_1 = short_2;
	int_2 = v__cb_link_icon_new(int_2,double_1,char_3);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_4;
	if(1)
	{
	}
	double_1 = double_1;
	short_2 = v__cb_link_drag_accept(char_3,long_1);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "b") < 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		double_1 = double_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		long_2 = v__cb_link_drag_done(short_2);

		char_4 = char_3 + char_3;
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
		}
		int_4 = int_3 * int_4;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	return double_1;
}
unsigned int v__cb_link_up_delay()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_3 = int_1 * int_2;
	double_2 = double_1 + double_2;
	double_2 = double_2 * double_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	unsigned_int_1 = v__activate_link(unsigned_int_2,double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	return unsigned_int_3;
}
long v__cb_link_up(int parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long_1 = long_1 + long_1;
	double_1 = double_1 * double_2;
	double_1 = double_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		char_2 = char_1 + char_1;
		float_2 = float_1 + float_1;
		short_1 = short_1 + short_2;
		unsigned_int_1 = v__cb_link_up_delay();

		int_1 = int_1 * int_2;
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			}
			if(1)
			{
				float float_3 = 1;
				float_3 = float_3;
			}
		}
		double_4 = double_1;
	}
	return long_2;
}
void v_term_focus( float parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	v__term_is_focused(short_1);

	char_1 = char_2;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	float_3 = float_1 + float_2;
	int_1 = int_1 + int_1;
}
void v__term_is_focused( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
}
void v_term_unfocus( char parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int_1 = int_1 + int_1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	short_1 = short_2;
	v__term_is_focused(short_1);

	int_1 = int_2 * int_2;
	short_4 = short_1 * short_3;
}
double v__cb_ctxp_del(float parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 * short_1;
	v_term_focus(float_1);

	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return double_3;
	v_term_unfocus(char_2);

}
short v__cb_ctxp_dismissed(char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	return short_1;
}
short v__cb_ctxp_link_copy(char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_1 = float_1 * float_2;
	double_3 = double_1 * double_2;
	short_1 = short_1 * short_1;
	int_1 = v__take_selection_text(short_2,char_1,short_1,-1 );

	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_4;
	int_3 = int_3 + int_4;
	return short_1;
}
float v__screen_visual_bounds( unsigned int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	if(1)
	{
		double double_1 = 1;
		short_1 = short_1 + short_1;
		double_1 = double_1;
	}
	if(1)
	{
		char char_1 = 1;
		short short_2 = 1;
		char_1 = char_1;
		short_2 = short_1;
	}
	return float_1;
}
unsigned int v__draw_cell( double parameter_1,long parameter_2,short parameter_3,short parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	short_2 = short_1 + short_1;
	float_2 = float_1 + float_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	float_1 = float_3 + float_3;
	double_4 = double_1 + double_3;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		if(1)
		{
			short_1 = short_2 + short_2;
		}
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "L") > 0)
		{
			double_4 = double_3 * double_1;
		}
	}
	if(1)
	{
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	}
	if(1)
	{
		char char_3 = 1;
		int int_4 = 1;
		double double_5 = 1;
		char_3 = char_1;
		int_4 = int_3 + int_2;
		int_4 = int_2;
		double_2 = double_2 * double_2;
		double_2 = double_5 + double_3;
		float_4 = float_1 + float_2;
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_6 * unsigned_int_3;
	}
	if(1)
	{
		float float_5 = 1;
		float_5 = float_4 * float_2;
	}
	if(1)
	{
		double_4 = double_4 + double_6;
	}
	if(1)
	{
		if(1)
		{
			double double_7 = 1;
			double_6 = double_7;
		}
		if(1)
		{
			char char_4 = 1;
			char char_5 = 1;
			char_5 = char_4 * char_2;
		}
	}
	if(1)
	{
		double_1 = double_2 + double_3;
	}
	return unsigned_int_5;
}
long v__draw_line( char parameter_1,char parameter_2,float parameter_3,int parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	unsigned_int_1 = v__draw_cell(double_1,long_1,short_1,short_2);

	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return long_2;
}
short v_termpty_backlog_length( char parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	double double_5 = 1;
	int int_6 = 1;
	int_1 = int_1 + int_1;
	short_1 = short_1;
	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	double_3 = double_1 + double_2;
	double_3 = double_1 + double_1;
	char_2 = char_1 + char_2;
	double_4 = double_1 * double_3;
	double_1 = double_4 + double_2;
	float_1 = float_1;
	char_2 = char_3;
	int_2 = int_2 * int_3;
	if(1)
	{
		short_1 = short_1;
	}
	int_2 = int_1 * int_3;
	if(1)
	{
		double_3 = double_4 + double_2;
	}
	double_3 = double_1 + double_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	long_2 = long_1 + long_1;
	if(1)
	{
		int_4 = int_3 * int_2;
	}
	unsigned_int_3 = v_verify_beacon(float_1,int_4);

	float_3 = float_2 + float_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	int_5 = int_4;
	double_2 = double_1 * double_5;
	int_5 = int_3;
	int_1 = int_2 * int_4;
	int_4 = int_6;
	long_2 = long_2 + long_1;
	return short_1;
}
int v_termio_pty_get( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_1;
	return int_3;
}
double v_termio_textgrid_get( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_2;
	return double_2;
}
double v_miniview_colors_get( long parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short_2 = short_1 * short_1;
	double_1 = v_termio_textgrid_get(char_1);

	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		short_4 = short_1 + short_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		long_2 = long_1 + long_2;
		double_2 = double_1 + double_2;
	}
	return double_3;
}
short v__deferred_renderer()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_5 = 1;
	float float_3 = 1;
	int int_6 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_6 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_1 * double_2;
	long_1 = long_2;
	double_3 = v_miniview_colors_get(long_3,short_1);

	int_1 = int_1 * int_2;
	char_1 = char_1 + char_1;
	int_2 = int_3;
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	short_2 = short_1 + short_3;
	short_2 = short_4;
	short_4 = short_4;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	int_4 = int_3 * int_2;
	int_4 = int_3 + int_1;
	int_4 = v_termio_pty_get(char_1);

	int_5 = int_2 * int_1;
	double_3 = double_2 * double_3;
	long_5 = long_4 * long_4;
	long_1 = long_4 * long_5;
	float_1 = v__screen_visual_bounds(unsigned_int_4);

	short_5 = short_3 + short_4;
	if(1)
	{
		float_3 = float_3 * float_2;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_1;
		if(1)
		{
			double_2 = double_1 + double_2;
		}
		short_5 = short_2;
	}
	float_3 = v_termpty_cellrow_get(double_1,int_4,double_2);

	long_1 = long_3 + long_2;
	int_4 = v_termio_scroll_get(short_4);

	int_6 = int_3 * int_1;
	double_4 = double_4 + double_3;
	if(1)
	{
		double_2 = double_1 + double_3;
	}
	if(1)
	{
		int_2 = int_6 * int_1;
	}
	char_1 = char_2 + char_2;
	double_2 = double_1;
	if(1)
	{
		double_2 = double_1;
		long_3 = long_4 * long_4;
		if(1)
		{
			short_1 = v_termpty_backlog_length(char_2);

			double_2 = double_5 + double_4;
			double_4 = double_4 * double_6;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				int int_7 = 1;
				unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
				int_7 = int_3 * int_5;
				int_1 = int_3;
				double_2 = double_5 + double_5;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				short_1 = short_4 + short_6;
				unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
			}
		}
	}
	if(1)
	{
		short short_7 = 1;
		short_7 = short_6 + short_5;
	}
	long_1 = v__draw_line(char_2,char_3,float_1,int_5,long_1);

	double_6 = double_6 * double_5;
	unsigned_int_2 = unsigned_int_7;
	long_1 = long_1 + long_2;
	long_2 = long_6 * long_3;
	return short_3;
}
long v__queue_render( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "[4") > 0)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	return long_1;
	short_1 = v__deferred_renderer();

}
void v_miniview_redraw( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "/R") < 0)
	{
	}
	long_1 = v__queue_render(float_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
}
long v__block_obj_del( float parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Z") > 0)
	{
	}
	int_1 = int_1 + int_1;
	short_2 = short_1 + short_1;
	v__smart_media_del(int_1,double_1);

	double_2 = double_1 + double_2;
	return long_1;
}
int v__termpty_is_dblwidth_slow_get( double parameter_1,int parameter_2)
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
float v__termpty_is_dblwidth_get( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
	int_1 = v__termpty_is_dblwidth_slow_get(double_1,int_1);

}
float v_term_preedit_str_get( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_2;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	return float_1;
}
void v_media_get()
{
	double double_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
}
double v__smart_media_clicked(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double_1 = double_1 * double_2;
	v_media_get();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			short_2 = short_1 * short_1;
			int_1 = int_1;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				if(1)
				{
					int int_2 = 1;
					int_1 = int_2;
					char_1 = char_2;
					if(1)
					{
						double_2 = double_1 * double_2;
					}
					if(1)
					{
						unsigned int unsigned_int_3 = 1;
						unsigned_int_2 = v_termio_config_get();

						unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
						unsigned_int_4 = v_media_src_type_get(double_1);

						double_2 = double_2 + double_2;
						if(1)
						{
							double double_3 = 1;
							float_1 = float_1 + float_2;
							unsigned_int_3 = unsigned_int_2;
							double_3 = double_1 + double_1;
						}
					}
				}
				char_2 = char_2 * char_1;
			}
		}
	}
	float_2 = float_1 + float_1;
	return double_2;
}
void v_media_control_get( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
}
char v__smart_media_stop(char parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	return char_1;
}
char v__smart_media_pause(unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
unsigned int v__smart_media_play(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	return unsigned_int_1;
}
void v__smart_media_del(int parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
}
void v_media_visualize_set( int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_1 = int_2 + int_3;
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
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
}
void v_media_mute_set( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 + int_2;
	}
}
void v_media_volume_set( long parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	float_2 = float_1 + float_3;
}
float v__cb_media_vol(char parameter_2,long parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
	double_2 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "z/") < 0)
	{
	}
	v_media_volume_set(long_1,double_3);

	long_1 = long_1 + long_2;
	int_1 = int_2 + int_3;
	return float_1;
}
short v__cb_media_pos(unsigned int parameter_2,short parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_media_position_set(unsigned_int_2,double_1);

	int_1 = int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	short_1 = short_1 * short_2;
	return short_2;
}
long v__cb_media_pos_drag_stop(short parameter_2,int parameter_3,short parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_2;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_3;
	return long_1;
}
long v__cb_media_pos_drag_start(float parameter_2,short parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	v_media_position_set(unsigned_int_1,double_1);

	unsigned_int_2 = unsigned_int_3;
	double_2 = double_2 + double_1;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_5;
	return long_1;
}
void v_media_stop( float parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	char_1 = char_2;
	int_1 = int_1 * int_1;
}
float v__cb_media_stop(double parameter_2,char parameter_3,double parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v_media_stop(float_1);

	double_1 = double_1 + double_2;
	return float_1;
}
char v__cb_media_pause(unsigned int parameter_2,char parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return char_1;
	v_media_play_set(unsigned_int_2,int_1);

}
void v_media_play_set( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
		char_1 = char_1 + char_2;
	}
}
short v__cb_media_play(short parameter_2,int parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return short_1;
	v_media_play_set(unsigned_int_4,int_1);

}
void v_media_position_set( unsigned int parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = long_1 * long_2;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
}
char v__cb_mov_ref(float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	double_1 = double_2;
	return char_1;
}
float v__cb_mov_progress(int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char_3 = char_1 * char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "bX") > 0)
	{
	}
	int_3 = int_1 + int_2;
	return float_1;
}
double v__cb_mov_restart()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return double_2;
}
double v__cb_mov_decode_stop(int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	double_1 = v__cb_mov_restart();

	double_4 = double_3 + double_2;
	double_5 = double_3 + double_2;
	return double_4;
}
unsigned int v__cb_mov_len_change(char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	return unsigned_int_1;
}
int v__cb_mov_frame_resize(short parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	int_1 = int_1 + int_1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	double_1 = v__type_mov_calc(short_1,double_2,int_2,int_2,long_1);

	char_3 = char_2 + char_2;
	char_3 = char_1 + char_2;
	return int_1;
}
char v__cb_mov_frame_decode(float parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	double_1 = v__type_mov_calc(short_1,double_1,int_1,int_1,long_1);

	double_3 = double_1 * double_2;
	long_4 = long_2 + long_3;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	long_5 = long_5 * long_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_4 = short_2 + short_3;
	int_1 = int_2 * int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3;
	long_2 = long_6;
	unsigned_int_4 = unsigned_int_2;
	double_3 = double_1;
	return char_1;
}
short v__type_mov_init( int parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char char_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_4 = 1;
	short short_5 = 1;
	double double_6 = 1;
	short short_6 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_5 = 1;
	short short_8 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long long_7 = 1;
	int int_7 = 1;
	char_1 = v__cb_mov_frame_decode(float_1);

	int_1 = int_1 * int_2;
	float_1 = float_2;
	double_2 = double_1 + double_1;
	short_2 = short_1 * short_1;
	v_media_play_set(unsigned_int_1,int_3);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_3;
	short_2 = short_1 + short_2;
	float_3 = float_1 * float_2;
	if(1)
	{
		char_1 = char_2 * char_1;
	}
	if(1)
	{
		long long_2 = 1;
		int_2 = int_4 + int_1;
		long_2 = long_1 + long_2;
		float_1 = v__cb_media_stop(double_2,char_3,double_2);

		int_4 = int_1;
	}
	double_1 = double_1 * double_1;
	double_2 = v__cb_mov_decode_stop(int_1);

	short_3 = v__cb_media_pos(unsigned_int_3,short_1,unsigned_int_4);

	double_2 = double_1 * double_1;
	float_3 = v__cb_media_vol(char_1,long_3,long_3);

	short_2 = short_4 + short_1;
	double_5 = double_1 + double_4;
	v_media_position_set(unsigned_int_4,double_3);

	float_3 = float_1 + float_3;
	double_3 = double_4 + double_5;
	long_4 = long_5;
	if(1)
	{
		long long_6 = 1;
		long_5 = long_6 + long_1;
	}
	if(1)
	{
		char_4 = v__cb_media_pause(unsigned_int_4,char_4,int_4);

		short_4 = short_1 * short_5;
	}
	double_3 = v_theme_apply(double_6,long_3,int_4);

	long_4 = v__cb_media_pos_drag_stop(short_2,int_4,short_6);

	short_5 = short_4 + short_7;
	float_2 = float_3 + float_3;
	int_3 = v__cb_mov_frame_resize(short_2);

	v_media_mute_set(short_1,unsigned_int_5);

	double_2 = double_1 + double_1;
	double_1 = double_6 * double_1;
	unsigned_int_5 = v__cb_mov_len_change(char_4);

	float_1 = v__cb_mov_progress(int_4);

	char_5 = char_3 + char_2;
	short_8 = short_1 + short_2;
	char_2 = char_3 + char_1;
	int_3 = int_3;
	int_1 = int_5 * int_6;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_5 = float_4 * float_3;
	float_4 = float_5 + float_4;
	double_4 = double_6 * double_2;
	float_2 = float_2 * float_6;
	v_media_visualize_set(int_3,long_5);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	long_7 = v__cb_media_pos_drag_start(float_6,short_6,float_4);

	char_4 = char_3 + char_4;
	char_2 = v__cb_mov_ref(float_1);

	short_3 = v__cb_media_play(short_1,int_7,unsigned_int_3);

	float_1 = float_2 + float_5;
	if(1)
	{
		int int_8 = 1;
		int_6 = int_8 + int_5;
	}
	if(1)
	{
		double_5 = double_1 + double_1;
	}
	return short_3;
}
char v__cb_edje_preloaded(short parameter_2,int parameter_3,float parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	int_1 = int_2;
	int_4 = int_1 + int_3;
	return char_1;
}
long v__type_edje_init( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_2;
	v_theme_auto_reload_enable(double_2);

	float_1 = float_2;
	int_2 = int_1 * int_1;
	int_2 = int_2 + int_3;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_2;
	int_2 = int_2 + int_3;
	long_2 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_2 = 1;
			int_4 = int_5;
			short_3 = short_2 * short_2;
			unsigned_int_2 = unsigned_int_1;
		}
	}
	return long_3;
	char_1 = v__cb_edje_preloaded(short_3,int_2,float_1);

}
short v__type_scale_init( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_2 = 1;
	short_1 = short_1 + short_1;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 + long_2;
	long_1 = long_2 + long_2;
	unsigned_int_1 = v__cb_scale_preloaded(double_1,short_2,-1 );

	int_3 = int_2 * int_2;
	int_3 = int_4 * int_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	long_4 = long_2 * long_3;
	int_1 = int_5 * int_6;
	double_2 = double_1;
	int_6 = int_5 * int_1;
	return short_2;
}
short v__cb_img_frame()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	float_2 = float_1 * float_2;
	int_1 = int_1 * int_2;
	long_1 = long_1;
	if(1)
	{
	}
	double_1 = double_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float_4 = float_3 + float_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		short_3 = short_3 * short_1;
		char_1 = char_1 * char_1;
		if(1)
		{
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
			}
		}
	}
	float_3 = float_1 + float_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	char_2 = char_2 * char_1;
	return short_3;
}
double v__type_img_anim_handle( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_2;
	int_2 = int_2 + int_3;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	short_1 = v__cb_img_frame();

	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	double_3 = double_3;
	return double_1;
}
unsigned int v__cb_img_preloaded(short parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	char_1 = char_1 * char_2;
	return unsigned_int_1;
}
char v__type_img_init( float parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	short_1 = short_1;
	int_1 = int_1;
	float_1 = float_1 + float_2;
	float_1 = float_2 + float_1;
	int_1 = int_2;
	double_1 = v__type_img_anim_handle(char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = v__cb_img_preloaded(short_2,short_3);

	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_2;
	int_2 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 + long_1;
	return char_3;
}
unsigned int v__url_compl_cb(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	float float_3 = 1;
	char char_3 = 1;
	long long_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_1;
	char_1 = v__type_img_init(float_1);

	double_1 = double_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "/R") == 0)
	{
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	long_3 = long_1 * long_2;
	double_2 = double_2 * double_2;
	int_1 = int_1 + int_2;
	float_1 = v__smart_calculate(float_1,-1 );

	float_1 = float_1 * float_2;
	char_2 = char_1 + char_1;
	double_1 = double_3 + double_3;
	unsigned_int_1 = unsigned_int_6;
	double_2 = double_2 * double_4;
	float_3 = float_2 + float_1;
	char_3 = char_1;
	long_4 = v__type_edje_init(char_3);

	double_2 = double_5 * double_2;
	short_2 = short_1 + short_1;
	long_1 = long_2 * long_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	short_1 = v__type_scale_init(double_5);

	short_1 = v__type_mov_init(int_3);

	char_1 = char_4;
	unsigned_int_4 = unsigned_int_7 * unsigned_int_8;
	char_4 = char_2 + char_2;
	unsigned_int_8 = unsigned_int_8 * unsigned_int_9;
	return unsigned_int_1;
}
int v__url_prog_cb(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_1;
	long_2 = long_1 * long_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		long long_3 = 1;
		short_3 = short_1 * short_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		double_1 = double_3 + double_1;
		long_1 = long_3 + long_1;
		if(1)
		{
			int int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int_1 = int_1 + int_3;
			short_3 = short_1 * short_1;
			char_3 = char_1 + char_2;
			long_3 = long_2 * long_3;
		}
	}
	return int_1;
}
int v__type_thumb_calc( char parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	short short_4 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_8 = 1;
		double double_3 = 1;
		char_2 = char_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		short_3 = short_1 + short_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
			double_2 = double_1 * double_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_6;
			}
		}
		if(1)
		{
			int_2 = int_3 * int_2;
			int_2 = int_1 * int_3;
		}
		unsigned_int_1 = unsigned_int_7 + unsigned_int_8;
		int_4 = int_1 * int_3;
		double_2 = double_1 + double_1;
		double_2 = double_3 + double_1;
	}
	unsigned_int_3 = unsigned_int_6 + unsigned_int_7;
	short_4 = short_2 * short_2;
	return int_4;
}
double v__type_mov_calc( short parameter_1,double parameter_2,int parameter_3,int parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3;
	short_1 = short_1 * short_1;
	short_2 = short_2 + short_2;
	if(1)
	{
		double_1 = double_2;
		int_1 = int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		long long_1 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		float_1 = float_1 * float_2;
		double_4 = double_2 + double_3;
		char_1 = char_1 * char_1;
		if(1)
		{
			float_1 = float_2;
		}
		if(1)
		{
			float_2 = float_2 * float_2;
		}
		if(1)
		{
			long_1 = long_1 + long_1;
			double_1 = double_1 * double_1;
			if(1)
			{
				float_2 = float_3 + float_1;
				int_2 = int_2 * int_1;
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
				}
			}
		}
		if(1)
		{
			int_4 = int_1 * int_3;
			double_3 = double_1 * double_1;
			if(1)
			{
				double double_5 = 1;
				float_2 = float_2 * float_3;
				double_5 = double_5 * double_1;
				if(1)
				{
					int_4 = int_1 + int_4;
				}
			}
		}
		if(1)
		{
			float float_4 = 1;
			char char_2 = 1;
			float_4 = float_3 + float_1;
			char_1 = char_1 + char_2;
		}
		int_1 = int_4 * int_3;
		unsigned_int_6 = unsigned_int_3 * unsigned_int_1;
		long_1 = long_1;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	}
	int_2 = int_2;
	short_3 = short_1 * short_2;
	return double_3;
}
int v__type_edje_calc( float parameter_1,long parameter_2,char parameter_3,unsigned int parameter_4,short parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	double_2 = double_1 * double_1;
	return int_3;
}
long v__type_img_calc( double parameter_1,short parameter_2,unsigned int parameter_3,float parameter_4,unsigned int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_2 * long_1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		int int_9 = 1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			int_2 = int_1 + int_2;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				double_1 = double_2;
				float_1 = float_2;
				if(1)
				{
					int_4 = int_1 + int_3;
				}
			}
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
			int_1 = int_4 * int_4;
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
				int_1 = int_3 * int_1;
				if(1)
				{
					short_2 = short_1 * short_2;
				}
			}
			if(1)
			{
				char char_1 = 1;
				double double_3 = 1;
				char_1 = char_1 + char_1;
				double_3 = double_2 * double_3;
			}
		}
		if(1)
		{
			double double_4 = 1;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
			double_4 = double_1 * double_1;
		}
		int_3 = int_5 * int_3;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_6;
		int_3 = int_6 * int_7;
		int_8 = int_8 + int_9;
	}
	short_3 = short_2 + short_1;
	double_6 = double_5 + double_1;
	return long_3;
}
unsigned int v__cb_scale_preloaded(double parameter_2,short parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	double_1 = double_1 * double_2;
	char controller4vul_1146[3];
	fgets(controller4vul_1146 ,3 ,stdin);
	if( strcmp( controller4vul_1146, "=#") < 0)
	{
		strcpy(vul_var, "CWE-761");
		if(uni_para == 495)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	if(1)
	{
		int int_1 = 1;
		double_1 = double_3 * double_1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		short_2 = short_1 + short_2;
		long_2 = long_1 * long_1;
		long_3 = long_2 * long_1;
		double_2 = double_3;
	}
	double_4 = double_5;
}
char v__type_scale_calc( char parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_1 + int_2;
		float_1 = float_1 + float_2;
	}
	char controller4vul_1142[2];
	fgets(controller4vul_1142 ,2 ,stdin);
	if( strcmp( controller4vul_1142, "C") < 0)
	{
		short short_3 = 1;
		float_2 = float_2 * float_3;
		char controller4vul_1143[3];
		fgets(controller4vul_1143 ,3 ,stdin);
		if( strcmp( controller4vul_1143, "YM") > 0)
		{
			short_1 = short_1;
			double_2 = double_1 * double_2;
			char controller4vul_1144[2];
			fgets(controller4vul_1144 ,2 ,stdin);
			if( strcmp( controller4vul_1144, "x") > 0)
			{
				short_3 = short_2 * short_1;
				double_2 = double_1 + double_2;
				char controller4vul_1145[2];
				fgets(controller4vul_1145 ,2 ,stdin);
				if( strcmp( controller4vul_1145, "9") < 0)
				{
					unsigned_int_2 = v__cb_scale_preloaded(double_2,short_1,uni_para);

					double_2 = double_1 * double_3;
				}
			}
		}
		if(1)
		{
			double_4 = double_4 + double_2;
			int_4 = int_1 + int_3;
			if(1)
			{
				char_2 = char_1 * char_1;
				double_2 = double_2 + double_3;
				if(1)
				{
					int_1 = int_4 + int_1;
				}
			}
		}
		if(1)
		{
			char_2 = char_3;
			char_3 = char_3;
		}
		short_1 = short_2 * short_4;
		double_4 = double_3 * double_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		short_4 = short_4 + short_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_7 = 1;
		double_2 = double_3;
		long_2 = long_1 + long_2;
		double_6 = double_1 * double_5;
		if(1)
		{
			double_6 = double_3 + double_6;
		}
		if(1)
		{
			float_2 = float_1 + float_3;
		}
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_5 = 1;
			float_5 = float_4 + float_4;
			int_2 = int_1 * int_1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
			char_1 = char_1 * char_2;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
			short_2 = short_4 * short_5;
			short_1 = short_1;
			unsigned_int_1 = unsigned_int_3;
			double_3 = double_2 * double_2;
		}
		unsigned_int_1 = unsigned_int_6;
		double_7 = double_4 * double_6;
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_4 = int_4;
		int_6 = int_1 * int_5;
	}
	float_1 = float_3 * float_2;
	double_5 = double_2 + double_4;
	return char_3;
}
char v__unsmooth_timeout(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_1;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	double_1 = double_1;
	short_1 = short_2 + short_3;
	float_2 = float_1 * float_2;
	char controller4vul_1140[2];
	fgets(controller4vul_1140 ,2 ,stdin);
	if( strcmp( controller4vul_1140, "d") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		char controller4vul_1141[2];
		fgets(controller4vul_1141 ,2 ,stdin);
		if( strcmp( controller4vul_1141, "K") > 0)
		{
			float float_3 = 1;
			char_1 = v__type_scale_calc(char_1,unsigned_int_2,double_2,int_2,unsigned_int_2,uni_para);

			float_3 = float_1 * float_3;
		}
		if(1)
		{
			short short_4 = 1;
			short_1 = short_4 + short_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	return char_1;
}
void v__smooth_handler( long parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	float_1 = float_1 * float_2;
	float_2 = float_3 * float_3;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_2;
	}
	char controller4vul_1136[2];
	fgets(controller4vul_1136 ,2 ,stdin);
	if( strcmp( controller4vul_1136, "m") < 0)
	{
		char controller4vul_1137[2];
		fgets(controller4vul_1137 ,2 ,stdin);
		if( strcmp( controller4vul_1137, "_") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			long_2 = long_1 * long_2;
			char controller4vul_1138[3];
			fgets(controller4vul_1138 ,3 ,stdin);
			if( strcmp( controller4vul_1138, "J=") < 0)
			{
				short_1 = short_1 + short_2;
				char controller4vul_1139[3];
				fgets(controller4vul_1139 ,3 ,stdin);
				if( strcmp( controller4vul_1139, "o|") > 0)
				{
					char char_2 = 1;
					char char_3 = 1;
					char_1 = v__unsmooth_timeout(uni_para);

					char_3 = char_2 * char_2;
				}
			}
			if(1)
			{
				int_3 = int_1 + int_2;
			}
			if(1)
			{
				short short_3 = 1;
				short_2 = short_2 * short_3;
			}
			int_2 = int_2 + int_3;
		}
	}
	if(1)
	{
		int int_4 = 1;
		if(1)
		{
			double double_3 = 1;
			double_3 = double_3 + double_2;
		}
		int_1 = int_3 + int_4;
	}
}
float v__smart_calculate( float parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double_3 = double_1 * double_2;
	double_2 = double_1 + double_1;
	char controller4vul_1135[2];
	fgets(controller4vul_1135 ,2 ,stdin);
	if( strcmp( controller4vul_1135, "C") < 0)
	{
		v__smooth_handler(long_1,uni_para);

	}
	double_1 = double_3 + double_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	double_3 = double_3 * double_3;
	double_3 = double_2;
	int_2 = int_3;
	int_2 = int_3 * int_4;
	long_1 = long_1;
	int_6 = int_5 + int_5;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_2 * int_4;
	long_2 = long_1 * long_1;
	short_1 = short_1 + short_2;
	double_1 = double_3 * double_1;
	char_1 = char_1;
	int_2 = int_6 + int_5;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	char_1 = char_2;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_1 * double_1;
		double_2 = double_1 + double_4;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_1 + char_3;
		double_1 = double_1 * double_3;
	}
	return float_1;
}
unsigned int v__smart_move( char parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	return unsigned_int_1;
}
unsigned int v__smart_resize( short parameter_1,short parameter_2,short parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_1;
	return unsigned_int_1;
}
long v__smart_del( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		int_1 = int_2 * int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	char_2 = char_1 + char_1;
	float_1 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		if(1)
		{
			char_4 = char_2 + char_3;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_1 + float_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1;
	}
	if(1)
	{
		char_2 = char_3 + char_4;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		double_3 = double_3;
	}
	unsigned_int_5 = unsigned_int_5;
	double_4 = double_3 + double_2;
	return long_1;
}
char v__smart_add()
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	float_2 = float_1 + float_1;
	char_1 = char_1;
	float_1 = float_3 + float_2;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	float_1 = float_4;
	return char_1;
}
short v__smart_init(int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	float_1 = v__smart_calculate(float_2,uni_para);

	float_5 = float_3 * float_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_1;
	long_2 = long_1 + long_1;
	double_2 = double_1 + double_2;
	char_1 = char_1;
	short_1 = short_1 + short_1;
	double_3 = double_1 + double_1;
	int_2 = int_1 + int_1;
	return short_2;
}
int v_media_add( unsigned int parameter_1,double parameter_2,char parameter_3,int parameter_4,short parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	char char_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_7 = 1;
	double double_9 = 1;
	double double_10 = 1;
	long long_3 = 1;
	float float_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	long_1 = long_1 * long_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		int_2 = int_4 + int_1;
	}
	double_1 = double_2;
	int_4 = int_5 * int_5;
	if(1)
	{
	}
	char_2 = char_1 + char_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_6;
	unsigned_int_6 = unsigned_int_5;
	char controller4vul_1129[2];
	fgets(controller4vul_1129 ,2 ,stdin);
	if( strcmp( controller4vul_1129, "8") < 0)
	{
		char controller4vul_1130[3];
		fgets(controller4vul_1130 ,3 ,stdin);
		if( strcmp( controller4vul_1130, "s-") > 0)
		{
			float float_2 = 1;
			int_4 = int_3 * int_2;
			short_1 = short_1;
			if(1)
			{
				char_3 = char_2 * char_2;
				unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
				unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
			}
			if(1)
			{
				long_2 = long_1 + long_1;
				float_2 = float_1 + float_2;
				short_1 = short_1 + short_1;
			}
			if(1)
			{
				short_2 = short_1 * short_1;
			}
			if(1)
			{
				int_2 = int_2 * int_4;
			}
			if(1)
			{
				double_1 = double_1 * double_3;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
			}
			if(1)
			{
				double_3 = double_1;
			}
			if(1)
			{
				char_3 = char_2 + char_4;
				unsigned_int_1 = unsigned_int_4 + unsigned_int_6;
				long_2 = long_1 + long_2;
				float_3 = float_1 * float_2;
				int_6 = int_5 + int_3;
				unsigned_int_3 = unsigned_int_7 * unsigned_int_6;
				float_2 = float_4;
			}
			char controller4vul_1131[3];
			fgets(controller4vul_1131 ,3 ,stdin);
			if( strcmp( controller4vul_1131, "m<") < 0)
			{
				short short_3 = 1;
				short short_4 = 1;
				short short_5 = 1;
				short_1 = short_1 * short_3;
				int_2 = int_3 + int_4;
				short_3 = short_4 + short_5;
				char controller4vul_1132[3];
				fgets(controller4vul_1132 ,3 ,stdin);
				if( strcmp( controller4vul_1132, "]y") < 0)
				{
					char char_6 = 1;
					double_1 = double_1 + double_2;
					if(1)
					{
						char_6 = char_4 + char_5;
						int_1 = int_2 * int_5;
					}
					char controller4vul_1133[3];
					fgets(controller4vul_1133 ,3 ,stdin);
					if( strcmp( controller4vul_1133, ":a") < 0)
					{
						unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
						char controller4vul_1134[3];
						fgets(controller4vul_1134 ,3 ,stdin);
						if( strcmp( controller4vul_1134, "CZ") > 0)
						{
							short_2 = v__smart_init(uni_para);

							int_7 = int_4 + int_3;
							long_2 = long_1 + long_2;
							int_8 = int_3 * int_6;
						}
						if(1)
						{
							unsigned int unsigned_int_8 = 1;
							int int_9 = 1;
							short_5 = short_1 + short_3;
							char_6 = char_1 + char_3;
							unsigned_int_2 = unsigned_int_7 + unsigned_int_1;
							int_3 = int_7 * int_8;
							unsigned_int_1 = unsigned_int_8 * unsigned_int_7;
							int_9 = int_2;
							unsigned_int_8 = unsigned_int_3 + unsigned_int_5;
							double_2 = double_2;
							double_2 = double_2 * double_2;
						}
					}
				}
				if(1)
				{
					double_4 = double_3 * double_1;
				}
			}
		}
		if(1)
		{
			double_5 = double_2 * double_3;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_6 = 1;
			double double_8 = 1;
			unsigned_int_2 = unsigned_int_9;
			double_8 = double_6 + double_7;
		}
	}
	if(1)
	{
		int int_10 = 1;
		if(1)
		{
			short short_6 = 1;
			int_5 = int_10 * int_10;
			short_1 = short_6;
		}
		long_1 = long_1;
		if(1)
		{
			int_3 = int_1 + int_10;
			double_4 = double_3 * double_2;
		}
		unsigned_int_9 = unsigned_int_4 * unsigned_int_2;
		if(1)
		{
			char_5 = char_3 * char_3;
			double_5 = double_9 + double_4;
		}
		double_10 = double_7;
		char controller_10[3];
		fgets(controller_10 ,3 ,stdin);
		if( strcmp( controller_10, "69") < 0)
		{
			float_3 = float_1 + float_3;
			double_1 = double_3 + double_10;
		}
		int_5 = int_8 + int_10;
		unsigned_int_4 = unsigned_int_5;
	}
	unsigned_int_7 = unsigned_int_1 * unsigned_int_5;
	int_8 = int_6;
	long_1 = long_2 * long_1;
	long_3 = long_3 * long_1;
	char_4 = char_5 + char_4;
	double_5 = double_10 * double_9;
	float_4 = float_5 * float_1;
	int_7 = int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	return int_7;
}
float v__block_media_activate( double parameter_1,float parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	float float_5 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1 + double_2;
	long_2 = long_1 * long_1;
	int_3 = int_4;
	char_2 = char_1 * char_1;
	char controller4vul_1128[2];
	fgets(controller4vul_1128 ,2 ,stdin);
	if( strcmp( controller4vul_1128, "(") < 0)
	{
		int_5 = v_media_add(unsigned_int_1,double_1,char_3,int_4,short_1,uni_para);

		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		double_3 = double_1;
	}
	if(1)
	{
		double_2 = double_1 + double_4;
	}
	if(1)
	{
		char char_4 = 1;
		char_3 = char_4 * char_4;
	}
	if(1)
	{
		int_5 = int_2 + int_3;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	double_3 = double_3 * double_4;
	int_5 = int_2 * int_3;
	if(1)
	{
		short_3 = short_1 * short_2;
	}
	float_1 = float_1 + float_1;
	float_3 = float_1 * float_2;
	short_4 = short_4;
	short_4 = short_3 * short_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	short_4 = short_3 + short_4;
	if(1)
	{
		long long_3 = 1;
		float float_4 = 1;
		long_1 = long_3;
		float_1 = float_4 + float_2;
	}
	double_5 = double_3 + double_3;
	float_1 = float_5;
	short_2 = short_1 + short_1;
	char controller_8[2];
	fgets(controller_8 ,2 ,stdin);
	if( strcmp( controller_8, "b") > 0)
	{
		char_2 = char_3;
	}
	return float_2;
}
unsigned int v__block_edje_message_cb(double parameter_2,unsigned int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_7 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_8 = 1;
	char char_6 = 1;
	int int_8 = 1;
	double double_9 = 1;
	long long_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	short short_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 * short_1;
	int_3 = int_1 * int_2;
	char_1 = char_2;
	float_2 = float_1 * float_2;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = int_2 * int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	int_2 = int_3 + int_2;
	int_3 = int_4 * int_3;
	long_1 = long_2;
	float_4 = float_3 + float_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	long_3 = long_3 + long_4;
	int_4 = int_2 + int_1;
	long_6 = long_1 + long_5;
	long_1 = long_1 + long_6;
	char_1 = char_2 * char_3;
	v_termpty_write(short_2,unsigned_int_6,int_1);

	long_6 = long_7;
	int_3 = int_3 * int_4;
	int_4 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_2 * double_3;
		int_3 = int_3 + int_4;
	}
	short_3 = short_2;
	short_2 = short_4;
	double_3 = double_1 + double_3;
	int_3 = int_1 * int_2;
	int_6 = int_3 * int_5;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	double_4 = double_3 * double_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_7 = 1;
		int_7 = int_5 * int_6;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_6;
		short_1 = short_3 + short_3;
	}
	double_1 = double_4 + double_2;
	double_3 = double_4 * double_5;
	double_6 = double_4;
	double_6 = double_5 + double_7;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	char_2 = char_4 + char_4;
	char_5 = char_1 * char_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float_2 = float_2 + float_3;
		double_8 = double_3 + double_3;
		int_3 = int_2;
	}
	double_5 = double_8 + double_5;
	char_6 = char_3 * char_3;
	int_8 = int_6;
	double_4 = double_9 + double_3;
	double_8 = double_2 * double_5;
	double_1 = double_5 * double_9;
	long_5 = long_7 * long_8;
	float_1 = float_4 + float_2;
	short_2 = short_3 * short_1;
	int_6 = int_9 + int_10;
	int_3 = int_3 + int_4;
	int_10 = int_2 + int_10;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_5;
	short_4 = short_2 * short_5;
	long_6 = long_8;
	unsigned_int_2 = unsigned_int_6;
	double_1 = double_8 * double_2;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short_5 = short_1 * short_5;
		char_6 = char_4;
		char_3 = char_4 * char_2;
	}
	float_1 = float_1;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
	float_5 = float_2 + float_5;
	float_3 = float_3 * float_2;
	int_6 = int_8 + int_10;
	char_5 = char_4 * char_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_7 = unsigned_int_2;
	float_1 = float_3 + float_5;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double double_10 = 1;
		short short_6 = 1;
		long_3 = long_4 + long_1;
		double_10 = double_3 + double_8;
		short_3 = short_6;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	short_1 = short_5;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_8;
	return unsigned_int_9;
}
void v_termpty_write( short parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_3 = int_1 * int_2;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
}
short v__block_edje_signal_cb(long parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_4 = double_2 + double_2;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
		float float_3 = 1;
		char char_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float_2 = float_3 + float_1;
		char_4 = char_2 * char_4;
		unsigned_int_2 = unsigned_int_3;
		double_2 = double_2;
		int_1 = int_2;
		float_2 = float_2 * float_2;
		long_1 = long_2;
		v_termpty_write(short_3,unsigned_int_4,int_2);

		double_6 = double_1 + double_5;
	}
	if(1)
	{
		double double_7 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_3 = 1;
		double_3 = double_2 + double_7;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
		int_1 = int_2 + int_3;
	}
	return short_2;
}
void v_termpty_block_chid_update( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, " ") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
	}
	int_1 = int_1 * int_2;
}
double v__block_edje_cmds( char parameter_1,short parameter_2,char parameter_3,short parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	short_1 = v__block_edje_signal_cb(long_1,int_1,int_2);

	unsigned_int_1 = v__block_edje_message_cb(double_1,unsigned_int_2,int_1);

	float_1 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_2;
	v_termpty_block_chid_update(short_1,float_3);

}
unsigned int v_homedir_get( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_1 + double_1;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_2 + double_3;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	return unsigned_int_1;
}
double v__block_edje_activate( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	char char_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	long long_2 = 1;
	char_3 = char_1 * char_2;
	float_1 = float_1 + float_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		double_3 = double_2 + double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			long long_1 = 1;
			short_3 = short_2 + short_3;
			double_4 = v__block_edje_cmds(char_1,short_4,char_4,short_5);

			long_1 = long_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			double_2 = double_3;
			unsigned_int_2 = v_homedir_get(char_5,int_3);

			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
	}
	double_4 = double_4 + double_2;
	double_5 = double_3 * double_5;
	float_1 = float_1;
	v_config_theme_path_default_get(long_2);

	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		char char_6 = 1;
		char_6 = char_4 * char_5;
	}
	if(1)
	{
		short_2 = short_4 * short_3;
	}
	return double_2;
}
double v__block_activate( int parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1127[3];
	fgets(controller4vul_1127 ,3 ,stdin);
	if( strcmp( controller4vul_1127, " x") < 0)
	{
		float_1 = v__block_media_activate(double_1,float_1,uni_para);

	}
	double_2 = double_2;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	short_1 = short_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return double_3;
}
unsigned int v_termpty_block_get( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	return unsigned_int_1;
}
int v_termpty_block_id_get( float parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "`") > 0)
	{
	}
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_3 * short_2;
	return int_1;
}
void v_termpty_backscroll_adjust( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	unsigned_int_1 = v_verify_beacon(float_1,int_1);

	float_1 = float_2;
}
int v__smart_apply(int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_5 = 1;
	short short_5 = 1;
	float float_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_6 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_11 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	float float_6 = 1;
	int int_7 = 1;
	float float_7 = 1;
	float float_8 = 1;
	double double_11 = 1;
	char char_7 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_14 = 1;
	long long_8 = 1;
	int int_8 = 1;
	int int_9 = 1;
	float float_9 = 1;
	float float_10 = 1;
	unsigned int unsigned_int_15 = 1;
	unsigned int unsigned_int_17 = 1;
	double_1 = double_1 * double_1;
	long_1 = long_1;
	short_2 = short_1 + short_1;
	double_3 = double_2 + double_1;
	char_1 = char_1 + char_2;
	float_2 = float_1 * float_2;
	char_4 = char_3 + char_4;
	double_3 = double_3;
	float_3 = float_2 * float_2;
	double_5 = double_4 * double_4;
	double_6 = double_5 + double_6;
	float_2 = float_1;
	double_4 = double_2;
	short_2 = short_2 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		double_3 = double_7 + double_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		char_4 = char_2 + char_1;
		int_1 = int_1 * int_2;
		if(1)
		{
			double_4 = double_5 + double_6;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			long_2 = long_1 * long_1;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						double_4 = double_3 * double_3;
					}
					short_1 = short_2 * short_2;
				}
				double_7 = double_8 + double_6;
				if(1)
				{
					int_1 = int_1;
				}
				if(1)
				{
					double_4 = double_5 * double_6;
				}
				unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
				int_2 = int_3 + int_1;
				double_5 = double_6 * double_1;
				unsigned_int_5 = unsigned_int_4;
				double_1 = double_3 + double_3;
				short_1 = short_3 * short_3;
			}
			char controller4vul_1123[3];
			fgets(controller4vul_1123 ,3 ,stdin);
			if( strcmp( controller4vul_1123, "$y") < 0)
			{
				long long_3 = 1;
				short short_6 = 1;
				double_4 = double_2 + double_7;
				double_1 = double_6 + double_4;
				if(1)
				{
					if(1)
					{
						double_2 = double_4 * double_8;
					}
					int_2 = int_3 * int_3;
					short_2 = short_1 * short_2;
					unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
					int_2 = int_1 * int_2;
					double_3 = double_8 * double_5;
					char_3 = char_2 + char_5;
					unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
					unsigned_int_7 = unsigned_int_2 + unsigned_int_7;
					unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
					double_3 = double_6 * double_1;
					short_4 = short_2;
					unsigned_int_8 = unsigned_int_8 + unsigned_int_5;
					if(1)
					{
						long_2 = long_1 * long_3;
						int_4 = int_4 * int_1;
						unsigned_int_9 = unsigned_int_2 + unsigned_int_8;
						short_2 = short_2 * short_3;
						unsigned_int_3 = unsigned_int_9;
					}
				}
				char controller4vul_1124[2];
				fgets(controller4vul_1124 ,2 ,stdin);
				if( strcmp( controller4vul_1124, "F") > 0)
				{
					char controller4vul_1125[3];
					fgets(controller4vul_1125 ,3 ,stdin);
					if( strcmp( controller4vul_1125, ".r") < 0)
					{
						char controller4vul_1126[2];
						fgets(controller4vul_1126 ,2 ,stdin);
						if( strcmp( controller4vul_1126, "|") > 0)
						{
							double_3 = v__block_activate(int_4,long_2,uni_para);

							double_9 = double_9 * double_10;
						}
						unsigned_int_9 = unsigned_int_2 * unsigned_int_4;
					}
					double_3 = double_4 + double_9;
					if(1)
					{
						short_3 = short_2 * short_1;
					}
					if(1)
					{
						int_5 = int_4 + int_1;
					}
					short_2 = short_2;
					short_6 = short_5 * short_6;
					float_2 = float_1 * float_4;
					unsigned_int_7 = unsigned_int_4 + unsigned_int_2;
					short_4 = short_6 + short_6;
					long_3 = long_2 + long_1;
					if(1)
					{
						unsigned_int_1 = unsigned_int_5 * unsigned_int_7;
					}
				}
				if(1)
				{
					short short_7 = 1;
					int_4 = int_3;
					double_5 = double_10 + double_9;
					char_1 = char_4 * char_4;
					double_3 = double_3 * double_5;
					long_1 = long_4 + long_5;
					unsigned_int_9 = unsigned_int_1 * unsigned_int_1;
					if(1)
					{
						char_4 = char_4 + char_6;
						long_2 = long_6 + long_2;
					}
					if(1)
					{
						short_5 = short_3 + short_7;
						double_5 = double_1 + double_9;
					}
					if(1)
					{
						int_3 = int_3 * int_5;
					}
					if(1)
					{
						if(1)
						{
							unsigned_int_1 = unsigned_int_6 * unsigned_int_9;
						}
						if(1)
						{
							long_4 = long_1 * long_2;
						}
					}
					if(1)
					{
						unsigned_int_10 = unsigned_int_5 + unsigned_int_8;
					}
					if(1)
					{
						short_2 = short_6 * short_7;
					}
					if(1)
					{
						int_2 = int_5 + int_4;
						float_4 = float_1 * float_4;
						int_3 = int_4 * int_5;
						int_6 = int_3 + int_4;
						unsigned_int_10 = unsigned_int_5 + unsigned_int_9;
						long_3 = long_4;
						unsigned_int_4 = unsigned_int_10 + unsigned_int_8;
					}
					if(1)
					{
						double_5 = double_2;
					}
					if(1)
					{
						unsigned_int_2 = unsigned_int_11 * unsigned_int_6;
					}
					if(1)
					{
						if(1)
						{
							float_1 = float_5 + float_5;
						}
						unsigned_int_13 = unsigned_int_4 * unsigned_int_12;
					}
					unsigned_int_2 = unsigned_int_11;
					float_3 = float_6 * float_1;
					int_5 = int_5 + int_1;
					int_3 = int_4 + int_4;
					if(1)
					{
						int_6 = int_7 * int_5;
						float_2 = float_7 + float_6;
					}
					if(1)
					{
						int_3 = int_5 + int_4;
						unsigned_int_13 = unsigned_int_12 * unsigned_int_9;
					}
					double_3 = double_8;
					short_5 = short_2 + short_5;
					double_8 = double_2 * double_6;
					float_8 = float_5 + float_7;
					if(1)
					{
						float_8 = float_8 + float_1;
					}
				}
			}
		}
		double_11 = double_8 * double_4;
		if(1)
		{
			double_3 = double_11 + double_7;
		}
	}
	unsigned_int_2 = unsigned_int_4;
	if(1)
	{
		double double_13 = 1;
		char char_8 = 1;
		double_9 = double_6 + double_4;
		float_4 = float_5 * float_8;
		char_7 = char_6 + char_5;
		unsigned_int_8 = unsigned_int_13;
		double_8 = double_8 * double_8;
		long_5 = long_7 * long_7;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				short short_8 = 1;
				double double_12 = 1;
				unsigned_int_7 = unsigned_int_11 * unsigned_int_6;
				short_8 = short_4;
				unsigned_int_10 = unsigned_int_10 * unsigned_int_7;
				if(1)
				{
					unsigned_int_13 = unsigned_int_9 * unsigned_int_6;
				}
				char_1 = char_4 + char_4;
				if(1)
				{
					if(1)
					{
						short_2 = short_1 * short_2;
						double_9 = double_8 * double_10;
						float_6 = float_2 * float_6;
					}
				}
				if(1)
				{
					unsigned_int_13 = unsigned_int_14 * unsigned_int_13;
					unsigned_int_4 = unsigned_int_4 + unsigned_int_10;
				}
				double_3 = double_7 + double_8;
				double_13 = double_2 + double_12;
				int_3 = int_4 * int_1;
				double_4 = double_5 + double_8;
				unsigned_int_6 = unsigned_int_6;
				long_1 = long_8 * long_7;
				int_1 = int_5 * int_8;
				double_6 = double_13 * double_4;
				int_5 = int_6 + int_8;
				long_4 = long_2 + long_7;
				int_8 = int_8 * int_3;
				if(1)
				{
					int_8 = int_5 * int_9;
					double_2 = double_11 * double_8;
					char_4 = char_2 + char_1;
					float_10 = float_8 * float_9;
					float_6 = float_3 + float_3;
					char_6 = char_6;
					unsigned_int_9 = unsigned_int_2 * unsigned_int_12;
					int_6 = int_7 * int_9;
					unsigned_int_9 = unsigned_int_2 + unsigned_int_15;
					double_13 = double_4 * double_8;
				}
				double_6 = double_4 + double_1;
				if(1)
				{
					if(1)
					{
						char_8 = char_5 + char_5;
						short_3 = short_4 + short_2;
					}
				}
			}
			double_8 = double_7 * double_3;
		}
		double_13 = double_2;
		char_3 = char_8 + char_8;
	}
	unsigned_int_11 = unsigned_int_7 + unsigned_int_6;
	if(1)
	{
		unsigned int unsigned_int_16 = 1;
		unsigned_int_10 = unsigned_int_16 * unsigned_int_17;
		int_8 = int_6 + int_6;
		int_8 = int_6 + int_7;
	}
	if(1)
	{
		float_6 = float_4 * float_10;
	}
	if(1)
	{
		float_2 = float_4 * float_7;
	}
	long_1 = long_6 + long_7;
	long_7 = long_1 + long_6;
	short_5 = short_2 + short_2;
	if(1)
	{
		double double_14 = 1;
		long long_9 = 1;
		long long_10 = 1;
		double double_15 = 1;
		long long_11 = 1;
		short short_9 = 1;
		double_11 = double_14 * double_2;
		long_8 = long_4 * long_8;
		long_10 = long_9 + long_1;
		float_8 = float_8 * float_9;
		unsigned_int_8 = unsigned_int_13 * unsigned_int_15;
		int_4 = int_3 * int_6;
		if(1)
		{
			int_4 = int_2 + int_5;
			float_8 = float_3 * float_10;
		}
		int_7 = int_9 + int_2;
		int_3 = int_9;
		double_5 = double_2 + double_15;
		long_11 = long_9 * long_7;
		float_8 = float_1 * float_8;
		short_9 = short_2;
		float_7 = float_8 * float_2;
		double_2 = double_6 * double_1;
		if(1)
		{
			short_1 = short_1 * short_9;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_5 = unsigned_int_14 + unsigned_int_15;
			}
			if(1)
			{
				unsigned int unsigned_int_18 = 1;
				unsigned_int_3 = unsigned_int_18 + unsigned_int_13;
			}
			if(1)
			{
				int int_10 = 1;
				int_10 = int_10;
			}
			if(1)
			{
				short short_10 = 1;
				short_2 = short_9 + short_10;
			}
			if(1)
			{
				float_5 = float_10 * float_4;
			}
		}
		char_2 = char_7 + char_1;
	}
	if(1)
	{
		int_5 = int_1 * int_2;
	}
	if(1)
	{
		long long_12 = 1;
		long_6 = long_8 * long_12;
	}
	unsigned_int_17 = unsigned_int_12;
	return int_6;
}
int v__smart_cb_change(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int_1 = v__smart_apply(uni_para);

	int_1 = int_2 * int_3;
	int_3 = int_2 + int_4;
	short_2 = short_1 * short_2;
	double_1 = double_2;
	float_1 = float_1 * float_1;
	int_1 = int_2 * int_5;
	return int_3;
}
short v__smart_update_queue( char parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	char controller4vul_1122[2];
	fgets(controller4vul_1122 ,2 ,stdin);
	if( strcmp( controller4vul_1122, "7") > 0)
	{
		int_1 = v__smart_cb_change(uni_para);

	}
	float_3 = float_1 + float_2;
	return short_1;
}
int v__lost_selection_reset_job()
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long_2 = long_1 * long_2;
	short_1 = v__lost_selection(short_2,-1 );

	double_1 = double_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
		double_1 = double_1;
	}
	return int_4;
}
short v__lost_selection(short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1;
	float_2 = float_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	char controller4vul_1119[2];
	fgets(controller4vul_1119 ,2 ,stdin);
	if( strcmp( controller4vul_1119, "q") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		char controller4vul_1120[2];
		fgets(controller4vul_1120 ,2 ,stdin);
		if( strcmp( controller4vul_1120, ")") > 0)
		{
			double double_2 = 1;
			float float_3 = 1;
			double_1 = double_2 + double_1;
			char controller4vul_1121[2];
			fgets(controller4vul_1121 ,2 ,stdin);
			if( strcmp( controller4vul_1121, "e") < 0)
			{
				short_1 = v__smart_update_queue(char_1,unsigned_int_2,uni_para);

				float_3 = float_4;
			}
			float_5 = float_4 + float_3;
		}
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_7 = 1;
		int int_2 = 1;
		if(1)
		{
			float float_6 = 1;
			float_6 = float_1 * float_1;
			int_1 = int_1 * int_1;
		}
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		float_5 = float_5 * float_4;
		float_5 = float_7 * float_7;
		int_2 = int_1;
	}
	return short_1;
}
int v__take_selection_text( short parameter_1,char parameter_2,short parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 * float_1;
	float_2 = float_1 * float_2;
	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_2 + double_2;
	int_1 = int_2;
	double_3 = double_1 * double_1;
	float_2 = float_1 * float_3;
	char controller4vul_1118[2];
	fgets(controller4vul_1118 ,2 ,stdin);
	if( strcmp( controller4vul_1118, "F") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		short_1 = v__lost_selection(short_2,uni_para);

		long_1 = long_1 * long_2;
	}
	float_3 = float_1 + float_4;
	return int_1;
}
int v__cb_ctxp_link_content_copy(int parameter_2,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_4 = 1;
	int_1 = v__take_selection_text(short_1,char_1,short_1,uni_para);

	long_1 = long_1 + long_2;
	int_1 = int_1 + int_1;
	int_3 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_1;
	long_3 = long_3 + long_1;
	int_3 = int_1 + int_4;
	int_4 = int_5 + int_6;
	long_3 = long_4;
	return int_2;
}
void v_ty_sb_free( float parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
int v_ty_sb_steal_buf( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_2;
	int_2 = int_1 + int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
		int_1 = int_3;
	}
	int_3 = int_2 + int_3;
	short_1 = short_2;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return int_2;
}
int v_codepoint_to_utf8( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_5 = 1;
	if(1)
	{
		double_2 = double_1 * double_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_3 * double_4;
		double_1 = double_3 * double_4;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
		double_4 = double_4 * double_2;
		float_3 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		short short_1 = 1;
		double_1 = double_3 + double_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		short_1 = short_1 + short_2;
		int_3 = int_3;
		int_4 = int_3 + int_2;
	}
	if(1)
	{
		short short_4 = 1;
		double_4 = double_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_1 = unsigned_int_4;
		int_4 = int_5 + int_3;
		double_4 = double_2;
		short_4 = short_2 * short_3;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_6 = 1;
		short short_5 = 1;
		short short_6 = 1;
		int int_6 = 1;
		int int_7 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char_1 = char_2;
		double_4 = double_5 * double_6;
		short_6 = short_5 * short_3;
		int_6 = int_2 * int_4;
		float_2 = float_3 * float_1;
		int_7 = int_5 + int_2;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		double_3 = double_5 + double_4;
	}
	return int_1;
}
void v_ty_sb_spaces_rtrim( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_2;
	char_2 = char_1 + char_2;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long_3 = long_1 * long_2;
		float_2 = float_1 + float_2;
		short_3 = short_1 + short_3;
		char_1 = char_3 + char_4;
	}
}
int v_ty_sb_add( double parameter_1,long parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		char char_1 = 1;
		double_1 = double_1 * double_1;
		char_1 = char_1 * char_1;
		long_2 = long_2 + long_1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		long_2 = long_2 * long_2;
	}
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_1 + double_2;
	return int_1;
}
unsigned int v__termpty_cellrow_from_beacon_get( long parameter_1,int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_3;
	char_2 = char_4 + char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	double_3 = double_1 * double_3;
	if(1)
	{
		double_4 = double_2 * double_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	short_2 = short_1 * short_2;
	short_3 = short_3 * short_1;
	double_6 = double_5 * double_4;
	char_4 = char_4;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "g}") > 0)
	{
		float float_3 = 1;
		char char_5 = 1;
		float float_5 = 1;
		float float_6 = 1;
		float_3 = float_3 * float_2;
		char_5 = char_2 * char_4;
		float_1 = float_4 * float_2;
		float_5 = float_2 * float_2;
		float_5 = float_6;
		double_3 = double_1 * double_5;
		float_2 = float_3 + float_4;
	}
	short_3 = short_1 + short_1;
	return unsigned_int_4;
	unsigned_int_3 = v_verify_beacon(float_4,int_1);

}
float v_termpty_cellrow_get( double parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	if(1)
	{
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	return float_1;
	unsigned_int_2 = v__termpty_cellrow_from_beacon_get(long_1,int_1,unsigned_int_1);

}
void v_termio_selection_get( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,char parameter_6,int parameter_7)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_4 = 1;
	int int_5 = 1;
	long_1 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			int_2 = int_1 + int_2;
			int_1 = v_ty_sb_add(double_1,long_2,double_1);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			v_termpty_backlog_unlock();

			short_1 = short_2;
		}
		if(1)
		{
			short_3 = short_2;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						char_2 = char_1 * char_1;
					}
					if(1)
					{
						int_4 = int_2 + int_3;
					}
				}
				if(1)
				{
					double double_2 = 1;
					double_2 = double_2 * double_2;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					float_1 = v_termpty_cellrow_get(double_1,int_4,double_1);

					v_ty_sb_spaces_rtrim(short_4);

					short_2 = short_3;
				}
				if(1)
				{
					int_5 = int_4 * int_4;
				}
				if(1)
				{
					int int_6 = 1;
					int_5 = v_codepoint_to_utf8(char_1,char_1);

					v_ty_sb_free(float_1);

					int_6 = int_2;
				}
				if(1)
				{
					char char_3 = 1;
					char_3 = char_2 + char_2;
				}
				if(1)
				{
					int_3 = v_ty_sb_steal_buf(short_1);

					int_3 = int_2 * int_4;
				}
			}
			v_termpty_backlog_lock();

			float_2 = float_2 + float_2;
		}
		if(1)
		{
			char_1 = char_1;
		}
	}
}
double v__cb_ctxp_link_open(float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_1;
	unsigned_int_2 = v__activate_link(unsigned_int_1,double_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	long_3 = long_2 + long_3;
	int_1 = int_1 + int_1;
	int_3 = int_1 * int_2;
	return double_2;
}
float v__should_inline( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_2;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	char_1 = char_2;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	return float_1;
	unsigned_int_1 = v_termio_config_get();

}
char v_link_is_email( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
}
short v_link_is_protocol( float parameter_1)
{
	short short_1 = 1;
	return short_1;
}
short v_link_is_url( int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	return short_1;
	short_1 = v_link_is_protocol(float_1);

}
unsigned int v__activate_link( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_6 = 1;
	double double_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = v_link_is_url(int_1);

	short_4 = short_2 + short_3;
	long_3 = long_1 * long_2;
	int_3 = int_2 + int_2;
	double_1 = double_2;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_2 + char_2;
	char_1 = char_3 * char_3;
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
			double_1 = double_3;
		}
		if(1)
		{
			int_1 = int_2;
		}
	}
	if(1)
	{
		double_1 = double_3 * double_2;
	}
	if(1)
	{
		char_4 = char_3;
	}
	if(1)
	{
		double_3 = double_4 * double_3;
		long_5 = long_1 * long_4;
	}
	long_2 = long_5 + long_5;
	if(1)
	{
	}
	if(1)
	{
		short short_5 = 1;
		short_5 = short_5 * short_5;
		float_1 = float_1 * float_1;
		if(1)
		{
			short_2 = short_4 + short_3;
		}
		if(1)
		{
			float_1 = float_2;
		}
		float_1 = v__should_inline(double_3);

		short_3 = short_1 * short_3;
		if(1)
		{
			float_2 = float_2 * float_2;
			double_5 = double_2 * double_2;
		}
	}
	if(1)
	{
		float float_3 = 1;
		int_3 = int_4 + int_5;
		float_3 = float_3 + float_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			if(1)
			{
				if(1)
				{
					int_2 = int_4 + int_5;
					long_4 = long_6 * long_3;
				}
				if(1)
				{
					double_4 = double_6;
					long_5 = long_6 + long_1;
				}
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						char_3 = char_4 * char_2;
					}
				}
				if(1)
				{
					if(1)
					{
						float_4 = float_3 * float_1;
					}
				}
				if(1)
				{
					if(1)
					{
						short short_6 = 1;
						unsigned_int_2 = v_media_src_type_get(double_4);

						short_1 = short_6 + short_6;
					}
				}
				double_1 = double_3 * double_5;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
			}
		}
	}
	if(1)
	{
		double_2 = double_5 * double_3;
		char_4 = v_link_is_email(int_2);

		float_2 = float_4 + float_2;
		if(1)
		{
			char char_5 = 1;
			char_5 = char_2 * char_4;
			if(1)
			{
				int int_6 = 1;
				int_5 = int_4 * int_1;
				int_2 = int_6 + int_5;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						int_1 = int_5 * int_4;
					}
				}
				if(1)
				{
					if(1)
					{
						long_5 = long_4 + long_1;
					}
				}
				if(1)
				{
					if(1)
					{
						double_2 = double_6 * double_4;
					}
				}
				long_1 = long_6 + long_1;
				int_4 = int_1 + int_4;
			}
		}
	}
	if(1)
	{
		double_3 = double_5 + double_5;
	}
	char_1 = char_4 + char_3;
	if(1)
	{
		int int_7 = 1;
		int_3 = int_4 + int_7;
	}
	return unsigned_int_3;
}
float v__cb_ctxp_link_preview(short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_2;
	short_1 = short_1 * short_1;
	int_1 = int_1 * int_1;
	float_3 = float_1 + float_2;
	return float_2;
	unsigned_int_1 = v__activate_link(unsigned_int_3,double_2);

}
void v__is_fmt( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1;
		}
		if(1)
		{
		}
	}
}
unsigned int v_media_src_type_get( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		v__is_fmt(double_3,short_2);

		long_2 = long_1 + long_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	return unsigned_int_1;
}
void v__mouse_in_selection( float parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	double_1 = double_1 * double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_2 = int_1 * int_1;
		char_3 = char_1 * char_2;
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
short v__smart_xy_to_cursor( char parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 + int_1;
	double_3 = double_2 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_3;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 + long_1;
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
		int_2 = int_2 * int_1;
	}
	return short_1;
}
char v__cb_link_down(char parameter_2,float parameter_3,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	if(1)
	{
		short short_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		float_3 = float_1 + float_2;
		short_1 = short_1 + short_1;
	}
	char controller4vul_1115[2];
	fgets(controller4vul_1115 ,2 ,stdin);
	if( strcmp( controller4vul_1115, "T") < 0)
	{
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		char char_4 = 1;
		float_3 = float_2;
		char_1 = char_2;
		long_3 = long_1 * long_2;
		double_1 = double_1 * double_2;
		char controller4vul_1116[2];
		fgets(controller4vul_1116 ,2 ,stdin);
		if( strcmp( controller4vul_1116, "}") < 0)
		{
			float float_4 = 1;
			double_3 = double_1 * double_2;
			float_4 = float_3 + float_2;
			char controller4vul_1117[3];
			fgets(controller4vul_1117 ,3 ,stdin);
			if( strcmp( controller4vul_1117, "=?") < 0)
			{
				int_1 = v__cb_ctxp_link_content_copy(int_3,uni_para);

			}
		}
		char_1 = char_1 + char_3;
		short_3 = short_2 * short_2;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_1 * double_4;
			if(1)
			{
				int_2 = int_4 + int_4;
			}
		}
		char_3 = char_3;
		double_5 = double_3 * double_1;
		if(1)
		{
			long_2 = long_3 + long_1;
		}
		if(1)
		{
			long long_4 = 1;
			long_2 = long_4 + long_1;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		}
		int_2 = int_1;
		float_3 = float_1 * float_2;
		int_1 = int_4 + int_2;
		double_5 = double_3 + double_6;
		char_3 = char_1 + char_4;
	}
	return char_1;
}
short v_main_term_popup_exists( double parameter_1)
{
	short short_1 = 1;
	return short_1;
}
int v__update_link( long parameter_1,char parameter_2,long parameter_3,float parameter_4,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	float float_4 = 1;
	int int_5 = 1;
	char_1 = char_1 * char_1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_2;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_2;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
	}
	if(1)
	{
	}
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_7 = 1;
		int int_4 = 1;
		unsigned_int_7 = unsigned_int_5 + unsigned_int_1;
		char_2 = char_2 * char_1;
		char_1 = char_2;
		char controller4vul_1113[3];
		fgets(controller4vul_1113 ,3 ,stdin);
		if( strcmp( controller4vul_1113, "l9") < 0)
		{
			float float_3 = 1;
			float_1 = float_3 * float_3;
			char controller4vul_1114[3];
			fgets(controller4vul_1114 ,3 ,stdin);
			if( strcmp( controller4vul_1114, "{I") > 0)
			{
				char_1 = v__cb_link_down(char_2,float_4,uni_para);

				unsigned_int_3 = unsigned_int_1 + unsigned_int_7;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_7 + unsigned_int_7;
			}
		}
		if(1)
		{
			int_4 = int_1 * int_1;
			long_2 = long_1 + long_3;
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_2 * short_2;
			short_2 = short_2 * short_1;
		}
		int_1 = int_4 * int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_1;
		int_5 = int_2 + int_5;
		double_2 = double_2 + double_2;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_2;
		if(1)
		{
			double double_3 = 1;
			double_3 = double_1 + double_1;
		}
	}
	return int_5;
}
float v__remove_links( float parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1112[3];
	fgets(controller4vul_1112 ,3 ,stdin);
	if( strcmp( controller4vul_1112, ")F") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_1 = v__update_link(long_1,char_1,long_2,float_1,uni_para);

		double_1 = double_1;
		double_3 = double_2 + double_2;
	}
	int_2 = int_1 * int_2;
	long_2 = long_2 + long_1;
	int_3 = int_2 + int_1;
	float_1 = float_1;
	int_1 = int_3 * int_3;
	short_2 = short_1 * short_1;
	return float_2;
}
int v__sel_set( int parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int_1 = int_1 + int_1;
		char_1 = char_2 + char_2;
		long_3 = long_1 * long_2;
	}
	return int_1;
}
int v_termio_scroll_get( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	char_1 = char_2;
	return int_1;
}
void v_miniview_position_offset( double parameter_1,int parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float_2 = float_1 + float_1;
	double_2 = double_1 * double_2;
	double_1 = double_3 * double_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double double_4 = 1;
		int_1 = int_3;
		double_4 = double_2 + double_3;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
			unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
			double_3 = double_1 + double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			float float_3 = 1;
			float float_4 = 1;
			unsigned_int_6 = unsigned_int_6;
			long_2 = long_1 + long_2;
			float_4 = float_3 + float_4;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_3 = 1;
			int_1 = int_1;
			int_3 = v_termio_scroll_get(short_1);

			long_3 = long_1 + long_2;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 + char_1;
			}
			if(1)
			{
				double_3 = double_1 + double_2;
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
void v_termio_scroll( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	double_3 = double_1 * double_2;
	int_3 = int_1 + int_2;
	char_2 = char_1 + char_1;
	if(1)
	{
		int_4 = int_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	double_4 = double_4;
	char controller4vul_1109[3];
	fgets(controller4vul_1109 ,3 ,stdin);
	if( strcmp( controller4vul_1109, "hB") < 0)
	{
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		int_6 = int_4 + int_5;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		double_4 = double_3 * double_2;
		if(1)
		{
			double double_6 = 1;
			double_6 = double_5 * double_2;
		}
		char controller4vul_1110[2];
		fgets(controller4vul_1110 ,2 ,stdin);
		if( strcmp( controller4vul_1110, "p") < 0)
		{
			long long_1 = 1;
			int_4 = int_1;
			unsigned_int_4 = unsigned_int_4;
			char_1 = char_2 + char_2;
			float_1 = float_1 + float_1;
			long_1 = long_1;
			char controller4vul_1111[2];
			fgets(controller4vul_1111 ,2 ,stdin);
			if( strcmp( controller4vul_1111, "X") > 0)
			{
				float_1 = v__remove_links(float_1,int_5,uni_para);

				double_2 = double_2 * double_5;
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
		}
		if(1)
		{
			int int_7 = 1;
			int_2 = int_3 * int_7;
			int_5 = int_1 + int_3;
			int_2 = int_3 + int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 * float_2;
		}
	}
}
int v_termpty_save_new( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_1 = short_2;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	v_termpty_save_free(unsigned_int_1);

	int_3 = int_2 * int_2;
	return int_4;
}
char v_termpty_save_expand( short parameter_1,float parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	short_1 = short_2;
	double_3 = double_2 + double_3;
	return char_1;
}
int v__termpty_cell_is_empty( double parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
char v_termpty_line_length( float parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = v__termpty_cell_is_empty(double_2);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
	}
	return char_1;
}
unsigned int v_verify_beacon( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_termpty_text_save_top( long parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	char_1 = char_1;
	int_1 = v_termpty_save_new(char_2,int_1);

	long_1 = long_2;
	char_2 = char_1;
	long_1 = long_3 * long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		v_termpty_backlog_unlock();

		char_1 = char_1 * char_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if(remainder_check(controller_4,100,1))
		{
			int_1 = int_1;
			int_1 = int_1 + int_1;
			unsigned_int_2 = unsigned_int_2;
			double_2 = double_1 + double_1;
		}
	}
	char_1 = char_3 + char_4;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	int_2 = int_2 + int_1;
	v_termpty_backlog_lock();

	char_1 = v_termpty_save_expand(short_2,float_1,long_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		char_3 = char_1;
	}
	unsigned_int_3 = v_verify_beacon(float_2,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float_2 = float_1 + float_1;
		unsigned_int_4 = unsigned_int_4;
	}
	short_2 = short_1 + short_1;
	char_4 = v_termpty_line_length(float_3,double_2);

}
void v_termpty_text_scroll( int parameter_1,double parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_2;
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	int_1 = int_1 * int_1;
	char_3 = char_3 * char_2;
	char controller4vul_1107[2];
	fgets(controller4vul_1107 ,2 ,stdin);
	if( strcmp( controller4vul_1107, "N") > 0)
	{
		long_1 = long_1 + long_2;
		char controller4vul_1108[2];
		fgets(controller4vul_1108 ,2 ,stdin);
		if( strcmp( controller4vul_1108, "x") > 0)
		{
			v_termio_scroll(float_2,int_1,int_1,int_1,uni_para);

			long_2 = long_2 * long_2;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		long long_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long_3 = long_1 + long_1;
		double_5 = double_3 + double_4;
		if(1)
		{
			char_3 = char_2;
		}
		float_1 = float_1 + float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_3 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_4 = 1;
			float_4 = float_1 * float_3;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
			long_1 = long_2 * long_4;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_4;
		}
	}
}
void v_termpty_text_scroll_test( short parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float_2 = float_1 * float_1;
	char controller4vul_1105[3];
	fgets(controller4vul_1105 ,3 ,stdin);
	if( strcmp( controller4vul_1105, "au") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char controller4vul_1106[2];
		fgets(controller4vul_1106 ,2 ,stdin);
		if( strcmp( controller4vul_1106, ")") < 0)
		{
			unsigned int unsigned_int_3 = 1;
			v_termpty_text_scroll(int_1,double_1,uni_para);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
			short_1 = short_1;
			short_1 = short_1 * short_1;
		}
	}
	if(1)
	{
		short short_2 = 1;
		double double_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short_1 = short_2 + short_2;
		double_2 = double_1 * double_2;
		short_4 = short_1 + short_3;
	}
}
unsigned int v__cursor_to_start_of_line( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 + char_2;
	return unsigned_int_1;
}
int v__tab_forward( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
char v__handle_cursor_control( unsigned int parameter_1,unsigned int parameter_2,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	char controller4vul_1104[3];
	fgets(controller4vul_1104 ,3 ,stdin);
	if( strcmp( controller4vul_1104, "F7") < 0)
	{
		v_termpty_text_scroll_test(short_1,int_1,uni_para);

		float_3 = float_1 + float_2;
	}
	char_2 = char_1 + char_2;
	int_2 = int_1 * int_1;
	char_1 = char_3 * char_2;
	char_1 = char_1 * char_1;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_3 + float_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3;
	double_3 = double_1 + double_2;
	if(1)
	{
		double double_4 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		float_2 = float_2 * float_3;
		double_4 = double_3;
	}
	long_3 = long_1 * long_2;
	return char_4;
}
int v_termpty_handle_seq( float parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	long_1 = long_2;
	char controller4vul_1101[2];
	fgets(controller4vul_1101 ,2 ,stdin);
	if( strcmp( controller4vul_1101, "f") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float_1 = v__handle_esc(int_1,int_2,float_2,uni_para);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "<") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	return int_2;
}
void v_termpty_handle_buf( float parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	char_1 = char_2;
	float_3 = float_1 + float_2;
	char controller4vul_1100[3];
	fgets(controller4vul_1100 ,3 ,stdin);
	if( strcmp( controller4vul_1100, "&&") > 0)
	{
		char char_3 = 1;
		int_1 = v_termpty_handle_seq(float_3,double_1,int_2,uni_para);

		char_3 = char_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 + int_2;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
}
void v_theme_reload( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	float_3 = float_1 * float_2;
	double_1 = double_1;
	if(1)
	{
	}
}
float v_theme_reload_cb(long parameter_2,long parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 + double_1;
	v_theme_reload(float_1);

	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_3 + int_1;
	float_3 = float_2 * float_1;
	long_1 = long_2;
	if(1)
	{
		double_1 = double_2 + double_2;
	}
	return float_3;
}
void v_theme_auto_reload_enable( double parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = v_theme_reload_cb(long_1,long_1,int_1);

	int_2 = int_2 + int_2;
}
unsigned int v__cursor_shape_to_group_name( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_config_theme_path_default_get( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	int_1 = int_2 * int_2;
	int_2 = int_1 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "R") > 0)
	{
	}
	char_1 = char_2;
}
char v_theme_path_get()
{
	char char_1 = 1;
	return char_1;
}
unsigned int v_config_theme_path_get()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_1;
	char_1 = v_theme_path_get();

	int_5 = int_3 * int_4;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "$,") < 0)
	{
	}
	return unsigned_int_1;
}
double v_theme_apply( double parameter_1,long parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_1;
	float_3 = float_1 * float_2;
	long_2 = long_1 + long_2;
	long_1 = long_2 + long_1;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	v_config_theme_path_default_get(long_1);

	unsigned_int_1 = unsigned_int_1;
	return double_2;
	unsigned_int_1 = v_config_theme_path_get();

}
void v_termio_set_cursor_shape( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int_1 = int_1;
	int_1 = int_1 + int_2;
	char_2 = char_1 * char_2;
	char_3 = char_2 + char_3;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 * float_2;
	unsigned_int_1 = v__cursor_shape_to_group_name(double_2);

	v_theme_auto_reload_enable(double_3);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	long_2 = long_1 * long_1;
	if(1)
	{
		int int_3 = 1;
		double_3 = v_theme_apply(double_4,long_2,int_1);

		int_2 = int_1 + int_3;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "6") > 0)
		{
			double double_5 = 1;
			double double_6 = 1;
			double_5 = double_6;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
		}
	}
}
void v_termpty_clear_tabs_on_screen( short parameter_1)
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
void v_termpty_backlog_size_set( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "E") > 0)
	{
		int int_4 = 1;
		int_1 = int_2 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			int_2 = int_3 + int_1;
		}
		v_termpty_backlog_unlock();

		int_2 = int_2 + int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		v_termpty_backlog_lock();

		char_1 = char_1 * char_2;
	}
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	v_termpty_save_free(unsigned_int_2);

	double_2 = double_1 * double_1;
}
int v__ts_free()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_2;
	return int_1;
}
void v_termpty_save_free( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		int_1 = v__ts_free();

		double_1 = double_1 + double_2;
	}
	double_1 = double_2 + double_3;
	int_1 = int_1 * int_2;
	float_2 = float_1 * float_1;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v_termpty_backlog_lock();

	float_2 = float_1 * float_1;
	int_1 = int_2;
	char_1 = char_1 * char_1;
	double_2 = double_1 + double_2;
	if(1)
	{
		char char_3 = 1;
		double_1 = double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_3 = int_4;
		}
		char_2 = char_3;
		double_2 = double_2;
	}
	v_termpty_save_free(unsigned_int_1);

	float_2 = float_3 + float_2;
	v_termpty_backlog_size_set(short_1,float_3);

	double_2 = double_2 + double_1;
	v_termpty_backlog_unlock();

	long_1 = long_2;
	char_1 = char_2 * char_1;
	double_3 = double_1 * double_2;
}
void v_termpty_reset_att( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_8 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	int_1 = int_1 * int_2;
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_2;
	int_4 = int_2 * int_3;
	long_2 = long_1 * long_2;
	short_1 = short_2 * short_2;
	long_1 = long_2 * long_1;
	int_4 = int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	double_3 = double_1 + double_2;
	double_2 = double_3 + double_3;
	double_1 = double_3;
	short_2 = short_3 * short_2;
	long_1 = long_3 * long_4;
	int_4 = int_2 + int_5;
	int_6 = int_2 + int_5;
	int_7 = int_3 * int_1;
	unsigned_int_5 = unsigned_int_1;
	int_3 = int_3 * int_5;
	int_3 = int_7 + int_8;
}
unsigned int v_termio_config_get()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_1;
}
void v_termpty_reset_state( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	char char_5 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		v_termpty_clear_backlog(char_1);

		v_termio_set_cursor_shape(float_1,int_2);

		int_3 = int_3 * int_1;
	}
	long_2 = long_1 + long_2;
	double_1 = double_1 * double_1;
	short_2 = short_1 + short_2;
	unsigned_int_3 = v_termio_config_get();

	int_2 = int_4 * int_5;
	float_4 = float_2 + float_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	int_3 = int_3 * int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	char_1 = char_2 + char_2;
	long_1 = long_2 * long_3;
	double_2 = double_1 * double_1;
	int_1 = int_3;
	double_4 = double_3 * double_4;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_3 + double_1;
	double_5 = double_5 * double_2;
	int_2 = int_5 * int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_6;
	long_3 = long_2 + long_2;
	float_4 = float_3 * float_1;
	long_4 = long_4 * long_5;
	unsigned_int_1 = unsigned_int_5;
	int_6 = int_4 * int_4;
	char_4 = char_2 + char_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	double_7 = double_4 + double_6;
	long_4 = long_4 + long_6;
	double_4 = double_6 + double_3;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_4;
	v_termpty_reset_att(double_3);

	short_1 = short_3 * short_3;
	double_7 = double_4 + double_2;
	unsigned_int_7 = unsigned_int_2 + unsigned_int_5;
	v_termpty_clear_tabs_on_screen(short_3);

	char_5 = char_4 + char_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_7 + unsigned_int_6;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_2 * short_4;
	}
}
void v_termpty_resize_tabs( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short_2 = short_1 * short_1;
	long_2 = long_1 + long_2;
	long_2 = long_2 + long_2;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			int_2 = int_2 * int_2;
		}
		if(1)
		{
			long long_3 = 1;
			long_1 = long_2 * long_3;
		}
		int_2 = int_2;
	}
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
}
double v__termpty_init( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	long_1 = long_2;
	short_2 = short_1 + short_2;
	double_4 = double_2 + double_4;
	char_3 = char_1 + char_2;
	double_3 = double_3 * double_1;
	v_termpty_resize_tabs(unsigned_int_2,int_1,int_1);

	short_1 = short_2;
	double_2 = double_5 * double_6;
	long_3 = long_2 + long_3;
	int_1 = int_2;
	float_1 = float_1 + float_1;
	v_termpty_reset_state(char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1;
	return double_4;
}
void v__add_default_keys( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_6 = 1;
	int int_7 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_7 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	double_2 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	char_1 = char_1 * char_2;
	int_1 = int_2;
	double_3 = double_4;
	int_2 = int_2 + int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2 * double_4;
	int_4 = int_3 * int_1;
	short_1 = short_1 + short_1;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	float_1 = float_1 + float_1;
	double_1 = double_2 * double_1;
	long_1 = long_1;
	float_1 = float_2 * float_1;
	short_1 = short_1 + short_2;
	float_3 = float_3;
	unsigned_int_5 = unsigned_int_2;
	short_1 = short_3 * short_3;
	short_3 = short_3 * short_4;
	double_1 = double_3 * double_5;
	double_6 = double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_6;
	char_1 = char_3 * char_3;
	char_3 = char_4 + char_1;
	int_6 = int_1 + int_5;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	short_2 = short_2 + short_3;
	char_4 = char_4;
	int_6 = int_5 + int_4;
	char_4 = char_2 + char_3;
	short_3 = short_1;
	double_5 = double_2 + double_1;
	double_3 = double_1 * double_1;
	int_1 = int_5 * int_5;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_4;
	char_5 = char_2 * char_4;
	int_6 = int_6 * int_5;
	double_1 = double_5 + double_2;
	short_4 = short_3 * short_3;
	float_4 = float_4 * float_5;
	char_6 = char_6 + char_5;
	char_6 = char_1 + char_2;
	int_6 = int_2 * int_2;
	int_5 = int_7 + int_5;
	long_1 = long_2 * long_3;
	char_7 = char_7;
	double_4 = double_3 + double_3;
}
void v_colors_standard_get( int parameter_1,int parameter_2,float parameter_3,short parameter_4,float parameter_5,int parameter_6)
{
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		double_1 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		float_1 = float_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_2 = double_2 * double_3;
	}
	double_2 = double_3 + double_1;
	unsigned_int_4 = unsigned_int_5;
	float_2 = float_2 * float_2;
	double_4 = double_3;
}
void v_config_new()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_2;
	if(1)
	{
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_3 = 1;
		long long_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		long long_4 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_6 = 1;
		char char_6 = 1;
		char char_7 = 1;
		int int_7 = 1;
		char char_8 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_8 = 1;
		short short_3 = 1;
		long long_5 = 1;
		v__add_default_keys(int_1);

		int_1 = int_2;
		double_2 = double_1 * double_1;
		char_1 = char_1 + char_2;
		double_5 = double_3 * double_4;
		short_1 = short_1;
		char_1 = char_3 * char_2;
		float_1 = float_1 * float_1;
		long_1 = long_3;
		double_6 = double_1 + double_6;
		double_7 = double_7 * double_6;
		long_1 = long_3 + long_4;
		double_6 = double_1 * double_4;
		char_2 = char_2 * char_4;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		int_1 = int_1 + int_3;
		float_1 = float_1 + float_1;
		double_1 = double_3 * double_5;
		short_2 = short_1 + short_1;
		double_2 = double_7 + double_3;
		double_7 = double_5 * double_5;
		char_1 = char_4 * char_4;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		char_1 = char_5 + char_3;
		int_3 = int_4 * int_1;
		int_4 = int_1;
		double_3 = double_5 * double_1;
		double_6 = double_7 * double_7;
		v_colors_standard_get(int_4,int_3,float_2,short_1,float_1,int_5);

		int_5 = int_4 * int_5;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
		double_6 = double_4 + double_2;
		unsigned_int_5 = unsigned_int_5;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_3;
		int_6 = int_4 + int_6;
		long_2 = long_4;
		char_4 = char_6;
		char_5 = char_7;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_4;
		int_5 = int_7 * int_5;
		unsigned_int_1 = unsigned_int_1;
		long_2 = long_1 * long_4;
		char_6 = char_3 * char_1;
		char_1 = char_8 * char_1;
		float_3 = float_3 + float_4;
		unsigned_int_4 = unsigned_int_6;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		char_1 = char_2 + char_2;
		double_3 = double_8 * double_8;
		short_1 = short_3 + short_2;
		short_3 = short_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_7 = int_7 * int_3;
				int_1 = int_1 + int_6;
				int_1 = int_6 + int_5;
				int_2 = int_4;
				double_3 = double_8 * double_4;
				double_8 = double_7 * double_5;
			}
		}
		long_5 = long_4;
		long_1 = long_1;
	}
}
int main()
{
	int uni_para =495;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_9 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	int int_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	long long_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_8 = 1;
	char_3 = char_1 + char_2;
	double_2 = double_1 * double_1;
	double_3 = double_3 * double_1;
	int_2 = int_1 + int_1;
	char_6 = char_4 * char_5;
	int_1 = int_1;
	char_3 = char_1 + char_7;
	double_1 = double_3 + double_3;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	char_8 = char_6 + char_7;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	if(1)
	{
		float_4 = float_3 * float_2;
	}
	if(1)
	{
		double_2 = double_4 * double_3;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	char_7 = char_1 * char_9;
	long_3 = long_2 * long_3;
	long_4 = long_4;
	char controller4vul_1097[3];
	fgets(controller4vul_1097 ,3 ,stdin);
	if( strcmp( controller4vul_1097, "0e") < 0)
	{
		if(1)
		{
			int_3 = int_3 + int_1;
		}
		if(1)
		{
			short_1 = short_1 * short_2;
		}
		if(1)
		{
			long_1 = long_1 + long_3;
		}
		double_3 = double_5 + double_4;
		if(1)
		{
			float_2 = float_1 * float_2;
		}
		int_2 = int_3 * int_3;
		if(1)
		{
			double_4 = double_4 * double_5;
		}
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		if(1)
		{
			long_5 = long_3 + long_4;
		}
		short_4 = short_3 + short_2;
		if(1)
		{
			double_4 = double_3 * double_3;
		}
		if(1)
		{
			short_4 = short_1;
		}
		double_6 = double_6 + double_6;
		if(1)
		{
			int_1 = int_3;
		}
		short_4 = short_1 + short_1;
		if(1)
		{
			float_1 = float_4 * float_4;
		}
		char controller4vul_1098[2];
		fgets(controller4vul_1098 ,2 ,stdin);
		if( strcmp( controller4vul_1098, "@") < 0)
		{
			float float_5 = 1;
			float_2 = float_2 * float_1;
			char controller4vul_1099[3];
			fgets(controller4vul_1099 ,3 ,stdin);
			if( strcmp( controller4vul_1099, "vj") > 0)
			{
				unsigned int unsigned_int_5 = 1;
				v_termpty_handle_buf(float_1,short_4,int_4,uni_para);

				unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
				if(1)
				{
					char_4 = char_1 + char_8;
				}
				if(1)
				{
					short_2 = short_5;
				}
				if(1)
				{
					float_4 = float_2 * float_2;
				}
				if(1)
				{
					unsigned int unsigned_int_6 = 1;
					unsigned_int_6 = unsigned_int_6 * unsigned_int_5;
				}
				if(1)
				{
					double double_7 = 1;
					double_7 = double_3 * double_6;
				}
				if(1)
				{
					double_5 = double_4 * double_3;
				}
				if(1)
				{
					short_1 = short_3;
				}
				if(1)
				{
					float_2 = float_3 * float_2;
				}
				if(1)
				{
					int_4 = int_5 + int_5;
				}
				if(1)
				{
					float float_6 = 1;
					float_6 = float_5 * float_5;
				}
				if(1)
				{
					int_1 = int_2 + int_1;
				}
				if(1)
				{
					unsigned int unsigned_int_7 = 1;
					unsigned_int_1 = unsigned_int_7;
				}
			}
			if(1)
			{
				float_2 = float_2 + float_5;
			}
		}
	}
	if(1)
	{
		short_5 = short_4 + short_2;
	}
	if(1)
	{
		short_4 = short_3;
	}
	if(1)
	{
		long_4 = long_5 * long_3;
	}
	if(1)
	{
		int_5 = int_3 * int_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
		}
	}
	long_6 = long_5 * long_6;
	int_7 = int_4 * int_6;
	long_3 = long_3 * long_1;
	double_8 = double_4 + double_4;
	if(1)
	{
		short short_6 = 1;
		short_1 = short_3 + short_6;
		double_6 = double_5 * double_4;
	}
	return int_2;
}

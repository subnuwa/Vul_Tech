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

long v__termpty_shutdown( long parameter_1);
void v_termpty_text_scroll_rev_test( char parameter_1,float parameter_2);
short v__handle_esc_dcs( unsigned int parameter_1,double parameter_2,float parameter_3);
double v__handle_op_a( unsigned int parameter_1,float parameter_2,double parameter_3);
unsigned int v__termpty_ext_handle( char parameter_1,char parameter_2,char parameter_3);
char v__handle_esc_terminology( float parameter_1,int parameter_2,int parameter_3);
char v__handle_xterm_777_command( unsigned int parameter_1,char parameter_2,int parameter_3);
short v__smart_calculate_226( unsigned int parameter_1);
int v__smart_size( char parameter_1,int parameter_2,int parameter_3,double parameter_4);
void v_colors_term_init( short parameter_1,char parameter_2,int parameter_3);
void v_termio_config_update( char parameter_1);
double v__font_size_set( short parameter_1,int parameter_2);
void v_termio_font_size_set( char parameter_1,int parameter_2);
float v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3);
double v__eina_unicode_to_hex( long parameter_1);
unsigned int v__xterm_parse_color( float parameter_1,char parameter_2,short parameter_3,float parameter_4,int parameter_5);
double v__xterm_arg_get( short parameter_1);
long v__handle_esc_xterm( short parameter_1,long parameter_2,double parameter_3);
void v_termpty_cells_set_content( double parameter_1,long parameter_2,char parameter_3,int parameter_4);
unsigned int v__handle_esc_csi_decera( long parameter_1,double parameter_2);
void v_termpty_cells_att_fill_preserve_colors( short parameter_1,short parameter_2,short parameter_3,int parameter_4);
double v__clean_up_rect_coordinates( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
double v__handle_esc_csi_decfra( short parameter_1,double parameter_2);
char v__handle_esc_csi_decslrm( short parameter_1,double parameter_2);
long v__handle_esc_csi_decstbm( long parameter_1,unsigned int parameter_2);
long v__handle_esc_csi_decscusr( char parameter_1,int parameter_2);
long v__handle_esc_csi_dsr( char parameter_1,long parameter_2);
unsigned int v__handle_esc_csi_truecolor_cmyk( int parameter_1,long parameter_2);
unsigned int v__handle_esc_csi_truecolor_cmy( short parameter_1,long parameter_2);
unsigned int v__approximate_truecolor_rgb( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
unsigned int v__csi_truecolor_arg_get();
int v__handle_esc_csi_truecolor_rgb( double parameter_1,unsigned int parameter_2);
long v__handle_esc_csi_color_set( int parameter_1,int parameter_2);
void v_termpty_cursor_copy( short parameter_1,long parameter_2);
void v__switch_to_alternative_screen( char parameter_1,int parameter_2);
short v__move_cursor_to_origin();
long v__pty_size( int parameter_1);
unsigned int v__limit_coord( float parameter_1);
int v__check_screen_info( double parameter_1,float parameter_2);
short v__termpty_line_rewrap( unsigned int parameter_1,char parameter_2,int parameter_3,char parameter_4,short parameter_5);
double v__backlog_remove_latest_nolock( unsigned int parameter_1);
void v_termpty_save_extract( double parameter_1);
double v__termpty_line_is_empty( float parameter_1,int parameter_2);
void v_termpty_screen_swap( char parameter_1);
void v_termpty_resize( unsigned int parameter_1,int parameter_2,int parameter_3);
float v_termio_win_get( char parameter_1);
void v__handle_esc_csi_reset_mode( float parameter_1,short parameter_2,int parameter_3);
void v__handle_esc_csi_cursor_pos_set( unsigned int parameter_1,short parameter_2,float parameter_3);
void v_termpty_text_scroll_rev( short parameter_1,int parameter_2);
void v_termpty_clear_line( short parameter_1,char parameter_2,int parameter_3);
void v_termpty_clear_screen( unsigned int parameter_1,unsigned int parameter_2);
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,char parameter_2,long parameter_3,float parameter_4,int parameter_5);
char v__termpty_charset_trans( short parameter_1,int parameter_2);
void v_termio_content_change( long parameter_1,double parameter_2,char parameter_3,int parameter_4);
void v_termpty_text_append( float parameter_1,float parameter_2,int parameter_3);
double v__csi_arg_get( short parameter_1);
char v__handle_esc_csi( double parameter_1,unsigned int parameter_2,short parameter_3);
unsigned int v__safechar( char parameter_1);
double v__handle_esc( float parameter_1,float parameter_2,double parameter_3);
void v_termpty_cell_fill( short parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_cells_fill( long parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4);
void v_termpty_cells_clear( unsigned int parameter_1,short parameter_2,int parameter_3);
char v__tooltip_del(long parameter_2);
short v__tooltip_content(char parameter_2,char parameter_3);
void v_MD5Final( double parameter_1,char parameter_2);
void v_MD5Transform( unsigned int parameter_1,short parameter_2);
void v_byteReverse( short parameter_1,char parameter_2);
void v_MD5Update( long parameter_1,long parameter_2,int parameter_3);
void v_MD5Init( float parameter_1);
void v_gravatar_tooltip( unsigned int parameter_1,double parameter_2,char parameter_3);
double v__cb_link_drag_done(long parameter_2);
int v__cb_link_drag_accept(double parameter_2,long parameter_3);
long v__cb_link_drag_move(unsigned int parameter_2,float parameter_3,float parameter_4,char parameter_5);
float v__cb_link_icon_new(long parameter_2,long parameter_3,float parameter_4);
int v__cb_link_move(char parameter_2,double parameter_3);
long v__cb_link_up_delay();
long v__cb_link_up(long parameter_2,int parameter_3);
void v_term_focus( int parameter_1);
long v__term_is_focused( int parameter_1);
void v_term_unfocus( float parameter_1);
double v__cb_ctxp_del(char parameter_2,long parameter_3);
int v__cb_ctxp_dismissed(short parameter_2);
unsigned int v__cb_ctxp_link_copy(double parameter_2,int uni_para);
long v__screen_visual_bounds( char parameter_1);
char v__draw_cell( double parameter_1,double parameter_2,double parameter_3,char parameter_4);
unsigned int v__draw_line( char parameter_1,double parameter_2,int parameter_3,int parameter_4,char parameter_5);
float v_termpty_backlog_length( char parameter_1);
long v_termio_pty_get( int parameter_1);
unsigned int v_termio_textgrid_get( long parameter_1);
double v_miniview_colors_get( float parameter_1,char parameter_2);
float v__deferred_renderer();
void v__queue_render( unsigned int parameter_1);
void v_miniview_redraw( char parameter_1);
int v__block_obj_del();
int v__termpty_is_dblwidth_slow_get( short parameter_1,int parameter_2);
double v__termpty_is_dblwidth_get( int parameter_1,int parameter_2);
float v_term_preedit_str_get( float parameter_1);
int v_media_get();
char v__smart_media_clicked(float parameter_2);
short v_media_control_get( float parameter_1);
long v__smart_media_stop(char parameter_2);
long v__smart_media_pause(short parameter_2);
char v__smart_media_play(long parameter_2);
long v__smart_media_del(unsigned int parameter_2,long parameter_3);
void v_media_visualize_set( char parameter_1,float parameter_2);
void v_media_mute_set( unsigned int parameter_1,double parameter_2);
void v_media_volume_set( long parameter_1,double parameter_2);
short v__cb_media_vol(float parameter_2,long parameter_3,int parameter_4);
long v__cb_media_pos(long parameter_2,char parameter_3,float parameter_4);
long v__cb_media_pos_drag_stop(unsigned int parameter_2,long parameter_3,long parameter_4);
short v__cb_media_pos_drag_start(short parameter_2,int parameter_3,long parameter_4);
void v_media_stop( long parameter_1);
double v__cb_media_stop(int parameter_2,short parameter_3,float parameter_4);
double v__cb_media_pause(long parameter_2,unsigned int parameter_3,char parameter_4);
void v_media_play_set( int parameter_1,short parameter_2);
double v__cb_media_play(short parameter_2,char parameter_3,long parameter_4);
void v_media_position_set( double parameter_1,double parameter_2);
int v__cb_mov_ref(unsigned int parameter_2);
unsigned int v__cb_mov_progress(short parameter_2);
unsigned int v__cb_mov_restart();
void v__cb_mov_decode_stop(unsigned int parameter_2);
unsigned int v__cb_mov_len_change(long parameter_2);
double v__cb_mov_frame_resize(double parameter_2);
float v__cb_mov_frame_decode(int parameter_2);
long v__type_mov_init( double parameter_1);
int v__cb_edje_preloaded(int parameter_2,unsigned int parameter_3,float parameter_4);
float v__type_edje_init();
float v__type_scale_init( long parameter_1);
int v__cb_img_frame();
unsigned int v__type_img_anim_handle( long parameter_1);
double v__cb_img_preloaded(float parameter_2,long parameter_3);
char v__type_img_init( long parameter_1);
short v__url_compl_cb(int parameter_2,int uni_para);
int v__url_prog_cb(int parameter_2);
short v__type_thumb_calc( char parameter_1,long parameter_2,double parameter_3,short parameter_4,short parameter_5);
float v__type_mov_calc( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4,short parameter_5);
char v__type_edje_calc( short parameter_1,char parameter_2,double parameter_3,int parameter_4,char parameter_5);
double v__type_img_calc( unsigned int parameter_1,long parameter_2,long parameter_3,long parameter_4,short parameter_5);
float v__cb_scale_preloaded(short parameter_2,long parameter_3,int uni_para);
unsigned int v__type_scale_calc( float parameter_1,long parameter_2,char parameter_3,char parameter_4,unsigned int parameter_5,int uni_para);
float v__unsmooth_timeout(int uni_para);
void v__smooth_handler( int parameter_1,int uni_para);
int v__smart_calculate( short parameter_1,int uni_para);
float v__smart_move( short parameter_1,float parameter_2,unsigned int parameter_3);
long v__smart_resize( char parameter_1,double parameter_2,float parameter_3);
void v__smart_del();
long v__smart_add( long parameter_1);
short v__smart_init();
void v_media_add( double parameter_1,int parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5,int uni_para);
short v__block_media_activate( char parameter_1,char parameter_2,int uni_para);
char v__block_edje_message_cb(long parameter_2,double parameter_3,int parameter_4);
void v_termpty_write( char parameter_1,double parameter_2,int parameter_3);
float v__block_edje_signal_cb(unsigned int parameter_2,double parameter_3,float parameter_4);
void v_termpty_block_chid_update( double parameter_1,double parameter_2);
double v__block_edje_cmds( float parameter_1,double parameter_2,double parameter_3,int parameter_4);
int v_homedir_get( char parameter_1,char parameter_2);
double v__block_edje_activate( short parameter_1,float parameter_2);
double v__block_activate( double parameter_1,double parameter_2,int uni_para);
char v_termpty_block_get( long parameter_1,int parameter_2);
int v_termpty_block_id_get( long parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( unsigned int parameter_1,int parameter_2);
char v__smart_apply( unsigned int parameter_1,int uni_para);
void v__smart_cb_change(int uni_para);
long v__smart_update_queue( double parameter_1,int parameter_2,int uni_para);
double v__lost_selection_reset_job();
unsigned int v__lost_selection(unsigned int parameter_2,int uni_para);
char v__take_selection_text( unsigned int parameter_1,float parameter_2,int parameter_3,int uni_para);
unsigned int v__cb_ctxp_link_content_copy(float parameter_2);
void v_ty_sb_free( double parameter_1);
long v_ty_sb_steal_buf( char parameter_1);
int v_codepoint_to_utf8( unsigned int parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim();
int v_ty_sb_add( long parameter_1,int parameter_2,char parameter_3);
unsigned int v__termpty_cellrow_from_beacon_get( short parameter_1,int parameter_2,double parameter_3);
float v_termpty_cellrow_get( short parameter_1,int parameter_2,float parameter_3);
void v_termio_selection_get( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,float parameter_6,long parameter_7);
int v__cb_ctxp_link_open(unsigned int parameter_2);
void v__should_inline( unsigned int parameter_1);
unsigned int v_link_is_email( short parameter_1);
double v_link_is_protocol( float parameter_1);
long v_link_is_url( char parameter_1);
unsigned int v__activate_link( double parameter_1,double parameter_2);
int v__cb_ctxp_link_preview(double parameter_2);
short v__is_fmt( char parameter_1,long parameter_2);
short v_media_src_type_get( float parameter_1);
double v__mouse_in_selection( float parameter_1,int parameter_2,int parameter_3);
unsigned int v__smart_xy_to_cursor( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5);
long v__cb_link_down(long parameter_2,long parameter_3,int uni_para);
long v_main_term_popup_exists();
long v__update_link( long parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4,int uni_para);
short v__remove_links( long parameter_1,unsigned int parameter_2,int uni_para);
int v__sel_set( long parameter_1,long parameter_2);
int v_termio_scroll_get( short parameter_1);
void v_miniview_position_offset( char parameter_1,int parameter_2,long parameter_3);
long v_term_miniview_get( short parameter_1);
void v_termio_scroll( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
char v_termpty_save_new( short parameter_1,int parameter_2);
double v_termpty_save_expand( float parameter_1,short parameter_2,unsigned int parameter_3);
int v__termpty_cell_is_empty();
int v_termpty_line_length( unsigned int parameter_1,unsigned int parameter_2);
int v_verify_beacon( long parameter_1,int parameter_2);
void v_termpty_text_save_top( char parameter_1,short parameter_2,unsigned int parameter_3);
void v_termpty_text_scroll( char parameter_1,short parameter_2,int uni_para);
void v_termpty_text_scroll_test( int parameter_1,int parameter_2,int uni_para);
void v__cursor_to_start_of_line( short parameter_1);
void v__tab_forward( int parameter_1,int parameter_2);
char v__handle_cursor_control( long parameter_1,double parameter_2,int uni_para);
int v_termpty_handle_seq( char parameter_1,float parameter_2,short parameter_3,int uni_para);
void v_termpty_handle_buf( double parameter_1,char parameter_2,int parameter_3,int uni_para);
void v_theme_reload( unsigned int parameter_1);
short v_theme_reload_cb(double parameter_2,char parameter_3,char parameter_4);
void v_theme_auto_reload_enable( short parameter_1);
double v__cursor_shape_to_group_name();
unsigned int v_config_theme_path_default_get( long parameter_1);
float v_theme_path_get();
double v_config_theme_path_get( unsigned int parameter_1);
float v_theme_apply( short parameter_1,char parameter_2,unsigned int parameter_3);
void v_termio_set_cursor_shape( float parameter_1,short parameter_2);
void v_termpty_clear_tabs_on_screen( long parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( float parameter_1,char parameter_2);
float v__ts_free();
void v_termpty_save_free( short parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( long parameter_1);
void v_termpty_reset_att();
long v_termio_config_get( unsigned int parameter_1);
void v_termpty_reset_state( double parameter_1);
void v_termpty_resize_tabs( int parameter_1,int parameter_2,int parameter_3);
void v__termpty_init( float parameter_1);
float v__add_default_keys( double parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,long parameter_5,unsigned int parameter_6);
void v_config_new();
long v__termpty_shutdown( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	short_3 = short_1 * short_2;
	return long_1;
}
void v_termpty_text_scroll_rev_test( char parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int_1 = int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "vC") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		int_3 = int_3 * int_3;
		double_1 = double_1 + double_2;
		v_termpty_text_scroll_rev(short_1,int_4);

		short_2 = short_1 + short_1;
	}
}
short v__handle_esc_dcs( unsigned int parameter_1,double parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
		long long_1 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					char char_1 = 1;
					char_2 = char_1 * char_2;
				}
				if(1)
				{
					long long_2 = 1;
					long_2 = long_1 + long_1;
				}
			}
		}
		if(1)
		{
			double_1 = double_1;
		}
		if(1)
		{
			int int_1 = 1;
			unsigned_int_1 = v__safechar(char_3);

			int_1 = int_1 + int_1;
		}
		if(1)
		{
		}
		if(1)
		{
			short short_1 = 1;
			v_termpty_write(char_2,double_1,int_2);

			short_2 = short_1 + short_2;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_1 = long_3 + long_4;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	return short_2;
}
double v__handle_op_a( unsigned int parameter_1,float parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_3 = double_1 * double_2;
	long_2 = long_1 + long_1;
	return double_2;
}
unsigned int v__termpty_ext_handle( char parameter_1,char parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_1;
	long_2 = long_1 * long_1;
	return unsigned_int_1;
	double_3 = v__handle_op_a(unsigned_int_2,float_1,double_2);

}
char v__handle_esc_terminology( float parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int_1 = int_1 + int_1;
	return char_1;
	long_1 = v_termio_config_get(unsigned_int_1);

	unsigned_int_2 = v__termpty_ext_handle(char_1,char_1,char_2);

}
char v__handle_xterm_777_command( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short_2 = short_4 * short_5;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "y") > 0)
	{
		double_1 = double_1 * double_1;
	}
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	long_3 = long_2 + long_2;
	int_1 = int_1 + int_2;
	long_2 = long_3;
	if(1)
	{
		long_2 = long_3;
	}
	float_1 = float_1 * float_2;
	float_2 = float_3 + float_4;
	double_1 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	return char_1;
}
short v__smart_calculate_226( unsigned int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char_1 = char_1;
	int_2 = int_1 * int_2;
	long_1 = long_1 + long_1;
	int_1 = int_3 + int_2;
	double_2 = double_1 + double_2;
	double_1 = double_1 * double_2;
	double_2 = double_3 + double_2;
	double_4 = double_3 * double_3;
	double_3 = double_1 + double_4;
	return short_1;
}
int v__smart_size( char parameter_1,int parameter_2,int parameter_3,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		double_3 = double_3 * double_3;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	double_4 = double_3 * double_3;
	long_1 = long_1 + long_1;
	v_termpty_resize(unsigned_int_2,int_1,int_1);

	unsigned_int_4 = unsigned_int_1;
	char_1 = v__smart_apply(unsigned_int_4,-1 );

	float_1 = float_1 + float_2;
	float_1 = float_2 + float_1;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_6 * unsigned_int_1;
	}
	double_3 = double_4 * double_2;
	char_3 = char_1 + char_2;
	int_1 = int_2 * int_1;
	float_4 = float_3 * float_4;
	short_1 = v__smart_calculate_226(unsigned_int_4);

	short_2 = short_2;
	int_1 = int_2 + int_1;
	return int_1;
	int_2 = v__sel_set(long_2,long_2);

}
void v_colors_term_init( short parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int_1 = int_1 + int_1;
	long_2 = long_1 * long_2;
	double_3 = double_1 * double_2;
	short_1 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_4 = 1;
		double_3 = double_4;
		if(1)
		{
			double double_6 = 1;
			long_3 = long_3 + long_3;
			double_3 = double_5 + double_3;
			double_4 = double_6;
			float_1 = float_1 + float_2;
		}
		if(1)
		{
			int_3 = int_2 + int_3;
			if(1)
			{
				short_2 = short_2 * short_2;
				unsigned_int_1 = unsigned_int_1;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
				float_3 = float_3 + float_1;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
			}
		}
		int_2 = int_3 * int_1;
		long_1 = long_2 + long_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
				float_3 = float_1 * float_2;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			short_2 = short_2 * short_1;
			if(1)
			{
				char char_1 = 1;
				char_1 = char_1 * char_1;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_2 = double_5 + double_5;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			long long_5 = 1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
			float_1 = float_3 * float_3;
			char_4 = char_2 + char_3;
			long_5 = long_3 * long_2;
		}
		double_2 = double_1;
	}
}
void v_termio_config_update( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_9 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	int_3 = int_1 + int_2;
	int_4 = int_3 * int_4;
	if(1)
	{
		v_termio_set_cursor_shape(float_1,short_2);

		short_2 = short_2 + short_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		v_colors_term_init(short_2,char_1,int_2);

		unsigned_int_2 = unsigned_int_3;
		int_4 = int_2 * int_3;
	}
	if(1)
	{
		int_5 = int_6;
	}
	int_1 = int_7 * int_5;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	long_1 = long_1 * long_1;
	unsigned_int_5 = unsigned_int_1;
	double_3 = double_2 * double_1;
	short_4 = short_3 + short_2;
	short_2 = short_1 + short_4;
	long_2 = long_3;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		int int_8 = 1;
		int_1 = int_6 * int_8;
	}
	float_4 = float_1 * float_3;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
	v_termpty_backlog_size_set(float_3,char_1);

	long_2 = long_4;
	char_3 = char_2 + char_1;
	int_7 = v__smart_size(char_1,int_2,int_4,double_2);

	int_9 = int_5 + int_7;
}
double v__font_size_set( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		char_3 = char_1;
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		float float_3 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		v_termio_config_update(char_2);

		char_4 = char_4 + char_3;
		char_3 = char_4 + char_5;
		float_3 = float_2 * float_2;
		long_1 = long_1;
		double_5 = double_3 * double_4;
		short_2 = short_1 + short_1;
	}
	return double_1;
}
void v_termio_font_size_set( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = v__font_size_set(short_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
float v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_2;
	return float_1;
	v_termio_font_size_set(char_1,int_1);

}
double v__eina_unicode_to_hex( long parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "(") < 0)
	{
	}
	return double_1;
}
unsigned int v__xterm_parse_color( float parameter_1,char parameter_2,short parameter_3,float parameter_4,int parameter_5)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	float float_3 = 1;
	double double_5 = 1;
	long long_3 = 1;
	short_1 = short_1;
	char_3 = char_1 + char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	int_2 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		short short_3 = 1;
		float float_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		char char_7 = 1;
		long_1 = long_1 + long_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		}
		long_1 = long_1 + long_1;
		short_2 = short_2 * short_3;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_3;
		}
		double_2 = double_1 + double_2;
		double_3 = double_3 + double_3;
		if(1)
		{
			short short_4 = 1;
			short_3 = short_4 + short_4;
		}
		float_2 = float_1 + float_2;
		double_4 = double_3 * double_3;
		if(1)
		{
			double_3 = double_3 + double_1;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		double_3 = double_3 + double_2;
		if(1)
		{
			float_3 = float_1 + float_1;
		}
		char_3 = char_2;
		char_5 = char_2 * char_4;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
		}
		char_5 = char_6 + char_7;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		char char_8 = 1;
		short_2 = short_2 + short_2;
		if(1)
		{
			short short_5 = 1;
			short_5 = short_1 * short_2;
		}
		double_1 = double_3 * double_4;
		double_2 = double_5;
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_6;
		}
		long_2 = long_3 * long_3;
		unsigned_int_1 = unsigned_int_6;
		if(1)
		{
			long_3 = long_2 * long_1;
		}
		char_8 = char_2 + char_3;
	}
	if(1)
	{
		double_4 = double_5 + double_3;
	}
	float_3 = float_1 * float_1;
	return unsigned_int_2;
	double_3 = v__eina_unicode_to_hex(long_3);

}
double v__xterm_arg_get( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	float_1 = float_2;
	double_2 = double_1 + double_1;
	char_2 = char_1 * char_1;
	double_4 = double_3 * double_2;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1;
	float_3 = float_3 + float_2;
	int_2 = int_2 + int_2;
	int_3 = int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_4;
	int_4 = int_3 * int_4;
	char_2 = char_2 + char_1;
	char_1 = char_1;
	double_2 = double_3;
	int_1 = int_3;
	float_5 = float_1 + float_4;
	short_2 = short_1 * short_1;
	double_1 = double_4 + double_3;
	char_1 = char_1 + char_3;
	double_2 = double_1 * double_1;
	return double_3;
}
long v__handle_esc_xterm( short parameter_1,long parameter_2,double parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	char char_5 = 1;
	long long_5 = 1;
	float float_4 = 1;
	double_1 = double_1;
	int_1 = int_1 * int_2;
	v_termpty_write(char_1,double_2,int_3);

	char_2 = v__handle_xterm_777_command(unsigned_int_1,char_1,int_4);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1;
	char_2 = char_3 * char_2;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2 + double_1;
	long_1 = v_termio_config_get(unsigned_int_3);

	short_2 = short_3 + short_2;
	if(1)
	{
		unsigned_int_4 = v_termio_textgrid_get(long_1);

		char_2 = char_2;
	}
	float_1 = float_2 * float_2;
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	short_1 = short_2 * short_3;
	double_2 = double_1 * double_2;
	unsigned_int_5 = v__xterm_parse_color(float_2,char_2,short_4,float_3,int_1);

	double_1 = double_3 + double_2;
	double_3 = v__xterm_arg_get(short_1);

	long_4 = long_2 * long_3;
	short_1 = short_4 + short_5;
	if(1)
	{
		double double_4 = 1;
		double_1 = double_4 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		int_1 = int_4 + int_2;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
		long_4 = long_3 * long_4;
	}
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		char char_4 = 1;
		char_4 = char_4;
	}
	int_3 = int_5 * int_3;
	long_2 = long_3 * long_1;
	if(1)
	{
		int_2 = int_5 * int_1;
	}
	if(1)
	{
		float_2 = float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		long long_6 = 1;
		float_1 = v__handle_xterm_50_command(float_2,char_5,int_2);

		unsigned_int_5 = unsigned_int_7 * unsigned_int_8;
		long_6 = long_3 * long_5;
	}
	if(1)
	{
		int int_6 = 1;
		int_3 = int_6;
	}
	if(1)
	{
		short_3 = short_1 * short_3;
	}
	int_1 = int_2 * int_5;
	float_1 = float_4 + float_4;
	return long_5;
}
void v_termpty_cells_set_content( double parameter_1,long parameter_2,char parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_2;
		double_2 = double_1 + double_2;
	}
}
unsigned int v__handle_esc_csi_decera( long parameter_1,double parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_1;
	long_1 = long_1;
	short_2 = short_1 + short_2;
	double_1 = double_1 * double_2;
	v_termpty_cells_set_content(double_2,long_1,char_1,int_2);

	double_1 = double_2 * double_2;
	if(1)
	{
	}
	double_3 = v__csi_arg_get(short_2);

	double_2 = v__clean_up_rect_coordinates(unsigned_int_1,int_1,int_1,int_2,int_3);

	int_4 = int_1 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_2 * long_2;
		long_3 = long_2 + long_3;
	}
	return unsigned_int_1;
}
void v_termpty_cells_att_fill_preserve_colors( short parameter_1,short parameter_2,short parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char_1 = char_2;
		double_3 = double_2 + double_1;
		double_4 = double_1 + double_3;
		if(1)
		{
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			int_1 = int_1 * int_1;
			double_4 = double_4 + double_3;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			char_2 = char_2;
			float_1 = float_1;
			double_2 = double_4 * double_4;
		}
	}
}
double v__clean_up_rect_coordinates( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	double_3 = double_1 * double_2;
	double_2 = double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	short_1 = short_1 + short_1;
	short_2 = short_1 * short_2;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_1 * float_3;
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_2 + short_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_1 * char_2;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		char char_4 = 1;
		char_1 = char_4;
	}
	if(1)
	{
		float float_5 = 1;
		float_1 = float_3 + float_5;
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			short_5 = short_4 * short_4;
		}
	}
	int_1 = int_1;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	char controller_11[3];
	fgets(controller_11 ,3 ,stdin);
	if( strcmp( controller_11, "eM") < 0)
	{
	}
	double_3 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_5 = char_2 * char_1;
	unsigned_int_3 = unsigned_int_2;
	return double_3;
}
double v__handle_esc_csi_decfra( short parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short_1 = short_1 * short_2;
	double_1 = double_1;
	long_2 = long_1 + long_1;
	double_1 = double_2 * double_3;
	int_3 = int_1 * int_2;
	double_1 = v__clean_up_rect_coordinates(unsigned_int_1,int_2,int_3,int_1,int_4);

	v_termpty_cells_att_fill_preserve_colors(short_2,short_3,short_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = v__csi_arg_get(short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	int_6 = int_5 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	return double_3;
}
char v__handle_esc_csi_decslrm( short parameter_1,double parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short_1 = v__move_cursor_to_origin();

	long_1 = long_1 * long_1;
	double_2 = double_1 * double_2;
	double_3 = double_2 + double_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		double_3 = double_1 * double_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_2 = double_2 + double_3;
	}
	if(1)
	{
		short short_2 = 1;
		short_3 = short_2 * short_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	short_3 = short_1 * short_1;
	double_4 = double_1;
	double_1 = double_5 * double_5;
	long_3 = long_2 * long_1;
	double_4 = v__csi_arg_get(short_3);

	char_2 = char_1 + char_1;
	return char_3;
}
long v__handle_esc_csi_decstbm( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short_1 = v__move_cursor_to_origin();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	short_1 = short_2 + short_1;
	double_1 = v__csi_arg_get(short_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 * double_2;
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		char char_3 = 1;
		char_2 = char_3;
	}
	short_2 = short_1 + short_2;
	double_5 = double_4 * double_2;
	float_3 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_3;
	int_1 = int_2 + int_2;
	return long_1;
}
long v__handle_esc_csi_decscusr( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_1;
	short_1 = short_1 * short_1;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_1;
	float_1 = float_1 * float_2;
	int_2 = int_1 + int_2;
	v_termio_set_cursor_shape(float_1,short_1);

	int_2 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_1;
	int_2 = int_1;
	float_4 = float_1 * float_3;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_1 = float_3 + float_3;
	int_2 = int_2 * int_2;
	return long_2;
	double_2 = v__csi_arg_get(short_1);

}
long v__handle_esc_csi_dsr( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_6 = 1;
	double_1 = v__csi_arg_get(short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		long long_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double_4 = double_2 + double_3;
		char_2 = char_1 + char_2;
		long_3 = long_1 + long_2;
		int_1 = int_2;
		int_4 = int_3 * int_3;
		double_1 = double_2 + double_1;
		double_2 = double_5 * double_5;
	}
	if(1)
	{
		int int_5 = 1;
		double double_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		int_5 = int_1 + int_1;
		int_6 = int_1 + int_5;
		long_2 = long_1 * long_2;
		double_5 = double_6 + double_2;
		int_8 = int_7 * int_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	return long_1;
	v_termpty_write(char_2,double_5,int_6);

}
unsigned int v__handle_esc_csi_truecolor_cmyk( int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = v__csi_truecolor_arg_get();

	long_2 = long_1 + long_1;
	char_2 = char_1 + char_1;
	double_1 = double_1;
	long_3 = long_3;
	if(1)
	{
	}
	float_1 = float_2;
	long_1 = long_4 * long_4;
	unsigned_int_1 = v__approximate_truecolor_rgb(int_3,int_1,int_2,int_4);

	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	double_2 = double_2 + double_1;
	return unsigned_int_1;
}
unsigned int v__handle_esc_csi_truecolor_cmy( short parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = v__csi_truecolor_arg_get();

	int_2 = int_1 + int_2;
	float_1 = float_1;
	unsigned_int_1 = v__approximate_truecolor_rgb(int_3,int_2,int_4,int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_1 + char_2;
	short_4 = short_3 + short_1;
	return unsigned_int_2;
}
unsigned int v__approximate_truecolor_rgb( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = v_termio_textgrid_get(long_1);

	short_2 = short_1 * short_2;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 * char_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 * double_2;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				int_2 = int_1 + int_1;
			}
		}
	}
	return unsigned_int_1;
}
unsigned int v__csi_truecolor_arg_get()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
int v__handle_esc_csi_truecolor_rgb( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 * int_2;
	long_2 = long_1 + long_1;
	unsigned_int_1 = v__approximate_truecolor_rgb(int_2,int_1,int_3,int_1);

	float_2 = float_1 + float_1;
	long_1 = long_1 * long_1;
	char_3 = char_1 + char_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_3 = 1;
		short_1 = short_1 * short_2;
		float_3 = float_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
	}
	return int_1;
	unsigned_int_2 = v__csi_truecolor_arg_get();

}
long v__handle_esc_csi_color_set( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = v__handle_esc_csi_truecolor_cmy(short_1,long_1);

	unsigned_int_2 = unsigned_int_3;
	v_termpty_reset_att();

	unsigned_int_4 = v__handle_esc_csi_truecolor_cmyk(int_1,long_2);

	char_1 = char_1 + char_2;
	return long_2;
	double_1 = v__csi_arg_get(short_2);

	int_2 = v__handle_esc_csi_truecolor_rgb(double_2,unsigned_int_5);

}
void v_termpty_cursor_copy( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_1 = char_1 * char_1;
		long_3 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_2 = double_1 * double_1;
	}
}
void v__switch_to_alternative_screen( char parameter_1,int parameter_2)
{
	char char_2 = 1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	v_termpty_screen_swap(char_2);

}
short v__move_cursor_to_origin()
{
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		double_1 = double_1 * double_2;
		double_2 = double_3 * double_4;
	}
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		short_1 = short_1 * short_1;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	}
	return short_2;
}
long v__pty_size( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	double_3 = double_1 + double_2;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		double_3 = double_1 + double_1;
	}
	return long_1;
}
unsigned int v__limit_coord( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	double_3 = double_1 * double_2;
	short_2 = short_1 + short_1;
	double_2 = double_3 * double_4;
	long_3 = long_1 + long_2;
	double_2 = double_3 + double_3;
	int_2 = int_1 * int_1;
	return unsigned_int_5;
}
int v__check_screen_info( double parameter_1,float parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		v_termpty_text_save_top(char_1,short_1,unsigned_int_1);

		short_4 = short_2 + short_3;
		double_1 = double_1;
		v_termpty_cells_clear(unsigned_int_1,short_5,int_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		short_2 = short_1 * short_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 + long_2;
		}
		float_1 = float_1 + float_1;
	}
	return int_2;
}
short v__termpty_line_rewrap( unsigned int parameter_1,char parameter_2,int parameter_3,char parameter_4,short parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int_1 = v__check_screen_info(double_1,float_1);

	char_3 = char_1 * char_2;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
double v__backlog_remove_latest_nolock( unsigned int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	v_termpty_save_free(short_1);

	float_3 = float_1 + float_2;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long long_4 = 1;
		int_1 = v_verify_beacon(long_3,int_1);

		long_1 = long_4 * long_1;
	}
	int_1 = int_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	return double_1;
}
void v_termpty_save_extract( double parameter_1)
{
	if(1)
	{
	}
	if(1)
	{
		if(1)
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
			double double_3 = 1;
			int_3 = int_1 + int_2;
			char_3 = char_1 * char_2;
			int_2 = int_3 * int_1;
			double_2 = double_1 + double_1;
			int_4 = int_2 * int_1;
			if(1)
			{
			}
			int_1 = int_4 + int_3;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			double_1 = double_3 + double_3;
			if(1)
			{
				long long_1 = 1;
				long_1 = long_1 + long_1;
			}
		}
	}
}
double v__termpty_line_is_empty( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		int_1 = v__termpty_cell_is_empty();

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "7z") > 0)
		{
		}
	}
	return double_1;
}
void v_termpty_screen_swap( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long_2 = long_1 + long_1;
	long_3 = long_4;
	int_3 = int_1 + int_2;
	long_5 = long_3 * long_4;
	char_1 = char_2;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_4;
	short_1 = short_1 * short_1;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 + char_1;
	}
}
void v_termpty_resize( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_6 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_6 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_termpty_line_length(unsigned_int_1,unsigned_int_2);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	int_2 = int_1 * int_1;
	v_termpty_backlog_unlock();

	int_2 = int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		short_1 = short_1 * short_1;
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		double_3 = double_1 * double_3;
	}
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_6;
	long_3 = long_1 + long_2;
	v_termpty_resize_tabs(int_2,int_3,int_2);

	double_1 = double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		if(1)
		{
			double_4 = double_5 * double_4;
			char_2 = char_2 + char_3;
		}
	}
	long_1 = long_1 + long_4;
	if(1)
	{
		int_4 = int_3 * int_2;
	}
	short_4 = short_1 * short_3;
	if(1)
	{
		int_5 = int_3 * int_4;
		long_1 = long_3 + long_2;
		double_5 = double_3;
		if(1)
		{
			double double_6 = 1;
			short_4 = short_2 + short_4;
			double_1 = double_1 + double_5;
			double_8 = double_6 * double_7;
			short_4 = short_5 * short_2;
			if(1)
			{
				short_6 = short_1 + short_3;
			}
			unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
			double_1 = double_7;
			double_4 = double_4 + double_2;
			long_5 = long_1 * long_3;
			v_termpty_screen_swap(char_1);

			unsigned_int_4 = unsigned_int_7 + unsigned_int_3;
			v_termpty_save_extract(double_4);

			int_2 = int_5 + int_5;
			double_8 = v__termpty_line_is_empty(float_1,int_3);

			double_8 = double_4 * double_4;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_5 = v_verify_beacon(long_5,int_4);

		float_2 = float_1 + float_2;
		short_3 = short_2 * short_5;
		char_3 = char_3 + char_2;
		unsigned_int_3 = unsigned_int_3;
	}
	short_4 = v__termpty_line_rewrap(unsigned_int_1,char_1,int_3,char_2,short_5);

	double_3 = double_7 * double_1;
	float_1 = float_2 * float_3;
	long_1 = v__pty_size(int_4);

	int_4 = int_5 + int_5;
	long_6 = long_4 + long_5;
	double_9 = double_3 * double_3;
	unsigned_int_3 = v__limit_coord(float_1);

	short_1 = short_6 + short_3;
	char_2 = char_2 + char_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_7;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4;
	}
	short_4 = short_2 + short_1;
	short_1 = short_5 + short_3;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_8;
	double_7 = v__backlog_remove_latest_nolock(unsigned_int_6);

	unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_5;
	char_2 = char_2 * char_3;
	int_6 = int_2 * int_1;
	v_termpty_backlog_lock();

	double_7 = double_2 * double_5;
}
float v_termio_win_get( char parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_1;
	int_2 = int_1 * int_2;
	return float_1;
}
void v__handle_esc_csi_reset_mode( float parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	double_1 = v__csi_arg_get(short_1);

	short_2 = v__move_cursor_to_origin();

	long_2 = long_1 + long_1;
	float_1 = v_termio_win_get(char_1);

	v_termpty_resize(unsigned_int_1,int_1,int_2);

	unsigned_int_2 = unsigned_int_2;
	v_termpty_cursor_copy(short_3,long_2);

	int_4 = int_3 + int_1;
	v_termpty_reset_state(double_1);

	v_termpty_clear_screen(unsigned_int_1,unsigned_int_2);

	v__switch_to_alternative_screen(char_2,int_2);

}
void v__handle_esc_csi_cursor_pos_set( unsigned int parameter_1,short parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double_2 = double_1 * double_1;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_2;
	double_1 = v__csi_arg_get(short_3);

	double_2 = double_3 * double_1;
	int_3 = int_2 + int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		double double_4 = 1;
		double_5 = double_4 + double_2;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 * char_2;
		}
	}
	if(1)
	{
		short short_4 = 1;
		short_1 = short_4 + short_4;
	}
	short_1 = short_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		double_2 = double_5 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			double_1 = double_5 + double_1;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_4 * int_3;
	}
	short_2 = short_1 * short_1;
}
void v_termpty_text_scroll_rev( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	v_termio_scroll(short_1,int_1,int_2,int_3,-1 );

	v_termpty_cells_clear(unsigned_int_1,short_2,int_3);

	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 + short_1;
		double_1 = double_1 * double_1;
	}
	double_1 = double_2;
	double_4 = double_3 * double_1;
	if(1)
	{
		double double_5 = 1;
		double_2 = double_5 + double_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
		}
		int_2 = int_1;
		if(1)
		{
			double_4 = double_5;
		}
	}
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short_5 = short_4 + short_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_6 = 1;
			int int_4 = 1;
			double_6 = double_4 + double_4;
			int_2 = int_1 * int_1;
			int_2 = int_4;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
	}
}
void v_termpty_clear_line( short parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	char char_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_termio_content_change(long_1,double_1,char_1,int_1);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	float_1 = float_1 * float_2;
	long_1 = long_2;
	double_3 = double_4;
	v_termpty_cells_clear(unsigned_int_2,short_1,int_2);

	unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	float_4 = float_3 * float_1;
	double_4 = double_5;
	double_4 = double_6 + double_6;
	long_3 = long_1;
	double_4 = double_5 * double_2;
	if(1)
	{
		unsigned_int_6 = unsigned_int_1;
	}
	char_1 = char_2 * char_2;
	long_5 = long_4 * long_4;
}
void v_termpty_clear_screen( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	if(1)
	{
		float float_1 = 1;
		v_termpty_clear_line(short_1,char_1,int_1);

		float_1 = float_1;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_2;
	}
	long_1 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_2 * double_2;
	v_termio_content_change(long_1,double_4,char_1,int_2);

	v_termpty_cells_clear(unsigned_int_2,short_2,int_2);

	float_2 = float_2 + float_3;
}
void v_termpty_cell_codepoint_att_fill( unsigned int parameter_1,char parameter_2,long parameter_3,float parameter_4,int parameter_5)
{
	char char_1 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_1;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short_2 = short_1 * short_2;
		long_3 = long_1 + long_2;
	}
}
char v__termpty_charset_trans( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			int_4 = int_1 * int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			int int_5 = 1;
			int_5 = int_1 * int_4;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
	}
	return char_2;
}
void v_termio_content_change( long parameter_1,double parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_3 = 1;
	short short_4 = 1;
	double_2 = double_1 + double_2;
	long_1 = long_1 * long_1;
	short_1 = short_2;
	double_3 = double_3 * double_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		float_1 = float_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		int_2 = int_1 + int_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_4 = 1;
			double_2 = double_2 * double_3;
			if(1)
			{
				char char_2 = 1;
				long_2 = long_3 * long_2;
				char_2 = char_1 * char_1;
			}
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			long_4 = long_1;
		}
	}
	if(1)
	{
	}
	char_1 = char_3 + char_4;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_3;
	int_2 = v__sel_set(long_5,long_6);

	float_2 = float_2 + float_2;
	if(1)
	{
		long long_7 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
		long_3 = long_7 + long_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 + short_2;
		int_3 = int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_3 = 1;
			unsigned_int_5 = unsigned_int_6 + unsigned_int_6;
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned_int_4 = unsigned_int_7;
				double_1 = double_2 * double_1;
			}
			float_2 = float_3 * float_2;
			int_2 = int_3;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		short_4 = v__remove_links(long_3,unsigned_int_2,-1 );

		int_3 = int_2 + int_4;
		short_1 = short_2 + short_4;
		short_1 = short_1;
		long_1 = long_6;
		int_1 = int_3 + int_5;
		if(1)
		{
			float float_4 = 1;
			float float_5 = 1;
			float_5 = float_4 + float_1;
		}
	}
}
void v_termpty_text_append( float parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	double double_6 = 1;
	double_1 = double_1 + double_1;
	double_1 = v__termpty_is_dblwidth_get(int_1,int_2);

	long_3 = long_1 + long_2;
	int_1 = int_2 * int_3;
	int_2 = int_2 + int_1;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_termpty_cell_codepoint_att_fill(unsigned_int_4,char_1,long_1,float_1,int_1);

	unsigned_int_4 = unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		int_1 = int_2 + int_3;
		if(1)
		{
			double double_2 = 1;
			char_2 = char_1 + char_1;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
			float_3 = float_3 * float_2;
			double_1 = double_2 + double_1;
			unsigned_int_4 = unsigned_int_4;
			double_1 = double_3;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
			}
		}
		double_3 = double_3 + double_3;
		if(1)
		{
			int_3 = int_4 * int_3;
		}
		if(1)
		{
			double double_4 = 1;
			if(1)
			{
				int_3 = int_1 * int_3;
			}
			double_3 = double_4 * double_3;
		}
		float_3 = float_2;
		if(1)
		{
			char_1 = v__termpty_charset_trans(short_1,int_5);

			int_5 = int_1 + int_1;
			unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
		}
		float_2 = float_1 * float_3;
		if(1)
		{
			int int_6 = 1;
			unsigned_int_6 = unsigned_int_7 * unsigned_int_1;
			int_6 = int_1 * int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
			unsigned_int_4 = unsigned_int_8 + unsigned_int_7;
			if(1)
			{
				char char_3 = 1;
				char char_4 = 1;
				char_4 = char_3 + char_4;
			}
			if(1)
			{
				float_1 = float_1 * float_1;
			}
			if(1)
			{
				double double_5 = 1;
				float float_4 = 1;
				float float_5 = 1;
				double_5 = double_5 + double_1;
				float_5 = float_3 + float_4;
			}
		}
		if(1)
		{
			unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
			long_1 = long_1 + long_2;
			if(1)
			{
				int_4 = int_3;
			}
			char_1 = char_1;
			if(1)
			{
				short short_2 = 1;
				short short_3 = 1;
				long_2 = long_3 * long_3;
				v_termio_content_change(long_1,double_6,char_2,int_1);

				short_1 = short_2 + short_3;
			}
			int_2 = int_4 + int_5;
		}
	}
	v_termpty_text_scroll_test(int_1,int_1,-1 );

}
double v__csi_arg_get( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	float_2 = float_2 + float_2;
	if(1)
	{
		float_2 = float_2 + float_1;
	}
	return double_1;
}
char v__handle_esc_csi( double parameter_1,unsigned int parameter_2,short parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char_1 = v__handle_cursor_control(long_1,double_1,-1 );

	double_2 = v__csi_arg_get(short_1);

	v__tab_forward(int_1,int_1);

	v_termpty_clear_backlog(long_1);

	v_termpty_clear_line(short_1,char_2,int_2);

	v_termpty_text_scroll(char_2,short_2,-1 );

	v_termpty_text_scroll_rev(short_3,int_3);

	v_termpty_write(char_3,double_1,int_4);

	v__handle_esc_csi_cursor_pos_set(unsigned_int_1,short_3,float_1);

	v__handle_esc_csi_reset_mode(float_2,short_2,int_4);

	v_termpty_reset_state(double_3);

	unsigned_int_1 = unsigned_int_1;
	v_termpty_clear_tabs_on_screen(long_1);

	long_1 = v__handle_esc_csi_color_set(int_1,int_1);

	double_3 = v__handle_esc_csi_decfra(short_2,double_1);

	long_2 = long_1 + long_1;
	return char_2;
	unsigned_int_1 = v__safechar(char_3);

	v_termpty_text_append(float_1,float_3,int_1);

	v_termpty_clear_screen(unsigned_int_2,unsigned_int_3);

	long_1 = v__handle_esc_csi_dsr(char_2,long_3);

	long_4 = v__handle_esc_csi_decscusr(char_2,int_4);

	long_1 = v__handle_esc_csi_decstbm(long_2,unsigned_int_1);

	char_2 = v__handle_esc_csi_decslrm(short_4,double_1);

	v_termpty_cursor_copy(short_5,long_1);

	unsigned_int_1 = v__handle_esc_csi_decera(long_2,double_2);

}
unsigned int v__safechar( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_1;
}
double v__handle_esc( float parameter_1,float parameter_2,double parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	int int_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	float float_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_7 = 1;
	int int_7 = 1;
	char char_5 = 1;
	double double_8 = 1;
	int int_9 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	unsigned_int_1 = v__safechar(char_2);

	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	long_1 = v__handle_esc_xterm(short_1,long_3,double_1);

	double_1 = double_2 + double_1;
	char_3 = char_3 + char_3;
	int_3 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1;
	double_3 = double_2 + double_2;
	v_termpty_text_scroll_rev_test(char_1,float_2);

	v_termpty_cursor_copy(short_1,long_2);

	double_1 = double_3 + double_1;
	double_4 = double_4;
	long_2 = long_4 + long_5;
	double_1 = double_2 * double_3;
	long_3 = long_1 * long_3;
	int_4 = int_1 * int_3;
	double_3 = double_1;
	unsigned_int_4 = unsigned_int_2;
	int_3 = int_1 + int_1;
	char_3 = char_1 + char_4;
	char_1 = char_4 * char_4;
	short_1 = short_2;
	double_1 = double_5 * double_5;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	if(1)
	{
		short_3 = short_2 * short_1;
	}
	if(1)
	{
	}
	v_termpty_clear_screen(unsigned_int_1,unsigned_int_1);

	int_5 = int_1 + int_3;
	short_2 = short_1 * short_3;
	char_4 = v__handle_esc_csi(double_6,unsigned_int_3,short_3);

	short_3 = v__handle_esc_dcs(unsigned_int_2,double_6,float_1);

	int_6 = int_4 + int_5;
	if(1)
	{
	}
	v_termpty_text_scroll_test(int_2,int_2,-1 );

	char_4 = char_2 + char_3;
	float_3 = float_2 * float_3;
	if(1)
	{
	}
	short_4 = short_2 + short_2;
	float_1 = float_1 * float_4;
	if(1)
	{
	}
	v_termpty_reset_state(double_4);

	unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	short_1 = short_5 * short_4;
	if(1)
	{
	}
	double_1 = double_6;
	int_5 = int_6;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		short_2 = short_2 + short_5;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		short_6 = short_3 * short_2;
		unsigned_int_1 = unsigned_int_1;
		double_7 = double_1 * double_4;
		if(1)
		{
			float float_5 = 1;
			char_1 = v__handle_esc_terminology(float_1,int_7,int_6);

			float_5 = float_2 * float_1;
		}
		unsigned_int_3 = unsigned_int_6;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			float float_6 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_8 = 1;
			float_1 = float_6 + float_6;
			unsigned_int_1 = unsigned_int_5 * unsigned_int_7;
			int_8 = int_7 + int_5;
		}
	}
	if(1)
	{
	}
	double_5 = double_6 * double_7;
	char_5 = char_2;
	short_2 = short_2 + short_6;
	v_termpty_cell_codepoint_att_fill(unsigned_int_5,char_1,long_5,float_4,int_4);

	double_7 = double_8 * double_7;
	int_4 = int_9 * int_5;
	return double_8;
}
void v_termpty_cell_fill( short parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			double_1 = double_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int_2 = int_1 + int_1;
			unsigned_int_2 = unsigned_int_3;
		}
	}
}
void v_termpty_cells_fill( long parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v_termpty_cell_fill(short_1,long_1,unsigned_int_1,int_1);

	char_1 = char_1 * char_1;
	short_2 = short_2;
	float_1 = float_1 + float_1;
	double_1 = double_1 * double_1;
	double_2 = double_1 * double_2;
}
void v_termpty_cells_clear( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_termpty_cells_fill(long_1,unsigned_int_1,float_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
char v__tooltip_del(long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short_2 = short_1 * short_2;
	float_2 = float_1 * float_1;
	double_3 = double_1 * double_2;
	return char_1;
}
short v__tooltip_content(char parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int_1 = int_2;
	v_media_add(double_1,int_1,int_1,int_2,unsigned_int_1,-1 );

	short_1 = short_1 + short_1;
	char_1 = char_1 * char_2;
	int_1 = int_1 * int_3;
	return short_2;
}
void v_MD5Final( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int_1 = int_1 * int_2;
	float_2 = float_1 + float_1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	float_5 = float_3 * float_4;
	if(1)
	{
		long long_1 = 1;
		double double_1 = 1;
		long_1 = long_1;
		v_MD5Transform(unsigned_int_1,short_1);

		double_3 = double_1 + double_2;
		double_2 = double_1 + double_3;
		v_byteReverse(short_1,char_2);

		short_1 = short_1 + short_1;
	}
	if(1)
	{
		double_4 = double_3 + double_2;
	}
	float_1 = float_2 * float_1;
	int_1 = int_2 + int_3;
	short_2 = short_2;
	int_3 = int_2 + int_1;
	short_3 = short_2 * short_1;
	int_4 = int_3 * int_1;
	double_3 = double_4 + double_5;
}
void v_MD5Transform( unsigned int parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_6 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	short short_7 = 1;
	long long_3 = 1;
	short short_8 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_9 = 1;
	double double_9 = 1;
	char_3 = char_1 * char_2;
	float_1 = float_2;
	int_1 = int_1 + int_1;
	int_2 = int_3;
	unsigned_int_1 = unsigned_int_2;
	int_4 = int_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3;
	double_1 = double_2;
	char_5 = char_1 * char_4;
	int_5 = int_1 * int_5;
	double_3 = double_3;
	long_1 = long_1;
	short_2 = short_1 + short_2;
	short_3 = short_1 * short_3;
	int_5 = int_6 * int_2;
	int_2 = int_5;
	long_2 = long_2 + long_2;
	float_4 = float_3 * float_3;
	float_3 = float_1;
	double_3 = double_3 + double_4;
	float_5 = float_4 + float_3;
	float_4 = float_4 * float_5;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	short_4 = short_3 * short_2;
	long_1 = long_2 * long_2;
	short_6 = short_5 * short_1;
	double_1 = double_3 * double_4;
	double_4 = double_3 + double_1;
	int_1 = int_3 + int_5;
	char_1 = char_5 + char_4;
	char_3 = char_2;
	int_1 = int_6 + int_2;
	double_5 = double_4;
	double_5 = double_1;
	short_2 = short_4 * short_4;
	int_7 = int_2;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
	float_4 = float_4 * float_5;
	double_2 = double_2 + double_4;
	int_1 = int_2 + int_3;
	double_6 = double_4;
	float_4 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	short_5 = short_2 + short_3;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
	short_7 = short_5 + short_1;
	double_1 = double_3;
	short_7 = short_3;
	char_4 = char_4;
	long_3 = long_2 * long_3;
	short_8 = short_4 + short_6;
	int_3 = int_3 + int_7;
	unsigned_int_3 = unsigned_int_2;
	int_7 = int_6 * int_5;
	double_5 = double_4;
	long_3 = long_3 + long_4;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
	short_8 = short_1 * short_4;
	long_5 = long_2 + long_3;
	short_7 = short_8 * short_7;
	unsigned_int_4 = unsigned_int_4;
	int_4 = int_4;
	int_1 = int_3 * int_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	double_7 = double_7 + double_8;
	int_3 = int_4;
	short_6 = short_9 + short_6;
	double_9 = double_2 * double_3;
	double_3 = double_4 * double_1;
	double_1 = double_7 + double_2;
	int_5 = int_3 + int_2;
	double_2 = double_8 * double_8;
}
void v_byteReverse( short parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_2 = float_1 + float_1;
}
void v_MD5Update( long parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	long long_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int_1 = int_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_2;
	short_1 = short_1 * short_2;
	int_3 = int_3 * int_3;
	char_1 = char_1;
	float_2 = float_1 + float_1;
	v_byteReverse(short_1,char_1);

	char_3 = char_2 + char_1;
	int_4 = int_4 + int_4;
	long_1 = long_1 * long_1;
	char_3 = char_3 * char_1;
	float_1 = float_3 * float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_5 * int_5;
	long_1 = long_1 + long_2;
	char_4 = char_4 + char_4;
	double_2 = double_1 + double_2;
	char_5 = char_5 + char_1;
	int_2 = int_3;
	v_MD5Transform(unsigned_int_1,short_2);

}
void v_MD5Init( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_5 = 1;
	int_3 = int_1 + int_2;
	double_2 = double_1 + double_2;
	int_4 = int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 + long_1;
	int_5 = int_4 + int_1;
}
void v_gravatar_tooltip( unsigned int parameter_1,double parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_1;
	long_1 = long_2;
	v_MD5Final(double_1,char_1);

	long_1 = long_1 + long_2;
	char_1 = v__tooltip_del(long_2);

	int_3 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_2 + short_1;
	if(1)
	{
	}
	int_4 = int_3 + int_2;
	if(1)
	{
	}
	double_2 = double_2 + double_3;
	double_1 = double_3 + double_2;
	double_3 = double_2 * double_3;
	float_3 = float_1 + float_2;
	double_2 = double_1 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_MD5Update(long_1,long_2,int_2);

		short_3 = v__tooltip_content(char_1,char_1);

		unsigned_int_1 = unsigned_int_1;
		v_MD5Init(float_3);

		int_1 = int_3 * int_3;
	}
	int_3 = int_1 * int_2;
	float_4 = float_3 + float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	float_4 = float_4 * float_1;
}
double v__cb_link_drag_done(long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double_3 = double_1 + double_2;
	char_1 = char_1 * char_2;
	short_1 = short_2;
	int_1 = int_1 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "j") > 0)
	{
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	long_2 = long_1 + long_1;
	return double_4;
}
int v__cb_link_drag_accept(double parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	return int_2;
}
long v__cb_link_drag_move(unsigned int parameter_2,float parameter_3,float parameter_4,char parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char_3 = char_1 + char_2;
	short_2 = short_1 * short_1;
	double_1 = double_1;
	short_2 = short_2 * short_2;
	char_2 = char_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		if(1)
		{
			int_1 = int_2;
		}
		if(1)
		{
			int_1 = int_1 * int_2;
		}
	}
	return long_1;
}
float v__cb_link_icon_new(long parameter_2,long parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_2;
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	return float_1;
}
int v__cb_link_move(char parameter_2,double parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	short_1 = short_2;
	double_1 = double_1 * double_2;
	long_1 = v__cb_link_drag_move(unsigned_int_1,float_1,float_2,char_1);

	double_1 = v__cb_link_drag_done(long_1);

	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	double_3 = double_2 * double_2;
	double_4 = double_3;
	if(1)
	{
		long long_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_3 = double_2 + double_3;
		long_2 = long_2 * long_1;
		long_3 = long_1 * long_2;
		if(1)
		{
			float_3 = v__cb_link_icon_new(long_4,long_3,float_1);

			int_1 = v__cb_link_drag_accept(double_1,long_1);

			double_2 = double_3 * double_2;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_2 + char_1;
		}
		double_2 = double_3 + double_5;
		unsigned_int_3 = unsigned_int_4;
	}
	return int_1;
}
long v__cb_link_up_delay()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = v__activate_link(double_2,double_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	char_3 = char_1 + char_2;
	return long_1;
}
long v__cb_link_up(long parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_3 = 1;
	short_2 = short_1 + short_1;
	double_2 = double_1 * double_1;
	char_1 = char_2;
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		double_2 = double_2;
		long_1 = long_1;
		int_1 = int_1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			if(1)
			{
				int_1 = int_1 + int_1;
			}
			if(1)
			{
				char_1 = char_1 * char_1;
			}
		}
		long_3 = long_2 + long_2;
	}
	return long_3;
	long_1 = v__cb_link_up_delay();

}
void v_term_focus( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double_3 = double_1 * double_2;
	double_2 = double_3 + double_3;
	if(1)
	{
	}
	long_1 = v__term_is_focused(int_1);

	int_3 = int_2 * int_2;
	float_1 = float_1 * float_1;
	double_2 = double_2 + double_2;
}
long v__term_is_focused( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "JR") < 0)
	{
	}
	int_3 = int_1 + int_2;
	return long_1;
}
void v_term_unfocus( float parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "P") > 0)
	{
	}
	short_1 = short_1;
	int_2 = int_1 * int_1;
	short_3 = short_1 * short_2;
	long_2 = v__term_is_focused(int_2);

}
double v__cb_ctxp_del(char parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_2;
	v_term_focus(int_1);

	int_1 = int_2;
	v_term_unfocus(float_1);

	double_1 = double_2 * double_1;
	float_1 = float_1 * float_2;
	short_1 = short_1 * short_1;
	return double_3;
}
int v__cb_ctxp_dismissed(short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_3 = char_1 + char_2;
	double_1 = double_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
unsigned int v__cb_ctxp_link_copy(double parameter_2,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	char_1 = v__take_selection_text(unsigned_int_1,float_1,int_1,uni_para);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2;
	float_2 = float_3;
	char_2 = char_1 * char_1;
	double_2 = double_1 + double_1;
	char_3 = char_1 + char_1;
	double_2 = double_3;
	return unsigned_int_2;
}
long v__screen_visual_bounds( char parameter_1)
{
	int int_2 = 1;
	long long_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "e2") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double_2 = double_1 * double_2;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_4 = int_2 + int_3;
	}
	return long_1;
}
char v__draw_cell( double parameter_1,double parameter_2,double parameter_3,char parameter_4)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	short short_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	long long_2 = 1;
	long long_4 = 1;
	char char_4 = 1;
	short_1 = short_1 * short_1;
	short_1 = short_1 + short_1;
	int_3 = int_1 + int_2;
	char_1 = char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	int_2 = int_4 * int_1;
	short_3 = short_2 + short_1;
	short_2 = short_2 * short_3;
	double_1 = double_1;
	if(1)
	{
		short_2 = short_3 + short_4;
	}
	if(1)
	{
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
	}
	if(1)
	{
		int_5 = int_4 * int_1;
	}
	if(1)
	{
		short_2 = short_4;
	}
	if(1)
	{
		short short_5 = 1;
		long long_3 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		short_3 = short_2 * short_5;
		long_2 = long_1 + long_1;
		long_3 = long_1 * long_1;
		double_2 = double_1 * double_1;
		float_1 = float_1 * float_2;
		char_1 = char_1 * char_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long long_5 = 1;
		long_5 = long_2 + long_4;
	}
	if(1)
	{
		int int_6 = 1;
		int_5 = int_6;
	}
	if(1)
	{
		long_1 = long_1 * long_4;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_2;
		}
		if(1)
		{
			short_2 = short_3 + short_2;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_3 * double_4;
	}
	return char_4;
}
unsigned int v__draw_line( char parameter_1,double parameter_2,int parameter_3,int parameter_4,char parameter_5)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = v__draw_cell(double_1,double_1,double_1,char_1);

	int_2 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	return unsigned_int_1;
}
float v_termpty_backlog_length( char parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_7 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 + float_1;
	double_3 = double_1 + double_2;
	char_2 = char_1 * char_1;
	double_1 = double_3 * double_1;
	float_2 = float_1 + float_2;
	int_1 = int_2;
	long_1 = long_1;
	short_1 = short_2;
	short_3 = short_1 * short_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 * int_2;
	int_4 = v_verify_beacon(long_2,int_5);

	long_2 = long_1 + long_1;
	double_5 = double_4 + double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	short_2 = short_1 + short_3;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "r4") > 0)
	{
		int int_6 = 1;
		int_6 = int_2 * int_5;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	long_4 = long_3 + long_3;
	if(1)
	{
		double_4 = double_2 + double_5;
	}
	int_5 = int_5 + int_1;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	double_5 = double_2 * double_5;
	double_3 = double_1 * double_3;
	int_3 = int_3 + int_5;
	int_7 = int_5 + int_1;
	long_5 = long_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	return float_1;
}
long v_termio_pty_get( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_1;
	return long_1;
}
unsigned int v_termio_textgrid_get( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 + char_2;
	short_1 = short_1 * short_1;
	return unsigned_int_1;
}
double v_miniview_colors_get( float parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	float_1 = float_2;
	unsigned_int_1 = v_termio_textgrid_get(long_1);

	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_3 = double_1 * double_2;
		int_1 = int_1 * int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char_2 = char_1 * char_2;
		float_4 = float_3 * float_4;
	}
	return double_4;
}
float v__deferred_renderer()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_9 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_5 = int_4 + int_3;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_2 = unsigned_int_6;
	float_3 = float_2 + float_1;
	int_3 = int_5;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_2 * double_2;
	char_1 = char_2;
	if(1)
	{
	}
	float_1 = float_1 + float_3;
	long_1 = long_1 + long_2;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_6;
	char_2 = char_1 + char_1;
	short_2 = short_1 + short_1;
	long_2 = long_1;
	long_3 = long_1 + long_1;
	if(1)
	{
		unsigned_int_8 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = v__screen_visual_bounds(char_2);

		char_1 = char_2;
		if(1)
		{
			unsigned_int_7 = v__draw_line(char_3,double_3,int_6,int_3,char_2);

			unsigned_int_5 = unsigned_int_8 + unsigned_int_4;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	}
	double_1 = double_1 + double_2;
	float_3 = v_termpty_backlog_length(char_3);

	long_1 = long_2;
	int_1 = int_7 * int_2;
	if(1)
	{
		int int_9 = 1;
		int_9 = int_2 * int_8;
	}
	if(1)
	{
		int_3 = int_5 + int_8;
	}
	double_4 = v_miniview_colors_get(float_3,char_3);

	double_1 = double_1 * double_5;
	int_7 = v_termio_scroll_get(short_1);

	unsigned_int_2 = unsigned_int_8 * unsigned_int_1;
	if(1)
	{
		double_1 = double_1;
		float_1 = v_termpty_cellrow_get(short_1,int_8,float_1);

		short_2 = short_2 * short_1;
		if(1)
		{
			char char_4 = 1;
			unsigned_int_7 = unsigned_int_8 * unsigned_int_7;
			char_4 = char_3 + char_4;
		}
		if(1)
		{
			if(1)
			{
				double double_6 = 1;
				int int_10 = 1;
				double_2 = double_6 + double_2;
				unsigned_int_3 = unsigned_int_7 + unsigned_int_6;
				double_6 = double_5 + double_2;
				int_5 = int_10 + int_1;
			}
			if(1)
			{
				char char_5 = 1;
				char_1 = char_5;
				double_4 = double_3 + double_3;
			}
		}
	}
	if(1)
	{
		double_5 = double_4 + double_4;
	}
	long_2 = v_termio_pty_get(int_4);

	unsigned_int_7 = unsigned_int_7 + unsigned_int_6;
	unsigned_int_6 = unsigned_int_9 * unsigned_int_6;
	unsigned_int_7 = unsigned_int_8;
	double_3 = double_5 + double_5;
	return float_1;
}
void v__queue_render( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "}") == 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		float_1 = v__deferred_renderer();

		int_2 = int_1 * int_1;
	}
}
void v_miniview_redraw( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	v__queue_render(unsigned_int_1);

	long_1 = long_1 + long_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_1;
}
int v__block_obj_del()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	long_1 = v__smart_media_del(unsigned_int_1,long_2);

	long_3 = long_1 * long_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	float_3 = float_1 * float_2;
	return int_1;
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
double v__termpty_is_dblwidth_get( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
	int_1 = v__termpty_is_dblwidth_slow_get(short_1,int_1);

}
float v_term_preedit_str_get( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_2;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	short_3 = short_4;
	if(1)
	{
	}
	return float_1;
}
int v_media_get()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	return int_1;
}
char v__smart_media_clicked(float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float_2 = float_1 * float_1;
	long_1 = v_termio_config_get(unsigned_int_1);

	double_1 = double_1 + double_1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			char char_1 = 1;
			short_3 = short_2 + short_3;
			char_1 = char_1;
			if(1)
			{
				if(1)
				{
					int int_1 = 1;
					int int_3 = 1;
					char char_3 = 1;
					int_3 = int_1 * int_2;
					char_1 = char_2 * char_3;
					if(1)
					{
						int int_4 = 1;
						int_4 = int_3 + int_3;
					}
					if(1)
					{
						double double_2 = 1;
						double_2 = double_2;
						int_3 = int_2 * int_3;
						if(1)
						{
							double double_3 = 1;
							double double_4 = 1;
							double_4 = double_3 * double_4;
							double_2 = double_2 + double_2;
							int_2 = v_media_get();

							double_1 = double_3 + double_1;
						}
					}
				}
				long_2 = long_1 * long_2;
			}
		}
	}
	long_2 = long_3 + long_1;
	return char_2;
	short_4 = v_media_src_type_get(float_3);

}
short v_media_control_get( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	return short_2;
}
long v__smart_media_stop(char parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	return long_1;
}
long v__smart_media_pause(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	return long_1;
}
char v__smart_media_play(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
long v__smart_media_del(unsigned int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return long_1;
}
void v_media_visualize_set( char parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 + int_2;
		}
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_5 = int_3 + int_4;
		}
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_2 + int_3;
	}
}
void v_media_mute_set( unsigned int parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_2 = long_1 + long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "K") < 0)
	{
	}
	float_1 = float_1 * float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
}
void v_media_volume_set( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	long_3 = long_1 + long_2;
	double_2 = double_1 * double_1;
}
short v__cb_media_vol(float parameter_2,long parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	long_1 = long_1;
	v_media_volume_set(long_1,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
long v__cb_media_pos(long parameter_2,char parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	v_media_position_set(double_1,double_2);

	int_2 = int_1 * int_2;
	return long_1;
}
long v__cb_media_pos_drag_stop(unsigned int parameter_2,long parameter_3,long parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	char_1 = char_1;
	short_1 = short_2 + short_2;
	int_1 = int_1;
	short_2 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
short v__cb_media_pos_drag_start(short parameter_2,int parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_2;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	v_media_position_set(double_2,double_1);

	char_1 = char_1 * char_1;
	return short_1;
}
void v_media_stop( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_2 = char_1 * char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "<h") > 0)
	{
	}
	float_1 = float_1;
	short_2 = short_1 + short_1;
}
double v__cb_media_stop(int parameter_2,short parameter_3,float parameter_4)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	v_media_stop(long_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
double v__cb_media_pause(long parameter_2,unsigned int parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double_3 = double_1 + double_2;
	return double_3;
	v_media_play_set(int_1,short_1);

}
void v_media_play_set( int parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		long_1 = long_2;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		double double_4 = 1;
		float_2 = float_2 + float_2;
		double_3 = double_2 * double_4;
	}
}
double v__cb_media_play(short parameter_2,char parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double_1 = double_1;
	return double_2;
	v_media_play_set(int_1,short_1);

}
void v_media_position_set( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "@b") > 0)
	{
	}
	short_1 = short_2;
	int_3 = int_1 * int_2;
}
int v__cb_mov_ref(unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	return int_1;
}
unsigned int v__cb_mov_progress(short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	double_1 = double_2;
	return unsigned_int_1;
}
unsigned int v__cb_mov_restart()
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "!") < 0)
	{
	}
	short_2 = short_1 * short_2;
	long_2 = long_1 * long_1;
	short_2 = short_1 + short_1;
	return unsigned_int_1;
}
void v__cb_mov_decode_stop(unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	unsigned_int_1 = v__cb_mov_restart();

	long_2 = long_1 * long_2;
	double_1 = double_1 + double_1;
}
unsigned int v__cb_mov_len_change(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	return unsigned_int_1;
}
double v__cb_mov_frame_resize(double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "EM") < 0)
	{
	}
	int_1 = int_1 + int_1;
	float_1 = float_3 * float_2;
	return double_1;
	float_2 = v__type_mov_calc(unsigned_int_1,long_1,unsigned_int_1,char_1,short_1);

}
float v__cb_mov_frame_decode(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	long_2 = long_1 + long_2;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "v") > 0)
	{
	}
	char_3 = char_1 + char_2;
	float_1 = v__type_mov_calc(unsigned_int_2,long_2,unsigned_int_3,char_1,short_4);

	float_1 = float_1 * float_2;
	short_4 = short_2 + short_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	char_4 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	return float_3;
}
long v__type_mov_init( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	char char_4 = 1;
	int int_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_8 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_4 = 1;
	unsigned_int_1 = v__cb_mov_progress(short_1);

	double_3 = double_1 + double_2;
	short_1 = v__cb_media_pos_drag_start(short_1,int_1,long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = v__cb_mov_ref(unsigned_int_1);

	int_3 = int_1 * int_2;
	short_2 = short_2 * short_1;
	unsigned_int_3 = unsigned_int_3;
	float_1 = float_1 * float_1;
	float_2 = v_theme_apply(short_2,char_1,unsigned_int_2);

	double_3 = double_2 * double_2;
	char_3 = char_2 * char_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		short short_3 = 1;
		long_2 = v__cb_media_pos(long_1,char_4,float_1);

		double_1 = double_2;
		short_1 = short_1 + short_3;
		float_1 = v__cb_mov_frame_decode(int_4);

		char_4 = char_5 + char_6;
	}
	short_4 = short_4 + short_5;
	v_media_play_set(int_3,short_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	v_media_position_set(double_2,double_2);

	char_3 = char_2 * char_1;
	char_2 = char_1 * char_5;
	int_3 = int_5;
	int_5 = int_3 + int_1;
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		long_1 = v__cb_media_pos_drag_stop(unsigned_int_3,long_3,long_3);

		int_7 = int_2 * int_6;
	}
	if(1)
	{
		double_2 = v__cb_media_play(short_1,char_1,long_1);

		double_3 = double_2 * double_3;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	double_2 = double_1 * double_1;
	long_1 = long_3 * long_3;
	double_5 = double_4 + double_4;
	v_media_mute_set(unsigned_int_1,double_2);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	double_3 = double_6 + double_5;
	double_1 = v__cb_mov_frame_resize(double_4);

	v__cb_mov_decode_stop(unsigned_int_3);

	double_5 = v__cb_media_pause(long_4,unsigned_int_5,char_4);

	short_4 = v__cb_media_vol(float_3,long_2,int_2);

	unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_7;
	unsigned_int_8 = v__cb_mov_len_change(long_4);

	int_3 = int_2 + int_8;
	double_1 = v__cb_media_stop(int_1,short_4,float_1);

	long_5 = long_3 + long_3;
	unsigned_int_6 = unsigned_int_9 * unsigned_int_9;
	short_2 = short_2;
	char_6 = char_4 * char_1;
	short_2 = short_4 + short_2;
	v_media_visualize_set(char_2,float_4);

	unsigned_int_5 = unsigned_int_1 * unsigned_int_9;
	if(1)
	{
		unsigned_int_7 = unsigned_int_5 + unsigned_int_2;
	}
	if(1)
	{
		double_3 = double_3;
	}
	return long_4;
}
int v__cb_edje_preloaded(int parameter_2,unsigned int parameter_3,float parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int_1 = int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "d") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_2;
	return int_2;
}
float v__type_edje_init()
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long_2 = long_1 * long_2;
	char_1 = char_1 * char_1;
	float_3 = float_1 * float_2;
	double_1 = double_1 * double_1;
	char_2 = char_1 + char_2;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_1 = double_1 + double_1;
			v_theme_auto_reload_enable(short_1);

			double_3 = double_2 + double_2;
			char_2 = char_1 + char_2;
		}
	}
	return float_3;
	int_2 = v__cb_edje_preloaded(int_2,unsigned_int_4,float_2);

}
float v__type_scale_init( long parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	short_3 = short_1 + short_1;
	short_3 = short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_1 + int_2;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_4;
	float_1 = v__cb_scale_preloaded(short_2,long_1,-1 );

	unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_3 + int_3;
	long_1 = long_2 + long_1;
	return float_2;
}
int v__cb_img_frame()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		short_1 = short_2;
		if(1)
		{
			double_2 = double_1 * double_2;
		}
		double_2 = double_1 + double_1;
		int_1 = int_1 * int_3;
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				double_3 = double_2 * double_2;
			}
		}
	}
	int_2 = int_4 + int_1;
	float_1 = float_1 * float_1;
	char_2 = char_3;
	return int_1;
}
unsigned int v__type_img_anim_handle( long parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_1 + char_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_2 + int_2;
	int_3 = v__cb_img_frame();

	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_1 * int_1;
	return unsigned_int_4;
}
double v__cb_img_preloaded(float parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	short_2 = short_2 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return double_1;
}
char v__type_img_init( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_1 = float_1 * float_2;
	short_1 = short_1 * short_2;
	long_2 = long_1 * long_2;
	double_1 = v__cb_img_preloaded(float_1,long_2);

	long_3 = long_2 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = v__type_img_anim_handle(long_2);

	char_2 = char_1 * char_1;
	double_2 = double_1 + double_2;
	double_3 = double_3 * double_2;
	char_1 = char_1;
	int_1 = int_2;
	int_1 = int_3 * int_1;
	return char_2;
}
short v__url_compl_cb(int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_3 = 1;
	float_2 = float_1 * float_1;
	float_3 = float_2 + float_2;
	float_1 = float_1;
	char controller4vul_2512[2];
	fgets(controller4vul_2512 ,2 ,stdin);
	if( strcmp( controller4vul_2512, "`") > 0)
	{
		int_1 = v__smart_calculate(short_1,uni_para);

	}
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	short_4 = short_2 + short_3;
	int_1 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 + int_3;
	char_1 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_1 = double_3;
	int_1 = int_2 + int_2;
	int_1 = int_3 * int_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	long_3 = long_1 + long_2;
	short_3 = short_4 + short_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_3 = int_1 * int_1;
	float_5 = float_2 + float_4;
	int_1 = int_1 + int_1;
	char_3 = char_1;
	return short_4;
}
int v__url_prog_cb(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char_2 = char_1 * char_2;
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
		int_1 = int_3 + int_4;
		int_4 = int_2 + int_4;
		if(1)
		{
			double double_4 = 1;
			int int_5 = 1;
			short short_1 = 1;
			double_4 = double_4 * double_1;
			int_4 = int_5 + int_5;
			int_3 = int_3;
			short_1 = short_1 * short_1;
		}
	}
	return int_1;
}
short v__type_thumb_calc( char parameter_1,long parameter_2,double parameter_3,short parameter_4,short parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 + double_2;
		short_1 = short_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_4 = 1;
		double_2 = double_1 + double_1;
		int_1 = int_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 * float_2;
			int_2 = int_1;
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
			}
		}
		if(1)
		{
			int_1 = int_2 + int_3;
			short_1 = short_1 * short_1;
		}
		int_4 = int_3 * int_4;
		unsigned_int_3 = unsigned_int_4;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
		double_4 = double_3 + double_1;
	}
	double_3 = double_1 + double_1;
	double_1 = double_2 + double_2;
	return short_2;
}
float v__type_mov_calc( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4,short parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_7 = 1;
	char char_3 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		int_1 = int_1 * int_1;
		double_2 = double_2 * double_3;
	}
	if(1)
	{
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		double double_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long long_3 = 1;
		float_1 = float_1 + float_1;
		float_2 = float_1;
		long_2 = long_1 * long_2;
		if(1)
		{
			double_2 = double_3 * double_2;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_2;
		}
		if(1)
		{
			double_1 = double_3 + double_1;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				int int_2 = 1;
				unsigned_int_6 = unsigned_int_1;
				int_2 = int_2 * int_2;
				if(1)
				{
					short_3 = short_3 * short_4;
				}
			}
		}
		if(1)
		{
			short_3 = short_4;
			short_1 = short_5 + short_1;
			if(1)
			{
				double_4 = double_4;
				int_1 = int_1;
				if(1)
				{
					unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
				}
			}
		}
		if(1)
		{
			short short_6 = 1;
			short_2 = short_3 * short_6;
			float_3 = float_1 + float_1;
		}
		double_1 = double_2 * double_4;
		float_3 = float_3 + float_4;
		short_3 = short_3 + short_2;
		long_2 = long_3 + long_2;
	}
	short_7 = short_4 * short_5;
	char_2 = char_3 * char_3;
	return float_2;
}
char v__type_edje_calc( short parameter_1,char parameter_2,double parameter_3,int parameter_4,char parameter_5)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	char_2 = char_2 * char_2;
	return char_3;
}
double v__type_img_calc( unsigned int parameter_1,long parameter_2,long parameter_3,long parameter_4,short parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_1 = 1;
		double_3 = double_2 * double_1;
		if(1)
		{
			int_1 = int_1 * int_2;
			int_2 = int_2 + int_1;
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
				unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
				if(1)
				{
					char_2 = char_1 * char_2;
				}
			}
		}
		if(1)
		{
			int_1 = int_1 * int_1;
			char_1 = char_2 * char_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_4;
				int_1 = int_1 * int_1;
				if(1)
				{
					unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
				}
			}
			if(1)
			{
				long_1 = long_1 * long_1;
				unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			}
		}
		if(1)
		{
			int_2 = int_2 * int_2;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		}
		long_2 = long_3;
		float_3 = float_1 * float_2;
		long_2 = long_1 * long_2;
		short_1 = short_1;
	}
	long_4 = long_2 * long_2;
	int_2 = int_2 * int_1;
	return double_4;
}
float v__cb_scale_preloaded(short parameter_2,long parameter_3,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	char_1 = char_1 + char_1;
	char controller4vul_2524[3];
	fgets(controller4vul_2524 ,3 ,stdin);
	if( strcmp( controller4vul_2524, "Rp") > 0)
	{
		if(uni_para == 149)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
		int_1 = int_1;
	}
	if(1)
	{
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_2 = int_1;
		short_2 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_3;
		float_2 = float_1 * float_1;
	}
	double_3 = double_1 * double_3;
}
unsigned int v__type_scale_calc( float parameter_1,long parameter_2,char parameter_3,char parameter_4,unsigned int parameter_5,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_10 = 1;
	double_1 = double_1 + double_2;
	char_2 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	char controller4vul_2520[2];
	fgets(controller4vul_2520 ,2 ,stdin);
	if( strcmp( controller4vul_2520, "N") > 0)
	{
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char controller4vul_2521[2];
		fgets(controller4vul_2521 ,2 ,stdin);
		if( strcmp( controller4vul_2521, ">") > 0)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			long_2 = long_1 + long_1;
			char controller4vul_2522[3];
			fgets(controller4vul_2522 ,3 ,stdin);
			if( strcmp( controller4vul_2522, ")_") > 0)
			{
				double_3 = double_1 + double_1;
				double_1 = double_4 * double_5;
				char controller4vul_2523[3];
				fgets(controller4vul_2523 ,3 ,stdin);
				if( strcmp( controller4vul_2523, "{g") < 0)
				{
					float_1 = v__cb_scale_preloaded(short_1,long_2,uni_para);

					unsigned_int_3 = unsigned_int_1;
				}
			}
		}
		if(1)
		{
			int int_3 = 1;
			short_2 = short_2;
			int_3 = int_1 * int_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
				unsigned_int_3 = unsigned_int_3;
				if(1)
				{
					unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
				}
			}
		}
		if(1)
		{
			int int_4 = 1;
			int_5 = int_4 + int_5;
			double_6 = double_2;
		}
		double_6 = double_2;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_6;
		double_4 = double_6 * double_3;
		double_5 = double_5 + double_7;
	}
	if(1)
	{
		double double_8 = 1;
		char char_3 = 1;
		double double_9 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
		long_2 = long_2 * long_1;
		double_2 = double_8 * double_4;
		if(1)
		{
			double_1 = double_4 + double_4;
		}
		if(1)
		{
			char_3 = char_1 * char_3;
		}
		if(1)
		{
			long long_3 = 1;
			char char_4 = 1;
			int_1 = int_5 + int_1;
			long_1 = long_3 * long_3;
			short_1 = short_2 * short_2;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
			char_3 = char_1 * char_4;
			int_2 = int_1 * int_5;
			double_7 = double_5 * double_1;
			unsigned_int_6 = unsigned_int_5 * unsigned_int_7;
			double_2 = double_1 + double_5;
		}
		double_6 = double_5 * double_2;
		double_7 = double_9 + double_1;
	}
	if(1)
	{
		double_7 = double_1;
		unsigned_int_4 = unsigned_int_2;
	}
	long_5 = long_4 + long_1;
	double_7 = double_6 * double_10;
	return unsigned_int_7;
}
float v__unsmooth_timeout(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double_1 = double_2;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	char controller4vul_2518[3];
	fgets(controller4vul_2518 ,3 ,stdin);
	if( strcmp( controller4vul_2518, "hu") < 0)
	{
		long_1 = long_1 + long_1;
		char controller4vul_2519[2];
		fgets(controller4vul_2519 ,2 ,stdin);
		if( strcmp( controller4vul_2519, "N") > 0)
		{
			short short_2 = 1;
			unsigned_int_3 = v__type_scale_calc(float_1,long_1,char_1,char_1,unsigned_int_1,uni_para);

			short_1 = short_1 * short_2;
		}
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2;
		}
	}
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	return float_1;
}
void v__smooth_handler( int parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 + double_2;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	if(1)
	{
		long_2 = long_1 + long_2;
	}
	char controller4vul_2514[2];
	fgets(controller4vul_2514 ,2 ,stdin);
	if( strcmp( controller4vul_2514, "f") < 0)
	{
		char controller4vul_2515[3];
		fgets(controller4vul_2515 ,3 ,stdin);
		if( strcmp( controller4vul_2515, "`4") < 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			long_2 = long_1 * long_1;
			char controller4vul_2516[3];
			fgets(controller4vul_2516 ,3 ,stdin);
			if( strcmp( controller4vul_2516, ";H") < 0)
			{
				int int_2 = 1;
				int int_3 = 1;
				int_3 = int_1 * int_2;
				char controller4vul_2517[3];
				fgets(controller4vul_2517 ,3 ,stdin);
				if( strcmp( controller4vul_2517, "bM") > 0)
				{
					float_1 = v__unsmooth_timeout(uni_para);

					short_1 = short_2 * short_2;
				}
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			}
			if(1)
			{
				float float_2 = 1;
				float float_3 = 1;
				float_3 = float_2 + float_1;
			}
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_2;
		}
		double_2 = double_2 + double_1;
	}
}
int v__smart_calculate( short parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	double double_6 = 1;
	int int_4 = 1;
	double double_7 = 1;
	long_1 = long_2;
	int_1 = int_1 * int_1;
	char controller4vul_2513[3];
	fgets(controller4vul_2513 ,3 ,stdin);
	if( strcmp( controller4vul_2513, "gb") > 0)
	{
		v__smooth_handler(int_2,uni_para);

	}
	int_2 = int_1 * int_3;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		float_1 = float_1 + float_2;
	}
	double_2 = double_1 * double_1;
	float_3 = float_2 + float_1;
	unsigned_int_1 = unsigned_int_2;
	double_5 = double_3 * double_4;
	unsigned_int_2 = unsigned_int_2;
	float_4 = float_4 + float_3;
	short_2 = short_1 + short_1;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_4;
	short_2 = short_3 * short_3;
	double_6 = double_5 * double_3;
	unsigned_int_2 = unsigned_int_4;
	double_2 = double_3 + double_2;
	int_4 = int_1;
	double_3 = double_1 * double_7;
	if(1)
	{
		double_6 = double_4 + double_2;
		double_5 = double_6 * double_2;
	}
	if(1)
	{
		char char_2 = 1;
		int int_5 = 1;
		char_2 = char_2;
		int_5 = int_2 + int_5;
	}
	return int_2;
}
float v__smart_move( short parameter_1,float parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	return float_1;
}
long v__smart_resize( char parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double_1 = double_2;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	int_1 = int_2 * int_2;
	int_1 = int_1 + int_2;
	return long_1;
}
void v__smart_del()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	float float_4 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		short_3 = short_1 + short_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2;
		long_1 = long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	short_3 = short_1 * short_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		if(1)
		{
			double_3 = double_4;
		}
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_2 = float_3 * float_3;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		short_4 = short_3 * short_3;
	}
	if(1)
	{
		int_3 = int_1 + int_3;
	}
	if(1)
	{
		double_3 = double_1 + double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_1 = long_2 + long_3;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
	}
	if(1)
	{
		short short_5 = 1;
		short_5 = short_3 + short_4;
	}
	float_1 = float_4;
	int_3 = int_1 * int_3;
}
long v__smart_add( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_3 + float_2;
	short_2 = short_1 + short_2;
	char_2 = char_1 + char_1;
	short_3 = short_1 * short_2;
	long_1 = long_1 * long_1;
	long_1 = long_1 + long_2;
	int_1 = int_1 + int_2;
	short_1 = short_1 + short_3;
	return long_1;
}
short v__smart_init()
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	short short_3 = 1;
	long_1 = long_1 + long_1;
	double_2 = double_1 + double_1;
	double_2 = double_1 + double_2;
	long_1 = long_2;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	long_3 = v__smart_resize(char_1,double_1,float_1);

	int_1 = int_1 * int_3;
	double_2 = double_2;
	v__smart_del();

	float_2 = v__smart_move(short_2,float_2,unsigned_int_3);

	char_1 = char_2 * char_1;
	return short_1;
	long_2 = v__smart_add(long_1);

	int_1 = v__smart_calculate(short_3,-1 );

}
void v_media_add( double parameter_1,int parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_4 = 1;
	float float_3 = 1;
	double double_9 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	float float_5 = 1;
	char char_4 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_7 = 1;
	double double_10 = 1;
	float float_7 = 1;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	double_2 = double_3;
	double_2 = double_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		short_3 = short_1 * short_2;
	}
	double_2 = double_2 + double_1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	long_3 = long_1 + long_2;
	double_3 = double_3 + double_4;
	double_2 = double_1 + double_3;
	int_2 = int_1 + int_1;
	char controller4vul_2506[3];
	fgets(controller4vul_2506 ,3 ,stdin);
	if( strcmp( controller4vul_2506, "F}") < 0)
	{
		char controller4vul_2507[2];
		fgets(controller4vul_2507 ,2 ,stdin);
		if( strcmp( controller4vul_2507, "F") < 0)
		{
			short short_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_6 = 1;
			short_1 = short_4 + short_1;
			int_1 = int_1 + int_3;
			if(1)
			{
				double_1 = double_5;
				double_5 = double_1 * double_4;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
			}
			if(1)
			{
				int_3 = int_1 * int_1;
				unsigned_int_3 = unsigned_int_5 + unsigned_int_5;
				double_3 = double_3 + double_4;
			}
			if(1)
			{
				long_3 = long_1 + long_4;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
			}
			if(1)
			{
				double_2 = double_4 * double_1;
			}
			if(1)
			{
				double_4 = double_3 + double_1;
			}
			if(1)
			{
				short_1 = short_2;
			}
			if(1)
			{
				short short_5 = 1;
				double_6 = double_1;
				double_3 = double_1 * double_5;
				double_7 = double_5 * double_1;
				double_8 = double_3 + double_5;
				unsigned_int_1 = unsigned_int_6 + unsigned_int_3;
				double_3 = double_3 * double_1;
				short_5 = short_3 + short_1;
			}
			char controller4vul_2508[3];
			fgets(controller4vul_2508 ,3 ,stdin);
			if( strcmp( controller4vul_2508, "wN") < 0)
			{
				short short_6 = 1;
				int_3 = int_2;
				int_4 = int_3 + int_2;
				short_1 = short_1 * short_6;
				char controller4vul_2509[2];
				fgets(controller4vul_2509 ,2 ,stdin);
				if( strcmp( controller4vul_2509, ",") > 0)
				{
					double_8 = double_3;
					if(1)
					{
						char_1 = char_2 + char_1;
						float_1 = float_2 * float_1;
					}
					char controller4vul_2510[2];
					fgets(controller4vul_2510 ,2 ,stdin);
					if( strcmp( controller4vul_2510, "<") < 0)
					{
						unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
						char controller4vul_2511[3];
						fgets(controller4vul_2511 ,3 ,stdin);
						if( strcmp( controller4vul_2511, "b_") > 0)
						{
							short short_7 = 1;
							short_3 = v__url_compl_cb(int_1,uni_para);

							float_2 = float_1 + float_3;
							short_7 = short_4;
							double_1 = double_3 + double_9;
						}
						if(1)
						{
							int int_5 = 1;
							unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
							float_4 = float_3;
							unsigned_int_6 = unsigned_int_1;
							short_1 = short_2 + short_1;
							int_5 = int_4 * int_1;
							unsigned_int_2 = unsigned_int_3 * unsigned_int_7;
							unsigned_int_6 = unsigned_int_6 + unsigned_int_6;
							char_3 = char_2;
							int_1 = int_5 * int_2;
						}
					}
				}
				if(1)
				{
					double_3 = double_3 * double_1;
				}
			}
		}
		if(1)
		{
			long long_5 = 1;
			long_5 = long_3 * long_2;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_6 = 1;
			long_6 = long_2 * long_6;
			long_2 = long_2 + long_1;
		}
	}
	if(1)
	{
		int int_6 = 1;
		long long_7 = 1;
		if(1)
		{
			int_1 = int_3 * int_4;
			float_5 = float_1 * float_3;
		}
		char_1 = char_4 + char_1;
		if(1)
		{
			float_3 = float_4 + float_2;
			double_6 = double_6 * double_7;
		}
		double_9 = double_3 + double_2;
		if(1)
		{
			double_8 = double_9 + double_9;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		}
		int_3 = int_2 + int_6;
		if(1)
		{
			char char_5 = 1;
			long_1 = long_4 + long_3;
			char_5 = char_5 * char_3;
		}
		float_4 = float_3 * float_6;
		long_7 = long_7 * long_3;
	}
	char_1 = char_3 * char_4;
	unsigned_int_1 = unsigned_int_8 * unsigned_int_5;
	int_7 = int_1 * int_7;
	unsigned_int_7 = unsigned_int_2 + unsigned_int_7;
	double_8 = double_8 * double_4;
	double_10 = double_6;
	unsigned_int_8 = unsigned_int_2 + unsigned_int_2;
	float_7 = float_6 + float_1;
	if(1)
	{
		float_5 = float_3;
	}
}
short v__block_media_activate( char parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1;
	double_1 = double_1 * double_2;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_2505[3];
	fgets(controller4vul_2505 ,3 ,stdin);
	if( strcmp( controller4vul_2505, "6s") < 0)
	{
		v_media_add(double_3,int_1,int_2,int_2,unsigned_int_2,uni_para);

		char_1 = char_2;
	}
	if(1)
	{
		char_2 = char_1 + char_3;
	}
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_3 * char_4;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		float_1 = float_3;
	}
	double_4 = double_2 + double_2;
	float_1 = float_3;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	char_3 = char_2 + char_3;
	long_1 = long_1;
	int_1 = int_1 + int_2;
	long_1 = long_1 + long_1;
	double_1 = double_2 * double_5;
	double_6 = double_4 * double_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
	}
	long_1 = long_1 * long_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	long_3 = long_2 * long_3;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_4 * float_4;
	}
	return short_1;
}
char v__block_edje_message_cb(long parameter_2,double parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_11 = 1;
	double double_9 = 1;
	double double_10 = 1;
	float float_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_12 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_3 + short_3;
	short_2 = short_4 * short_1;
	float_2 = float_1 + float_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_2 * double_2;
	}
	double_3 = double_2;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "p") > 0)
	{
	}
	float_3 = float_2 + float_2;
	double_4 = double_1 * double_3;
	double_4 = double_5 + double_3;
	double_2 = double_2 + double_5;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_3 = int_1 * int_2;
	int_4 = int_1 * int_1;
	double_3 = double_3 * double_6;
	float_2 = float_3 + float_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_3 + int_4;
	long_2 = long_1 + long_2;
	double_8 = double_5 * double_7;
	long_1 = long_1 * long_3;
	long_3 = long_2 + long_3;
	float_3 = float_3 * float_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2 + int_5;
		double_2 = double_1 * double_2;
	}
	double_6 = double_7 * double_2;
	double_8 = double_2;
	int_4 = int_5 * int_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	char_1 = char_1 + char_2;
	short_3 = short_5 + short_6;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_2 = char_2 * char_1;
		short_6 = short_4;
		int_2 = int_1 + int_5;
	}
	int_6 = int_3 + int_5;
	int_7 = int_5;
	int_8 = int_1 + int_5;
	int_9 = int_1 * int_6;
	short_2 = short_1 + short_4;
	int_6 = int_10 * int_4;
	short_5 = short_3 * short_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short_1 = short_5;
		double_6 = double_7 * double_6;
		int_3 = int_6 * int_1;
	}
	char_2 = char_1 + char_3;
	unsigned_int_5 = unsigned_int_1;
	char_4 = char_3 + char_2;
	double_1 = double_8;
	short_1 = short_5 * short_1;
	int_9 = int_6;
	char_5 = char_4 * char_2;
	int_8 = int_10;
	double_2 = double_8 * double_1;
	unsigned_int_3 = unsigned_int_3;
	int_11 = int_9;
	double_2 = double_5 + double_6;
	double_9 = double_1 + double_2;
	int_2 = int_6 + int_6;
	double_2 = double_6 * double_10;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		v_termpty_write(char_4,double_5,int_6);

		double_8 = double_9 + double_9;
		double_8 = double_1;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
	}
	long_3 = long_3 * long_3;
	float_5 = float_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_3 + char_5;
	int_8 = int_8 * int_11;
	long_4 = long_2 * long_3;
	long_5 = long_3 * long_2;
	float_4 = float_2 + float_2;
	int_12 = int_4 * int_6;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		float float_6 = 1;
		float float_7 = 1;
		char_1 = char_2;
		float_6 = float_1;
		float_5 = float_7 + float_1;
	}
	double_2 = double_6;
	double_8 = double_7;
	int_2 = int_1 * int_9;
	return char_3;
}
void v_termpty_write( char parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
}
float v__block_edje_signal_cb(unsigned int parameter_2,double parameter_3,float parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_1 * int_1;
	char_1 = char_1;
	double_1 = double_2;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_3 + double_1;
	}
	double_4 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_6 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		double_5 = double_2;
		v_termpty_write(char_1,double_5,int_1);

		long_3 = long_1 * long_2;
		short_3 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		char_3 = char_2 + char_2;
		double_6 = double_3;
		long_4 = long_3 * long_2;
		long_3 = long_5 + long_6;
	}
	if(1)
	{
		short short_4 = 1;
		unsigned int unsigned_int_4 = 1;
		short_3 = short_4;
		float_1 = float_1 + float_1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	}
	return float_1;
}
void v_termpty_block_chid_update( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
	}
	double_1 = double_1 * double_2;
}
double v__block_edje_cmds( float parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float_1 = v__block_edje_signal_cb(unsigned_int_1,double_1,float_1);

	double_1 = double_2 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_2;
	v_termpty_block_chid_update(double_2,double_3);

	char_1 = v__block_edje_message_cb(long_1,double_3,int_1);

}
int v_homedir_get( char parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_1 * int_1;
		int_1 = int_2 * int_3;
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return int_1;
}
double v__block_edje_activate( short parameter_1,float parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		long_2 = long_3 + long_3;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1 * int_2;
			int_2 = int_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
			int_2 = int_2;
		}
	}
	int_4 = v_homedir_get(char_1,char_2);

	double_4 = v__block_edje_cmds(float_1,double_5,double_5,int_1);

	unsigned_int_4 = unsigned_int_3;
	unsigned_int_2 = v_config_theme_path_default_get(long_3);

	long_1 = long_2;
	char_3 = char_1 + char_3;
	double_1 = double_4 * double_4;
	if(1)
	{
		int_2 = int_2 * int_4;
	}
	if(1)
	{
		double_3 = double_1;
	}
	return double_2;
}
double v__block_activate( double parameter_1,double parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	long_3 = long_1 + long_2;
	double_1 = double_1;
	char controller4vul_2504[2];
	fgets(controller4vul_2504 ,2 ,stdin);
	if( strcmp( controller4vul_2504, "#") > 0)
	{
		short_1 = v__block_media_activate(char_1,char_2,uni_para);

	}
	char_3 = char_2;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_3 * long_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	double_1 = double_2 * double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	return double_1;
}
char v_termpty_block_get( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "#") == 0)
	{
	}
	return char_1;
}
int v_termpty_block_id_get( long parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "z") < 0)
	{
	}
	short_1 = short_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
void v_termpty_backscroll_adjust( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	int_1 = v_verify_beacon(long_1,int_1);

	int_2 = int_1 + int_1;
}
char v__smart_apply( unsigned int parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	long long_6 = 1;
	short short_4 = 1;
	long long_7 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	char char_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_6 = 1;
	short short_8 = 1;
	long long_8 = 1;
	long long_9 = 1;
	int int_7 = 1;
	double double_4 = 1;
	float float_4 = 1;
	double double_5 = 1;
	int int_8 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_9 = 1;
	short short_10 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_11 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_10 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_12 = 1;
	int int_11 = 1;
	int int_12 = 1;
	long long_10 = 1;
	int int_14 = 1;
	char char_7 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_13 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_14 = 1;
	unsigned int unsigned_int_15 = 1;
	char char_8 = 1;
	float float_8 = 1;
	char char_9 = 1;
	unsigned int unsigned_int_16 = 1;
	double double_12 = 1;
	long long_12 = 1;
	int int_15 = 1;
	double double_13 = 1;
	long long_16 = 1;
	int_3 = int_1 + int_2;
	long_2 = long_1 + long_1;
	double_1 = double_1 * double_1;
	long_4 = long_1 * long_3;
	float_3 = float_1 + float_2;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_1 + int_1;
	char_3 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	short_3 = short_1 + short_2;
	long_2 = long_1 * long_3;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_5 = 1;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
		long_6 = long_5 + long_1;
		short_2 = short_4 + short_5;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		if(1)
		{
			long_6 = long_7 + long_2;
		}
		char_4 = char_3 * char_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_7;
		}
		int_2 = int_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						char_5 = char_3 + char_4;
					}
					short_6 = short_7;
				}
				double_2 = double_2 + double_2;
				if(1)
				{
					unsigned_int_2 = unsigned_int_6 + unsigned_int_1;
				}
				if(1)
				{
					double_3 = double_1 + double_3;
				}
				unsigned_int_7 = unsigned_int_8;
				int_4 = int_2 * int_6;
				double_3 = double_2 + double_1;
				char_1 = char_2 + char_3;
				short_2 = short_8 + short_8;
				long_8 = long_9;
			}
			char controller4vul_2500[2];
			fgets(controller4vul_2500 ,2 ,stdin);
			if( strcmp( controller4vul_2500, "e") > 0)
			{
				char char_6 = 1;
				int_3 = int_7;
				double_4 = double_4 + double_4;
				if(1)
				{
					if(1)
					{
						unsigned_int_7 = unsigned_int_7 + unsigned_int_5;
					}
					float_1 = float_3 * float_4;
					char_2 = char_5 * char_4;
					double_4 = double_4 + double_5;
					int_8 = int_2 + int_5;
					float_6 = float_2 * float_5;
					unsigned_int_8 = unsigned_int_9 * unsigned_int_9;
					int_7 = int_7;
					int_2 = int_7 * int_6;
					double_5 = double_2 * double_5;
					double_3 = double_5 * double_1;
					short_10 = short_9 * short_8;
					char_1 = char_2 + char_6;
					if(1)
					{
						unsigned_int_7 = unsigned_int_10 * unsigned_int_9;
						short_9 = short_1 + short_6;
						double_5 = double_4;
						char_4 = char_5 * char_5;
						short_7 = short_11 + short_10;
					}
				}
				char controller4vul_2501[3];
				fgets(controller4vul_2501 ,3 ,stdin);
				if( strcmp( controller4vul_2501, "(I") < 0)
				{
					char controller4vul_2502[2];
					fgets(controller4vul_2502 ,2 ,stdin);
					if( strcmp( controller4vul_2502, "T") > 0)
					{
						char controller4vul_2503[3];
						fgets(controller4vul_2503 ,3 ,stdin);
						if( strcmp( controller4vul_2503, "Xu") < 0)
						{
							double_6 = v__block_activate(double_7,double_3,uni_para);

							double_5 = double_4 * double_7;
						}
						long_7 = long_2 + long_5;
					}
					double_4 = double_2 + double_7;
					if(1)
					{
						long_8 = long_8 * long_9;
					}
					if(1)
					{
						double_8 = double_7 + double_2;
					}
					int_9 = int_1 + int_4;
					unsigned_int_11 = unsigned_int_11 * unsigned_int_2;
					int_2 = int_10 + int_4;
					float_7 = float_2 + float_1;
					double_8 = double_6;
					int_5 = int_6 + int_3;
					if(1)
					{
						char_5 = char_3 + char_2;
					}
				}
				if(1)
				{
					int int_13 = 1;
					float_2 = float_4 + float_6;
					int_9 = int_3 + int_2;
					long_2 = long_3 * long_3;
					double_4 = double_1 + double_4;
					double_4 = double_4 + double_2;
					unsigned_int_7 = unsigned_int_4 * unsigned_int_10;
					if(1)
					{
						long_2 = long_9 + long_3;
						double_1 = double_7 + double_1;
					}
					if(1)
					{
						unsigned_int_5 = unsigned_int_8 * unsigned_int_12;
						unsigned_int_5 = unsigned_int_8 * unsigned_int_10;
					}
					if(1)
					{
						float_7 = float_4 * float_1;
					}
					if(1)
					{
						if(1)
						{
							char_4 = char_1 * char_4;
						}
						if(1)
						{
							int_2 = int_1 + int_11;
						}
					}
					if(1)
					{
						int_1 = int_3 * int_5;
					}
					if(1)
					{
						char_1 = char_5 + char_2;
					}
					if(1)
					{
						short_4 = short_11;
						int_13 = int_12 + int_12;
						int_1 = int_4 + int_3;
						long_10 = long_3 * long_3;
						double_2 = double_5 * double_4;
						char_3 = char_6;
						short_7 = short_3 + short_7;
					}
					if(1)
					{
						int_9 = int_8 * int_3;
					}
					if(1)
					{
						int_14 = int_14 * int_14;
					}
					if(1)
					{
						if(1)
						{
							unsigned_int_4 = unsigned_int_4;
						}
						unsigned_int_10 = unsigned_int_2 * unsigned_int_1;
					}
					short_8 = short_3 + short_7;
					int_13 = int_13;
					int_5 = int_14 * int_8;
					double_5 = double_8;
					if(1)
					{
						char_7 = char_1;
						int_12 = int_9 + int_4;
					}
					if(1)
					{
						unsigned_int_7 = unsigned_int_11 + unsigned_int_7;
						int_7 = int_6;
					}
					int_6 = int_5;
					short_8 = short_8 * short_9;
					char_1 = char_4 + char_4;
					short_11 = short_9 * short_11;
					if(1)
					{
						double_9 = double_9 * double_9;
					}
				}
			}
		}
		unsigned_int_6 = unsigned_int_13 + unsigned_int_5;
		if(1)
		{
			float_1 = float_4 * float_5;
		}
	}
	double_9 = double_10 * double_4;
	if(1)
	{
		double double_11 = 1;
		double_9 = double_7 * double_1;
		double_6 = double_11 * double_10;
		short_4 = short_10 + short_6;
		unsigned_int_15 = unsigned_int_14 * unsigned_int_8;
		unsigned_int_8 = unsigned_int_6 * unsigned_int_2;
		int_7 = int_3 * int_8;
		if(1)
		{
			long long_11 = 1;
			long long_13 = 1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int_7 = int_5 + int_10;
				char_1 = char_8;
				float_6 = float_4 + float_8;
				if(1)
				{
					char_9 = char_3 + char_4;
				}
				long_4 = long_7 + long_1;
				if(1)
				{
					if(1)
					{
						unsigned_int_15 = unsigned_int_16 * unsigned_int_11;
						long_3 = long_3 * long_10;
						double_12 = double_11 + double_9;
					}
				}
				if(1)
				{
					double_7 = double_8 + double_5;
					unsigned_int_11 = unsigned_int_14 + unsigned_int_9;
				}
				unsigned_int_12 = unsigned_int_5 + unsigned_int_9;
				short_4 = short_6 * short_3;
				long_6 = long_11 + long_5;
				char_2 = char_5 + char_3;
				float_6 = float_8 + float_5;
				double_9 = double_9 + double_10;
				unsigned_int_1 = unsigned_int_10 + unsigned_int_9;
				int_7 = int_12 + int_3;
				double_1 = double_5 * double_11;
				unsigned_int_13 = unsigned_int_2 + unsigned_int_15;
				int_6 = int_2;
				if(1)
				{
					double_2 = double_10 + double_7;
					short_6 = short_8 * short_7;
					int_10 = int_6 * int_4;
					long_4 = long_5 * long_1;
					unsigned_int_13 = unsigned_int_7 * unsigned_int_13;
					unsigned_int_3 = unsigned_int_11;
					double_4 = double_5;
					unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
					int_14 = int_2;
					unsigned_int_4 = unsigned_int_16 * unsigned_int_8;
				}
				long_1 = long_5 + long_1;
				if(1)
				{
					if(1)
					{
						long_2 = long_4;
						long_12 = long_5 * long_12;
					}
				}
			}
			long_11 = long_13 + long_9;
		}
		int_12 = int_5 * int_10;
		int_10 = int_4 + int_14;
	}
	int_8 = int_5 * int_15;
	if(1)
	{
		unsigned_int_14 = unsigned_int_12 * unsigned_int_14;
		double_10 = double_7;
		float_4 = float_3 + float_6;
	}
	if(1)
	{
		double_2 = double_13 * double_3;
	}
	if(1)
	{
		long_6 = long_8 * long_5;
	}
	float_1 = float_4;
	double_8 = double_9 * double_4;
	unsigned_int_4 = unsigned_int_15 * unsigned_int_1;
	if(1)
	{
		long long_14 = 1;
		int int_16 = 1;
		unsigned int unsigned_int_17 = 1;
		long long_15 = 1;
		double_9 = double_4 + double_8;
		float_5 = float_4 * float_7;
		short_11 = short_4 * short_3;
		double_13 = double_3;
		short_10 = short_11 + short_4;
		int_5 = int_15 * int_10;
		if(1)
		{
			long_2 = long_3 + long_6;
			int_2 = int_14 * int_2;
		}
		unsigned_int_16 = unsigned_int_5 * unsigned_int_15;
		double_9 = double_2 * double_5;
		long_1 = long_1 + long_1;
		long_8 = long_14;
		int_8 = int_15 * int_16;
		int_12 = int_11 * int_1;
		short_9 = short_9 * short_2;
		int_14 = int_11 * int_9;
		if(1)
		{
			unsigned_int_17 = unsigned_int_5 * unsigned_int_13;
		}
		if(1)
		{
			if(1)
			{
				float_7 = float_8;
			}
			if(1)
			{
				unsigned_int_10 = unsigned_int_12 * unsigned_int_17;
			}
			if(1)
			{
				int_3 = int_16 * int_15;
			}
			if(1)
			{
				unsigned_int_14 = unsigned_int_7 + unsigned_int_1;
			}
			if(1)
			{
				char_7 = char_9 + char_7;
			}
		}
		long_12 = long_1 * long_15;
	}
	if(1)
	{
		double_5 = double_12 + double_8;
	}
	if(1)
	{
		char_1 = char_1 * char_7;
	}
	long_3 = long_16;
	return char_8;
}
void v__smart_cb_change(int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char_1 = v__smart_apply(unsigned_int_1,uni_para);

	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	short_1 = short_1;
	int_5 = int_3 + int_4;
}
long v__smart_update_queue( double parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char controller4vul_2499[2];
	fgets(controller4vul_2499 ,2 ,stdin);
	if( strcmp( controller4vul_2499, "_") > 0)
	{
		v__smart_cb_change(uni_para);

	}
	float_2 = float_1 * float_2;
	return long_1;
}
double v__lost_selection_reset_job()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = v__lost_selection(unsigned_int_2,-1 );

	int_3 = int_2 + int_2;
	if(1)
	{
		int int_4 = 1;
		double double_1 = 1;
		int_1 = int_4 + int_1;
		double_1 = double_2;
	}
	return double_2;
}
unsigned int v__lost_selection(unsigned int parameter_2,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1;
	int_2 = int_1 * int_2;
	char_1 = char_1 * char_2;
	int_3 = int_2 + int_3;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	char controller4vul_2496[2];
	fgets(controller4vul_2496 ,2 ,stdin);
	if( strcmp( controller4vul_2496, "z") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char controller4vul_2497[2];
		fgets(controller4vul_2497 ,2 ,stdin);
		if( strcmp( controller4vul_2497, "4") > 0)
		{
			double_1 = double_1;
			char controller4vul_2498[2];
			fgets(controller4vul_2498 ,2 ,stdin);
			if( strcmp( controller4vul_2498, "@") < 0)
			{
				long long_2 = 1;
				long_1 = v__smart_update_queue(double_2,int_3,uni_para);

				long_1 = long_2 + long_2;
			}
			char_1 = char_1;
		}
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		long long_3 = 1;
		int int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			int int_4 = 1;
			double double_3 = 1;
			int_4 = int_1 + int_3;
			double_3 = double_2 * double_1;
		}
		long_3 = long_3 + long_1;
		int_5 = int_3;
		int_5 = int_2 * int_5;
		float_3 = float_1 * float_2;
	}
	return unsigned_int_3;
}
char v__take_selection_text( unsigned int parameter_1,float parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	char_1 = char_1;
	short_1 = short_1;
	int_1 = int_1 * int_1;
	int_2 = int_1;
	double_1 = double_1 * double_1;
	int_3 = int_2 + int_3;
	int_1 = int_4 + int_2;
	char controller4vul_2495[3];
	fgets(controller4vul_2495 ,3 ,stdin);
	if( strcmp( controller4vul_2495, "Q5") > 0)
	{
		unsigned_int_3 = v__lost_selection(unsigned_int_4,uni_para);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_3 = double_2 * double_2;
	return char_1;
}
unsigned int v__cb_ctxp_link_content_copy(float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_2 = char_1 + char_1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_2 * char_1;
	v_termio_selection_get(char_1,int_2,int_2,int_2,int_1,float_1,long_1);

	char_2 = v__take_selection_text(unsigned_int_3,float_1,int_1,-1 );

	int_3 = int_1 * int_1;
	int_2 = int_1;
	double_1 = double_1;
	double_3 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	return unsigned_int_3;
}
void v_ty_sb_free( double parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1;
	long_1 = long_1 + long_2;
	int_2 = int_1 + int_2;
}
long v_ty_sb_steal_buf( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	char char_4 = 1;
	long long_3 = 1;
	char_2 = char_1 + char_2;
	long_2 = long_1 * long_2;
	if(1)
	{
		int_1 = int_1 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		char_3 = char_3 + char_1;
	}
	float_2 = float_1 + float_1;
	int_1 = int_2 + int_1;
	float_2 = float_2 * float_2;
	char_4 = char_3 * char_1;
	int_2 = int_1;
	return long_3;
}
int v_codepoint_to_utf8( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_2 = 1;
		double_3 = double_1 * double_2;
		double_2 = double_2 * double_3;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		long long_2 = 1;
		float_2 = float_1 + float_1;
		long_1 = long_1 * long_2;
		short_3 = short_1 + short_3;
		double_2 = double_2 + double_4;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1;
		char_1 = char_1 + char_1;
		float_1 = float_1;
		int_3 = int_2 * int_3;
		char_2 = char_2 + char_3;
	}
	if(1)
	{
		double double_5 = 1;
		short short_4 = 1;
		char_3 = char_2 + char_3;
		long_1 = long_1 + long_3;
		double_3 = double_2;
		char_4 = char_1 + char_1;
		double_5 = double_4 * double_1;
		short_3 = short_4 + short_1;
	}
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long_3 = long_1;
		float_1 = float_2 + float_3;
		float_1 = float_2;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		double_3 = double_2 + double_3;
		int_1 = int_4 + int_4;
		int_4 = int_3 + int_3;
	}
	if(1)
	{
		char char_5 = 1;
		char_3 = char_5 + char_4;
	}
	return int_4;
}
void v_ty_sb_spaces_rtrim()
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1;
	short_1 = short_1 * short_2;
	float_3 = float_1 * float_2;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_3 = int_3;
		char_1 = char_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_1 * double_1;
	}
}
int v_ty_sb_add( long parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		long_1 = long_1 + long_1;
		unsigned_int_1 = unsigned_int_2;
		short_1 = short_1;
		if(1)
		{
		}
		int_2 = int_1 * int_1;
		double_1 = double_2 + double_1;
	}
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	double_1 = double_4;
	return int_1;
}
unsigned int v__termpty_cellrow_from_beacon_get( short parameter_1,int parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_3 = int_4;
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 + float_1;
	}
	float_3 = float_2;
	if(1)
	{
		short short_4 = 1;
		short_1 = short_1 * short_2;
		short_4 = short_1 * short_3;
	}
	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_3 * int_1;
	if(1)
	{
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_5 = 1;
		double_1 = double_3 + double_3;
		unsigned_int_3 = unsigned_int_4;
		char_2 = char_1 + char_1;
		short_5 = short_2 + short_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
		short_3 = short_1;
		int_4 = v_verify_beacon(long_1,int_1);

		int_3 = int_2 + int_3;
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	return unsigned_int_1;
}
float v_termpty_cellrow_get( short parameter_1,int parameter_2,float parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		if(1)
		{
		}
		int_1 = int_1 + int_1;
	}
	if(1)
	{
	}
	return float_1;
	unsigned_int_1 = v__termpty_cellrow_from_beacon_get(short_1,int_2,double_1);

}
void v_termio_selection_get( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,float parameter_6,long parameter_7)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	char char_3 = 1;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		if(1)
		{
			char_2 = char_1 + char_1;
			float_1 = float_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						int_3 = int_1 * int_2;
					}
					if(1)
					{
						int_3 = int_4;
					}
				}
				if(1)
				{
					v_ty_sb_free(double_1);

					int_1 = int_1;
				}
			}
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			int_1 = int_4;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					double double_2 = 1;
					float_1 = v_termpty_cellrow_get(short_3,int_1,float_1);

					double_1 = double_1 + double_2;
				}
				if(1)
				{
					long_1 = v_ty_sb_steal_buf(char_2);

					unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
				}
				if(1)
				{
					v_termpty_backlog_unlock();

					int_2 = int_1 + int_2;
				}
				if(1)
				{
					long long_2 = 1;
					long long_3 = 1;
					long long_4 = 1;
					v_ty_sb_spaces_rtrim();

					long_4 = long_2 * long_3;
				}
				if(1)
				{
					float float_2 = 1;
					float_2 = float_1 * float_2;
				}
			}
			int_3 = v_ty_sb_add(long_5,int_2,char_1);

			double_3 = double_4;
		}
		if(1)
		{
			int int_5 = 1;
			int_2 = v_codepoint_to_utf8(unsigned_int_4,char_3);

			int_5 = int_4 * int_1;
		}
	}
	v_termpty_backlog_lock();

}
int v__cb_ctxp_link_open(unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1 * int_1;
	double_3 = double_1 * double_2;
	char_1 = char_1;
	unsigned_int_1 = v__activate_link(double_2,double_4);

	int_1 = int_1 * int_2;
	int_4 = int_3 + int_4;
	float_2 = float_1 + float_1;
	return int_4;
}
void v__should_inline( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	long_2 = long_1 + long_1;
	long_1 = long_2 * long_2;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	long_2 = v_termio_config_get(unsigned_int_2);

	int_4 = int_3;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "m") > 0)
	{
	}
}
unsigned int v_link_is_email( short parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
double v_link_is_protocol( float parameter_1)
{
	double double_1 = 1;
	return double_1;
}
long v_link_is_url( char parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	return long_1;
	double_1 = v_link_is_protocol(float_1);

}
unsigned int v__activate_link( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long long_4 = 1;
	long long_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_2 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_8 = 1;
	long long_9 = 1;
	unsigned_int_1 = v_link_is_email(short_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_1 + int_2;
	int_1 = int_2 + int_2;
	short_2 = short_2;
	short_1 = v_media_src_type_get(float_1);

	char_1 = char_1;
	unsigned_int_5 = unsigned_int_2;
	char_1 = char_1 * char_1;
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
			unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
		}
		if(1)
		{
			long_1 = long_1 * long_2;
		}
	}
	if(1)
	{
		long_3 = long_2 + long_3;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		double_1 = double_1 * double_2;
		int_5 = int_3 * int_4;
	}
	unsigned_int_7 = unsigned_int_2 * unsigned_int_6;
	if(1)
	{
	}
	if(1)
	{
		long long_5 = 1;
		double_2 = double_1 * double_3;
		double_4 = double_3 + double_1;
		if(1)
		{
			char_2 = char_2 + char_2;
		}
		if(1)
		{
			long_1 = long_4 + long_2;
		}
		long_6 = long_5 * long_3;
		if(1)
		{
			int_2 = int_1 + int_6;
			float_1 = float_1;
		}
	}
	if(1)
	{
		double double_5 = 1;
		double_3 = double_4 + double_5;
		int_2 = int_7 + int_4;
		if(1)
		{
			int_2 = int_4 + int_3;
			if(1)
			{
				if(1)
				{
					float_1 = float_2 + float_1;
					double_4 = double_4 + double_5;
				}
				if(1)
				{
					unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
					long_7 = long_7 + long_4;
				}
			}
			if(1)
			{
				double double_6 = 1;
				if(1)
				{
					if(1)
					{
						int_1 = int_4 * int_5;
					}
				}
				if(1)
				{
					if(1)
					{
						long_7 = long_3 + long_7;
					}
				}
				if(1)
				{
					if(1)
					{
						short short_3 = 1;
						short_3 = short_1 + short_3;
					}
				}
				double_1 = double_4 + double_6;
				double_1 = double_1 * double_4;
			}
		}
	}
	if(1)
	{
		int int_8 = 1;
		int_8 = int_6 * int_6;
		short_2 = short_2;
		if(1)
		{
			int_8 = int_7 + int_2;
			if(1)
			{
				short_2 = short_1;
				long_2 = long_7;
			}
			if(1)
			{
				double double_7 = 1;
				double double_8 = 1;
				if(1)
				{
					if(1)
					{
						double_1 = double_1 * double_2;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_5 * unsigned_int_8;
					}
				}
				if(1)
				{
					if(1)
					{
						long_8 = v_link_is_url(char_2);

						float_1 = float_2 + float_2;
					}
				}
				double_3 = double_7 * double_8;
				v__should_inline(unsigned_int_4);

				unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
			}
		}
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_3 * unsigned_int_4;
	}
	long_9 = long_1;
	if(1)
	{
		long_6 = long_1;
	}
	return unsigned_int_2;
}
int v__cb_ctxp_link_preview(double parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	double_1 = double_1;
	long_2 = long_1 * long_1;
	int_1 = int_1 * int_2;
	float_2 = float_1 + float_2;
	short_2 = short_1 + short_1;
	unsigned_int_1 = v__activate_link(double_2,double_1);

	long_4 = long_2 * long_3;
	return int_3;
}
short v__is_fmt( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_3 = int_3 * int_4;
		}
		if(1)
		{
		}
	}
	return short_1;
}
short v_media_src_type_get( float parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char_1 = char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_2 = char_2 * char_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return short_1;
	short_1 = v__is_fmt(char_1,long_1);

}
double v__mouse_in_selection( float parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_1;
	char_3 = char_3 + char_4;
	short_1 = short_1 * short_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
		char_1 = char_4;
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
	return double_1;
}
unsigned int v__smart_xy_to_cursor( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	float_2 = float_1 * float_1;
	int_2 = int_2 + int_3;
	short_2 = short_1 * short_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		short_2 = short_3 * short_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_2 = float_2 * float_3;
	}
	if(1)
	{
		short_1 = short_1 + short_3;
	}
	return unsigned_int_1;
}
long v__cb_link_down(long parameter_2,long parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long_3 = long_1 * long_2;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_3 = 1;
		char char_1 = 1;
		float_3 = float_1 * float_2;
		double_2 = double_3;
		char_2 = char_1 * char_1;
	}
	char controller4vul_2492[3];
	fgets(controller4vul_2492 ,3 ,stdin);
	if( strcmp( controller4vul_2492, "X0") < 0)
	{
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_4 = 1;
		long long_5 = 1;
		float float_4 = 1;
		int int_3 = 1;
		double double_5 = 1;
		char char_4 = 1;
		double double_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_6 = 1;
		char_3 = char_3 * char_2;
		long_1 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		short_2 = short_1 + short_1;
		char controller4vul_2493[2];
		fgets(controller4vul_2493 ,2 ,stdin);
		if( strcmp( controller4vul_2493, "*") > 0)
		{
			int_2 = int_1 + int_2;
			long_1 = long_4;
			char controller4vul_2494[2];
			fgets(controller4vul_2494 ,2 ,stdin);
			if( strcmp( controller4vul_2494, "h") > 0)
			{
				unsigned_int_3 = v__cb_ctxp_link_copy(double_4,uni_para);

			}
		}
		long_4 = long_4 * long_5;
		float_4 = float_2 * float_1;
		if(1)
		{
			int_3 = int_1 * int_2;
			if(1)
			{
				short short_3 = 1;
				short_3 = short_3;
			}
		}
		int_3 = int_3;
		double_4 = double_2 + double_3;
		if(1)
		{
			float_2 = float_4;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double_5 = double_1 + double_4;
			unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
		}
		if(1)
		{
			int_3 = int_1 + int_2;
		}
		char_2 = char_3 + char_4;
		double_5 = double_6 + double_1;
		int_4 = int_3 * int_1;
		int_5 = int_3 * int_5;
		long_3 = long_6;
	}
	return long_2;
}
long v_main_term_popup_exists()
{
	long long_1 = 1;
	return long_1;
}
long v__update_link( long parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_4 = 1;
	long long_6 = 1;
	char_1 = char_2;
	float_1 = float_1 * float_1;
	int_2 = int_1 * int_2;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	long_3 = long_2 + long_3;
	if(1)
	{
		long_3 = long_3 + long_1;
		long_1 = long_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_5 = 1;
		double_1 = double_1 + double_1;
		float_2 = float_2 + float_3;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		char controller4vul_2490[3];
		fgets(controller4vul_2490 ,3 ,stdin);
		if( strcmp( controller4vul_2490, "_g") > 0)
		{
			int_1 = int_1 * int_2;
			char controller4vul_2491[3];
			fgets(controller4vul_2491 ,3 ,stdin);
			if( strcmp( controller4vul_2491, "Zv") > 0)
			{
				long_4 = v__cb_link_down(long_3,long_1,uni_para);

				unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
			}
		}
		if(1)
		{
			float_2 = float_1 + float_2;
			double_1 = double_2 + double_2;
		}
		if(1)
		{
			char char_4 = 1;
			float float_4 = 1;
			float float_5 = 1;
			char_4 = char_3 * char_2;
			float_5 = float_4 + float_5;
		}
		char_1 = char_2 * char_3;
		double_3 = double_1 * double_2;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		unsigned_int_6 = unsigned_int_3 * unsigned_int_3;
		long_5 = long_4 + long_4;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_6;
		if(1)
		{
			long_1 = long_6;
		}
	}
	return long_6;
}
short v__remove_links( long parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	int_3 = int_1 * int_2;
	char controller4vul_2489[3];
	fgets(controller4vul_2489 ,3 ,stdin);
	if( strcmp( controller4vul_2489, "sB") > 0)
	{
		int int_4 = 1;
		long_1 = v__update_link(long_2,unsigned_int_1,float_1,char_1,uni_para);

		float_1 = float_1;
		int_1 = int_4;
	}
	double_2 = double_1 + double_1;
	double_1 = double_1 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_5 * int_2;
	return short_2;
}
int v__sel_set( long parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	if(1)
	{
		int_1 = int_1 + int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_2 * int_1;
		char_1 = char_1 * char_2;
	}
	return int_3;
}
int v_termio_scroll_get( short parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_1;
	long_1 = long_1;
	return int_1;
}
void v_miniview_position_offset( char parameter_1,int parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_2;
	short_2 = short_1 + short_2;
	int_1 = int_1 * int_1;
	short_3 = short_2;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		long_1 = long_1 + long_1;
		if(1)
		{
			double double_1 = 1;
			double double_3 = 1;
			double_1 = double_2;
			double_1 = double_3 * double_1;
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			double double_4 = 1;
			float float_1 = 1;
			double_2 = double_4;
			long_2 = long_2 * long_2;
			float_1 = float_1 + float_1;
		}
	}
	if(1)
	{
		if(1)
		{
			int_1 = v_termio_scroll_get(short_3);

			long_2 = long_1 + long_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			}
			char controller_8[3];
			fgets(controller_8 ,3 ,stdin);
			if( strcmp( controller_8, "@#") > 0)
			{
				int int_3 = 1;
				int_3 = int_1;
			}
		}
	}
}
long v_term_miniview_get( short parameter_1)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
void v_termio_scroll( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		char char_3 = 1;
		char_2 = char_1 * char_1;
		if(1)
		{
			double_1 = double_3 * double_1;
		}
		char_3 = char_2;
	}
	int_2 = int_1 * int_1;
	char controller4vul_2486[3];
	fgets(controller4vul_2486 ,3 ,stdin);
	if( strcmp( controller4vul_2486, "gF") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_6 = 1;
		char_2 = char_2 + char_1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		if(1)
		{
			double_1 = double_3;
		}
		char controller4vul_2487[2];
		fgets(controller4vul_2487 ,2 ,stdin);
		if( strcmp( controller4vul_2487, "U") > 0)
		{
			short short_2 = 1;
			double double_4 = 1;
			double_1 = double_3 * double_1;
			double_1 = double_2 + double_2;
			double_3 = double_3 * double_2;
			short_2 = short_1 + short_1;
			double_2 = double_4 + double_3;
			char controller4vul_2488[2];
			fgets(controller4vul_2488 ,2 ,stdin);
			if( strcmp( controller4vul_2488, "{") > 0)
			{
				short_1 = v__remove_links(long_1,unsigned_int_5,uni_para);

				float_1 = float_2;
			}
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			float_1 = float_2;
			unsigned_int_7 = unsigned_int_1 * unsigned_int_4;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
		}
	}
}
char v_termpty_save_new( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1;
	if(1)
	{
	}
	v_termpty_save_free(short_1);

	int_2 = int_1 + int_2;
	float_3 = float_2 * float_1;
	return char_1;
}
double v_termpty_save_expand( float parameter_1,short parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char_1 = char_1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	int_3 = int_1 * int_2;
	int_3 = int_2 * int_1;
	return double_1;
}
int v__termpty_cell_is_empty()
{
	int int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "r") < 0)
	{
	}
	return int_1;
}
int v_termpty_line_length( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = v__termpty_cell_is_empty();

	int_1 = int_2 + int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
		if(1)
		{
		}
	}
	return int_2;
}
int v_verify_beacon( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
void v_termpty_text_save_top( char parameter_1,short parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_5 = 1;
	v_termpty_backlog_unlock();

	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	long_2 = long_1 * long_1;
	int_1 = v_termpty_line_length(unsigned_int_1,unsigned_int_4);

	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		char_2 = char_1;
		if(1)
		{
			double_1 = double_2 * double_1;
		}
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			int_2 = v_verify_beacon(long_3,int_2);

			double_2 = v_termpty_save_expand(float_1,short_1,unsigned_int_3);

			int_3 = int_1 + int_2;
			unsigned_int_2 = unsigned_int_1;
			v_termpty_backlog_lock();

			int_3 = int_1 + int_4;
			short_1 = short_2 + short_3;
		}
	}
	double_5 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_4;
	int_3 = int_2 * int_3;
	if(1)
	{
		long_3 = long_3 + long_3;
	}
	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	float_3 = float_2 * float_2;
	char_3 = v_termpty_save_new(short_1,int_1);

	char_5 = char_4 + char_3;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double_1 = double_2 * double_5;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_6;
	}
	int_1 = int_5 + int_5;
}
void v_termpty_text_scroll( char parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	long_3 = long_1 + long_2;
	long_2 = long_1 + long_1;
	char controller4vul_2484[2];
	fgets(controller4vul_2484 ,2 ,stdin);
	if( strcmp( controller4vul_2484, "x") < 0)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_5;
		char controller4vul_2485[3];
		fgets(controller4vul_2485 ,3 ,stdin);
		if( strcmp( controller4vul_2485, "X$") > 0)
		{
			short short_2 = 1;
			v_termio_scroll(short_1,int_1,int_1,int_2,uni_para);

			short_3 = short_2 + short_2;
		}
		float_1 = float_2;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 * char_1;
		}
	}
	if(1)
	{
		float float_3 = 1;
		double double_2 = 1;
		float_3 = float_1 + float_3;
		double_1 = double_1 * double_1;
		if(1)
		{
			double double_3 = 1;
			double_2 = double_2 * double_3;
		}
		float_2 = float_2 * float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			int int_3 = 1;
			double_2 = double_2 * double_4;
			double_2 = double_2;
			int_3 = int_2 + int_3;
		}
		if(1)
		{
			short_3 = short_1;
		}
	}
}
void v_termpty_text_scroll_test( int parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float_1 = float_1 + float_2;
	char controller4vul_2482[2];
	fgets(controller4vul_2482 ,2 ,stdin);
	if( strcmp( controller4vul_2482, "i") > 0)
	{
		float float_3 = 1;
		float_3 = float_1 + float_3;
		char controller4vul_2483[2];
		fgets(controller4vul_2483 ,2 ,stdin);
		if( strcmp( controller4vul_2483, "p") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			int int_1 = 1;
			long long_3 = 1;
			v_termpty_text_scroll(char_1,short_1,uni_para);

			long_1 = long_1 + long_2;
			int_1 = int_1 + int_1;
			long_1 = long_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_1 + double_1;
		short_3 = short_2 + short_1;
	}
}
void v__cursor_to_start_of_line( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
}
void v__tab_forward( int parameter_1,int parameter_2)
{
}
char v__handle_cursor_control( long parameter_1,double parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char controller4vul_2481[3];
	fgets(controller4vul_2481 ,3 ,stdin);
	if( strcmp( controller4vul_2481, "uv") > 0)
	{
		int int_2 = 1;
		v_termpty_text_scroll_test(int_1,int_1,uni_para);

		int_3 = int_1 + int_2;
	}
	float_1 = float_2;
	int_4 = int_3 * int_3;
	long_1 = long_1 + long_1;
	double_3 = double_1 * double_2;
	double_1 = double_1 * double_1;
	int_4 = int_3 + int_3;
	double_2 = double_4 * double_1;
	float_2 = float_1 + float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Ku") > 0)
	{
		double_4 = double_3 + double_2;
	}
	double_4 = double_1 + double_5;
	long_1 = long_2 * long_3;
	double_3 = double_3 + double_5;
	if(1)
	{
		short short_1 = 1;
		double double_6 = 1;
		short_1 = short_1 + short_1;
		double_4 = double_6 + double_6;
		int_4 = int_4;
	}
	double_4 = double_3;
	return char_1;
}
int v_termpty_handle_seq( char parameter_1,float parameter_2,short parameter_3,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_1;
	char controller4vul_2480[3];
	fgets(controller4vul_2480 ,3 ,stdin);
	if( strcmp( controller4vul_2480, "C[") < 0)
	{
		long long_2 = 1;
		long long_3 = 1;
		char_1 = v__handle_cursor_control(long_1,double_1,uni_para);

		long_3 = long_1 + long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2 * char_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	return int_1;
}
void v_termpty_handle_buf( double parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_1;
	float_1 = float_1;
	short_2 = short_1 * short_1;
	char controller4vul_2479[2];
	fgets(controller4vul_2479 ,2 ,stdin);
	if( strcmp( controller4vul_2479, "q") < 0)
	{
		int int_2 = 1;
		int_1 = v_termpty_handle_seq(char_1,float_1,short_1,uni_para);

		int_2 = int_2 * int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_2 * char_3;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	float_2 = float_1 * float_1;
}
void v_theme_reload( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_2;
	char_3 = char_1 * char_2;
	int_3 = int_1 + int_3;
	int_4 = int_3;
	if(1)
	{
	}
}
short v_theme_reload_cb(double parameter_2,char parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_1;
	double_1 = double_1 * double_1;
	char_3 = char_3 + char_1;
	double_2 = double_1 * double_1;
	long_1 = long_1 + long_1;
	v_theme_reload(unsigned_int_1);

	long_3 = long_2 + long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "*[") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	return short_1;
}
void v_theme_auto_reload_enable( short parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short_1 = v_theme_reload_cb(double_1,char_1,char_2);

	int_1 = int_1 * int_1;
}
double v__cursor_shape_to_group_name()
{
	double double_1 = 1;
	return double_1;
}
unsigned int v_config_theme_path_default_get( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_1;
	short_3 = short_1 + short_2;
	double_4 = double_3 + double_3;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	return unsigned_int_1;
}
float v_theme_path_get()
{
	float float_1 = 1;
	return float_1;
}
double v_config_theme_path_get( unsigned int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char_1 = char_1 + char_1;
	short_2 = short_1 * short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "c") < 0)
	{
	}
	return double_1;
	float_1 = v_theme_path_get();

}
float v_theme_apply( short parameter_1,char parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_2;
	int_2 = int_2 + int_3;
	int_2 = int_3;
	if(1)
	{
	}
	float_1 = float_1;
	unsigned_int_1 = v_config_theme_path_default_get(long_1);

	int_2 = int_4 + int_3;
	if(1)
	{
	}
	double_2 = v_config_theme_path_get(unsigned_int_2);

	short_1 = short_1 + short_1;
	double_1 = double_3;
	return float_1;
}
void v_termio_set_cursor_shape( float parameter_1,short parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	v_theme_auto_reload_enable(short_1);

	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = v__cursor_shape_to_group_name();

	int_1 = int_2 + int_3;
	short_2 = short_2 * short_2;
	short_4 = short_2 + short_3;
	double_1 = double_1 + double_2;
	int_2 = int_1 + int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
		if(1)
		{
			int int_4 = 1;
			float_1 = v_theme_apply(short_2,char_1,unsigned_int_2);

			int_1 = int_1 + int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
	}
}
void v_termpty_clear_tabs_on_screen( long parameter_1)
{
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		v_termpty_backlog_lock();

		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		int int_2 = 1;
		v_termpty_save_free(short_1);

		int_2 = int_1 + int_2;
	}
	int_3 = int_1 * int_1;
	v_termpty_backlog_unlock();

	unsigned_int_1 = unsigned_int_3;
	float_1 = float_1;
}
float v__ts_free()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return float_1;
}
void v_termpty_save_free( short parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1;
		}
		if(1)
		{
			char_1 = char_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	float_1 = v__ts_free();

	int_1 = int_1 * int_1;
	char_2 = char_2 * char_1;
	int_1 = int_1 + int_1;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( long parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	v_termpty_save_free(short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	v_termpty_backlog_size_set(float_1,char_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "5i") > 0)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_5 = 1;
		float_3 = float_1 * float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_2 = 1;
			char_1 = char_2 * char_2;
		}
		unsigned_int_5 = unsigned_int_4;
		double_2 = double_1 + double_1;
	}
	int_2 = int_1 + int_1;
	double_3 = double_2 * double_2;
	double_2 = double_4 * double_1;
	v_termpty_backlog_unlock();

	unsigned_int_6 = unsigned_int_3;
	double_3 = double_2 + double_2;
	v_termpty_backlog_lock();

}
void v_termpty_reset_att()
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	long_1 = long_1 * long_1;
	double_1 = double_1 + double_1;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	double_1 = double_1;
	long_1 = long_1 + long_2;
	long_4 = long_1 + long_3;
	int_1 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_3;
	float_1 = float_2;
	long_5 = long_1;
	double_3 = double_2 + double_2;
	int_2 = int_2 + int_1;
	long_2 = long_1 + long_5;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_3 + int_2;
	long_4 = long_1;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	int_1 = int_4 + int_1;
}
long v_termio_config_get( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_2;
	double_3 = double_1 + double_2;
	return long_2;
}
void v_termpty_reset_state( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_5 = 1;
	double double_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	float float_6 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_7 = 1;
	int int_6 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	float_3 = float_1 * float_2;
	int_1 = int_1 * int_1;
	v_termio_set_cursor_shape(float_3,short_1);

	float_5 = float_1 + float_4;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	char_1 = char_1 * char_1;
	v_termpty_clear_tabs_on_screen(long_1);

	char_2 = char_1 + char_1;
	char_3 = char_3 * char_2;
	unsigned_int_5 = unsigned_int_1;
	int_3 = int_2 + int_3;
	double_4 = double_1 + double_3;
	char_4 = char_2 + char_1;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
	long_3 = v_termio_config_get(unsigned_int_2);

	short_2 = short_3;
	short_3 = short_3;
	char_4 = char_2 * char_5;
	double_2 = double_3 * double_2;
	double_2 = double_2 + double_5;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	short_5 = short_4 + short_4;
	double_4 = double_5;
	int_5 = int_4 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	double_4 = double_6 * double_1;
	float_1 = float_6 + float_4;
	short_1 = short_6 * short_4;
	int_1 = int_4 + int_1;
	char_5 = char_1;
	v_termpty_reset_att();

	short_1 = short_5 * short_2;
	unsigned_int_7 = unsigned_int_3 + unsigned_int_6;
	short_7 = short_5 + short_6;
	int_3 = int_5 * int_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_7 = 1;
		float_7 = float_4 + float_2;
	}
	if(1)
	{
		short_6 = short_1 * short_3;
	}
	v_termpty_clear_backlog(long_4);

}
void v_termpty_resize_tabs( int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	float_1 = float_1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_2 * int_2;
		if(1)
		{
			float float_2 = 1;
			float_1 = float_2 + float_2;
		}
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, ":>") < 0)
		{
			int_2 = int_2 + int_2;
		}
		double_2 = double_1 + double_2;
	}
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
}
void v__termpty_init( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3;
	int_2 = int_1 + int_2;
	short_3 = short_1 * short_2;
	short_3 = short_3 * short_4;
	long_1 = long_1 * long_1;
	double_3 = double_1 + double_2;
	char_2 = char_1 * char_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_4;
	float_1 = float_1 * float_1;
	double_2 = double_1 * double_2;
	long_1 = long_1 * long_1;
	double_2 = double_3 * double_1;
	v_termpty_resize_tabs(int_3,int_1,int_2);

	v_termpty_reset_state(double_1);

}
float v__add_default_keys( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_5 = 1;
	char char_7 = 1;
	char char_8 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_4 = 1;
	long_2 = long_1 + long_1;
	int_1 = int_1 + int_2;
	long_1 = long_1 + long_2;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	long_2 = long_2 * long_3;
	int_3 = int_1 + int_3;
	unsigned_int_3 = unsigned_int_1;
	double_2 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_2;
	double_1 = double_3;
	long_3 = long_1 * long_2;
	int_3 = int_2;
	short_3 = short_1 + short_1;
	char_1 = char_1 + char_1;
	char_1 = char_2;
	char_1 = char_3 * char_1;
	double_2 = double_3 * double_2;
	double_4 = double_2 + double_1;
	int_2 = int_4 * int_3;
	long_3 = long_3 + long_3;
	int_1 = int_1;
	long_2 = long_3 + long_2;
	char_2 = char_1 * char_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_4;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_6;
	int_3 = int_4 + int_2;
	long_4 = long_2 + long_3;
	float_3 = float_1 + float_2;
	char_4 = char_4;
	double_2 = double_1 + double_3;
	char_6 = char_3 + char_5;
	long_3 = long_5 + long_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	char_7 = char_2 * char_5;
	char_6 = char_6 * char_8;
	float_5 = float_4 * float_5;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_5;
	double_1 = double_4 + double_4;
	long_2 = long_5 * long_2;
	double_4 = double_4;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_7;
	int_2 = int_3 + int_4;
	int_4 = int_1;
	char_8 = char_5 + char_2;
	int_1 = int_1 + int_2;
	unsigned_int_5 = unsigned_int_7 + unsigned_int_7;
	short_4 = short_4 + short_4;
	char_7 = char_5 * char_6;
	return float_5;
}
void v_colors_standard_get( int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,long parameter_5,unsigned int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_3 = 1;
		int_2 = int_1 * int_1;
		char_1 = char_1 * char_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 + int_2;
		long_1 = long_1 + long_2;
		int_4 = int_2 * int_3;
		long_1 = long_3 * long_3;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
}
void v_config_new()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	double_2 = double_1 + double_2;
	short_2 = short_1 + short_1;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_1 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		float float_3 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		long long_5 = 1;
		double double_6 = 1;
		float float_4 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short_4 = short_1 * short_3;
		long_3 = long_1 * long_2;
		double_1 = double_2 * double_2;
		float_1 = float_1 + float_1;
		float_2 = float_2 + float_2;
		short_5 = short_5 + short_2;
		short_3 = short_3 * short_4;
		long_1 = long_2 + long_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_1 + double_3;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		double_1 = double_2 + double_3;
		double_4 = double_1 + double_1;
		float_2 = float_2 + float_2;
		int_1 = int_1 * int_2;
		v_colors_standard_get(int_1,int_1,int_2,unsigned_int_4,long_4,unsigned_int_2);

		float_3 = float_1;
		double_5 = double_3 * double_4;
		char_2 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		double_2 = double_5 * double_2;
		int_1 = int_3 + int_1;
		long_2 = long_4 * long_2;
		long_2 = long_5 * long_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		char_1 = char_2 + char_1;
		int_1 = int_2 + int_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		char_1 = char_2 + char_2;
		double_3 = double_1 * double_6;
		int_2 = int_1;
		double_1 = double_4;
		long_1 = long_3 + long_4;
		float_4 = float_3 + float_2;
		char_1 = char_1 * char_2;
		int_3 = int_2 + int_3;
		long_6 = long_6 * long_5;
		float_1 = float_4;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
		int_3 = int_3;
		char_3 = char_2;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_4;
		double_2 = double_2 + double_1;
		float_4 = float_3 * float_3;
		double_4 = double_4;
		int_2 = int_1 + int_3;
		int_2 = int_1 + int_1;
		double_2 = double_5 + double_6;
		float_2 = v__add_default_keys(double_3);

		char_2 = char_4 + char_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_5 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
				short_1 = short_1 + short_5;
				float_5 = float_3;
				short_5 = short_2 + short_2;
				unsigned_int_4 = unsigned_int_4;
				double_5 = double_1 * double_5;
			}
		}
		double_1 = double_7 + double_8;
		char_4 = char_1 + char_3;
	}
}
int main()
{
	int uni_para =149;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	float float_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_7 = 1;
	char char_8 = 1;
	int_1 = int_1 * int_2;
	int_2 = int_3 * int_2;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_1 + char_2;
	double_1 = double_1;
	float_1 = float_2 * float_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_1 * int_4;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_2 = double_2 * double_2;
	long_1 = long_2;
	unsigned_int_4 = unsigned_int_1;
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		int_2 = int_5 + int_5;
	}
	float_3 = float_2 * float_2;
	if(1)
	{
	}
	int_7 = int_6 + int_3;
	int_5 = int_1 + int_5;
	char_5 = char_4 * char_3;
	char controller4vul_2475[3];
	fgets(controller4vul_2475 ,3 ,stdin);
	if( strcmp( controller4vul_2475, " o") > 0)
	{
		long long_3 = 1;
		short short_2 = 1;
		long long_4 = 1;
		char char_6 = 1;
		if(1)
		{
			long_2 = long_3 + long_2;
		}
		if(1)
		{
			int_2 = int_2 + int_3;
		}
		if(1)
		{
			int_3 = int_3 + int_2;
		}
		short_2 = short_1 + short_1;
		if(1)
		{
			long_2 = long_3 * long_3;
		}
		char_4 = char_5;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		int_9 = int_8 + int_2;
		if(1)
		{
			long_4 = long_1 * long_3;
		}
		char_6 = char_5 * char_6;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		}
		unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
		if(1)
		{
			short_2 = short_1 * short_1;
		}
		int_3 = int_2 + int_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
		}
		char controller4vul_2476[2];
		fgets(controller4vul_2476 ,2 ,stdin);
		if( strcmp( controller4vul_2476, "a") < 0)
		{
			unsigned_int_6 = unsigned_int_6;
			char controller4vul_2477[2];
			fgets(controller4vul_2477 ,2 ,stdin);
			if( strcmp( controller4vul_2477, ">") > 0)
			{
				short short_3 = 1;
				char_6 = char_4 * char_4;
				short_2 = short_3 + short_2;
				char controller4vul_2478[2];
				fgets(controller4vul_2478 ,2 ,stdin);
				if( strcmp( controller4vul_2478, "0") < 0)
				{
					float float_4 = 1;
					float float_5 = 1;
					v_termpty_handle_buf(double_2,char_5,int_7,uni_para);

					float_5 = float_4 + float_2;
				}
				char controller_1[3];
				fgets(controller_1 ,3 ,stdin);
				if(remainder_check(controller_1,100,2))
				{
					int_3 = int_5;
				}
				if(1)
				{
					int_4 = int_6;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_7 * unsigned_int_7;
				}
				if(1)
				{
					long_2 = long_4;
				}
				if(1)
				{
					long long_5 = 1;
					long_5 = long_1 * long_5;
				}
				if(1)
				{
					double_3 = double_2 + double_2;
				}
				if(1)
				{
					double_3 = double_3;
				}
				if(1)
				{
					int_7 = int_9 * int_3;
				}
				if(1)
				{
					short short_4 = 1;
					short short_5 = 1;
					short_5 = short_4 * short_3;
				}
				if(1)
				{
					short_3 = short_2 * short_3;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
				}
			}
			if(1)
			{
				double_4 = double_1 + double_2;
			}
		}
	}
	if(1)
	{
		int_2 = int_9 + int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
	}
	if(1)
	{
		float_3 = float_2 * float_1;
	}
	if(1)
	{
		double_3 = double_5 * double_4;
		if(1)
		{
			double_1 = double_5;
		}
	}
	double_2 = double_5 + double_2;
	int_4 = int_8 + int_9;
	char_8 = char_7 + char_4;
	unsigned_int_6 = unsigned_int_7 + unsigned_int_5;
	if(1)
	{
		int_5 = int_6 * int_4;
		double_4 = double_3 + double_1;
	}
	return int_5;
}

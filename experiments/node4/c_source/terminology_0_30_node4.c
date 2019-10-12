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

unsigned int v__termpty_shutdown( long parameter_1);
void v_termpty_text_scroll_rev_test( int parameter_1,unsigned int parameter_2);
char v__handle_esc_dcs( long parameter_1,short parameter_2,int parameter_3);
long v__handle_op_a( long parameter_1,long parameter_2,unsigned int parameter_3);
long v__termpty_ext_handle( long parameter_1,int parameter_2,double parameter_3);
void v__handle_esc_terminology( char parameter_1,int parameter_2,unsigned int parameter_3);
float v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3);
int v__smart_calculate_226( float parameter_1);
double v__smart_size( unsigned int parameter_1,int parameter_2,int parameter_3,double parameter_4);
void v_colors_term_init( long parameter_1,char parameter_2,float parameter_3);
void v_termio_config_update( int parameter_1);
void v__font_size_set( char parameter_1,int parameter_2);
void v_termio_font_size_set( short parameter_1,int parameter_2);
double v__handle_xterm_50_command( short parameter_1,char parameter_2,int parameter_3);
double v__eina_unicode_to_hex( short parameter_1);
short v__xterm_parse_color( char parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5);
short v__xterm_arg_get( long parameter_1);
double v__handle_esc_xterm( long parameter_1,float parameter_2,short parameter_3);
void v_termpty_cells_set_content( short parameter_1,char parameter_2,int parameter_3,int parameter_4);
long v__handle_esc_csi_decera( long parameter_1,unsigned int parameter_2);
void v_termpty_cells_att_fill_preserve_colors( long parameter_1,float parameter_2,float parameter_3,int parameter_4);
double v__clean_up_rect_coordinates( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
double v__handle_esc_csi_decfra( int parameter_1,float parameter_2);
short v__handle_esc_csi_decslrm( double parameter_1,double parameter_2);
long v__handle_esc_csi_decstbm( char parameter_1,unsigned int parameter_2);
short v__handle_esc_csi_decscusr( int parameter_1,int parameter_2);
long v__handle_esc_csi_dsr( short parameter_1,char parameter_2);
double v__handle_esc_csi_truecolor_cmyk( long parameter_1,double parameter_2);
void v__handle_esc_csi_truecolor_cmy( char parameter_1,double parameter_2);
short v__approximate_truecolor_rgb( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
float v__csi_truecolor_arg_get( unsigned int parameter_1);
short v__handle_esc_csi_truecolor_rgb( char parameter_1,double parameter_2);
float v__handle_esc_csi_color_set( int parameter_1,int parameter_2);
void v_termpty_cursor_copy( int parameter_1,int parameter_2);
short v__switch_to_alternative_screen( short parameter_1,int parameter_2);
short v__move_cursor_to_origin( int parameter_1);
short v__pty_size( double parameter_1);
double v__limit_coord( int parameter_1);
char v__check_screen_info( short parameter_1,long parameter_2);
short v__termpty_line_rewrap( char parameter_1,double parameter_2,int parameter_3,char parameter_4,double parameter_5);
long v__backlog_remove_latest_nolock();
int v_termpty_save_extract( long parameter_1);
short v__termpty_line_is_empty( float parameter_1,char parameter_2);
void v_termpty_screen_swap( short parameter_1);
void v_termpty_resize( double parameter_1,int parameter_2,int parameter_3);
double v_termio_win_get( int parameter_1);
unsigned int v__handle_esc_csi_reset_mode( long parameter_1,int parameter_2,double parameter_3,int uni_para);
char v__handle_esc_csi_cursor_pos_set( unsigned int parameter_1,long parameter_2,char parameter_3);
void v_termpty_text_scroll_rev( float parameter_1,double parameter_2);
void v_termpty_clear_line( unsigned int parameter_1,int parameter_2,int parameter_3);
void v_termpty_clear_screen( short parameter_1,short parameter_2,int uni_para);
void v_termpty_cell_codepoint_att_fill( char parameter_1,int parameter_2,int parameter_3,double parameter_4,int parameter_5);
int v__termpty_charset_trans( char parameter_1,long parameter_2);
void v_termio_content_change( int parameter_1,short parameter_2,long parameter_3,int parameter_4,int uni_para);
void v_termpty_text_append( unsigned int parameter_1,float parameter_2,int parameter_3);
double v__csi_arg_get( float parameter_1);
float v__handle_esc_csi( int parameter_1,short parameter_2,short parameter_3,int uni_para);
short v__safechar( unsigned int parameter_1);
int v__handle_esc( short parameter_1,long parameter_2,long parameter_3,int uni_para);
void v_termpty_cell_fill( char parameter_1,char parameter_2,short parameter_3,int parameter_4);
void v_termpty_cells_fill( char parameter_1,float parameter_2,char parameter_3,int parameter_4);
void v_termpty_cells_clear( float parameter_1,int parameter_2,int parameter_3);
short v__tooltip_del(double parameter_2);
unsigned int v__tooltip_content(short parameter_2,short parameter_3);
void v_MD5Final( double parameter_1,float parameter_2);
void v_MD5Transform( int parameter_1,double parameter_2);
void v_byteReverse( char parameter_1,int parameter_2);
void v_MD5Update( short parameter_1,char parameter_2,short parameter_3);
void v_MD5Init( double parameter_1);
void v_gravatar_tooltip( long parameter_1,long parameter_2,char parameter_3);
long v__cb_link_drag_done(int parameter_2);
double v__cb_link_drag_accept(unsigned int parameter_2,short parameter_3);
unsigned int v__cb_link_drag_move(short parameter_2,short parameter_3,float parameter_4,char parameter_5);
double v__cb_link_icon_new(int parameter_2,float parameter_3,int parameter_4);
void v__cb_link_move(short parameter_2,short parameter_3);
double v__cb_link_up_delay();
unsigned int v__cb_link_up(short parameter_2,long parameter_3);
void v_term_focus( unsigned int parameter_1);
unsigned int v__term_is_focused( char parameter_1);
void v_term_unfocus( double parameter_1);
unsigned int v__cb_ctxp_del(short parameter_2,long parameter_3);
unsigned int v__cb_ctxp_dismissed(double parameter_2);
long v__cb_ctxp_link_copy(double parameter_2);
double v__screen_visual_bounds( char parameter_1);
void v__draw_cell( double parameter_1,double parameter_2,char parameter_3,float parameter_4);
char v__draw_line( short parameter_1,char parameter_2,short parameter_3,int parameter_4,short parameter_5);
int v_termpty_backlog_length( double parameter_1);
unsigned int v_termio_pty_get( int parameter_1);
float v_termio_textgrid_get( unsigned int parameter_1);
float v_miniview_colors_get( char parameter_1,short parameter_2);
long v__deferred_renderer();
void v__queue_render( unsigned int parameter_1);
void v_miniview_redraw();
long v__block_obj_del( float parameter_1);
float v__termpty_is_dblwidth_slow_get( unsigned int parameter_1,int parameter_2);
short v__termpty_is_dblwidth_get( double parameter_1,int parameter_2);
void v_term_preedit_str_get( float parameter_1);
int v_media_get( unsigned int parameter_1);
void v__smart_media_clicked(int parameter_2);
char v_media_control_get( unsigned int parameter_1);
float v__smart_media_stop(char parameter_2);
int v__smart_media_pause(float parameter_2);
unsigned int v__smart_media_play(long parameter_2);
char v__smart_media_del(char parameter_2,long parameter_3);
void v_media_visualize_set( char parameter_1,short parameter_2);
void v_media_mute_set( unsigned int parameter_1,short parameter_2);
void v_media_volume_set( unsigned int parameter_1,double parameter_2);
long v__cb_media_vol(double parameter_2,float parameter_3,int parameter_4);
double v__cb_media_pos(int parameter_2,short parameter_3,char parameter_4);
short v__cb_media_pos_drag_stop(long parameter_2,short parameter_3,unsigned int parameter_4);
int v__cb_media_pos_drag_start(long parameter_2,char parameter_3,int parameter_4);
void v_media_stop( double parameter_1);
char v__cb_media_stop(float parameter_2,int parameter_3,int parameter_4);
void v__cb_media_pause(int parameter_2,double parameter_3,float parameter_4);
void v_media_play_set( unsigned int parameter_1,int parameter_2);
unsigned int v__cb_media_play(double parameter_2,int parameter_3,char parameter_4);
void v_media_position_set( int parameter_1,double parameter_2);
double v__cb_mov_ref(unsigned int parameter_2);
char v__cb_mov_progress(unsigned int parameter_2);
double v__cb_mov_restart();
long v__cb_mov_decode_stop(int parameter_2);
long v__cb_mov_len_change(unsigned int parameter_2);
int v__cb_mov_frame_resize(float parameter_2);
char v__cb_mov_frame_decode(long parameter_2);
short v__type_mov_init( double parameter_1);
short v__cb_edje_preloaded(unsigned int parameter_2,long parameter_3,unsigned int parameter_4);
double v__type_edje_init( unsigned int parameter_1);
unsigned int v__type_scale_init( long parameter_1);
short v__cb_img_frame(int uni_para);
double v__type_img_anim_handle( char parameter_1,int uni_para);
double v__cb_img_preloaded(short parameter_2,double parameter_3);
int v__type_img_init( short parameter_1,int uni_para);
short v__url_compl_cb(int parameter_2,int uni_para);
char v__url_prog_cb(int parameter_2);
void v__type_thumb_calc( double parameter_1,unsigned int parameter_2,short parameter_3,char parameter_4,unsigned int parameter_5);
long v__type_mov_calc( double parameter_1,float parameter_2,double parameter_3,long parameter_4,double parameter_5);
float v__type_edje_calc( double parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5);
char v__type_img_calc( double parameter_1,float parameter_2,double parameter_3,int parameter_4,float parameter_5);
float v__cb_scale_preloaded(int parameter_2,float parameter_3);
long v__type_scale_calc( int parameter_1,char parameter_2,char parameter_3,char parameter_4,unsigned int parameter_5);
void v__unsmooth_timeout();
long v__smooth_handler( int parameter_1);
void v__smart_calculate( long parameter_1);
float v__smart_move( short parameter_1,unsigned int parameter_2,char parameter_3);
void v__smart_resize( char parameter_1,short parameter_2,short parameter_3);
int v__smart_del( short parameter_1);
int v__smart_add( short parameter_1);
int v__smart_init();
double v_media_add( char parameter_1,double parameter_2,long parameter_3,int parameter_4,char parameter_5,int uni_para);
unsigned int v__block_media_activate( float parameter_1,float parameter_2,int uni_para);
char v__block_edje_message_cb(unsigned int parameter_2,int parameter_3,int parameter_4);
void v_termpty_write( short parameter_1,float parameter_2,int parameter_3);
void v__block_edje_signal_cb(float parameter_2,float parameter_3,int parameter_4);
void v_termpty_block_chid_update( int parameter_1,char parameter_2);
long v__block_edje_cmds( long parameter_1,char parameter_2,short parameter_3,double parameter_4);
char v_homedir_get( char parameter_1,int parameter_2);
long v__block_edje_activate( short parameter_1,double parameter_2);
int v__block_activate( char parameter_1,int parameter_2,int uni_para);
long v_termpty_block_get( char parameter_1,int parameter_2);
int v_termpty_block_id_get( unsigned int parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( short parameter_1,int parameter_2);
unsigned int v__smart_apply( int parameter_1,int uni_para);
short v__smart_cb_change(int uni_para);
unsigned int v__smart_update_queue( int parameter_1,double parameter_2,int uni_para);
short v__lost_selection_reset_job();
int v__lost_selection(char parameter_2,int uni_para);
void v__take_selection_text( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,int uni_para);
char v__cb_ctxp_link_content_copy(short parameter_2,int uni_para);
void v_ty_sb_free();
void v_ty_sb_steal_buf();
int v_codepoint_to_utf8( short parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( double parameter_1);
int v_ty_sb_add( short parameter_1,unsigned int parameter_2,double parameter_3);
double v__termpty_cellrow_from_beacon_get( double parameter_1,int parameter_2,char parameter_3);
float v_termpty_cellrow_get( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
void v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,short parameter_7);
float v__cb_ctxp_link_open(unsigned int parameter_2);
float v__should_inline( short parameter_1);
void v_link_is_email( int parameter_1);
unsigned int v_link_is_protocol( double parameter_1);
long v_link_is_url( long parameter_1);
unsigned int v__activate_link( double parameter_1,double parameter_2);
long v__cb_ctxp_link_preview(long parameter_2);
unsigned int v__is_fmt( char parameter_1,unsigned int parameter_2);
long v_media_src_type_get( float parameter_1);
float v__mouse_in_selection( long parameter_1,int parameter_2,int parameter_3);
float v__smart_xy_to_cursor( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4,int parameter_5);
float v__cb_link_down(double parameter_2,char parameter_3,int uni_para);
long v_main_term_popup_exists( short parameter_1);
char v__update_link( float parameter_1,char parameter_2,int parameter_3,double parameter_4,int uni_para);
float v__remove_links( int parameter_1,unsigned int parameter_2,int uni_para);
float v__sel_set( int parameter_1,long parameter_2);
int v_termio_scroll_get( int parameter_1);
void v_miniview_position_offset( short parameter_1,int parameter_2,float parameter_3);
float v_term_miniview_get( float parameter_1);
void v_termio_scroll( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
short v_termpty_save_new( char parameter_1,int parameter_2);
int v_termpty_save_expand( long parameter_1,short parameter_2,double parameter_3);
float v__termpty_cell_is_empty( long parameter_1);
unsigned int v_termpty_line_length( unsigned int parameter_1,int parameter_2);
short v_verify_beacon( short parameter_1,int parameter_2);
void v_termpty_text_save_top( short parameter_1,long parameter_2,short parameter_3);
void v_termpty_text_scroll( char parameter_1,long parameter_2);
void v_termpty_text_scroll_test( float parameter_1,char parameter_2);
double v__cursor_to_start_of_line( short parameter_1);
float v__tab_forward( float parameter_1,int parameter_2);
unsigned int v__handle_cursor_control( double parameter_1,short parameter_2);
int v_termpty_handle_seq( short parameter_1,long parameter_2,int parameter_3,int uni_para);
void v_termpty_handle_buf( short parameter_1,short parameter_2,int parameter_3,int uni_para);
void v_theme_reload( int parameter_1);
float v_theme_reload_cb(float parameter_2,int parameter_3,unsigned int parameter_4);
void v_theme_auto_reload_enable( char parameter_1);
double v__cursor_shape_to_group_name( short parameter_1);
void v_config_theme_path_default_get( char parameter_1);
float v_theme_path_get();
unsigned int v_config_theme_path_get( short parameter_1);
char v_theme_apply( unsigned int parameter_1,float parameter_2,short parameter_3);
void v_termio_set_cursor_shape( short parameter_1,unsigned int parameter_2);
void v_termpty_clear_tabs_on_screen();
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( char parameter_1,unsigned int parameter_2);
unsigned int v__ts_free();
void v_termpty_save_free( int parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( double parameter_1);
void v_termpty_reset_att( double parameter_1);
float v_termio_config_get();
void v_termpty_reset_state();
void v_termpty_resize_tabs( double parameter_1,int parameter_2,int parameter_3);
char v__termpty_init();
unsigned int v__add_default_keys();
void v_colors_standard_get( int parameter_1,int parameter_2,char parameter_3,char parameter_4,short parameter_5,double parameter_6);
char v_config_new();
unsigned int v__termpty_shutdown( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_2;
	return unsigned_int_1;
}
void v_termpty_text_scroll_rev_test( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		v_termpty_text_scroll_rev(float_3,double_1);

		double_4 = double_2 + double_3;
		int_2 = int_1 * int_1;
		float_3 = float_1 + float_1;
	}
}
char v__handle_esc_dcs( long parameter_1,short parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	float_2 = float_1 + float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "2=") < 0)
	{
		char char_2 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					unsigned int unsigned_int_2 = 1;
					unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				}
				if(1)
				{
					char char_3 = 1;
					char_3 = char_1 + char_2;
				}
			}
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			v_termpty_write(short_1,float_1,int_1);

			float_4 = float_3 * float_4;
		}
		if(1)
		{
			char_1 = char_2;
		}
		if(1)
		{
		}
		if(1)
		{
			short_1 = v__safechar(unsigned_int_1);

			char_2 = char_1 * char_2;
		}
		if(1)
		{
			short_1 = short_1 + short_2;
		}
	}
	if(1)
	{
		if(1)
		{
			short_2 = short_1;
		}
	}
	return char_1;
}
long v__handle_op_a( long parameter_1,long parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_1;
	return long_1;
}
long v__termpty_ext_handle( long parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int_2 = int_1 * int_1;
	long_1 = v__handle_op_a(long_1,long_2,unsigned_int_1);

	short_1 = short_1 * short_2;
	return long_3;
}
void v__handle_esc_terminology( char parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_2;
	float_1 = v_termio_config_get();

	long_1 = v__termpty_ext_handle(long_1,int_2,double_1);

}
float v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int_1 = int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "-=") < 0)
	{
		int_1 = int_1 * int_1;
	}
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_1 + double_1;
	double_1 = double_2 * double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_3 = float_1 + float_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	long_4 = long_4;
	double_2 = double_3 * double_4;
	float_4 = float_3;
	return float_5;
}
int v__smart_calculate_226( float parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1;
	double_1 = double_1;
	int_3 = int_1 + int_2;
	short_3 = short_1 * short_2;
	float_1 = float_2;
	char_1 = char_2;
	double_1 = double_1 + double_1;
	float_3 = float_3 + float_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_3;
}
double v__smart_size( unsigned int parameter_1,int parameter_2,int parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int_1 = int_2;
	long_1 = long_1 * long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "P1") > 0)
	{
		short short_2 = 1;
		short_1 = short_2;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "E") > 0)
		{
		}
	}
	double_1 = double_3 + double_2;
	double_4 = double_3 + double_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	short_1 = short_3 + short_3;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2;
	}
	float_1 = v__sel_set(int_2,long_2);

	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	char_3 = char_3;
	unsigned_int_2 = v__smart_apply(int_1,-1 );

	double_5 = double_2 * double_3;
	v_termpty_resize(double_6,int_1,int_2);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_6 * double_7;
	return double_2;
	int_3 = v__smart_calculate_226(float_2);

}
void v_colors_term_init( long parameter_1,char parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		unsigned int unsigned_int_4 = 1;
		long_2 = long_1 + long_2;
		if(1)
		{
			long_3 = long_1 + long_3;
			double_3 = double_1 * double_2;
			double_1 = double_1 * double_3;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_2;
			if(1)
			{
				double double_5 = 1;
				double_4 = double_1 + double_1;
				unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
				int_2 = int_1 * int_1;
				double_5 = double_5 * double_4;
				unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			}
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double double_6 = 1;
			double_4 = double_6 * double_3;
			if(1)
			{
				long long_4 = 1;
				long_4 = long_2 * long_3;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			char char_3 = 1;
			char_2 = char_1 + char_3;
			if(1)
			{
				double_4 = double_2 * double_3;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char char_4 = 1;
		double_1 = double_1 + double_3;
		if(1)
		{
			float float_3 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_6 = 1;
			float_3 = float_2 * float_3;
			int_3 = int_1 + int_1;
			int_2 = int_2 + int_3;
			unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
			unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
		}
		char_4 = char_1 * char_4;
	}
}
void v_termio_config_update( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_2 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_6 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double_1 = double_1 + double_1;
	long_1 = long_1;
	long_3 = long_2 * long_3;
	double_1 = double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	v_colors_term_init(long_4,char_1,float_1);

	double_1 = v__smart_size(unsigned_int_3,int_1,int_1,double_2);

	double_1 = double_2;
	if(1)
	{
		char_1 = char_2 + char_1;
		long_1 = long_5 + long_1;
	}
	if(1)
	{
		double_1 = double_2 * double_2;
	}
	v_termpty_backlog_size_set(char_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3;
	long_5 = long_6 * long_3;
	float_1 = float_1 + float_2;
	int_3 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_3;
	int_1 = int_1 * int_1;
	if(1)
	{
		int_1 = int_4;
	}
	if(1)
	{
		double double_4 = 1;
		v_termio_set_cursor_shape(short_1,unsigned_int_1);

		double_4 = double_1 + double_3;
	}
	int_4 = int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_4 = int_3 + int_2;
	double_6 = double_1 + double_5;
	char_4 = char_2 * char_3;
}
void v__font_size_set( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float_1 = float_1 + float_1;
	float_1 = float_2;
	v_termio_config_update(int_1);

	short_2 = short_1 * short_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3 + short_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_1 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		long_1 = long_2;
		int_1 = int_1 + int_1;
		double_4 = double_3 + double_2;
	}
}
void v_termio_font_size_set( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v__font_size_set(char_1,int_1);

	double_1 = double_1 * double_2;
}
double v__handle_xterm_50_command( short parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	v_termio_font_size_set(short_1,int_1);

	float_1 = float_2;
	return double_1;
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
short v__xterm_parse_color( char parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	long_1 = long_1 * long_1;
	short_1 = short_1 + short_1;
	if(1)
	{
		double_1 = double_2;
	}
	float_2 = float_1 + float_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		int int_4 = 1;
		int int_6 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		}
		int_5 = int_2 * int_4;
		int_4 = int_1 + int_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		int_6 = int_1 * int_3;
		float_4 = float_2 * float_3;
		if(1)
		{
			float_6 = float_3 + float_5;
		}
		float_3 = float_5;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			float float_7 = 1;
			float_6 = float_5 + float_7;
		}
		long_3 = long_1 + long_2;
		double_1 = double_2 + double_3;
		if(1)
		{
			double_3 = double_1 * double_2;
		}
		int_1 = int_4 * int_2;
		short_1 = short_2 + short_1;
		if(1)
		{
			short_3 = short_1 + short_2;
		}
		long_4 = long_2 * long_4;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short short_4 = 1;
		short short_5 = 1;
		float float_8 = 1;
		float float_9 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			double_3 = double_3 * double_3;
		}
		unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
		short_2 = short_4 * short_5;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		}
		float_8 = float_9;
		double_4 = double_1 + double_4;
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			double_6 = double_5 * double_5;
		}
		int_5 = int_2 * int_5;
	}
	if(1)
	{
		double double_7 = 1;
		double_7 = double_1 * double_2;
	}
	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	return short_1;
	double_4 = v__eina_unicode_to_hex(short_3);

}
short v__xterm_arg_get( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	char char_1 = 1;
	float float_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	long_2 = long_1 * long_1;
	long_3 = long_2;
	int_1 = int_1 * int_1;
	double_1 = double_2;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	float_3 = float_1 + float_1;
	short_1 = short_1;
	double_5 = double_3 + double_5;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_2 * int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	float_4 = float_3 * float_1;
	float_4 = float_1;
	char_1 = char_1 * char_1;
	float_4 = float_3;
	float_5 = float_2 * float_1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	int_1 = int_1 * int_4;
	return short_1;
}
double v__handle_esc_xterm( long parameter_1,float parameter_2,short parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	float float_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	long long_4 = 1;
	float float_5 = 1;
	char char_4 = 1;
	float float_6 = 1;
	float float_7 = 1;
	float float_8 = 1;
	float float_9 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_6 = 1;
	float float_10 = 1;
	v_termpty_write(short_1,float_1,int_1);

	double_1 = double_1;
	short_1 = short_1 + short_2;
	double_1 = double_2;
	long_3 = long_1 + long_2;
	int_2 = int_1 + int_1;
	float_2 = v_termio_config_get();

	short_3 = short_1 * short_3;
	if(1)
	{
		char char_2 = 1;
		float_1 = v__handle_xterm_777_command(char_1,char_1,int_2);

		char_3 = char_1 + char_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_4 = float_3 * float_2;
	double_3 = v__handle_xterm_50_command(short_3,char_3,int_2);

	long_4 = long_1 * long_1;
	if(1)
	{
		float_5 = float_4 * float_3;
	}
	double_3 = double_1 * double_3;
	if(1)
	{
		char_4 = char_4 * char_1;
	}
	int_2 = int_2 + int_1;
	float_2 = float_2;
	float_7 = float_6 + float_7;
	float_9 = float_3 + float_8;
	short_1 = v__xterm_arg_get(long_4);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		short_3 = short_3;
	}
	if(1)
	{
		long long_5 = 1;
		short_1 = v__xterm_parse_color(char_5,short_2,char_6,unsigned_int_4,int_3);

		double_4 = double_2 * double_1;
		long_6 = long_5 * long_1;
		float_4 = float_1 * float_9;
	}
	if(1)
	{
		long_4 = long_6 + long_3;
	}
	if(1)
	{
		double_3 = double_3 + double_1;
	}
	float_8 = float_9;
	double_1 = double_3 + double_1;
	if(1)
	{
		char char_7 = 1;
		float_10 = v_termio_textgrid_get(unsigned_int_4);

		char_7 = char_4 + char_4;
	}
	if(1)
	{
		long long_7 = 1;
		long_2 = long_7 * long_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		float_8 = float_10 + float_9;
	}
	if(1)
	{
		double_4 = double_2 + double_1;
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_2 + double_2;
	}
	float_5 = float_6 * float_6;
	double_1 = double_1 * double_3;
	return double_4;
}
void v_termpty_cells_set_content( short parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_1 = double_1 + double_2;
		double_4 = double_3 + double_2;
	}
}
long v__handle_esc_csi_decera( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_2;
	double_1 = v__csi_arg_get(float_1);

	short_1 = short_2;
	int_2 = int_2 + int_2;
	char_1 = char_1 + char_2;
	long_1 = long_1 * long_2;
	double_2 = v__clean_up_rect_coordinates(float_1,int_2,int_3,int_1,int_4);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_6 = 1;
		char_2 = char_2 + char_2;
		v_termpty_cells_set_content(short_2,char_3,int_5,int_3);

		int_6 = int_2 + int_6;
	}
	return long_2;
}
void v_termpty_cells_att_fill_preserve_colors( long parameter_1,float parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_3 = double_1 + double_2;
	short_3 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long_1 = long_1;
		int_1 = int_2;
		int_2 = int_1 + int_2;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "S*") < 0)
		{
			float float_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			float_1 = float_1 * float_1;
			int_2 = int_3 + int_4;
			float_1 = float_1 * float_2;
			double_5 = double_1 + double_4;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_6 = double_4 + double_5;
		}
	}
}
double v__clean_up_rect_coordinates( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_1 + double_1;
	int_1 = int_4 + int_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	}
	double_1 = double_2 + double_2;
	int_5 = int_4;
	if(1)
	{
		int_3 = int_6 * int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
		if(1)
		{
			char_2 = char_1 * char_1;
		}
	}
	if(1)
	{
		int_2 = int_6 + int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
		if(1)
		{
			int_4 = int_6 + int_1;
		}
	}
	double_3 = double_1 + double_3;
	if(1)
	{
		int_4 = int_6 + int_6;
	}
	if(1)
	{
	}
	int_6 = int_5;
	int_3 = int_5 + int_3;
	char_2 = char_2 * char_1;
	double_1 = double_2 + double_1;
	return double_2;
}
double v__handle_esc_csi_decfra( int parameter_1,float parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float_1 = float_1;
	char_1 = char_1 * char_1;
	double_1 = v__csi_arg_get(float_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	long_2 = long_1 + long_2;
	double_3 = double_2 * double_3;
	int_2 = int_3 + int_4;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = v__clean_up_rect_coordinates(float_1,int_2,int_2,int_2,int_1);

	int_5 = int_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		v_termpty_cells_att_fill_preserve_colors(long_3,float_1,float_2,int_2);

		short_2 = short_1 * short_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	return double_2;
}
short v__handle_esc_csi_decslrm( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short_1 = v__move_cursor_to_origin(int_1);

	int_3 = int_1 * int_2;
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	float_2 = float_1 + float_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_4 = float_1 + float_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	float_1 = float_4 * float_1;
	double_1 = double_1 * double_2;
	double_2 = v__csi_arg_get(float_5);

	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	int_4 = int_4 * int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	return short_3;
}
long v__handle_esc_csi_decstbm( char parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_1 = v__csi_arg_get(float_1);

	short_1 = short_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2;
	}
	double_1 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	char_2 = char_1 * char_2;
	short_1 = v__move_cursor_to_origin(int_2);

	unsigned_int_4 = unsigned_int_3;
	return long_1;
}
short v__handle_esc_csi_decscusr( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	short short_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	int_1 = int_3 * int_4;
	short_1 = short_1 * short_1;
	double_2 = double_1 * double_1;
	v_termio_set_cursor_shape(short_1,unsigned_int_1);

	char_1 = char_1;
	short_2 = short_2 * short_3;
	char_1 = char_2 * char_3;
	short_1 = short_1 + short_3;
	short_4 = short_1;
	double_2 = v__csi_arg_get(float_1);

	short_5 = short_3 * short_4;
	short_1 = short_2 * short_1;
	double_4 = double_2 + double_3;
	int_3 = int_2 * int_4;
	return short_3;
}
long v__handle_esc_csi_dsr( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	double_1 = v__csi_arg_get(float_1);

	int_2 = int_3 * int_3;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		v_termpty_write(short_1,float_2,int_2);

		float_1 = float_2 * float_1;
		float_2 = float_1;
		int_3 = int_2 * int_2;
		int_2 = int_1;
		double_1 = double_1 * double_2;
		short_1 = short_1 * short_1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_1 + double_1;
		double_1 = double_1 + double_1;
		double_4 = double_2 + double_3;
		char_1 = char_1 * char_2;
		long_2 = long_1 + long_1;
	}
	return long_1;
}
double v__handle_esc_csi_truecolor_cmyk( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 + double_2;
	char_2 = char_1 * char_1;
	char_1 = char_3 * char_2;
	int_2 = int_1 * int_1;
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	char_3 = char_2 + char_1;
	short_1 = v__approximate_truecolor_rgb(int_3,int_2,int_4,int_3);

	char_3 = char_1 + char_1;
	int_2 = int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	float_1 = v__csi_truecolor_arg_get(unsigned_int_3);

	char_3 = char_1 + char_2;
	return double_1;
}
void v__handle_esc_csi_truecolor_cmy( char parameter_1,double parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	float_1 = v__csi_truecolor_arg_get(unsigned_int_1);

	int_1 = int_1 + int_2;
	double_1 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = v__approximate_truecolor_rgb(int_2,int_1,int_2,int_3);

	long_2 = long_1 * long_1;
	if(1)
	{
	}
	long_2 = long_1;
	char_2 = char_1 * char_1;
	int_3 = int_4;
}
short v__approximate_truecolor_rgb( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "D") > 0)
		{
			int int_4 = 1;
			float_1 = v_termio_textgrid_get(unsigned_int_4);

			int_1 = int_4;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 * char_1;
			}
		}
	}
	return short_1;
}
float v__csi_truecolor_arg_get( unsigned int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
short v__handle_esc_csi_truecolor_rgb( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	float_1 = v__csi_truecolor_arg_get(unsigned_int_2);

	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short_1 = v__approximate_truecolor_rgb(int_3,int_4,int_2,int_4);

		long_1 = long_1 + long_1;
		char_3 = char_1 + char_2;
		char_4 = char_1;
	}
	if(1)
	{
	}
	return short_2;
}
float v__handle_esc_csi_color_set( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short_1 = v__handle_esc_csi_truecolor_rgb(char_1,double_1);

	v__handle_esc_csi_truecolor_cmy(char_1,double_1);

	int_2 = int_1 + int_1;
	double_2 = v__csi_arg_get(float_1);

	v_termpty_reset_att(double_2);

	double_2 = v__handle_esc_csi_truecolor_cmyk(long_1,double_3);

	int_2 = int_2 * int_3;
	return float_2;
}
void v_termpty_cursor_copy( int parameter_1,int parameter_2)
{
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		short_2 = short_1 + short_2;
		double_1 = double_1;
	}
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1 * int_1;
		char_2 = char_1 * char_1;
		char_3 = char_2;
		unsigned_int_1 = unsigned_int_2;
	}
}
short v__switch_to_alternative_screen( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return short_1;
	v_termpty_screen_swap(short_2);

}
short v__move_cursor_to_origin( int parameter_1)
{
	short short_1 = 1;
	if(1)
	{
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		short_2 = short_1 * short_1;
		double_1 = double_1 + double_2;
		char_2 = char_1 + char_2;
		double_2 = double_2 + double_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float_3 = float_1 * float_2;
		float_4 = float_2 + float_1;
	}
	return short_1;
}
short v__pty_size( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_2;
	long_2 = long_1 * long_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_2;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 * int_3;
	}
	return short_2;
}
double v__limit_coord( int parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_2;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 * int_2;
	double_2 = double_1 * double_2;
	return double_1;
}
char v__check_screen_info( short parameter_1,long parameter_2)
{
	float float_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	if(1)
	{
		float float_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		float_1 = float_1 * float_2;
		short_2 = short_1 + short_2;
		unsigned_int_1 = unsigned_int_1;
		v_termpty_cells_clear(float_2,int_1,int_2);

		float_1 = float_2 * float_1;
		short_2 = short_2 * short_2;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 * long_1;
		}
		float_3 = float_2 + float_2;
	}
	return char_1;
	v_termpty_text_save_top(short_2,long_2,short_3);

}
short v__termpty_line_rewrap( char parameter_1,double parameter_2,int parameter_3,char parameter_4,double parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1 * long_2;
	char_1 = char_1 * char_1;
	char_2 = v__check_screen_info(short_1,long_3);

	float_2 = float_1 + float_2;
	return short_1;
}
long v__backlog_remove_latest_nolock()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	short_1 = v_verify_beacon(short_2,int_1);

	double_1 = double_1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 * int_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	int_3 = int_1 * int_4;
	return long_1;
	v_termpty_save_free(int_4);

}
int v_termpty_save_extract( long parameter_1)
{
	int int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "a") == 0)
	{
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long_1 = long_1;
			float_1 = float_1;
			double_3 = double_1 + double_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			char_2 = char_1 + char_2;
			if(1)
			{
			}
			long_2 = long_1 + long_1;
			float_1 = float_2 + float_3;
			short_2 = short_1 * short_1;
			if(1)
			{
				short short_3 = 1;
				short_3 = short_2 + short_2;
			}
		}
	}
	return int_1;
}
short v__termpty_line_is_empty( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
		if(1)
		{
		}
	}
	return short_3;
	float_1 = v__termpty_cell_is_empty(long_1);

}
void v_termpty_screen_swap( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short_2 = short_1 * short_1;
	float_1 = float_1;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	long_1 = long_1 + long_2;
	double_3 = double_1 * double_1;
	short_3 = short_1 + short_2;
	if(1)
	{
		double_2 = double_1 * double_3;
	}
}
void v_termpty_resize( double parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_3 = 1;
	int int_8 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double double_6 = 1;
	int int_11 = 1;
	char char_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	short_1 = v__termpty_line_is_empty(float_1,char_1);

	int_1 = int_1;
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
	}
	int_4 = int_2 + int_3;
	if(1)
	{
		int_4 = v_termpty_save_extract(long_1);

		double_1 = double_1 * double_2;
		short_2 = v_verify_beacon(short_1,int_5);

		int_4 = int_6 + int_7;
	}
	v_termpty_screen_swap(short_3);

	int_2 = int_8 + int_5;
	if(1)
	{
		float_2 = float_2 + float_3;
	}
	int_6 = int_5;
	float_1 = float_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_1 * char_2;
	v_termpty_resize_tabs(double_2,int_2,int_4);

	char_1 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_1 + long_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
			short_1 = v__pty_size(double_3);

			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
	}
	double_2 = double_4;
	if(1)
	{
		long_3 = v__backlog_remove_latest_nolock();

		int_8 = int_3 * int_7;
	}
	int_2 = int_1 * int_1;
	if(1)
	{
		long_3 = long_2 * long_2;
		int_2 = int_7 * int_8;
		short_2 = short_2 * short_3;
		if(1)
		{
			char char_3 = 1;
			double double_5 = 1;
			short short_4 = 1;
			int_3 = int_3 + int_9;
			char_3 = char_1 + char_1;
			double_3 = double_1 + double_3;
			int_10 = int_5 + int_5;
			if(1)
			{
				double_4 = double_4 * double_4;
			}
			double_6 = double_5 * double_2;
			float_1 = float_3 * float_1;
			short_2 = v__termpty_line_rewrap(char_1,double_6,int_11,char_2,double_6);

			short_3 = short_1 * short_4;
			char_4 = char_2 * char_2;
			float_5 = float_4 + float_5;
			int_8 = int_6 * int_9;
			int_11 = int_4;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_7 = 1;
		long long_4 = 1;
		float_7 = float_6 + float_3;
		long_4 = long_2 + long_4;
		int_6 = int_8 + int_7;
		long_2 = long_3 + long_3;
	}
	v_termpty_backlog_lock();

	float_2 = float_5 + float_3;
	unsigned_int_5 = v_termpty_line_length(unsigned_int_3,int_7);

	int_6 = int_1 + int_1;
	double_7 = double_4 * double_2;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
	double_7 = double_7;
	double_2 = double_1 * double_3;
	float_4 = float_2 * float_6;
	char_1 = char_4 + char_4;
	if(1)
	{
		int_10 = int_2;
	}
	double_3 = v__limit_coord(int_8);

	short_5 = short_3 + short_1;
	int_8 = int_7;
	float_3 = float_3 * float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	short_3 = short_1 + short_1;
	int_5 = int_2 * int_1;
	float_2 = float_4;
	v_termpty_backlog_unlock();

	int_9 = int_3 + int_8;
}
double v_termio_win_get( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_2 = char_1 + char_2;
	double_3 = double_1 * double_2;
	return double_4;
}
unsigned int v__handle_esc_csi_reset_mode( long parameter_1,int parameter_2,double parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_termpty_clear_screen(short_1,short_2,uni_para);

	int_1 = int_1 * int_2;
	int_3 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_3;
}
char v__handle_esc_csi_cursor_pos_set( unsigned int parameter_1,long parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double_1 = double_2;
	int_1 = int_1 * int_2;
	float_2 = float_1 + float_1;
	double_3 = double_3 * double_3;
	float_1 = float_2 + float_1;
	int_1 = int_3;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		int_1 = int_2 * int_1;
		if(1)
		{
			float float_3 = 1;
			float_3 = float_2 + float_3;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	short_3 = short_1 + short_1;
	char_1 = char_1 * char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_1;
		if(1)
		{
			double_3 = double_1 * double_3;
		}
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	double_2 = v__csi_arg_get(float_2);

	long_1 = long_1 * long_1;
	return char_1;
}
void v_termpty_text_scroll_rev( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	int_2 = int_1 + int_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long_1 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	v_termpty_cells_clear(float_1,int_2,int_1);

	char_3 = char_1 + char_2;
	long_1 = long_3 * long_1;
	if(1)
	{
		int int_3 = 1;
		char char_4 = 1;
		int_3 = int_2 + int_1;
		if(1)
		{
			double_1 = double_1 + double_1;
		}
		v_termio_scroll(double_1,int_1,int_2,int_4);

		char_1 = char_4 + char_3;
		if(1)
		{
			char_1 = char_1 + char_4;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			int int_5 = 1;
			long_1 = long_2 + long_1;
			double_4 = double_1 * double_3;
			int_4 = int_5 + int_4;
		}
		if(1)
		{
			short_1 = short_2 * short_2;
		}
	}
}
void v_termpty_clear_line( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	v_termio_content_change(int_1,short_1,long_1,int_1,-1 );

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	long_3 = long_2 * long_1;
	float_2 = float_2 * float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	v_termpty_cells_clear(float_1,int_1,int_2);

	int_4 = int_3 * int_2;
	float_2 = float_2 * float_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	long_4 = long_3 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
}
void v_termpty_clear_screen( short parameter_1,short parameter_2,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	char controller4vul_952[3];
	fgets(controller4vul_952 ,3 ,stdin);
	if( strcmp( controller4vul_952, "]y") < 0)
	{
		v_termio_content_change(int_1,short_1,long_1,int_2,uni_para);

		int_3 = int_3 + int_4;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 + long_3;
	}
	char_3 = char_1 + char_2;
	int_1 = int_2;
	int_5 = int_4 * int_5;
	int_3 = int_5;
}
void v_termpty_cell_codepoint_att_fill( char parameter_1,int parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_3 = double_1 * double_2;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		short short_1 = 1;
		int_1 = int_1 + int_1;
		short_1 = short_1;
	}
}
int v__termpty_charset_trans( char parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	if(1)
	{
	}
	long_1 = long_2;
	if(1)
	{
	}
	double_1 = double_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		double double_3 = 1;
		if(1)
		{
			double_4 = double_2 + double_3;
		}
		if(1)
		{
			double_2 = double_4 + double_3;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			int_1 = int_2 + int_3;
		}
		if(1)
		{
			double_2 = double_4 * double_1;
		}
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 * short_2;
		}
	}
	return int_1;
}
void v_termio_content_change( int parameter_1,short parameter_2,long parameter_3,int parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	double_1 = double_1 + double_2;
	short_1 = short_1 + short_1;
	int_1 = int_2;
	double_1 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_2;
	char controller4vul_953[2];
	fgets(controller4vul_953 ,2 ,stdin);
	if( strcmp( controller4vul_953, "<") > 0)
	{
		float_1 = v__remove_links(int_1,unsigned_int_2,uni_para);

		int_1 = int_2 * int_2;
		char_1 = char_1 + char_2;
		int_3 = int_2 + int_3;
		long_1 = long_1 + long_1;
		double_2 = double_1 + double_1;
		double_2 = double_1 + double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_2 = int_3 * int_2;
			if(1)
			{
				float_2 = float_1 * float_1;
				double_4 = double_1;
			}
			float_1 = float_2 + float_1;
			float_3 = float_1 + float_1;
		}
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1;
	long_4 = long_2 + long_3;
	long_2 = long_2 + long_3;
	if(1)
	{
		double double_5 = 1;
		int_3 = int_2 * int_3;
		double_5 = double_3;
	}
	if(1)
	{
		int_3 = int_4 + int_3;
		double_4 = double_3 + double_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_4 = 1;
			double double_6 = 1;
			long_1 = long_1 * long_1;
			if(1)
			{
				float_3 = float_3 + float_2;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
			}
			unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
			double_2 = double_6;
		}
	}
	if(1)
	{
		short short_2 = 1;
		char_1 = char_2 + char_1;
		double_1 = double_1 * double_3;
		int_1 = int_1 + int_4;
		short_2 = short_2 + short_2;
		int_3 = int_3 * int_4;
		if(1)
		{
			int_4 = int_1 + int_2;
		}
	}
}
void v_termpty_text_append( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_1;
	int_3 = int_1 + int_2;
	v_termpty_text_scroll_test(float_1,char_1);

	char_4 = char_2 + char_3;
	int_2 = int_2 + int_1;
	if(1)
	{
		int_1 = int_4 * int_2;
	}
	v_termpty_cell_codepoint_att_fill(char_4,int_4,int_5,double_1,int_1);

	int_7 = int_1 + int_6;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_6 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_7 = 1;
		double double_4 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_4 = 1;
		short_1 = short_1;
		if(1)
		{
			char char_5 = 1;
			float float_2 = 1;
			char_5 = char_4 + char_4;
			char_2 = char_6;
			float_3 = float_2 + float_3;
			char_2 = char_2;
			float_2 = float_2 * float_2;
			char_3 = char_4 * char_2;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short_1 = short_1 * short_1;
			}
		}
		v_termio_content_change(int_5,short_1,long_1,int_3,-1 );

		short_2 = v__termpty_is_dblwidth_get(double_2,int_5);

		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			int int_8 = 1;
			int_8 = int_4 + int_3;
		}
		if(1)
		{
			if(1)
			{
				int_5 = int_2 * int_4;
			}
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		char_6 = char_7 + char_2;
		if(1)
		{
			char char_8 = 1;
			double double_3 = 1;
			char_1 = char_8 + char_2;
			double_3 = double_2 + double_1;
		}
		int_5 = v__termpty_charset_trans(char_2,long_1);

		int_5 = int_7 + int_5;
		if(1)
		{
			double_2 = double_1 + double_4;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			int int_9 = 1;
			float_5 = float_4 + float_3;
			float_4 = float_3;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
			}
			if(1)
			{
				int_4 = int_2 + int_9;
			}
			if(1)
			{
				int_9 = int_7;
				double_4 = double_1;
			}
		}
		if(1)
		{
			float_5 = float_4;
			int_2 = int_1;
			if(1)
			{
				int int_10 = 1;
				int_4 = int_10;
			}
			float_1 = float_5;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
				unsigned_int_4 = unsigned_int_4;
			}
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		}
	}
}
double v__csi_arg_get( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double_2 = double_1 + double_2;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
	long_3 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	}
	return double_2;
}
float v__handle_esc_csi( int parameter_1,short parameter_2,short parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = v__handle_esc_csi_reset_mode(long_1,int_1,double_1,uni_para);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_2 * double_2;
	return float_1;
}
short v__safechar( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	short_2 = short_1 + short_1;
	return short_1;
}
int v__handle_esc( short parameter_1,long parameter_2,long parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_4 = 1;
	long long_3 = 1;
	float float_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_4;
	if(1)
	{
	}
	int_1 = int_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_3 + unsigned_int_4;
	int_1 = int_2;
	double_2 = double_1 + double_1;
	char_1 = char_1 + char_1;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
	short_2 = short_1 * short_2;
	char_3 = char_2 * char_2;
	double_3 = double_2 * double_1;
	double_2 = double_2;
	float_1 = float_1 * float_1;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_7;
	float_1 = float_2 * float_1;
	unsigned_int_6 = unsigned_int_8 + unsigned_int_2;
	float_4 = float_3 * float_4;
	unsigned_int_7 = unsigned_int_9 + unsigned_int_8;
	char_3 = char_1 + char_3;
	double_1 = double_1 + double_4;
	unsigned_int_2 = unsigned_int_8;
	if(1)
	{
		double_1 = double_1 * double_4;
	}
	if(1)
	{
	}
	char_1 = char_2 * char_1;
	double_3 = double_1 * double_3;
	long_3 = long_1;
	if(1)
	{
	}
	float_5 = float_3 * float_4;
	int_4 = int_2 * int_3;
	if(1)
	{
	}
	long_4 = long_3 + long_1;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_7;
	if(1)
	{
	}
	int_4 = int_1 * int_5;
	double_4 = double_2 + double_3;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	char_3 = char_3 * char_3;
	if(1)
	{
	}
	char controller4vul_950[3];
	fgets(controller4vul_950 ,3 ,stdin);
	if( strcmp( controller4vul_950, "?C") < 0)
	{
		float float_6 = 1;
		int int_6 = 1;
		double double_5 = 1;
		double_1 = double_2 + double_4;
		int_2 = int_2;
		float_6 = float_3 + float_2;
		long_3 = long_3 + long_2;
		int_6 = int_6 * int_5;
		char controller4vul_951[2];
		fgets(controller4vul_951 ,2 ,stdin);
		if( strcmp( controller4vul_951, "I") < 0)
		{
			float_5 = v__handle_esc_csi(int_2,short_3,short_4,uni_para);

			double_4 = double_1 + double_5;
		}
		double_4 = double_5 + double_4;
		int_1 = int_4 * int_6;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "!") < 0)
		{
			double double_6 = 1;
			int int_7 = 1;
			double_6 = double_5 + double_5;
			double_6 = double_3 * double_6;
			int_7 = int_1;
		}
	}
	if(1)
	{
	}
	char_2 = char_3 * char_2;
	unsigned_int_7 = unsigned_int_8 + unsigned_int_5;
	float_7 = float_5 * float_3;
	int_1 = int_8 * int_4;
	unsigned_int_10 = unsigned_int_2 + unsigned_int_1;
	return int_2;
}
void v_termpty_cell_fill( char parameter_1,char parameter_2,short parameter_3,int parameter_4)
{
	float float_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long_2 = long_1 + long_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double_1 = double_2;
			int_2 = int_1 * int_2;
		}
	}
}
void v_termpty_cells_fill( char parameter_1,float parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	double_4 = double_1 * double_3;
	float_1 = float_1 + float_2;
	double_3 = double_2;
	char_2 = char_1 + char_2;
	v_termpty_cell_fill(char_3,char_1,short_1,int_1);

}
void v_termpty_cells_clear( float parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v_termpty_cells_fill(char_1,float_1,char_2,int_1);

	double_1 = double_1 + double_2;
}
short v__tooltip_del(double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long_1 = long_1 * long_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return short_1;
}
unsigned int v__tooltip_content(short parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	char_2 = char_1 + char_2;
	double_1 = v_media_add(char_2,double_2,long_3,int_1,char_1,-1 );

	int_2 = int_2 * int_1;
	return unsigned_int_3;
}
void v_MD5Final( double parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	char_2 = char_1 + char_2;
	float_2 = float_1 + float_1;
	char_2 = char_1 * char_3;
	v_MD5Transform(int_1,double_1);

	float_1 = float_1;
	int_2 = int_2 + int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		char_1 = char_1 * char_3;
		short_1 = short_1 + short_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	short_1 = short_2 + short_2;
	int_2 = int_3 + int_1;
	double_1 = double_1 + double_1;
	short_1 = short_1;
	long_1 = long_1 + long_2;
	char_1 = char_1 * char_3;
	float_2 = float_3;
	v_byteReverse(char_2,int_3);

}
void v_MD5Transform( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_4 = 1;
	double double_9 = 1;
	float float_7 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	char char_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_3 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	short short_4 = 1;
	int int_10 = 1;
	short short_5 = 1;
	char char_5 = 1;
	float_3 = float_1 * float_2;
	float_2 = float_4 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_2;
	long_1 = long_1 + long_1;
	char_3 = char_1 + char_2;
	short_1 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	int_3 = int_2 + int_1;
	int_1 = int_2;
	double_2 = double_1 + double_2;
	float_3 = float_4 * float_1;
	double_4 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	float_6 = float_5 + float_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_3;
	int_1 = int_3 + int_2;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_6 = double_2 * double_5;
	double_6 = double_6 + double_5;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_5;
	double_7 = double_2 * double_6;
	int_1 = int_2;
	double_4 = double_8 * double_7;
	int_3 = int_2 * int_4;
	double_9 = double_7 * double_5;
	float_4 = float_7;
	short_2 = short_2 * short_2;
	long_2 = long_2;
	unsigned_int_8 = unsigned_int_1 + unsigned_int_3;
	int_5 = int_2 + int_3;
	int_6 = int_3 + int_6;
	int_3 = int_1 * int_6;
	long_2 = long_3;
	double_7 = double_5;
	double_9 = double_1 * double_2;
	char_3 = char_2 * char_4;
	double_1 = double_3 * double_6;
	unsigned_int_7 = unsigned_int_8 + unsigned_int_4;
	int_6 = int_7 + int_3;
	int_2 = int_7 + int_4;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
	unsigned_int_9 = unsigned_int_9 * unsigned_int_6;
	float_2 = float_7 * float_2;
	int_1 = int_1;
	short_2 = short_3 + short_2;
	unsigned_int_9 = unsigned_int_1;
	short_3 = short_2 * short_3;
	float_7 = float_5 + float_6;
	int_9 = int_8 * int_9;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	double_4 = double_10 * double_11;
	short_3 = short_3 * short_4;
	int_2 = int_10 * int_5;
	short_4 = short_1 * short_1;
	char_4 = char_4 + char_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	double_5 = double_4;
	short_5 = short_2 + short_2;
	int_10 = int_5 + int_4;
	unsigned_int_8 = unsigned_int_4 * unsigned_int_5;
	char_3 = char_1 + char_3;
	float_2 = float_2 * float_5;
	double_8 = double_3 * double_11;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_2;
	int_8 = int_3 * int_9;
	unsigned_int_7 = unsigned_int_9 + unsigned_int_5;
	char_4 = char_5 + char_3;
	float_2 = float_5 * float_5;
	char_2 = char_2 * char_2;
}
void v_byteReverse( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_1;
}
void v_MD5Update( short parameter_1,char parameter_2,short parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	v_byteReverse(char_1,int_1);

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	short_1 = short_1 * short_1;
	char_3 = char_2 + char_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	short_3 = short_2 * short_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_1 + double_1;
	v_MD5Transform(int_2,double_2);

	long_2 = long_1 + long_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	long_1 = long_1 * long_1;
	double_3 = double_1 + double_2;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	int_1 = int_2;
	short_4 = short_3 * short_4;
	int_3 = int_4;
	double_1 = double_3 + double_3;
	int_3 = int_2 + int_2;
}
void v_MD5Init( double parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_1;
	long_1 = long_1 + long_1;
	char_2 = char_1 * char_1;
	float_1 = float_1 + float_1;
	long_1 = long_1 * long_1;
	double_1 = double_1 + double_1;
}
void v_gravatar_tooltip( long parameter_1,long parameter_2,char parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_1 + int_1;
	char_2 = char_1 * char_2;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	double_2 = double_1 + double_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
	}
	v_MD5Update(short_1,char_3,short_1);

	float_3 = float_1 * float_2;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	int_1 = int_1 * int_1;
	v_MD5Init(double_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	short_2 = v__tooltip_del(double_1);

	int_3 = int_2 + int_1;
	int_2 = int_2 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_MD5Final(double_3,float_2);

		float_2 = float_1 + float_2;
		unsigned_int_4 = v__tooltip_content(short_2,short_3);

		unsigned_int_5 = unsigned_int_6;
	}
	unsigned_int_3 = unsigned_int_6 * unsigned_int_5;
	double_3 = double_3;
	double_4 = double_1 + double_4;
	unsigned_int_2 = unsigned_int_7 + unsigned_int_5;
}
long v__cb_link_drag_done(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_2;
	short_2 = short_1 * short_1;
	float_1 = float_2;
	char_2 = char_1 + char_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	int_1 = int_1 + int_1;
	return long_1;
}
double v__cb_link_drag_accept(unsigned int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1 + float_2;
	double_1 = double_1 * double_1;
	int_2 = int_1 + int_1;
	return double_1;
}
unsigned int v__cb_link_drag_move(short parameter_2,short parameter_3,float parameter_4,char parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		int int_2 = 1;
		if(1)
		{
			int_1 = int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 + int_2;
		}
	}
	return unsigned_int_1;
}
double v__cb_link_icon_new(int parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_4;
	int_1 = int_1 + int_2;
	float_2 = float_1 + float_2;
	return double_2;
}
void v__cb_link_move(short parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	double_1 = v__cb_link_icon_new(int_3,float_1,int_2);

	long_1 = v__cb_link_drag_done(int_2);

	double_3 = double_1;
	float_1 = float_1 * float_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_2 = unsigned_int_3;
		float_2 = float_1 + float_1;
		unsigned_int_1 = unsigned_int_4;
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		double_3 = v__cb_link_drag_accept(unsigned_int_1,short_1);

		char_1 = char_1 * char_2;
		double_5 = double_4 * double_4;
	}
	unsigned_int_1 = v__cb_link_drag_move(short_1,short_2,float_2,char_2);

}
double v__cb_link_up_delay()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = double_2;
	short_2 = short_1 * short_2;
	long_1 = long_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	unsigned_int_1 = v__activate_link(double_2,double_2);

	long_2 = long_2 * long_3;
	return double_1;
}
unsigned int v__cb_link_up(short parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 * short_2;
	char_1 = char_1 * char_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_2 = v__cb_link_up_delay();

		int_1 = int_1 + int_2;
		float_1 = float_1 * float_1;
		float_3 = float_1 * float_2;
		if(1)
		{
			if(1)
			{
				char_1 = char_2 + char_1;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			}
		}
		char_2 = char_1 * char_1;
	}
	return unsigned_int_1;
}
void v_term_focus( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = v__term_is_focused(char_1);

	short_2 = short_1 + short_2;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	char_3 = char_3 * char_1;
	double_2 = double_1 * double_2;
}
unsigned int v__term_is_focused( char parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_2;
	return unsigned_int_2;
}
void v_term_unfocus( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_2 = long_1 * long_2;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_1 = v__term_is_focused(char_1);

	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	float_3 = float_1 * float_2;
}
unsigned int v__cb_ctxp_del(short parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	v_term_unfocus(double_1);

	v_term_focus(unsigned_int_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_2 + double_2;
	int_3 = int_1 + int_2;
	return unsigned_int_3;
}
unsigned int v__cb_ctxp_dismissed(double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_2 = long_1 + long_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_2 * int_1;
	return unsigned_int_1;
}
long v__cb_ctxp_link_copy(double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	v__take_selection_text(unsigned_int_1,unsigned_int_1,double_1,-1 );

	short_1 = short_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	long_3 = long_1 + long_2;
	int_2 = int_3 * int_1;
	return long_2;
}
double v__screen_visual_bounds( char parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_3 = double_1 + double_2;
		int_1 = int_2;
	}
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = short_1 * short_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return double_1;
}
void v__draw_cell( double parameter_1,double parameter_2,char parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1;
	int_1 = int_1 * int_2;
	char_1 = char_1 * char_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	float_1 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2 + double_2;
	short_2 = short_3;
	if(1)
	{
		short_3 = short_1 + short_3;
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_2 + float_3;
		}
		if(1)
		{
			int_3 = int_1 * int_3;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		float float_6 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		float_4 = float_3 + float_2;
		long_1 = long_1;
		float_1 = float_5 + float_4;
		long_5 = long_3 + long_4;
		float_6 = float_5 * float_5;
		short_2 = short_2 * short_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 * double_3;
	}
	if(1)
	{
		double_2 = double_1;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		int_1 = int_3 + int_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
		}
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	}
}
char v__draw_line( short parameter_1,char parameter_2,short parameter_3,int parameter_4,short parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	return char_1;
	v__draw_cell(double_1,double_1,char_2,float_1);

}
int v_termpty_backlog_length( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short_2 = short_1 + short_2;
	double_1 = double_1 * double_2;
	long_3 = long_1 + long_2;
	short_2 = v_verify_beacon(short_3,int_1);

	double_1 = double_3 + double_3;
	short_1 = short_4 + short_3;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 * char_2;
	int_2 = int_2 * int_3;
	double_4 = double_5;
	int_3 = int_1 * int_3;
	double_2 = double_4 + double_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_4 + int_3;
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3 + char_1;
	}
	int_1 = int_4 + int_3;
	if(1)
	{
		int_2 = int_5;
	}
	int_7 = int_1 * int_6;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "_") < 0)
	{
		double double_6 = 1;
		double_6 = double_6 * double_2;
	}
	int_5 = int_7;
	if(1)
	{
		short short_5 = 1;
		short_3 = short_5 * short_4;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		int_3 = int_7;
	}
	char_1 = char_4;
	double_7 = double_7 * double_4;
	unsigned_int_3 = unsigned_int_3;
	long_2 = long_3 * long_1;
	double_7 = double_8 * double_4;
	char_2 = char_1 * char_1;
	return int_6;
}
unsigned int v_termio_pty_get( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_1;
	return unsigned_int_1;
}
float v_termio_textgrid_get( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char_2 = char_1 + char_1;
	short_1 = short_2;
	return float_1;
}
float v_miniview_colors_get( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_3 = double_1 * double_2;
	double_1 = double_1 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		short_2 = short_1 * short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_1 = 1;
		char_1 = char_1;
		float_1 = v_termio_textgrid_get(unsigned_int_2);

		double_4 = double_1 * double_3;
	}
	return float_2;
}
long v__deferred_renderer()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_5 = 1;
	long long_4 = 1;
	char char_7 = 1;
	double double_7 = 1;
	double_3 = double_1 + double_2;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_3 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_2 * double_3;
	float_1 = float_2;
	float_3 = v_termpty_cellrow_get(unsigned_int_4,int_4,unsigned_int_2);

	long_2 = long_1 + long_2;
	double_3 = double_1 * double_4;
	if(1)
	{
	}
	if(1)
	{
		long_3 = long_2 + long_1;
	}
	unsigned_int_2 = v_termio_pty_get(int_4);

	double_2 = double_1 + double_3;
	int_4 = v_termio_scroll_get(int_2);

	double_3 = double_5 + double_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
	}
	double_6 = double_5 * double_5;
	short_2 = short_1 + short_2;
	char_1 = char_1 * char_2;
	int_1 = int_1 * int_4;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	short_1 = short_2;
	float_3 = float_4 * float_3;
	if(1)
	{
		char_1 = char_1 * char_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_2 + unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_4 = short_1 * short_3;
		if(1)
		{
			double_1 = double_5 + double_6;
		}
		long_2 = long_2 * long_3;
	}
	int_2 = v_termpty_backlog_length(double_5);

	char_4 = char_1 * char_2;
	short_2 = short_3 + short_2;
	char_3 = char_1 + char_2;
	if(1)
	{
		unsigned_int_6 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		int_1 = int_3 + int_3;
	}
	int_4 = int_1 * int_4;
	char_5 = v__draw_line(short_4,char_1,short_5,int_2,short_2);

	double_1 = v__screen_visual_bounds(char_2);

	char_3 = char_3 * char_3;
	if(1)
	{
		char char_6 = 1;
		long_2 = long_4;
		char_6 = char_5 + char_1;
		if(1)
		{
			long_4 = long_3 + long_1;
			int_4 = int_2 + int_2;
		}
		if(1)
		{
			int int_6 = 1;
			if(1)
			{
				int int_5 = 1;
				int_4 = int_5 * int_1;
				int_4 = int_5 * int_4;
				int_6 = int_3 + int_1;
				char_6 = char_1 * char_6;
			}
			if(1)
			{
				double_4 = double_2 * double_1;
				int_4 = int_6 * int_4;
			}
		}
	}
	char controller_14[2];
	fgets(controller_14 ,2 ,stdin);
	if( strcmp( controller_14, "s") < 0)
	{
		float_1 = v_miniview_colors_get(char_7,short_2);

		long_3 = long_1;
	}
	double_6 = double_7;
	long_4 = long_1;
	char_2 = char_3 * char_7;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	return long_1;
}
void v__queue_render( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long_1 = long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") < 0)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	long_3 = v__deferred_renderer();

}
void v_miniview_redraw()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v__queue_render(unsigned_int_1);

	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
}
long v__block_obj_del( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	char_1 = v__smart_media_del(char_2,long_1);

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	return long_2;
}
float v__termpty_is_dblwidth_slow_get( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
		}
	}
	return float_1;
}
short v__termpty_is_dblwidth_get( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	float_1 = v__termpty_is_dblwidth_slow_get(unsigned_int_1,int_1);

}
void v_term_preedit_str_get( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_2 = long_1 + long_2;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	int_1 = int_2 + int_1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
}
int v_media_get( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	return int_1;
}
void v__smart_media_clicked(int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	double_1 = double_1;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			long long_3 = 1;
			float_2 = float_1 * float_1;
			long_3 = long_3 + long_2;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				if(1)
				{
					int_1 = int_1;
					double_1 = double_1;
					if(1)
					{
						long_2 = long_1 * long_2;
					}
					if(1)
					{
						unsigned int unsigned_int_1 = 1;
						unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
						unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
						if(1)
						{
							double double_2 = 1;
							long long_4 = 1;
							long long_5 = 1;
							double_2 = double_1 + double_2;
							int_1 = v_media_get(unsigned_int_4);

							float_2 = v_termio_config_get();

							double_2 = double_1 * double_1;
							long_2 = v_media_src_type_get(float_2);

							long_5 = long_3 * long_4;
						}
					}
				}
				unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
			}
		}
	}
	int_2 = int_1 * int_1;
}
char v_media_control_get( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	return char_1;
}
float v__smart_media_stop(char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	int_2 = int_1;
	return float_1;
}
int v__smart_media_pause(float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
unsigned int v__smart_media_play(long parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_3;
}
char v__smart_media_del(char parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return char_1;
}
void v_media_visualize_set( char parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			double_2 = double_1 * double_2;
		}
	}
	if(1)
	{
		double_1 = double_2;
	}
}
void v_media_mute_set( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_2;
	if(1)
	{
		double_2 = double_3 + double_3;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "V") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
}
void v_media_volume_set( unsigned int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	int_1 = int_1 * int_2;
}
long v__cb_media_vol(double parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_2 = int_1 + int_1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	v_media_volume_set(unsigned_int_1,double_1);

	long_1 = long_2;
	return long_2;
}
double v__cb_media_pos(int parameter_2,short parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	v_media_position_set(int_3,double_1);

	double_3 = double_2 * double_1;
	int_4 = int_4 + int_5;
	return double_2;
}
short v__cb_media_pos_drag_stop(long parameter_2,short parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double_3 = double_1 + double_2;
	float_1 = float_1 * float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Hl") < 0)
	{
	}
	int_1 = int_1 * int_2;
	double_4 = double_3 * double_4;
	double_2 = double_3;
	int_2 = int_2 + int_1;
	char_1 = char_2;
	return short_1;
}
int v__cb_media_pos_drag_start(long parameter_2,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	float_2 = float_2 + float_2;
	v_media_position_set(int_1,double_1);

	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
void v_media_stop( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
char v__cb_media_stop(float parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_2;
	return char_1;
	v_media_stop(double_1);

}
void v__cb_media_pause(int parameter_2,double parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	v_media_play_set(unsigned_int_1,int_1);

}
void v_media_play_set( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	short_2 = short_3;
	if(1)
	{
		float float_1 = 1;
		long_2 = long_1 * long_1;
		float_1 = float_1 * float_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "?6") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
		long_1 = long_1 + long_2;
	}
}
unsigned int v__cb_media_play(double parameter_2,int parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_1;
	v_media_play_set(unsigned_int_1,int_1);

}
void v_media_position_set( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_3 + int_4;
}
double v__cb_mov_ref(unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	return double_1;
}
char v__cb_mov_progress(unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	return char_1;
}
double v__cb_mov_restart()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	double_1 = double_2;
	short_3 = short_1 * short_2;
	int_2 = int_1 * int_1;
	return double_2;
}
long v__cb_mov_decode_stop(int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
		char_2 = char_2 + char_1;
	}
	int_1 = int_2;
	double_2 = double_1 * double_1;
	return long_1;
	double_2 = v__cb_mov_restart();

}
long v__cb_mov_len_change(unsigned int parameter_2)
{
	long long_1 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	return long_1;
}
int v__cb_mov_frame_resize(float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "g0") > 0)
	{
	}
	long_1 = v__type_mov_calc(double_3,float_1,double_3,long_2,double_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_1;
	return int_1;
}
char v__cb_mov_frame_decode(long parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_1;
	long_1 = v__type_mov_calc(double_1,float_1,double_2,long_1,double_2);

	int_2 = int_1 + int_2;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	long_4 = long_3 * long_1;
	int_2 = int_1 + int_2;
	int_3 = int_4;
	float_2 = float_2 + float_1;
	if(1)
	{
	}
	int_5 = int_5 * int_5;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_2 * double_2;
	long_1 = long_4 * long_1;
	return char_1;
}
short v__type_mov_init( double parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_5 = 1;
	float float_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	char char_4 = 1;
	int int_8 = 1;
	int int_9 = 1;
	char char_5 = 1;
	short short_6 = 1;
	int int_10 = 1;
	char_1 = v_theme_apply(unsigned_int_1,float_1,short_1);

	long_1 = long_1 + long_2;
	double_1 = v__cb_media_pos(int_1,short_1,char_1);

	v_media_mute_set(unsigned_int_2,short_2);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_4 = double_2 * double_3;
	short_1 = short_1 + short_2;
	double_5 = double_2;
	int_1 = int_1 * int_2;
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_3 = double_3 * double_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		int_2 = int_2 + int_3;
		float_3 = float_2 * float_1;
	}
	v__cb_media_pause(int_2,double_2,float_3);

	int_1 = int_4 * int_1;
	int_3 = v__cb_media_pos_drag_start(long_1,char_3,int_1);

	short_2 = v__cb_media_pos_drag_stop(long_1,short_3,unsigned_int_1);

	long_2 = long_3 + long_4;
	double_4 = double_2 * double_4;
	short_4 = short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	short_2 = short_1;
	if(1)
	{
		unsigned_int_1 = v__cb_media_play(double_3,int_4,char_3);

		short_4 = short_5 + short_1;
	}
	if(1)
	{
		char_1 = char_2 + char_2;
	}
	long_2 = long_5 + long_5;
	double_2 = v__cb_mov_ref(unsigned_int_2);

	float_4 = float_1 * float_2;
	char_2 = char_2;
	char_3 = v__cb_mov_frame_decode(long_4);

	long_5 = long_1 * long_5;
	int_5 = int_1 * int_5;
	long_2 = v__cb_mov_len_change(unsigned_int_5);

	double_6 = double_4 * double_5;
	float_1 = float_2;
	v_media_position_set(int_4,double_7);

	double_8 = double_2 + double_7;
	char_2 = v__cb_mov_progress(unsigned_int_2);

	double_9 = double_6 + double_4;
	short_4 = short_3 + short_3;
	long_3 = v__cb_media_vol(double_4,float_5,int_6);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
	int_1 = int_2 + int_5;
	short_4 = short_3 * short_1;
	double_1 = double_5;
	v_media_play_set(unsigned_int_1,int_7);

	char_3 = char_4 * char_4;
	int_5 = int_8;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_2 = unsigned_int_7;
	}
	if(1)
	{
		long_4 = v__cb_mov_decode_stop(int_1);

		char_2 = v__cb_media_stop(float_2,int_6,int_9);

		v_media_visualize_set(char_5,short_6);

		short_3 = short_1 * short_2;
	}
	return short_5;
	int_10 = v__cb_mov_frame_resize(float_3);

}
short v__cb_edje_preloaded(unsigned int parameter_2,long parameter_3,unsigned int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	short_2 = short_1 * short_2;
	return short_1;
}
double v__type_edje_init( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short_1 = short_2;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	double_4 = double_3 * double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = v__cb_edje_preloaded(unsigned_int_1,long_1,unsigned_int_2);

	short_1 = short_1;
	char_3 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			float float_1 = 1;
			int_1 = int_1 + int_1;
			float_1 = float_1 + float_1;
			double_1 = double_2 * double_4;
		}
	}
	return double_4;
	v_theme_auto_reload_enable(char_3);

}
unsigned int v__type_scale_init( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_1;
	int_2 = int_1 * int_2;
	long_1 = long_1 + long_2;
	long_2 = long_3 * long_3;
	double_2 = double_1 * double_1;
	float_1 = v__cb_scale_preloaded(int_2,float_1);

	int_2 = int_3 * int_2;
	int_2 = int_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2 * double_3;
	double_2 = double_3 * double_3;
	long_2 = long_1 + long_3;
	double_3 = double_4 + double_5;
	return unsigned_int_2;
}
short v__cb_img_frame(int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char * vul_var;
	char_1 = char_2;
	double_2 = double_1 * double_1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	float_1 = float_2;
	char controller4vul_974[3];
	fgets(controller4vul_974 ,3 ,stdin);
	if( strcmp( controller4vul_974, "LF") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_1 = float_1 * float_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		short_1 = short_2;
		char controller4vul_975[3];
		fgets(controller4vul_975 ,3 ,stdin);
		if( strcmp( controller4vul_975, "@}") > 0)
		{
			char controller4vul_976[2];
			fgets(controller4vul_976 ,2 ,stdin);
			if( strcmp( controller4vul_976, "T") > 0)
			{
				double double_3 = 1;
				double double_4 = 1;
				vul_var=(char*)malloc(20*sizeof(char));
				strcpy(vul_var, "CWE-761");
				if(uni_para == 495)
				{
					vul_var = vul_var + 1;
				}
				free(vul_var);
				double_3 = double_4;
			}
		}
	}
	int_4 = int_2 * int_3;
	float_1 = float_3 + float_4;
	char_1 = char_1 * char_1;
	short_4 = short_3 * short_3;
}
double v__type_img_anim_handle( char parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_1 + char_2;
	double_2 = double_1 * double_1;
	char controller4vul_973[3];
	fgets(controller4vul_973 ,3 ,stdin);
	if( strcmp( controller4vul_973, "Gc") < 0)
	{
		short_1 = v__cb_img_frame(uni_para);

	}
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	return double_1;
}
double v__cb_img_preloaded(short parameter_2,double parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_1;
	return double_2;
}
int v__type_img_init( short parameter_1,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = v__type_img_anim_handle(char_1,uni_para);

	short_2 = short_1 * short_2;
	float_2 = float_1 * float_2;
	int_1 = int_1;
	int_1 = int_1 + int_2;
	long_1 = long_1 * long_2;
	long_1 = long_3 * long_2;
	long_1 = long_3 * long_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_2 * int_3;
	short_1 = short_1;
	double_2 = double_2 + double_3;
	double_2 = double_2 * double_2;
	return int_2;
}
short v__url_compl_cb(int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_3 = double_1 * double_2;
	char_1 = char_1 + char_1;
	char_2 = char_1 * char_2;
	char controller4vul_972[3];
	fgets(controller4vul_972 ,3 ,stdin);
	if( strcmp( controller4vul_972, ";q") > 0)
	{
		int_1 = v__type_img_init(short_1,uni_para);

	}
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_1;
	short_2 = short_2 * short_2;
	int_3 = int_1;
	int_1 = int_2;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_2 + short_3;
	long_3 = long_1 + long_2;
	float_3 = float_1 + float_2;
	int_4 = int_3 * int_1;
	char_2 = char_1 * char_3;
	char_3 = char_1 * char_3;
	short_5 = short_4 + short_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1;
	short_4 = short_3 + short_5;
	return short_5;
}
char v__url_prog_cb(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	long_2 = long_1 + long_2;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int_2 = int_1 + int_2;
		if(1)
		{
			char_1 = char_1 * char_1;
		}
		int_4 = int_1 + int_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			short short_2 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			short_1 = short_2 + short_1;
			char_3 = char_1 * char_2;
			int_3 = int_2 * int_1;
			double_1 = double_1 * double_2;
		}
	}
	return char_4;
}
void v__type_thumb_calc( double parameter_1,unsigned int parameter_2,short parameter_3,char parameter_4,unsigned int parameter_5)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_6 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_1 * double_2;
		double_4 = double_4 * double_1;
	}
	if(1)
	{
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float_2 = float_2 * float_2;
		short_2 = short_1 * short_2;
		float_1 = float_1 * float_1;
		if(1)
		{
			double_2 = double_2 * double_1;
			long_1 = long_1;
			if(1)
			{
				float_1 = float_3 * float_1;
			}
		}
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			int_2 = int_1 + int_2;
			double_6 = double_5 + double_6;
		}
		long_1 = long_1;
		float_1 = float_4;
		float_4 = float_1;
		float_3 = float_5 + float_2;
	}
	int_1 = int_2 * int_1;
	float_6 = float_1 + float_3;
}
long v__type_mov_calc( double parameter_1,float parameter_2,double parameter_3,long parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	int int_8 = 1;
	double double_6 = 1;
	long long_3 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	double_2 = double_1 + double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int_3 = int_1 * int_2;
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		double double_5 = 1;
		int int_4 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		int int_5 = 1;
		int int_7 = 1;
		double_5 = double_2 + double_4;
		int_4 = int_3 * int_3;
		short_1 = short_1 * short_1;
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			double_4 = double_2;
			float_1 = float_2;
			if(1)
			{
				float_2 = float_2 * float_2;
				int_2 = int_5 * int_3;
				if(1)
				{
					unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				}
			}
		}
		if(1)
		{
			float float_3 = 1;
			float_3 = float_3 * float_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
			if(1)
			{
				long long_2 = 1;
				int_6 = int_4 * int_4;
				long_2 = long_1 * long_2;
				if(1)
				{
					int_6 = int_5 * int_5;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			int_2 = int_3 + int_2;
		}
		int_2 = int_3;
		double_3 = double_5 + double_2;
		double_3 = double_5 + double_4;
		int_2 = int_7 + int_8;
	}
	double_2 = double_4 * double_6;
	int_6 = int_1 + int_8;
	return long_3;
}
float v__type_edje_calc( double parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	return float_1;
}
char v__type_img_calc( double parameter_1,float parameter_2,double parameter_3,int parameter_4,float parameter_5)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_1 = short_1;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		long_2 = long_1 + long_1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		long long_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		long_3 = long_2 + long_2;
		if(1)
		{
			short_2 = short_1 + short_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				float_1 = float_1 + float_1;
				char_2 = char_1 + char_1;
				if(1)
				{
					int_2 = int_1 * int_2;
				}
			}
		}
		if(1)
		{
			double double_4 = 1;
			unsigned int unsigned_int_3 = 1;
			float_1 = float_1 * float_1;
			double_3 = double_3 + double_4;
			if(1)
			{
				int_2 = int_2 + int_2;
				float_1 = float_1;
				if(1)
				{
					unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
				}
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
				int_1 = int_1 * int_2;
			}
		}
		if(1)
		{
			long_2 = long_1 + long_2;
			int_2 = int_1 + int_1;
		}
		char_2 = char_3 * char_2;
		char_3 = char_1 * char_2;
		double_1 = double_3 * double_1;
		short_2 = short_2 * short_1;
	}
	int_3 = int_1 + int_2;
	int_4 = int_3 * int_3;
	return char_3;
}
float v__cb_scale_preloaded(int parameter_2,float parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char_1 = char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "z") < 0)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_1 = double_1 * double_2;
		double_2 = double_3 * double_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "H") < 0)
	{
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_1;
		long_2 = long_1 * long_2;
		char_1 = char_1 + char_1;
		short_1 = short_2 * short_2;
		short_2 = short_1;
	}
	return float_1;
}
long v__type_scale_calc( int parameter_1,char parameter_2,char parameter_3,char parameter_4,unsigned int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	int int_3 = 1;
	float float_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	long long_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 * double_2;
		float_3 = float_1 * float_3;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_2;
		if(1)
		{
			int_1 = int_1 * int_2;
			short_2 = short_1 * short_1;
			if(1)
			{
				long long_3 = 1;
				long_2 = long_3 * long_3;
				float_4 = float_3 + float_2;
				if(1)
				{
					int_3 = int_2 * int_1;
				}
			}
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_2 * short_1;
			double_2 = double_1;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				float_5 = v__cb_scale_preloaded(int_1,float_3);

				double_3 = double_2;
				unsigned_int_3 = unsigned_int_4;
				if(1)
				{
					long_1 = long_1 * long_1;
				}
			}
		}
		if(1)
		{
			short short_5 = 1;
			short_5 = short_4 * short_1;
			float_2 = float_2 * float_2;
		}
		int_1 = int_1 * int_4;
		int_1 = int_4 + int_2;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
		double_2 = double_4 + double_4;
	}
	if(1)
	{
		long long_4 = 1;
		char char_1 = 1;
		char char_3 = 1;
		int_2 = int_2 + int_3;
		float_1 = float_1 + float_1;
		float_5 = float_2 * float_5;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			long long_5 = 1;
			long_5 = long_4 * long_2;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			char char_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			short short_6 = 1;
			short short_7 = 1;
			unsigned_int_3 = unsigned_int_6 * unsigned_int_5;
			double_1 = double_3 + double_2;
			char_3 = char_1 * char_2;
			long_4 = long_6;
			double_5 = double_4 * double_5;
			double_7 = double_5 + double_6;
			char_3 = char_1 * char_2;
			short_7 = short_6 * short_2;
			short_1 = short_4 + short_7;
		}
		float_1 = float_2 * float_3;
		char_3 = char_1 * char_1;
	}
	if(1)
	{
		int int_5 = 1;
		float_3 = float_4;
		int_4 = int_5 * int_4;
	}
	int_1 = int_3 + int_6;
	int_3 = int_6 + int_7;
	return long_6;
}
void v__unsmooth_timeout()
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	double_1 = double_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			short short_3 = 1;
			long_1 = v__type_scale_calc(int_1,char_1,char_1,char_2,unsigned_int_3);

			short_1 = short_2 + short_3;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_2;
	}
}
long v__smooth_handler( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long_2 = long_1 * long_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	long_2 = long_3 + long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int_3 = int_1 * int_2;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
				long_1 = long_3 * long_2;
				if(1)
				{
					int int_4 = 1;
					int_3 = int_3 + int_4;
				}
			}
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				double_2 = double_3;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
			}
			v__unsmooth_timeout();

			short_1 = short_1 + short_2;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		float_1 = float_2 * float_2;
	}
	return long_4;
}
void v__smart_calculate( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	float float_2 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "6") < 0)
	{
		int_3 = int_1 + int_2;
	}
	float_1 = v__type_edje_calc(double_3,float_1,int_3,unsigned_int_3,char_3);

	double_4 = double_4 * double_3;
	double_1 = double_1;
	v__type_thumb_calc(double_3,unsigned_int_3,short_1,char_3,unsigned_int_2);

	long_1 = long_1;
	double_1 = double_5 + double_1;
	int_4 = int_2 + int_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	double_5 = double_4 * double_4;
	double_3 = double_6 + double_6;
	float_2 = float_2 + float_2;
	char_3 = char_4 + char_2;
	long_2 = v__smooth_handler(int_3);

	long_3 = v__type_mov_calc(double_6,float_1,double_2,long_1,double_3);

	long_2 = long_2 * long_4;
	char_5 = char_6;
	unsigned_int_4 = unsigned_int_1;
	float_3 = float_1 * float_3;
	int_1 = int_1;
	if(1)
	{
		float float_4 = 1;
		char_3 = v__type_img_calc(double_7,float_1,double_7,int_1,float_2);

		char_5 = char_6 + char_1;
		float_4 = float_3;
	}
	if(1)
	{
		int int_5 = 1;
		long_2 = v__type_scale_calc(int_2,char_3,char_3,char_6,unsigned_int_5);

		int_3 = int_5;
		char_3 = char_3 + char_5;
	}
}
float v__smart_move( short parameter_1,unsigned int parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
	if(1)
	{
	}
	float_2 = float_2 + float_2;
	return float_1;
}
void v__smart_resize( char parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_4 = int_2 * int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3;
	short_1 = short_1 + short_2;
}
int v__smart_del( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_2;
		int_2 = int_1 * int_1;
	}
	long_2 = long_2;
	int_1 = int_3 + int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		if(1)
		{
			short_1 = short_2 * short_1;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double_1 = double_2 + double_3;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_2 * long_3;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		int_3 = int_2;
	}
	if(1)
	{
		short_2 = short_2 + short_2;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		float_1 = float_1 + float_3;
	}
	if(1)
	{
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		int_2 = int_2 * int_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 + short_1;
	}
	if(1)
	{
		int_3 = int_2 * int_1;
	}
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	float_1 = float_3 + float_1;
	float_1 = float_3 + float_1;
	return int_3;
}
int v__smart_add( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	char_2 = char_1 * char_2;
	char_3 = char_2 + char_1;
	double_1 = double_1 + double_1;
	int_2 = int_2;
	int_2 = int_3;
	long_3 = long_1 * long_2;
	long_4 = long_3;
	short_1 = short_1 + short_2;
	char_3 = char_1;
	return int_2;
}
int v__smart_init()
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int_1 = v__smart_add(short_1);

	double_1 = double_1;
	v__smart_resize(char_1,short_1,short_1);

	float_1 = v__smart_move(short_1,unsigned_int_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_5 = unsigned_int_5;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_1;
	int_3 = int_2 * int_2;
	long_1 = long_2;
	char_2 = char_3;
	int_4 = v__smart_del(short_2);

	double_2 = double_2 + double_1;
	double_1 = double_1 + double_2;
	v__smart_calculate(long_3);

	unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
	return int_5;
}
double v_media_add( char parameter_1,double parameter_2,long parameter_3,int parameter_4,char parameter_5,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_6 = 1;
	long long_8 = 1;
	float float_3 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_11 = 1;
	float float_5 = 1;
	int int_9 = 1;
	int int_10 = 1;
	char char_6 = 1;
	double_1 = double_1 * double_2;
	long_1 = long_1 * long_1;
	double_3 = double_3 + double_1;
	double_2 = double_3 * double_3;
	long_2 = long_1 * long_2;
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	char_1 = char_2 * char_1;
	double_5 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	long_2 = long_2 + long_3;
	double_3 = double_1 + double_3;
	char controller4vul_970[3];
	fgets(controller4vul_970 ,3 ,stdin);
	if( strcmp( controller4vul_970, "0?") > 0)
	{
		char controller4vul_971[3];
		fgets(controller4vul_971 ,3 ,stdin);
		if( strcmp( controller4vul_971, "Fw") < 0)
		{
			long long_4 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_5 = 1;
			short_1 = v__url_compl_cb(int_3,uni_para);

			short_1 = short_1 + short_1;
			long_3 = long_2 * long_2;
			if(1)
			{
				char_2 = char_1 + char_2;
				float_2 = float_1 + float_1;
				char_3 = char_1 + char_3;
			}
			if(1)
			{
				int_1 = int_4 + int_1;
				short_2 = short_3;
				int_3 = int_2 * int_2;
			}
			if(1)
			{
				char char_4 = 1;
				char_3 = char_2 + char_4;
			}
			if(1)
			{
				long_4 = long_4 + long_4;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
			}
			if(1)
			{
				long_5 = long_1 + long_4;
			}
			if(1)
			{
				float_2 = float_1;
			}
			if(1)
			{
				long long_6 = 1;
				char char_5 = 1;
				unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
				long_6 = long_5 + long_3;
				unsigned_int_2 = unsigned_int_6 + unsigned_int_1;
				char_1 = char_1 + char_5;
				double_2 = double_2 + double_3;
				double_1 = double_2 * double_2;
				double_4 = double_4;
			}
			if(1)
			{
				unsigned_int_7 = unsigned_int_6 * unsigned_int_6;
				float_1 = float_1 * float_1;
				double_2 = double_4 * double_2;
				if(1)
				{
					long_5 = long_5 * long_5;
					if(1)
					{
						int_1 = int_4;
						unsigned_int_4 = unsigned_int_8 * unsigned_int_8;
					}
					if(1)
					{
						int int_5 = 1;
						double_6 = double_1;
						if(1)
						{
							short short_4 = 1;
							int_1 = int_5 + int_5;
							unsigned_int_4 = unsigned_int_4 * unsigned_int_9;
							short_4 = short_3 + short_2;
						}
						if(1)
						{
							short short_5 = 1;
							long long_7 = 1;
							float float_4 = 1;
							int int_6 = 1;
							long_2 = long_3 * long_3;
							short_6 = short_5 * short_5;
							int_1 = int_5 * int_2;
							long_8 = long_7 * long_8;
							float_4 = float_2 + float_3;
							int_5 = int_6 + int_7;
							unsigned_int_1 = unsigned_int_7 * unsigned_int_2;
							short_6 = short_2 + short_2;
							unsigned_int_6 = unsigned_int_6 + unsigned_int_5;
						}
					}
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
				}
			}
		}
		if(1)
		{
			long_8 = long_3 + long_8;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_7 = 1;
			double_6 = double_3 + double_7;
			float_1 = float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_10 = 1;
			unsigned_int_8 = unsigned_int_10 * unsigned_int_6;
			int_3 = int_3 * int_7;
		}
		unsigned_int_5 = unsigned_int_3 + unsigned_int_7;
		if(1)
		{
			double double_8 = 1;
			int int_8 = 1;
			double_1 = double_4 + double_8;
			int_8 = int_1;
		}
		double_5 = double_6 + double_4;
		if(1)
		{
			short short_7 = 1;
			short_6 = short_7 * short_3;
			short_2 = short_7 * short_7;
		}
		long_2 = long_2 + long_2;
		if(1)
		{
			unsigned_int_11 = unsigned_int_6 + unsigned_int_8;
			double_3 = double_5;
		}
		double_6 = double_1 * double_3;
		unsigned_int_8 = unsigned_int_9 * unsigned_int_11;
	}
	float_3 = float_5 + float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_11;
	unsigned_int_8 = unsigned_int_8 + unsigned_int_1;
	int_7 = int_9;
	double_5 = double_4;
	int_7 = int_2;
	int_10 = int_1 + int_4;
	char_3 = char_1 * char_6;
	if(1)
	{
		long_8 = long_2 * long_3;
	}
	return double_1;
}
unsigned int v__block_media_activate( float parameter_1,float parameter_2,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	int int_4 = 1;
	long_1 = long_1 + long_1;
	double_2 = double_1 * double_2;
	int_2 = int_1 * int_1;
	double_2 = double_2 + double_2;
	char_2 = char_1 + char_1;
	char controller4vul_969[3];
	fgets(controller4vul_969 ,3 ,stdin);
	if( strcmp( controller4vul_969, ".,") < 0)
	{
		double_2 = v_media_add(char_2,double_1,long_1,int_3,char_2,uni_para);

		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		char_2 = char_2 * char_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3;
	}
	if(1)
	{
		double_4 = double_2 * double_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	double_5 = double_5;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	double_4 = double_6;
	long_4 = long_3 + long_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
	char_3 = char_2;
	int_3 = int_2 + int_1;
	if(1)
	{
		long_3 = long_1;
		int_3 = int_2;
	}
	double_2 = double_5;
	double_5 = double_2 * double_1;
	int_3 = int_4;
	if(1)
	{
		double double_7 = 1;
		double_7 = double_4 + double_6;
	}
	return unsigned_int_5;
}
char v__block_edje_message_cb(unsigned int parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_5 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_4 = 1;
	char char_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_8 = 1;
	char char_9 = 1;
	char char_10 = 1;
	float_2 = float_1 + float_2;
	double_3 = double_1 + double_2;
	short_1 = short_2;
	double_1 = double_4 * double_2;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		short_3 = short_1 * short_3;
	}
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	char_2 = char_1 * char_1;
	float_4 = float_3 * float_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	long_2 = long_1 * long_1;
	char_1 = char_3 + char_1;
	int_2 = int_2 * int_2;
	long_1 = long_1 * long_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	float_3 = float_5;
	short_3 = short_2 * short_1;
	int_1 = int_3 * int_1;
	double_2 = double_3 * double_5;
	int_4 = int_1;
	unsigned_int_4 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	unsigned_int_5 = unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_1 + short_1;
		short_3 = short_2 * short_3;
	}
	double_1 = double_4;
	int_3 = int_1 + int_2;
	float_2 = float_1 * float_6;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	int_2 = int_1 * int_2;
	long_4 = long_4 + long_5;
	long_1 = long_2 * long_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_4 = short_3 + short_2;
		char_4 = char_2 * char_3;
		double_6 = double_2 * double_2;
	}
	double_8 = double_7 * double_8;
	double_2 = double_5 + double_8;
	double_9 = double_7 + double_5;
	int_4 = int_2 * int_4;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
	int_6 = int_3 * int_5;
	char_6 = char_5 * char_4;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char_4 = char_2 * char_5;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_5;
		int_4 = int_3 * int_4;
	}
	int_8 = int_7 + int_3;
	long_1 = long_5 * long_4;
	int_4 = int_7;
	long_3 = long_1;
	int_1 = int_8 * int_9;
	int_4 = int_7;
	double_7 = double_7;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	double_3 = double_7;
	short_1 = short_4 * short_1;
	int_10 = int_10 * int_5;
	unsigned_int_4 = unsigned_int_7 + unsigned_int_4;
	unsigned_int_8 = unsigned_int_7 + unsigned_int_1;
	short_2 = short_2;
	v_termpty_write(short_1,float_2,int_10);

	int_7 = int_2;
	double_5 = double_9 + double_5;
	float_3 = float_2 * float_5;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float_6 = float_5 * float_4;
		unsigned_int_6 = unsigned_int_7 * unsigned_int_3;
		char_6 = char_2 + char_7;
	}
	unsigned_int_9 = unsigned_int_9 + unsigned_int_7;
	long_3 = long_5 * long_5;
	double_5 = double_6 * double_10;
	long_3 = long_3 + long_1;
	int_8 = int_10 + int_2;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_2;
	unsigned_int_10 = unsigned_int_8;
	char_5 = char_1 + char_8;
	unsigned_int_7 = unsigned_int_2 + unsigned_int_2;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int int_11 = 1;
		int_7 = int_7 + int_9;
		int_4 = int_11 + int_9;
		double_8 = double_3 * double_10;
	}
	unsigned_int_7 = unsigned_int_2 + unsigned_int_9;
	char_1 = char_6 + char_9;
	char_10 = char_7;
	return char_5;
}
void v_termpty_write( short parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_2 = float_1 + float_1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3 * float_2;
	}
}
void v__block_edje_signal_cb(float parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_3;
	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	int_1 = int_2 + int_4;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double_1 = double_2 * double_2;
		float_1 = float_1 * float_2;
		v_termpty_write(short_2,float_1,int_1);

		double_3 = double_2 + double_3;
		short_1 = short_1;
		long_3 = long_1 * long_2;
		int_6 = int_5 + int_6;
		short_1 = short_2 + short_1;
		int_6 = int_7 * int_5;
	}
	if(1)
	{
		float float_3 = 1;
		short short_3 = 1;
		float_2 = float_3;
		double_3 = double_1;
		short_1 = short_1 + short_3;
	}
}
void v_termpty_block_chid_update( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, ";*") > 0)
	{
	}
	double_1 = double_1;
}
long v__block_edje_cmds( long parameter_1,char parameter_2,short parameter_3,double parameter_4)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	v__block_edje_signal_cb(float_1,float_1,int_1);

	double_2 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
	v_termpty_block_chid_update(int_1,char_1);

	char_2 = v__block_edje_message_cb(unsigned_int_1,int_2,int_2);

}
char v_homedir_get( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "c") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double_2 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			int int_3 = 1;
			int_2 = int_3;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_1 * int_4;
	}
	return char_1;
}
long v__block_edje_activate( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1 + int_2;
	double_3 = double_2 + double_3;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long_4 = long_3 + long_4;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			v_config_theme_path_default_get(char_1);

			long_5 = v__block_edje_cmds(long_2,char_1,short_1,double_3);

			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			double_1 = double_2 * double_3;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
		}
	}
	unsigned_int_6 = unsigned_int_6 + unsigned_int_7;
	unsigned_int_8 = unsigned_int_6 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_6;
	char_2 = v_homedir_get(char_1,int_2);

	float_1 = float_2;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		double_2 = double_1 + double_3;
	}
	return long_2;
}
int v__block_activate( char parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_2;
	char controller4vul_968[2];
	fgets(controller4vul_968 ,2 ,stdin);
	if( strcmp( controller4vul_968, ";") > 0)
	{
		unsigned_int_1 = v__block_media_activate(float_1,float_2,uni_para);

	}
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		int_2 = int_3 + int_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	return int_3;
}
long v_termpty_block_get( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
int v_termpty_block_id_get( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	double_2 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
void v_termpty_backscroll_adjust( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_verify_beacon(short_2,int_1);

	int_1 = int_1 + int_1;
}
unsigned int v__smart_apply( int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_6 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_5 = 1;
	long long_7 = 1;
	float float_6 = 1;
	char char_5 = 1;
	double double_9 = 1;
	double double_10 = 1;
	short short_7 = 1;
	short short_8 = 1;
	short short_9 = 1;
	char char_6 = 1;
	float float_7 = 1;
	float float_8 = 1;
	int int_8 = 1;
	char char_7 = 1;
	char char_8 = 1;
	short short_11 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double double_11 = 1;
	double double_12 = 1;
	char char_11 = 1;
	float float_10 = 1;
	double double_13 = 1;
	double double_14 = 1;
	int int_11 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	long_2 = long_1 + long_1;
	int_2 = int_1 + int_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	long_1 = long_3 + long_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	short_3 = short_1 * short_2;
	short_5 = short_4 + short_4;
	float_2 = float_1 + float_2;
	double_2 = double_1 + double_1;
	long_3 = long_4 * long_1;
	long_5 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
		unsigned_int_1 = unsigned_int_7;
		char_1 = char_1 * char_2;
		char_2 = char_3 + char_2;
		if(1)
		{
			char_1 = char_3 * char_2;
		}
		double_3 = double_4;
		if(1)
		{
			unsigned_int_6 = unsigned_int_8;
		}
		char_2 = char_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_3 = 1;
			char controller4vul_965[3];
			fgets(controller4vul_965 ,3 ,stdin);
			if( strcmp( controller4vul_965, "Eo") > 0)
			{
				char controller4vul_966[2];
				fgets(controller4vul_966 ,2 ,stdin);
				if( strcmp( controller4vul_966, "<") > 0)
				{
					char controller4vul_967[3];
					fgets(controller4vul_967 ,3 ,stdin);
					if( strcmp( controller4vul_967, "1*") < 0)
					{
						int_1 = v__block_activate(char_4,int_1,uni_para);

						int_2 = int_3 * int_2;
					}
					int_4 = int_4 + int_5;
				}
				char_2 = char_3;
				if(1)
				{
					double_2 = double_4;
				}
				if(1)
				{
					long_4 = long_6;
				}
				unsigned_int_8 = unsigned_int_3;
				float_1 = float_1 * float_2;
				float_1 = float_1 + float_2;
				float_3 = float_1 * float_3;
				long_2 = long_3;
				short_3 = short_4 + short_6;
			}
			if(1)
			{
				char_2 = char_4;
				double_2 = double_4 + double_2;
				if(1)
				{
					if(1)
					{
						float_3 = float_3;
					}
					unsigned_int_7 = unsigned_int_5;
					unsigned_int_9 = unsigned_int_4 * unsigned_int_4;
					int_4 = int_2 * int_2;
					float_4 = float_2 + float_1;
					int_6 = int_4 + int_1;
					float_3 = float_1 * float_3;
					float_2 = float_1 * float_1;
					double_1 = double_1;
					int_7 = int_6;
					unsigned_int_9 = unsigned_int_5;
					short_1 = short_1;
					double_1 = double_2 * double_5;
					if(1)
					{
						short_1 = short_4 * short_2;
						double_4 = double_5;
						double_6 = double_3 + double_4;
						double_1 = double_4 * double_7;
						double_8 = double_3 * double_6;
					}
				}
				if(1)
				{
					if(1)
					{
						if(1)
						{
							int_7 = int_2 * int_1;
						}
						float_5 = float_5;
					}
					short_3 = short_5 + short_2;
					if(1)
					{
						char_2 = char_1 * char_2;
					}
					if(1)
					{
						int_2 = int_2 * int_6;
					}
					float_2 = float_3 + float_1;
					unsigned_int_2 = unsigned_int_8 + unsigned_int_3;
					long_1 = long_4 + long_3;
					long_3 = long_3 * long_7;
					float_6 = float_1 + float_6;
					char_3 = char_5;
					if(1)
					{
						double_10 = double_6 * double_9;
					}
				}
				if(1)
				{
					float_3 = float_4;
					short_5 = short_7;
					float_6 = float_5 * float_2;
					double_10 = double_5 * double_7;
					short_3 = short_2;
					unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
					if(1)
					{
						float_4 = float_1 * float_2;
						double_7 = double_8 + double_1;
					}
					if(1)
					{
						double_1 = double_10;
						int_2 = int_3 + int_6;
					}
					if(1)
					{
						float_2 = float_3 * float_3;
					}
					if(1)
					{
						if(1)
						{
							double_9 = double_9;
						}
						if(1)
						{
							short_1 = short_2 + short_8;
						}
					}
					if(1)
					{
						double_1 = double_4 + double_7;
					}
					if(1)
					{
						long_1 = long_5;
					}
					if(1)
					{
						unsigned int unsigned_int_10 = 1;
						char_3 = char_1;
						unsigned_int_5 = unsigned_int_8;
						unsigned_int_4 = unsigned_int_4;
						unsigned_int_10 = unsigned_int_10 * unsigned_int_2;
						short_2 = short_4 + short_9;
						unsigned_int_6 = unsigned_int_4 + unsigned_int_10;
						double_10 = double_10 * double_2;
					}
					if(1)
					{
						int_7 = int_6 * int_7;
					}
					if(1)
					{
						char_3 = char_3;
					}
					if(1)
					{
						if(1)
						{
							short_6 = short_9 * short_7;
						}
						double_3 = double_10 * double_7;
					}
					char_1 = char_2 * char_6;
					float_7 = float_4 + float_7;
					short_6 = short_7;
					float_1 = float_6 * float_8;
					if(1)
					{
						double_2 = double_1 + double_1;
						double_4 = double_2 + double_9;
					}
					if(1)
					{
						int_8 = int_6 + int_5;
						double_1 = double_8 * double_6;
					}
					double_4 = double_3 + double_3;
					unsigned_int_8 = unsigned_int_1;
					unsigned_int_3 = unsigned_int_8 * unsigned_int_5;
					unsigned_int_8 = unsigned_int_5 * unsigned_int_4;
					if(1)
					{
						float_4 = float_1 + float_3;
					}
				}
			}
		}
		char_5 = char_7 + char_8;
		if(1)
		{
			char_5 = char_4 + char_7;
		}
	}
	short_7 = short_6;
	if(1)
	{
		long long_8 = 1;
		short short_10 = 1;
		long_1 = long_8;
		short_10 = short_9 * short_6;
		short_10 = short_11 * short_9;
		long_1 = long_8;
		double_4 = double_10 + double_5;
		int_9 = int_9 * int_7;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				short short_12 = 1;
				float float_9 = 1;
				char char_9 = 1;
				short_12 = short_3;
				int_10 = int_6 * int_2;
				double_8 = double_3 + double_8;
				if(1)
				{
					float_1 = float_5 + float_9;
				}
				char_6 = char_1 + char_2;
				if(1)
				{
					if(1)
					{
						int_1 = int_2 + int_9;
						unsigned_int_3 = unsigned_int_5 * unsigned_int_8;
						char_7 = char_4;
					}
				}
				if(1)
				{
					unsigned_int_6 = unsigned_int_2;
					short_11 = short_7 * short_11;
				}
				float_9 = float_4 + float_4;
				float_1 = float_6 + float_6;
				unsigned_int_1 = unsigned_int_6;
				char_9 = char_2 + char_9;
				float_1 = float_2 * float_4;
				int_2 = int_7 + int_10;
				double_7 = double_3 + double_11;
				double_5 = double_1 * double_5;
				int_3 = int_5 * int_2;
				short_11 = short_6 + short_1;
				float_8 = float_2 * float_6;
				if(1)
				{
					char char_10 = 1;
					int_1 = int_1;
					char_4 = char_9 * char_3;
					char_5 = char_10 * char_4;
					long_7 = long_1 * long_8;
					double_11 = double_2 + double_1;
					double_8 = double_12 + double_8;
					long_1 = long_2 + long_3;
					short_8 = short_1 * short_9;
					char_7 = char_11 * char_7;
					unsigned_int_1 = unsigned_int_7 + unsigned_int_9;
				}
				float_7 = float_2 + float_10;
				if(1)
				{
					if(1)
					{
						double_7 = double_10 * double_7;
						unsigned_int_2 = unsigned_int_7 * unsigned_int_2;
					}
				}
			}
			short_8 = short_10 + short_5;
		}
		float_1 = float_5;
		double_14 = double_8 + double_13;
	}
	int_3 = int_7 * int_5;
	if(1)
	{
		int_1 = int_9 * int_11;
		double_9 = double_9;
		double_11 = double_4 * double_1;
	}
	if(1)
	{
		long_5 = long_7;
	}
	if(1)
	{
		long_5 = long_3 * long_4;
	}
	int_2 = int_9;
	int_4 = int_4 * int_2;
	short_6 = short_3;
	if(1)
	{
		double double_15 = 1;
		double double_16 = 1;
		double double_17 = 1;
		float float_11 = 1;
		char char_12 = 1;
		unsigned int unsigned_int_11 = 1;
		float float_12 = 1;
		int_10 = int_9;
		double_15 = double_9 * double_15;
		char_8 = char_8 * char_8;
		double_6 = double_16 * double_13;
		double_17 = double_17 + double_1;
		float_11 = float_1 + float_10;
		if(1)
		{
			char_4 = char_12 + char_7;
			unsigned_int_9 = unsigned_int_4 * unsigned_int_1;
		}
		unsigned_int_11 = unsigned_int_7 * unsigned_int_11;
		int_1 = int_7 + int_1;
		int_10 = int_6 + int_5;
		char_6 = char_12 * char_12;
		float_6 = float_11 + float_12;
		char_8 = char_11;
		int_8 = int_11;
		double_3 = double_16 * double_2;
		if(1)
		{
			unsigned int unsigned_int_12 = 1;
			unsigned_int_5 = unsigned_int_12;
		}
		if(1)
		{
			if(1)
			{
				long long_9 = 1;
				long_3 = long_6 * long_9;
			}
			if(1)
			{
				char_6 = char_5 + char_6;
			}
			if(1)
			{
				double_14 = double_12 + double_5;
			}
			if(1)
			{
				unsigned int unsigned_int_13 = 1;
				unsigned_int_5 = unsigned_int_13 * unsigned_int_3;
			}
			if(1)
			{
				long_7 = long_4;
			}
		}
		int_6 = int_6 * int_5;
	}
	if(1)
	{
		short_8 = short_11 * short_2;
	}
	if(1)
	{
		int int_12 = 1;
		int_1 = int_12 * int_11;
	}
	char_11 = char_5 * char_8;
	return unsigned_int_5;
}
short v__smart_cb_change(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned_int_1 = v__smart_apply(int_1,uni_para);

	double_3 = double_1 + double_2;
	double_3 = double_3 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	int_1 = int_1 + int_1;
	int_3 = int_1 * int_2;
	return short_1;
}
unsigned int v__smart_update_queue( int parameter_1,double parameter_2,int uni_para)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller4vul_964[3];
	fgets(controller4vul_964 ,3 ,stdin);
	if( strcmp( controller4vul_964, "*F") > 0)
	{
		short_1 = v__smart_cb_change(uni_para);

	}
	float_2 = float_1 * float_2;
	return unsigned_int_1;
}
short v__lost_selection_reset_job()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	char char_4 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_1;
	char_2 = char_1 + char_3;
	char_1 = char_1 * char_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_1 * float_2;
		int_1 = v__lost_selection(char_4,-1 );

		float_3 = float_1 + float_2;
	}
	return short_1;
}
int v__lost_selection(char parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	short_1 = short_3 + short_1;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	char controller4vul_961[3];
	fgets(controller4vul_961 ,3 ,stdin);
	if( strcmp( controller4vul_961, "Rr") > 0)
	{
		char controller4vul_962[2];
		fgets(controller4vul_962 ,2 ,stdin);
		if( strcmp( controller4vul_962, "<") < 0)
		{
			double_4 = double_3 * double_1;
			char controller4vul_963[3];
			fgets(controller4vul_963 ,3 ,stdin);
			if( strcmp( controller4vul_963, "Cn") < 0)
			{
				unsigned_int_1 = v__smart_update_queue(int_2,double_3,uni_para);

				double_1 = double_2 * double_2;
			}
			int_2 = int_2 + int_1;
		}
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char_1 = char_1 + char_2;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
		double_2 = double_2 + double_4;
		long_1 = long_1;
		int_1 = int_2 + int_1;
		double_2 = double_1 + double_3;
	}
	return int_1;
}
void v__take_selection_text( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_1;
	long_3 = long_1 + long_2;
	int_2 = int_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	short_1 = short_1 + short_1;
	short_2 = short_3;
	short_2 = short_4 + short_2;
	char controller4vul_960[2];
	fgets(controller4vul_960 ,2 ,stdin);
	if( strcmp( controller4vul_960, "+") > 0)
	{
		long long_4 = 1;
		int_1 = v__lost_selection(char_1,uni_para);

		long_2 = long_4 + long_2;
	}
	int_1 = int_3;
}
char v__cb_ctxp_link_content_copy(short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	v__take_selection_text(unsigned_int_1,unsigned_int_2,double_1,uni_para);

	double_1 = double_1;
	long_2 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	int_2 = int_1 * int_2;
	long_2 = long_2 + long_2;
	double_2 = double_2 * double_1;
	float_2 = float_1 * float_1;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	short_1 = short_1 + short_2;
	return char_1;
}
void v_ty_sb_free()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_3 = float_1 * float_2;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
void v_ty_sb_steal_buf()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		short_2 = short_1 + short_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_1 = char_1 * char_1;
		}
		int_1 = int_1 * int_1;
	}
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	double_4 = double_2 + double_3;
	char_1 = char_2 * char_2;
}
int v_codepoint_to_utf8( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_7 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_3 = 1;
		double_2 = double_1 * double_2;
		short_3 = short_1 * short_2;
	}
	if(1)
	{
		long long_2 = 1;
		char_1 = char_1;
		int_1 = int_1 + int_1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		float_1 = float_1 + float_1;
		float_1 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		int int_2 = 1;
		int int_4 = 1;
		short short_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		int_1 = int_2 + int_1;
		int_4 = int_3 + int_3;
		short_4 = short_2 + short_4;
		int_5 = int_3;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		char_3 = char_1 * char_2;
		double_3 = double_3 + double_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
		float_1 = float_2 * float_1;
		double_4 = double_4 + double_3;
	}
	if(1)
	{
		int int_6 = 1;
		float float_3 = 1;
		int_3 = int_1 * int_6;
		char_3 = char_3 + char_3;
		float_1 = float_3 * float_2;
		long_1 = long_1;
		double_2 = double_2 * double_4;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	}
	if(1)
	{
		double_2 = double_3 * double_1;
	}
	return int_7;
}
void v_ty_sb_spaces_rtrim( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_2;
	double_1 = double_1 + double_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		double double_3 = 1;
		int int_2 = 1;
		char_3 = char_2 + char_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_3 = double_2 * double_2;
		int_1 = int_1 + int_2;
	}
}
int v_ty_sb_add( short parameter_1,unsigned int parameter_2,double parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_1 = int_1 + int_1;
		long_2 = long_1 + long_1;
		int_1 = int_1 + int_2;
		if(1)
		{
		}
		double_2 = double_1 * double_2;
		float_2 = float_1 * float_2;
	}
	double_3 = double_2 * double_1;
	double_4 = double_4 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
double v__termpty_cellrow_from_beacon_get( double parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	long_2 = long_1 * long_2;
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	int_2 = int_2 + int_2;
	if(1)
	{
		int_1 = int_2 + int_2;
		int_3 = int_2 * int_1;
	}
	double_1 = double_1 * double_2;
	long_1 = long_2 + long_1;
	float_1 = float_1 * float_1;
	short_2 = v_verify_beacon(short_2,int_3);

	short_1 = short_1 + short_1;
	if(1)
	{
		char char_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_3 = 1;
		char_1 = char_1 * char_1;
		short_2 = short_3;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
		float_1 = float_1 * float_2;
		long_4 = long_3 * long_3;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		double_3 = double_3;
	}
	int_2 = int_1;
	return double_2;
}
float v_termpty_cellrow_get( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		if(1)
		{
		}
		double_1 = v__termpty_cellrow_from_beacon_get(double_2,int_1,char_1);

		int_3 = int_1 + int_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "Y") < 0)
	{
	}
	return float_1;
}
void v_termio_selection_get( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,short parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_4 = 1;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		if(1)
		{
			v_ty_sb_steal_buf();

			int_2 = int_1 + int_2;
			v_termpty_backlog_lock();

			v_ty_sb_free();

			char_2 = char_1 * char_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						v_ty_sb_spaces_rtrim(double_1);

						short_1 = short_1;
					}
					if(1)
					{
						float float_1 = 1;
						float float_2 = 1;
						float_3 = float_1 * float_2;
					}
				}
				if(1)
				{
					char_2 = char_1;
				}
			}
		}
		if(1)
		{
			short_1 = short_2 * short_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					int_1 = int_2 * int_1;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
				}
				if(1)
				{
					short_1 = short_3 + short_3;
				}
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
				}
				if(1)
				{
					char char_3 = 1;
					char_3 = char_1 * char_2;
				}
			}
			int_3 = int_3 + int_2;
		}
		if(1)
		{
			float_3 = v_termpty_cellrow_get(unsigned_int_7,int_3,unsigned_int_4);

			int_1 = v_ty_sb_add(short_4,unsigned_int_6,double_1);

			short_4 = short_2 * short_3;
		}
	}
	int_1 = v_codepoint_to_utf8(short_1,char_1);

	v_termpty_backlog_unlock();

}
float v__cb_ctxp_link_open(unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = v__activate_link(double_3,double_2);

	char_1 = char_1;
	double_4 = double_5;
	int_3 = int_1 * int_2;
	return float_1;
}
float v__should_inline( short parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = v_termio_config_get();

	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	int_1 = int_2 * int_2;
	if(1)
	{
	}
	return float_1;
}
void v_link_is_email( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
	}
}
unsigned int v_link_is_protocol( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long v_link_is_url( long parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	return long_1;
	unsigned_int_1 = v_link_is_protocol(double_1);

}
unsigned int v__activate_link( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	int int_6 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char_3 = char_1 + char_2;
	int_2 = int_1 * int_2;
	long_1 = long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	float_2 = float_1 * float_1;
	long_3 = long_1 * long_2;
	long_6 = long_4 + long_5;
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
			int_1 = int_3 + int_1;
		}
		if(1)
		{
			int_2 = int_3 * int_2;
		}
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		char_1 = char_1 * char_1;
	}
	double_3 = double_2 + double_2;
	if(1)
	{
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 + short_2;
		int_4 = int_3 + int_2;
		char controller_12[3];
		fgets(controller_12 ,3 ,stdin);
		if( strcmp( controller_12, "+V") == 0)
		{
			long_4 = v_media_src_type_get(float_2);

			double_2 = double_2 + double_4;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
		short_2 = short_2 * short_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
			v_link_is_email(int_3);

			int_1 = int_4 * int_3;
		}
	}
	if(1)
	{
		long_3 = v_link_is_url(long_4);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
		long_3 = long_5 * long_4;
		if(1)
		{
			double_2 = double_3 + double_1;
			if(1)
			{
				if(1)
				{
					unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
					float_3 = v__should_inline(short_4);

					int_4 = int_2 + int_5;
				}
				if(1)
				{
					int_4 = int_5 + int_2;
					unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
				}
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						short_1 = short_2;
					}
				}
				if(1)
				{
					if(1)
					{
						short_1 = short_1 + short_4;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
					}
				}
				char_4 = char_2 + char_4;
				int_6 = int_1;
			}
		}
	}
	if(1)
	{
		int int_7 = 1;
		float float_4 = 1;
		int_3 = int_7 * int_3;
		float_4 = float_2 * float_3;
		if(1)
		{
			char char_5 = 1;
			double_5 = double_4 + double_1;
			if(1)
			{
				char_5 = char_1;
				unsigned_int_6 = unsigned_int_2;
			}
			if(1)
			{
				int int_8 = 1;
				double double_6 = 1;
				if(1)
				{
					if(1)
					{
						int_7 = int_7;
					}
				}
				if(1)
				{
					if(1)
					{
						char_4 = char_1 * char_4;
					}
				}
				if(1)
				{
					if(1)
					{
						char_3 = char_5 + char_5;
					}
				}
				int_8 = int_3 + int_5;
				double_2 = double_3 * double_6;
			}
		}
	}
	if(1)
	{
		int_1 = int_6 * int_2;
	}
	double_3 = double_1 + double_5;
	if(1)
	{
		int_3 = int_2 + int_2;
	}
	return unsigned_int_6;
}
long v__cb_ctxp_link_preview(long parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = v__activate_link(double_1,double_2);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	double_2 = double_2 * double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	return long_1;
}
unsigned int v__is_fmt( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1 + int_2;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_2 * int_3;
		}
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
long v_media_src_type_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		unsigned_int_2 = v__is_fmt(char_1,unsigned_int_2);

		unsigned_int_3 = unsigned_int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	}
	return long_3;
}
float v__mouse_in_selection( long parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	short_3 = short_2 * short_2;
	double_2 = double_1 + double_1;
	float_2 = float_1 + float_1;
	long_3 = long_1 * long_2;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 + double_2;
		double_3 = double_1 + double_2;
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
	return float_2;
}
float v__smart_xy_to_cursor( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double_2 = double_1 + double_1;
	double_3 = double_2 + double_2;
	float_2 = float_1 + float_2;
	int_2 = int_1 + int_1;
	float_3 = float_1 + float_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_3 * int_4;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_6 = int_5 * int_5;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_1 * double_1;
	}
	return float_4;
}
float v__cb_link_down(double parameter_2,char parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_5 = 1;
	int_2 = int_1 * int_1;
	char_1 = char_1 + char_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		int int_3 = 1;
		long long_4 = 1;
		int_3 = int_3 + int_3;
		long_4 = long_1 + long_3;
		int_2 = int_4 * int_4;
	}
	char controller4vul_957[2];
	fgets(controller4vul_957 ,2 ,stdin);
	if( strcmp( controller4vul_957, "w") > 0)
	{
		long long_5 = 1;
		long long_6 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_4 = 1;
		short short_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_4 = 1;
		long_3 = long_5 + long_6;
		int_4 = int_1 * int_1;
		long_6 = long_2 + long_5;
		short_1 = short_1 * short_1;
		char controller4vul_958[2];
		fgets(controller4vul_958 ,2 ,stdin);
		if( strcmp( controller4vul_958, "`") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			short_1 = short_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			char controller4vul_959[2];
			fgets(controller4vul_959 ,2 ,stdin);
			if( strcmp( controller4vul_959, "]") > 0)
			{
				char_1 = v__cb_ctxp_link_content_copy(short_2,uni_para);

			}
		}
		float_2 = float_1 + float_1;
		float_2 = float_2;
		if(1)
		{
			char_2 = char_2 * char_3;
			if(1)
			{
				char_2 = char_1;
			}
		}
		short_2 = short_2 + short_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 * double_1;
		}
		if(1)
		{
			long_2 = long_6 + long_6;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			long_1 = long_6;
		}
		char_4 = char_3 * char_3;
		short_3 = short_1 * short_2;
		float_3 = float_1 + float_2;
		unsigned_int_5 = unsigned_int_4;
		float_4 = float_1 + float_2;
	}
	return float_5;
}
long v_main_term_popup_exists( short parameter_1)
{
	long long_1 = 1;
	return long_1;
}
char v__update_link( float parameter_1,char parameter_2,int parameter_3,double parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	double_2 = double_1 * double_2;
	int_1 = int_1 + int_1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	if(1)
	{
		short_2 = short_1 + short_1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
	}
	short_1 = short_2 + short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char_1 = char_1;
		double_1 = double_1 + double_3;
		int_1 = int_2;
		char controller4vul_955[2];
		fgets(controller4vul_955 ,2 ,stdin);
		if( strcmp( controller4vul_955, "0") < 0)
		{
			int_4 = int_1 + int_3;
			char controller4vul_956[2];
			fgets(controller4vul_956 ,2 ,stdin);
			if( strcmp( controller4vul_956, "T") < 0)
			{
				float_1 = v__cb_link_down(double_2,char_2,uni_para);

				unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
			}
			if(1)
			{
				int int_5 = 1;
				int_5 = int_5 + int_1;
			}
		}
		if(1)
		{
			int_3 = int_1 + int_2;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			int int_6 = 1;
			short_3 = short_2 * short_4;
			int_4 = int_6 * int_4;
		}
		int_1 = int_2;
		short_4 = short_2;
		double_2 = double_2 + double_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		double_2 = double_4 + double_2;
		double_5 = double_3 + double_1;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
		}
	}
	return char_1;
}
float v__remove_links( int parameter_1,unsigned int parameter_2,int uni_para)
{
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char_1 = char_1 + char_1;
	char controller4vul_954[3];
	fgets(controller4vul_954 ,3 ,stdin);
	if( strcmp( controller4vul_954, "z9") < 0)
	{
		long long_3 = 1;
		char_1 = v__update_link(float_1,char_2,int_1,double_1,uni_para);

		long_3 = long_1 * long_2;
		long_3 = long_1;
	}
	long_2 = long_1 + long_4;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_1;
	int_3 = int_2;
	double_4 = double_2 * double_3;
	short_1 = short_1;
	return float_1;
}
float v__sel_set( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int_2 = int_1 + int_1;
		short_5 = short_1 * short_4;
		short_2 = short_4 * short_5;
	}
	return float_1;
}
int v_termio_scroll_get( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_1;
	char_1 = char_1 + char_1;
	return int_1;
}
void v_miniview_position_offset( short parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		long long_3 = 1;
		long_4 = long_1 + long_3;
	}
	if(1)
	{
		double double_4 = 1;
		long_1 = long_4;
		int_1 = v_termio_scroll_get(int_1);

		double_4 = double_3;
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if(remainder_check(controller_3,100,1))
		{
			int int_2 = 1;
			int int_3 = 1;
			int_1 = int_1 * int_2;
			double_4 = double_5;
			int_1 = int_3 + int_3;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
			float_2 = float_1 + float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
			short_1 = short_1 * short_1;
			if(1)
			{
				double_5 = double_3;
			}
			if(1)
			{
				char char_1 = 1;
				char_1 = char_1 + char_1;
			}
		}
	}
}
float v_term_miniview_get( float parameter_1)
{
	float float_1 = 1;
	if(1)
	{
	}
	return float_1;
}
void v_termio_scroll( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	short short_3 = 1;
	float float_4 = 1;
	float_1 = v__remove_links(int_1,unsigned_int_1,-1 );

	short_1 = short_1;
	short_1 = short_2 * short_1;
	long_1 = long_1 + long_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			int_1 = int_2;
		}
		float_1 = float_1 * float_2;
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		int_4 = int_2 + int_3;
		double_2 = double_4 * double_5;
		float_2 = float_1 * float_2;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_2 * long_3;
		}
		if(1)
		{
			int int_5 = 1;
			float_1 = v_term_miniview_get(float_2);

			double_5 = double_3 + double_2;
			int_4 = int_5 + int_1;
			unsigned_int_1 = unsigned_int_1;
			float_1 = v__sel_set(int_3,long_4);

			int_2 = int_5 + int_1;
			double_1 = double_5;
			if(1)
			{
				short_3 = short_2 + short_2;
			}
		}
		if(1)
		{
			float float_3 = 1;
			float_1 = float_2 * float_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3;
			double_3 = double_3 * double_5;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_5 = 1;
			long long_6 = 1;
			v_miniview_position_offset(short_3,int_4,float_4);

			long_5 = long_6;
		}
	}
}
short v_termpty_save_new( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long_1 = long_1 + long_2;
	v_termpty_save_free(int_1);

	double_2 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "SM") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_3 + double_2;
	return short_1;
}
int v_termpty_save_expand( long parameter_1,short parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float_3 = float_1 * float_2;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	char_2 = char_1 + char_1;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2;
	return int_4;
}
float v__termpty_cell_is_empty( long parameter_1)
{
	float float_1 = 1;
	if(1)
	{
	}
	return float_1;
}
unsigned int v_termpty_line_length( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = v__termpty_cell_is_empty(long_1);

	int_1 = int_1 + int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
short v_verify_beacon( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
void v_termpty_text_save_top( short parameter_1,long parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = double_1 * double_2;
	int_1 = v_termpty_save_expand(long_1,short_1,double_3);

	double_1 = double_2 * double_1;
	if(1)
	{
	}
	double_1 = double_2 + double_4;
	int_3 = int_1 * int_2;
	double_3 = double_1 + double_2;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_4 = double_5 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		long_1 = long_1 + long_2;
		if(1)
		{
			v_termpty_backlog_lock();

			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double_3 = double_3;
			short_1 = v_termpty_save_new(char_1,int_3);

			short_1 = short_1 * short_2;
			short_3 = v_verify_beacon(short_4,int_1);

			unsigned_int_1 = v_termpty_line_length(unsigned_int_1,int_4);

			unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
			v_termpty_backlog_unlock();

			long_1 = long_3 + long_1;
		}
	}
	long_4 = long_3 + long_2;
	double_5 = double_5 + double_5;
	if(1)
	{
	}
	int_4 = int_2 + int_1;
	long_5 = long_1 + long_2;
	if(1)
	{
		double double_6 = 1;
		double_5 = double_4 * double_6;
	}
	int_2 = int_5 + int_6;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
	float_1 = float_2;
	if(1)
	{
		int_5 = int_1 + int_2;
		double_4 = double_1 * double_3;
	}
	char_3 = char_2 + char_2;
}
void v_termpty_text_scroll( char parameter_1,long parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	int int_6 = 1;
	int int_7 = 1;
	v_termpty_text_save_top(short_1,long_1,short_1);

	short_2 = short_1 * short_1;
	v_termpty_cells_clear(float_1,int_1,int_2);

	double_3 = double_1 + double_2;
	double_1 = double_1;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		double_4 = double_5;
	}
	double_3 = double_4;
	double_2 = double_3 * double_6;
	if(1)
	{
		int_5 = int_3 + int_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			double_1 = double_7 * double_4;
		}
	}
	if(1)
	{
		double double_8 = 1;
		int_5 = int_3;
		double_8 = double_5;
		if(1)
		{
			double_3 = double_2 + double_8;
		}
		int_6 = int_1 * int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_2 = 1;
			double_7 = double_2 * double_7;
			long_1 = long_1 + long_2;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		}
	}
	v_termio_scroll(double_1,int_6,int_4,int_7);

}
void v_termpty_text_scroll_test( float parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
		if(1)
		{
			double double_2 = 1;
			long_1 = long_1 + long_1;
			long_2 = long_1;
			double_2 = double_2 + double_1;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_3 = 1;
		int_3 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		long_3 = long_2 + long_3;
	}
	v_termpty_text_scroll(char_1,long_1);

}
double v__cursor_to_start_of_line( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	return double_1;
}
float v__tab_forward( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	return float_1;
}
unsigned int v__handle_cursor_control( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	double double_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		float float_2 = 1;
		v_termpty_text_scroll_test(float_1,char_1);

		float_1 = float_2 + float_1;
	}
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	char_1 = char_2 + char_1;
	double_1 = double_2;
	int_2 = int_1 + int_2;
	int_2 = int_3;
	double_1 = double_1 + double_3;
	if(1)
	{
		float_3 = v__tab_forward(float_4,int_4);

		double_4 = v__cursor_to_start_of_line(short_3);

		float_1 = float_4;
	}
	char_1 = char_1;
	char_2 = char_2 * char_2;
	char_1 = char_2;
	if(1)
	{
		float float_5 = 1;
		unsigned int unsigned_int_4 = 1;
		float_5 = float_3 * float_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		int_2 = int_3 * int_4;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	return unsigned_int_1;
}
int v_termpty_handle_seq( short parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int_1 = v__handle_esc(short_1,long_1,long_2,uni_para);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int_2 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 * int_3;
	}
	return int_4;
}
void v_termpty_handle_buf( short parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_2;
	int_1 = int_3 * int_3;
	char_3 = char_1 * char_2;
	double_2 = double_1 + double_1;
	char controller4vul_949[2];
	fgets(controller4vul_949 ,2 ,stdin);
	if( strcmp( controller4vul_949, "m") < 0)
	{
		int_1 = v_termpty_handle_seq(short_1,long_1,int_4,uni_para);

		short_1 = short_1 + short_1;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "]") > 0)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		long_1 = long_2 + long_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_3 * double_4;
	}
	long_2 = long_2 * long_3;
}
void v_theme_reload( int parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2;
	double_3 = double_2 + double_2;
	if(1)
	{
	}
}
float v_theme_reload_cb(float parameter_2,int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_theme_reload(int_1);

	long_2 = long_1 * long_1;
	double_2 = double_2 * double_1;
	int_3 = int_1 + int_1;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 + int_1;
	}
	return float_1;
}
void v_theme_auto_reload_enable( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	float_1 = v_theme_reload_cb(float_2,int_3,unsigned_int_1);

}
double v__cursor_shape_to_group_name( short parameter_1)
{
	double double_1 = 1;
	return double_1;
}
void v_config_theme_path_default_get( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	float_3 = float_1 + float_2;
	int_1 = int_1 * int_2;
	int_5 = int_3 * int_4;
	if(1)
	{
	}
	long_1 = long_1;
}
float v_theme_path_get()
{
	float float_1 = 1;
	return float_1;
}
unsigned int v_config_theme_path_get( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	return unsigned_int_4;
	float_1 = v_theme_path_get();

}
char v_theme_apply( unsigned int parameter_1,float parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_3 = long_1 + long_2;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_2 = v_config_theme_path_get(short_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	long_4 = long_3 * long_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	return char_1;
	v_config_theme_path_default_get(char_2);

}
void v_termio_set_cursor_shape( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_2;
	long_1 = long_1 * long_2;
	int_1 = int_3 * int_4;
	v_theme_auto_reload_enable(char_1);

	int_3 = int_4 * int_1;
	float_1 = float_1;
	double_3 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_6 = int_5 + int_4;
	if(1)
	{
		int_6 = int_6 * int_3;
		if(1)
		{
			char_2 = v_theme_apply(unsigned_int_2,float_1,short_1);

			double_1 = v__cursor_shape_to_group_name(short_2);

			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			int_2 = int_6 + int_6;
		}
	}
}
void v_termpty_clear_tabs_on_screen()
{
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( char parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_2 = double_1 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_3 = char_1 + char_2;
		}
		short_1 = short_1 + short_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "?U") > 0)
	{
		v_termpty_backlog_lock();

		char_2 = char_3 * char_2;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "!") < 0)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_3 = short_4;
	}
	char_3 = char_1 * char_2;
	v_termpty_backlog_unlock();

	int_3 = int_1 + int_2;
	v_termpty_save_free(int_3);

	char_4 = char_4 * char_2;
}
unsigned int v__ts_free()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 + double_2;
	return unsigned_int_1;
}
void v_termpty_save_free( int parameter_1)
{
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = v__ts_free();

			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		}
		short_2 = short_1 + short_1;
	}
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
	float_2 = float_1 + float_1;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_termpty_backlog_unlock();

	double_2 = double_1 + double_1;
	v_termpty_save_free(int_1);

	v_termpty_backlog_size_set(char_1,unsigned_int_1);

	double_2 = double_1;
	int_1 = int_1;
	int_2 = int_2 + int_1;
	if(1)
	{
		float_2 = float_1 * float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 + long_2;
		}
		int_1 = int_3 * int_2;
		v_termpty_backlog_lock();

		int_2 = int_2 + int_3;
	}
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_5 = int_3 * int_4;
	short_3 = short_1 * short_2;
}
void v_termpty_reset_att( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_3;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	long_1 = long_1 * long_2;
	int_2 = int_1 * int_2;
	int_1 = int_1 + int_1;
	int_1 = int_2 * int_1;
	long_4 = long_3 * long_4;
	long_2 = long_1 + long_3;
	float_2 = float_1 * float_1;
	short_1 = short_1 * short_2;
	long_1 = long_2 + long_2;
	short_3 = short_3;
	int_2 = int_2 * int_1;
	double_1 = double_3 + double_3;
	int_3 = int_1;
	char_3 = char_2 + char_1;
	int_4 = int_1 + int_2;
}
float v_termio_config_get()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_2;
	int_2 = int_1 * int_1;
	return float_1;
}
void v_termpty_reset_state()
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_5 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	float float_3 = 1;
	double double_6 = 1;
	float float_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = v_termio_config_get();

	double_1 = double_1 + double_2;
	if(1)
	{
		v_termpty_clear_tabs_on_screen();

		unsigned_int_2 = unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	char_1 = char_2;
	char_4 = char_3 + char_3;
	v_termpty_reset_att(double_2);

	short_2 = short_1 + short_1;
	float_2 = float_2 * float_1;
	char_3 = char_2 * char_5;
	double_1 = double_1 * double_2;
	int_1 = int_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
	v_termpty_clear_backlog(double_2);

	long_2 = long_1 * long_2;
	long_1 = long_2;
	int_1 = int_2;
	float_1 = float_1 * float_1;
	double_4 = double_3 * double_4;
	double_5 = double_1;
	v_termio_set_cursor_shape(short_3,unsigned_int_3);

	char_3 = char_3;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
	long_3 = long_2;
	unsigned_int_3 = unsigned_int_7 + unsigned_int_8;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	unsigned_int_10 = unsigned_int_7 * unsigned_int_9;
	float_3 = float_2 + float_2;
	int_2 = int_2 * int_2;
	double_6 = double_6;
	float_2 = float_4 + float_2;
	long_2 = long_3 * long_4;
	short_2 = short_3 + short_3;
	unsigned_int_1 = unsigned_int_11 * unsigned_int_3;
	int_1 = int_1 * int_1;
	int_3 = int_3;
	unsigned_int_11 = unsigned_int_8 + unsigned_int_9;
	unsigned_int_9 = unsigned_int_4;
	unsigned_int_10 = unsigned_int_4 + unsigned_int_10;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_2 = int_1 * int_4;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "A)") < 0)
	{
		double_5 = double_3 + double_3;
	}
}
void v_termpty_resize_tabs( double parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 * long_2;
	long_1 = long_3;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ".`") < 0)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
		if(1)
		{
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			double double_3 = 1;
			double_2 = double_1 + double_3;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	double_2 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
}
char v__termpty_init()
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float_1 = float_2;
	short_1 = short_1 + short_1;
	long_1 = long_1;
	double_2 = double_1 * double_1;
	int_1 = int_2;
	long_1 = long_1 + long_2;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_3 * long_4;
	int_4 = int_3 + int_1;
	char_2 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	v_termpty_resize_tabs(double_3,int_5,int_6);

	long_3 = long_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	return char_2;
	v_termpty_reset_state();

}
unsigned int v__add_default_keys()
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	char char_3 = 1;
	float_1 = float_1 * float_1;
	int_1 = int_1 + int_2;
	double_1 = double_1 * double_2;
	short_1 = short_1 + short_2;
	double_3 = double_2 + double_1;
	short_1 = short_1 + short_3;
	long_1 = long_2;
	char_1 = char_1 * char_1;
	double_4 = double_3 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	char_1 = char_2 * char_2;
	double_3 = double_3 + double_3;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_4;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	int_2 = int_1;
	int_2 = int_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
	int_3 = int_2 + int_3;
	short_1 = short_3 * short_2;
	short_4 = short_4 * short_2;
	int_4 = int_1 * int_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	double_3 = double_4;
	int_1 = int_2 * int_5;
	short_4 = short_4 * short_4;
	short_1 = short_2 * short_5;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_3 + double_4;
	int_1 = int_4;
	unsigned_int_6 = unsigned_int_4;
	double_4 = double_4 + double_3;
	double_2 = double_4 + double_4;
	float_2 = float_1 + float_1;
	double_4 = double_2 * double_4;
	char_1 = char_1 * char_2;
	char_2 = char_2 + char_1;
	unsigned_int_5 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	double_2 = double_4 + double_2;
	double_5 = double_5 + double_6;
	int_2 = int_5 * int_3;
	long_1 = long_1 * long_3;
	char_1 = char_2 + char_3;
	int_3 = int_1 * int_4;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_4;
	return unsigned_int_1;
}
void v_colors_standard_get( int parameter_1,int parameter_2,char parameter_3,char parameter_4,short parameter_5,double parameter_6)
{
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		short_1 = short_2;
		int_1 = int_2;
		unsigned_int_1 = unsigned_int_2;
		long_1 = long_1 + long_1;
		int_3 = int_1 * int_3;
		double_1 = double_1 + double_2;
		float_1 = float_1;
	}
	unsigned_int_2 = unsigned_int_2;
	double_1 = double_2 * double_3;
	float_1 = float_1 * float_2;
	int_4 = int_3 * int_4;
}
char v_config_new()
{
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	char char_6 = 1;
	short_1 = short_1;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		float float_3 = 1;
		double double_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		float float_6 = 1;
		float float_7 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		char char_3 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_1 = int_2;
		unsigned_int_2 = v__add_default_keys();

		float_1 = float_2;
		int_3 = int_3 * int_2;
		double_1 = double_1 + double_2;
		float_2 = float_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_2 * double_3;
		float_5 = float_4 + float_1;
		short_1 = short_2;
		long_3 = long_1 + long_2;
		float_1 = float_4 * float_2;
		int_1 = int_2 * int_2;
		short_2 = short_3;
		double_1 = double_1 * double_2;
		double_4 = double_2 + double_2;
		short_3 = short_1 + short_3;
		char_2 = char_1 + char_2;
		double_2 = double_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		long_2 = long_2 * long_3;
		double_1 = double_5;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		double_4 = double_2 + double_3;
		float_1 = float_5;
		int_1 = int_3 * int_3;
		int_3 = int_2 + int_2;
		float_2 = float_6 + float_7;
		long_4 = long_1 * long_1;
		long_4 = long_1 * long_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_4 = unsigned_int_1;
		int_3 = int_1 + int_1;
		float_7 = float_2 + float_1;
		int_4 = int_3;
		int_1 = int_1;
		char_3 = char_1 + char_1;
		float_6 = float_3 + float_4;
		char_5 = char_4 * char_2;
		char_4 = char_4 + char_5;
		unsigned_int_5 = unsigned_int_2;
		double_3 = double_1 * double_2;
		long_1 = long_4 + long_3;
		v_colors_standard_get(int_5,int_5,char_6,char_4,short_3,double_2);

		int_5 = int_5 * int_1;
		double_1 = double_1 * double_5;
		int_4 = int_1 * int_1;
		short_4 = short_3 + short_1;
		short_3 = short_2 + short_1;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int int_6 = 1;
				double double_6 = 1;
				long long_5 = 1;
				int_5 = int_6 + int_5;
				double_6 = double_3 * double_3;
				long_5 = long_5 * long_3;
				double_6 = double_3 * double_5;
				char_2 = char_6 + char_4;
				unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
			}
		}
		long_4 = long_4 * long_4;
		unsigned_int_7 = unsigned_int_7 * unsigned_int_5;
	}
	return char_4;
}
int main()
{
	int uni_para =495;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_6 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	short short_6 = 1;
	short short_7 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	float_2 = float_1 + float_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_2 + long_3;
	double_2 = double_3 * double_1;
	short_3 = short_1 + short_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		char_2 = char_2 * char_2;
	}
	if(1)
	{
		char_3 = char_2;
	}
	float_3 = float_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	short_4 = short_3 * short_4;
	unsigned_int_6 = unsigned_int_3;
	char controller4vul_947[2];
	fgets(controller4vul_947 ,2 ,stdin);
	if( strcmp( controller4vul_947, ">") < 0)
	{
		char char_4 = 1;
		char char_5 = 1;
		int int_3 = 1;
		char controller4vul_948[3];
		fgets(controller4vul_948 ,3 ,stdin);
		if( strcmp( controller4vul_948, "NT") > 0)
		{
			v_termpty_handle_buf(short_2,short_2,int_1,uni_para);

			unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			char_4 = char_1 + char_3;
		}
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		double_3 = double_2;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
		}
		short_5 = short_4 + short_5;
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		char_2 = char_4 + char_5;
		if(1)
		{
			long_2 = long_2 + long_3;
		}
		int_3 = int_1 * int_2;
		if(1)
		{
			long_2 = long_2;
		}
		if(1)
		{
			unsigned_int_7 = unsigned_int_1 + unsigned_int_3;
		}
		char_1 = char_3 + char_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_6 + unsigned_int_7;
		}
		unsigned_int_5 = unsigned_int_8 + unsigned_int_2;
		if(1)
		{
			long_3 = long_2 * long_2;
		}
		if(1)
		{
			float float_5 = 1;
			int_4 = int_5;
			if(1)
			{
				int_4 = int_3;
				float_2 = float_4;
				if(1)
				{
					float_2 = float_5 * float_4;
				}
				if(1)
				{
					char_2 = char_2;
				}
				if(1)
				{
					unsigned_int_7 = unsigned_int_4 + unsigned_int_9;
				}
				if(1)
				{
					float_1 = float_3 * float_1;
				}
				if(1)
				{
					char char_6 = 1;
					char char_7 = 1;
					char_7 = char_3 + char_6;
				}
				if(1)
				{
					short_5 = short_4 * short_4;
				}
				if(1)
				{
					double_3 = double_2 * double_2;
				}
				if(1)
				{
					int_2 = int_2 * int_3;
				}
				if(1)
				{
					double double_4 = 1;
					double_1 = double_3 * double_4;
				}
				if(1)
				{
					int_2 = int_2 * int_1;
				}
				if(1)
				{
					int_3 = int_3 * int_4;
				}
				if(1)
				{
					int_2 = int_2 + int_6;
				}
			}
			if(1)
			{
				float_6 = float_2 * float_5;
			}
		}
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_4 * unsigned_int_7;
	}
	char controller_26[2];
	fgets(controller_26 ,2 ,stdin);
	if( strcmp( controller_26, "3") > 0)
	{
		unsigned_int_6 = unsigned_int_10 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_7 * unsigned_int_7;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_7 + unsigned_int_10;
		if(1)
		{
			float_6 = float_4;
		}
	}
	unsigned_int_4 = unsigned_int_10 * unsigned_int_5;
	unsigned_int_11 = unsigned_int_7 + unsigned_int_9;
	short_6 = short_1 + short_5;
	short_1 = short_7 + short_1;
	if(1)
	{
		unsigned_int_8 = unsigned_int_9 + unsigned_int_1;
		int_6 = int_4 * int_2;
	}
	return int_5;
}

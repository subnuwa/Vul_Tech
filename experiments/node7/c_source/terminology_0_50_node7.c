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

double v__termpty_shutdown();
void v_termpty_text_scroll_rev_test( char parameter_1,short parameter_2);
char v__handle_esc_dcs( long parameter_1,long parameter_2,unsigned int parameter_3);
long v__handle_op_a( short parameter_1,short parameter_2,long parameter_3);
char v__termpty_ext_handle( int parameter_1,int parameter_2,char parameter_3);
short v__handle_esc_terminology( long parameter_1,long parameter_2,unsigned int parameter_3);
double v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3);
double v__smart_calculate_226( float parameter_1);
char v__smart_size( unsigned int parameter_1,int parameter_2,int parameter_3,short parameter_4);
void v_colors_term_init( float parameter_1,unsigned int parameter_2,float parameter_3);
void v_termio_config_update( int parameter_1);
void v__font_size_set( unsigned int parameter_1,int parameter_2);
void v_termio_font_size_set( int parameter_1,int parameter_2);
short v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3);
short v__eina_unicode_to_hex( long parameter_1);
int v__xterm_parse_color( long parameter_1,char parameter_2,int parameter_3,double parameter_4,int parameter_5);
unsigned int v__xterm_arg_get( long parameter_1);
double v__handle_esc_xterm( long parameter_1,char parameter_2,long parameter_3);
void v_termpty_cells_set_content( long parameter_1,int parameter_2,long parameter_3,int parameter_4);
char v__handle_esc_csi_decera( int parameter_1,long parameter_2);
void v_termpty_cells_att_fill_preserve_colors( double parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4);
int v__clean_up_rect_coordinates( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
float v__handle_esc_csi_decfra( char parameter_1,double parameter_2);
unsigned int v__handle_esc_csi_decslrm( unsigned int parameter_1,short parameter_2);
long v__handle_esc_csi_decstbm( char parameter_1,char parameter_2);
int v__handle_esc_csi_decscusr( double parameter_1,float parameter_2);
void v__handle_esc_csi_dsr( float parameter_1,char parameter_2);
double v__handle_esc_csi_truecolor_cmyk( float parameter_1,int parameter_2);
unsigned int v__handle_esc_csi_truecolor_cmy( char parameter_1,long parameter_2);
unsigned int v__approximate_truecolor_rgb( char parameter_1,int parameter_2,int parameter_3,int parameter_4);
void v__csi_truecolor_arg_get( int parameter_1);
float v__handle_esc_csi_truecolor_rgb( long parameter_1,long parameter_2);
float v__handle_esc_csi_color_set( int parameter_1,unsigned int parameter_2);
void v_termpty_cursor_copy( int parameter_1,float parameter_2);
char v__switch_to_alternative_screen( char parameter_1,int parameter_2);
long v__move_cursor_to_origin();
short v__pty_size( unsigned int parameter_1);
double v__limit_coord( double parameter_1);
int v__check_screen_info( char parameter_1,long parameter_2);
short v__termpty_line_rewrap( short parameter_1,double parameter_2,int parameter_3,unsigned int parameter_4,float parameter_5);
short v__backlog_remove_latest_nolock( int parameter_1);
unsigned int v_termpty_save_extract( int parameter_1);
char v__termpty_line_is_empty( short parameter_1,double parameter_2);
void v_termpty_screen_swap( double parameter_1);
void v_termpty_resize( short parameter_1,int parameter_2,int parameter_3);
char v_termio_win_get( int parameter_1);
float v__handle_esc_csi_reset_mode( unsigned int parameter_1,int parameter_2,float parameter_3);
char v__handle_esc_csi_cursor_pos_set( double parameter_1,float parameter_2,unsigned int parameter_3);
void v_termpty_text_scroll_rev( long parameter_1,float parameter_2);
void v_termpty_clear_line( double parameter_1,long parameter_2,int parameter_3);
void v_termpty_clear_screen( double parameter_1,unsigned int parameter_2);
void v_termpty_cell_codepoint_att_fill( char parameter_1,int parameter_2,double parameter_3,double parameter_4,int parameter_5);
long v__termpty_charset_trans( double parameter_1,int parameter_2);
void v_termio_content_change( unsigned int parameter_1,short parameter_2,char parameter_3,int parameter_4);
void v_termpty_text_append( double parameter_1,unsigned int parameter_2,int parameter_3,int uni_para);
char v__csi_arg_get( long parameter_1);
float v__handle_esc_csi( long parameter_1,char parameter_2,short parameter_3,int uni_para);
void v__safechar( long parameter_1);
unsigned int v__handle_esc( double parameter_1,char parameter_2,short parameter_3,int uni_para);
void v_termpty_cell_fill( char parameter_1,short parameter_2,double parameter_3,int parameter_4);
void v_termpty_cells_fill( long parameter_1,char parameter_2,long parameter_3,int parameter_4);
void v_termpty_cells_clear( float parameter_1,double parameter_2,int parameter_3);
unsigned int v__tooltip_del(long parameter_2);
short v__tooltip_content(unsigned int parameter_2,unsigned int parameter_3);
void v_MD5Final( unsigned int parameter_1,short parameter_2);
void v_MD5Transform( int parameter_1,long parameter_2);
void v_byteReverse( char parameter_1,char parameter_2);
void v_MD5Update( unsigned int parameter_1,short parameter_2,char parameter_3);
void v_MD5Init( float parameter_1);
void v_gravatar_tooltip( long parameter_1,double parameter_2,char parameter_3);
unsigned int v__cb_link_drag_done(float parameter_2);
double v__cb_link_drag_accept(char parameter_2,double parameter_3);
void v__cb_link_drag_move(double parameter_2,long parameter_3,float parameter_4,short parameter_5);
float v__cb_link_icon_new(unsigned int parameter_2,int parameter_3,unsigned int parameter_4);
char v__cb_link_move(long parameter_2,short parameter_3);
void v__cb_link_up_delay();
float v__cb_link_up(int parameter_2,char parameter_3);
void v_term_focus( long parameter_1);
double v__term_is_focused();
void v_term_unfocus( double parameter_1);
float v__cb_ctxp_del(char parameter_2,long parameter_3);
int v__cb_ctxp_dismissed(long parameter_2);
float v__cb_ctxp_link_copy(char parameter_2);
int v__screen_visual_bounds( short parameter_1);
short v__draw_cell( short parameter_1,double parameter_2,unsigned int parameter_3,unsigned int parameter_4);
float v__draw_line( long parameter_1,char parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5);
double v_termpty_backlog_length( char parameter_1);
float v_termio_pty_get( float parameter_1);
float v_termio_textgrid_get( float parameter_1);
float v_miniview_colors_get( float parameter_1,long parameter_2);
int v__deferred_renderer();
char v__queue_render( char parameter_1);
void v_miniview_redraw( float parameter_1);
long v__block_obj_del( int parameter_1);
unsigned int v__termpty_is_dblwidth_slow_get( float parameter_1,int parameter_2);
short v__termpty_is_dblwidth_get( int parameter_1,int parameter_2);
char v_term_preedit_str_get( int parameter_1);
double v_media_get();
double v__smart_media_clicked(short parameter_2);
unsigned int v_media_control_get( double parameter_1);
short v__smart_media_stop(char parameter_2);
double v__smart_media_pause(char parameter_2);
double v__smart_media_play(int parameter_2);
short v__smart_media_del(double parameter_2,unsigned int parameter_3);
void v_media_visualize_set( double parameter_1,unsigned int parameter_2);
void v_media_mute_set( double parameter_1,int parameter_2);
void v_media_volume_set( long parameter_1,double parameter_2);
void v__cb_media_vol(float parameter_2,char parameter_3,char parameter_4);
double v__cb_media_pos(float parameter_2,short parameter_3,short parameter_4);
int v__cb_media_pos_drag_stop(float parameter_2,unsigned int parameter_3,float parameter_4);
long v__cb_media_pos_drag_start(double parameter_2,float parameter_3,float parameter_4);
void v_media_stop();
double v__cb_media_stop(long parameter_2,double parameter_3,float parameter_4);
long v__cb_media_pause(double parameter_2,unsigned int parameter_3,int parameter_4);
void v_media_play_set( char parameter_1,int parameter_2);
short v__cb_media_play(float parameter_2,long parameter_3,double parameter_4);
void v_media_position_set( unsigned int parameter_1,double parameter_2);
long v__cb_mov_ref(double parameter_2);
char v__cb_mov_progress(long parameter_2);
void v__cb_mov_restart();
double v__cb_mov_decode_stop(char parameter_2);
short v__cb_mov_len_change(long parameter_2);
unsigned int v__cb_mov_frame_resize(unsigned int parameter_2);
float v__cb_mov_frame_decode(float parameter_2);
void v__type_mov_init( float parameter_1);
char v__cb_edje_preloaded(short parameter_2,short parameter_3,double parameter_4);
int v__type_edje_init();
void v__type_scale_init( unsigned int parameter_1);
short v__cb_img_frame();
short v__type_img_anim_handle( long parameter_1);
short v__cb_img_preloaded(unsigned int parameter_2,short parameter_3);
unsigned int v__type_img_init( long parameter_1);
void v__url_compl_cb(int parameter_2);
short v__url_prog_cb(int parameter_2);
float v__type_thumb_calc( unsigned int parameter_1,double parameter_2,double parameter_3,float parameter_4,int parameter_5);
long v__type_mov_calc( long parameter_1,char parameter_2,long parameter_3,long parameter_4,float parameter_5);
void v__type_edje_calc( long parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4,unsigned int parameter_5);
int v__type_img_calc( float parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4,long parameter_5);
int v__cb_scale_preloaded(char parameter_2,char parameter_3);
unsigned int v__type_scale_calc( int parameter_1,short parameter_2,char parameter_3,char parameter_4,long parameter_5,int uni_para);
short v__unsmooth_timeout(int uni_para);
char v__smooth_handler( char parameter_1,int uni_para);
int v__smart_calculate( short parameter_1,int uni_para);
double v__smart_move( char parameter_1,double parameter_2,float parameter_3);
unsigned int v__smart_resize( double parameter_1,char parameter_2,int parameter_3);
int v__smart_del( char parameter_1);
short v__smart_add( short parameter_1);
char v__smart_init(int uni_para);
short v_media_add( int parameter_1,long parameter_2,long parameter_3,int parameter_4,char parameter_5,int uni_para);
double v__block_media_activate( char parameter_1,long parameter_2,int uni_para);
double v__block_edje_message_cb(char parameter_2,double parameter_3,int parameter_4);
void v_termpty_write( float parameter_1,short parameter_2,int parameter_3);
int v__block_edje_signal_cb(unsigned int parameter_2,char parameter_3,int parameter_4);
void v_termpty_block_chid_update( unsigned int parameter_1,short parameter_2);
char v__block_edje_cmds( int parameter_1,float parameter_2,double parameter_3,int parameter_4);
int v_homedir_get( char parameter_1,long parameter_2);
short v__block_edje_activate( short parameter_1,short parameter_2);
long v__block_activate( float parameter_1,short parameter_2,int uni_para);
void v_termpty_block_get( char parameter_1,int parameter_2);
int v_termpty_block_id_get( double parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( int parameter_1,int parameter_2);
long v__smart_apply( int parameter_1,int uni_para);
short v__smart_cb_change(int uni_para);
float v__smart_update_queue( int parameter_1,int parameter_2,int uni_para);
unsigned int v__lost_selection_reset_job();
char v__lost_selection(char parameter_2,int uni_para);
long v__take_selection_text( unsigned int parameter_1,int parameter_2,float parameter_3,int uni_para);
float v__cb_ctxp_link_content_copy(long parameter_2,int uni_para);
void v_ty_sb_free( short parameter_1);
char v_ty_sb_steal_buf( short parameter_1);
int v_codepoint_to_utf8( long parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( int parameter_1);
int v_ty_sb_add( float parameter_1,char parameter_2,short parameter_3);
int v__termpty_cellrow_from_beacon_get( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
int v_termpty_cellrow_get( float parameter_1,int parameter_2,char parameter_3);
float v_termio_selection_get( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,float parameter_6,unsigned int parameter_7);
float v__cb_ctxp_link_open(long parameter_2);
double v__should_inline( float parameter_1);
float v_link_is_email( double parameter_1);
void v_link_is_protocol( long parameter_1);
long v_link_is_url( short parameter_1);
long v__activate_link( double parameter_1,char parameter_2);
char v__cb_ctxp_link_preview(double parameter_2);
double v__is_fmt( char parameter_1,unsigned int parameter_2);
float v_media_src_type_get( long parameter_1);
long v__mouse_in_selection( unsigned int parameter_1,int parameter_2,int parameter_3);
void v__smart_xy_to_cursor( short parameter_1,short parameter_2,short parameter_3,int parameter_4,int parameter_5);
unsigned int v__cb_link_down(int parameter_2,double parameter_3,int uni_para);
unsigned int v_main_term_popup_exists( float parameter_1);
double v__update_link( double parameter_1,double parameter_2,unsigned int parameter_3,short parameter_4,int uni_para);
int v__remove_links( unsigned int parameter_1,long parameter_2,int uni_para);
float v__sel_set( unsigned int parameter_1,short parameter_2);
int v_termio_scroll_get( double parameter_1);
void v_miniview_position_offset( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
double v_term_miniview_get( short parameter_1);
void v_termio_scroll( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
char v_termpty_save_new( int parameter_1,int parameter_2);
void v_termpty_save_expand( short parameter_1,float parameter_2,short parameter_3);
int v__termpty_cell_is_empty( double parameter_1);
char v_termpty_line_length( unsigned int parameter_1,double parameter_2);
long v_verify_beacon( short parameter_1,int parameter_2);
void v_termpty_text_save_top( short parameter_1,short parameter_2,double parameter_3);
void v_termpty_text_scroll( short parameter_1,unsigned int parameter_2,int uni_para);
void v_termpty_text_scroll_test( long parameter_1,long parameter_2,int uni_para);
char v__cursor_to_start_of_line( int parameter_1);
unsigned int v__tab_forward( float parameter_1,int parameter_2);
double v__handle_cursor_control( int parameter_1,float parameter_2);
int v_termpty_handle_seq( float parameter_1,long parameter_2,float parameter_3,int uni_para);
void v_termpty_handle_buf( unsigned int parameter_1,float parameter_2,int parameter_3,int uni_para);
void v_theme_reload( long parameter_1);
long v_theme_reload_cb(char parameter_2,unsigned int parameter_3,char parameter_4);
void v_theme_auto_reload_enable( short parameter_1);
float v__cursor_shape_to_group_name();
double v_config_theme_path_default_get( float parameter_1);
long v_theme_path_get();
char v_config_theme_path_get( unsigned int parameter_1);
void v_theme_apply( char parameter_1,int parameter_2,unsigned int parameter_3);
void v_termio_set_cursor_shape( float parameter_1,long parameter_2);
void v_termpty_clear_tabs_on_screen();
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( double parameter_1,long parameter_2);
char v__ts_free();
void v_termpty_save_free( long parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( double parameter_1);
void v_termpty_reset_att( float parameter_1);
int v_termio_config_get( short parameter_1);
void v_termpty_reset_state( double parameter_1);
void v_termpty_resize_tabs( char parameter_1,int parameter_2,int parameter_3);
char v__termpty_init( double parameter_1);
long v__add_default_keys( short parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,double parameter_4,int parameter_5,char parameter_6);
unsigned int v_config_new();
double v__termpty_shutdown()
{
	short short_1 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_1;
	return double_1;
}
void v_termpty_text_scroll_rev_test( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		int int_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_1;
		v_termpty_text_scroll_rev(long_1,float_1);

		double_1 = double_2;
		int_2 = int_1 + int_1;
	}
}
char v__handle_esc_dcs( long parameter_1,long parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		double double_2 = 1;
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				if(1)
				{
					double_1 = double_1 + double_2;
				}
				if(1)
				{
					double_2 = double_1 + double_2;
				}
			}
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2;
		}
		if(1)
		{
			int int_1 = 1;
			int_2 = int_1 * int_2;
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			short short_3 = 1;
			v__safechar(long_1);

			v_termpty_write(float_1,short_2,int_2);

			short_1 = short_3 + short_1;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_1 = float_2 * float_3;
		}
	}
	return char_1;
}
long v__handle_op_a( short parameter_1,short parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_2;
	float_1 = float_1 * float_1;
	return long_1;
}
char v__termpty_ext_handle( int parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_1;
	long_1 = v__handle_op_a(short_1,short_1,long_1);

	float_3 = float_1 + float_2;
	return char_1;
}
short v__handle_esc_terminology( long parameter_1,long parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int_1 = v_termio_config_get(short_1);

	char_1 = v__termpty_ext_handle(int_2,int_2,char_2);

	float_3 = float_1 + float_2;
	return short_2;
}
double v__handle_xterm_777_command( char parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	float_3 = float_3 + float_3;
	if(1)
	{
	}
	double_3 = double_1 * double_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 * int_3;
	}
	double_3 = double_1 * double_1;
	double_2 = double_2 * double_1;
	double_1 = double_1 * double_3;
	float_3 = float_4;
	long_2 = long_1 * long_2;
	return double_4;
}
double v__smart_calculate_226( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 * short_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	short_4 = short_3 + short_4;
	double_1 = double_1;
	int_1 = int_2;
	float_2 = float_1 * float_2;
	char_2 = char_1 * char_2;
	return double_1;
}
char v__smart_size( unsigned int parameter_1,int parameter_2,int parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	float float_4 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_1;
	if(1)
	{
		double_2 = v__smart_calculate_226(float_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "qP") > 0)
		{
		}
	}
	long_1 = v__smart_apply(int_1,-1 );

	char_2 = char_3 * char_1;
	double_2 = double_2;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1;
	double_1 = double_2 * double_3;
	float_2 = float_2 + float_2;
	if(1)
	{
		float_2 = v__sel_set(unsigned_int_1,short_1);

		double_3 = double_3;
	}
	float_3 = float_3 * float_2;
	short_1 = short_2;
	int_3 = int_1 * int_2;
	v_termpty_resize(short_2,int_2,int_3);

	double_3 = double_4;
	long_1 = long_2 * long_2;
	float_1 = float_1 * float_4;
	return char_2;
}
void v_colors_term_init( float parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_1;
	short_1 = short_1 * short_1;
	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char_1 = char_1 + char_1;
		if(1)
		{
			float_1 = float_1 * float_2;
			char_2 = char_2;
			char_1 = char_2 * char_3;
			char_3 = char_4;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_2;
			if(1)
			{
				float_3 = float_3 + float_2;
				char_2 = char_3 * char_4;
				unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
				char_4 = char_1 + char_3;
			}
		}
		float_4 = float_3 + float_4;
		double_1 = double_1 + double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short_1 = short_2 * short_3;
			if(1)
			{
				int_1 = int_1 + int_1;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			float_2 = float_2 * float_1;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		char char_5 = 1;
		long long_1 = 1;
		char_5 = char_5;
		if(1)
		{
			int int_2 = 1;
			unsigned int unsigned_int_5 = 1;
			int_1 = int_2 + int_1;
			double_2 = double_2 * double_1;
			short_2 = short_3 + short_3;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
			int_1 = int_2 + int_2;
		}
		long_1 = long_1;
	}
}
void v_termio_config_update( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double_3 = double_1;
	}
	short_1 = short_1;
	if(1)
	{
		char char_2 = 1;
		v_colors_term_init(float_1,unsigned_int_2,float_1);

		char_1 = char_2;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	float_1 = float_2;
	double_4 = double_3 * double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
	char_3 = char_4;
	char_5 = char_1 + char_4;
	short_1 = short_1 + short_1;
	int_2 = int_1 * int_2;
	long_2 = long_1 + long_1;
	if(1)
	{
		int_1 = int_3 * int_3;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	v_termpty_backlog_size_set(double_4,long_1);

	char_3 = v__smart_size(unsigned_int_3,int_4,int_4,short_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
	double_4 = double_4 + double_2;
	float_1 = float_2 + float_3;
	int_4 = int_3;
	v_termio_set_cursor_shape(float_2,long_3);

	double_4 = double_5 + double_6;
}
void v__font_size_set( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_3 + int_1;
	int_1 = int_3 + int_4;
	long_3 = long_1 + long_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	if(1)
	{
		v_termio_config_update(int_5);

		char_2 = char_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "G") > 0)
	{
		char char_3 = 1;
		char char_4 = 1;
		short short_1 = 1;
		int int_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_5 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_4 = char_3 * char_2;
		short_1 = short_1;
		int_2 = int_6 + int_2;
		float_2 = float_1 * float_1;
		char_3 = char_5;
		double_2 = double_1 + double_2;
	}
}
void v_termio_font_size_set( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	v__font_size_set(unsigned_int_1,int_1);

}
short v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	v_termio_font_size_set(int_1,int_1);

	char_2 = char_1 + char_1;
	return short_1;
}
short v__eina_unicode_to_hex( long parameter_1)
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
int v__xterm_parse_color( long parameter_1,char parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_5 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_2 = double_1 * double_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		long_3 = long_2;
	}
	double_1 = double_3 + double_3;
	double_1 = double_1 + double_2;
	if(1)
	{
		long long_4 = 1;
		short short_1 = 1;
		double double_4 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
		long_5 = long_1 * long_4;
		short_2 = short_1 * short_1;
		if(1)
		{
			long_2 = long_4;
		}
		long_1 = long_5 + long_1;
		double_1 = double_4;
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		char_2 = char_1 + char_2;
		char_1 = char_3;
		if(1)
		{
			double double_5 = 1;
			double_1 = double_5 + double_2;
		}
		int_4 = int_2 * int_3;
		short_3 = short_2 + short_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		float_1 = float_2;
		if(1)
		{
			double double_6 = 1;
			double_6 = double_2 + double_2;
		}
		long_1 = long_3 * long_1;
	}
	if(1)
	{
		double double_7 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double_3 = double_1 + double_7;
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		int_6 = int_1 + int_5;
		if(1)
		{
			int int_7 = 1;
			int_7 = int_3 + int_5;
		}
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		double_9 = double_8 + double_2;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			short_2 = v__eina_unicode_to_hex(long_5);

			unsigned_int_7 = unsigned_int_6 * unsigned_int_2;
		}
		int_4 = int_3 * int_2;
	}
	if(1)
	{
		int_4 = int_2 * int_4;
	}
	char_2 = char_1 * char_3;
	return int_4;
}
unsigned int v__xterm_arg_get( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	int_1 = int_1 * int_1;
	int_2 = int_2 * int_1;
	int_1 = int_3 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_6 = int_4 + int_5;
	char_3 = char_1 + char_2;
	double_1 = double_1 * double_2;
	long_1 = long_1;
	long_1 = long_2;
	char_2 = char_1 + char_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_3 = int_2 * int_3;
	int_4 = int_1 + int_1;
	double_3 = double_4;
	int_3 = int_4 + int_3;
	long_3 = long_1 + long_3;
	int_5 = int_4 + int_3;
	float_2 = float_1 + float_1;
	int_7 = int_5 + int_3;
	short_3 = short_1 * short_2;
	double_4 = double_2 * double_2;
	float_3 = float_2;
	return unsigned_int_1;
}
double v__handle_esc_xterm( long parameter_1,char parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_4 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = v_termio_textgrid_get(float_1);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	double_1 = double_1;
	double_1 = double_2 * double_1;
	v_termpty_write(float_1,short_1,int_1);

	long_2 = long_1 * long_1;
	double_4 = double_2 + double_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	}
	unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
	int_2 = int_2 + int_1;
	int_2 = int_3;
	if(1)
	{
		double_6 = double_2 * double_5;
	}
	double_3 = double_3 * double_1;
	if(1)
	{
		float float_3 = 1;
		float_4 = float_2 + float_3;
	}
	char_1 = char_1 * char_1;
	unsigned_int_6 = v__xterm_arg_get(long_3);

	double_1 = double_2 + double_1;
	char_2 = char_2;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
	double_3 = v__handle_xterm_777_command(char_2,char_2,int_4);

	short_2 = short_2 * short_1;
	if(1)
	{
		double_2 = double_5 + double_6;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 + unsigned_int_4;
		int_5 = int_2 * int_5;
		short_3 = short_2 + short_2;
	}
	if(1)
	{
		int_5 = int_3 * int_6;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_7 + unsigned_int_5;
	}
	int_6 = v_termio_config_get(short_4);

	short_5 = short_3 * short_2;
	int_1 = v__xterm_parse_color(long_2,char_2,int_7,double_2,int_2);

	short_1 = v__handle_xterm_50_command(float_2,char_1,int_8);

	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	if(1)
	{
		int int_9 = 1;
		int_6 = int_1 + int_9;
	}
	if(1)
	{
		int int_10 = 1;
		int_2 = int_10 + int_10;
	}
	if(1)
	{
		short_4 = short_4 * short_1;
		unsigned_int_1 = unsigned_int_7 * unsigned_int_2;
	}
	if(1)
	{
		float float_5 = 1;
		float_4 = float_5;
	}
	if(1)
	{
		short short_6 = 1;
		short_2 = short_3 * short_6;
	}
	long_3 = long_1 + long_4;
	float_4 = float_6 * float_7;
	return double_1;
}
void v_termpty_cells_set_content( long parameter_1,int parameter_2,long parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_1 = char_1;
	}
}
char v__handle_esc_csi_decera( int parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 * long_2;
	v_termpty_cells_set_content(long_1,int_1,long_3,int_1);

	int_1 = int_2 * int_2;
	int_3 = v__clean_up_rect_coordinates(char_1,int_4,int_2,int_4,int_5);

	float_1 = float_1 + float_2;
	long_1 = long_3 * long_1;
	float_2 = float_3 * float_2;
	long_4 = long_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		float_3 = float_2 * float_1;
	}
	return char_1;
	char_1 = v__csi_arg_get(long_2);

}
void v_termpty_cells_att_fill_preserve_colors( double parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	int_2 = int_3 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_2 = long_1 * long_2;
		short_2 = short_1 * short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_4 = 1;
			double double_5 = 1;
			int int_5 = 1;
			double_3 = double_1 * double_2;
			double_4 = double_3 + double_2;
			int_1 = int_4;
			int_4 = int_2 + int_1;
			double_1 = double_4 * double_5;
			int_3 = int_1 + int_5;
		}
	}
}
int v__clean_up_rect_coordinates( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	float float_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double_1 = double_1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_1 * double_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		char_3 = char_1 * char_2;
	}
	int_1 = int_1 * int_1;
	int_2 = int_2 + int_2;
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		char_3 = char_1 * char_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 + long_3;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
		}
	}
	if(1)
	{
		float float_4 = 1;
		float_3 = float_4;
	}
	if(1)
	{
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		double_3 = double_3 * double_3;
		if(1)
		{
			int int_3 = 1;
			int_2 = int_3 * int_1;
		}
	}
	double_2 = double_4 * double_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	}
	if(1)
	{
	}
	char_3 = char_2 * char_4;
	int_1 = int_1 * int_1;
	float_5 = float_3 * float_2;
	short_1 = short_1 + short_2;
	return int_4;
}
float v__handle_esc_csi_decfra( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v__clean_up_rect_coordinates(char_1,int_1,int_2,int_1,int_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_termpty_cells_att_fill_preserve_colors(double_1,int_2,unsigned_int_1,int_3);

	int_1 = int_4 + int_4;
	double_3 = double_2 + double_1;
	long_1 = long_1;
	int_1 = int_2 + int_5;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = v__csi_arg_get(long_3);

	double_4 = double_4 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		char_1 = char_1 + char_1;
		short_1 = short_1 + short_1;
	}
	return float_1;
}
unsigned int v__handle_esc_csi_decslrm( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_2;
	short_2 = short_1 + short_1;
	float_2 = float_1 + float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "(") > 0)
	{
		int_2 = int_1 + int_2;
	}
	float_3 = float_2 * float_2;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_1;
	}
	float_1 = float_1 * float_3;
	long_1 = v__move_cursor_to_origin();

	short_3 = short_2 * short_3;
	short_4 = short_1 + short_2;
	float_4 = float_2 + float_3;
	int_5 = int_4 * int_1;
	return unsigned_int_1;
	char_1 = v__csi_arg_get(long_2);

}
long v__handle_esc_csi_decstbm( char parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	int int_7 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 * short_2;
	double_1 = double_1;
	short_2 = short_1 * short_1;
	char_1 = v__csi_arg_get(long_1);

	int_3 = int_1 + int_2;
	int_4 = int_2 * int_3;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_3 = short_4;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	int_6 = int_5 + int_3;
	long_2 = v__move_cursor_to_origin();

	int_2 = int_3 * int_7;
	char_2 = char_1 * char_1;
	int_1 = int_4 * int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return long_1;
}
int v__handle_esc_csi_decscusr( double parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_2 = 1;
	int int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1;
	double_2 = double_1 + double_2;
	double_2 = double_2 * double_1;
	int_1 = int_2;
	int_2 = int_3 + int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	char_1 = v__csi_arg_get(long_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	float_3 = float_2 + float_3;
	int_5 = int_4 * int_3;
	long_4 = long_2 * long_3;
	int_1 = int_1 + int_5;
	v_termio_set_cursor_shape(float_3,long_5);

	char_1 = char_2;
	int_1 = int_1 + int_6;
	int_1 = int_4;
	return int_3;
}
void v__handle_esc_csi_dsr( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_3 + double_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		short short_4 = 1;
		char_1 = v__csi_arg_get(long_1);

		short_1 = short_1 + short_1;
		int_1 = int_1 + int_1;
		long_1 = long_2 * long_3;
		unsigned_int_4 = unsigned_int_1;
		short_2 = short_2 + short_2;
		v_termpty_write(float_1,short_3,int_2);

		char_2 = char_1 + char_2;
		short_2 = short_4;
	}
	if(1)
	{
		char char_3 = 1;
		float float_2 = 1;
		char_1 = char_3 + char_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		char_2 = char_3 + char_2;
		float_1 = float_2;
		int_2 = int_1;
		long_1 = long_2 * long_1;
	}
}
double v__handle_esc_csi_truecolor_cmyk( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = double_2;
	unsigned_int_1 = v__approximate_truecolor_rgb(char_1,int_1,int_2,int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	long_2 = long_1 * long_1;
	int_3 = int_4;
	v__csi_truecolor_arg_get(int_1);

	short_2 = short_1 * short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "9e") > 0)
	{
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	double_1 = double_2 * double_3;
	double_4 = double_2 * double_1;
	double_2 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_5;
	return double_3;
}
unsigned int v__handle_esc_csi_truecolor_cmy( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_3 = double_1 + double_2;
	short_3 = short_1 * short_2;
	unsigned_int_1 = v__approximate_truecolor_rgb(char_1,int_1,int_2,int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	v__csi_truecolor_arg_get(int_3);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_4 = int_3 + int_4;
	long_2 = long_1 + long_1;
	return unsigned_int_2;
}
unsigned int v__approximate_truecolor_rgb( char parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
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
			char_2 = char_1 + char_2;
			if(1)
			{
				float float_3 = 1;
				float_1 = v_termio_textgrid_get(float_2);

				float_1 = float_3;
			}
		}
	}
	return unsigned_int_1;
}
void v__csi_truecolor_arg_get( int parameter_1)
{
}
float v__handle_esc_csi_truecolor_rgb( long parameter_1,long parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_1;
	float_3 = float_1 + float_2;
	v__csi_truecolor_arg_get(int_1);

	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		short short_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short_1 = short_1 * short_2;
		unsigned_int_2 = v__approximate_truecolor_rgb(char_1,int_1,int_1,int_2);

		int_3 = int_1 + int_2;
		int_5 = int_4 + int_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "/") > 0)
	{
	}
	return float_3;
}
float v__handle_esc_csi_color_set( int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	int int_3 = 1;
	char_1 = v__csi_arg_get(long_1);

	v_termpty_reset_att(float_1);

	float_1 = v__handle_esc_csi_truecolor_rgb(long_1,long_2);

	int_1 = int_1 + int_2;
	short_1 = short_1 * short_1;
	return float_2;
	unsigned_int_1 = v__handle_esc_csi_truecolor_cmy(char_1,long_2);

	double_1 = v__handle_esc_csi_truecolor_cmyk(float_3,int_3);

}
void v_termpty_cursor_copy( int parameter_1,float parameter_2)
{
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_3 = float_1 + float_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "}") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double_3 = double_1 + double_2;
		int_1 = int_1;
		unsigned_int_1 = unsigned_int_1;
		float_3 = float_3;
	}
}
char v__switch_to_alternative_screen( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	return char_1;
	v_termpty_screen_swap(double_1);

}
long v__move_cursor_to_origin()
{
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float_1 = float_1 + float_2;
		short_2 = short_1 * short_2;
		double_1 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		int_2 = int_1 * int_2;
	}
	return long_1;
}
short v__pty_size( unsigned int parameter_1)
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
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 + short_2;
	long_3 = long_1 * long_3;
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	return short_1;
}
double v__limit_coord( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	long_1 = long_1 + long_2;
	return double_1;
}
int v__check_screen_info( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		int int_2 = 1;
		char char_3 = 1;
		double double_2 = 1;
		char_2 = char_1 * char_1;
		float_1 = float_1 + float_1;
		char_1 = char_1;
		int_2 = int_1 + int_2;
		char_2 = char_3;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_2;
		}
		v_termpty_text_save_top(short_1,short_1,double_1);

		double_2 = double_2 * double_1;
	}
	return int_1;
	v_termpty_cells_clear(float_2,double_3,int_1);

}
short v__termpty_line_rewrap( short parameter_1,double parameter_2,int parameter_3,unsigned int parameter_4,float parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short_2 = short_1 * short_1;
	long_3 = long_1 * long_2;
	short_1 = short_1 + short_3;
	return short_1;
	int_1 = v__check_screen_info(char_1,long_3);

}
short v__backlog_remove_latest_nolock( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	short short_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		char_2 = char_1;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_1 + short_3;
	}
	float_1 = float_1 * float_1;
	v_termpty_save_free(long_1);

	double_2 = double_1 + double_2;
	double_1 = double_1 + double_2;
	long_2 = v_verify_beacon(short_5,int_1);

	int_3 = int_2 + int_1;
	return short_1;
}
unsigned int v_termpty_save_extract( int parameter_1)
{
	unsigned int unsigned_int_4 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			short_2 = short_1 * short_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			int_2 = int_1 * int_1;
			int_2 = int_3;
			if(1)
			{
			}
			float_3 = float_1 * float_2;
			long_3 = long_1 * long_2;
			int_5 = int_4 + int_3;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double_1 = double_1 * double_2;
			}
		}
	}
	return unsigned_int_4;
}
char v__termpty_line_is_empty( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int_1 = v__termpty_cell_is_empty(double_1);

	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_2 = short_2 * short_1;
		if(1)
		{
		}
	}
	return char_1;
}
void v_termpty_screen_swap( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_1 + int_2;
	long_2 = long_1 + long_2;
	double_3 = double_1 * double_2;
	long_2 = long_1;
	float_1 = float_1;
	int_3 = int_2 * int_2;
	char_1 = char_1 * char_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
}
void v_termpty_resize( short parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	long long_3 = 1;
	long long_5 = 1;
	float float_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_7 = 1;
	short short_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	float float_7 = 1;
	short short_6 = 1;
	float_1 = float_2;
	short_2 = short_1 + short_2;
	float_1 = float_2 + float_2;
	long_1 = v_verify_beacon(short_1,int_1);

	double_2 = double_1 * double_1;
	if(1)
	{
	}
	float_2 = float_3;
	if(1)
	{
		int_2 = int_3;
		v_termpty_resize_tabs(char_1,int_3,int_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "v") == 0)
	{
		int_1 = int_3 * int_2;
	}
	v_termpty_backlog_unlock();

	int_4 = int_3 * int_4;
	int_2 = int_1;
	if(1)
	{
		float_2 = float_4 * float_3;
	}
	v_termpty_backlog_lock();

	int_2 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	short_1 = short_2 * short_2;
	int_4 = int_4 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_2 * double_1;
		if(1)
		{
			double_4 = double_1 * double_3;
			double_4 = v__limit_coord(double_5);

			long_1 = long_1;
		}
	}
	char_1 = char_1 + char_1;
	if(1)
	{
		int_1 = int_4;
	}
	int_2 = int_5;
	if(1)
	{
		long long_2 = 1;
		long long_4 = 1;
		short_2 = short_1 + short_2;
		long_4 = long_2 * long_3;
		int_3 = int_1;
		if(1)
		{
			short short_3 = 1;
			float float_6 = 1;
			int_4 = int_5;
			double_4 = double_4 + double_1;
			long_4 = long_3 + long_5;
			v_termpty_screen_swap(double_3);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				double_3 = double_5;
			}
			double_4 = double_4;
			double_3 = double_3 + double_5;
			double_5 = double_3 + double_2;
			float_4 = float_3 + float_4;
			short_1 = v__backlog_remove_latest_nolock(int_5);

			float_4 = float_5;
			short_3 = short_2 * short_1;
			float_6 = float_4 * float_4;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_1 = short_2 * short_1;
		double_5 = double_2 * double_1;
		int_6 = int_1;
		int_4 = int_5;
	}
	int_6 = int_5 * int_3;
	unsigned_int_4 = v_termpty_save_extract(int_6);

	char_2 = char_1;
	double_4 = double_4;
	char_3 = v__termpty_line_is_empty(short_4,double_2);

	double_1 = double_6 + double_6;
	double_6 = double_3 * double_2;
	char_3 = v_termpty_line_length(unsigned_int_5,double_2);

	double_3 = double_5 + double_5;
	double_7 = double_3 + double_1;
	int_6 = int_7 + int_2;
	if(1)
	{
		int int_8 = 1;
		int int_9 = 1;
		short_2 = v__termpty_line_rewrap(short_5,double_6,int_1,unsigned_int_3,float_4);

		int_9 = int_8 * int_8;
	}
	double_6 = double_2 * double_1;
	double_4 = double_5 * double_5;
	long_7 = long_6 + long_5;
	float_3 = float_7 + float_5;
	double_1 = double_1 * double_4;
	short_5 = short_5 + short_5;
	short_6 = v__pty_size(unsigned_int_4);

	long_3 = long_3;
	int_5 = int_7;
}
char v_termio_win_get( int parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	long_1 = long_1 * long_2;
	return char_1;
}
float v__handle_esc_csi_reset_mode( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int int_5 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	v_termpty_reset_state(double_1);

	v_termpty_clear_screen(double_1,unsigned_int_1);

	v_termpty_cursor_copy(int_1,float_1);

	double_2 = double_2 + double_3;
	int_3 = int_2 * int_1;
	char_1 = v_termio_win_get(int_4);

	long_1 = v__move_cursor_to_origin();

	int_5 = int_4 * int_5;
	return float_1;
	char_1 = v__csi_arg_get(long_2);

	v_termpty_resize(short_1,int_1,int_1);

	char_2 = v__switch_to_alternative_screen(char_1,int_3);

}
char v__handle_esc_csi_cursor_pos_set( double parameter_1,float parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_1;
	short_2 = short_1 + short_1;
	long_3 = long_1 + long_2;
	long_5 = long_4 + long_5;
	char_3 = char_1 + char_2;
	short_1 = short_3 + short_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char_3 = v__csi_arg_get(long_4);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			double_1 = double_1 * double_2;
		}
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_1 * short_4;
	}
	double_1 = double_1 * double_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		double_1 = double_3 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			char_4 = char_2 + char_4;
		}
	}
	if(1)
	{
		double_2 = double_1 * double_3;
	}
	float_2 = float_1 * float_1;
	return char_4;
}
void v_termpty_text_scroll_rev( long parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		float float_2 = 1;
		double_3 = double_1 + double_2;
		float_1 = float_1 + float_2;
	}
	double_1 = double_3 + double_2;
	v_termpty_cells_clear(float_1,double_3,int_2);

	int_3 = int_1 * int_1;
	if(1)
	{
		int_1 = int_1 + int_3;
		if(1)
		{
			v_termio_scroll(unsigned_int_1,int_1,int_2,int_1,-1 );

			unsigned_int_1 = unsigned_int_1;
		}
		int_1 = int_1;
		if(1)
		{
			int_4 = int_1 * int_4;
		}
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_2 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_6 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int_6 = int_3;
			char_2 = char_1 + char_1;
			short_1 = short_1 * short_2;
		}
		if(1)
		{
			int_3 = int_4 + int_2;
		}
	}
}
void v_termpty_clear_line( double parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = double_1 * double_1;
	double_3 = double_1 + double_2;
	long_3 = long_1 * long_2;
	double_5 = double_4 + double_4;
	v_termio_content_change(unsigned_int_1,short_1,char_1,int_1);

	double_5 = double_6 * double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	int_2 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_4;
	double_3 = double_2;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
	double_4 = double_2 * double_2;
	float_1 = float_1 + float_2;
	if(1)
	{
		double_6 = double_5 * double_3;
	}
	unsigned_int_5 = unsigned_int_7 * unsigned_int_1;
	v_termpty_cells_clear(float_1,double_4,int_3);

	char_3 = char_1 * char_2;
}
void v_termpty_clear_screen( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_3 = 1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		v_termpty_clear_line(double_1,long_1,int_2);

		double_2 = double_2 * double_2;
	}
	v_termio_content_change(unsigned_int_1,short_1,char_1,int_2);

	short_1 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_2;
	v_termpty_cells_clear(float_1,double_2,int_3);

	short_3 = short_1 + short_3;
	int_2 = int_1;
}
void v_termpty_cell_codepoint_att_fill( char parameter_1,int parameter_2,double parameter_3,double parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 * long_1;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_3 = short_1 * short_2;
		char_1 = char_1 + char_2;
	}
}
long v__termpty_charset_trans( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	short_1 = short_1 * short_1;
	if(1)
	{
		if(1)
		{
			float_3 = float_2;
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
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 * double_1;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		}
		char controller_9[3];
		fgets(controller_9 ,3 ,stdin);
		if( strcmp( controller_9, " [") < 0)
		{
			unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
	}
	return long_1;
}
void v_termio_content_change( unsigned int parameter_1,short parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_6 = 1;
	float float_6 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_2;
	char_1 = char_1 * char_2;
	long_1 = long_1 * long_1;
	int_3 = v__remove_links(unsigned_int_1,long_2,-1 );

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double double_4 = 1;
		int_3 = int_2;
		double_4 = double_2 * double_3;
		double_4 = double_2;
		float_1 = float_1 * float_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		long_3 = long_2 + long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_3 = 1;
			int_5 = int_4 * int_4;
			if(1)
			{
				double double_5 = 1;
				short_1 = short_1 + short_2;
				double_5 = double_4 * double_4;
			}
			short_3 = short_2 * short_2;
			double_1 = double_1 + double_4;
		}
	}
	if(1)
	{
	}
	int_4 = int_3;
	float_4 = float_2 + float_3;
	int_2 = int_1 * int_1;
	unsigned_int_5 = unsigned_int_5;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_4;
		char_2 = char_2;
	}
	if(1)
	{
		float float_5 = 1;
		float_1 = float_5 * float_4;
		double_7 = double_6 * double_6;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_7 = 1;
			float_5 = float_1 + float_3;
			if(1)
			{
				int_6 = int_4 * int_4;
				int_4 = int_4 * int_4;
			}
			int_2 = int_3 + int_7;
			int_3 = int_1 + int_6;
		}
	}
	if(1)
	{
		long long_4 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_7 = 1;
		long_1 = long_3 + long_4;
		short_2 = short_1 + short_4;
		float_6 = v__sel_set(unsigned_int_1,short_2);

		double_7 = double_6 * double_3;
		unsigned_int_7 = unsigned_int_3 + unsigned_int_4;
		int_5 = int_6 * int_6;
		if(1)
		{
			double_1 = double_2 * double_6;
		}
	}
}
void v_termpty_text_append( double parameter_1,unsigned int parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_2;
	double_1 = double_1 * double_2;
	int_3 = int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	char_3 = char_1 * char_2;
	long_2 = long_2 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_3 = 1;
		char char_4 = 1;
		short short_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short_1 = short_1 + short_2;
		if(1)
		{
			float float_2 = 1;
			short_2 = short_3;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
			int_2 = int_2 + int_1;
			double_2 = double_1 * double_2;
			float_3 = float_1 + float_2;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_1 = int_1;
			}
		}
		float_4 = float_3 + float_3;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		}
		char controller4vul_1904[2];
		fgets(controller4vul_1904 ,2 ,stdin);
		if( strcmp( controller4vul_1904, "]") > 0)
		{
			char controller4vul_1905[2];
			fgets(controller4vul_1905 ,2 ,stdin);
			if( strcmp( controller4vul_1905, "z") < 0)
			{
				v_termpty_text_scroll_test(long_1,long_3,uni_para);

				int_2 = int_3 + int_2;
			}
			unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
		}
		double_2 = double_3;
		if(1)
		{
			char_4 = char_3 + char_3;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		}
		short_4 = short_1;
		if(1)
		{
			int_5 = int_4 * int_3;
			float_1 = float_3 + float_1;
		}
		if(1)
		{
			short_3 = short_4 * short_1;
			long_1 = long_3 + long_1;
			if(1)
			{
				int_1 = int_5 * int_5;
			}
			if(1)
			{
				double_3 = double_3 + double_3;
			}
			if(1)
			{
				double_3 = double_3;
				int_5 = int_3 + int_4;
			}
		}
		if(1)
		{
			int int_6 = 1;
			long_3 = long_1;
			char_1 = char_4 + char_3;
			if(1)
			{
				unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
			}
			char_4 = char_4 + char_1;
			if(1)
			{
				long_3 = long_1 + long_2;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
			}
			int_6 = int_3 + int_4;
		}
	}
}
char v__csi_arg_get( long parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	int_2 = int_1 + int_2;
	float_2 = float_2 + float_1;
	long_1 = long_1 * long_1;
	short_1 = short_1 + short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "r") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return char_1;
}
float v__handle_esc_csi( long parameter_1,char parameter_2,short parameter_3,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	v_termpty_text_append(double_1,unsigned_int_1,int_1,uni_para);

	short_1 = short_1 * short_1;
	int_3 = int_2 + int_2;
	return float_1;
}
void v__safechar( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_1;
	int_3 = int_1 * int_2;
}
unsigned int v__handle_esc( double parameter_1,char parameter_2,short parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	long long_3 = 1;
	char char_6 = 1;
	short short_3 = 1;
	float float_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_12 = 1;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	float_3 = float_4;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	int_2 = int_1 + int_1;
	char_5 = char_4 + char_4;
	double_3 = double_1;
	int_1 = int_3;
	short_2 = short_1 * short_1;
	short_1 = short_2 + short_2;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	float_4 = float_2 * float_1;
	double_2 = double_3 + double_2;
	int_3 = int_2 + int_4;
	double_4 = double_4 * double_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_6;
	int_2 = int_3 + int_2;
	int_2 = int_3 + int_4;
	unsigned_int_7 = unsigned_int_7 * unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_7;
	}
	if(1)
	{
	}
	double_4 = double_5 * double_6;
	long_2 = long_1 + long_1;
	int_4 = int_3;
	if(1)
	{
	}
	char_1 = char_5 + char_5;
	int_4 = int_5 * int_6;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_7 * unsigned_int_1;
	char_5 = char_1 + char_3;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_1 + unsigned_int_8;
	char_3 = char_3 + char_2;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	unsigned_int_10 = unsigned_int_9 * unsigned_int_10;
	if(1)
	{
	}
	char controller4vul_1902[2];
	fgets(controller4vul_1902 ,2 ,stdin);
	if( strcmp( controller4vul_1902, "x") < 0)
	{
		unsigned int unsigned_int_11 = 1;
		unsigned_int_10 = unsigned_int_9 * unsigned_int_1;
		unsigned_int_7 = unsigned_int_10 * unsigned_int_4;
		double_5 = double_3 * double_1;
		unsigned_int_11 = unsigned_int_9 + unsigned_int_3;
		long_2 = long_1 * long_3;
		char controller4vul_1903[3];
		fgets(controller4vul_1903 ,3 ,stdin);
		if( strcmp( controller4vul_1903, "X ") < 0)
		{
			float_3 = v__handle_esc_csi(long_3,char_6,short_3,uni_para);

			char_5 = char_2 + char_6;
		}
		unsigned_int_7 = unsigned_int_8 + unsigned_int_4;
		unsigned_int_5 = unsigned_int_7 * unsigned_int_3;
		if(1)
		{
			unsigned_int_7 = unsigned_int_2 * unsigned_int_5;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
			float_2 = float_2 + float_2;
		}
	}
	if(1)
	{
	}
	int_3 = int_6;
	float_5 = float_2 + float_5;
	double_4 = double_7;
	int_2 = int_3 * int_1;
	long_2 = long_2 + long_1;
	return unsigned_int_12;
}
void v_termpty_cell_fill( char parameter_1,short parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
			unsigned_int_1 = unsigned_int_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
}
void v_termpty_cells_fill( long parameter_1,char parameter_2,long parameter_3,int parameter_4)
{
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_termpty_cell_fill(char_1,short_1,double_1,int_1);

	char_2 = char_2 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
}
void v_termpty_cells_clear( float parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	v_termpty_cells_fill(long_1,char_1,long_2,int_1);

}
unsigned int v__tooltip_del(long parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 + int_1;
	float_2 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_4;
}
short v__tooltip_content(unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = v_media_add(int_1,long_1,long_1,int_2,char_1,-1 );

	int_1 = int_2 * int_2;
	float_1 = float_1 + float_1;
	return short_1;
}
void v_MD5Final( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = int_2;
	long_3 = long_1 + long_2;
	v_MD5Transform(int_3,long_4);

	int_5 = int_4 * int_3;
	float_1 = float_2;
	int_1 = int_1 * int_5;
	long_3 = long_1;
	if(1)
	{
		char char_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_5 = int_4 * int_4;
		char_1 = char_1 + char_1;
		int_3 = int_1 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	long_4 = long_3 * long_1;
	short_3 = short_1 + short_2;
	v_byteReverse(char_2,char_3);

	double_2 = double_1 + double_2;
	float_3 = float_1 * float_2;
	double_4 = double_3 * double_2;
	double_1 = double_1 * double_2;
	double_5 = double_1;
}
void v_MD5Transform( int parameter_1,long parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	int int_9 = 1;
	short short_6 = 1;
	char char_4 = 1;
	char_1 = char_1 + char_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	int_2 = int_1 + int_2;
	float_1 = float_1;
	int_3 = int_2 + int_1;
	int_5 = int_1 + int_4;
	double_1 = double_1 * double_2;
	char_3 = char_2 * char_3;
	int_4 = int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_6 = int_3;
	int_3 = int_2;
	double_3 = double_2 + double_1;
	float_2 = float_1 + float_2;
	double_2 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_1;
	long_2 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	double_4 = double_4 + double_4;
	char_3 = char_3;
	double_4 = double_2 + double_1;
	int_7 = int_1;
	int_7 = int_6 + int_2;
	float_1 = float_2 * float_2;
	int_4 = int_3 * int_7;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	long_3 = long_2 + long_2;
	long_4 = long_3;
	int_7 = int_3 * int_2;
	int_1 = int_3 * int_5;
	int_7 = int_5 * int_2;
	double_5 = double_4 + double_1;
	int_3 = int_7;
	double_5 = double_4 + double_2;
	char_3 = char_1 * char_3;
	long_2 = long_1 + long_2;
	long_4 = long_4 * long_1;
	int_4 = int_4 * int_3;
	short_1 = short_2;
	float_3 = float_1 * float_3;
	char_2 = char_2 + char_1;
	short_4 = short_3 * short_3;
	float_3 = float_3 * float_3;
	short_2 = short_4 + short_4;
	unsigned_int_4 = unsigned_int_5;
	short_5 = short_4 * short_2;
	long_4 = long_2;
	int_2 = int_8 * int_5;
	double_5 = double_2 * double_5;
	double_1 = double_2 + double_4;
	double_2 = double_4;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_1;
	long_5 = long_1 + long_4;
	char_2 = char_1 + char_3;
	int_4 = int_2 + int_9;
	char_3 = char_2;
	int_4 = int_6 + int_1;
	short_5 = short_3 * short_6;
	double_2 = double_5 + double_2;
	short_3 = short_2;
	short_1 = short_3 + short_4;
	long_1 = long_3 + long_3;
	char_3 = char_2 + char_2;
	double_4 = double_5;
	int_6 = int_9;
	char_1 = char_3 + char_1;
	char_4 = char_4;
	char_2 = char_1 + char_3;
	float_3 = float_1 * float_1;
}
void v_byteReverse( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_MD5Update( unsigned int parameter_1,short parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_5 = 1;
	char_3 = char_1 * char_2;
	short_1 = short_1 + short_1;
	char_3 = char_3;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 * short_2;
	short_4 = short_1 * short_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	long_1 = long_1 * long_1;
	char_3 = char_4 + char_4;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	v_byteReverse(char_4,char_3);

	short_4 = short_1;
	double_2 = double_1 + double_1;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	v_MD5Transform(int_1,long_2);

	float_2 = float_1 + float_2;
	int_1 = int_1 + int_1;
	float_4 = float_2 + float_3;
	int_1 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_7 + unsigned_int_1;
	float_5 = float_2 * float_1;
}
void v_MD5Init( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_1;
	char_2 = char_1 + char_2;
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_1;
	char_2 = char_3 * char_4;
}
void v_gravatar_tooltip( long parameter_1,double parameter_2,char parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_5 = 1;
	long long_4 = 1;
	short_1 = v__tooltip_content(unsigned_int_1,unsigned_int_1);

	int_1 = int_1 + int_1;
	v_MD5Final(unsigned_int_2,short_2);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_1;
	short_2 = short_1 + short_1;
	int_1 = int_1;
	unsigned_int_5 = unsigned_int_3;
	v_MD5Update(unsigned_int_3,short_3,char_1);

	unsigned_int_5 = v__tooltip_del(long_1);

	int_1 = int_1 + int_1;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	v_MD5Init(float_1);

	unsigned_int_6 = unsigned_int_2;
	double_3 = double_2 * double_2;
	long_3 = long_1 * long_2;
	double_4 = double_1 * double_3;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_7 = 1;
		short_1 = short_4 + short_1;
		unsigned_int_6 = unsigned_int_6 * unsigned_int_7;
	}
	unsigned_int_6 = unsigned_int_1 + unsigned_int_8;
	short_1 = short_4 + short_4;
	double_3 = double_1 + double_5;
	long_4 = long_4;
}
unsigned int v__cb_link_drag_done(float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	double_2 = double_3 + double_1;
	double_3 = double_4 + double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	short_1 = short_1 + short_2;
	return unsigned_int_1;
}
double v__cb_link_drag_accept(char parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	int_3 = int_1 + int_2;
	char_2 = char_1 + char_2;
	int_4 = int_3 * int_2;
	return double_1;
}
void v__cb_link_drag_move(double parameter_2,long parameter_3,float parameter_4,short parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_3 = int_1 * int_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		long long_2 = 1;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 * long_2;
		}
		if(1)
		{
			long_2 = long_2 + long_2;
		}
	}
}
float v__cb_link_icon_new(unsigned int parameter_2,int parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_2;
	float_3 = float_1 * float_2;
	char_3 = char_1 + char_2;
	long_2 = long_1 + long_2;
	short_1 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return float_1;
}
char v__cb_link_move(long parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_6 = 1;
	char char_1 = 1;
	double double_7 = 1;
	float float_2 = 1;
	long_1 = long_2;
	double_3 = double_1 * double_2;
	int_2 = int_1 + int_1;
	float_1 = v__cb_link_icon_new(unsigned_int_1,int_1,unsigned_int_2);

	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
	}
	long_3 = long_1 * long_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		double_4 = double_2 + double_1;
		v__cb_link_drag_move(double_4,long_3,float_1,short_1);

		unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
		double_5 = double_5 * double_6;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if(remainder_check(controller_3,100,2))
		{
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_6;
		}
		double_7 = v__cb_link_drag_accept(char_1,double_6);

		unsigned_int_1 = v__cb_link_drag_done(float_2);

		int_1 = int_1 + int_1;
		unsigned_int_3 = unsigned_int_1;
	}
	return char_1;
}
void v__cb_link_up_delay()
{
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = v__activate_link(double_1,char_1);

	char_1 = char_1;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_2 * char_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
float v__cb_link_up(int parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_1 = float_1 + float_2;
	double_1 = double_1 * double_1;
	v__cb_link_up_delay();

	int_3 = int_1 + int_2;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_2 = double_2 + double_3;
		int_3 = int_3 * int_2;
		short_1 = short_1 + short_1;
		char_1 = char_1 + char_1;
		if(1)
		{
			if(1)
			{
				long_1 = long_1 + long_2;
			}
			if(1)
			{
				int int_4 = 1;
				int_3 = int_4 * int_2;
			}
		}
		long_1 = long_2 + long_2;
	}
	return float_2;
}
void v_term_focus( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double_1 = v__term_is_focused();

	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "0t") > 0)
	{
	}
	double_4 = double_2 + double_3;
	double_4 = double_5 + double_4;
	int_3 = int_1;
}
double v__term_is_focused()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	return double_1;
}
void v_term_unfocus( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_1 = float_1 + float_2;
	int_2 = int_1 * int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "9D") > 0)
	{
	}
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	double_2 = v__term_is_focused();

}
float v__cb_ctxp_del(char parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double_1 = double_2;
	v_term_focus(long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2;
	v_term_unfocus(double_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_2;
	return float_1;
}
int v__cb_ctxp_dismissed(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	float_2 = float_1 + float_1;
	return int_1;
}
float v__cb_ctxp_link_copy(char parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_1;
	float_1 = float_1;
	long_2 = long_1 * long_1;
	long_2 = v__take_selection_text(unsigned_int_1,int_1,float_1,-1 );

	char_3 = char_1 + char_2;
	float_1 = float_2 + float_2;
	char_2 = char_1;
	long_2 = long_1;
	return float_1;
}
int v__screen_visual_bounds( short parameter_1)
{
	int int_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double_1 = double_2;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_3 = int_1 + int_2;
		short_2 = short_1 + short_2;
	}
	return int_2;
}
short v__draw_cell( short parameter_1,double parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	float float_5 = 1;
	short_1 = short_1;
	char_1 = char_1 + char_2;
	int_3 = int_1 + int_2;
	int_1 = int_3 * int_1;
	if(1)
	{
		int_4 = int_1 + int_4;
	}
	float_2 = float_1 + float_1;
	char_5 = char_3 + char_4;
	char_3 = char_1 + char_2;
	int_5 = int_1 + int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			short_2 = short_1;
		}
	}
	if(1)
	{
		int_3 = int_4 + int_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		float float_4 = 1;
		int int_6 = 1;
		double_2 = double_1 * double_2;
		float_4 = float_3 * float_1;
		int_6 = int_3 + int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		char_3 = char_1 + char_1;
		double_1 = double_1;
	}
	if(1)
	{
		double_3 = double_2;
	}
	if(1)
	{
		float_5 = float_2 + float_3;
	}
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		float_5 = float_5 * float_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			int int_7 = 1;
			int int_8 = 1;
			int_7 = int_8;
		}
	}
	if(1)
	{
		double_3 = double_1;
	}
	return short_2;
}
float v__draw_line( long parameter_1,char parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short_1 = v__draw_cell(short_1,double_1,unsigned_int_1,unsigned_int_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return float_1;
}
double v_termpty_backlog_length( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_6 = 1;
	long long_2 = 1;
	double double_5 = 1;
	float float_7 = 1;
	double_2 = double_1 * double_1;
	double_4 = double_2 * double_3;
	float_3 = float_1 * float_2;
	double_1 = double_2 * double_1;
	float_4 = float_2 * float_4;
	short_2 = short_1 + short_1;
	float_2 = float_2;
	float_5 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_2 + short_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	int_1 = int_1;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_2 * char_3;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		long_1 = v_verify_beacon(short_2,int_2);

		float_4 = float_6 * float_5;
	}
	double_3 = double_3 * double_1;
	if(1)
	{
		float_6 = float_2 + float_5;
	}
	int_2 = int_2 * int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	long_1 = long_2 * long_2;
	long_1 = long_2 * long_2;
	double_5 = double_4 + double_3;
	double_1 = double_1;
	float_1 = float_2 * float_7;
	long_1 = long_2 * long_2;
	return double_2;
}
float v_termio_pty_get( float parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double_1 = double_1 * double_1;
	long_2 = long_1 * long_2;
	return float_1;
}
float v_termio_textgrid_get( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double_3 = double_1 + double_2;
	int_2 = int_1 + int_2;
	return float_1;
}
float v_miniview_colors_get( float parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_5 = 1;
	float_1 = float_1 + float_2;
	long_2 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int_2 = int_1 + int_1;
		float_3 = v_termio_textgrid_get(float_4);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_2;
	}
	return float_5;
}
int v__deferred_renderer()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_6 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_8 = 1;
	float float_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_6 = 1;
	short short_6 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_3 * int_4;
	unsigned_int_1 = unsigned_int_2;
	char_3 = char_1 * char_2;
	int_5 = int_5 + int_5;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 * float_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_2;
	double_2 = double_1 + double_2;
	int_1 = v__screen_visual_bounds(short_4);

	double_4 = double_2 + double_3;
	if(1)
	{
	}
	int_6 = int_2 + int_1;
	float_2 = v__draw_line(long_3,char_2,double_5,int_5,unsigned_int_1);

	double_5 = double_2 * double_3;
	double_1 = double_5 * double_6;
	int_6 = int_2 + int_1;
	double_3 = double_1 + double_5;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_5 = 1;
		short_4 = short_4 * short_5;
	}
	if(1)
	{
		char_3 = char_4 * char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_3 = long_3 * long_2;
		if(1)
		{
			char_4 = char_1 + char_2;
		}
		double_2 = double_5 + double_1;
	}
	float_2 = v_termio_pty_get(float_2);

	long_5 = long_4 * long_4;
	double_6 = double_3 + double_7;
	float_3 = float_2 + float_2;
	if(1)
	{
		long_2 = long_3 + long_1;
	}
	if(1)
	{
		float_4 = v_miniview_colors_get(float_2,long_3);

		char_3 = char_2 + char_3;
	}
	double_5 = double_8;
	int_2 = v_termpty_cellrow_get(float_5,int_2,char_5);

	int_4 = int_3 + int_3;
	if(1)
	{
		int_5 = int_1 + int_6;
		unsigned_int_4 = unsigned_int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
			int_1 = int_4 + int_1;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
				int_7 = v_termio_scroll_get(double_1);

				int_2 = int_5 + int_5;
				unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
				char_1 = char_6 * char_4;
			}
			if(1)
			{
				long long_6 = 1;
				double_5 = v_termpty_backlog_length(char_6);

				long_5 = long_3 * long_5;
				long_4 = long_2 * long_6;
			}
		}
	}
	if(1)
	{
		short_2 = short_2 + short_3;
	}
	short_1 = short_6 * short_2;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
	double_3 = double_2 * double_3;
	int_6 = int_7 + int_1;
	return int_7;
}
char v__queue_render( char parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	return char_1;
	int_2 = v__deferred_renderer();

}
void v_miniview_redraw( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "3") < 0)
	{
	}
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	char_1 = v__queue_render(char_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
long v__block_obj_del( int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	short_1 = v__smart_media_del(double_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	double_2 = double_2 * double_2;
	return long_1;
}
unsigned int v__termpty_is_dblwidth_slow_get( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
short v__termpty_is_dblwidth_get( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	unsigned_int_1 = v__termpty_is_dblwidth_slow_get(float_1,int_1);

}
char v_term_preedit_str_get( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_2;
	float_1 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "5") < 0)
	{
	}
	char_1 = char_2;
	int_3 = int_3 * int_3;
	if(1)
	{
	}
	return char_2;
}
double v_media_get()
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	return double_1;
}
double v__smart_media_clicked(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
			int_3 = v_termio_config_get(short_1);

			double_2 = double_1 + double_1;
			if(1)
			{
				float float_2 = 1;
				float float_3 = 1;
				if(1)
				{
					short short_2 = 1;
					short short_3 = 1;
					unsigned int unsigned_int_4 = 1;
					short short_4 = 1;
					short_3 = short_2 + short_1;
					unsigned_int_1 = unsigned_int_4;
					if(1)
					{
						float_1 = v_media_src_type_get(long_1);

						short_4 = short_3 + short_3;
					}
					if(1)
					{
						char char_1 = 1;
						char char_2 = 1;
						char_1 = char_1 * char_2;
						unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
						if(1)
						{
							double_2 = v_media_get();

							short_1 = short_4;
							long_1 = long_1 * long_1;
							double_2 = double_1 + double_1;
						}
					}
				}
				float_3 = float_2 + float_2;
			}
		}
	}
	int_2 = int_2 + int_2;
	return double_1;
}
unsigned int v_media_control_get( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	return unsigned_int_1;
}
short v__smart_media_stop(char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return short_3;
}
double v__smart_media_pause(char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	return double_1;
}
double v__smart_media_play(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "k*") < 0)
	{
	}
	int_4 = int_3 * int_1;
	return double_1;
}
short v__smart_media_del(double parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1;
	}
	return short_1;
}
void v_media_visualize_set( double parameter_1,unsigned int parameter_2)
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
			long_1 = long_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
}
void v_media_mute_set( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		int_1 = int_1;
	}
}
void v_media_volume_set( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	char_1 = char_2;
	long_1 = long_1 + long_1;
}
void v__cb_media_vol(float parameter_2,char parameter_3,char parameter_4)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	v_media_volume_set(long_1,double_1);

	int_2 = int_1 * int_2;
	int_3 = int_3 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "*u") > 0)
	{
	}
	double_2 = double_1 + double_2;
	double_1 = double_2;
}
double v__cb_media_pos(float parameter_2,short parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_2;
	v_media_position_set(unsigned_int_1,double_1);

	double_4 = double_2 * double_3;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	int_1 = int_1 + int_1;
	return double_2;
}
int v__cb_media_pos_drag_stop(float parameter_2,unsigned int parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_3;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 * long_2;
	long_1 = long_2 + long_1;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
long v__cb_media_pos_drag_start(double parameter_2,float parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	v_media_position_set(unsigned_int_1,double_1);

	int_3 = int_1 + int_2;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_3 + int_1;
	float_3 = float_3 * float_3;
	return long_1;
}
void v_media_stop()
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	int_3 = int_3 + int_3;
}
double v__cb_media_stop(long parameter_2,double parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_2 = double_1 + double_1;
	return double_3;
	v_media_stop();

}
long v__cb_media_pause(double parameter_2,unsigned int parameter_3,int parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	v_media_play_set(char_1,int_1);

	short_2 = short_1 * short_1;
	return long_1;
}
void v_media_play_set( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	if(1)
	{
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_1 = double_2 + double_3;
		int_2 = int_1 * int_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "bW") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		short_1 = short_1 * short_1;
	}
}
short v__cb_media_play(float parameter_2,long parameter_3,double parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short_1 = short_1 * short_2;
	return short_2;
	v_media_play_set(char_1,int_1);

}
void v_media_position_set( unsigned int parameter_1,double parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_1 = float_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	float_3 = float_2 * float_2;
}
long v__cb_mov_ref(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1;
	return long_1;
}
char v__cb_mov_progress(long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	return char_1;
}
void v__cb_mov_restart()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_2;
}
double v__cb_mov_decode_stop(char parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		v__cb_mov_restart();

		int_2 = int_1 + int_1;
	}
	float_1 = float_2;
	int_1 = int_1 + int_3;
	return double_2;
}
short v__cb_mov_len_change(long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	return short_1;
}
unsigned int v__cb_mov_frame_resize(unsigned int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	return unsigned_int_1;
	long_1 = v__type_mov_calc(long_1,char_1,long_2,long_2,float_1);

}
float v__cb_mov_frame_decode(float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	int_2 = int_1 * int_2;
	float_2 = float_1 + float_1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_1;
	double_2 = double_2 * double_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	char_2 = char_1 + char_1;
	long_1 = v__type_mov_calc(long_2,char_3,long_2,long_3,float_3);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	float_1 = float_2 * float_4;
	double_1 = double_2;
	return float_3;
}
void v__type_mov_init( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	int int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_7 = 1;
	float float_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_8 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	char char_5 = 1;
	int int_9 = 1;
	double_2 = double_1 * double_2;
	v_media_mute_set(double_3,int_1);

	double_4 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v__cb_media_pos_drag_stop(float_1,unsigned_int_2,float_2);

	int_2 = int_2 * int_1;
	double_4 = double_2 + double_1;
	v_media_visualize_set(double_2,unsigned_int_1);

	long_1 = long_1 + long_1;
	short_1 = v__cb_media_play(float_1,long_1,double_1);

	int_3 = int_1 + int_3;
	long_2 = v__cb_media_pos_drag_start(double_2,float_1,float_1);

	int_1 = int_4 + int_2;
	if(1)
	{
		int_5 = int_1 * int_3;
	}
	if(1)
	{
		double_3 = double_2 + double_4;
		v_media_play_set(char_1,int_3);

		int_5 = int_1 * int_5;
		char_1 = char_1 * char_1;
	}
	short_3 = short_2 + short_3;
	short_3 = short_1;
	double_2 = v__cb_media_pos(float_2,short_2,short_1);

	short_3 = short_1 * short_2;
	long_3 = long_4;
	double_5 = double_3;
	double_4 = v__cb_mov_decode_stop(char_1);

	short_4 = short_1 + short_1;
	int_5 = int_6 * int_1;
	if(1)
	{
		short_1 = short_3 * short_2;
	}
	if(1)
	{
		short short_5 = 1;
		short_3 = short_5 + short_3;
	}
	float_3 = v__cb_mov_frame_decode(float_4);

	int_7 = int_2 * int_3;
	v__cb_media_vol(float_5,char_2,char_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	short_2 = v__cb_mov_len_change(long_1);

	double_5 = double_4;
	int_7 = int_1 * int_5;
	short_4 = short_3 * short_3;
	int_8 = int_7 * int_1;
	long_4 = v__cb_mov_ref(double_1);

	char_4 = char_3 + char_2;
	double_6 = double_1 + double_3;
	v_media_position_set(unsigned_int_5,double_5);

	double_4 = v__cb_media_stop(long_2,double_1,float_1);

	float_4 = float_3 * float_5;
	long_4 = long_4 + long_1;
	unsigned_int_1 = v__cb_mov_frame_resize(unsigned_int_4);

	char_1 = v__cb_mov_progress(long_5);

	float_2 = float_1 * float_1;
	long_5 = long_4 + long_4;
	short_4 = short_3;
	long_1 = v__cb_media_pause(double_1,unsigned_int_6,int_6);

	double_7 = double_6;
	float_2 = float_5 * float_4;
	double_5 = double_2 * double_5;
	if(1)
	{
		v_theme_apply(char_5,int_9,unsigned_int_1);

		float_3 = float_3 + float_3;
	}
	char controller_6[2];
	fgets(controller_6 ,2 ,stdin);
	if( strcmp( controller_6, "2") < 0)
	{
		int_5 = int_1 * int_5;
	}
}
char v__cb_edje_preloaded(short parameter_2,short parameter_3,double parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	char_2 = char_1 * char_1;
	return char_2;
}
int v__type_edje_init()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_2;
	double_3 = double_2 + double_3;
	double_2 = double_3 + double_4;
	long_1 = long_1 + long_1;
	float_4 = float_3 + float_1;
	char_1 = v__cb_edje_preloaded(short_1,short_1,double_4);

	v_theme_auto_reload_enable(short_1);

	float_3 = float_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			double double_5 = 1;
			short_3 = short_2 * short_2;
			double_3 = double_4 * double_5;
			double_4 = double_5 + double_1;
		}
	}
	return int_1;
}
void v__type_scale_init( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 + double_2;
	long_2 = long_1 + long_2;
	double_2 = double_3;
	int_1 = int_1;
	int_1 = v__cb_scale_preloaded(char_1,char_1);

	double_4 = double_1;
	double_2 = double_1 + double_5;
	double_5 = double_5 * double_6;
	double_2 = double_2 * double_2;
	long_1 = long_3 + long_3;
	long_2 = long_2 * long_3;
	short_1 = short_1 + short_2;
	float_2 = float_1 * float_1;
}
short v__cb_img_frame()
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 * int_1;
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		char_1 = char_1 + char_2;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			if(1)
			{
				double_1 = double_1 + double_1;
			}
		}
	}
	char_2 = char_3 + char_1;
	char_1 = char_2 + char_2;
	short_1 = short_2 * short_1;
	return short_3;
}
short v__type_img_anim_handle( long parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float_1 = float_1;
	long_1 = long_1 * long_2;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	long_1 = long_3 * long_3;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	char_1 = char_1;
	return short_1;
	short_1 = v__cb_img_frame();

}
short v__cb_img_preloaded(unsigned int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	char_1 = char_1 * char_2;
	return short_1;
}
unsigned int v__type_img_init( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_2;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_2;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_2;
	short_3 = v__type_img_anim_handle(long_1);

	double_3 = double_1 + double_2;
	float_3 = float_3 * float_4;
	char_1 = char_1 + char_1;
	short_4 = v__cb_img_preloaded(unsigned_int_2,short_4);

	double_1 = double_3 + double_2;
	float_2 = float_3 * float_5;
	int_3 = int_2 * int_2;
	return unsigned_int_3;
}
void v__url_compl_cb(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	long long_5 = 1;
	unsigned_int_1 = v__type_img_init(long_1);

	float_1 = float_1 * float_1;
	char_1 = char_1 * char_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "j|") < 0)
	{
	}
	long_4 = long_2 * long_3;
	int_1 = int_1 + int_1;
	v__type_scale_init(unsigned_int_2);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	short_1 = short_1;
	int_1 = int_1 + int_1;
	float_1 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	int_1 = v__smart_calculate(short_2,-1 );

	float_3 = float_1 + float_2;
	int_2 = v__type_edje_init();

	v__type_mov_init(float_1);

	char_3 = char_3 * char_1;
	double_1 = double_1 * double_1;
	short_2 = short_1;
	int_1 = int_2 * int_3;
	char_1 = char_1 + char_4;
	double_1 = double_2 * double_2;
	int_1 = int_2;
	int_2 = int_2 + int_1;
	long_5 = long_4 + long_1;
	float_1 = float_3 * float_3;
	int_1 = int_1 * int_1;
}
short v__url_prog_cb(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int_1 = int_1 * int_1;
		if(1)
		{
			float_1 = float_2 * float_1;
		}
		double_1 = double_1 * double_2;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_1 = 1;
			short_2 = short_1 * short_2;
			float_4 = float_3 + float_3;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
			long_1 = long_1 * long_1;
		}
	}
	return short_3;
}
float v__type_thumb_calc( unsigned int parameter_1,double parameter_2,double parameter_3,float parameter_4,int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float_1 = float_1 + float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "(S") < 0)
	{
	}
	if(1)
	{
		int_1 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double_1 = double_1 * double_1;
		float_1 = float_1 * float_1;
		int_1 = int_1 * int_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_4;
			double_1 = double_2;
		}
		double_3 = double_3 * double_1;
		int_1 = int_1 * int_1;
		long_1 = long_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
	}
	double_3 = double_2 + double_4;
	double_3 = double_5;
	return float_2;
}
long v__type_mov_calc( long parameter_1,char parameter_2,long parameter_3,long parameter_4,float parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_4 = 1;
	int int_5 = 1;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	short_2 = short_1 * short_2;
	long_2 = long_3 * long_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		char char_5 = 1;
		float float_5 = 1;
		char_1 = char_2;
		float_2 = float_2 * float_3;
		char_4 = char_1 * char_3;
		if(1)
		{
			int_3 = int_2 * int_1;
		}
		if(1)
		{
			long_3 = long_3;
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 * double_1;
			char_2 = char_4 * char_3;
			if(1)
			{
				double double_2 = 1;
				unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
				double_2 = double_1;
				if(1)
				{
					char_3 = char_3 + char_3;
				}
			}
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_3 + short_1;
			int_4 = int_2 + int_1;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
				int_1 = int_1 + int_1;
				if(1)
				{
					long_2 = long_1 + long_3;
				}
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			float_1 = float_1 * float_3;
		}
		int_4 = int_4;
		char_3 = char_5 * char_2;
		float_5 = float_2 + float_4;
		int_3 = int_4 + int_1;
	}
	int_5 = int_1 + int_2;
	float_2 = float_4;
	return long_1;
}
void v__type_edje_calc( long parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4,unsigned int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
int v__type_img_calc( float parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_5 = 1;
	float float_2 = 1;
	int int_6 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_1 + short_1;
		short_2 = short_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			char_2 = char_1 + char_2;
			double_1 = double_1 + double_1;
			if(1)
			{
				double_1 = double_2;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
				if(1)
				{
					short short_3 = 1;
					short_1 = short_1 + short_3;
				}
			}
		}
		if(1)
		{
			double double_4 = 1;
			double_1 = double_3 * double_4;
			int_1 = int_1 + int_1;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
				unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
				if(1)
				{
					float_1 = float_1 * float_1;
				}
			}
			if(1)
			{
				int_3 = int_2 + int_2;
				double_2 = double_2 + double_2;
			}
		}
		if(1)
		{
			int int_4 = 1;
			double double_5 = 1;
			int_4 = int_1 + int_2;
			double_5 = double_5 * double_3;
		}
		int_5 = int_3;
		int_2 = int_2;
		char_1 = char_2;
		short_2 = short_2 * short_4;
	}
	float_2 = float_1 * float_1;
	int_1 = int_6 * int_5;
	return int_5;
}
int v__cb_scale_preloaded(char parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	long_3 = long_1 + long_2;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = float_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_2 = 1;
		short_3 = short_1 * short_2;
		int_1 = int_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
		int_3 = int_2 * int_1;
	}
	return int_3;
}
unsigned int v__type_scale_calc( int parameter_1,short parameter_2,char parameter_3,char parameter_4,long parameter_5,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char * vul_var;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 * int_1;
		short_1 = short_1 * short_1;
	}
	char controller4vul_1943[2];
	fgets(controller4vul_1943 ,2 ,stdin);
	if( strcmp( controller4vul_1943, ";") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		double_2 = double_1 + double_1;
		char controller4vul_1944[2];
		fgets(controller4vul_1944 ,2 ,stdin);
		if( strcmp( controller4vul_1944, "_") < 0)
		{
			char char_1 = 1;
			char char_3 = 1;
			float_1 = float_1 * float_1;
			char_3 = char_1 + char_2;
			char controller4vul_1945[2];
			fgets(controller4vul_1945 ,2 ,stdin);
			if( strcmp( controller4vul_1945, "D") < 0)
			{
				strcpy(vul_var, "CWE-761");
				if(uni_para == 273)
				{
					vul_var = vul_var + 1;
				}
				unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
				double_3 = double_2;
				if(1)
				{
					free(vul_var);
					int_3 = int_3 * int_3;
				}
			}
		}
		if(1)
		{
			long_1 = long_1 + long_2;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
			if(1)
			{
				double_3 = double_1 * double_1;
				short_1 = short_2 * short_3;
				if(1)
				{
					short_3 = short_2 + short_2;
				}
			}
		}
		if(1)
		{
			double_4 = double_4 + double_4;
			float_2 = float_1 * float_2;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_4;
		double_4 = double_4 + double_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		float_1 = float_1 + float_2;
		double_3 = double_1;
		int_1 = int_1 + int_3;
		if(1)
		{
			double_1 = double_2 * double_4;
		}
		if(1)
		{
			short_2 = short_2 * short_1;
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			short short_4 = 1;
			float_3 = float_3;
			double_4 = double_2 * double_5;
			char_4 = char_2;
			double_5 = double_6 * double_2;
			int_3 = int_3;
			float_2 = float_4 + float_2;
			short_3 = short_4;
			float_1 = float_3;
			double_6 = double_1 * double_5;
		}
		double_3 = double_5 + double_5;
		double_4 = double_6 + double_6;
	}
	if(1)
	{
		long_1 = long_2 + long_1;
		char_4 = char_2;
	}
	int_2 = int_3 * int_4;
	int_5 = int_2 + int_1;
	double_4 = double_3;
}
short v__unsmooth_timeout(int uni_para)
{
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char_1 = char_1;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	short_2 = short_2 + short_1;
	int_2 = int_1 * int_1;
	char controller4vul_1941[2];
	fgets(controller4vul_1941 ,2 ,stdin);
	if( strcmp( controller4vul_1941, "[") < 0)
	{
		int_2 = int_2 + int_2;
		char controller4vul_1942[2];
		fgets(controller4vul_1942 ,2 ,stdin);
		if( strcmp( controller4vul_1942, "T") < 0)
		{
			char char_3 = 1;
			unsigned_int_1 = v__type_scale_calc(int_2,short_1,char_2,char_2,long_1,uni_para);

			char_3 = char_3 * char_2;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_2 = int_1 * int_3;
	}
	return short_1;
}
char v__smooth_handler( char parameter_1,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_1 = short_1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
		double_2 = double_2;
	}
	char controller4vul_1937[3];
	fgets(controller4vul_1937 ,3 ,stdin);
	if( strcmp( controller4vul_1937, "(+") < 0)
	{
		char controller4vul_1938[3];
		fgets(controller4vul_1938 ,3 ,stdin);
		if( strcmp( controller4vul_1938, "R6") < 0)
		{
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			float_1 = float_2;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			char controller4vul_1939[2];
			fgets(controller4vul_1939 ,2 ,stdin);
			if( strcmp( controller4vul_1939, "G") > 0)
			{
				char_1 = char_1;
				char controller4vul_1940[2];
				fgets(controller4vul_1940 ,2 ,stdin);
				if( strcmp( controller4vul_1940, "N") < 0)
				{
					short_2 = v__unsmooth_timeout(uni_para);

					int_1 = int_1 + int_1;
				}
			}
			if(1)
			{
				char_1 = char_2;
			}
			if(1)
			{
				long long_1 = 1;
				long_1 = long_1 + long_1;
			}
			int_1 = int_3 + int_4;
		}
	}
	if(1)
	{
		float float_3 = 1;
		if(1)
		{
			int_3 = int_4 * int_2;
		}
		float_1 = float_3 * float_3;
	}
	return char_2;
}
int v__smart_calculate( short parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	char controller4vul_1936[2];
	fgets(controller4vul_1936 ,2 ,stdin);
	if( strcmp( controller4vul_1936, "j") < 0)
	{
		char_1 = v__smooth_handler(char_2,uni_para);

	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		double_1 = double_1;
	}
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	double_1 = double_1 + double_1;
	double_2 = double_1;
	double_3 = double_3 + double_2;
	long_1 = long_1 * long_1;
	long_3 = long_2 * long_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	int_1 = int_2 + int_1;
	float_2 = float_3;
	double_3 = double_3 * double_2;
	int_1 = int_2 + int_1;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	int_3 = int_1 * int_3;
	int_4 = int_4 * int_5;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		double_3 = double_1 + double_1;
		int_2 = int_1 * int_2;
	}
	return int_3;
}
double v__smart_move( char parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	double_5 = double_3 * double_4;
	return double_3;
}
unsigned int v__smart_resize( double parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long_1 = long_1;
	int_1 = int_2;
	if(1)
	{
	}
	int_3 = int_3 * int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1;
	return unsigned_int_3;
}
int v__smart_del( char parameter_1)
{
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		short short_2 = 1;
		short_4 = short_2 * short_3;
		long_2 = long_1 + long_2;
		double_1 = double_2;
	}
	short_3 = short_5 + short_5;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			short_3 = short_4;
		}
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2 * float_2;
	}
	if(1)
	{
		double_2 = double_3 + double_4;
	}
	if(1)
	{
		double_5 = double_5 * double_3;
	}
	if(1)
	{
		double_4 = double_5 + double_1;
	}
	if(1)
	{
		double_5 = double_3 + double_6;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2 * int_1;
	}
	if(1)
	{
		long_1 = long_2 * long_2;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 + int_4;
	}
	double_2 = double_1 + double_5;
	double_4 = double_4 * double_6;
	return int_4;
}
short v__smart_add( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double_1 = double_1 + double_2;
	float_2 = float_1 + float_1;
	float_1 = float_2 * float_1;
	short_2 = short_1 + short_1;
	int_1 = int_1 + int_1;
	float_2 = float_1 + float_1;
	double_2 = double_2 + double_1;
	double_2 = double_2 + double_1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return short_3;
}
char v__smart_init(int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	char char_1 = 1;
	int_1 = v__smart_calculate(short_1,uni_para);

	short_1 = short_2 + short_1;
	short_3 = short_1 * short_1;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	double_1 = double_1 * double_1;
	double_3 = double_2 * double_1;
	long_3 = long_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	long_4 = long_1 * long_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return char_1;
}
short v_media_add( int parameter_1,long parameter_2,long parameter_3,int parameter_4,char parameter_5,int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_4 = 1;
	long long_4 = 1;
	int int_8 = 1;
	short short_7 = 1;
	long long_5 = 1;
	int int_9 = 1;
	short short_9 = 1;
	short short_10 = 1;
	long long_6 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1 * double_2;
	short_2 = short_3;
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_4 = double_3 + double_4;
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	long_3 = long_1 + long_2;
	int_2 = int_1 + int_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	char_1 = char_2 + char_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	char controller4vul_1930[3];
	fgets(controller4vul_1930 ,3 ,stdin);
	if( strcmp( controller4vul_1930, "=v") < 0)
	{
		char controller4vul_1931[3];
		fgets(controller4vul_1931 ,3 ,stdin);
		if( strcmp( controller4vul_1931, "pJ") > 0)
		{
			float float_1 = 1;
			int int_4 = 1;
			int int_5 = 1;
			char char_3 = 1;
			unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
			long_3 = long_2 * long_2;
			if(1)
			{
				float_1 = float_1;
				int_2 = int_2 * int_1;
				unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
			}
			if(1)
			{
				double double_5 = 1;
				unsigned_int_4 = unsigned_int_6 * unsigned_int_6;
				int_3 = int_3 + int_4;
				double_3 = double_5 * double_1;
			}
			if(1)
			{
				short short_5 = 1;
				short_5 = short_4 * short_4;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
			}
			if(1)
			{
				int_3 = int_2 + int_5;
			}
			if(1)
			{
				int_5 = int_5 + int_5;
			}
			if(1)
			{
				short_6 = short_3 * short_2;
			}
			if(1)
			{
				char_2 = char_2 * char_2;
				unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
				long_3 = long_3 * long_3;
				int_1 = int_4 + int_4;
				int_1 = int_5 + int_1;
				unsigned_int_3 = unsigned_int_4 * unsigned_int_7;
				char_3 = char_2 + char_1;
			}
			char controller4vul_1932[2];
			fgets(controller4vul_1932 ,2 ,stdin);
			if( strcmp( controller4vul_1932, "`") > 0)
			{
				char char_4 = 1;
				char char_5 = 1;
				int_7 = int_6 + int_5;
				char_5 = char_3 + char_4;
				unsigned_int_7 = unsigned_int_8 * unsigned_int_3;
				char controller4vul_1933[2];
				fgets(controller4vul_1933 ,2 ,stdin);
				if( strcmp( controller4vul_1933, "0") > 0)
				{
					float float_2 = 1;
					float float_3 = 1;
					int_1 = int_3 * int_7;
					if(1)
					{
						unsigned_int_5 = unsigned_int_1;
						float_3 = float_2 + float_3;
					}
					char controller4vul_1934[2];
					fgets(controller4vul_1934 ,2 ,stdin);
					if( strcmp( controller4vul_1934, "q") < 0)
					{
						unsigned_int_7 = unsigned_int_2 * unsigned_int_8;
						char controller4vul_1935[2];
						fgets(controller4vul_1935 ,2 ,stdin);
						if( strcmp( controller4vul_1935, "c") < 0)
						{
							char_2 = v__smart_init(uni_para);

							double_4 = double_3 * double_4;
							float_4 = float_4;
							float_1 = float_2 * float_4;
						}
						if(1)
						{
							unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
							long_3 = long_4;
							int_8 = int_4 * int_8;
							float_1 = float_3 * float_2;
							int_5 = int_1;
							int_6 = int_7 + int_2;
							int_2 = int_8;
							int_3 = int_4 * int_7;
							double_3 = double_2 + double_1;
						}
					}
				}
				if(1)
				{
					int_6 = int_5 * int_7;
				}
			}
		}
		if(1)
		{
			short_2 = short_1 + short_7;
		}
	}
	if(1)
	{
		if(1)
		{
			short_4 = short_7 + short_2;
			short_6 = short_4 * short_4;
		}
	}
	if(1)
	{
		double double_6 = 1;
		float float_5 = 1;
		float float_6 = 1;
		if(1)
		{
			int_3 = int_1 + int_6;
			double_2 = double_2 * double_4;
		}
		double_6 = double_3;
		if(1)
		{
			unsigned_int_8 = unsigned_int_8 * unsigned_int_6;
			double_3 = double_3 * double_2;
		}
		double_6 = double_1 + double_2;
		if(1)
		{
			short short_8 = 1;
			short_8 = short_6;
			unsigned_int_7 = unsigned_int_2 + unsigned_int_5;
		}
		double_3 = double_4 * double_6;
		if(1)
		{
			int_3 = int_2 + int_1;
			long_2 = long_5 + long_4;
		}
		long_4 = long_2 + long_5;
		float_4 = float_5 * float_6;
	}
	int_7 = int_2 * int_1;
	int_9 = int_8 * int_8;
	unsigned_int_4 = unsigned_int_7;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
	long_2 = long_5;
	short_10 = short_4 * short_9;
	long_2 = long_3 + long_2;
	long_4 = long_6;
	if(1)
	{
		int_2 = int_3 * int_6;
	}
	return short_1;
}
double v__block_media_activate( char parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_2;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_1 * double_1;
	char controller4vul_1929[2];
	fgets(controller4vul_1929 ,2 ,stdin);
	if( strcmp( controller4vul_1929, "7") > 0)
	{
		short_1 = v_media_add(int_2,long_1,long_1,int_1,char_1,uni_para);

		short_2 = short_1 + short_1;
	}
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	if(1)
	{
		double_3 = double_1 * double_1;
	}
	if(1)
	{
		double_3 = double_1 * double_4;
	}
	if(1)
	{
		double_1 = double_1 + double_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short_1 = short_1;
	}
	short_2 = short_2 + short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	float_1 = float_1 + float_2;
	short_3 = short_1 * short_1;
	double_2 = double_4 + double_4;
	unsigned_int_1 = unsigned_int_5;
	short_4 = short_3 * short_1;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2 * char_1;
		double_1 = double_4 + double_4;
	}
	short_2 = short_3 + short_2;
	int_1 = int_3;
	double_3 = double_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	}
	return double_1;
}
double v__block_edje_message_cb(char parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_6 = 1;
	long long_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	long long_4 = 1;
	double double_7 = 1;
	float float_6 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	char char_4 = 1;
	double double_9 = 1;
	float float_7 = 1;
	double double_10 = 1;
	short short_4 = 1;
	int int_6 = 1;
	float float_8 = 1;
	int int_7 = 1;
	double double_11 = 1;
	double_3 = double_1 + double_2;
	int_2 = int_1 * int_1;
	int_2 = int_3;
	double_4 = double_4 + double_5;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "1") > 0)
	{
		float_2 = float_1 + float_1;
	}
	int_1 = int_3 * int_4;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_1 = long_1 * long_1;
	long_1 = long_2;
	double_2 = double_1 + double_5;
	int_1 = int_4 + int_4;
	float_4 = float_2 * float_3;
	double_4 = double_3 + double_6;
	long_3 = long_3 + long_3;
	int_1 = int_5 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_2 = long_1 * long_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_4 = double_4 * double_4;
	double_6 = double_4 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1 + char_2;
		unsigned_int_5 = unsigned_int_4;
	}
	char_1 = char_2;
	double_6 = double_4 * double_6;
	float_4 = float_4 + float_5;
	double_4 = double_5;
	long_4 = long_1 + long_1;
	double_6 = double_7 * double_1;
	float_6 = float_1 * float_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_4 = double_4 + double_8;
		unsigned_int_4 = unsigned_int_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
	}
	int_2 = int_5 * int_1;
	char_2 = char_1 + char_3;
	float_4 = float_2 + float_6;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_2;
	float_4 = float_4 * float_3;
	char_2 = char_3 + char_3;
	int_5 = int_3 * int_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_3 = long_4 + long_1;
		short_3 = short_3 * short_1;
		short_2 = short_2 * short_3;
	}
	double_4 = double_5;
	char_4 = char_1;
	long_1 = long_3;
	long_4 = long_1 + long_1;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_7;
	long_1 = long_2 + long_3;
	float_1 = float_2 + float_2;
	long_1 = long_4 + long_2;
	int_4 = int_4;
	int_1 = int_5 + int_2;
	unsigned_int_7 = unsigned_int_2 * unsigned_int_1;
	v_termpty_write(float_4,short_3,int_2);

	double_1 = double_3 + double_9;
	double_4 = double_8;
	long_2 = long_2 + long_2;
	short_3 = short_3;
	float_3 = float_7 * float_6;
	double_10 = double_1 + double_10;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short short_5 = 1;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_6;
		short_4 = short_5;
		int_5 = int_5 * int_3;
	}
	long_3 = long_3 * long_1;
	unsigned_int_7 = unsigned_int_7 * unsigned_int_2;
	int_1 = int_6 + int_4;
	int_6 = int_1;
	float_3 = float_8 + float_4;
	int_1 = int_7 + int_5;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_6;
	int_4 = int_7;
	char_1 = char_2 * char_4;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		short short_6 = 1;
		double_6 = double_10;
		short_6 = short_4 + short_4;
		float_1 = float_2;
	}
	unsigned_int_5 = unsigned_int_6 + unsigned_int_6;
	double_4 = double_11 * double_4;
	int_4 = int_5 * int_1;
	return double_5;
}
void v_termpty_write( float parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
}
int v__block_edje_signal_cb(unsigned int parameter_2,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	int_3 = int_1 + int_2;
	long_3 = long_1 * long_2;
	double_2 = double_1 + double_1;
	short_3 = short_1 * short_2;
	char_2 = char_1 + char_1;
	int_5 = int_4 * int_4;
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1;
	}
	long_3 = long_2 + long_3;
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_6 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_3 = char_1 * char_1;
		int_5 = int_2;
		v_termpty_write(float_1,short_2,int_4);

		float_3 = float_2 * float_3;
		int_4 = int_5 + int_6;
		int_2 = int_2;
		int_7 = int_7 * int_6;
		int_3 = int_2 + int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		int_3 = int_4;
		double_2 = double_2;
		double_3 = double_3 + double_4;
	}
	return int_2;
}
void v_termpty_block_chid_update( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
char v__block_edje_cmds( int parameter_1,float parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double_1 = double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ",8") < 0)
	{
	}
	if(1)
	{
	}
	return char_1;
	v_termpty_block_chid_update(unsigned_int_1,short_1);

	int_1 = v__block_edje_signal_cb(unsigned_int_1,char_2,int_1);

	double_1 = v__block_edje_message_cb(char_1,double_1,int_2);

}
int v_homedir_get( char parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
		short short_1 = 1;
		int_1 = int_1;
		short_1 = short_1 + short_1;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_2 = int_3;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	return int_1;
}
short v__block_edje_activate( short parameter_1,short parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char_1 = v__block_edje_cmds(int_1,float_1,double_1,int_2);

	double_3 = double_1 * double_2;
	int_3 = int_1 * int_3;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	int_1 = int_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		float float_3 = 1;
		float float_5 = 1;
		float_5 = float_3 * float_4;
		if(1)
		{
			double_4 = v_config_theme_path_default_get(float_4);

			int_5 = int_5 + int_4;
			unsigned_int_2 = unsigned_int_1;
		}
		if(1)
		{
			double_2 = double_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	char_2 = char_2 + char_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	int_5 = v_homedir_get(char_3,long_1);

	long_2 = long_2 * long_1;
	double_2 = double_4 + double_3;
	if(1)
	{
		double double_5 = 1;
		double_5 = double_4;
	}
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	return short_1;
}
long v__block_activate( float parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_1;
	char controller4vul_1928[3];
	fgets(controller4vul_1928 ,3 ,stdin);
	if( strcmp( controller4vul_1928, "w?") > 0)
	{
		double_1 = v__block_media_activate(char_1,long_1,uni_para);

	}
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_2;
	}
	float_3 = float_3 * float_2;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	return long_1;
}
void v_termpty_block_get( char parameter_1,int parameter_2)
{
	if(1)
	{
	}
}
int v_termpty_block_id_get( double parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "zO") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2 + double_3;
	char_2 = char_1 * char_2;
	return int_1;
}
void v_termpty_backscroll_adjust( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "m") == 0)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	long_1 = v_verify_beacon(short_1,int_1);

	int_4 = int_2 + int_3;
}
long v__smart_apply( int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	double double_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	float float_3 = 1;
	long long_4 = 1;
	int int_7 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_4 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_8 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_9 = 1;
	char char_7 = 1;
	int int_10 = 1;
	long long_5 = 1;
	char char_8 = 1;
	long long_7 = 1;
	float float_7 = 1;
	float float_8 = 1;
	char char_9 = 1;
	float float_9 = 1;
	double double_9 = 1;
	double double_10 = 1;
	long long_8 = 1;
	float float_10 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_4 = 1;
	double double_11 = 1;
	long long_9 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_12 = 1;
	int int_11 = 1;
	long long_10 = 1;
	long long_11 = 1;
	int int_12 = 1;
	double double_13 = 1;
	unsigned int unsigned_int_12 = 1;
	short short_7 = 1;
	short short_8 = 1;
	double double_15 = 1;
	double double_16 = 1;
	unsigned int unsigned_int_13 = 1;
	long long_13 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_4;
	int_2 = int_1 + int_2;
	short_1 = short_1 + short_2;
	unsigned_int_4 = unsigned_int_4;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	short_2 = short_2 * short_2;
	int_2 = int_2 + int_3;
	double_2 = double_2;
	int_3 = int_3;
	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		int_2 = int_2 + int_3;
		double_2 = double_3 + double_3;
		double_4 = double_3 + double_3;
		double_5 = double_1 * double_5;
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			char_1 = char_2;
		}
		double_6 = double_5 * double_6;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			float float_2 = 1;
			if(1)
			{
				if(1)
				{
					if(1)
					{
						long_3 = long_1 + long_2;
					}
					int_1 = int_3 + int_2;
				}
				double_6 = double_5 + double_5;
				if(1)
				{
					float_1 = float_1 + float_2;
				}
				if(1)
				{
					double_5 = double_3;
				}
				int_4 = int_5;
				short_1 = short_3 + short_1;
				double_2 = double_3 + double_7;
				char_2 = char_3 * char_2;
				unsigned_int_7 = unsigned_int_5 + unsigned_int_5;
				int_6 = int_5 + int_2;
			}
			char controller4vul_1924[3];
			fgets(controller4vul_1924 ,3 ,stdin);
			if( strcmp( controller4vul_1924, ".F") > 0)
			{
				char char_4 = 1;
				long long_6 = 1;
				float_3 = float_1 + float_1;
				char_2 = char_4;
				if(1)
				{
					if(1)
					{
						double_3 = double_2 + double_4;
					}
					float_3 = float_1 * float_3;
					long_3 = long_4 * long_1;
					unsigned_int_5 = unsigned_int_7 + unsigned_int_2;
					float_1 = float_2 + float_3;
					int_7 = int_3 * int_7;
					char_6 = char_2 + char_5;
					unsigned_int_2 = unsigned_int_2 + unsigned_int_6;
					float_1 = float_2 + float_1;
					float_1 = float_2 + float_4;
					float_3 = float_1 + float_3;
					int_8 = int_5 * int_4;
					unsigned_int_6 = unsigned_int_4 + unsigned_int_8;
					if(1)
					{
						unsigned_int_9 = unsigned_int_2 + unsigned_int_7;
						unsigned_int_1 = unsigned_int_7 * unsigned_int_3;
						char_6 = char_4 * char_6;
						short_3 = short_3 * short_1;
						unsigned_int_1 = unsigned_int_3 + unsigned_int_7;
					}
				}
				char controller4vul_1925[3];
				fgets(controller4vul_1925 ,3 ,stdin);
				if( strcmp( controller4vul_1925, "Qe") < 0)
				{
					char controller4vul_1926[2];
					fgets(controller4vul_1926 ,2 ,stdin);
					if( strcmp( controller4vul_1926, "b") > 0)
					{
						char controller4vul_1927[2];
						fgets(controller4vul_1927 ,2 ,stdin);
						if( strcmp( controller4vul_1927, "D") < 0)
						{
							long_4 = v__block_activate(float_4,short_1,uni_para);

							double_1 = double_8 * double_6;
						}
						char_5 = char_6;
					}
					float_6 = float_5 + float_6;
					if(1)
					{
						unsigned_int_5 = unsigned_int_7 * unsigned_int_1;
					}
					if(1)
					{
						int_5 = int_5 * int_9;
					}
					char_1 = char_7 * char_5;
					int_10 = int_3 + int_3;
					int_3 = int_2 + int_4;
					int_3 = int_2 * int_10;
					char_2 = char_2 + char_7;
					long_5 = long_2 + long_4;
					if(1)
					{
						long_2 = long_3 * long_6;
					}
				}
				if(1)
				{
					float_3 = float_1 + float_4;
					unsigned_int_8 = unsigned_int_3 + unsigned_int_8;
					char_5 = char_4 + char_8;
					long_4 = long_3 * long_7;
					unsigned_int_8 = unsigned_int_6;
					float_2 = float_7 + float_5;
					if(1)
					{
						int_6 = int_6;
						short_2 = short_3 + short_1;
					}
					if(1)
					{
						short_1 = short_3 * short_1;
						long_6 = long_4 * long_5;
					}
					if(1)
					{
						long_6 = long_5 + long_1;
					}
					if(1)
					{
						if(1)
						{
							double_2 = double_4 + double_3;
						}
						if(1)
						{
							int_10 = int_5;
						}
					}
					if(1)
					{
						float_3 = float_1 + float_8;
					}
					if(1)
					{
						unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
					}
					if(1)
					{
						int_1 = int_6 * int_7;
						char_9 = char_9 * char_4;
						float_9 = float_5 * float_2;
						double_10 = double_9 * double_5;
						unsigned_int_7 = unsigned_int_6 + unsigned_int_5;
						long_8 = long_4 * long_6;
						float_5 = float_10 * float_10;
					}
					if(1)
					{
						unsigned_int_5 = unsigned_int_1 * unsigned_int_10;
					}
					if(1)
					{
						short_1 = short_1 * short_2;
					}
					if(1)
					{
						if(1)
						{
							unsigned_int_7 = unsigned_int_7 + unsigned_int_3;
						}
						unsigned_int_4 = unsigned_int_6;
					}
					unsigned_int_8 = unsigned_int_7 + unsigned_int_10;
					short_3 = short_1 * short_4;
					long_7 = long_8 * long_5;
					unsigned_int_10 = unsigned_int_4 + unsigned_int_6;
					if(1)
					{
						int_2 = int_4 + int_8;
						char_1 = char_7;
					}
					if(1)
					{
						double_11 = double_7 + double_9;
						unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
					}
					int_1 = int_2 + int_5;
					unsigned_int_6 = unsigned_int_2 * unsigned_int_2;
					long_9 = long_3 + long_7;
					double_7 = double_6 + double_8;
					if(1)
					{
						unsigned_int_6 = unsigned_int_8 * unsigned_int_8;
					}
				}
			}
		}
		unsigned_int_1 = unsigned_int_11 * unsigned_int_5;
		if(1)
		{
			double_6 = double_9 * double_3;
		}
	}
	float_10 = float_7 + float_3;
	if(1)
	{
		char char_10 = 1;
		char char_11 = 1;
		long_4 = long_2 * long_4;
		double_3 = double_4 * double_5;
		double_3 = double_10 + double_6;
		short_4 = short_1 + short_2;
		unsigned_int_4 = unsigned_int_4;
		double_10 = double_10 + double_7;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				short short_5 = 1;
				short short_6 = 1;
				short_5 = short_6;
				float_1 = float_3;
				char_1 = char_6;
				if(1)
				{
					long_9 = long_4 + long_8;
				}
				short_3 = short_1 * short_4;
				if(1)
				{
					if(1)
					{
						double_10 = double_1 + double_7;
						double_6 = double_5 * double_2;
						double_12 = double_7 + double_1;
					}
				}
				if(1)
				{
					int_5 = int_5 * int_11;
					int_5 = int_6 * int_3;
				}
				float_3 = float_7;
				int_8 = int_4 + int_5;
				char_8 = char_5 * char_5;
				long_11 = long_10 * long_9;
				int_7 = int_6 + int_5;
				float_8 = float_6 + float_8;
				unsigned_int_3 = unsigned_int_7 + unsigned_int_3;
				unsigned_int_3 = unsigned_int_10;
				unsigned_int_8 = unsigned_int_1 + unsigned_int_8;
				short_1 = short_3 + short_2;
				unsigned_int_2 = unsigned_int_6 * unsigned_int_1;
				if(1)
				{
					unsigned_int_10 = unsigned_int_9 + unsigned_int_2;
					double_4 = double_9 * double_12;
					int_6 = int_1 * int_11;
					float_3 = float_6 * float_10;
					int_6 = int_9 + int_5;
					int_7 = int_12 * int_3;
					int_6 = int_6 + int_5;
					double_1 = double_5 + double_8;
					double_12 = double_12 + double_11;
					unsigned_int_6 = unsigned_int_6 + unsigned_int_10;
				}
				double_7 = double_12 * double_10;
				if(1)
				{
					if(1)
					{
						double_10 = double_13 + double_11;
						short_6 = short_5;
					}
				}
			}
			double_12 = double_8 + double_11;
		}
		char_10 = char_7 * char_1;
		char_9 = char_11 * char_9;
	}
	int_4 = int_8;
	if(1)
	{
		double double_14 = 1;
		float float_11 = 1;
		double_5 = double_7 + double_3;
		double_5 = double_14 * double_4;
		float_11 = float_3 * float_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_9 * unsigned_int_12;
	}
	if(1)
	{
		int_4 = int_1 * int_10;
	}
	int_11 = int_4 * int_8;
	short_8 = short_7 + short_4;
	double_11 = double_15 + double_16;
	if(1)
	{
		double double_17 = 1;
		double_3 = double_2;
		float_7 = float_9;
		long_5 = long_10;
		unsigned_int_7 = unsigned_int_9 + unsigned_int_4;
		long_7 = long_3 + long_11;
		unsigned_int_12 = unsigned_int_1;
		if(1)
		{
			double_11 = double_13 + double_9;
			double_12 = double_13 + double_12;
		}
		double_15 = double_1 + double_16;
		unsigned_int_11 = unsigned_int_13;
		int_6 = int_3 * int_9;
		double_11 = double_8 + double_16;
		unsigned_int_9 = unsigned_int_1 + unsigned_int_5;
		int_4 = int_9 * int_12;
		int_8 = int_6 + int_12;
		char_8 = char_6;
		if(1)
		{
			unsigned_int_7 = unsigned_int_1 * unsigned_int_6;
		}
		if(1)
		{
			if(1)
			{
				int_2 = int_4 * int_10;
			}
			if(1)
			{
				long long_12 = 1;
				long_4 = long_12 * long_13;
			}
			if(1)
			{
				char_1 = char_9 * char_3;
			}
			if(1)
			{
				unsigned_int_10 = unsigned_int_5 + unsigned_int_6;
			}
			if(1)
			{
				double_9 = double_6 * double_1;
			}
		}
		double_17 = double_1;
	}
	if(1)
	{
		float float_12 = 1;
		float_12 = float_4 * float_5;
	}
	if(1)
	{
		double_10 = double_9 + double_12;
	}
	unsigned_int_12 = unsigned_int_8 * unsigned_int_13;
	return long_13;
}
short v__smart_cb_change(int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long_1 = v__smart_apply(int_1,uni_para);

	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 + double_2;
	char_1 = char_2;
	float_2 = float_1 * float_1;
	float_3 = float_3 + float_3;
	return short_1;
}
float v__smart_update_queue( int parameter_1,int parameter_2,int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char controller4vul_1923[2];
	fgets(controller4vul_1923 ,2 ,stdin);
	if( strcmp( controller4vul_1923, "e") > 0)
	{
		short_1 = v__smart_cb_change(uni_para);

	}
	double_1 = double_1 * double_1;
	return float_1;
}
unsigned int v__lost_selection_reset_job()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	float_1 = float_1 * float_1;
	if(1)
	{
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_2 = float_1 * float_1;
		short_2 = short_1 * short_2;
	}
	return unsigned_int_3;
	char_1 = v__lost_selection(char_1,-1 );

}
char v__lost_selection(char parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 + long_2;
	double_1 = double_1 + double_2;
	if(1)
	{
		double_2 = double_1;
	}
	char controller4vul_1920[3];
	fgets(controller4vul_1920 ,3 ,stdin);
	if( strcmp( controller4vul_1920, "|T") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		char controller4vul_1921[3];
		fgets(controller4vul_1921 ,3 ,stdin);
		if( strcmp( controller4vul_1921, "sm") > 0)
		{
			double double_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double_3 = double_3;
			char controller4vul_1922[3];
			fgets(controller4vul_1922 ,3 ,stdin);
			if( strcmp( controller4vul_1922, "$4") > 0)
			{
				long long_4 = 1;
				float_1 = v__smart_update_queue(int_1,int_1,uni_para);

				long_3 = long_1 * long_4;
			}
			short_3 = short_1 + short_2;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		float float_2 = 1;
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			double double_4 = 1;
			short_5 = short_4 * short_3;
			double_1 = double_4 * double_2;
		}
		int_1 = int_2;
		float_2 = float_1 * float_2;
		int_1 = int_1 * int_1;
		int_2 = int_2 * int_2;
	}
	return char_3;
}
long v__take_selection_text( unsigned int parameter_1,int parameter_2,float parameter_3,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_1;
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_1;
	short_2 = short_1 + short_1;
	short_3 = short_2;
	short_1 = short_4 * short_1;
	double_1 = double_2 + double_2;
	int_3 = int_1 * int_2;
	char_2 = char_1 + char_2;
	char controller4vul_1919[3];
	fgets(controller4vul_1919 ,3 ,stdin);
	if( strcmp( controller4vul_1919, "?v") < 0)
	{
		double double_3 = 1;
		char_1 = v__lost_selection(char_2,uni_para);

		double_3 = double_3 + double_1;
	}
	long_2 = long_1 * long_2;
	return long_3;
}
float v__cb_ctxp_link_content_copy(long parameter_2,int uni_para)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = v__take_selection_text(unsigned_int_1,int_1,float_1,uni_para);

	float_1 = float_1 + float_2;
	int_1 = int_2 * int_2;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_2 + float_1;
	int_2 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	return float_2;
}
void v_ty_sb_free( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = long_1 + long_1;
	long_2 = long_1;
	int_2 = int_1 + int_2;
}
char v_ty_sb_steal_buf( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		long_2 = long_1 + long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_1 = double_2 + double_2;
		}
		double_3 = double_3 * double_3;
	}
	char_3 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	double_4 = double_3 + double_4;
	long_1 = long_2 * long_1;
	return char_2;
}
int v_codepoint_to_utf8( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	if(1)
	{
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		char_1 = char_1;
		int_4 = int_3 + int_1;
		int_3 = int_3 * int_5;
	}
	if(1)
	{
		long long_4 = 1;
		long_2 = long_1 * long_2;
		long_4 = long_3 + long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_2 = char_1;
	}
	if(1)
	{
		double double_1 = 1;
		short_2 = short_1 + short_2;
		double_2 = double_1 * double_1;
		char_2 = char_2 * char_2;
		short_2 = short_2 + short_1;
		int_1 = int_1 * int_3;
	}
	if(1)
	{
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_4 = 1;
		float_1 = float_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		short_1 = short_2 * short_3;
		long_3 = long_2;
		long_3 = long_3 * long_1;
		char_3 = char_4;
	}
	if(1)
	{
		int int_6 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int_3 = int_5 * int_3;
		int_3 = int_4 * int_4;
		int_1 = int_6 * int_1;
		float_4 = float_1 * float_3;
		char_3 = char_1;
		double_3 = double_3;
		short_5 = short_4 * short_3;
	}
	if(1)
	{
		double_3 = double_2 * double_3;
	}
	return int_4;
}
void v_ty_sb_spaces_rtrim( int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_1 + int_1;
	char_2 = char_1 * char_1;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_2;
		char_1 = char_1 * char_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	}
}
int v_ty_sb_add( float parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double_3 = double_2 * double_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
		}
		long_2 = long_1 + long_2;
		long_4 = long_2 * long_3;
	}
	double_2 = double_3 + double_4;
	int_1 = int_1;
	float_1 = float_1 + float_2;
	return int_2;
}
int v__termpty_cellrow_from_beacon_get( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	long_1 = long_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short_1 = short_1;
	}
	long_2 = long_2 + long_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float_3 = float_3 + float_4;
		char_3 = char_1 * char_2;
	}
	double_1 = double_2 * double_2;
	long_3 = v_verify_beacon(short_1,int_3);

	short_2 = short_1 * short_2;
	double_3 = double_3 * double_4;
	long_4 = long_3 + long_2;
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_2 = 1;
		float_4 = float_3 * float_2;
		double_1 = double_5 + double_6;
		int_2 = int_3 * int_4;
		int_5 = int_5 * int_2;
		long_2 = long_4 * long_4;
		double_1 = double_5 + double_5;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	float_3 = float_2 + float_3;
	return int_5;
}
int v_termpty_cellrow_get( float parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
		}
		int_1 = v__termpty_cellrow_from_beacon_get(unsigned_int_1,int_1,unsigned_int_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	return int_1;
}
float v_termio_selection_get( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,float parameter_6,unsigned int parameter_7)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_5 = 1;
	long long_7 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	int_1 = v_termpty_cellrow_get(float_1,int_1,char_1);

	long_1 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		if(1)
		{
			long long_3 = 1;
			long_4 = long_1 * long_3;
			int_2 = v_ty_sb_add(float_1,char_2,short_1);

			v_termpty_backlog_unlock();

			int_1 = int_3;
		}
		if(1)
		{
			long long_5 = 1;
			long_4 = long_5 + long_6;
		}
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
					}
					if(1)
					{
						char char_4 = 1;
						char_4 = char_3 + char_1;
					}
				}
				if(1)
				{
					int int_4 = 1;
					int_1 = int_2 + int_4;
				}
			}
		}
		if(1)
		{
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			v_ty_sb_spaces_rtrim(int_3);

			int_5 = v_codepoint_to_utf8(long_7,char_2);

			double_3 = double_1 + double_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					char_3 = v_ty_sb_steal_buf(short_2);

					short_3 = short_2 + short_3;
				}
				if(1)
				{
					unsigned int unsigned_int_4 = 1;
					v_ty_sb_free(short_3);

					unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
				}
				if(1)
				{
					long_7 = long_2 * long_6;
				}
				if(1)
				{
					short short_4 = 1;
					short_3 = short_1 * short_4;
				}
				if(1)
				{
					double double_4 = 1;
					double_2 = double_2 + double_4;
				}
			}
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			v_termpty_backlog_lock();

			double_1 = double_3 * double_1;
		}
	}
	return float_2;
}
float v__cb_ctxp_link_open(long parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	float float_3 = 1;
	long_1 = v__activate_link(double_1,char_1);

	float_2 = float_1 + float_1;
	double_2 = double_2 * double_1;
	double_1 = double_3;
	int_1 = int_1 * int_1;
	double_2 = double_3 + double_2;
	double_4 = double_3 * double_1;
	return float_3;
}
double v__should_inline( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	short_4 = short_3 + short_2;
	if(1)
	{
	}
	return double_1;
	int_2 = v_termio_config_get(short_2);

}
float v_link_is_email( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
void v_link_is_protocol( long parameter_1)
{
}
long v_link_is_url( short parameter_1)
{
	long long_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "0") > 0)
	{
	}
	return long_1;
	v_link_is_protocol(long_1);

}
long v__activate_link( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	double double_8 = 1;
	int int_8 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	short_2 = short_1 + short_1;
	double_1 = v__should_inline(float_1);

	double_2 = double_1;
	float_2 = float_1 * float_1;
	double_2 = double_1;
	int_2 = int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
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
			long_1 = long_1;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
	}
	if(1)
	{
		int_3 = int_1 * int_1;
	}
	if(1)
	{
		float_2 = float_2 + float_1;
	}
	if(1)
	{
		float_1 = float_2 + float_2;
		long_2 = long_2 * long_2;
	}
	double_4 = double_1 * double_3;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_2 * double_3;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			short_3 = short_3 * short_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		}
		double_4 = double_5 * double_6;
		if(1)
		{
			float_2 = v_media_src_type_get(long_2);

			unsigned_int_3 = unsigned_int_3;
			int_4 = int_5;
		}
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3 + long_2;
		unsigned_int_1 = unsigned_int_5;
		if(1)
		{
			short_3 = short_3 + short_3;
			if(1)
			{
				float float_3 = 1;
				if(1)
				{
					double double_7 = 1;
					float float_4 = 1;
					double_7 = double_5 * double_5;
					float_4 = float_3 + float_1;
				}
				if(1)
				{
					float_5 = float_3 * float_3;
					unsigned_int_2 = unsigned_int_2 * unsigned_int_6;
				}
			}
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				if(1)
				{
					if(1)
					{
						int_6 = int_6 * int_2;
					}
				}
				if(1)
				{
					if(1)
					{
						char_2 = char_1 * char_1;
					}
				}
				if(1)
				{
					if(1)
					{
						long_2 = v_link_is_url(short_1);

						long_2 = long_3 + long_2;
					}
				}
				unsigned_int_3 = unsigned_int_1;
				char_1 = char_2;
			}
		}
	}
	if(1)
	{
		int_4 = int_1 + int_4;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		if(1)
		{
			int int_7 = 1;
			int_6 = int_7 * int_5;
			if(1)
			{
				float_5 = float_2 * float_5;
				int_6 = int_5 + int_3;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
					}
				}
				if(1)
				{
					if(1)
					{
						int_3 = int_6 + int_6;
					}
				}
				if(1)
				{
					if(1)
					{
						float_1 = v_link_is_email(double_8);

						short_1 = short_2 * short_3;
					}
				}
				unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
				int_2 = int_1;
			}
		}
	}
	if(1)
	{
		short_2 = short_3 * short_3;
	}
	int_4 = int_8;
	if(1)
	{
		double_8 = double_6 * double_6;
	}
	return long_1;
}
char v__cb_ctxp_link_preview(double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	float_1 = float_1 + float_2;
	long_1 = v__activate_link(double_3,char_1);

	int_1 = int_1 + int_2;
	double_3 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_3;
	return char_1;
}
double v__is_fmt( char parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long_1 = long_1 + long_2;
	float_2 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
		if(1)
		{
			int_2 = int_2;
		}
		if(1)
		{
		}
	}
	return double_1;
}
float v_media_src_type_get( long parameter_1)
{
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int_1 = int_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		double_2 = v__is_fmt(char_1,unsigned_int_2);

		int_2 = int_1;
	}
	return float_1;
}
long v__mouse_in_selection( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_4 = short_3 * short_4;
	double_3 = double_2 * double_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double_3 = double_2 * double_2;
		char_1 = char_2;
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
	return long_1;
}
void v__smart_xy_to_cursor( short parameter_1,short parameter_2,short parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_1;
	float_3 = float_1;
	char_1 = char_2;
	char_2 = char_3 + char_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
	}
}
unsigned int v__cb_link_down(int parameter_2,double parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short_3 = short_1 * short_2;
	short_3 = short_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		int_1 = int_1 + int_2;
		float_1 = float_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	char controller4vul_1916[3];
	fgets(controller4vul_1916 ,3 ,stdin);
	if( strcmp( controller4vul_1916, "!_") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_5 = 1;
		int int_3 = 1;
		double double_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_4 = 1;
		float float_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		double_1 = double_1;
		float_1 = float_2 + float_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		char controller4vul_1917[3];
		fgets(controller4vul_1917 ,3 ,stdin);
		if( strcmp( controller4vul_1917, "0P") < 0)
		{
			short short_4 = 1;
			double_2 = double_2 * double_2;
			short_4 = short_5;
			char controller4vul_1918[3];
			fgets(controller4vul_1918 ,3 ,stdin);
			if( strcmp( controller4vul_1918, ":1") < 0)
			{
				float_1 = v__cb_ctxp_link_content_copy(long_1,uni_para);

			}
		}
		int_1 = int_3 * int_3;
		double_3 = double_2;
		if(1)
		{
			float float_3 = 1;
			float_2 = float_1 + float_3;
			if(1)
			{
				float_3 = float_2 * float_2;
			}
		}
		long_3 = long_1 * long_2;
		short_2 = short_3 + short_3;
		if(1)
		{
			double_5 = double_4 + double_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			double_4 = double_3 * double_3;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			short_3 = short_5;
		}
		float_4 = float_4 + float_5;
		char_2 = char_1 * char_1;
		int_1 = int_1 * int_1;
		double_3 = double_5 * double_3;
		char_4 = char_1 * char_3;
	}
	return unsigned_int_3;
}
unsigned int v_main_term_popup_exists( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v__update_link( double parameter_1,double parameter_2,unsigned int parameter_3,short parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	double_1 = double_1 * double_2;
	short_3 = short_1 * short_2;
	double_2 = double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
		short short_4 = 1;
		short_2 = short_4 * short_3;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_4;
	}
	if(1)
	{
	}
	short_3 = short_3 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		short short_5 = 1;
		double double_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned_int_5 = unsigned_int_3;
		short_5 = short_2 * short_5;
		double_3 = double_1 + double_2;
		char controller4vul_1914[2];
		fgets(controller4vul_1914 ,2 ,stdin);
		if( strcmp( controller4vul_1914, "B") < 0)
		{
			double_3 = double_2 * double_3;
			char controller4vul_1915[2];
			fgets(controller4vul_1915 ,2 ,stdin);
			if( strcmp( controller4vul_1915, "h") > 0)
			{
				unsigned_int_3 = v__cb_link_down(int_2,double_1,uni_para);

				int_3 = int_1 + int_1;
			}
			if(1)
			{
				double_2 = double_4 + double_1;
			}
		}
		if(1)
		{
			long long_3 = 1;
			long_3 = long_1 + long_2;
			double_4 = double_5 + double_1;
		}
		if(1)
		{
			double_5 = double_2;
			float_1 = float_1 + float_1;
		}
		int_1 = int_3 * int_3;
		long_1 = long_2 * long_1;
		float_2 = float_2 * float_2;
		double_4 = double_3 * double_2;
		char_1 = char_1;
		float_4 = float_1 + float_3;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
		}
	}
	return double_1;
}
int v__remove_links( unsigned int parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_3 = int_1 + int_2;
	char controller4vul_1913[3];
	fgets(controller4vul_1913 ,3 ,stdin);
	if( strcmp( controller4vul_1913, "!G") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		double_1 = v__update_link(double_2,double_3,unsigned_int_1,short_1,uni_para);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		float_1 = float_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	int_4 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	long_1 = long_2;
	int_3 = int_4 + int_2;
	int_3 = int_2;
	return int_3;
}
float v__sel_set( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	double_1 = double_1;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double_1 = double_1 * double_2;
		char_3 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_1;
	}
	return float_1;
}
int v_termio_scroll_get( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_2;
	int_2 = int_1 + int_2;
	return int_1;
}
void v_miniview_position_offset( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1;
	double_2 = double_1 + double_1;
	char_2 = char_2 * char_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		int_1 = int_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 * long_2;
			int_2 = int_2 + int_2;
			double_1 = double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			short short_3 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
			int_1 = int_2 * int_3;
			short_3 = short_1 * short_2;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			float_2 = float_1 * float_2;
			int_3 = v_termio_scroll_get(double_3);

			double_4 = double_1 + double_4;
			if(1)
			{
				short short_4 = 1;
				short_4 = short_2 + short_1;
			}
			if(1)
			{
				double_2 = double_2 + double_4;
			}
		}
	}
}
double v_term_miniview_get( short parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
void v_termio_scroll( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		long_2 = long_1 + long_1;
		if(1)
		{
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		char_1 = char_1;
	}
	int_1 = int_2;
	char controller4vul_1910[2];
	fgets(controller4vul_1910 ,2 ,stdin);
	if( strcmp( controller4vul_1910, "B") < 0)
	{
		short short_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short_3 = short_1 * short_3;
		char_4 = char_2 * char_3;
		int_4 = int_3 + int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		char controller4vul_1911[2];
		fgets(controller4vul_1911 ,2 ,stdin);
		if( strcmp( controller4vul_1911, "i") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_5 = 1;
			int_2 = int_1 * int_1;
			double_2 = double_1 * double_2;
			long_1 = long_2;
			double_2 = double_1 * double_1;
			char_5 = char_4 * char_1;
			char controller4vul_1912[2];
			fgets(controller4vul_1912 ,2 ,stdin);
			if( strcmp( controller4vul_1912, "O") < 0)
			{
				int_5 = v__remove_links(unsigned_int_2,long_3,uni_para);

				double_1 = double_1 + double_2;
			}
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			int int_6 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			int_3 = int_6;
			unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
		}
	}
}
char v_termpty_save_new( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char_1 = char_1;
	v_termpty_save_free(long_1);

	short_1 = short_2;
	if(1)
	{
	}
	int_1 = int_1;
	long_2 = long_1 + long_1;
	return char_2;
}
void v_termpty_save_expand( short parameter_1,float parameter_2,short parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_1 = float_1 + float_1;
	double_2 = double_1 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "@") < 0)
	{
	}
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 + int_2;
}
int v__termpty_cell_is_empty( double parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
char v_termpty_line_length( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double_2 = double_3 + double_3;
		if(1)
		{
		}
	}
	return char_1;
	int_1 = v__termpty_cell_is_empty(double_1);

}
long v_verify_beacon( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
void v_termpty_text_save_top( short parameter_1,short parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	double double_7 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1 * double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	v_termpty_save_expand(short_1,float_1,short_1);

	v_termpty_backlog_unlock();

	double_2 = double_1 + double_1;
	v_termpty_backlog_lock();

	float_1 = float_1 * float_1;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short_2 = short_2 * short_3;
	}
	if(1)
	{
		char_1 = char_1 + char_1;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_3 + double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			char char_3 = 1;
			int_3 = int_3 + int_1;
			char_2 = v_termpty_line_length(unsigned_int_1,double_5);

			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			char_3 = char_1 * char_1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
		}
	}
	long_2 = v_verify_beacon(short_2,int_2);

	double_3 = double_1 * double_6;
	float_3 = float_2 + float_3;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	int_4 = int_1 * int_1;
	if(1)
	{
		int_5 = int_4 + int_1;
	}
	float_4 = float_3 + float_1;
	int_2 = int_2 * int_3;
	char_1 = v_termpty_save_new(int_5,int_2);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		float float_5 = 1;
		long_1 = long_2 + long_1;
		float_5 = float_3 * float_3;
	}
	double_7 = double_5 * double_1;
}
void v_termpty_text_scroll( short parameter_1,unsigned int parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_1;
	int_2 = int_1 * int_1;
	float_3 = float_1 * float_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	double_3 = double_1 * double_2;
	float_3 = float_1;
	char controller4vul_1908[3];
	fgets(controller4vul_1908 ,3 ,stdin);
	if( strcmp( controller4vul_1908, "B)") < 0)
	{
		char_1 = char_1 * char_1;
		char controller4vul_1909[3];
		fgets(controller4vul_1909 ,3 ,stdin);
		if( strcmp( controller4vul_1909, "yx") > 0)
		{
			unsigned int unsigned_int_4 = 1;
			v_termio_scroll(unsigned_int_1,int_3,int_1,int_1,uni_para);

			unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		}
		short_3 = short_1;
		if(1)
		{
			int_4 = int_1 * int_2;
		}
	}
	if(1)
	{
		float float_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_1;
		float_4 = float_4 + float_2;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
		}
		double_5 = double_3 + double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_4 = 1;
			short short_5 = 1;
			int int_5 = 1;
			short_5 = short_3 * short_4;
			int_5 = int_2 + int_3;
			int_4 = int_5 + int_3;
		}
		if(1)
		{
			short short_6 = 1;
			short_3 = short_6 * short_6;
		}
	}
}
void v_termpty_text_scroll_test( long parameter_1,long parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_3 = short_1 + short_2;
	char controller4vul_1906[2];
	fgets(controller4vul_1906 ,2 ,stdin);
	if( strcmp( controller4vul_1906, "[") < 0)
	{
		double_1 = double_1 * double_1;
		char controller4vul_1907[3];
		fgets(controller4vul_1907 ,3 ,stdin);
		if( strcmp( controller4vul_1907, "9+") < 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			v_termpty_text_scroll(short_1,unsigned_int_1,uni_para);

			char_2 = char_1 + char_2;
			double_1 = double_1 + double_1;
			int_2 = int_1 * int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_3;
		double_2 = double_3;
		double_1 = double_4;
	}
}
char v__cursor_to_start_of_line( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_2;
	return char_1;
}
unsigned int v__tab_forward( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double v__handle_cursor_control( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_2 = 1;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_termpty_text_scroll_test(long_1,long_2,-1 );

	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	float_1 = float_1 * float_2;
	float_2 = float_2 + float_1;
	int_1 = int_2 + int_1;
	double_1 = double_1;
	char_1 = v__cursor_to_start_of_line(int_2);

	float_2 = float_3 + float_3;
	if(1)
	{
		float float_4 = 1;
		float_5 = float_4 + float_3;
	}
	float_1 = float_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	float_3 = float_5 + float_5;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		int int_3 = 1;
		float float_7 = 1;
		float float_8 = 1;
		unsigned_int_4 = v__tab_forward(float_6,int_1);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_6;
		int_3 = int_1 + int_1;
		float_8 = float_3 + float_7;
	}
	double_2 = double_2 + double_1;
	return double_1;
}
int v_termpty_handle_seq( float parameter_1,long parameter_2,float parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_1;
	char controller4vul_1901[2];
	fgets(controller4vul_1901 ,2 ,stdin);
	if( strcmp( controller4vul_1901, "K") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = v__handle_esc(double_1,char_1,short_2,uni_para);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_1 + short_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	return int_1;
}
void v_termpty_handle_buf( unsigned int parameter_1,float parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 + short_1;
	float_1 = float_2;
	char controller4vul_1900[2];
	fgets(controller4vul_1900 ,2 ,stdin);
	if( strcmp( controller4vul_1900, "f") > 0)
	{
		int_1 = v_termpty_handle_seq(float_3,long_1,float_1,uni_para);

		double_1 = double_1 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 + double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	double_5 = double_2 + double_4;
}
void v_theme_reload( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_2;
	char_1 = char_1 + char_1;
	float_4 = float_1 * float_3;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
}
long v_theme_reload_cb(char parameter_2,unsigned int parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double_1 = double_2;
	int_1 = int_1 + int_1;
	double_3 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_theme_reload(long_1);

	int_2 = int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		long long_2 = 1;
		long_3 = long_2 + long_1;
	}
	return long_3;
}
void v_theme_auto_reload_enable( short parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	short_1 = short_1 * short_1;
	long_1 = v_theme_reload_cb(char_1,unsigned_int_1,char_2);

}
float v__cursor_shape_to_group_name()
{
	float float_1 = 1;
	return float_1;
}
double v_config_theme_path_default_get( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double_1 = double_2;
	float_1 = float_1 + float_1;
	double_3 = double_2 * double_2;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	return double_2;
}
long v_theme_path_get()
{
	long long_1 = 1;
	return long_1;
}
char v_config_theme_path_get( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long_1 = long_2;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	return char_3;
	long_3 = v_theme_path_get();

}
void v_theme_apply( char parameter_1,int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_config_theme_path_default_get(float_1);

	long_2 = long_3;
	if(1)
	{
	}
	long_4 = long_4 + long_3;
	char_1 = v_config_theme_path_get(unsigned_int_1);

	int_1 = int_1;
	if(1)
	{
	}
	int_1 = int_2 * int_2;
	char_3 = char_2 * char_2;
}
void v_termio_set_cursor_shape( float parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_3 = char_1 + char_2;
	char_4 = char_1 * char_4;
	double_2 = double_1 + double_1;
	v_theme_apply(char_4,int_1,unsigned_int_1);

	float_1 = float_1 * float_2;
	float_1 = v__cursor_shape_to_group_name();

	long_1 = long_1;
	double_3 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	short_1 = short_1 + short_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		v_theme_auto_reload_enable(short_2);

		long_3 = long_1 + long_2;
		if(1)
		{
			short_1 = short_2;
		}
		if(1)
		{
			double double_4 = 1;
			double_1 = double_1 + double_4;
		}
	}
}
void v_termpty_clear_tabs_on_screen()
{
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "EK") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_3 = 1;
	long long_2 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
	}
	v_termpty_backlog_unlock();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		float float_2 = 1;
		int_1 = int_1 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		}
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_3;
	}
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 * long_1;
	}
	v_termpty_backlog_lock();

	float_3 = float_1 * float_4;
	v_termpty_save_free(long_2);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	short_2 = short_1 * short_2;
}
char v__ts_free()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	return char_1;
}
void v_termpty_save_free( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_2;
		}
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 + int_1;
		}
		float_3 = float_1 * float_2;
	}
	char_1 = v__ts_free();

	float_3 = float_3 * float_2;
	float_4 = float_1 * float_4;
	long_2 = long_1 + long_2;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float_1 = float_1 + float_2;
	int_1 = int_2;
	v_termpty_backlog_lock();

	v_termpty_save_free(long_1);

	double_2 = double_1 + double_1;
	float_2 = float_1 + float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ":") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_1 = int_1 + int_2;
		}
		int_2 = int_1 + int_2;
		v_termpty_backlog_size_set(double_2,long_2);

		int_3 = int_1 * int_2;
	}
	float_1 = float_2 * float_2;
	int_4 = int_4 + int_3;
	double_1 = double_3;
	int_1 = int_4 + int_3;
	float_4 = float_3 * float_1;
	v_termpty_backlog_unlock();

}
void v_termpty_reset_att( float parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_4 = 1;
	int_1 = int_1 * int_1;
	float_3 = float_1 * float_2;
	int_2 = int_2 + int_2;
	double_2 = double_1 + double_2;
	float_3 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_3 * float_4;
	float_2 = float_1;
	double_2 = double_1;
	int_3 = int_3 + int_3;
	long_1 = long_1 * long_1;
	long_3 = long_1 * long_2;
	long_2 = long_2;
	double_1 = double_1 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_3 + int_2;
	double_2 = double_1 * double_2;
	int_1 = int_3 * int_5;
	unsigned_int_3 = unsigned_int_2;
	long_1 = long_4 * long_5;
	unsigned_int_2 = unsigned_int_1;
	double_4 = double_2 * double_3;
}
int v_termio_config_get( short parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	double_3 = double_1 * double_2;
	return int_1;
}
void v_termpty_reset_state( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_2;
	long_3 = long_1 + long_2;
	if(1)
	{
		short_3 = short_1 + short_2;
	}
	long_2 = long_2 + long_2;
	int_3 = int_2 * int_3;
	int_2 = int_2 * int_2;
	char_2 = char_1 * char_1;
	double_1 = double_1;
	short_3 = short_3;
	char_1 = char_1 + char_1;
	int_2 = int_3 * int_3;
	double_2 = double_1;
	char_1 = char_2 + char_2;
	short_5 = short_4 * short_2;
	long_1 = long_2;
	short_5 = short_2;
	double_3 = double_1 + double_1;
	int_3 = int_4;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_2 + long_2;
	long_2 = long_2;
	unsigned_int_2 = unsigned_int_2;
	v_termpty_clear_backlog(double_2);

	int_4 = int_1 * int_3;
	v_termpty_clear_tabs_on_screen();

	short_3 = short_1 + short_5;
	unsigned_int_1 = unsigned_int_3;
	v_termio_set_cursor_shape(float_1,long_3);

	float_2 = float_2 * float_2;
	double_1 = double_3 + double_4;
	v_termpty_reset_att(float_2);

	float_1 = float_1 * float_2;
	double_4 = double_5 * double_3;
	double_2 = double_3 * double_2;
	float_3 = float_1 + float_2;
	double_1 = double_6;
	short_2 = short_3 * short_4;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	double_1 = double_7;
	float_2 = float_2 + float_3;
	double_6 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_2;
	}
	if(1)
	{
		double_7 = double_2 * double_4;
	}
	int_5 = v_termio_config_get(short_4);

}
void v_termpty_resize_tabs( char parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	int_1 = int_1;
	if(1)
	{
	}
	short_1 = short_1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2 + int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		}
		float_1 = float_1 + float_2;
	}
	double_2 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = float_2 * float_2;
	}
}
char v__termpty_init( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	char_1 = char_1 + char_1;
	v_termpty_reset_state(double_1);

	float_1 = float_1 * float_2;
	double_2 = double_1 * double_1;
	float_1 = float_2;
	char_2 = char_1 * char_2;
	v_termpty_resize_tabs(char_2,int_2,int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_3;
	long_2 = long_1 * long_1;
	int_4 = int_1 + int_4;
	int_2 = int_1;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	return char_2;
}
long v__add_default_keys( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	long long_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_8 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_5 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_3;
	int_1 = int_4 + int_3;
	float_2 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	long_1 = long_1;
	long_3 = long_2 + long_2;
	double_2 = double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	int_3 = int_4 * int_3;
	long_4 = long_3 * long_1;
	int_1 = int_5;
	long_1 = long_1 + long_4;
	float_4 = float_3 * float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_5;
	int_7 = int_5 * int_6;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	int_1 = int_6;
	int_7 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	int_1 = int_4 + int_2;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
	char_2 = char_1 * char_1;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_1;
	char_1 = char_2 + char_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_6;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
	int_1 = int_8 + int_3;
	int_5 = int_4 * int_1;
	long_3 = long_1 + long_2;
	unsigned_int_5 = unsigned_int_5;
	short_1 = short_1 * short_2;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_7;
	char_3 = char_1 + char_1;
	double_2 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_1 + double_1;
	float_4 = float_2;
	char_3 = char_4 + char_1;
	long_1 = long_2 + long_2;
	short_2 = short_1 + short_1;
	char_3 = char_5 * char_2;
	long_4 = long_3 * long_1;
	long_2 = long_3 * long_1;
	long_5 = long_3 + long_1;
	float_1 = float_3 * float_4;
	return long_1;
}
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,double parameter_4,int parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	if(1)
	{
		short short_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short_1 = short_1;
		unsigned_int_1 = unsigned_int_2;
		char_3 = char_1 + char_2;
		double_1 = double_1;
		float_2 = float_1 + float_1;
		short_1 = short_1 * short_1;
		float_2 = float_2 * float_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2 * double_2;
	char_2 = char_1 + char_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
}
unsigned int v_config_new()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_7 = 1;
	short_2 = short_1 * short_2;
	short_2 = short_1 * short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "u") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		float float_3 = 1;
		int int_1 = 1;
		short short_5 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_6 = 1;
		int int_6 = 1;
		long long_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_9 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_7 = 1;
		float_1 = float_1 * float_2;
		double_1 = double_1;
		char_1 = char_1 + char_1;
		double_3 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_1;
		short_4 = short_2 + short_3;
		float_3 = float_1 * float_2;
		int_1 = int_1;
		short_3 = short_5 * short_1;
		float_5 = float_2 + float_4;
		long_1 = v__add_default_keys(short_4);

		short_1 = short_5 * short_3;
		double_2 = double_2;
		v_colors_standard_get(int_2,int_2,unsigned_int_1,double_4,int_3,char_2);

		double_3 = double_5 + double_6;
		float_4 = float_4;
		unsigned_int_1 = unsigned_int_2;
		int_2 = int_4 + int_1;
		int_5 = int_4 + int_4;
		int_5 = int_4 + int_5;
		short_3 = short_6;
		int_3 = int_4 + int_6;
		short_1 = short_6 * short_5;
		short_1 = short_2 * short_6;
		short_4 = short_1 + short_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		long_2 = long_1;
		double_8 = double_7 * double_3;
		long_1 = long_3 + long_4;
		int_1 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		int_1 = int_2 + int_3;
		float_5 = float_2 * float_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		short_1 = short_1 * short_3;
		double_9 = double_8;
		double_1 = double_7 * double_8;
		float_2 = float_6 + float_4;
		float_5 = float_1 + float_1;
		float_1 = float_3;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		int_5 = int_6 * int_3;
		char_3 = char_2 * char_2;
		int_5 = int_5 + int_2;
		char_2 = char_3 + char_2;
		int_6 = int_3;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
		unsigned_int_6 = unsigned_int_2;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
		int_5 = int_3 * int_7;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_7;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double double_10 = 1;
				double double_11 = 1;
				double double_12 = 1;
				unsigned int unsigned_int_8 = 1;
				double_11 = double_2 * double_10;
				double_12 = double_7 * double_8;
				double_12 = double_1 + double_11;
				int_4 = int_6 * int_3;
				double_7 = double_12;
				unsigned_int_8 = unsigned_int_2 * unsigned_int_1;
			}
		}
		int_4 = int_4 + int_6;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
	}
	return unsigned_int_7;
}
int main()
{
	int uni_para =273;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_7 = 1;
	int_1 = int_2;
	char_1 = char_1 * char_1;
	long_1 = long_1 + long_2;
	double_1 = double_1 + double_1;
	double_2 = double_2 + double_2;
	char_2 = char_2 * char_2;
	long_3 = long_1;
	char_1 = char_2 + char_1;
	float_1 = float_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_3;
	double_3 = double_2 + double_3;
	char_3 = char_3 * char_1;
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	int_2 = int_1;
	unsigned_int_4 = unsigned_int_3;
	char controller4vul_1896[2];
	fgets(controller4vul_1896 ,2 ,stdin);
	if( strcmp( controller4vul_1896, "r") > 0)
	{
		int int_4 = 1;
		char char_4 = 1;
		long long_4 = 1;
		int int_6 = 1;
		short short_4 = 1;
		if(1)
		{
			int_4 = int_3 + int_4;
		}
		if(1)
		{
			double_3 = double_4 + double_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		}
		int_4 = int_4 * int_5;
		if(1)
		{
			float_2 = float_2 + float_2;
		}
		unsigned_int_6 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			char_1 = char_2 + char_2;
		}
		char_4 = char_3 * char_4;
		if(1)
		{
			int_2 = int_2 + int_1;
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_7;
		if(1)
		{
			short_3 = short_2 + short_1;
		}
		if(1)
		{
			int_4 = int_3 * int_2;
		}
		long_3 = long_2 * long_4;
		if(1)
		{
			int_6 = int_2 + int_5;
		}
		short_5 = short_3 * short_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		}
		char controller4vul_1897[3];
		fgets(controller4vul_1897 ,3 ,stdin);
		if( strcmp( controller4vul_1897, "K=") < 0)
		{
			int_5 = int_5 * int_5;
			char controller4vul_1898[2];
			fgets(controller4vul_1898 ,2 ,stdin);
			if( strcmp( controller4vul_1898, "i") < 0)
			{
				float float_4 = 1;
				long_4 = long_4 * long_1;
				double_2 = double_1;
				char controller4vul_1899[2];
				fgets(controller4vul_1899 ,2 ,stdin);
				if( strcmp( controller4vul_1899, "D") > 0)
				{
					v_termpty_handle_buf(unsigned_int_8,float_3,int_5,uni_para);

					double_3 = double_3 + double_3;
				}
				if(1)
				{
					long_5 = long_2 + long_5;
				}
				if(1)
				{
					int int_7 = 1;
					int_2 = int_4 + int_7;
				}
				if(1)
				{
					float_4 = float_3 + float_3;
				}
				if(1)
				{
					char_4 = char_3 + char_4;
				}
				if(1)
				{
					int int_8 = 1;
					int_1 = int_2 + int_8;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_8 + unsigned_int_9;
				}
				if(1)
				{
					char_3 = char_1 * char_3;
				}
				if(1)
				{
					int_3 = int_2 + int_6;
				}
				if(1)
				{
					double double_5 = 1;
					double_4 = double_5 * double_4;
				}
				if(1)
				{
					short_5 = short_6 + short_6;
				}
				if(1)
				{
					float float_5 = 1;
					float_4 = float_5 * float_1;
				}
			}
			if(1)
			{
				double double_6 = 1;
				double_2 = double_1 + double_6;
			}
		}
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		double_4 = double_1 * double_3;
	}
	if(1)
	{
		short_5 = short_2 + short_2;
	}
	if(1)
	{
		short_2 = short_6 + short_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2 + unsigned_int_6;
		}
	}
	char_5 = char_6;
	double_4 = double_4 + double_7;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_9;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_8;
	if(1)
	{
		long long_6 = 1;
		long_3 = long_5 * long_6;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	}
	return int_5;
}

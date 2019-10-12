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

short v__termpty_shutdown( float parameter_1);
void v_termpty_text_scroll_rev_test( short parameter_1,char parameter_2);
unsigned int v__handle_esc_dcs( double parameter_1,int parameter_2,unsigned int parameter_3);
void v__handle_op_a( char parameter_1,double parameter_2,short parameter_3);
float v__termpty_ext_handle( long parameter_1,char parameter_2,long parameter_3);
unsigned int v__handle_esc_terminology( long parameter_1,float parameter_2,int parameter_3);
float v__handle_xterm_777_command( double parameter_1,char parameter_2,int parameter_3);
void v__smart_calculate_226( char parameter_1);
void v__smart_size( long parameter_1,int parameter_2,int parameter_3,float parameter_4);
void v_colors_term_init( double parameter_1,char parameter_2,double parameter_3);
void v_termio_config_update( char parameter_1);
short v__font_size_set( float parameter_1,int parameter_2);
void v_termio_font_size_set( short parameter_1,int parameter_2);
double v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3);
float v__eina_unicode_to_hex( double parameter_1);
void v__xterm_parse_color( short parameter_1,short parameter_2,int parameter_3,char parameter_4,int parameter_5);
int v__xterm_arg_get( long parameter_1);
short v__handle_esc_xterm( int parameter_1,unsigned int parameter_2,int parameter_3);
void v_termpty_cells_set_content( long parameter_1,float parameter_2,float parameter_3,int parameter_4);
float v__handle_esc_csi_decera( double parameter_1,short parameter_2);
void v_termpty_cells_att_fill_preserve_colors( float parameter_1,double parameter_2,short parameter_3,int parameter_4);
short v__clean_up_rect_coordinates( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
unsigned int v__handle_esc_csi_decfra( long parameter_1,unsigned int parameter_2);
int v__handle_esc_csi_decslrm( int parameter_1,short parameter_2);
float v__handle_esc_csi_decstbm( int parameter_1,float parameter_2);
double v__handle_esc_csi_decscusr( short parameter_1,long parameter_2);
short v__handle_esc_csi_dsr( double parameter_1,char parameter_2);
int v__handle_esc_csi_truecolor_cmyk( short parameter_1,int parameter_2);
long v__handle_esc_csi_truecolor_cmy( int parameter_1,double parameter_2);
void v__approximate_truecolor_rgb( float parameter_1,int parameter_2,int parameter_3,int parameter_4);
short v__csi_truecolor_arg_get( int parameter_1);
int v__handle_esc_csi_truecolor_rgb( int parameter_1,long parameter_2);
void v__handle_esc_csi_color_set( char parameter_1,double parameter_2);
void v_termpty_cursor_copy( char parameter_1,char parameter_2);
short v__switch_to_alternative_screen( int parameter_1,int parameter_2);
short v__move_cursor_to_origin( long parameter_1);
double v__pty_size( int parameter_1);
long v__limit_coord( unsigned int parameter_1);
char v__check_screen_info( float parameter_1,unsigned int parameter_2);
unsigned int v__termpty_line_rewrap( char parameter_1,short parameter_2,int parameter_3,unsigned int parameter_4,unsigned int parameter_5);
short v__backlog_remove_latest_nolock( unsigned int parameter_1);
unsigned int v_termpty_save_extract( char parameter_1);
void v__termpty_line_is_empty( long parameter_1,short parameter_2);
void v_termpty_screen_swap( float parameter_1);
void v_termpty_resize( int parameter_1,int parameter_2,int parameter_3);
long v_termio_win_get( short parameter_1);
float v__handle_esc_csi_reset_mode( unsigned int parameter_1,double parameter_2,long parameter_3);
short v__handle_esc_csi_cursor_pos_set( short parameter_1,short parameter_2,short parameter_3);
void v_termpty_text_scroll_rev( unsigned int parameter_1,char parameter_2);
void v_termpty_clear_line( long parameter_1,short parameter_2,int parameter_3);
void v_termpty_clear_screen( short parameter_1,double parameter_2);
void v_termpty_cell_codepoint_att_fill( float parameter_1,double parameter_2,int parameter_3,double parameter_4,int parameter_5);
int v__termpty_charset_trans( unsigned int parameter_1,double parameter_2);
void v_termio_content_change( float parameter_1,long parameter_2,long parameter_3,int parameter_4);
void v_termpty_text_append( double parameter_1,char parameter_2,int parameter_3,int uni_para);
int v__csi_arg_get( int parameter_1);
long v__handle_esc_csi( long parameter_1,unsigned int parameter_2,double parameter_3,int uni_para);
long v__safechar( float parameter_1);
char v__handle_esc( double parameter_1,long parameter_2,char parameter_3);
void v_termpty_cell_fill( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4);
void v_termpty_cells_fill( short parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4);
void v_termpty_cells_clear( double parameter_1,char parameter_2,int parameter_3);
float v__tooltip_del(long parameter_2);
void v__tooltip_content(long parameter_2,int parameter_3);
void v_MD5Final( double parameter_1,float parameter_2);
void v_MD5Transform( float parameter_1,short parameter_2);
void v_byteReverse( unsigned int parameter_1,int parameter_2);
void v_MD5Update( char parameter_1,unsigned int parameter_2,int parameter_3);
void v_MD5Init( int parameter_1);
void v_gravatar_tooltip( char parameter_1,int parameter_2,char parameter_3);
int v__cb_link_drag_done(double parameter_2);
char v__cb_link_drag_accept(char parameter_2,unsigned int parameter_3);
unsigned int v__cb_link_drag_move(char parameter_2,unsigned int parameter_3,long parameter_4,int parameter_5);
long v__cb_link_icon_new(float parameter_2,short parameter_3,long parameter_4);
double v__cb_link_move(char parameter_2,long parameter_3);
char v__cb_link_up_delay();
long v__cb_link_up(double parameter_2,double parameter_3);
void v_term_focus( long parameter_1);
char v__term_is_focused( char parameter_1);
void v_term_unfocus( short parameter_1);
unsigned int v__cb_ctxp_del(long parameter_2,double parameter_3);
double v__cb_ctxp_dismissed(unsigned int parameter_2);
double v__cb_ctxp_link_copy(long parameter_2);
char v__screen_visual_bounds( int parameter_1);
short v__draw_cell( short parameter_1,float parameter_2,float parameter_3,char parameter_4);
short v__draw_line( double parameter_1,long parameter_2,int parameter_3,int parameter_4,int parameter_5);
float v_termpty_backlog_length( unsigned int parameter_1);
float v_termio_pty_get( char parameter_1);
long v_termio_textgrid_get( long parameter_1);
short v_miniview_colors_get( int parameter_1,double parameter_2);
long v__deferred_renderer();
long v__queue_render( short parameter_1);
void v_miniview_redraw( float parameter_1);
short v__block_obj_del( double parameter_1);
float v__termpty_is_dblwidth_slow_get( int parameter_1,int parameter_2);
float v__termpty_is_dblwidth_get( short parameter_1,int parameter_2);
int v_term_preedit_str_get();
int v_media_get( unsigned int parameter_1);
void v__smart_media_clicked(short parameter_2);
void v_media_control_get( char parameter_1);
double v__smart_media_stop(int parameter_2);
void v__smart_media_pause(char parameter_2);
void v__smart_media_play(short parameter_2);
short v__smart_media_del(int parameter_2,long parameter_3);
void v_media_visualize_set( int parameter_1,unsigned int parameter_2);
void v_media_mute_set( int parameter_1,float parameter_2);
void v_media_volume_set( double parameter_1,double parameter_2);
short v__cb_media_vol(short parameter_2,short parameter_3,float parameter_4);
double v__cb_media_pos(int parameter_2,unsigned int parameter_3,float parameter_4);
int v__cb_media_pos_drag_stop(short parameter_2,unsigned int parameter_3,float parameter_4);
int v__cb_media_pos_drag_start(double parameter_2,int parameter_3,int parameter_4);
void v_media_stop( double parameter_1);
int v__cb_media_stop(short parameter_2,int parameter_3,char parameter_4);
float v__cb_media_pause(float parameter_2,unsigned int parameter_3,char parameter_4);
void v_media_play_set( int parameter_1,int parameter_2);
int v__cb_media_play(double parameter_2,short parameter_3,char parameter_4);
void v_media_position_set( double parameter_1,double parameter_2);
long v__cb_mov_ref(short parameter_2);
float v__cb_mov_progress(unsigned int parameter_2);
double v__cb_mov_restart();
double v__cb_mov_decode_stop(unsigned int parameter_2);
long v__cb_mov_len_change(float parameter_2);
float v__cb_mov_frame_resize(long parameter_2);
double v__cb_mov_frame_decode(float parameter_2);
short v__type_mov_init( float parameter_1);
short v__cb_edje_preloaded(float parameter_2,short parameter_3,float parameter_4);
double v__type_edje_init( unsigned int parameter_1);
unsigned int v__type_scale_init( unsigned int parameter_1);
short v__cb_img_frame();
int v__type_img_anim_handle( unsigned int parameter_1);
int v__cb_img_preloaded(unsigned int parameter_2,long parameter_3);
int v__type_img_init( unsigned int parameter_1);
float v__url_compl_cb(int parameter_2);
char v__url_prog_cb(int parameter_2);
float v__type_thumb_calc( long parameter_1,char parameter_2,long parameter_3,char parameter_4,long parameter_5);
unsigned int v__type_mov_calc( int parameter_1,unsigned int parameter_2,double parameter_3,long parameter_4,unsigned int parameter_5);
unsigned int v__type_edje_calc( long parameter_1,short parameter_2,unsigned int parameter_3,double parameter_4,long parameter_5);
char v__type_img_calc( char parameter_1,char parameter_2,unsigned int parameter_3,short parameter_4,float parameter_5);
short v__cb_scale_preloaded(long parameter_2,long parameter_3,int uni_para);
void v__type_scale_calc( unsigned int parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4,float parameter_5,int uni_para);
short v__unsmooth_timeout(int uni_para);
void v__smooth_handler( double parameter_1,int uni_para);
int v__smart_calculate( short parameter_1,int uni_para);
int v__smart_move( char parameter_1,unsigned int parameter_2,unsigned int parameter_3);
unsigned int v__smart_resize( float parameter_1,int parameter_2,unsigned int parameter_3);
short v__smart_del( unsigned int parameter_1);
int v__smart_add( short parameter_1);
int v__smart_init(int uni_para);
double v_media_add( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4,double parameter_5,int uni_para);
long v__block_media_activate( double parameter_1,int parameter_2,int uni_para);
double v__block_edje_message_cb(unsigned int parameter_2,double parameter_3,int parameter_4);
void v_termpty_write( float parameter_1,float parameter_2,int parameter_3);
double v__block_edje_signal_cb(char parameter_2,int parameter_3,int parameter_4);
void v_termpty_block_chid_update( float parameter_1,char parameter_2);
long v__block_edje_cmds( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4);
double v_homedir_get( char parameter_1,float parameter_2);
unsigned int v__block_edje_activate( char parameter_1,char parameter_2);
double v__block_activate( double parameter_1,char parameter_2,int uni_para);
long v_termpty_block_get( int parameter_1,int parameter_2);
int v_termpty_block_id_get( long parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( int parameter_1,int parameter_2);
long v__smart_apply( short parameter_1,int uni_para);
char v__smart_cb_change(int uni_para);
char v__smart_update_queue( int parameter_1,double parameter_2,int uni_para);
double v__lost_selection_reset_job();
unsigned int v__lost_selection(unsigned int parameter_2,int uni_para);
short v__take_selection_text( long parameter_1,int parameter_2,long parameter_3,int uni_para);
unsigned int v__cb_ctxp_link_content_copy(int parameter_2,int uni_para);
void v_ty_sb_free( unsigned int parameter_1);
float v_ty_sb_steal_buf( unsigned int parameter_1);
int v_codepoint_to_utf8( float parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim( long parameter_1);
int v_ty_sb_add( long parameter_1,long parameter_2,short parameter_3);
void v__termpty_cellrow_from_beacon_get( unsigned int parameter_1,int parameter_2,int parameter_3);
long v_termpty_cellrow_get( long parameter_1,int parameter_2,char parameter_3);
char v_termio_selection_get( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,unsigned int parameter_7);
double v__cb_ctxp_link_open(short parameter_2);
unsigned int v__should_inline( int parameter_1);
short v_link_is_email( short parameter_1);
void v_link_is_protocol( long parameter_1);
int v_link_is_url();
char v__activate_link( double parameter_1,double parameter_2);
void v__cb_ctxp_link_preview(unsigned int parameter_2);
short v__is_fmt( double parameter_1,long parameter_2);
void v_media_src_type_get( float parameter_1);
void v__mouse_in_selection( short parameter_1,int parameter_2,int parameter_3);
unsigned int v__smart_xy_to_cursor( float parameter_1,char parameter_2,int parameter_3,int parameter_4,int parameter_5);
unsigned int v__cb_link_down(unsigned int parameter_2,char parameter_3,int uni_para);
void v_main_term_popup_exists();
void v__update_link( long parameter_1,long parameter_2,int parameter_3,short parameter_4,int uni_para);
char v__remove_links( int parameter_1,long parameter_2,int uni_para);
void v__sel_set( double parameter_1,char parameter_2);
int v_termio_scroll_get( float parameter_1);
void v_miniview_position_offset( double parameter_1,int parameter_2,unsigned int parameter_3);
char v_term_miniview_get( float parameter_1);
void v_termio_scroll( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
char v_termpty_save_new( unsigned int parameter_1,int parameter_2);
float v_termpty_save_expand( float parameter_1,double parameter_2,int parameter_3);
int v__termpty_cell_is_empty( long parameter_1);
unsigned int v_termpty_line_length( double parameter_1,double parameter_2);
int v_verify_beacon( char parameter_1,int parameter_2);
void v_termpty_text_save_top( unsigned int parameter_1,float parameter_2,double parameter_3);
void v_termpty_text_scroll( char parameter_1,double parameter_2,int uni_para);
void v_termpty_text_scroll_test( unsigned int parameter_1,char parameter_2,int uni_para);
unsigned int v__cursor_to_start_of_line();
short v__tab_forward( double parameter_1,int parameter_2);
short v__handle_cursor_control( float parameter_1,int parameter_2);
int v_termpty_handle_seq( double parameter_1,long parameter_2,unsigned int parameter_3,int uni_para);
void v_termpty_handle_buf( int parameter_1,short parameter_2,int parameter_3,int uni_para);
void v_theme_reload( long parameter_1);
long v_theme_reload_cb(float parameter_2,char parameter_3,long parameter_4);
void v_theme_auto_reload_enable( long parameter_1);
char v__cursor_shape_to_group_name( short parameter_1);
unsigned int v_config_theme_path_default_get( long parameter_1);
void v_theme_path_get();
short v_config_theme_path_get( double parameter_1);
char v_theme_apply( double parameter_1,unsigned int parameter_2,float parameter_3);
void v_termio_set_cursor_shape( long parameter_1,double parameter_2);
void v_termpty_clear_tabs_on_screen( unsigned int parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( char parameter_1,short parameter_2);
int v__ts_free();
void v_termpty_save_free( short parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( long parameter_1);
void v_termpty_reset_att( float parameter_1);
unsigned int v_termio_config_get( int parameter_1);
void v_termpty_reset_state();
void v_termpty_resize_tabs( float parameter_1,int parameter_2,int parameter_3);
long v__termpty_init();
float v__add_default_keys();
void v_colors_standard_get( int parameter_1,int parameter_2,int parameter_3,long parameter_4,float parameter_5,short parameter_6);
float v_config_new();
short v__termpty_shutdown( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_2;
	return short_1;
}
void v_termpty_text_scroll_rev_test( short parameter_1,char parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long_1 = long_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		v_termpty_text_scroll_rev(unsigned_int_1,char_1);

		int_2 = int_1 + int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		float_3 = float_1 * float_2;
		double_3 = double_1 + double_2;
	}
}
unsigned int v__handle_esc_dcs( double parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
		double double_1 = 1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "K") > 0)
		{
			if(1)
			{
				short short_1 = 1;
				if(1)
				{
					short short_2 = 1;
					long_1 = v__safechar(float_1);

					short_2 = short_1 + short_2;
				}
				if(1)
				{
					short_1 = short_1 * short_1;
				}
			}
		}
		if(1)
		{
			double_1 = double_1;
		}
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		if(1)
		{
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			v_termpty_write(float_2,float_3,int_2);

			char_2 = char_1 * char_1;
		}
		if(1)
		{
			double_1 = double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_2 = double_2 + double_3;
		}
	}
	return unsigned_int_1;
}
void v__handle_op_a( char parameter_1,double parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_2;
	int_1 = int_1 + int_1;
}
float v__termpty_ext_handle( long parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_1;
	v__handle_op_a(char_1,double_1,short_1);

	float_1 = float_1 * float_2;
	return float_2;
}
unsigned int v__handle_esc_terminology( long parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = v_termio_config_get(int_1);

	float_1 = v__termpty_ext_handle(long_1,char_1,long_1);

	float_1 = float_1 + float_1;
	return unsigned_int_1;
}
float v__handle_xterm_777_command( double parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_1 + int_3;
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		int_3 = int_1 + int_1;
	}
	int_5 = int_4 + int_2;
	double_2 = double_1 * double_1;
	long_3 = long_1 * long_2;
	long_2 = long_1 + long_1;
	double_2 = double_1 + double_3;
	return float_1;
}
void v__smart_calculate_226( char parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1;
	int_1 = int_1 + int_1;
	float_1 = float_1 * float_1;
	int_2 = int_2 + int_3;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	int_3 = int_3 + int_2;
}
void v__smart_size( long parameter_1,int parameter_2,int parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v__smart_calculate_226(char_1);

	float_2 = float_1 + float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ";") > 0)
	{
		long_1 = v__smart_apply(short_1,-1 );

		int_1 = int_1 + int_1;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	short_3 = short_1 + short_2;
	v__sel_set(double_2,char_1);

	double_2 = double_1 * double_3;
	float_3 = float_1;
	v_termpty_resize(int_2,int_1,int_1);

	float_1 = float_4 * float_4;
	short_1 = short_3 * short_1;
	short_2 = short_2 + short_1;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "2k") < 0)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	char_2 = char_1 * char_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	char_4 = char_3 * char_1;
	short_4 = short_5;
	char_1 = char_2 + char_4;
	int_2 = int_1;
}
void v_colors_term_init( double parameter_1,char parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_4 = 1;
	double_1 = double_2;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_1 + double_2;
		if(1)
		{
			float_2 = float_1 * float_1;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
			int_1 = int_2 + int_1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		}
		if(1)
		{
			char_3 = char_2 * char_1;
			if(1)
			{
				short short_2 = 1;
				int_1 = int_2 * int_1;
				int_2 = int_3 * int_3;
				short_2 = short_1 * short_2;
				unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
				int_1 = int_3 * int_3;
			}
		}
		int_1 = int_1 + int_4;
		int_3 = int_3 + int_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_3;
			if(1)
			{
				char_3 = char_4;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			char_2 = char_3 + char_2;
			if(1)
			{
				int_1 = int_2 + int_2;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_3 = int_4 + int_2;
		if(1)
		{
			float float_3 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_3 = 1;
			short short_4 = 1;
			float_1 = float_1 * float_3;
			unsigned_int_3 = unsigned_int_6 + unsigned_int_4;
			char_3 = char_1 + char_4;
			float_2 = float_1 + float_2;
			short_1 = short_3 * short_4;
		}
		char_1 = char_2;
	}
}
void v_termio_config_update( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_3 = char_1 + char_2;
	float_2 = float_1 + float_2;
	double_1 = double_1;
	v_termpty_backlog_size_set(char_1,short_1);

	float_1 = float_1 * float_3;
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	int_1 = int_1 + int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_2 + double_1;
	}
	if(1)
	{
		int_2 = int_1;
	}
	char_1 = char_3;
	char_1 = char_2 + char_1;
	short_1 = short_1;
	v_termio_set_cursor_shape(long_1,double_2);

	v__smart_size(long_2,int_3,int_3,float_3);

	short_1 = short_1 + short_1;
	long_4 = long_1 * long_2;
	char_3 = char_4 + char_3;
	double_4 = double_1 + double_3;
	float_4 = float_3 + float_3;
	char_3 = char_3;
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	if(1)
	{
		double_4 = double_3 + double_2;
	}
	int_2 = int_1 + int_1;
	long_3 = long_2 * long_3;
	v_colors_term_init(double_5,char_3,double_6);

	char_4 = char_5 + char_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_4;
}
short v__font_size_set( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_1;
	float_1 = float_1 + float_2;
	short_2 = short_2 + short_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		double double_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		long long_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double_3 = double_2;
		v_termio_config_update(char_1);

		char_3 = char_2 * char_1;
		int_1 = int_1 * int_1;
		long_2 = long_1 * long_2;
		int_3 = int_1 + int_2;
		int_2 = int_2;
	}
	return short_3;
}
void v_termio_font_size_set( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = v__font_size_set(float_1,int_1);

}
double v__handle_xterm_50_command( float parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_2;
	return double_1;
	v_termio_font_size_set(short_1,int_1);

}
float v__eina_unicode_to_hex( double parameter_1)
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
void v__xterm_parse_color( short parameter_1,short parameter_2,int parameter_3,char parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_4 = 1;
	long_2 = long_1 * long_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		double_1 = double_3 * double_3;
	}
	float_1 = float_1 * float_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
		int_2 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		unsigned_int_3 = unsigned_int_4;
		double_3 = double_4 * double_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		double_3 = double_4 + double_5;
		if(1)
		{
			long_2 = long_2 * long_3;
		}
		unsigned_int_3 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		}
		short_1 = short_2;
		long_4 = long_3;
		if(1)
		{
			short short_3 = 1;
			short_1 = short_3 + short_3;
		}
		double_7 = double_6 + double_2;
	}
	if(1)
	{
		int int_3 = 1;
		long long_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_1;
		if(1)
		{
			float_1 = v__eina_unicode_to_hex(double_8);

			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
		int_3 = int_3;
		long_5 = long_2 * long_4;
		if(1)
		{
			short_4 = short_2;
		}
		char_2 = char_1 + char_2;
		double_7 = double_6 + double_7;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_3 + int_2;
		}
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		long_4 = long_3;
	}
	short_4 = short_1 + short_4;
}
int v__xterm_arg_get( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_2;
	float_1 = float_1 * float_1;
	double_2 = double_1 + double_1;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_3;
	double_2 = double_3 + double_1;
	short_3 = short_1 * short_1;
	short_1 = short_4;
	long_1 = long_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	double_3 = double_3;
	long_1 = long_1 * long_2;
	double_3 = double_3 + double_1;
	double_4 = double_4 * double_2;
	short_4 = short_1 * short_5;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	double_4 = double_2 * double_1;
	short_3 = short_6 + short_5;
	char_1 = char_1 + char_2;
	unsigned_int_7 = unsigned_int_1;
	return int_1;
}
short v__handle_esc_xterm( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char_2 = char_1 * char_1;
	int_1 = int_2;
	float_1 = v__handle_xterm_777_command(double_1,char_3,int_3);

	double_1 = double_2 * double_1;
	double_1 = double_2 + double_1;
	short_2 = short_1 * short_2;
	short_1 = short_2 + short_2;
	if(1)
	{
		char_2 = char_2 * char_1;
	}
	long_1 = v_termio_textgrid_get(long_1);

	int_3 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_2;
	double_2 = v__handle_xterm_50_command(float_1,char_4,int_3);

	char_2 = char_4 * char_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	char_6 = char_5 + char_4;
	if(1)
	{
		long_1 = long_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	v_termpty_write(float_1,float_1,int_3);

	short_3 = short_1 * short_2;
	char_3 = char_1 + char_5;
	float_1 = float_1 * float_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		double_2 = double_3 * double_3;
	}
	if(1)
	{
		double_3 = double_4;
		int_1 = v__xterm_arg_get(long_1);

		float_2 = float_2 + float_3;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		float_4 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
	}
	float_4 = float_3 * float_1;
	int_3 = int_3 * int_2;
	if(1)
	{
		double_1 = double_4;
	}
	if(1)
	{
		int int_4 = 1;
		int_5 = int_4 * int_1;
	}
	if(1)
	{
		double double_5 = 1;
		unsigned int unsigned_int_7 = 1;
		v__xterm_parse_color(short_2,short_1,int_1,char_4,int_5);

		double_5 = double_2 + double_5;
		unsigned_int_7 = unsigned_int_2;
	}
	if(1)
	{
		long long_2 = 1;
		unsigned_int_1 = v_termio_config_get(int_1);

		long_2 = long_2 * long_1;
	}
	if(1)
	{
		char_3 = char_4 * char_2;
	}
	int_7 = int_5 * int_6;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_8;
	return short_2;
}
void v_termpty_cells_set_content( long parameter_1,float parameter_2,float parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_3 = 1;
		short_2 = short_1 * short_2;
		float_1 = float_3 * float_1;
	}
}
float v__handle_esc_csi_decera( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_1;
	v_termpty_cells_set_content(long_1,float_1,float_1,int_1);

	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_3 * double_1;
	int_2 = int_1;
	short_1 = v__clean_up_rect_coordinates(long_2,int_1,int_2,int_3,int_3);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
	}
	float_1 = float_2 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		int_2 = int_1;
		int_2 = v__csi_arg_get(int_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	}
	return float_2;
}
void v_termpty_cells_att_fill_preserve_colors( float parameter_1,double parameter_2,short parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		long_1 = long_2;
		double_3 = double_3;
		double_1 = double_1 + double_3;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_1 = 1;
			int int_5 = 1;
			short_2 = short_1 * short_1;
			int_4 = int_3 * int_1;
			float_1 = float_1 * float_1;
			long_1 = long_2 * long_2;
			short_1 = short_2 + short_1;
			int_2 = int_5 + int_3;
		}
	}
}
short v__clean_up_rect_coordinates( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	float_1 = float_1 + float_2;
	char_1 = char_1 * char_2;
	char_2 = char_2 + char_3;
	int_1 = int_1 * int_1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	long_1 = long_1;
	int_2 = int_1 * int_2;
	if(1)
	{
		int_4 = int_3 + int_3;
	}
	if(1)
	{
		char_1 = char_1 * char_3;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 + float_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
	}
	if(1)
	{
		short_1 = short_2 * short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		int_5 = int_1 + int_2;
		if(1)
		{
			char char_4 = 1;
			char char_5 = 1;
			char_5 = char_4 + char_2;
		}
	}
	double_2 = double_1 + double_2;
	if(1)
	{
		int_4 = int_5 * int_2;
	}
	if(1)
	{
	}
	double_1 = double_1;
	int_2 = int_3 + int_3;
	short_5 = short_4 * short_3;
	short_4 = short_1 * short_6;
	return short_4;
}
unsigned int v__handle_esc_csi_decfra( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v__csi_arg_get(int_1);

	double_2 = double_1 * double_2;
	v_termpty_cells_att_fill_preserve_colors(float_1,double_3,short_1,int_1);

	double_3 = double_3 * double_4;
	int_3 = int_2 + int_1;
	int_2 = int_4;
	int_2 = int_2 + int_4;
	float_3 = float_1 + float_2;
	int_5 = int_2;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ")") < 0)
	{
	}
	long_3 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short_2 = v__clean_up_rect_coordinates(long_3,int_4,int_6,int_4,int_5);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_6 = double_2 + double_5;
	}
	return unsigned_int_1;
}
int v__handle_esc_csi_decslrm( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_3 + int_2;
	char_1 = char_1 + char_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	short_2 = short_1 * short_2;
	if(1)
	{
		float float_1 = 1;
		int_4 = v__csi_arg_get(int_3);

		short_3 = v__move_cursor_to_origin(long_1);

		float_1 = float_1 * float_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2 * char_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2 + double_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	int_1 = int_3;
	return int_1;
}
float v__handle_esc_csi_decstbm( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_2 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_4 = 1;
	short short_1 = 1;
	long long_5 = 1;
	int_1 = v__csi_arg_get(int_1);

	long_3 = long_1 + long_2;
	float_3 = float_1 * float_2;
	char_1 = char_1 * char_2;
	float_1 = float_1 + float_1;
	float_1 = float_4 * float_5;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, " T") < 0)
	{
		long_1 = long_2;
	}
	int_2 = int_1 + int_1;
	float_6 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_3 + long_4;
	short_1 = v__move_cursor_to_origin(long_5);

	float_3 = float_3 * float_1;
	return float_1;
}
double v__handle_esc_csi_decscusr( short parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int int_5 = 1;
	double double_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	int_2 = v__csi_arg_get(int_2);

	long_1 = long_1;
	long_1 = long_2 + long_1;
	int_3 = int_3;
	double_1 = double_2;
	v_termio_set_cursor_shape(long_2,double_3);

	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	int_3 = int_1 + int_2;
	double_3 = double_3 * double_3;
	long_1 = long_1 + long_1;
	int_4 = int_2 + int_3;
	short_1 = short_1 + short_1;
	int_4 = int_4 * int_5;
	int_1 = int_4 + int_5;
	return double_4;
}
short v__handle_esc_csi_dsr( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	double_1 = double_1 + double_1;
	short_1 = short_1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		double double_3 = 1;
		long_1 = long_1 * long_1;
		long_2 = long_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = v__csi_arg_get(int_2);

		v_termpty_write(float_1,float_1,int_3);

		long_2 = long_3;
		double_2 = double_2;
		int_4 = int_1 + int_3;
		double_4 = double_1 * double_3;
	}
	if(1)
	{
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double_4 = double_4 * double_5;
		long_3 = long_3 * long_1;
		int_1 = int_2 * int_2;
		double_2 = double_2 * double_1;
		char_3 = char_1 * char_2;
		char_3 = char_4 + char_5;
	}
	return short_3;
}
int v__handle_esc_csi_truecolor_cmyk( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	float float_4 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_3 = float_1 + float_2;
	char_3 = char_1 * char_2;
	short_1 = v__csi_truecolor_arg_get(int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	int_2 = int_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	char_3 = char_4 * char_2;
	v__approximate_truecolor_rgb(float_4,int_1,int_2,int_3);

	short_2 = short_2 + short_3;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
	return int_1;
}
long v__handle_esc_csi_truecolor_cmy( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = v__csi_truecolor_arg_get(int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	v__approximate_truecolor_rgb(float_1,int_2,int_1,int_1);

	int_2 = int_1 * int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "An") < 0)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	float_2 = float_1 * float_1;
	float_3 = float_3;
	return long_1;
}
void v__approximate_truecolor_rgb( float parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 * long_2;
	short_1 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_2 * short_2;
			if(1)
			{
				long long_3 = 1;
				long_1 = v_termio_textgrid_get(long_1);

				long_2 = long_3 + long_2;
			}
		}
	}
}
short v__csi_truecolor_arg_get( int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
int v__handle_esc_csi_truecolor_rgb( int parameter_1,long parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	v__approximate_truecolor_rgb(float_1,int_1,int_2,int_3);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_4;
	int_2 = int_1 + int_4;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short_2 = short_2 * short_3;
		short_4 = v__csi_truecolor_arg_get(int_5);

		double_2 = double_1 + double_2;
		double_2 = double_3 + double_2;
	}
	if(1)
	{
	}
	return int_6;
}
void v__handle_esc_csi_color_set( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int_1 = v__handle_esc_csi_truecolor_rgb(int_2,long_1);

	long_2 = v__handle_esc_csi_truecolor_cmy(int_2,double_1);

	int_1 = int_2 + int_1;
	v_termpty_reset_att(float_1);

	char_2 = char_1 * char_1;
	int_1 = v__csi_arg_get(int_2);

	int_1 = v__handle_esc_csi_truecolor_cmyk(short_1,int_1);

}
void v_termpty_cursor_copy( char parameter_1,char parameter_2)
{
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float_1 = float_1 * float_2;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_2 = double_1 + double_1;
		int_2 = int_1 + int_2;
		long_1 = long_1 * long_1;
		short_2 = short_1 + short_1;
	}
}
short v__switch_to_alternative_screen( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		v_termpty_screen_swap(float_1);

		int_3 = int_1 * int_2;
	}
	return short_1;
}
short v__move_cursor_to_origin( long parameter_1)
{
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_3 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_3 = short_1 * short_2;
		char_1 = char_2;
		double_2 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		double double_3 = 1;
		char_1 = char_3 + char_4;
		double_3 = double_2 + double_1;
	}
	return short_2;
}
double v__pty_size( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_1 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1;
	long_1 = long_2 * long_2;
	char_4 = char_4 + char_5;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	return double_1;
}
long v__limit_coord( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
	long_1 = long_2;
	short_1 = short_2;
	int_2 = int_1 + int_2;
	float_2 = float_1 + float_1;
	return long_3;
}
char v__check_screen_info( float parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		double_2 = double_1 * double_1;
		v_termpty_cells_clear(double_2,char_1,int_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		char_1 = char_2;
		int_1 = int_2;
		if(1)
		{
			char char_4 = 1;
			char_4 = char_1 + char_3;
		}
		v_termpty_text_save_top(unsigned_int_2,float_1,double_3);

		int_3 = int_2 + int_2;
	}
	return char_3;
}
unsigned int v__termpty_line_rewrap( char parameter_1,short parameter_2,int parameter_3,unsigned int parameter_4,unsigned int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = v__check_screen_info(float_1,unsigned_int_3);

	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2;
	return unsigned_int_1;
}
short v__backlog_remove_latest_nolock( unsigned int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = v_verify_beacon(char_1,int_1);

	char_2 = char_1 * char_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	v_termpty_save_free(short_1);

	double_3 = double_1 * double_2;
	double_2 = double_2;
	double_1 = double_1 + double_1;
	double_5 = double_4 + double_2;
	return short_1;
}
unsigned int v_termpty_save_extract( char parameter_1)
{
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double_2 = double_1 + double_1;
			int_2 = int_1 * int_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_4 = double_3 * double_3;
			int_2 = int_1 + int_2;
			if(1)
			{
			}
			float_1 = float_2;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
			if(1)
			{
				float float_3 = 1;
				float_3 = float_2 + float_2;
			}
		}
	}
	return unsigned_int_2;
}
void v__termpty_line_is_empty( long parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
		if(1)
		{
		}
	}
	int_1 = v__termpty_cell_is_empty(long_1);

}
void v_termpty_screen_swap( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_2;
	double_3 = double_1 + double_2;
	double_3 = double_3 * double_1;
	double_4 = double_4;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_5 + double_6;
	char_2 = char_1 * char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "x") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
}
void v_termpty_resize( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	short short_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_2 = 1;
	short short_7 = 1;
	int int_7 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_8 = 1;
	float float_6 = 1;
	char char_5 = 1;
	long long_4 = 1;
	char char_6 = 1;
	int int_8 = 1;
	float float_7 = 1;
	int int_9 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = v__termpty_line_rewrap(char_1,short_1,int_1,unsigned_int_2,unsigned_int_3);

	int_2 = int_2 + int_1;
	v_termpty_screen_swap(float_1);

	int_1 = int_3 * int_3;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	int_6 = int_4 + int_5;
	if(1)
	{
		int_2 = int_4 * int_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	double_4 = double_3 * double_2;
	if(1)
	{
		int_3 = int_4 + int_1;
	}
	double_1 = double_1 * double_3;
	double_2 = double_5 * double_3;
	if(1)
	{
		short_2 = short_2 + short_1;
	}
	int_2 = int_4 + int_5;
	short_5 = short_3 + short_4;
	double_5 = double_6 + double_6;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_1 + char_2;
		if(1)
		{
			short_6 = short_3;
			float_3 = float_1 * float_2;
		}
	}
	unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
	if(1)
	{
		double_1 = double_4 + double_1;
	}
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		double_6 = v__pty_size(int_6);

		unsigned_int_3 = unsigned_int_7 * unsigned_int_4;
		v__termpty_line_is_empty(long_2,short_7);

		double_3 = double_1 * double_4;
		int_3 = int_7;
		if(1)
		{
			float float_4 = 1;
			unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
			unsigned_int_1 = unsigned_int_7 + unsigned_int_5;
			v_termpty_backlog_lock();

			unsigned_int_4 = unsigned_int_7 + unsigned_int_1;
			char_1 = char_2 + char_1;
			if(1)
			{
				float_5 = float_2 * float_4;
			}
			double_2 = double_4 * double_5;
			char_1 = char_2 + char_1;
			float_2 = float_5 + float_4;
			unsigned_int_8 = unsigned_int_2 * unsigned_int_1;
			int_4 = int_3 + int_7;
			unsigned_int_6 = v_termpty_line_length(double_7,double_4);

			char_1 = char_3;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_7 = short_7 + short_7;
		char_1 = char_2 + char_1;
		int_2 = v_verify_beacon(char_4,int_1);

		unsigned_int_3 = unsigned_int_3;
		char_4 = char_1 + char_2;
	}
	int_7 = int_4 + int_5;
	unsigned_int_7 = v_termpty_save_extract(char_4);

	double_8 = double_6 + double_3;
	v_termpty_backlog_unlock();

	double_4 = double_5 * double_2;
	double_4 = double_3;
	char_4 = char_1;
	long_1 = v__limit_coord(unsigned_int_1);

	float_5 = float_6 * float_6;
	char_5 = char_3 + char_2;
	unsigned_int_8 = unsigned_int_1;
	if(1)
	{
		long long_3 = 1;
		long_4 = long_3 + long_3;
	}
	long_2 = long_4;
	short_3 = short_2 + short_6;
	short_1 = short_4;
	char_6 = char_2;
	v_termpty_resize_tabs(float_2,int_8,int_1);

	int_7 = int_3;
	short_5 = v__backlog_remove_latest_nolock(unsigned_int_2);

	int_6 = int_3 * int_7;
	float_7 = float_3;
	int_3 = int_9 * int_1;
}
long v_termio_win_get( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_2;
	return long_1;
}
float v__handle_esc_csi_reset_mode( unsigned int parameter_1,double parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	v_termpty_reset_state();

	v_termpty_cursor_copy(char_1,char_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_termpty_clear_screen(short_1,double_1);

	short_1 = v__switch_to_alternative_screen(int_1,int_2);

	int_3 = int_4;
	int_1 = v__csi_arg_get(int_3);

	long_1 = v_termio_win_get(short_1);

	short_1 = v__move_cursor_to_origin(long_2);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	return float_1;
	v_termpty_resize(int_1,int_3,int_4);

}
short v__handle_esc_csi_cursor_pos_set( short parameter_1,short parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	double_3 = double_1 * double_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
	double_4 = double_4 * double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ":") < 0)
	{
		unsigned_int_3 = unsigned_int_6;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
		if(1)
		{
			float_1 = float_1 + float_2;
		}
	}
	if(1)
	{
		double_3 = double_3 + double_4;
	}
	float_2 = float_2 + float_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		int_2 = v__csi_arg_get(int_2);

		unsigned_int_7 = unsigned_int_1 + unsigned_int_5;
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 * int_1;
	}
	float_2 = float_1;
	return short_1;
}
void v_termpty_text_scroll_rev( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_2;
	}
	short_1 = short_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		v_termpty_cells_clear(double_1,char_1,int_1);

		int_3 = int_3 * int_1;
		if(1)
		{
			double double_3 = 1;
			double_3 = double_2 * double_2;
		}
		float_1 = float_1;
		if(1)
		{
			char char_2 = 1;
			char_2 = char_2 * char_3;
		}
	}
	if(1)
	{
		v_termio_scroll(unsigned_int_5,int_1,int_2,int_3,-1 );

		float_1 = float_1 * float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			long long_1 = 1;
			double double_5 = 1;
			double_4 = double_2 * double_4;
			long_1 = long_1;
			double_4 = double_1 + double_5;
		}
		if(1)
		{
			char char_4 = 1;
			char_3 = char_4;
		}
	}
}
void v_termpty_clear_line( long parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_2;
	int_1 = int_1 * int_2;
	int_2 = int_1 + int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	long_1 = long_2;
	char_3 = char_1 * char_1;
	long_3 = long_4;
	char_2 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_2;
	short_2 = short_1 * short_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		double double_5 = 1;
		v_termpty_cells_clear(double_4,char_4,int_2);

		double_5 = double_2 * double_2;
	}
	long_2 = long_5;
	unsigned_int_4 = unsigned_int_5;
	v_termio_content_change(float_1,long_1,long_3,int_1);

}
void v_termpty_clear_screen( short parameter_1,double parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	if(1)
	{
		char char_1 = 1;
		v_termio_content_change(float_1,long_1,long_1,int_1);

		char_2 = char_1 + char_1;
	}
	if(1)
	{
		int int_2 = 1;
		v_termpty_clear_line(long_1,short_1,int_1);

		int_2 = int_1 + int_2;
	}
	double_1 = double_1;
	int_3 = int_3;
	unsigned_int_1 = unsigned_int_2;
	v_termpty_cells_clear(double_1,char_2,int_3);

	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
}
void v_termpty_cell_codepoint_att_fill( float parameter_1,double parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_1 = double_1 + double_1;
		int_1 = int_2;
	}
}
int v__termpty_charset_trans( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	int_2 = int_3 * int_1;
	if(1)
	{
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2 + char_2;
		}
		if(1)
		{
			double_2 = double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	return int_4;
}
void v_termio_content_change( float parameter_1,long parameter_2,long parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_7 = 1;
	long long_2 = 1;
	long long_4 = 1;
	double double_8 = 1;
	char char_4 = 1;
	double_2 = double_1 + double_1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	double_4 = double_2 + double_3;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		double double_5 = 1;
		int_1 = int_1 * int_1;
		char_2 = v__remove_links(int_1,long_1,-1 );

		int_1 = int_2 + int_3;
		int_3 = int_4;
		unsigned_int_3 = unsigned_int_3;
		float_1 = float_1;
		double_3 = double_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_6 = 1;
			float_1 = float_1 * float_1;
			if(1)
			{
				int int_6 = 1;
				int_5 = int_3 + int_1;
				int_6 = int_6 * int_2;
			}
			double_7 = double_3 + double_6;
			double_3 = double_7 * double_3;
		}
	}
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_6;
	short_2 = short_1 * short_2;
	int_7 = int_1 + int_3;
	if(1)
	{
		double_1 = double_7;
		int_7 = int_4 + int_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_4 = long_2 + long_3;
		short_1 = short_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_1 = unsigned_int_7;
			char controller_6[2];
			fgets(controller_6 ,2 ,stdin);
			if( strcmp( controller_6, "}") < 0)
			{
				int int_8 = 1;
				int_8 = int_3 * int_1;
				int_2 = int_3 * int_1;
			}
			int_4 = int_5 + int_1;
			int_5 = int_4 * int_2;
		}
	}
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		char char_3 = 1;
		long_6 = long_5 * long_6;
		char_1 = char_1 + char_3;
		long_2 = long_2 * long_4;
		double_2 = double_4 * double_8;
		char_2 = char_2 + char_1;
		if(1)
		{
			int_3 = int_3;
		}
	}
	v__sel_set(double_8,char_4);

}
void v_termpty_text_append( double parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_2;
	int_2 = int_1 + int_1;
	float_1 = float_1 + float_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	float_2 = float_3 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_7 = 1;
		char char_2 = 1;
		int int_3 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_9 = 1;
		double_5 = double_4 * double_2;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
			double_1 = double_2 * double_4;
			unsigned_int_5 = unsigned_int_6;
			short_3 = short_1 + short_2;
			unsigned_int_2 = unsigned_int_6;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_4 = 1;
				float_4 = float_3 * float_4;
			}
		}
		unsigned_int_7 = unsigned_int_4 + unsigned_int_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_7 + unsigned_int_5;
		}
		char controller4vul_523[2];
		fgets(controller4vul_523 ,2 ,stdin);
		if( strcmp( controller4vul_523, "V") < 0)
		{
			char controller4vul_524[3];
			fgets(controller4vul_524 ,3 ,stdin);
			if( strcmp( controller4vul_524, "j?") > 0)
			{
				v_termpty_text_scroll_test(unsigned_int_8,char_1,uni_para);

				double_4 = double_2 * double_4;
			}
			char_2 = char_2 * char_1;
		}
		float_3 = float_3 + float_1;
		if(1)
		{
			short_3 = short_3 + short_1;
			unsigned_int_5 = unsigned_int_8 + unsigned_int_4;
		}
		unsigned_int_4 = unsigned_int_6;
		if(1)
		{
			int_2 = int_2 + int_3;
			char_3 = char_2 + char_1;
		}
		if(1)
		{
			double double_6 = 1;
			double_6 = double_3 + double_5;
			double_4 = double_6 + double_1;
			if(1)
			{
				unsigned_int_9 = unsigned_int_6 + unsigned_int_3;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_9 * unsigned_int_4;
			}
			if(1)
			{
				double_5 = double_3 + double_5;
				unsigned_int_8 = unsigned_int_8 * unsigned_int_9;
			}
		}
		if(1)
		{
			int int_4 = 1;
			char char_4 = 1;
			int_4 = int_3 * int_4;
			float_1 = float_3 * float_3;
			if(1)
			{
				float float_5 = 1;
				float_5 = float_3 + float_3;
			}
			unsigned_int_3 = unsigned_int_8 * unsigned_int_8;
			if(1)
			{
				unsigned int unsigned_int_10 = 1;
				short short_4 = 1;
				unsigned_int_10 = unsigned_int_6 + unsigned_int_9;
				short_4 = short_2 + short_4;
			}
			char_4 = char_3;
		}
	}
}
int v__csi_arg_get( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_2;
	double_1 = double_2;
	double_2 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "|") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	return int_3;
}
long v__handle_esc_csi( long parameter_1,unsigned int parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	v_termpty_text_append(double_1,char_1,int_1,uni_para);

	char_3 = char_2 * char_3;
	short_1 = short_1 * short_2;
	return long_1;
}
long v__safechar( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
char v__handle_esc( double parameter_1,long parameter_2,char parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_7 = 1;
	int int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	long_1 = v__handle_esc_csi(long_2,unsigned_int_1,double_1,-1 );

	float_2 = float_1 + float_1;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = v__handle_esc_terminology(long_2,float_3,int_1);

	short_2 = short_2;
	if(1)
	{
	}
	v_termpty_cell_codepoint_att_fill(float_3,double_2,int_1,double_1,int_2);

	int_2 = int_1;
	if(1)
	{
	}
	short_2 = short_3 * short_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_2 = v__handle_esc_xterm(int_2,unsigned_int_3,int_1);

	int_1 = int_2 + int_2;
	long_1 = long_3 * long_2;
	double_1 = double_1;
	float_3 = float_4 + float_1;
	long_2 = long_3 + long_3;
	int_3 = int_1 * int_3;
	double_4 = double_2 * double_3;
	char_1 = char_1 * char_1;
	unsigned_int_1 = v__handle_esc_dcs(double_5,int_2,unsigned_int_3);

	double_6 = double_2;
	long_2 = long_3 + long_3;
	float_1 = float_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	short_1 = short_1 + short_3;
	char_3 = char_2 * char_3;
	double_7 = double_3 + double_3;
	int_3 = int_2 * int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
	}
	long_1 = long_2;
	int_4 = int_4 + int_1;
	short_2 = short_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
	short_4 = short_2 + short_2;
	if(1)
	{
	}
	long_2 = v__safechar(float_4);

	float_2 = float_1 + float_1;
	double_7 = double_6 * double_7;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	short_1 = short_5 + short_4;
	if(1)
	{
	}
	v_termpty_reset_state();

	unsigned_int_5 = unsigned_int_5;
	int_3 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_6 = 1;
		float_4 = float_2 + float_2;
		long_5 = long_3 + long_4;
		v_termpty_text_scroll_test(unsigned_int_4,char_2,-1 );

		unsigned_int_5 = unsigned_int_6;
		short_4 = short_5 + short_6;
		v_termpty_text_scroll_rev_test(short_3,char_2);

		double_5 = double_4 + double_7;
		if(1)
		{
			v_termpty_cursor_copy(char_3,char_4);

			double_6 = double_3;
		}
		long_6 = long_5 * long_2;
		int_2 = int_1;
		if(1)
		{
			char_4 = char_1 * char_3;
			int_1 = int_4 + int_3;
			v_termpty_clear_screen(short_6,double_1);

			short_1 = short_2 * short_4;
		}
	}
	if(1)
	{
	}
	float_3 = float_5 * float_6;
	int_5 = int_5;
	double_5 = double_2;
	int_6 = int_4 * int_4;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
	return char_2;
}
void v_termpty_cell_fill( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_2 = 1;
			int_3 = int_1 * int_2;
			long_1 = long_2 * long_1;
		}
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "[y") < 0)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			int_3 = int_1 * int_2;
		}
	}
}
void v_termpty_cells_fill( short parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	v_termpty_cell_fill(unsigned_int_1,float_1,int_1,int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	double_2 = double_1 + double_1;
	float_3 = float_2 * float_2;
	int_1 = int_2 * int_2;
}
void v_termpty_cells_clear( double parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_termpty_cells_fill(short_1,int_1,unsigned_int_1,int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
float v__tooltip_del(long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_2;
	double_1 = double_1 * double_2;
	float_2 = float_1 + float_2;
	return float_1;
}
void v__tooltip_content(long parameter_2,int parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1 + float_1;
	double_1 = v_media_add(unsigned_int_1,float_1,int_1,int_2,double_1,-1 );

	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 + long_2;
}
void v_MD5Final( double parameter_1,float parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_3 = 1;
	int int_3 = 1;
	float float_4 = 1;
	v_MD5Transform(float_1,short_1);

	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_3;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	int_1 = int_1 + int_2;
	if(1)
	{
		float float_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float_2 = float_1 * float_1;
		short_3 = short_2 * short_1;
		double_4 = double_3 * double_1;
		double_4 = double_2 + double_2;
	}
	if(1)
	{
		char_1 = char_3 + char_2;
	}
	unsigned_int_2 = unsigned_int_3;
	long_1 = long_1;
	double_3 = double_4;
	char_3 = char_3 + char_1;
	float_3 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	v_byteReverse(unsigned_int_1,int_3);

	float_4 = float_4;
}
void v_MD5Transform( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_9 = 1;
	char char_3 = 1;
	long long_3 = 1;
	short short_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	long long_7 = 1;
	char char_4 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_2;
	int_3 = int_2 + int_2;
	char_2 = char_1 * char_1;
	long_1 = long_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	short_1 = short_2;
	double_1 = double_1 * double_1;
	short_4 = short_3 + short_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	unsigned_int_2 = unsigned_int_5;
	float_2 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	float_3 = float_1 + float_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	int_3 = int_1 * int_4;
	float_4 = float_1;
	double_2 = double_3;
	int_1 = int_1 * int_4;
	int_4 = int_4 + int_4;
	double_2 = double_2;
	double_1 = double_1 * double_3;
	long_1 = long_2 + long_2;
	short_3 = short_1 * short_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
	int_2 = int_3 + int_4;
	double_5 = double_4 * double_2;
	float_5 = float_5;
	int_4 = int_4 * int_3;
	long_2 = long_2 * long_2;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
	double_7 = double_6 + double_2;
	short_4 = short_5 * short_2;
	int_5 = int_5 * int_6;
	double_8 = double_8 * double_7;
	int_3 = int_6 * int_6;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
	unsigned_int_3 = unsigned_int_7;
	int_1 = int_4 + int_5;
	unsigned_int_4 = unsigned_int_5;
	double_5 = double_2 + double_9;
	char_1 = char_3 * char_3;
	short_5 = short_5 + short_4;
	unsigned_int_5 = unsigned_int_7 * unsigned_int_3;
	double_8 = double_4 + double_9;
	double_4 = double_8 + double_9;
	long_2 = long_3;
	short_4 = short_6 + short_3;
	float_1 = float_5 + float_5;
	float_2 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_7 + unsigned_int_5;
	long_5 = long_1 * long_4;
	unsigned_int_2 = unsigned_int_3;
	double_1 = double_1;
	long_6 = long_2 + long_6;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_8;
	int_3 = int_6 * int_1;
	int_4 = int_6 + int_3;
	double_6 = double_6 + double_6;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_7;
	int_2 = int_3;
	long_5 = long_6 + long_4;
	unsigned_int_1 = unsigned_int_9 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_10 + unsigned_int_1;
	int_5 = int_3 * int_6;
	int_4 = int_3 * int_5;
	long_7 = long_4 + long_7;
	char_1 = char_4 + char_2;
	double_5 = double_4 * double_8;
}
void v_byteReverse( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_1;
}
void v_MD5Update( char parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_4 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2;
	float_2 = float_2 + float_1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	v_byteReverse(unsigned_int_2,int_2);

	int_1 = int_3 + int_2;
	double_1 = double_2;
	float_2 = float_2;
	v_MD5Transform(float_3,short_3);

	float_2 = float_2 * float_3;
	double_1 = double_1 * double_3;
	int_5 = int_2 * int_4;
	double_5 = double_4 * double_3;
	double_4 = double_3;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	int_5 = int_1 * int_5;
	double_6 = double_6;
	double_1 = double_3;
	double_7 = double_8;
	float_4 = float_3 + float_1;
}
void v_MD5Init( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_2;
	short_3 = short_1 * short_2;
	short_1 = short_4 + short_2;
	float_1 = float_1;
	double_2 = double_2 * double_2;
	double_3 = double_2;
}
void v_gravatar_tooltip( char parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char_2 = char_1 * char_1;
	float_1 = float_1 * float_2;
	long_2 = long_1 * long_1;
	v__tooltip_content(long_2,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
	float_3 = float_1;
	float_2 = v__tooltip_del(long_1);

	double_1 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "rH") > 0)
	{
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "/D") < 0)
	{
	}
	short_1 = short_1;
	double_3 = double_1 + double_1;
	double_4 = double_4 + double_4;
	double_3 = double_2 * double_1;
	v_MD5Update(char_1,unsigned_int_4,int_2);

	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_MD5Init(int_3);

		char_1 = char_1 + char_2;
		v_MD5Final(double_4,float_4);

		double_2 = double_3 * double_3;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	int_4 = int_4 * int_5;
	long_1 = long_1 * long_1;
	short_4 = short_3 * short_1;
}
int v__cb_link_drag_done(double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_1;
	short_1 = short_1 + short_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	int_1 = int_1 + int_2;
	return int_1;
}
char v__cb_link_drag_accept(char parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_2;
	return char_1;
}
unsigned int v__cb_link_drag_move(char parameter_2,unsigned int parameter_3,long parameter_4,int parameter_5)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	long_2 = long_1 * long_2;
	short_3 = short_1 * short_2;
	double_1 = double_1 + double_1;
	double_1 = double_2 + double_3;
	if(1)
	{
		if(1)
		{
			double_2 = double_1 + double_3;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_2;
		}
	}
	return unsigned_int_1;
}
long v__cb_link_icon_new(float parameter_2,short parameter_3,long parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float_3 = float_1 * float_2;
	double_3 = double_1 + double_2;
	double_2 = double_2 + double_2;
	float_5 = float_4 + float_5;
	double_1 = double_1 + double_1;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
double v__cb_link_move(char parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	short_2 = short_1 * short_2;
	int_2 = int_1 * int_2;
	char_2 = char_1 + char_2;
	int_3 = int_3 * int_1;
	if(1)
	{
	}
	int_4 = int_1 * int_4;
	double_3 = double_1 * double_2;
	if(1)
	{
		long long_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_1 = v__cb_link_drag_accept(char_1,unsigned_int_1);

		long_3 = long_1 * long_2;
		long_1 = v__cb_link_icon_new(float_1,short_1,long_2);

		unsigned_int_2 = v__cb_link_drag_move(char_1,unsigned_int_3,long_4,int_4);

		char_2 = char_2 * char_1;
		double_1 = double_3 + double_3;
		if(1)
		{
			long_4 = long_1 + long_4;
		}
		if(1)
		{
			char_3 = char_2 * char_2;
		}
		int_1 = v__cb_link_drag_done(double_3);

		int_2 = int_4 + int_1;
		char_3 = char_1 * char_4;
	}
	return double_2;
}
char v__cb_link_up_delay()
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1;
	char_1 = v__activate_link(double_1,double_2);

	float_2 = float_1 + float_1;
	double_3 = double_2 + double_1;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2;
	}
	int_2 = int_2 * int_3;
	return char_1;
}
long v__cb_link_up(double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	int_2 = int_1 + int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float_2 = float_1 + float_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				double_3 = double_1;
			}
			if(1)
			{
				char_1 = v__cb_link_up_delay();

				int_1 = int_2 * int_2;
			}
		}
		int_1 = int_2 * int_1;
	}
	return long_1;
}
void v_term_focus( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	char_1 = v__term_is_focused(char_1);

	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1;
	short_2 = short_1 * short_1;
}
char v__term_is_focused( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_2;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	return char_1;
}
void v_term_unfocus( short parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char_1 = v__term_is_focused(char_1);

	short_2 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	short_3 = short_1;
	long_1 = long_1 * long_1;
	long_2 = long_2 + long_3;
}
unsigned int v__cb_ctxp_del(long parameter_2,double parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_term_unfocus(short_1);

	v_term_focus(long_1);

	short_1 = short_2 + short_2;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2;
	float_2 = float_1 + float_1;
	return unsigned_int_3;
}
double v__cb_ctxp_dismissed(unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_2 = long_1 * long_2;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_2;
	return double_1;
}
double v__cb_ctxp_link_copy(long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	int_3 = int_2 + int_2;
	float_1 = float_1 + float_2;
	short_1 = v__take_selection_text(long_1,int_2,long_2,-1 );

	char_1 = char_1 * char_2;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	return double_1;
}
char v__screen_visual_bounds( int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
		short_1 = short_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_3 = 1;
		long_2 = long_1 + long_1;
		short_3 = short_2 + short_1;
	}
	return char_1;
}
short v__draw_cell( short parameter_1,float parameter_2,float parameter_3,char parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	short_2 = short_1 + short_1;
	double_1 = double_1 * double_2;
	long_1 = long_1 + long_2;
	double_4 = double_1 * double_3;
	if(1)
	{
		double_3 = double_3 * double_5;
	}
	int_1 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_3 * int_4;
	int_3 = int_3;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_3 + double_3;
		}
		if(1)
		{
			char char_2 = 1;
			char_1 = char_1 + char_2;
		}
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_3 * int_4;
	}
	if(1)
	{
		char_3 = char_1 + char_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_5 = 1;
		long_1 = long_3 + long_1;
		float_3 = float_1 + float_2;
		float_4 = float_2 * float_2;
		char_1 = char_3;
		float_5 = float_3 + float_2;
		unsigned_int_3 = unsigned_int_2;
		double_1 = double_4 + double_5;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	}
	if(1)
	{
		float float_6 = 1;
		float_4 = float_6;
	}
	if(1)
	{
		short_3 = short_2 + short_1;
	}
	if(1)
	{
		if(1)
		{
			long_3 = long_1 + long_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		int int_6 = 1;
		int_2 = int_6 + int_3;
	}
	return short_3;
}
short v__draw_line( double parameter_1,long parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short_1 = v__draw_cell(short_1,float_1,float_2,char_1);

	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return short_2;
}
float v_termpty_backlog_length( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_4 = 1;
	long_2 = long_1 * long_2;
	long_3 = long_3 * long_3;
	int_1 = int_1;
	double_2 = double_1 + double_2;
	int_2 = v_verify_beacon(char_1,int_2);

	char_1 = char_2;
	double_1 = double_1 + double_1;
	float_1 = float_1 * float_2;
	float_3 = float_1 + float_2;
	int_3 = int_1 + int_2;
	int_1 = int_2 * int_2;
	double_1 = double_3 * double_3;
	char_2 = char_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	int_3 = int_4 * int_1;
	if(1)
	{
		int_4 = int_4;
	}
	int_3 = int_4;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_3 * double_4;
	}
	double_6 = double_2;
	if(1)
	{
		char_1 = char_2 + char_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_3 = double_1 * double_3;
	}
	float_1 = float_3;
	short_5 = short_3 * short_4;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	float_4 = float_5;
	short_3 = short_1 * short_2;
	long_4 = long_3 + long_3;
	return float_2;
}
float v_termio_pty_get( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_2;
	long_2 = long_1 + long_1;
	return float_1;
}
long v_termio_textgrid_get( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 + int_2;
	return long_1;
}
short v_miniview_colors_get( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double_3 = double_1 + double_2;
	double_3 = double_3 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_3 = 1;
		long_1 = v_termio_textgrid_get(long_2);

		char_2 = char_1 + char_1;
		short_3 = short_1 * short_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_3 = 1;
		float_2 = float_1 + float_1;
		long_1 = long_3;
	}
	return short_2;
}
long v__deferred_renderer()
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_4 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_7 = 1;
	float float_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
	int_1 = int_2;
	short_1 = v__draw_line(double_1,long_1,int_2,int_2,int_1);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1 * double_1;
	double_4 = double_2 * double_3;
	int_3 = v_termio_scroll_get(float_1);

	float_2 = float_1 * float_1;
	long_3 = long_2 + long_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_3 * unsigned_int_4;
	}
	char_1 = char_1 + char_1;
	short_2 = short_1 * short_1;
	long_3 = long_4 * long_5;
	float_1 = float_3;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	int_1 = int_3;
	unsigned_int_8 = unsigned_int_5 + unsigned_int_7;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_3;
	double_2 = double_4 + double_3;
	double_4 = double_3 + double_2;
	float_2 = v_termpty_backlog_length(unsigned_int_7);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		unsigned_int_9 = unsigned_int_3;
	}
	if(1)
	{
		long long_6 = 1;
		long_6 = long_4 + long_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_2 * short_1;
		if(1)
		{
			unsigned_int_6 = unsigned_int_2 * unsigned_int_8;
		}
		double_2 = double_1;
	}
	int_4 = int_2 + int_2;
	double_1 = double_1 + double_3;
	short_3 = short_3 + short_3;
	if(1)
	{
		char_2 = v__screen_visual_bounds(int_2);

		float_2 = float_1 * float_2;
	}
	if(1)
	{
		unsigned_int_10 = unsigned_int_8 + unsigned_int_10;
	}
	int_4 = int_2 + int_1;
	float_1 = float_3 * float_3;
	if(1)
	{
		double_1 = double_2 * double_4;
		unsigned_int_11 = unsigned_int_1;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_3;
			int_4 = int_2 * int_2;
		}
		if(1)
		{
			if(1)
			{
				double double_5 = 1;
				double_3 = double_5 + double_1;
				double_1 = double_1 + double_3;
				double_2 = double_2;
				unsigned_int_2 = unsigned_int_9 + unsigned_int_4;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_1 + unsigned_int_7;
				long_7 = v_termpty_cellrow_get(long_2,int_1,char_2);

				unsigned_int_10 = unsigned_int_5 + unsigned_int_9;
			}
		}
	}
	if(1)
	{
		float_4 = v_termio_pty_get(char_1);

		unsigned_int_8 = unsigned_int_1 * unsigned_int_7;
	}
	unsigned_int_10 = unsigned_int_10 * unsigned_int_6;
	float_2 = float_4 * float_1;
	short_2 = v_miniview_colors_get(int_5,double_6);

	unsigned_int_1 = unsigned_int_9 * unsigned_int_11;
	double_3 = double_2 + double_7;
	return long_7;
}
long v__queue_render( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 * long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "X") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_2 = v__deferred_renderer();

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return long_1;
}
void v_miniview_redraw( float parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	char_4 = char_4 * char_2;
	long_1 = v__queue_render(short_1);

}
short v__block_obj_del( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 * char_2;
	float_2 = float_1 * float_2;
	return short_1;
	short_2 = v__smart_media_del(int_1,long_1);

}
float v__termpty_is_dblwidth_slow_get( int parameter_1,int parameter_2)
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
float v__termpty_is_dblwidth_get( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "^") < 0)
	{
	}
	if(1)
	{
	}
	return float_1;
	float_2 = v__termpty_is_dblwidth_slow_get(int_1,int_2);

}
int v_term_preedit_str_get()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_2;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	int_2 = int_2 * int_2;
	if(1)
	{
	}
	return int_1;
}
int v_media_get( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	return int_1;
}
void v__smart_media_clicked(short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_media_src_type_get(float_1);

	unsigned_int_1 = v_termio_config_get(int_1);

	double_1 = double_2;
	if(1)
	{
	}
	char_1 = char_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
			int_1 = int_1 + int_1;
			if(1)
			{
				if(1)
				{
					short short_1 = 1;
					short short_2 = 1;
					unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
					short_1 = short_2;
					if(1)
					{
						int int_2 = 1;
						int int_3 = 1;
						int_2 = int_2 * int_3;
					}
					if(1)
					{
						char char_2 = 1;
						float_1 = float_1;
						char_2 = char_1 + char_1;
						if(1)
						{
							float float_2 = 1;
							char char_3 = 1;
							char char_4 = 1;
							unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
							float_2 = float_1 * float_1;
							char_2 = char_3 + char_4;
						}
					}
				}
				int_4 = v_media_get(unsigned_int_5);

				double_1 = double_1 * double_1;
			}
		}
	}
	double_4 = double_3 + double_2;
}
void v_media_control_get( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
}
double v__smart_media_stop(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	return double_1;
}
void v__smart_media_pause(char parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
}
void v__smart_media_play(short parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
}
short v__smart_media_del(int parameter_2,long parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ".") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	return short_1;
}
void v_media_visualize_set( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			int_2 = int_2 * int_3;
		}
		if(1)
		{
			double double_2 = 1;
			double_1 = double_1 + double_2;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 * double_1;
	}
}
void v_media_mute_set( int parameter_1,float parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	short_1 = short_1 + short_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
}
void v_media_volume_set( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	int_2 = int_2 + int_1;
	double_3 = double_1 * double_2;
}
short v__cb_media_vol(short parameter_2,short parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_2;
	double_2 = double_2 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "2V") < 0)
	{
	}
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_2;
	return short_1;
	v_media_volume_set(double_1,double_2);

}
double v__cb_media_pos(int parameter_2,unsigned int parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_2 + int_1;
	v_media_position_set(double_1,double_2);

	int_5 = int_4 + int_1;
	return double_3;
}
int v__cb_media_pos_drag_stop(short parameter_2,unsigned int parameter_3,float parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	float float_6 = 1;
	float float_7 = 1;
	int int_2 = 1;
	float_2 = float_1 + float_2;
	long_2 = long_1 + long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "zD") > 0)
	{
	}
	float_5 = float_3 * float_4;
	long_1 = long_3 * long_1;
	char_3 = char_1 + char_2;
	int_1 = int_1 + int_1;
	float_4 = float_6 * float_7;
	return int_2;
}
int v__cb_media_pos_drag_start(double parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 * char_1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_2;
	return int_2;
	v_media_position_set(double_1,double_2);

}
void v_media_stop( double parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	long_1 = long_1;
	char_1 = char_1 + char_1;
}
int v__cb_media_stop(short parameter_2,int parameter_3,char parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	v_media_stop(double_1);

	short_2 = short_1 * short_1;
	return int_1;
}
float v__cb_media_pause(float parameter_2,unsigned int parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 + char_1;
	return float_1;
	v_media_play_set(int_1,int_2);

}
void v_media_play_set( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short_1 = short_1 * short_1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_1 = long_2;
		float_2 = float_1 * float_1;
	}
}
int v__cb_media_play(double parameter_2,short parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
	v_media_play_set(int_1,int_1);

}
void v_media_position_set( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	char_3 = char_1 * char_2;
}
long v__cb_mov_ref(short parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	return long_2;
}
float v__cb_mov_progress(unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	return float_2;
}
double v__cb_mov_restart()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
	double_1 = double_1 * double_2;
	char_4 = char_2 + char_3;
	return double_1;
}
double v__cb_mov_decode_stop(unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	long_1 = long_1;
	double_1 = v__cb_mov_restart();

	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	return double_1;
}
long v__cb_mov_len_change(float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "g[") == 0)
	{
	}
	return long_1;
}
float v__cb_mov_frame_resize(long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	int_4 = int_2 * int_3;
	return float_2;
	unsigned_int_1 = v__type_mov_calc(int_2,unsigned_int_2,double_2,long_1,unsigned_int_2);

}
double v__cb_mov_frame_decode(float parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1;
	long_1 = long_1;
	if(1)
	{
	}
	int_1 = int_2 + int_3;
	char_2 = char_1 + char_2;
	double_3 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = v__type_mov_calc(int_3,unsigned_int_2,double_3,long_2,unsigned_int_2);

	unsigned_int_1 = unsigned_int_3;
	return double_3;
}
short v__type_mov_init( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	float float_8 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double_1 = double_2;
	int_2 = int_1 * int_1;
	long_3 = long_1 + long_2;
	int_3 = v__cb_media_play(double_1,short_1,char_1);

	double_1 = double_3 * double_2;
	float_2 = float_1 * float_1;
	int_4 = int_2 * int_4;
	float_3 = v__cb_mov_frame_resize(long_1);

	float_5 = float_4 * float_2;
	double_2 = double_4 + double_2;
	if(1)
	{
		float_3 = v__cb_mov_progress(unsigned_int_1);

		double_1 = double_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
		int_4 = int_3 + int_3;
		short_2 = short_2 + short_3;
	}
	int_4 = int_4;
	long_4 = long_2 + long_4;
	short_4 = v__cb_media_vol(short_4,short_3,float_1);

	long_6 = long_5 * long_1;
	double_2 = v__cb_mov_decode_stop(unsigned_int_2);

	double_3 = double_5 * double_4;
	int_4 = int_3;
	int_5 = int_1 * int_5;
	double_4 = v__cb_mov_frame_decode(float_1);

	int_3 = int_6 * int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		short_5 = short_3 * short_5;
	}
	long_4 = v__cb_mov_ref(short_2);

	short_6 = short_5 * short_4;
	short_4 = short_2 + short_6;
	v_media_play_set(int_1,int_3);

	short_3 = short_3 * short_7;
	char_4 = char_2 + char_3;
	double_2 = double_3 + double_5;
	int_6 = int_4 * int_2;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	float_3 = v__cb_media_pause(float_2,unsigned_int_5,char_1);

	int_1 = v__cb_media_stop(short_6,int_4,char_1);

	float_6 = float_4 * float_6;
	int_2 = v__cb_media_pos_drag_start(double_1,int_2,int_3);

	v_media_mute_set(int_4,float_7);

	double_5 = double_3 * double_1;
	long_6 = v__cb_mov_len_change(float_8);

	int_1 = int_7 + int_6;
	long_5 = long_3 * long_4;
	short_1 = short_1 + short_7;
	int_3 = int_8 + int_4;
	unsigned_int_5 = unsigned_int_6;
	double_2 = double_3 * double_2;
	char_4 = v_theme_apply(double_2,unsigned_int_1,float_4);

	char_2 = char_2;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_7;
	if(1)
	{
		double_2 = v__cb_media_pos(int_8,unsigned_int_8,float_7);

		long_3 = long_6 + long_6;
	}
	if(1)
	{
		int int_9 = 1;
		v_media_visualize_set(int_2,unsigned_int_7);

		int_8 = int_3 + int_9;
	}
	return short_7;
	v_media_position_set(double_1,double_3);

	int_8 = v__cb_media_pos_drag_stop(short_3,unsigned_int_1,float_2);

}
short v__cb_edje_preloaded(float parameter_2,short parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 + int_2;
	return short_1;
}
double v__type_edje_init( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	double double_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_2;
	double_1 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_5;
	long_3 = long_1 * long_1;
	int_2 = int_1 * int_2;
	short_1 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_1;
	v_theme_auto_reload_enable(long_2);

	double_2 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_3 = 1;
			short_3 = v__cb_edje_preloaded(float_1,short_4,float_1);

			unsigned_int_4 = unsigned_int_3;
			int_3 = int_2 + int_3;
			short_4 = short_1;
		}
	}
	return double_3;
}
unsigned int v__type_scale_init( unsigned int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_1;
	float_2 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	long_1 = long_1 + long_1;
	short_1 = v__cb_scale_preloaded(long_1,long_1,-1 );

	double_4 = double_2 * double_3;
	long_3 = long_2 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_3 = float_2 + float_1;
	double_5 = double_5;
	int_5 = int_3 + int_4;
	double_1 = double_3 + double_2;
	return unsigned_int_3;
}
short v__cb_img_frame()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	double_3 = double_1 + double_1;
	if(1)
	{
	}
	float_1 = float_1;
	float_1 = float_1 * float_2;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_2;
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		float_1 = float_1 * float_2;
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_1 = char_1 + char_2;
			}
		}
	}
	long_1 = long_1 + long_1;
	double_3 = double_2 * double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return short_1;
}
int v__type_img_anim_handle( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	int_3 = int_4;
	short_1 = v__cb_img_frame();

	double_3 = double_1 * double_3;
	return int_1;
}
int v__cb_img_preloaded(unsigned int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	int_2 = int_2 * int_3;
	short_1 = short_1;
	return int_2;
}
int v__type_img_init( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	char_1 = char_1 * char_2;
	short_1 = short_1 + short_1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_2 = v__type_img_anim_handle(unsigned_int_1);

	double_1 = double_2;
	short_2 = short_2 + short_2;
	double_2 = double_1 + double_1;
	int_3 = v__cb_img_preloaded(unsigned_int_2,long_2);

	short_3 = short_1 * short_3;
	double_2 = double_1 * double_3;
	return int_1;
}
float v__url_compl_cb(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	float float_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long_2 = long_1 * long_1;
	double_2 = double_1 * double_1;
	int_1 = v__type_img_init(unsigned_int_1);

	char_1 = char_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "H") > 0)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = v__type_scale_init(unsigned_int_4);

	unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
	float_2 = float_1 + float_1;
	short_3 = short_1 * short_2;
	double_2 = double_2;
	int_2 = v__smart_calculate(short_3,-1 );

	double_4 = double_1 + double_3;
	double_1 = double_3 + double_5;
	float_3 = float_3;
	float_2 = float_1 + float_4;
	short_4 = short_2 + short_2;
	short_1 = short_1 * short_4;
	unsigned_int_4 = unsigned_int_1;
	float_5 = float_2 + float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	long_4 = long_1 + long_3;
	short_4 = v__type_mov_init(float_5);

	int_3 = int_2 + int_2;
	unsigned_int_4 = unsigned_int_3;
	int_3 = int_1;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_7;
	return float_1;
	double_2 = v__type_edje_init(unsigned_int_2);

}
char v__url_prog_cb(int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_3 = 1;
	float_2 = float_1 + float_1;
	short_1 = short_1 + short_1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double_3 = double_1 * double_2;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_2 = long_3;
		}
		int_2 = int_1 * int_1;
		double_4 = double_3 * double_2;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			char_2 = char_1 * char_1;
			double_2 = double_1 + double_4;
			float_2 = float_1;
			float_2 = float_3 + float_4;
		}
	}
	return char_3;
}
float v__type_thumb_calc( long parameter_1,char parameter_2,long parameter_3,char parameter_4,long parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		int_1 = int_2 + int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_5 = 1;
		int int_6 = 1;
		float_1 = float_1 * float_1;
		float_1 = float_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			short_1 = short_1 + short_1;
			int_3 = int_4;
			if(1)
			{
				short_1 = short_1 + short_1;
			}
		}
		if(1)
		{
			float float_3 = 1;
			float_3 = float_2 + float_3;
			float_1 = float_3 * float_4;
		}
		double_1 = double_2;
		char_3 = char_1 + char_2;
		int_5 = int_6;
		int_1 = int_6;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	short_1 = short_2;
	return float_4;
}
unsigned int v__type_mov_calc( int parameter_1,unsigned int parameter_2,double parameter_3,long parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_3 = 1;
	double double_5 = 1;
	long long_4 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		short_1 = short_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_2 = 1;
		long_1 = long_1;
		long_1 = long_1 * long_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		if(1)
		{
			int_1 = int_2 * int_2;
		}
		if(1)
		{
			double_2 = double_3;
			int_2 = int_1 * int_2;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_1 = char_1 + char_2;
				char_2 = char_2 * char_2;
				if(1)
				{
					unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
				}
			}
		}
		if(1)
		{
			double double_4 = 1;
			float float_1 = 1;
			double_1 = double_4 + double_1;
			float_2 = float_1 + float_2;
			if(1)
			{
				int int_3 = 1;
				unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
				int_3 = int_1 + int_2;
				if(1)
				{
					int int_4 = 1;
					int int_5 = 1;
					int_5 = int_2 + int_4;
				}
			}
		}
		if(1)
		{
			float float_3 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float_2 = float_3;
			short_3 = short_2 + short_1;
		}
		unsigned_int_4 = unsigned_int_5;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_6;
		long_2 = long_2 + long_3;
		unsigned_int_3 = unsigned_int_2;
	}
	double_5 = double_3 + double_1;
	long_4 = long_3 * long_1;
	return unsigned_int_3;
}
unsigned int v__type_edje_calc( long parameter_1,short parameter_2,unsigned int parameter_3,double parameter_4,long parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	return unsigned_int_3;
}
char v__type_img_calc( char parameter_1,char parameter_2,unsigned int parameter_3,short parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_3 + int_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		int int_4 = 1;
		char char_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_5 = 1;
		short_1 = short_1 + short_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short_1 = short_1 + short_1;
			double_3 = double_1 * double_2;
			if(1)
			{
				double_1 = double_3;
				int_1 = int_2 + int_4;
				if(1)
				{
					char_3 = char_1 + char_2;
				}
			}
		}
		if(1)
		{
			int int_5 = 1;
			long long_1 = 1;
			int_3 = int_4 * int_5;
			long_1 = long_1;
			if(1)
			{
				char char_4 = 1;
				char_4 = char_3 * char_2;
				char_1 = char_3 + char_3;
				if(1)
				{
					short_4 = short_3 + short_2;
				}
			}
			if(1)
			{
				double double_4 = 1;
				double double_5 = 1;
				float_2 = float_1 * float_2;
				double_5 = double_3 * double_4;
			}
		}
		if(1)
		{
			float_2 = float_2 + float_1;
			char_1 = char_3;
		}
		short_4 = short_3 * short_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		char_5 = char_2 + char_2;
		float_2 = float_2 * float_1;
	}
	char_2 = char_6 + char_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	return char_6;
}
short v__cb_scale_preloaded(long parameter_2,long parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	short_3 = short_1 * short_2;
	char controller4vul_566[2];
	fgets(controller4vul_566 ,2 ,stdin);
	if( strcmp( controller4vul_566, ";") < 0)
	{
		if(uni_para == 480)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
		int_1 = int_1;
	}
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_2 = double_1 + double_2;
		char_1 = char_1;
		char_1 = char_1 * char_1;
		float_3 = float_1 * float_2;
		int_1 = int_1;
	}
	double_3 = double_3 * double_2;
}
void v__type_scale_calc( unsigned int parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4,float parameter_5,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_5 = 1;
	int int_1 = 1;
	long long_6 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int int_8 = 1;
	double double_7 = 1;
	double_2 = double_1 * double_2;
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		long long_4 = 1;
		long_4 = long_3 * long_2;
		long_4 = long_5 + long_4;
	}
	char controller4vul_562[2];
	fgets(controller4vul_562 ,2 ,stdin);
	if( strcmp( controller4vul_562, "g") > 0)
	{
		char char_3 = 1;
		int int_5 = 1;
		int_1 = int_1 * int_1;
		char controller4vul_563[2];
		fgets(controller4vul_563 ,2 ,stdin);
		if( strcmp( controller4vul_563, "i") > 0)
		{
			long_5 = long_6;
			int_1 = int_1;
			char controller4vul_564[2];
			fgets(controller4vul_564 ,2 ,stdin);
			if( strcmp( controller4vul_564, "$") < 0)
			{
				double_1 = double_3;
				unsigned_int_1 = unsigned_int_1;
				char controller4vul_565[3];
				fgets(controller4vul_565 ,3 ,stdin);
				if( strcmp( controller4vul_565, "2^") < 0)
				{
					short_1 = v__cb_scale_preloaded(long_6,long_3,uni_para);

					double_4 = double_1 + double_3;
				}
			}
		}
		if(1)
		{
			int_3 = int_2 * int_1;
			char_2 = char_1 * char_1;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				double_1 = double_2 + double_3;
				if(1)
				{
					long long_7 = 1;
					long_7 = long_5 + long_1;
				}
			}
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			int_4 = int_1 + int_2;
		}
		int_3 = int_2;
		char_1 = char_3 * char_1;
		char_1 = char_3;
		int_5 = int_5 + int_5;
	}
	if(1)
	{
		int int_6 = 1;
		double double_6 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		double_3 = double_1 * double_4;
		double_4 = double_3 + double_4;
		if(1)
		{
			int_6 = int_3;
		}
		if(1)
		{
			int_3 = int_3 + int_6;
		}
		if(1)
		{
			short short_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short_1 = short_2 + short_2;
			float_2 = float_1 * float_1;
			char_1 = char_2 * char_1;
			double_4 = double_5;
			short_3 = short_1 * short_1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			double_2 = double_4 * double_5;
			float_2 = float_2 + float_1;
			unsigned_int_1 = unsigned_int_4;
		}
		int_3 = int_6 + int_4;
		double_6 = double_5 + double_1;
	}
	if(1)
	{
		int int_7 = 1;
		int_7 = int_1 * int_3;
		double_2 = double_4 * double_5;
	}
	int_1 = int_2 + int_8;
	double_3 = double_2 * double_7;
}
short v__unsmooth_timeout(int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long_1 = long_2;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	int_3 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_560[2];
	fgets(controller4vul_560 ,2 ,stdin);
	if( strcmp( controller4vul_560, "j") < 0)
	{
		int_3 = int_3 + int_3;
		char controller4vul_561[3];
		fgets(controller4vul_561 ,3 ,stdin);
		if( strcmp( controller4vul_561, "1G") < 0)
		{
			int int_4 = 1;
			v__type_scale_calc(unsigned_int_3,char_1,long_3,unsigned_int_3,float_1,uni_para);

			int_1 = int_4 * int_3;
		}
		if(1)
		{
			int int_5 = 1;
			int_1 = int_3 + int_5;
		}
	}
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	return short_1;
}
void v__smooth_handler( double parameter_1,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long_1 = long_2;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	int_1 = int_2;
	if(1)
	{
		double_4 = double_2 * double_3;
	}
	char controller4vul_556[2];
	fgets(controller4vul_556 ,2 ,stdin);
	if( strcmp( controller4vul_556, "j") > 0)
	{
		char controller4vul_557[2];
		fgets(controller4vul_557 ,2 ,stdin);
		if( strcmp( controller4vul_557, "L") < 0)
		{
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			short_3 = short_1 + short_2;
			char controller4vul_558[3];
			fgets(controller4vul_558 ,3 ,stdin);
			if( strcmp( controller4vul_558, "V7") > 0)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
				char controller4vul_559[2];
				fgets(controller4vul_559 ,2 ,stdin);
				if( strcmp( controller4vul_559, "H") < 0)
				{
					long long_3 = 1;
					long long_4 = 1;
					short_4 = v__unsmooth_timeout(uni_para);

					long_3 = long_3 + long_4;
				}
			}
			if(1)
			{
				double_2 = double_1 + double_3;
			}
			if(1)
			{
				double_3 = double_2 * double_4;
			}
			unsigned_int_4 = unsigned_int_5;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			int_2 = int_3;
		}
		unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
	}
}
int v__smart_calculate( short parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_555[3];
	fgets(controller4vul_555 ,3 ,stdin);
	if( strcmp( controller4vul_555, ",;") < 0)
	{
		v__smooth_handler(double_1,uni_para);

	}
	double_1 = double_2 * double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "?h") < 0)
	{
		double_3 = double_3;
	}
	short_3 = short_1 + short_2;
	float_1 = float_2;
	long_3 = long_1 * long_2;
	int_1 = int_1 + int_1;
	int_3 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3;
	int_3 = int_4 + int_3;
	double_3 = double_3 + double_4;
	unsigned_int_4 = unsigned_int_2;
	int_1 = int_3 * int_3;
	double_2 = double_1 + double_1;
	short_4 = short_1 + short_3;
	int_4 = int_3 * int_1;
	short_3 = short_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_5 = unsigned_int_6;
	}
	if(1)
	{
		int int_5 = 1;
		int_2 = int_2 + int_3;
		int_5 = int_4 * int_2;
	}
	return int_4;
}
int v__smart_move( char parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	return int_2;
}
unsigned int v__smart_resize( float parameter_1,int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	float_3 = float_1 + float_2;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	double_1 = double_2 * double_3;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_4 = float_2 * float_3;
	return unsigned_int_1;
}
short v__smart_del( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double_2 = double_1 + double_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		int_3 = int_1 * int_2;
	}
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2 * double_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
		unsigned_int_2 = unsigned_int_4;
	}
	if(1)
	{
		int_1 = int_3 + int_3;
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_3 * int_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_3 + float_3;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		long_2 = long_2 + long_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 + double_3;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_3 * long_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_4;
	}
	float_1 = float_2 + float_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	return short_1;
}
int v__smart_add( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 + double_1;
	double_3 = double_2 + double_2;
	short_1 = short_1 * short_2;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 + float_2;
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_1 = float_2 + float_2;
	long_2 = long_1 + long_1;
	return int_2;
}
int v__smart_init(int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int_1 = v__smart_calculate(short_1,uni_para);

	int_1 = int_1 * int_2;
	double_2 = double_1 + double_1;
	double_3 = double_2 + double_2;
	char_1 = char_1;
	double_5 = double_4 * double_3;
	long_2 = long_1 * long_2;
	long_3 = long_2 * long_3;
	double_6 = double_3 * double_2;
	char_2 = char_2 * char_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_5 = long_4 * long_2;
	return int_2;
}
double v_media_add( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4,double parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	int_2 = int_2 * int_2;
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_2;
	if(1)
	{
		double_1 = double_2 + double_3;
	}
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	short_1 = short_2;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	double_4 = double_1 * double_3;
	int_2 = int_1;
	double_5 = double_3 + double_5;
	double_2 = double_2;
	char controller4vul_549[3];
	fgets(controller4vul_549 ,3 ,stdin);
	if( strcmp( controller4vul_549, "+_") > 0)
	{
		long long_3 = 1;
		char controller4vul_550[2];
		fgets(controller4vul_550 ,2 ,stdin);
		if( strcmp( controller4vul_550, "^") > 0)
		{
			int int_4 = 1;
			double double_7 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			short_1 = short_2;
			if(1)
			{
				long_3 = long_3 + long_3;
				int_2 = int_1 * int_2;
				double_3 = double_4;
			}
			if(1)
			{
				int_4 = int_3 * int_2;
				float_2 = float_1 * float_1;
				double_6 = double_5 * double_1;
			}
			if(1)
			{
				int_2 = int_1 + int_3;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_3;
			}
			if(1)
			{
				double_1 = double_5 + double_4;
			}
			if(1)
			{
				float_4 = float_3 + float_1;
			}
			if(1)
			{
				double_5 = double_7;
			}
			if(1)
			{
				short_1 = short_2 * short_2;
				double_7 = double_5 + double_3;
				float_2 = float_4 + float_2;
				unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
				double_6 = double_7 + double_2;
				unsigned_int_1 = unsigned_int_4;
				int_3 = int_4;
			}
			char controller4vul_551[3];
			fgets(controller4vul_551 ,3 ,stdin);
			if( strcmp( controller4vul_551, "*T") < 0)
			{
				float float_6 = 1;
				unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
				int_3 = int_3;
				float_6 = float_4 * float_5;
				char controller4vul_552[3];
				fgets(controller4vul_552 ,3 ,stdin);
				if( strcmp( controller4vul_552, "6*") > 0)
				{
					int_3 = int_5 * int_2;
					if(1)
					{
						unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
						int_1 = int_2 * int_5;
					}
					char controller4vul_553[2];
					fgets(controller4vul_553 ,2 ,stdin);
					if( strcmp( controller4vul_553, "x") > 0)
					{
						char char_2 = 1;
						int_5 = int_3 * int_1;
						char controller4vul_554[2];
						fgets(controller4vul_554 ,2 ,stdin);
						if( strcmp( controller4vul_554, "J") > 0)
						{
							int_2 = v__smart_init(uni_para);

							char_1 = char_1 * char_2;
							unsigned_int_6 = unsigned_int_6;
							float_5 = float_3 + float_3;
						}
						if(1)
						{
							short short_3 = 1;
							short short_4 = 1;
							float_6 = float_6 * float_4;
							int_3 = int_1 + int_1;
							unsigned_int_4 = unsigned_int_5 + unsigned_int_7;
							char_2 = char_2;
							short_3 = short_3;
							short_3 = short_1 * short_4;
							double_3 = double_1;
							double_7 = double_1;
							int_3 = int_1 * int_6;
						}
					}
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_8 + unsigned_int_1;
				}
			}
		}
		if(1)
		{
			long_4 = long_4 * long_3;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_5 = 1;
			long_2 = long_1 * long_2;
			long_5 = long_1;
		}
	}
	if(1)
	{
		long long_6 = 1;
		if(1)
		{
			long_6 = long_1;
			unsigned_int_1 = unsigned_int_8;
		}
		double_5 = double_4 * double_1;
		if(1)
		{
			short short_5 = 1;
			short short_6 = 1;
			int_3 = int_2 * int_5;
			short_1 = short_5 * short_6;
		}
		float_5 = float_5;
		if(1)
		{
			long_6 = long_4 + long_2;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_9;
		if(1)
		{
			float float_7 = 1;
			double_2 = double_5 * double_2;
			float_4 = float_3 + float_7;
		}
		unsigned_int_7 = unsigned_int_8 + unsigned_int_2;
		double_5 = double_3 + double_8;
	}
	double_5 = double_9;
	double_5 = double_2 * double_8;
	unsigned_int_8 = unsigned_int_4 * unsigned_int_8;
	double_6 = double_6;
	double_1 = double_4 * double_1;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_9;
	int_7 = int_2 + int_6;
	unsigned_int_10 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		int_7 = int_7 + int_7;
	}
	return double_1;
}
long v__block_media_activate( double parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_1;
	float_3 = float_1 + float_2;
	int_4 = int_3 * int_2;
	long_2 = long_1 * long_1;
	float_4 = float_3 * float_1;
	char controller4vul_548[2];
	fgets(controller4vul_548 ,2 ,stdin);
	if( strcmp( controller4vul_548, "W") > 0)
	{
		double_1 = v_media_add(unsigned_int_1,float_1,int_1,int_2,double_2,uni_para);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	if(1)
	{
		double_4 = double_3 * double_2;
	}
	long_3 = long_2 * long_1;
	double_3 = double_2 + double_1;
	if(1)
	{
		int_2 = int_3 + int_4;
	}
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	int_2 = int_2 + int_5;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	double_4 = double_2 + double_2;
	float_2 = float_3;
	double_5 = double_2 * double_1;
	int_1 = int_6 + int_2;
	if(1)
	{
		int int_7 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int_3 = int_7 + int_4;
		short_4 = short_3 + short_1;
	}
	char_1 = char_1 * char_1;
	double_1 = double_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
		int_6 = int_4 + int_6;
	}
	return long_1;
}
double v__block_edje_message_cb(unsigned int parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	float float_4 = 1;
	long long_5 = 1;
	char char_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	long long_6 = 1;
	long long_7 = 1;
	long long_8 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_7 = 1;
	int int_8 = 1;
	char char_8 = 1;
	float float_6 = 1;
	float float_7 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double_1 = double_1 + double_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	int_1 = int_3 * int_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_2;
	}
	float_1 = float_1;
	if(1)
	{
	}
	double_1 = double_3 + double_2;
	char_1 = char_2 * char_3;
	int_2 = int_2 + int_2;
	double_3 = double_1 + double_2;
	long_4 = long_2 + long_3;
	char_2 = char_4 + char_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	short_3 = short_1 + short_2;
	long_3 = long_4 + long_3;
	double_2 = double_2 + double_1;
	short_1 = short_4 * short_1;
	int_4 = int_4 * int_2;
	double_3 = double_3;
	double_3 = double_1 + double_4;
	double_5 = double_3;
	double_3 = double_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		long_2 = long_2 * long_2;
	}
	v_termpty_write(float_2,float_3,int_2);

	float_3 = float_1 * float_2;
	double_5 = double_1 + double_3;
	short_2 = short_1;
	int_5 = int_3;
	unsigned_int_1 = unsigned_int_4;
	char_3 = char_3 * char_3;
	float_1 = float_2 + float_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_5 = 1;
		double_5 = double_1 * double_4;
		int_4 = int_2;
		float_1 = float_5;
	}
	long_5 = long_4 + long_2;
	char_2 = char_3;
	float_1 = float_4;
	char_3 = char_3;
	char_5 = char_4;
	int_6 = int_1 * int_1;
	long_5 = long_3 * long_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_7 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
		int_7 = int_5 + int_4;
	}
	char_6 = char_6 * char_1;
	double_3 = double_4 + double_4;
	unsigned_int_2 = unsigned_int_4;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	long_5 = long_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_4 = double_7 + double_4;
	long_3 = long_6 + long_6;
	long_8 = long_7 * long_8;
	char_2 = char_1 + char_2;
	double_3 = double_7 + double_2;
	long_2 = long_3;
	long_8 = long_4 + long_8;
	int_2 = int_1;
	int_4 = int_6 * int_3;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_4;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_2 = double_5 + double_6;
		short_1 = short_3 + short_1;
		int_6 = int_6 + int_2;
	}
	char_7 = char_4 * char_5;
	long_2 = long_4 * long_6;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
	int_6 = int_3 + int_8;
	unsigned_int_1 = unsigned_int_6;
	char_8 = char_7 * char_8;
	long_6 = long_2 * long_5;
	float_7 = float_4 * float_6;
	long_5 = long_7 + long_1;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_7;
		double_1 = double_6 * double_4;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	}
	short_3 = short_5 * short_6;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_2;
	char_5 = char_8;
	return double_5;
}
void v_termpty_write( float parameter_1,float parameter_2,int parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
}
double v__block_edje_signal_cb(char parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char_2 = char_1 + char_2;
	double_1 = double_1 * double_2;
	long_1 = long_1;
	int_1 = int_1 * int_1;
	short_1 = short_1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "h") < 0)
	{
		char char_3 = 1;
		char char_4 = 1;
		float float_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_3 = char_4;
		float_1 = float_1;
		short_2 = short_2 + short_2;
		double_2 = double_3 * double_3;
		double_1 = double_1 * double_2;
		float_1 = float_1 * float_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_5;
		int_3 = int_2 * int_2;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
	}
	return double_4;
	v_termpty_write(float_3,float_4,int_3);

}
void v_termpty_block_chid_update( float parameter_1,char parameter_2)
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
	}
	float_1 = float_1 + float_1;
}
long v__block_edje_cmds( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	v_termpty_block_chid_update(float_1,char_1);

	double_1 = v__block_edje_signal_cb(char_1,int_1,int_1);

	double_1 = v__block_edje_message_cb(unsigned_int_1,double_1,int_2);

	float_3 = float_2 + float_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "F") < 0)
	{
	}
	if(1)
	{
	}
	return long_1;
}
double v_homedir_get( char parameter_1,float parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	long_1 = long_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char_1 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	return double_1;
}
unsigned int v__block_edje_activate( char parameter_1,char parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_3 = 1;
	int int_6 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	long_1 = v__block_edje_cmds(unsigned_int_1,float_1,int_1,int_1);

	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_4 = int_2 + int_3;
	if(1)
	{
	}
	float_2 = float_2;
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		char char_2 = 1;
		double_4 = v_homedir_get(char_1,float_2);

		char_2 = char_1 + char_1;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2;
		if(1)
		{
			int_4 = int_2 * int_2;
			float_1 = float_2 + float_3;
		}
		if(1)
		{
			int int_5 = 1;
			int_3 = int_5 * int_4;
			double_1 = double_4;
		}
	}
	int_6 = int_1 * int_6;
	double_5 = double_4 * double_4;
	short_1 = short_1 * short_2;
	unsigned_int_2 = v_config_theme_path_default_get(long_3);

	double_6 = double_6 + double_1;
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		float_2 = float_3;
	}
	return unsigned_int_1;
}
double v__block_activate( double parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	char controller4vul_547[2];
	fgets(controller4vul_547 ,2 ,stdin);
	if( strcmp( controller4vul_547, "5") < 0)
	{
		long_1 = v__block_media_activate(double_1,int_1,uni_para);

	}
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_2 * int_3;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_1 + int_4;
	}
	short_1 = short_2 * short_3;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	return double_1;
}
long v_termpty_block_get( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
int v_termpty_block_id_get( long parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	int_1 = int_2;
	int_2 = int_2;
	return int_2;
}
void v_termpty_backscroll_adjust( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	int_1 = v_verify_beacon(char_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1 + float_1;
}
long v__smart_apply( short parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	float float_5 = 1;
	int int_5 = 1;
	long long_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_3 = 1;
	char char_3 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_6 = 1;
	short short_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_12 = 1;
	double double_7 = 1;
	float float_7 = 1;
	double double_8 = 1;
	float float_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_13 = 1;
	unsigned int unsigned_int_14 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_17 = 1;
	short short_7 = 1;
	short short_8 = 1;
	long long_6 = 1;
	double double_12 = 1;
	double double_13 = 1;
	unsigned int unsigned_int_19 = 1;
	short short_9 = 1;
	short short_10 = 1;
	float_1 = float_1 * float_1;
	float_2 = float_2 + float_1;
	double_1 = double_1 + double_2;
	double_2 = double_1 + double_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_3;
	int_3 = int_1 * int_2;
	short_1 = short_1 + short_1;
	int_3 = int_4;
	short_2 = short_1 * short_1;
	float_2 = float_2 + float_3;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		char_2 = char_1 * char_1;
		double_5 = double_1 + double_4;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
		if(1)
		{
			unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
		}
		float_1 = float_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2;
		}
		float_3 = float_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			if(1)
			{
				if(1)
				{
					if(1)
					{
						float_4 = float_2 + float_1;
					}
					short_3 = short_1 + short_2;
				}
				float_1 = float_5;
				if(1)
				{
					int_3 = int_5 * int_3;
				}
				if(1)
				{
					int_5 = int_2;
				}
				int_4 = int_4 * int_1;
				long_2 = long_1 + long_1;
				int_4 = int_3 + int_3;
				int_4 = int_5 + int_1;
				unsigned_int_7 = unsigned_int_7 + unsigned_int_4;
				short_3 = short_3 * short_2;
			}
			char controller4vul_543[2];
			fgets(controller4vul_543 ,2 ,stdin);
			if( strcmp( controller4vul_543, "D") < 0)
			{
				int int_6 = 1;
				short_5 = short_1 * short_4;
				short_5 = short_5 + short_3;
				if(1)
				{
					if(1)
					{
						int_1 = int_1 + int_4;
					}
					unsigned_int_5 = unsigned_int_8 * unsigned_int_1;
					int_6 = int_4;
					short_3 = short_3 + short_3;
					short_4 = short_5 * short_1;
					int_3 = int_5 * int_6;
					long_2 = long_1 * long_3;
					char_3 = char_1 + char_3;
					short_4 = short_1 * short_2;
					long_3 = long_2;
					int_7 = int_1 * int_1;
					unsigned_int_9 = unsigned_int_5;
					int_2 = int_3 + int_6;
					if(1)
					{
						char_4 = char_1 * char_4;
						int_5 = int_1 + int_2;
						double_1 = double_5 + double_5;
						int_5 = int_4 * int_4;
						char_4 = char_4;
					}
				}
				char controller4vul_544[3];
				fgets(controller4vul_544 ,3 ,stdin);
				if( strcmp( controller4vul_544, "xb") > 0)
				{
					char controller4vul_545[3];
					fgets(controller4vul_545 ,3 ,stdin);
					if( strcmp( controller4vul_545, "#0") < 0)
					{
						char controller4vul_546[2];
						fgets(controller4vul_546 ,2 ,stdin);
						if( strcmp( controller4vul_546, ";") < 0)
						{
							double_4 = v__block_activate(double_1,char_4,uni_para);

							float_1 = float_3 + float_3;
						}
						unsigned_int_8 = unsigned_int_8 * unsigned_int_2;
					}
					int_1 = int_6 * int_3;
					if(1)
					{
						long_5 = long_4 * long_3;
					}
					if(1)
					{
						int_6 = int_2;
					}
					float_1 = float_1 * float_6;
					short_1 = short_6 + short_5;
					double_1 = double_1 + double_1;
					double_2 = double_1;
					long_2 = long_5 + long_4;
					char_2 = char_2 + char_1;
					if(1)
					{
						double_3 = double_1 + double_5;
					}
				}
				if(1)
				{
					char char_5 = 1;
					double_4 = double_5 + double_5;
					short_6 = short_6 * short_2;
					double_6 = double_6;
					float_5 = float_5 + float_1;
					double_6 = double_5 * double_5;
					unsigned_int_11 = unsigned_int_10 + unsigned_int_9;
					if(1)
					{
						int_8 = int_6 * int_3;
						unsigned_int_3 = unsigned_int_12 * unsigned_int_3;
					}
					if(1)
					{
						unsigned_int_11 = unsigned_int_12 + unsigned_int_7;
						double_3 = double_3 * double_6;
					}
					if(1)
					{
						char_1 = char_2 * char_4;
					}
					if(1)
					{
						if(1)
						{
							int_8 = int_1 + int_6;
						}
						if(1)
						{
							double_5 = double_7 + double_4;
						}
					}
					if(1)
					{
						float_3 = float_2 + float_7;
					}
					if(1)
					{
						double_8 = double_4 * double_5;
					}
					if(1)
					{
						int_5 = int_2 * int_1;
						int_8 = int_4;
						int_5 = int_2 + int_5;
						float_6 = float_1 * float_7;
						unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
						float_1 = float_4 * float_2;
						double_6 = double_4;
					}
					char controller_14[3];
					fgets(controller_14 ,3 ,stdin);
					if( strcmp( controller_14, "cI") < 0)
					{
						double_4 = double_2;
					}
					if(1)
					{
						float_8 = float_1 * float_3;
					}
					if(1)
					{
						if(1)
						{
							unsigned_int_1 = unsigned_int_2;
						}
						char_4 = char_1 + char_2;
					}
					unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
					char_1 = char_1 + char_5;
					double_7 = double_9 * double_8;
					int_1 = int_8 + int_7;
					if(1)
					{
						short_3 = short_5 + short_2;
						unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
					}
					if(1)
					{
						double_10 = double_10 + double_3;
						long_3 = long_1 + long_4;
					}
					unsigned_int_5 = unsigned_int_4 + unsigned_int_8;
					unsigned_int_10 = unsigned_int_13 + unsigned_int_5;
					unsigned_int_13 = unsigned_int_10 * unsigned_int_8;
					unsigned_int_6 = unsigned_int_12 * unsigned_int_3;
					if(1)
					{
						double_9 = double_7 + double_1;
					}
				}
			}
		}
		int_2 = int_5;
		if(1)
		{
			unsigned_int_11 = unsigned_int_6 * unsigned_int_3;
		}
	}
	double_5 = double_4 + double_2;
	if(1)
	{
		int int_10 = 1;
		short_3 = short_6 * short_3;
		short_2 = short_1 + short_4;
		unsigned_int_5 = unsigned_int_9 + unsigned_int_4;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_9;
		int_7 = int_7 + int_4;
		unsigned_int_6 = unsigned_int_4;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				float float_9 = 1;
				unsigned int unsigned_int_16 = 1;
				unsigned_int_6 = unsigned_int_14 + unsigned_int_14;
				unsigned_int_10 = unsigned_int_14 * unsigned_int_7;
				unsigned_int_9 = unsigned_int_10;
				if(1)
				{
					int_2 = int_2 + int_5;
				}
				unsigned_int_12 = unsigned_int_7 * unsigned_int_10;
				if(1)
				{
					if(1)
					{
						unsigned int unsigned_int_15 = 1;
						double_1 = double_7 + double_11;
						float_9 = float_7 + float_8;
						unsigned_int_4 = unsigned_int_15;
					}
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_7 + unsigned_int_4;
					unsigned_int_8 = unsigned_int_13 * unsigned_int_9;
				}
				unsigned_int_4 = unsigned_int_5 * unsigned_int_16;
				double_4 = double_7 * double_9;
				double_5 = double_1 + double_9;
				unsigned_int_17 = unsigned_int_5 * unsigned_int_14;
				double_2 = double_2;
				short_7 = short_1 * short_2;
				int_4 = int_1 * int_5;
				float_6 = float_3;
				float_7 = float_1;
				int_4 = int_5 * int_7;
				short_6 = short_3 * short_8;
				if(1)
				{
					int int_9 = 1;
					unsigned_int_4 = unsigned_int_11;
					char_2 = char_1 + char_2;
					short_7 = short_1 + short_4;
					double_2 = double_4 + double_6;
					long_6 = long_2 * long_4;
					int_7 = int_9 * int_9;
					double_10 = double_3;
					int_7 = int_9 * int_1;
					double_3 = double_2 + double_4;
					float_3 = float_9 + float_2;
				}
				short_5 = short_5 * short_3;
				if(1)
				{
					if(1)
					{
						unsigned int unsigned_int_18 = 1;
						unsigned_int_2 = unsigned_int_11 + unsigned_int_18;
						int_8 = int_7 * int_2;
					}
				}
			}
			float_8 = float_5;
		}
		unsigned_int_13 = unsigned_int_2;
		int_10 = int_2 * int_2;
	}
	int_3 = int_5 + int_8;
	if(1)
	{
		double_5 = double_8;
		double_7 = double_8 * double_12;
		int_7 = int_7;
	}
	if(1)
	{
		unsigned_int_14 = unsigned_int_4 + unsigned_int_1;
	}
	if(1)
	{
		double_10 = double_9 + double_13;
	}
	int_5 = int_7 * int_2;
	float_8 = float_8 * float_5;
	float_8 = float_6;
	if(1)
	{
		char char_6 = 1;
		char_3 = char_1 + char_6;
		short_5 = short_6 + short_3;
		long_6 = long_3 * long_6;
		double_1 = double_4 * double_9;
		short_3 = short_8 * short_4;
		int_7 = int_5 + int_1;
		if(1)
		{
			unsigned_int_8 = unsigned_int_11 * unsigned_int_17;
			unsigned_int_10 = unsigned_int_3;
		}
		unsigned_int_6 = unsigned_int_19;
		double_13 = double_7;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_9;
		double_12 = double_11 * double_12;
		short_9 = short_6 * short_5;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_8;
		short_10 = short_3 + short_1;
		char_6 = char_6;
		if(1)
		{
			long long_7 = 1;
			long_5 = long_7;
		}
		if(1)
		{
			if(1)
			{
				short_10 = short_7 * short_1;
			}
			if(1)
			{
				double_8 = double_6 + double_6;
			}
			if(1)
			{
				double_8 = double_5 * double_4;
			}
			if(1)
			{
				double_4 = double_5 * double_13;
			}
			if(1)
			{
				unsigned_int_13 = unsigned_int_9 + unsigned_int_2;
			}
		}
		unsigned_int_19 = unsigned_int_13 + unsigned_int_17;
	}
	if(1)
	{
		double_5 = double_8 * double_5;
	}
	if(1)
	{
		short_8 = short_9 * short_10;
	}
	unsigned_int_19 = unsigned_int_10 * unsigned_int_6;
	return long_2;
}
char v__smart_cb_change(int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long_1 = v__smart_apply(short_1,uni_para);

	char_1 = char_1 * char_2;
	short_3 = short_2 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	double_1 = double_1;
	int_1 = int_1;
	return char_2;
}
char v__smart_update_queue( int parameter_1,double parameter_2,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char controller4vul_542[2];
	fgets(controller4vul_542 ,2 ,stdin);
	if( strcmp( controller4vul_542, "c") < 0)
	{
		char_1 = v__smart_cb_change(uni_para);

	}
	long_2 = long_1 + long_1;
	return char_2;
}
double v__lost_selection_reset_job()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_2;
	int_1 = int_1 + int_1;
	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_2 = v__lost_selection(unsigned_int_2,-1 );

		char_2 = char_1 * char_1;
	}
	return double_2;
}
unsigned int v__lost_selection(unsigned int parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 + char_1;
	short_1 = short_1 * short_1;
	long_3 = long_1 + long_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	char controller4vul_539[3];
	fgets(controller4vul_539 ,3 ,stdin);
	if( strcmp( controller4vul_539, "Fr") > 0)
	{
		int int_2 = 1;
		char controller4vul_540[2];
		fgets(controller4vul_540 ,2 ,stdin);
		if( strcmp( controller4vul_540, "^") > 0)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			char controller4vul_541[2];
			fgets(controller4vul_541 ,2 ,stdin);
			if( strcmp( controller4vul_541, "g") > 0)
			{
				short short_2 = 1;
				short short_3 = 1;
				char_3 = v__smart_update_queue(int_1,double_1,uni_para);

				short_3 = short_2 * short_2;
			}
			long_1 = long_1;
		}
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			char_1 = char_1;
		}
		double_1 = double_2 * double_3;
		int_3 = int_1 + int_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		float_4 = float_2 * float_3;
	}
	return unsigned_int_3;
}
short v__take_selection_text( long parameter_1,int parameter_2,long parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_1;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_1 + float_1;
	short_1 = short_2 + short_2;
	int_1 = int_1 + int_1;
	char controller4vul_538[3];
	fgets(controller4vul_538 ,3 ,stdin);
	if( strcmp( controller4vul_538, "[`") > 0)
	{
		unsigned_int_1 = v__lost_selection(unsigned_int_1,uni_para);

		short_1 = short_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return short_2;
}
unsigned int v__cb_ctxp_link_content_copy(int parameter_2,int uni_para)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_5 = 1;
	short_1 = v__take_selection_text(long_1,int_1,long_1,uni_para);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_4 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	float_2 = float_1 * float_1;
	int_2 = int_1;
	char_1 = char_1 + char_1;
	long_3 = long_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return unsigned_int_1;
}
void v_ty_sb_free( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
}
float v_ty_sb_steal_buf( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int_1 = int_1 + int_2;
	int_1 = int_3 + int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double_1 = double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_5 = int_4 * int_4;
		}
		float_3 = float_1 + float_2;
	}
	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_2;
	char_2 = char_1 * char_2;
	double_1 = double_3 * double_2;
	return float_3;
}
int v_codepoint_to_utf8( float parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_5 = 1;
	double double_1 = 1;
	short short_4 = 1;
	if(1)
	{
		char_3 = char_1 + char_2;
		int_1 = int_1;
	}
	if(1)
	{
		char_2 = char_3 + char_1;
		char_1 = char_4 + char_4;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		int int_2 = 1;
		short_1 = short_1 + short_2;
		char_3 = char_1 * char_2;
		int_3 = int_2 * int_2;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long_2 = long_1 * long_1;
		float_1 = float_2;
		float_3 = float_2 * float_3;
		float_1 = float_1 + float_4;
		long_4 = long_1 + long_3;
	}
	if(1)
	{
		short short_3 = 1;
		double double_2 = 1;
		char_3 = char_3 + char_4;
		short_2 = short_2 * short_3;
		char_5 = char_1 * char_4;
		char_5 = char_3 + char_4;
		double_2 = double_1 + double_1;
		short_4 = short_2 + short_1;
	}
	if(1)
	{
		double double_3 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_3 = double_3 + double_3;
		short_2 = short_4 + short_5;
		double_1 = double_1 * double_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_3 = int_1 + int_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		long_1 = long_2;
	}
	if(1)
	{
		char_5 = char_2 * char_4;
	}
	return int_3;
}
void v_ty_sb_spaces_rtrim( long parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int_1 = int_1;
	double_1 = double_1 + double_1;
	double_3 = double_2 + double_3;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		double double_4 = 1;
		int int_3 = 1;
		int_1 = int_2 + int_2;
		double_4 = double_4;
		int_3 = int_1 * int_2;
		double_3 = double_4 * double_1;
	}
}
int v_ty_sb_add( long parameter_1,long parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_2;
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_1 * float_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		float_2 = float_3;
		short_1 = short_2 * short_2;
	}
	char_2 = char_1 + char_1;
	int_1 = int_1;
	int_2 = int_1 + int_1;
	return int_2;
}
void v__termpty_cellrow_from_beacon_get( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	int int_5 = 1;
	char char_2 = 1;
	double double_4 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		int_3 = int_1 + int_2;
	}
	short_3 = short_2 * short_2;
	if(1)
	{
		int_4 = int_4 + int_2;
		int_4 = int_1 + int_2;
	}
	short_2 = short_2 + short_1;
	double_2 = double_2 * double_2;
	int_4 = int_4 + int_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_4 = 1;
		int_5 = int_2 * int_4;
		int_5 = v_verify_beacon(char_2,int_2);

		double_3 = double_2 * double_3;
		float_2 = float_1 + float_2;
		long_1 = long_1 * long_1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		int_4 = int_3 * int_1;
	}
	double_2 = double_4 + double_2;
}
long v_termpty_cellrow_get( long parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
		}
		v__termpty_cellrow_from_beacon_get(unsigned_int_1,int_1,int_1);

		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
	}
	return long_1;
}
char v_termio_selection_get( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,unsigned int parameter_7)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = v_termpty_cellrow_get(long_2,int_1,char_1);

	char_2 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		short short_2 = 1;
		float float_3 = 1;
		if(1)
		{
			float_1 = float_1 * float_1;
			double_1 = double_1 + double_1;
		}
		if(1)
		{
			int_2 = v_ty_sb_add(long_2,long_3,short_1);

			short_2 = short_2;
		}
		if(1)
		{
			long_2 = long_1 * long_1;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						unsigned int unsigned_int_2 = 1;
						unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
					}
					if(1)
					{
						float float_2 = 1;
						v_ty_sb_spaces_rtrim(long_2);

						float_2 = float_2 * float_3;
					}
				}
				if(1)
				{
					int_1 = v_codepoint_to_utf8(float_1,char_3);

					short_2 = short_2;
				}
			}
		}
		if(1)
		{
			int int_3 = 1;
			int_1 = int_1 * int_3;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double double_3 = 1;
				if(1)
				{
					float float_4 = 1;
					float_3 = float_4 + float_4;
				}
				if(1)
				{
					double double_2 = 1;
					double_2 = double_2;
				}
				if(1)
				{
					v_termpty_backlog_lock();

					double_1 = double_3 * double_1;
				}
				if(1)
				{
					v_ty_sb_free(unsigned_int_1);

					double_3 = double_1;
				}
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
				}
			}
			v_termpty_backlog_unlock();

			float_1 = v_ty_sb_steal_buf(unsigned_int_4);

			int_2 = int_2 * int_2;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_1 + int_4;
		}
	}
	return char_3;
}
double v__cb_ctxp_link_open(short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	char_3 = v__activate_link(double_3,double_4);

	short_1 = short_1;
	double_4 = double_2 * double_3;
	return double_3;
}
unsigned int v__should_inline( int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_2 = v_termio_config_get(int_1);

	int_3 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
	}
	return unsigned_int_3;
}
short v_link_is_email( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
}
void v_link_is_protocol( long parameter_1)
{
}
int v_link_is_url()
{
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	return int_1;
	v_link_is_protocol(long_1);

}
char v__activate_link( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_8 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_2;
	char_1 = char_1 + char_1;
	unsigned_int_1 = v__should_inline(int_2);

	int_3 = int_2 * int_1;
	double_2 = double_1;
	long_2 = long_1 * long_1;
	int_1 = v_link_is_url();

	int_3 = int_3 * int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
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
			v_media_src_type_get(float_1);

			double_3 = double_4;
		}
		if(1)
		{
			double_4 = double_2 + double_5;
		}
	}
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		long_3 = long_2 + long_3;
		short_1 = short_1 + short_1;
	}
	float_2 = float_3;
	if(1)
	{
	}
	if(1)
	{
		int int_4 = 1;
		int_5 = int_4 + int_3;
		double_4 = double_6 + double_4;
		if(1)
		{
			int_3 = int_5 + int_4;
		}
		if(1)
		{
			long_1 = long_2 * long_1;
		}
		int_4 = int_1 + int_4;
		if(1)
		{
			double_4 = double_5 + double_4;
			unsigned_int_4 = unsigned_int_2;
		}
	}
	if(1)
	{
		double_5 = double_5 + double_5;
		double_1 = double_3 * double_1;
		if(1)
		{
			char_1 = char_1;
			if(1)
			{
				if(1)
				{
					char char_2 = 1;
					char char_3 = 1;
					char char_4 = 1;
					double_4 = double_7 * double_2;
					char_4 = char_2 + char_3;
				}
				if(1)
				{
					int_3 = int_5 + int_5;
					double_1 = double_7 + double_1;
				}
			}
			if(1)
			{
				float float_4 = 1;
				if(1)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
					}
				}
				short_3 = v_link_is_email(short_3);

				short_2 = short_3 * short_2;
				float_4 = float_1 + float_2;
			}
		}
	}
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1 * long_2;
		short_2 = short_3;
		if(1)
		{
			double_7 = double_6 * double_2;
			if(1)
			{
				int int_6 = 1;
				int int_7 = 1;
				unsigned_int_5 = unsigned_int_3;
				int_2 = int_6 + int_7;
			}
			if(1)
			{
				int int_8 = 1;
				if(1)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_6 + unsigned_int_2;
					}
				}
				if(1)
				{
					if(1)
					{
						long_3 = long_4 * long_3;
					}
				}
				if(1)
				{
					if(1)
					{
						float float_5 = 1;
						float_5 = float_3 * float_5;
					}
				}
				int_5 = int_8 * int_8;
				int_1 = int_3 * int_3;
			}
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_6;
	}
	double_8 = double_6;
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
	}
	return char_1;
}
void v__cb_ctxp_link_preview(unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float_3 = float_1 + float_2;
	double_1 = double_1 * double_2;
	float_4 = float_2 + float_1;
	char_1 = v__activate_link(double_1,double_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
}
short v__is_fmt( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
		}
		if(1)
		{
		}
	}
	return short_1;
}
void v_media_src_type_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short_3 = v__is_fmt(double_3,long_1);

		float_1 = float_1 * float_2;
	}
	if(1)
	{
		double_3 = double_3 + double_1;
	}
}
void v__mouse_in_selection( short parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	double_1 = double_1 * double_1;
	char_4 = char_1 * char_3;
	char_4 = char_3 * char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		short_1 = short_1 * short_1;
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
unsigned int v__smart_xy_to_cursor( float parameter_1,char parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	double_1 = double_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 + double_1;
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_4 + float_4;
	}
	return unsigned_int_3;
}
unsigned int v__cb_link_down(unsigned int parameter_2,char parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	float_1 = float_1 + float_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double_1 = double_1 + double_2;
		long_2 = long_1 * long_2;
		int_1 = int_1 + int_1;
	}
	char controller4vul_535[3];
	fgets(controller4vul_535 ,3 ,stdin);
	if( strcmp( controller4vul_535, "My") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		char char_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_4 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double double_5 = 1;
		float float_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		char_2 = char_1 + char_2;
		double_2 = double_3 * double_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		char controller4vul_536[3];
		fgets(controller4vul_536 ,3 ,stdin);
		if( strcmp( controller4vul_536, "19") > 0)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
			unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
			char controller4vul_537[3];
			fgets(controller4vul_537 ,3 ,stdin);
			if( strcmp( controller4vul_537, "{]") > 0)
			{
				unsigned_int_4 = v__cb_ctxp_link_content_copy(int_2,uni_para);

			}
		}
		char_3 = char_3 + char_3;
		int_4 = int_3 * int_1;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_3 = unsigned_int_6;
			if(1)
			{
				int_2 = int_4 + int_4;
			}
		}
		double_4 = double_2 + double_4;
		char_5 = char_4 + char_2;
		if(1)
		{
			double_4 = double_1;
		}
		if(1)
		{
			int int_5 = 1;
			int_3 = int_3 + int_5;
			double_1 = double_3 + double_4;
		}
		if(1)
		{
			double_5 = double_5;
		}
		float_1 = float_1 + float_3;
		float_3 = float_3 + float_2;
		short_2 = short_3;
		double_3 = double_5 * double_1;
		short_3 = short_1;
	}
	return unsigned_int_7;
}
void v_main_term_popup_exists()
{
}
void v__update_link( long parameter_1,long parameter_2,int parameter_3,short parameter_4,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float_1 = float_2;
	float_1 = float_2 + float_3;
	double_2 = double_1 + double_2;
	long_1 = long_1 * long_1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	if(1)
	{
		int_1 = int_1 * int_4;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		int_1 = int_5 * int_3;
	}
	if(1)
	{
	}
	double_1 = double_3 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_4 = 1;
		int int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_7 = 1;
		char char_2 = 1;
		double double_8 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		short_1 = short_1;
		double_4 = double_3 * double_3;
		char controller4vul_533[3];
		fgets(controller4vul_533 ,3 ,stdin);
		if( strcmp( controller4vul_533, "cb") > 0)
		{
			int_6 = int_2 * int_4;
			char controller4vul_534[3];
			fgets(controller4vul_534 ,3 ,stdin);
			if( strcmp( controller4vul_534, "^F") > 0)
			{
				unsigned_int_2 = v__cb_link_down(unsigned_int_2,char_1,uni_para);

				long_1 = long_1 * long_2;
			}
			if(1)
			{
				float_3 = float_2 * float_2;
			}
		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_2 * short_1;
			int_6 = int_3 * int_6;
		}
		if(1)
		{
			long long_3 = 1;
			long_3 = long_2;
			short_1 = short_1;
		}
		double_7 = double_5 * double_6;
		char_1 = char_1 * char_1;
		int_1 = int_3 + int_7;
		char_1 = char_2;
		int_5 = int_3 * int_3;
		double_8 = double_4;
		if(1)
		{
			long_2 = long_1 * long_2;
		}
	}
}
char v__remove_links( int parameter_1,long parameter_2,int uni_para)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float_1 = float_1;
	char controller4vul_532[2];
	fgets(controller4vul_532 ,2 ,stdin);
	if( strcmp( controller4vul_532, "A") > 0)
	{
		short short_2 = 1;
		char char_2 = 1;
		v__update_link(long_1,long_2,int_1,short_1,uni_para);

		short_2 = short_1 + short_1;
		char_3 = char_1 + char_2;
	}
	short_3 = short_3 + short_4;
	char_4 = char_1 * char_3;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_1;
	return char_1;
}
void v__sel_set( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "u") > 0)
	{
		short_1 = short_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_2 = 1;
		int int_2 = 1;
		float_3 = float_1 + float_2;
		short_2 = short_1 * short_2;
		int_2 = int_1 * int_1;
	}
}
int v_termio_scroll_get( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	return int_1;
}
void v_miniview_position_offset( double parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	char_2 = char_1 * char_2;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		float float_1 = 1;
		int_1 = int_2 * int_3;
		float_2 = float_1 * float_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
			double_1 = double_1 * double_1;
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			double double_2 = 1;
			long long_2 = 1;
			double double_3 = 1;
			double_2 = double_2 + double_2;
			long_2 = long_2 + long_1;
			int_1 = v_termio_scroll_get(float_2);

			double_1 = double_3 + double_4;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			int_2 = int_1 * int_1;
			double_6 = double_1 * double_5;
			if(1)
			{
				int_3 = int_1 * int_1;
			}
			if(1)
			{
				double_4 = double_5;
			}
		}
	}
}
char v_term_miniview_get( float parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
void v_termio_scroll( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	int_3 = int_1 + int_2;
	short_3 = short_1 * short_2;
	int_4 = int_5;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		long_1 = long_1 * long_2;
	}
	unsigned_int_3 = unsigned_int_4;
	char controller4vul_529[2];
	fgets(controller4vul_529 ,2 ,stdin);
	if( strcmp( controller4vul_529, "s") > 0)
	{
		unsigned int unsigned_int_5 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_6 = 1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		double_1 = double_2;
		int_5 = int_2 + int_1;
		if(1)
		{
			double_2 = double_2 * double_1;
		}
		char controller4vul_530[2];
		fgets(controller4vul_530 ,2 ,stdin);
		if( strcmp( controller4vul_530, "6") > 0)
		{
			long long_3 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int_3 = int_1 + int_1;
			int_6 = int_3 * int_6;
			long_2 = long_3 + long_3;
			unsigned_int_4 = unsigned_int_6 * unsigned_int_2;
			double_5 = double_3 + double_4;
			char controller4vul_531[2];
			fgets(controller4vul_531 ,2 ,stdin);
			if( strcmp( controller4vul_531, "c") < 0)
			{
				char_1 = v__remove_links(int_2,long_2,uni_para);

				double_2 = double_2 * double_1;
			}
		}
		if(1)
		{
			int_4 = int_6;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_1 + char_2;
			short_2 = short_2 + short_2;
			int_5 = int_4 + int_6;
		}
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_1 * int_1;
		}
	}
}
char v_termpty_save_new( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	v_termpty_save_free(short_1);

	char_1 = char_2;
	int_1 = int_2;
	return char_1;
}
float v_termpty_save_expand( float parameter_1,double parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	char_4 = char_1 * char_3;
	short_3 = short_1 + short_2;
	double_2 = double_1 * double_2;
	return float_1;
}
int v__termpty_cell_is_empty( long parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
unsigned int v_termpty_line_length( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		int_1 = v__termpty_cell_is_empty(long_1);

		char_1 = char_2;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
int v_verify_beacon( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
void v_termpty_text_save_top( unsigned int parameter_1,float parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char char_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_1 + int_2;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	char_1 = v_termpty_save_new(unsigned_int_1,int_1);

	v_termpty_backlog_unlock();

	double_3 = double_1 + double_2;
	int_1 = int_1 * int_2;
	double_5 = double_4 * double_4;
	double_1 = double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_6 = 1;
		v_termpty_backlog_lock();

		double_6 = double_5 + double_4;
	}
	if(1)
	{
		long_2 = long_1 * long_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			long long_3 = 1;
			int_4 = int_3 * int_3;
			float_1 = float_2 * float_1;
			int_2 = v_verify_beacon(char_2,int_2);

			long_4 = long_3 * long_4;
			float_2 = float_1;
		}
	}
	short_1 = short_2;
	float_3 = float_2 * float_1;
	if(1)
	{
	}
	unsigned_int_2 = v_termpty_line_length(double_3,double_3);

	long_4 = long_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		float_2 = v_termpty_save_expand(float_1,double_1,int_4);

		double_3 = double_4;
	}
	int_1 = int_5 + int_3;
	long_5 = long_2 + long_2;
	char_2 = char_2 * char_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		short_1 = short_2;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_7 = unsigned_int_3 * unsigned_int_6;
}
void v_termpty_text_scroll( char parameter_1,double parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_3 = double_1 * double_2;
	float_1 = float_1 + float_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		char_2 = char_2 * char_3;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_3 * long_3;
	char controller4vul_527[2];
	fgets(controller4vul_527 ,2 ,stdin);
	if( strcmp( controller4vul_527, "u") > 0)
	{
		char_3 = char_2 + char_1;
		char controller4vul_528[2];
		fgets(controller4vul_528 ,2 ,stdin);
		if( strcmp( controller4vul_528, "<") > 0)
		{
			char char_4 = 1;
			v_termio_scroll(unsigned_int_1,int_1,int_1,int_1,uni_para);

			char_4 = char_1 + char_3;
		}
		double_3 = double_3 * double_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_3 = double_1 * double_3;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
		}
		double_1 = double_3 * double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_2 = unsigned_int_3;
			unsigned_int_1 = unsigned_int_3;
			unsigned_int_2 = unsigned_int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
	}
}
void v_termpty_text_scroll_test( unsigned int parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	char controller4vul_525[2];
	fgets(controller4vul_525 ,2 ,stdin);
	if( strcmp( controller4vul_525, "-") > 0)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
		char controller4vul_526[2];
		fgets(controller4vul_526 ,2 ,stdin);
		if( strcmp( controller4vul_526, "r") > 0)
		{
			double double_2 = 1;
			unsigned int unsigned_int_2 = 1;
			v_termpty_text_scroll(char_1,double_1,uni_para);

			double_2 = double_1 + double_1;
			unsigned_int_1 = unsigned_int_2;
			char_1 = char_1 * char_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_1 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		short_1 = short_1 * short_1;
		short_1 = short_1;
	}
}
unsigned int v__cursor_to_start_of_line()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	return unsigned_int_1;
}
short v__tab_forward( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	return short_1;
}
short v__handle_cursor_control( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	short short_6 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		long_2 = long_1 + long_2;
	}
	char_1 = char_1 * char_2;
	short_2 = short_1 * short_2;
	char_4 = char_3 * char_1;
	double_1 = double_1 + double_2;
	double_4 = double_1 * double_3;
	long_3 = long_2 + long_1;
	short_4 = short_3 * short_3;
	int_2 = int_1 + int_1;
	if(1)
	{
		v_termpty_text_scroll_test(unsigned_int_1,char_2,-1 );

		short_5 = short_2 * short_4;
	}
	float_2 = float_1 + float_2;
	short_3 = v__tab_forward(double_3,int_2);

	char_2 = char_4 * char_3;
	char_5 = char_6;
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		int int_3 = 1;
		long_5 = long_4 * long_1;
		int_1 = int_3 * int_3;
		short_5 = short_2;
	}
	short_5 = short_6 * short_7;
	return short_4;
	unsigned_int_2 = v__cursor_to_start_of_line();

}
int v_termpty_handle_seq( double parameter_1,long parameter_2,unsigned int parameter_3,int uni_para)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	char controller4vul_522[2];
	fgets(controller4vul_522 ,2 ,stdin);
	if( strcmp( controller4vul_522, "H") < 0)
	{
		char char_1 = 1;
		long_1 = v__handle_esc_csi(long_2,unsigned_int_1,double_1,uni_para);

		char_1 = char_1 * char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_2 * float_3;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "z!") > 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_2 + char_3;
	}
	return int_1;
}
void v_termpty_handle_buf( int parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_1 * int_1;
	char controller4vul_521[2];
	fgets(controller4vul_521 ,2 ,stdin);
	if( strcmp( controller4vul_521, "u") > 0)
	{
		int_1 = v_termpty_handle_seq(double_1,long_1,unsigned_int_1,uni_para);

		short_1 = short_2 + short_1;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	int_2 = int_1 * int_2;
}
void v_theme_reload( long parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 * long_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
	}
}
long v_theme_reload_cb(float parameter_2,char parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_2;
	char_2 = char_1 + char_1;
	v_theme_reload(long_1);

	long_1 = long_1 * long_1;
	int_3 = int_1 + int_2;
	int_1 = int_3;
	int_1 = int_2 * int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "&5") < 0)
	{
		int_1 = int_3 * int_1;
	}
	return long_1;
}
void v_theme_auto_reload_enable( long parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long_1 = v_theme_reload_cb(float_1,char_1,long_1);

	double_1 = double_1 * double_1;
}
char v__cursor_shape_to_group_name( short parameter_1)
{
	char char_1 = 1;
	return char_1;
}
unsigned int v_config_theme_path_default_get( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_2;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_1;
}
void v_theme_path_get()
{
}
short v_config_theme_path_get( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1 + double_2;
	short_2 = short_1 * short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "h") < 0)
	{
	}
	return short_1;
	v_theme_path_get();

}
char v_theme_apply( double parameter_1,unsigned int parameter_2,float parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	short_1 = v_config_theme_path_get(double_1);

	double_1 = double_1 + double_2;
	int_2 = int_1 + int_1;
	unsigned_int_1 = v_config_theme_path_default_get(long_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	double_2 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "]") == 0)
	{
	}
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2;
	return char_3;
}
void v_termio_set_cursor_shape( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_2;
	v_theme_auto_reload_enable(long_1);

	int_1 = int_1 * int_1;
	double_3 = double_3 * double_4;
	double_1 = double_4;
	char_1 = v_theme_apply(double_4,unsigned_int_1,float_1);

	int_1 = int_2 + int_2;
	char_1 = char_2 * char_3;
	int_3 = int_2 * int_2;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char_1 = v__cursor_shape_to_group_name(short_1);

		int_1 = int_1;
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_3 + float_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
	}
}
void v_termpty_clear_tabs_on_screen( unsigned int parameter_1)
{
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( char parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	if(1)
	{
		int int_1 = 1;
		short short_2 = 1;
		int_1 = int_1 + int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_3 = 1;
			char_3 = char_2;
		}
		v_termpty_backlog_unlock();

		short_2 = short_1 + short_1;
	}
	if(1)
	{
		float float_1 = 1;
		v_termpty_backlog_lock();

		float_1 = float_1 + float_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2;
	v_termpty_save_free(short_1);

}
int v__ts_free()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
void v_termpty_save_free( short parameter_1)
{
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		int int_2 = 1;
		if(1)
		{
			int_1 = v__ts_free();

			double_1 = double_1 + double_1;
		}
		if(1)
		{
			double_1 = double_1 + double_2;
		}
		int_1 = int_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_4 = double_3 + double_2;
	int_3 = int_3 + int_3;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	double double_7 = 1;
	short short_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_termpty_backlog_unlock();

	double_2 = double_1 + double_1;
	double_1 = double_3 * double_1;
	double_1 = double_4 * double_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_3 = unsigned_int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_6 = double_5 + double_5;
		}
		v_termpty_backlog_lock();

		v_termpty_save_free(short_1);

		float_1 = float_1 * float_1;
		v_termpty_backlog_size_set(char_1,short_2);

		long_2 = long_1 + long_1;
	}
	float_1 = float_1 + float_1;
	double_6 = double_7 + double_3;
	double_7 = double_1 + double_4;
	short_2 = short_3 + short_2;
	double_3 = double_5 + double_4;
}
void v_termpty_reset_att( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int_1 = int_1 * int_2;
	float_1 = float_2;
	int_3 = int_4;
	int_3 = int_3 * int_4;
	float_3 = float_2 * float_3;
	double_2 = double_1 + double_1;
	double_1 = double_2 + double_2;
	short_1 = short_1;
	double_1 = double_3 * double_2;
	short_1 = short_2 + short_2;
	short_3 = short_1 * short_1;
	double_3 = double_2 + double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_4;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_2 = double_3 + double_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_3 + int_1;
	short_3 = short_2 + short_1;
	double_2 = double_1 * double_3;
	int_6 = int_1 + int_5;
}
unsigned int v_termio_config_get( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 + float_1;
	int_1 = int_1 + int_1;
	return unsigned_int_1;
}
void v_termpty_reset_state()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	float float_4 = 1;
	double double_4 = 1;
	int int_6 = 1;
	float float_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_5 = 1;
	int_2 = int_1 * int_1;
	int_3 = int_2 * int_2;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	v_termio_set_cursor_shape(long_1,double_2);

	int_4 = int_1 * int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 + int_4;
	int_1 = int_4;
	long_2 = long_2;
	double_3 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_1 + float_2;
	double_1 = double_3;
	v_termpty_reset_att(float_3);

	v_termpty_clear_tabs_on_screen(unsigned_int_3);

	unsigned_int_3 = unsigned_int_3;
	short_1 = short_1 * short_1;
	float_3 = float_3;
	unsigned_int_2 = unsigned_int_3;
	float_3 = float_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_2 * short_3;
	int_4 = int_4 * int_3;
	unsigned_int_2 = v_termio_config_get(int_5);

	int_4 = int_2 * int_3;
	int_3 = int_2 + int_2;
	int_1 = int_5 * int_4;
	float_4 = float_3 + float_1;
	double_4 = double_2 + double_4;
	int_6 = int_3;
	v_termpty_clear_backlog(long_2);

	double_1 = double_4 * double_2;
	float_7 = float_5 + float_6;
	char_1 = char_1 + char_1;
	double_1 = double_4 * double_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
	int_2 = int_5 + int_6;
	double_2 = double_2 * double_2;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	long_1 = long_2 * long_2;
	int_8 = int_7 * int_4;
	double_5 = double_2 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_8 = 1;
		float_8 = float_8 + float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
	}
}
void v_termpty_resize_tabs( float parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	double_1 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		double_3 = double_3;
		if(1)
		{
			double_2 = double_2 + double_2;
		}
		if(1)
		{
			double_1 = double_1 * double_3;
		}
		float_1 = float_1 + float_1;
	}
	unsigned_int_3 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
}
long v__termpty_init()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_1;
	double_1 = double_1;
	double_3 = double_1 + double_2;
	double_2 = double_2;
	v_termpty_resize_tabs(float_1,int_1,int_2);

	float_2 = float_1 * float_2;
	char_1 = char_1 + char_1;
	v_termpty_reset_state();

	float_2 = float_3 + float_4;
	float_2 = float_5 * float_3;
	int_1 = int_2 + int_2;
	int_1 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_2;
	char_4 = char_2 * char_3;
	int_3 = int_2;
	float_5 = float_4 * float_5;
	return long_1;
}
float v__add_default_keys()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	double double_5 = 1;
	long long_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_8 = 1;
	int int_9 = 1;
	long_3 = long_1 + long_2;
	short_2 = short_1 + short_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_4 = short_1 * short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_2;
	double_1 = double_1 * double_1;
	char_2 = char_3;
	double_1 = double_1;
	short_1 = short_4 * short_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_3 = int_2 * int_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1;
	double_1 = double_2 + double_3;
	int_1 = int_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	int_3 = int_3;
	double_1 = double_3 + double_3;
	int_1 = int_1 + int_3;
	unsigned_int_3 = unsigned_int_4;
	short_4 = short_4 + short_3;
	short_3 = short_4;
	char_3 = char_3 * char_3;
	int_1 = int_3 + int_3;
	unsigned_int_4 = unsigned_int_1;
	double_1 = double_2 * double_4;
	char_5 = char_4 + char_3;
	short_1 = short_4 * short_2;
	long_4 = long_1 * long_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	char_6 = char_7;
	double_5 = double_5;
	long_2 = long_5 * long_3;
	short_4 = short_3 * short_3;
	double_2 = double_6 * double_4;
	int_5 = int_1 + int_4;
	float_2 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	short_3 = short_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	int_2 = int_6 * int_2;
	double_1 = double_1 * double_1;
	int_7 = int_5;
	char_2 = char_6 * char_8;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
	int_4 = int_5 + int_8;
	int_1 = int_9 + int_7;
	unsigned_int_2 = unsigned_int_4;
	short_2 = short_1;
	return float_1;
}
void v_colors_standard_get( int parameter_1,int parameter_2,int parameter_3,long parameter_4,float parameter_5,short parameter_6)
{
	double double_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_1 = double_2;
		long_3 = long_1 * long_2;
		int_1 = int_1 * int_1;
		short_2 = short_1 * short_1;
		long_3 = long_3 + long_2;
		double_4 = double_3 * double_4;
		float_3 = float_1 + float_2;
	}
	int_1 = int_1 * int_1;
	int_1 = int_2;
	float_4 = float_1 * float_4;
	double_2 = double_2 + double_4;
}
float v_config_new()
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_8 = 1;
	float_2 = float_1 + float_1;
	long_1 = long_1 * long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		float float_5 = 1;
		double double_6 = 1;
		float float_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_7 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		short short_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		int int_9 = 1;
		short short_4 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1 + double_2;
		double_5 = double_3 * double_4;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		float_3 = float_4;
		long_3 = long_1 * long_2;
		int_1 = int_1 + int_2;
		int_3 = int_2 + int_2;
		double_1 = double_4;
		char_1 = char_1 + char_1;
		v_colors_standard_get(int_2,int_1,int_3,long_1,float_2,short_1);

		float_5 = float_2 * float_3;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		double_5 = double_6 * double_4;
		float_1 = float_6 + float_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_2 = float_6;
		double_7 = double_7 * double_6;
		double_8 = double_5 + double_2;
		int_5 = int_3 + int_4;
		double_7 = double_3 * double_1;
		float_7 = float_6 + float_6;
		int_4 = int_6 + int_2;
		int_8 = int_7 + int_5;
		int_7 = int_7 * int_8;
		float_3 = float_1 * float_1;
		short_1 = short_1 * short_2;
		char_3 = char_2 + char_1;
		double_4 = double_2 * double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_4 = double_3 * double_5;
		double_2 = double_8;
		float_1 = float_5 + float_7;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		short_2 = short_2 + short_3;
		char_4 = char_4 + char_5;
		char_2 = char_3 * char_6;
		float_3 = float_7 + float_8;
		float_8 = v__add_default_keys();

		float_5 = float_1 + float_2;
		int_8 = int_9 * int_8;
		int_9 = int_6 * int_9;
		char_2 = char_5 * char_1;
		short_1 = short_2 * short_1;
		short_5 = short_1 * short_4;
		char_3 = char_2;
		int_3 = int_8 * int_2;
		long_3 = long_3 + long_3;
		double_4 = double_7 + double_5;
		char_2 = char_2 * char_5;
		double_2 = double_8 + double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int int_10 = 1;
				long long_4 = 1;
				long long_5 = 1;
				double_2 = double_8 + double_5;
				int_2 = int_10 + int_3;
				int_10 = int_1 + int_2;
				double_3 = double_5 * double_8;
				int_2 = int_5 * int_3;
				long_3 = long_4 + long_5;
			}
		}
		short_4 = short_3 * short_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	}
	return float_2;
}
int main()
{
	int uni_para =480;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_3;
	int_2 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_2 * char_3;
	long_1 = long_2;
	char_3 = char_4 + char_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_3 + int_2;
	short_3 = short_2 * short_2;
	if(1)
	{
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		int_1 = int_1;
	}
	int_2 = int_2;
	if(1)
	{
	}
	char_5 = char_4 + char_2;
	double_1 = double_1 * double_2;
	float_1 = float_2 * float_1;
	char controller4vul_517[2];
	fgets(controller4vul_517 ,2 ,stdin);
	if( strcmp( controller4vul_517, "5") < 0)
	{
		double double_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int int_5 = 1;
		long long_3 = 1;
		double double_5 = 1;
		float float_4 = 1;
		if(1)
		{
			double_2 = double_2 * double_3;
		}
		if(1)
		{
			int_1 = int_3 + int_3;
		}
		if(1)
		{
			float_3 = float_1 * float_1;
		}
		short_5 = short_4 * short_2;
		if(1)
		{
			int_4 = int_4 + int_2;
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		if(1)
		{
			int_3 = int_2 * int_5;
		}
		short_3 = short_5 * short_1;
		if(1)
		{
			int_2 = int_2;
		}
		unsigned_int_5 = unsigned_int_2;
		if(1)
		{
			int_6 = int_1 + int_4;
		}
		if(1)
		{
			long_3 = long_2 + long_1;
		}
		double_5 = double_2 + double_4;
		if(1)
		{
			int_1 = int_6 + int_4;
		}
		float_4 = float_4 * float_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
		}
		char controller4vul_518[3];
		fgets(controller4vul_518 ,3 ,stdin);
		if( strcmp( controller4vul_518, "<9") < 0)
		{
			int_1 = int_3 * int_2;
			char controller4vul_519[2];
			fgets(controller4vul_519 ,2 ,stdin);
			if( strcmp( controller4vul_519, "/") < 0)
			{
				double_5 = double_3;
				float_3 = float_1 * float_4;
				char controller4vul_520[3];
				fgets(controller4vul_520 ,3 ,stdin);
				if( strcmp( controller4vul_520, "/H") > 0)
				{
					v_termpty_handle_buf(int_2,short_6,int_3,uni_para);

					int_5 = int_2 * int_5;
				}
				if(1)
				{
					int_4 = int_3 * int_5;
				}
				if(1)
				{
					double_1 = double_4 + double_4;
				}
				if(1)
				{
					double_3 = double_5 + double_3;
				}
				if(1)
				{
					int_3 = int_1 + int_5;
				}
				if(1)
				{
					long long_4 = 1;
					long_2 = long_4 * long_3;
				}
				if(1)
				{
					long long_5 = 1;
					long_2 = long_3 * long_5;
				}
				if(1)
				{
					double_4 = double_1 + double_3;
				}
				if(1)
				{
					double_2 = double_4 + double_5;
				}
				if(1)
				{
					char char_6 = 1;
					char_4 = char_4 + char_6;
				}
				if(1)
				{
					short_2 = short_1;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_4;
				}
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_6;
			}
		}
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
	}
	if(1)
	{
		double double_6 = 1;
		double_4 = double_1 + double_6;
	}
	if(1)
	{
		float_3 = float_3 * float_2;
	}
	if(1)
	{
		short_6 = short_1 + short_6;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4;
		}
	}
	double_7 = double_8;
	double_7 = double_7 * double_7;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		int int_7 = 1;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_2;
		int_7 = int_6;
	}
	return int_4;
}

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

int v_flash();
void v_PDC_beep();
int v_beep();
int v_PDC_mouse_in_slk( int parameter_1,int parameter_2);
double v__mouse_key( long parameter_1);
float v_is_wintouched( float parameter_1);
int v_wgetch( unsigned int parameter_1);
int v_cbreak();
int v_wgetnstr( unsigned int parameter_1,char parameter_2,int parameter_3);
int v_getnstr( char parameter_1,int parameter_2);
int v_wattroff( double parameter_1,int parameter_2);
int v_attroff( unsigned int parameter_1);
int v_wattron( long parameter_1,int parameter_2);
int v_attron();
int v_addstr( long parameter_1);
void v_wbkgdset( char parameter_1,short parameter_2);
int v_wbkgd( short parameter_1,float parameter_2);
int v_bkgd( char parameter_1);
int v_init_pair( short parameter_1,short parameter_2,short parameter_3);
int v_scrollok( int parameter_1,short parameter_2);
int v_start_color();
void v_PDC_sysname();
int v_def_shell_mode();
void v_PDC_init_pair( short parameter_1,short parameter_2,short parameter_3);
char v__normalize( short parameter_1,short parameter_2);
void v_PDC_init_atrtab();
int v_untouchwin( float parameter_1);
int v_PDC_get_cursor_mode();
double v__get_gc( char parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
double v__blink_cursor( unsigned int parameter_1,short parameter_2);
char v__set_color();
unsigned int v__get_color();
void v__lose_ownership( float parameter_1,double parameter_2);
unsigned int v__to_utf8( char parameter_1,char parameter_2);
unsigned int v__convert_proc( short parameter_1,int parameter_2,short parameter_3,long parameter_4,double parameter_5,double parameter_6,int parameter_7);
short v__set_selection();
short v__get_selection( short parameter_1,double parameter_2,long parameter_3,float parameter_4,unsigned int parameter_5,double parameter_6,int parameter_7);
long v_XA_UTF8_STRING( unsigned int parameter_1);
short v__resize();
int v__set_title();
short v__refresh_scrollbar();
char v__resume_curses();
unsigned int v__selection_off();
long v__refresh_screen();
long v__process_curses_requests( short parameter_1,int parameter_2,double parameter_3);
char v__handle_nonmaskable( char parameter_1,char parameter_2,char parameter_3,double parameter_4);
unsigned int v__handle_enter_leave( char parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4);
double v__handle_structure_notify( long parameter_1,double parameter_2,unsigned int parameter_3,unsigned int parameter_4);
void v__draw_border();
void v__set_cursor_color( char parameter_1,short parameter_2,short parameter_3);
int v__display_cursor( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
unsigned int v__redraw_cursor();
unsigned int v__make_xy( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
short v__new_packet( unsigned int parameter_1,long parameter_2,int parameter_3,int parameter_4,int parameter_5,char parameter_6);
unsigned int v__display_text( short parameter_1,int parameter_2,int parameter_3,int parameter_4,long parameter_5);
long v__display_screen();
double v__handle_expose( char parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4);
double v__initialize_colors();
char v__thumb_left_right( char parameter_1,long parameter_2,float parameter_3);
int v__scroll_left_right( unsigned int parameter_1,unsigned int parameter_2,double parameter_3);
char v__thumb_up_down( float parameter_1,float parameter_2,int parameter_3);
float v__send_key_to_curses( unsigned int parameter_1,char parameter_2,float parameter_3);
int v__scroll_up_down( int parameter_1,short parameter_2,short parameter_3);
int v__get_icon();
unsigned int v__exit_process( int parameter_1,int parameter_2,char parameter_3);
unsigned int v__handle_signals( int parameter_1);
int v_XCursesSetupX( int parameter_1,char parameter_2);
void v_XCursesExit();
char v_XCursesSigwinchHandler( int parameter_1);
void v_XCursesSetSignal( int parameter_1,float parameter_2);
int v__setup_curses();
int v_XCursesInitscr( int parameter_1,char parameter_2);
void v_PDC_set_title( long parameter_1);
int v__cleanup_curses_process( int parameter_1);
int v_PDC_get_buffer_rows();
void v_PDC_set_keyboard_default();
void v_PDC_reset_shell_mode();
int v_slk_noutrefresh();
int v_waddnstr( double parameter_1,float parameter_2,int parameter_3);
int v_waddstr( unsigned int parameter_1,unsigned int parameter_2);
int v_vwprintw( long parameter_1,double parameter_2,long parameter_3);
int v_mvwprintw( char parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,short parameter_5);
long v__attr_passthru( long parameter_1,short parameter_2);
int v_whline( unsigned int parameter_1,double parameter_2,int parameter_3);
int v_touchline( short parameter_1,int parameter_2,int parameter_3);
int v_wscrl( unsigned int parameter_1,int parameter_2);
int v_waddch( unsigned int parameter_1,unsigned int parameter_2);
void v__drawone( int parameter_1);
void v__redraw();
unsigned int v__slk_calc();
int v_wattrset( long parameter_1,char parameter_2);
short v_newwin( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para);
void v_PDC_slk_initialize(int uni_para);
long v__copy_win( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8,double parameter_9);
int v_copywin( char parameter_1,long parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8,int parameter_9);
void v_wsyncup( short parameter_1);
int v_XC_read_socket( int parameter_1,int parameter_3);
short v__get_key_count();
char v__process_key_event();
int v_PDC_mouse_set();
short v__process_mouse_event();
double v__process_mouse_events();
int v_PDC_get_key();
unsigned int v_PDC_check_key();
void v_PDC_flushinp();
void v_PDC_reset_prog_mode();
int v_reset_prog_mode();
unsigned int v_isendwin();
int v_doupdate(int uni_para);
int v_wnoutrefresh();
int v_wrefresh( float parameter_1,int uni_para);
void v_PDC_sync( unsigned int parameter_1,int uni_para);
int v_wclrtoeol( long parameter_1,int uni_para);
int v_wclrtobot( unsigned int parameter_1,int uni_para);
int v_wmove( int parameter_1,int parameter_2,int parameter_3);
int v_werase( char parameter_1,int uni_para);
int v_PDC_makelines( double parameter_1);
unsigned int v_subwin( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
int v_touchwin( int parameter_1);
void v_PDC_makenew( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
float v_subpad( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
short v_resize_window( double parameter_1,int parameter_2,int parameter_3);
int v_wresize( double parameter_1,int parameter_2,int parameter_3);
int v__fit_console_window( char parameter_1,int parameter_2);
void v_PDC_retile();
int v_PDC_set_blink( float parameter_1);
float v__set_80x25();
int v_PDC_resize_screen( int parameter_1,int parameter_2);
int v_resize_term( int parameter_1,int parameter_2,int uni_para);
float v__screen_mode_equals( char parameter_1);
char v__set_scrn_mode( int parameter_1);
int v_PDC_display_cursor( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
void v_XC_release_line_lock( int parameter_1);
long v__dummy_function();
void v_XC_get_line_lock( int parameter_1);
short v__highlight( short parameter_1,char parameter_2,short parameter_3);
int v_PDC_pair_content( short parameter_1,short parameter_2,short parameter_3,int uni_para);
char v__set_attr( long parameter_1,int uni_para);
void v_PDC_update_rects();
void v_PDC_transform_line( int parameter_1,int parameter_2,int parameter_3,long parameter_4,int uni_para);
void v_PDC_gotoyx( int parameter_1,int parameter_2);
int v_PDC_curs_set( int parameter_1);
int v_curs_set( int parameter_1);
float v__set_font( int parameter_1);
void v_PDC_restore_screen_mode( int parameter_1);
void v_PDC_set_keyboard_binary( char parameter_1);
int v_raw();
long v__restore_mode( int parameter_1,int uni_para);
int v_reset_shell_mode(int uni_para);
void v_PDC_scr_close(int uni_para);
void v_PDC_save_screen_mode( int parameter_1);
double v__save_mode( int parameter_1);
int v_def_prog_mode();
int v_endwin(int uni_para);
void v_XCursesExitCursesProcess( int parameter_1,char parameter_2,int uni_para);
int v_XC_write_socket( int parameter_1,long parameter_2,int parameter_3);
int v_XC_write_display_socket_int( int parameter_1);
int v_XCursesInstruct( int parameter_1,int uni_para);
int v_XCursesInstructAndWait( int parameter_1,int uni_para);
void v__find_console_handle();
void v__init_console_info();
float v__egapal( short parameter_1);
int v_PDC_color_content( short parameter_1,short parameter_2,short parameter_3,short parameter_4,int uni_para);
void v_PDC_get_keyboard_info();
int v_PDC_get_columns();
short v__get_scrn_mode();
int v_PDC_get_rows();
char v__get_font();
long v__sanity_check( int parameter_1);
int v__query_adapter_type();
int v_PDC_scr_open( int parameter_1,char parameter_2,int uni_para);
char v_Xinitscr( int parameter_1,char parameter_2,int uni_para);
void v_initscr(int uni_para);
int v_flash()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	int_3 = int_1 * int_2;
	int_1 = int_1 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				float float_1 = 1;
				float_1 = float_1 + float_1;
			}
		}
		float_3 = float_2 + float_3;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
	}
	return int_4;
	int_2 = v_wrefresh(float_3,-1 );

}
void v_PDC_beep()
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = char_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = v_XCursesInstruct(int_3,-1 );

	double_1 = double_1 * double_1;
	double_1 = double_2 * double_1;
}
int v_beep()
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int_1 = v_flash();

	float_1 = float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_PDC_beep();

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	return int_2;
}
int v_PDC_mouse_in_slk( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_1;
	char_2 = char_1 * char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "dh") > 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return int_1;
}
double v__mouse_key( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float_1 = float_1 + float_2;
			long_3 = long_1 + long_2;
			if(1)
			{
				long long_4 = 1;
				long_3 = long_3 + long_4;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			int_2 = int_3 * int_1;
		}
	}
	if(1)
	{
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if(remainder_check(controller_6,100,2))
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
		}
	}
	if(1)
	{
	}
	int_4 = v_PDC_mouse_in_slk(int_1,int_4);

	float_3 = float_2 + float_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		}
	}
	return double_2;
}
float v_is_wintouched( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
			}
		}
	}
	return float_1;
}
int v_wgetch( unsigned int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	double_2 = double_1;
	if(1)
	{
		int_1 = int_3 * int_3;
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_2 + int_1;
			if(1)
			{
				double_4 = double_3 * double_1;
			}
		}
		if(1)
		{
			long long_1 = 1;
			int_4 = v_wrefresh(float_1,-1 );

			int_1 = v_PDC_get_key();

			long_2 = long_1 * long_1;
		}
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char_3 = char_2 + char_1;
	double_5 = double_4 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_6 = 1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			if(1)
			{
				char char_4 = 1;
				if(1)
				{
				}
				char_1 = char_4 * char_4;
			}
			if(1)
			{
				if(1)
				{
				}
			}
			unsigned_int_2 = v_PDC_check_key();

			short_3 = short_1 + short_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		double_2 = double_1 + double_3;
		if(1)
		{
			if(1)
			{
				long_2 = long_3 * long_2;
			}
			if(1)
			{
				double_6 = double_6 * double_6;
			}
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			int_4 = int_3 + int_4;
		}
		if(1)
		{
			int_3 = int_2 + int_2;
			double_2 = v__mouse_key(long_3);

			int_1 = int_3 * int_4;
		}
		if(1)
		{
		}
		if(1)
		{
			if(1)
			{
				float_2 = v_is_wintouched(float_2);

				int_2 = v_waddch(unsigned_int_2,unsigned_int_3);

				double_3 = double_6;
			}
		}
		if(1)
		{
			if(1)
			{
				double double_7 = 1;
				double_3 = double_4 * double_7;
			}
		}
		if(1)
		{
		}
	}
	return int_4;
}
int v_cbreak()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_2;
	long_1 = long_1;
	return int_1;
}
int v_wgetnstr( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_wgetch(unsigned_int_3);

	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	int_1 = v_beep();

	double_3 = double_2 * double_1;
	int_2 = v_cbreak();

	long_3 = long_1 + long_2;
	int_3 = v_waddch(unsigned_int_5,unsigned_int_1);

	double_3 = double_2 * double_1;
	int_1 = int_1;
	return int_4;
	int_3 = v_wrefresh(float_1,-1 );

	int_1 = v_waddstr(unsigned_int_5,unsigned_int_3);

}
int v_getnstr( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char_1 = char_1 * char_1;
	return int_1;
	int_1 = v_wgetnstr(unsigned_int_1,char_1,int_2);

}
int v_wattroff( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	return int_3;
}
int v_attroff( unsigned int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int_1 = v_wattroff(double_1,int_2);

	float_2 = float_1 + float_1;
	return int_3;
}
int v_wattron( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_5 = 1;
	char_3 = char_1 + char_2;
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_4 = 1;
		int int_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int_4 = int_1 + int_3;
		int_1 = int_4 * int_4;
		short_1 = short_1 * short_2;
		char_1 = char_3 + char_4;
		int_6 = int_5 * int_4;
		short_4 = short_3 * short_3;
	}
	if(1)
	{
		int_2 = int_5 + int_1;
	}
	return int_3;
}
int v_attron()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_2;
	return int_2;
	int_2 = v_wattron(long_1,int_2);

}
int v_addstr( long parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int_1 = v_waddnstr(double_1,float_1,int_1);

	float_2 = float_1 * float_1;
	return int_2;
}
void v_wbkgdset( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
}
int v_wbkgd( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	double double_7 = 1;
	char char_5 = 1;
	double double_10 = 1;
	double double_11 = 1;
	double_2 = double_1 * double_1;
	long_2 = long_1 + long_1;
	int_3 = int_1 * int_2;
	double_2 = double_3;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_2 * double_2;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "L") > 0)
	{
		double double_5 = 1;
		double double_6 = 1;
		int_4 = v_touchwin(int_3);

		double_6 = double_4 + double_5;
	}
	v_PDC_sync(unsigned_int_1,-1 );

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_1 * int_1;
	short_3 = short_1 + short_2;
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	int_3 = int_5 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_8 = 1;
			long long_3 = 1;
			long long_4 = 1;
			int int_6 = 1;
			int int_7 = 1;
			double double_9 = 1;
			double_7 = double_1 * double_2;
			double_8 = double_4 + double_2;
			long_3 = long_4;
			char_3 = char_2 * char_1;
			if(1)
			{
				char char_4 = 1;
				char_4 = char_3 + char_1;
			}
			short_2 = short_2 * short_2;
			int_6 = int_6 + int_6;
			int_5 = int_7 + int_5;
			if(1)
			{
				short_2 = short_2;
			}
			double_4 = double_9;
			v_wbkgdset(char_5,short_1);

			double_9 = double_7 * double_1;
		}
	}
	float_2 = float_3 + float_1;
	double_11 = double_10 * double_7;
	return int_4;
}
int v_bkgd( char parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int_1 = v_wbkgd(short_1,float_1);

	int_1 = int_1 * int_1;
	return int_1;
}
int v_init_pair( short parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	int_1 = v_PDC_pair_content(short_1,short_2,short_2,-1 );

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	v_PDC_init_pair(short_2,short_2,short_3);

	double_3 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		int_4 = int_2 + int_3;
		if(1)
		{
			double double_4 = 1;
			char_1 = v__normalize(short_1,short_2);

			double_3 = double_4 + double_1;
		}
	}
	short_2 = short_1;
	long_2 = long_1 * long_1;
	return int_5;
}
int v_scrollok( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1;
	return int_1;
}
int v_start_color()
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	v_PDC_init_atrtab();

	double_1 = double_1;
	if(1)
	{
	}
	char_1 = char_2;
	int_3 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	double_1 = double_2 + double_1;
	int_2 = v_PDC_set_blink(float_1);

	double_4 = double_3 + double_3;
	return int_2;
}
void v_PDC_sysname()
{
}
int v_def_shell_mode()
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_1;
	double_1 = v__save_mode(int_1);

	double_2 = double_1 * double_1;
	return int_2;
}
void v_PDC_init_pair( short parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	short_1 = short_2;
	float_1 = float_1 + float_1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_3 = 1;
		double double_2 = 1;
		float_3 = float_1 * float_2;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "DY") < 0)
		{
			int int_3 = 1;
			int_3 = int_1 * int_1;
		}
		if(1)
		{
			float float_4 = 1;
			float_2 = float_4 + float_3;
		}
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			char char_1 = 1;
			short_1 = short_3 + short_4;
			char_1 = char_1 * char_1;
		}
		if(1)
		{
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_2 + char_3;
		}
		double_2 = double_1;
	}
}
char v__normalize( short parameter_1,short parameter_2)
{
	char char_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	return char_1;
}
void v_PDC_init_atrtab()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 * char_2;
	if(1)
	{
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		v_PDC_init_pair(short_1,short_1,short_2);

		char_2 = char_1 * char_3;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	}
	char_2 = v__normalize(short_3,short_4);

}
int v_untouchwin( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_1;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float_3 = float_2 * float_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return int_1;
}
int v_PDC_get_cursor_mode()
{
	long long_1 = 1;
	int int_1 = 1;
	long_1 = long_1;
	return int_1;
}
double v__get_gc( char parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_1 + double_2;
	int_2 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	return double_2;
}
double v__blink_cursor( unsigned int parameter_1,short parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		double double_2 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned_int_1 = v__redraw_cursor();

			int_1 = int_1 * int_1;
			int_3 = int_2 * int_1;
			double_2 = double_1 * double_2;
			short_2 = short_1 * short_1;
			short_2 = short_2 + short_1;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			double_2 = double_2 + double_3;
			unsigned_int_2 = unsigned_int_2;
		}
	}
	long_1 = long_1 * long_2;
	return double_3;
}
char v__set_color()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_3 = 1;
	short_2 = short_1 + short_1;
	short_4 = short_3 + short_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = v__exit_process(int_1,int_1,char_2);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		long_1 = v__display_screen();

		int_3 = int_2 + int_3;
		double_1 = double_1 + double_2;
		int_3 = int_4 * int_3;
	}
	return char_3;
}
unsigned int v__get_color()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = v__exit_process(int_1,int_1,char_1);

	long_1 = long_1 + long_2;
	float_1 = float_1 + float_2;
	long_2 = long_1 * long_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	int_2 = int_1 + int_1;
	double_1 = double_1;
	return unsigned_int_2;
}
void v__lose_ownership( float parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	unsigned_int_1 = v__selection_off();

	char_1 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
}
unsigned int v__to_utf8( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_1;
}
unsigned int v__convert_proc( short parameter_1,int parameter_2,short parameter_3,long parameter_4,double parameter_5,double parameter_6,int parameter_7)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	long long_6 = 1;
	if(1)
	{
		long_2 = long_1 + long_2;
		int_1 = int_1 + int_2;
	}
	double_1 = double_1 + double_1;
	short_1 = short_2;
	char_1 = char_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		long long_4 = 1;
		char char_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_5 = 1;
		short short_3 = 1;
		double double_6 = 1;
		long long_7 = 1;
		int int_3 = 1;
		long_2 = long_1;
		double_2 = double_1;
		long_3 = v_XA_UTF8_STRING(unsigned_int_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_3 = double_2 + double_2;
		long_2 = long_4 * long_3;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			short_1 = short_1 * short_2;
			char_1 = char_2 * char_3;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "9") > 0)
		{
			long long_5 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
			long_5 = long_4 + long_3;
			double_3 = double_3 * double_1;
		}
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		char_4 = char_4 + char_2;
		double_3 = double_3 + double_4;
		long_3 = long_4 * long_2;
		double_5 = double_3 + double_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
			double_5 = double_5 + double_5;
		}
		char_5 = char_5 * char_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		short_1 = short_2 + short_3;
		double_6 = double_3;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 * float_2;
			unsigned_int_4 = unsigned_int_3;
		}
		short_2 = short_3 + short_1;
		if(1)
		{
			double_5 = double_2;
			long_4 = long_3 + long_1;
		}
		long_1 = long_6 * long_7;
		if(1)
		{
			long long_8 = 1;
			long long_9 = 1;
			long_8 = long_7;
			long_1 = long_9 * long_2;
		}
		int_1 = int_1 + int_2;
		if(1)
		{
			double_1 = double_6 * double_6;
		}
		int_3 = int_2 * int_2;
		unsigned_int_2 = v__to_utf8(char_4,char_3);

		int_3 = int_2 + int_3;
		char_3 = char_5 * char_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		short_1 = short_3;
	}
	long_6 = long_3 * long_6;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	return unsigned_int_1;
}
short v__set_selection()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	double_2 = double_1 * double_2;
	double_3 = double_3;
	int_1 = v_XC_read_socket(int_2,int_3);

	int_2 = int_3 + int_4;
	unsigned_int_1 = v__exit_process(int_2,int_2,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_1 + short_2;
	double_1 = double_3;
	double_3 = double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	double_2 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_4;
	int_4 = int_4 * int_3;
	if(1)
	{
		double_4 = double_2 * double_5;
		int_4 = v_XC_write_display_socket_int(int_3);

		long_1 = long_1 + long_1;
	}
	unsigned_int_1 = v__selection_off();

	unsigned_int_4 = unsigned_int_3;
	double_1 = double_3 * double_1;
	double_5 = double_3 + double_5;
	int_1 = int_4 + int_4;
	unsigned_int_5 = unsigned_int_4;
	int_3 = int_4 + int_2;
	long_1 = long_1 + long_2;
	v__lose_ownership(float_1,double_2);

	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		short short_4 = 1;
		short short_5 = 1;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_4;
		long_1 = long_2 * long_2;
		short_4 = short_5;
	}
	int_6 = int_2 * int_5;
	return short_1;
	unsigned_int_1 = v__convert_proc(short_1,int_6,short_2,long_3,double_5,double_5,int_6);

}
short v__get_selection( short parameter_1,double parameter_2,long parameter_3,float parameter_4,unsigned int parameter_5,double parameter_6,int parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	char char_1 = 1;
	int_1 = v_XC_write_socket(int_2,long_1,int_1);

	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_4 = int_2 + int_3;
	return short_1;
	int_1 = v_XC_write_display_socket_int(int_4);

	unsigned_int_1 = v__exit_process(int_5,int_4,char_1);

}
long v_XA_UTF8_STRING( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	return long_1;
}
short v__resize()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	short short_3 = 1;
	long_1 = long_1 * long_2;
	int_2 = int_1 * int_1;
	float_1 = float_1 * float_1;
	int_3 = int_3;
	int_1 = int_2;
	v__draw_border();

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 + char_2;
	unsigned_int_3 = v__exit_process(int_4,int_4,char_3);

	long_1 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_3;
	int_2 = int_1 * int_3;
	int_5 = int_4 + int_2;
	int_1 = int_1 + int_1;
	int_4 = int_6;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned_int_1 = unsigned_int_1;
		float_3 = float_1 * float_2;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	short_1 = short_1 * short_2;
	long_3 = long_3 * long_4;
	double_1 = double_1;
	return short_3;
}
int v__set_title()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int_1 = v_XC_read_socket(int_2,int_1);

	int_3 = int_2 * int_3;
	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_1 = v__exit_process(int_2,int_3,char_2);

	char_4 = char_3 + char_2;
	return int_4;
}
short v__refresh_scrollbar()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	char_3 = char_1 * char_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		int_3 = int_1 * int_2;
		float_1 = float_1 * float_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			char char_4 = 1;
			char_4 = char_3 * char_3;
		}
	}
	return short_1;
}
char v__resume_curses()
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int_1 = v_XC_write_display_socket_int(int_1);

		float_2 = float_1 * float_1;
	}
	return char_1;
	unsigned_int_1 = v__exit_process(int_2,int_1,char_1);

}
unsigned int v__selection_off()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	int_2 = int_1 + int_1;
	double_1 = double_1;
	return unsigned_int_2;
	long_1 = v__display_screen();

}
long v__refresh_screen()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_1 = v__display_text(short_1,int_1,int_1,int_2,long_3);

	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 + int_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned_int_1 = v__selection_off();

			double_3 = double_1 * double_2;
			v_XC_get_line_lock(int_2);

			long_3 = long_2 + long_2;
			short_3 = short_2 + short_3;
			v_XC_release_line_lock(int_1);

			double_1 = double_3;
			float_1 = float_1 * float_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	return long_4;
}
long v__process_curses_requests( short parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	unsigned_int_1 = v__exit_process(int_1,int_1,char_1);

	long_1 = v__refresh_screen();

	char_2 = v__resume_curses();

	short_1 = v__refresh_scrollbar();

	int_1 = v__display_cursor(int_2,int_2,int_3,int_4);

	unsigned_int_2 = v__redraw_cursor();

	int_3 = v__set_title();

	short_2 = v__get_selection(short_1,double_1,long_1,float_1,unsigned_int_3,double_2,int_2);

	unsigned_int_4 = v__get_color();

	char_1 = v__set_color();

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	return long_1;
	int_2 = v_XC_read_socket(int_1,int_5);

	short_3 = v__resize();

	long_1 = v_XA_UTF8_STRING(unsigned_int_1);

	short_3 = v__set_selection();

	unsigned_int_4 = v__selection_off();

}
char v__handle_nonmaskable( char parameter_1,char parameter_2,char parameter_3,double parameter_4)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = v__exit_process(int_1,int_2,char_1);

	double_1 = double_1 * double_1;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2 + double_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
	}
	return char_1;
}
unsigned int v__handle_enter_leave( char parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float_3 = float_1 * float_2;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	short_4 = short_3 * short_1;
	int_3 = int_1 + int_2;
	char_1 = char_1 * char_2;
	int_4 = int_4 * int_1;
	int_2 = int_1;
	return unsigned_int_3;
	unsigned_int_3 = v__redraw_cursor();

}
double v__handle_structure_notify( long parameter_1,double parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_2;
	float_1 = v__send_key_to_curses(unsigned_int_1,char_1,float_1);

	v__draw_border();

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_3 + int_3;
	char_2 = char_1;
	int_1 = int_3 + int_3;
	int_4 = int_1 + int_2;
	double_1 = double_1;
	char_1 = char_1 * char_2;
	int_3 = int_2;
	double_3 = double_1 + double_2;
	int_1 = int_2 * int_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	float_2 = float_1 * float_1;
	double_3 = double_1 + double_2;
	return double_2;
}
void v__draw_border()
{
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
}
void v__set_cursor_color( char parameter_1,short parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_2 = char_1 * char_2;
	char_3 = char_3 + char_2;
	char_3 = char_3 + char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "f") < 0)
	{
		int int_1 = 1;
		int_1 = int_1;
		double_1 = double_1 * double_1;
		int_1 = int_1;
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_1 * double_1;
			int_2 = v_PDC_pair_content(short_1,short_2,short_2,-1 );

			double_1 = double_1 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_4 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			char_3 = char_4 * char_2;
		}
	}
}
int v__display_cursor( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_7 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_4 = int_1 + int_1;
	double_2 = double_1 * double_1;
	char_1 = char_1 + char_2;
	float_1 = float_1 + float_2;
	unsigned_int_1 = v__display_text(short_1,int_5,int_5,int_6,long_1);

	char_3 = char_3 + char_4;
	char_3 = char_3 + char_4;
	unsigned_int_3 = v__make_xy(int_4,int_7,int_1,int_7);

	short_1 = short_2 * short_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	double_2 = double_2 * double_1;
	char_2 = char_5 * char_1;
	double_4 = double_3 + double_4;
	int_7 = int_2 * int_7;
	short_1 = short_2 + short_3;
	int_4 = int_4 + int_2;
	v__set_cursor_color(char_1,short_1,short_3);

	int_6 = int_6 + int_6;
	return int_4;
}
unsigned int v__redraw_cursor()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v__display_cursor(int_2,int_1,int_3,int_4);

	double_3 = double_1 * double_2;
	return unsigned_int_1;
}
unsigned int v__make_xy( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return unsigned_int_2;
}
short v__new_packet( unsigned int parameter_1,long parameter_2,int parameter_3,int parameter_4,int parameter_5,char parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_3 = double_1 + double_2;
	long_3 = long_1 * long_2;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = v__make_xy(int_1,int_2,int_3,int_2);

	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		if(1)
		{
			double_2 = double_1 + double_1;
		}
		long_3 = long_4;
	}
	float_1 = float_1 + float_1;
	return short_1;
	int_3 = v_PDC_pair_content(short_1,short_2,short_1,-1 );

}
unsigned int v__display_text( short parameter_1,int parameter_2,int parameter_3,int parameter_4,long parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_2;
	double_3 = double_2 * double_3;
	char_1 = char_1 + char_1;
	int_3 = int_1 * int_2;
	short_1 = v__new_packet(unsigned_int_3,long_3,int_1,int_3,int_2,char_2);

	int_5 = int_4 * int_4;
	double_3 = double_3;
	int_1 = int_4 + int_3;
	char_3 = char_1 + char_3;
	long_3 = long_3;
	return unsigned_int_1;
}
long v__display_screen()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_2;
	char_1 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		float float_1 = 1;
		v_XC_get_line_lock(int_3);

		unsigned_int_1 = v__display_text(short_1,int_4,int_4,int_1,long_1);

		int_4 = int_3 + int_2;
		v__draw_border();

		int_4 = int_4 * int_5;
		v_XC_release_line_lock(int_4);

		float_1 = float_1;
	}
	unsigned_int_1 = v__redraw_cursor();

	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
double v__handle_expose( char parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long_1 = v__display_screen();

	char_2 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return double_1;
}
double v__initialize_colors()
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_1 + double_2;
	int_3 = int_1 + int_2;
	double_1 = double_2 * double_1;
	int_2 = int_2 * int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	long_2 = long_1 + long_1;
	char_1 = char_2;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	long_1 = long_2;
	float_3 = float_4;
	short_1 = short_1 * short_1;
	double_3 = double_3 + double_4;
	return double_4;
}
char v__thumb_left_right( char parameter_1,long parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "|^") > 0)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "z") > 0)
	{
		int int_2 = 1;
		int_1 = int_2;
	}
	float_1 = v__send_key_to_curses(unsigned_int_1,char_1,float_2);

	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return char_1;
}
int v__scroll_left_right( unsigned int parameter_1,unsigned int parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_1;
	double_1 = double_2 * double_1;
	char_3 = char_1 * char_2;
	long_1 = long_1 * long_2;
	float_1 = v__send_key_to_curses(unsigned_int_1,char_4,float_1);

	short_2 = short_1 + short_1;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		if(1)
		{
			short_1 = short_1 + short_2;
		}
	}
	double_2 = double_3 + double_3;
	int_4 = int_3 + int_1;
	double_3 = double_3 * double_4;
	return int_2;
}
char v__thumb_up_down( float parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = v__send_key_to_curses(unsigned_int_2,char_1,float_2);

	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	double_3 = double_1 * double_2;
	int_2 = int_2 + int_1;
	return char_2;
}
float v__send_key_to_curses( unsigned int parameter_1,char parameter_2,float parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = v_XC_write_socket(int_1,long_1,int_1);

	char_2 = char_1 * char_1;
	int_2 = int_2 + int_1;
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return float_1;
	unsigned_int_2 = v__exit_process(int_3,int_4,char_2);

}
int v__scroll_up_down( int parameter_1,short parameter_2,short parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_1;
	long_1 = long_1 * long_2;
	long_3 = long_1 + long_1;
	char_1 = char_1;
	double_1 = double_1 + double_2;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 + double_3;
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_2;
		}
	}
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	return int_3;
	float_1 = v__send_key_to_curses(unsigned_int_1,char_1,float_1);

}
int v__get_icon()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int_3 = int_1 + int_2;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_1;
	char_1 = char_1 * char_1;
	float_3 = float_1 + float_2;
	float_2 = float_2 + float_2;
	double_1 = double_2 + double_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		char_2 = char_1 + char_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_1 = 1;
			long long_2 = 1;
			if(1)
			{
				char_2 = char_1;
			}
			if(1)
			{
				short_1 = short_1 * short_1;
			}
			long_2 = long_1 * long_1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
			int_3 = int_3 + int_1;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1;
			double_1 = double_3 * double_1;
			short_3 = short_2 + short_3;
		}
		if(1)
		{
			short_4 = short_2 * short_1;
			int_2 = int_4 + int_2;
			int_1 = int_1 + int_2;
		}
	}
	if(1)
	{
		double double_4 = 1;
		double_1 = double_4 * double_1;
		float_3 = float_1;
		short_3 = short_3 + short_4;
	}
	int_4 = int_4 + int_5;
	if(1)
	{
		int_5 = int_3 + int_3;
	}
	if(1)
	{
		short short_5 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_6 = 1;
		char_1 = char_1 + char_2;
		short_1 = short_5 + short_4;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
		float_2 = float_2 + float_3;
		int_6 = int_6 + int_3;
		int_6 = int_4 * int_4;
	}
	unsigned_int_3 = unsigned_int_6 * unsigned_int_7;
	return int_7;
}
unsigned int v__exit_process( int parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "I}") < 0)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	long_1 = long_1 * long_1;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	short_1 = short_2 * short_3;
	if(1)
	{
		short_2 = short_2;
		long_2 = long_2 + long_2;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
		double_2 = double_1 + double_2;
		double_2 = double_2 * double_1;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	int_1 = int_2 * int_1;
	int_3 = int_3 + int_3;
	int_3 = int_4;
	short_4 = short_1 + short_3;
	long_1 = long_2 * long_1;
	unsigned_int_4 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	int_2 = int_1 * int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	long_2 = long_1 * long_3;
	return unsigned_int_1;
}
unsigned int v__handle_signals( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_1 = v_XC_write_socket(int_2,long_1,int_1);

	double_1 = double_1 + double_1;
	int_2 = int_2 + int_1;
	unsigned_int_1 = v__exit_process(int_2,int_2,char_1);

	int_3 = int_1 * int_1;
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "tJ") < 0)
	{
	}
	float_1 = float_2;
	if(1)
	{
		long long_2 = 1;
		v_XCursesSetSignal(int_2,float_3);

		long_2 = long_1 * long_2;
	}
	return unsigned_int_1;
}
int v_XCursesSetupX( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_5 = 1;
	char char_4 = 1;
	int int_8 = 1;
	char char_5 = 1;
	long long_6 = 1;
	float float_6 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_7 = 1;
	char char_6 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_7 = 1;
	int int_10 = 1;
	long long_8 = 1;
	int int_11 = 1;
	float float_7 = 1;
	double double_8 = 1;
	char char_8 = 1;
	int int_12 = 1;
	float float_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	char char_9 = 1;
	unsigned int unsigned_int_10 = 1;
	char_1 = char_1;
	double_1 = double_1 * double_1;
	double_2 = double_2;
	long_1 = long_1;
	double_1 = double_1 + double_2;
	int_1 = int_1 * int_2;
	char_2 = char_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		double_4 = double_3 + double_4;
	}
	double_5 = v__handle_expose(char_3,int_1,int_1,unsigned_int_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	double_1 = double_2 + double_6;
	int_1 = int_3 * int_3;
	double_1 = v__handle_structure_notify(long_3,double_7,unsigned_int_3,unsigned_int_1);

	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
		}
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		int_3 = v_XC_write_display_socket_int(int_1);

		unsigned_int_5 = unsigned_int_6;
		int_3 = int_4 + int_2;
	}
	float_1 = float_1 + float_2;
	char_1 = char_1 * char_2;
	long_2 = v__process_curses_requests(short_2,int_4,double_7);

	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	short_2 = short_1;
	float_3 = float_4;
	double_5 = double_5 * double_2;
	long_4 = long_1 * long_3;
	float_4 = float_2 * float_3;
	double_7 = v__blink_cursor(unsigned_int_2,short_2);

	double_5 = double_6 + double_1;
	short_1 = short_1 * short_1;
	int_3 = int_3 * int_5;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
	short_3 = short_3 * short_4;
	if(1)
	{
		double_5 = double_2 + double_4;
	}
	if(1)
	{
		long_2 = long_5 * long_3;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_5 = unsigned_int_7 + unsigned_int_6;
		v_XCursesSetSignal(int_5,float_3);

		int_7 = int_6 + int_7;
		unsigned_int_7 = unsigned_int_2 + unsigned_int_8;
		double_2 = double_6 * double_2;
		float_4 = float_5 * float_1;
		int_6 = int_1;
		double_2 = v__get_gc(char_4,unsigned_int_3,int_8,int_8);

		double_6 = double_2 + double_4;
		char_1 = v__handle_nonmaskable(char_1,char_2,char_5,double_6);

		short_3 = short_3;
	}
	if(1)
	{
		unsigned_int_8 = v__handle_enter_leave(char_5,unsigned_int_5,char_2,int_1);

		long_6 = long_1 * long_6;
		int_3 = int_4 * int_7;
	}
	float_4 = float_6 + float_5;
	double_7 = double_5 * double_5;
	int_9 = int_4;
	if(1)
	{
		short_1 = short_2 + short_3;
	}
	unsigned_int_9 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_7 + long_7;
	if(1)
	{
		float_5 = float_4 * float_3;
		double_7 = double_2 + double_2;
	}
	long_5 = long_6 + long_3;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_8;
	long_2 = long_7;
	char_4 = char_6 * char_4;
	char_1 = char_2 + char_5;
	double_6 = v__initialize_colors();

	double_5 = double_7 * double_3;
	char_5 = char_4 + char_5;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		int_4 = int_2 + int_7;
		long_2 = long_1 * long_2;
		int_2 = int_9;
		char_1 = char_3 * char_2;
	}
	double_6 = double_3 + double_7;
	int_4 = v__scroll_up_down(int_7,short_5,short_6);

	char_6 = char_6 * char_3;
	long_7 = long_7 + long_6;
	int_8 = int_2;
	float_6 = float_2 * float_6;
	char_4 = char_5 + char_7;
	char_4 = v__thumb_left_right(char_6,long_4,float_2);

	char_7 = char_4 + char_5;
	double_4 = double_6;
	int_9 = int_8 * int_7;
	if(1)
	{
		short short_7 = 1;
		short_6 = short_7;
	}
	char_5 = char_6 + char_5;
	int_10 = int_5 + int_5;
	long_1 = long_2 + long_8;
	int_11 = v__get_icon();

	char_1 = v__thumb_up_down(float_7,float_6,int_8);

	char_3 = char_3 * char_7;
	double_5 = double_4 + double_8;
	char_4 = char_8 + char_1;
	int_9 = int_12 * int_5;
	int_3 = int_6 + int_1;
	float_5 = float_2 * float_8;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_2;
	float_7 = float_7 * float_8;
	double_1 = double_5;
	char_8 = char_3 + char_2;
	double_9 = double_8;
	double_3 = double_6;
	double_1 = double_3 + double_9;
	unsigned_int_8 = unsigned_int_5 + unsigned_int_4;
	short_2 = short_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	short_5 = short_2 + short_4;
	float_6 = float_6 * float_4;
	double_10 = double_10 + double_6;
	char_4 = char_4 + char_3;
	char_7 = char_2 * char_8;
	double_2 = double_2;
	if(1)
	{
		int int_13 = 1;
		long long_9 = 1;
		char_8 = char_9 * char_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_6;
		float_7 = float_7;
		int_9 = int_13 + int_2;
		char_2 = char_5;
		float_7 = float_5 + float_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				if(1)
				{
					int int_14 = 1;
					int_8 = int_14 * int_3;
				}
				if(1)
				{
					char_5 = char_9 + char_5;
					double_6 = double_10;
				}
			}
			if(1)
			{
				int_12 = int_11 + int_11;
			}
		}
		long_9 = long_7 + long_8;
	}
	if(1)
	{
		unsigned_int_8 = v__handle_signals(int_5);

		unsigned_int_6 = unsigned_int_3 * unsigned_int_6;
	}
	if(1)
	{
		int_7 = v__scroll_left_right(unsigned_int_8,unsigned_int_5,double_3);

		char_8 = char_9;
	}
	if(1)
	{
		double double_11 = 1;
		char char_10 = 1;
		double_11 = double_7 * double_4;
		double_9 = double_9;
		if(1)
		{
			char_4 = char_8;
		}
		char_10 = char_1 * char_1;
	}
	if(1)
	{
		short short_8 = 1;
		int int_15 = 1;
		short short_9 = 1;
		short_6 = short_6 * short_8;
		int_15 = int_4 * int_4;
		long_8 = long_2;
		short_4 = short_2 * short_9;
		unsigned_int_8 = unsigned_int_8 + unsigned_int_5;
		float_7 = float_8 + float_1;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_10;
	return int_10;
}
void v_XCursesExit()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		char char_1 = 1;
		double double_3 = 1;
		int_2 = int_1 + int_1;
		int_2 = v_XCursesInstruct(int_1,-1 );

		char_1 = char_1 + char_1;
		double_1 = double_3;
	}
	int_1 = v__cleanup_curses_process(int_3);

}
char v_XCursesSigwinchHandler( int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = v_XCursesSigwinchHandler(int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	v_XCursesSetSignal(int_2,float_1);

	unsigned_int_4 = unsigned_int_2;
	return char_1;
}
void v_XCursesSetSignal( int parameter_1,float parameter_2)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
}
int v__setup_curses()
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_7 = 1;
	char_1 = char_1 + char_1;
	int_1 = v_XC_read_socket(int_2,int_3);

	int_3 = int_4;
	double_2 = double_1 * double_2;
	float_1 = float_1 + float_1;
	char_2 = v_XCursesSigwinchHandler(int_4);

	int_3 = int_4 + int_1;
	long_1 = long_1 + long_2;
	long_3 = long_1 * long_3;
	long_1 = long_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "F") < 0)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_3 = double_3 * double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	int_4 = int_3 + int_5;
	char_2 = char_2 + char_3;
	double_3 = double_4;
	if(1)
	{
		int int_6 = 1;
		short_2 = short_1 + short_2;
		v_XCursesSetSignal(int_3,float_1);

		int_4 = int_3 + int_6;
	}
	short_1 = short_2 * short_1;
	short_3 = short_3;
	short_4 = short_3 * short_1;
	short_1 = short_2 * short_2;
	v_XCursesExit();

	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	double_4 = double_1 * double_2;
	return int_7;
}
int v_XCursesInitscr( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_XCursesSetupX(int_1,char_1);

	short_3 = short_1 + short_2;
	int_2 = v__setup_curses();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return int_2;
}
void v_PDC_set_title( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int_1 = v_XCursesInstruct(int_2,-1 );

	int_3 = v_XC_write_socket(int_1,long_1,int_3);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_XC_write_display_socket_int(int_4);

	v_XCursesExitCursesProcess(int_2,char_1,-1 );

}
int v__cleanup_curses_process( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int_3 = int_1 + int_2;
	double_1 = double_1 + double_1;
	double_2 = double_3;
	long_2 = long_1 * long_2;
	long_2 = long_3 + long_3;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_4 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "=") < 0)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	return int_2;
}
int v_PDC_get_buffer_rows()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long_3 = long_1 * long_2;
	int_1 = int_1 + int_2;
	double_2 = double_1 + double_2;
	return int_3;
}
void v_PDC_set_keyboard_default()
{
	long long_1 = 1;
	long_1 = long_1;
}
void v_PDC_reset_shell_mode()
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_2;
	v_PDC_set_keyboard_default();

	v_PDC_flushinp();

}
int v_slk_noutrefresh()
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = v_wnoutrefresh();

	short_1 = short_1 * short_2;
	return int_1;
}
int v_waddnstr( double parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_3 * int_1;
	return int_1;
	int_3 = v_waddch(unsigned_int_1,unsigned_int_1);

}
int v_waddstr( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int_1 = v_waddnstr(double_1,float_1,int_2);

	double_2 = double_1 + double_2;
	return int_2;
}
int v_vwprintw( long parameter_1,double parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_2;
	long_4 = long_2 * long_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		int_1 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		unsigned_int_1 = unsigned_int_4;
		double_2 = double_1 + double_1;
		float_1 = float_1 * float_2;
		long_1 = long_4 * long_1;
	}
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		float float_3 = 1;
		char_3 = char_1 + char_2;
		unsigned_int_5 = unsigned_int_5;
		double_1 = double_3 + double_4;
		float_2 = float_1 + float_3;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4;
		double_1 = double_4 + double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		int_1 = int_1 + int_1;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_1 = unsigned_int_7 * unsigned_int_3;
		long_3 = long_1 * long_3;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		long long_5 = 1;
		char char_5 = 1;
		int int_2 = 1;
		double_4 = double_4 * double_1;
		long_3 = long_4 * long_5;
		double_3 = double_4 + double_3;
		char_3 = char_3 * char_5;
		int_2 = int_2 * int_1;
	}
	return int_3;
	int_1 = v_waddstr(unsigned_int_2,unsigned_int_2);

}
int v_mvwprintw( char parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,short parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double double_4 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int_1 = v_wmove(int_1,int_2,int_3);

	double_3 = double_1 * double_2;
	int_4 = v_vwprintw(long_1,double_4,long_1);

	long_2 = long_2 * long_2;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	long_3 = long_4;
	int_4 = int_5 + int_5;
	double_7 = double_5 + double_6;
	return int_4;
}
long v__attr_passthru( long parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_2;
	float_1 = float_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		short_2 = short_2 + short_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_1 * float_3;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
int v_whline( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	v_PDC_sync(unsigned_int_1,-1 );

	char_1 = char_1;
	long_1 = v__attr_passthru(long_2,short_1);

	long_1 = long_2 + long_3;
	short_1 = short_2 * short_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	short_2 = short_2 * short_2;
	char_2 = char_2;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_2 + long_1;
	}
	char_2 = char_2 * char_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		long long_4 = 1;
		long_2 = long_1 * long_4;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	return int_1;
}
int v_touchline( short parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 + int_2;
	short_1 = short_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1 + int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return int_1;
}
int v_wscrl( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float_1 = float_1 * float_2;
	char_1 = char_1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short_1 = short_1 * short_2;
		v_PDC_sync(unsigned_int_1,-1 );

		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "(") < 0)
	{
		int int_1 = 1;
		double_2 = double_1 * double_2;
		double_1 = double_3 + double_1;
		int_1 = int_1 * int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		float float_4 = 1;
		double_3 = double_1 + double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_3 = double_1;
		}
		float_3 = float_4;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_1 = unsigned_int_5;
		}
	}
	int_2 = v_touchline(short_3,int_3,int_3);

	char_1 = char_1 + char_1;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_1;
	return int_3;
}
int v_waddch( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_1 = v_wclrtoeol(long_1,-1 );

	char_1 = char_2;
	v_PDC_sync(unsigned_int_1,-1 );

	v_wsyncup(short_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_1 = v_wscrl(unsigned_int_3,int_2);

	int_1 = v_wrefresh(float_1,-1 );

	short_1 = short_1 * short_1;
	return int_2;
	int_1 = v_waddch(unsigned_int_2,unsigned_int_1);

}
void v__drawone( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	short_3 = short_4;
	char_2 = char_1 * char_2;
	int_1 = v_waddch(unsigned_int_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "&") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	long_2 = long_1 + long_2;
	int_1 = v_wmove(int_1,int_1,int_2);

	short_4 = short_3 + short_2;
	int_3 = int_2 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int_1 = int_4;
	}
}
void v__redraw()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	v__drawone(int_1);

}
unsigned int v__slk_calc()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_2 = 1;
	double double_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	int_1 = int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	char_1 = char_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_3 + double_3;
	long_3 = long_1 * long_2;
	float_1 = float_1 * float_2;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
	char_4 = char_2 + char_3;
	double_2 = double_4;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_6;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_3 = float_4;
		double_4 = double_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "<") > 0)
		{
			double_5 = double_5 + double_2;
		}
	}
	char_5 = char_3 * char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_2 = char_4 * char_5;
		char_1 = char_3;
	}
	unsigned_int_6 = unsigned_int_3 + unsigned_int_7;
	char_5 = char_2 + char_5;
	char_5 = char_3 + char_1;
	char_3 = char_3 * char_4;
	char_2 = char_3 * char_6;
	short_1 = short_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_3 = double_2;
		short_1 = short_1;
	}
	v__redraw();

	int_2 = int_2 * int_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double double_6 = 1;
		unsigned_int_2 = unsigned_int_7 + unsigned_int_2;
		double_1 = double_5 + double_6;
		if(1)
		{
			double double_7 = 1;
			double_1 = double_3 * double_7;
		}
	}
	long_4 = long_2;
	long_2 = long_1;
	return unsigned_int_4;
}
int v_wattrset( long parameter_1,char parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	float_2 = float_1 + float_2;
	return int_1;
}
short v_newwin( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_2;
	char controller4vul_2027[3];
	fgets(controller4vul_2027 ,3 ,stdin);
	if( strcmp( controller4vul_2027, "aW") < 0)
	{
		float float_2 = 1;
		int_1 = v_werase(char_1,uni_para);

		float_1 = float_1 * float_2;
	}
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	return short_1;
}
void v_PDC_slk_initialize(int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char controller4vul_2025[2];
	fgets(controller4vul_2025 ,2 ,stdin);
	if( strcmp( controller4vul_2025, "S") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		float float_3 = 1;
		char controller4vul_2026[2];
		fgets(controller4vul_2026 ,2 ,stdin);
		if( strcmp( controller4vul_2026, "=") < 0)
		{
			long long_1 = 1;
			short short_2 = 1;
			short_1 = v_newwin(int_1,int_1,int_1,int_2,uni_para);

			long_1 = long_1;
			short_2 = short_2;
		}
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "go") == 0)
		{
			int_2 = int_1 + int_1;
		}
		if(1)
		{
			if(1)
			{
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		int_3 = int_2 * int_1;
		if(1)
		{
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int_1 = int_4 * int_4;
			short_1 = short_1 + short_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			float_2 = float_1 + float_1;
			double_2 = double_1 * double_2;
			long_3 = long_2 * long_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				float_1 = float_1 * float_1;
			}
			float_3 = float_2 + float_1;
		}
		float_3 = float_3;
	}
}
long v__copy_win( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8,double parameter_9)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	char_1 = char_1 + char_2;
	int_1 = int_2;
	float_1 = float_1;
	int_1 = int_1 * int_1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	char_2 = char_3 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_2 = short_1 + short_1;
		char_2 = char_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_3 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long_3 = long_1 + long_2;
		char_1 = char_1 * char_1;
		int_2 = int_2 + int_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_2 = 1;
			if(1)
			{
				int int_4 = 1;
				int_1 = int_1 * int_4;
				if(1)
				{
					short_1 = short_1 * short_2;
				}
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			long_2 = long_1;
		}
		if(1)
		{
			long long_4 = 1;
			int_1 = int_2 * int_3;
			long_4 = long_4 + long_2;
		}
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				double_3 = double_1 * double_1;
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
			}
		}
		long_1 = long_2 + long_3;
		int_3 = int_3;
	}
	return long_2;
}
int v_copywin( char parameter_1,long parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8,int parameter_9)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	double_2 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "dK") < 0)
	{
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	char_1 = char_2;
	double_2 = double_1 * double_1;
	long_2 = long_1 * long_1;
	long_3 = long_4;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_2;
	return int_1;
	long_3 = v__copy_win(float_1,int_2,int_1,int_2,int_2,int_1,int_3,int_4,double_3);

}
void v_wsyncup( short parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = v_touchwin(int_1);

	char_3 = char_1 + char_2;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
}
int v_XC_read_socket( int parameter_1,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_1 = int_1;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_2 * int_2;
	short_1 = short_1 * short_1;
	int_3 = int_3 * int_2;
	return int_2;
}
short v__get_key_count()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_2;
	int_4 = int_3 + int_4;
	long_2 = long_1 + long_2;
	if(1)
	{
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_1 = char_1 + char_1;
		if(1)
		{
		}
		if(1)
		{
			char char_2 = 1;
			double double_1 = 1;
			unsigned_int_1 = unsigned_int_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			int_3 = int_2 + int_3;
			char_2 = char_2;
			double_2 = double_1 + double_2;
			unsigned_int_3 = unsigned_int_2;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "I") < 0)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			double double_3 = 1;
			double_3 = double_3 + double_2;
			double_2 = double_3;
		}
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	return short_1;
}
char v__process_key_event()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int_1 = int_1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
	}
	double_4 = double_2 + double_3;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		if(1)
		{
			char_1 = char_1;
		}
		if(1)
		{
			long_1 = long_1 * long_1;
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			char char_2 = 1;
			if(1)
			{
				long_1 = long_2 * long_3;
			}
			if(1)
			{
				double_4 = double_1 * double_2;
			}
			if(1)
			{
				float float_1 = 1;
				float_3 = float_1 * float_2;
			}
			if(1)
			{
				float_2 = float_3 * float_3;
			}
			char_2 = char_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
	}
	if(1)
	{
		char_1 = char_1 + char_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
			double_4 = double_1 + double_1;
		}
		if(1)
		{
			int int_3 = 1;
			int_2 = int_3 * int_3;
			long_3 = long_1 + long_2;
		}
		if(1)
		{
			double double_5 = 1;
			long long_4 = 1;
			double_5 = double_5 + double_1;
			long_2 = long_2 + long_4;
		}
	}
	long_1 = long_1;
	return char_3;
}
int v_PDC_mouse_set()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int_1 = int_2;
	int_3 = int_3 * int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = float_2;
		int_4 = int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			float_2 = float_1;
			long_1 = long_2;
			double_1 = double_2;
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			int_4 = int_3;
			short_1 = short_1 * short_1;
			short_2 = short_3;
		}
	}
	double_1 = double_3;
	return int_2;
}
short v__process_mouse_event()
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	float float_5 = 1;
	long_2 = long_1 * long_2;
	char_1 = char_1;
	float_1 = float_1;
	long_2 = long_2 + long_2;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ";") > 0)
	{
		short_1 = short_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "/3") < 0)
	{
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double_2 = double_2 * double_2;
		char_1 = char_1 + char_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		int_1 = int_1 * int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				int int_3 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
				int_4 = int_2 + int_3;
			}
		}
	}
	if(1)
	{
		float float_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int_4 = int_2 * int_2;
		float_2 = float_4 + float_1;
		if(1)
		{
			short_2 = short_1 + short_1;
			char_2 = char_1 * char_1;
		}
		if(1)
		{
		}
		if(1)
		{
			short_3 = short_1 * short_2;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
			if(1)
			{
				if(1)
				{
					short_2 = short_3 + short_3;
				}
				if(1)
				{
					double_2 = double_1 * double_2;
				}
			}
		}
		long_5 = long_3 * long_4;
		float_4 = float_4 * float_4;
		double_2 = double_2 * double_2;
		double_3 = double_3 * double_4;
		short_4 = short_5;
	}
	float_5 = float_5;
	return short_3;
}
double v__process_mouse_events()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_2;
	int_2 = int_1 * int_1;
	long_1 = long_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		int_2 = int_2 + int_1;
		int_1 = int_3 + int_3;
		double_1 = double_2 + double_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				long long_3 = 1;
				long_3 = long_2 * long_3;
				double_2 = double_2;
			}
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_4 = 1;
			if(1)
			{
				if(1)
				{
					if(1)
					{
						long_2 = long_2 + long_2;
						int_4 = int_3 * int_1;
						unsigned_int_1 = unsigned_int_5;
						double_3 = double_2 + double_2;
						unsigned_int_1 = unsigned_int_2 * unsigned_int_6;
						int_4 = int_5;
					}
					if(1)
					{
						float float_1 = 1;
						float float_2 = 1;
						float float_3 = 1;
						float_3 = float_1 + float_2;
					}
				}
				if(1)
				{
					short short_3 = 1;
					short_1 = short_3 * short_2;
				}
			}
			if(1)
			{
				int_3 = int_5 * int_5;
				int_4 = int_5;
			}
		}
	}
	unsigned_int_6 = unsigned_int_7 + unsigned_int_7;
	int_5 = int_5 + int_3;
	double_4 = double_3 * double_1;
	return double_5;
}
int v_PDC_get_key()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	int int_7 = 1;
	long long_3 = 1;
	double double_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	float float_5 = 1;
	int_1 = int_2;
	int_2 = int_1 + int_3;
	char_1 = char_1;
	if(1)
	{
	}
	if(1)
	{
		float float_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			int_5 = int_2 * int_4;
		}
		if(1)
		{
			if(1)
			{
				double_2 = double_1 + double_1;
			}
			if(1)
			{
				short_3 = short_1 + short_2;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
			if(1)
			{
				short_4 = v__process_mouse_event();

				float_1 = float_1 * float_1;
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_3 = unsigned_int_1;
			}
			char controller_12[2];
			fgets(controller_12 ,2 ,stdin);
			if( strcmp( controller_12, "D") < 0)
			{
				long_1 = long_1 + long_2;
			}
		}
		char_2 = char_1;
		double_2 = double_2 * double_2;
		float_2 = float_3;
	}
	float_2 = float_2 * float_2;
	double_3 = double_2 + double_3;
	v_XCursesExitCursesProcess(int_1,char_1,-1 );

	double_1 = double_3;
	int_3 = int_6 + int_5;
	if(1)
	{
		if(1)
		{
			double_4 = v__process_mouse_events();

			double_2 = double_5 + double_2;
		}
		if(1)
		{
			char_1 = v__process_key_event();

			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		}
		if(1)
		{
			short_3 = v__get_key_count();

			double_4 = double_2 * double_6;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		}
	}
	if(1)
	{
		double_2 = double_2 + double_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		float_4 = float_1 * float_4;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		int_3 = int_7 + int_2;
	}
	if(1)
	{
		long long_4 = 1;
		long_2 = long_3 + long_4;
	}
	if(1)
	{
		double_7 = double_2;
	}
	if(1)
	{
		double double_8 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_8 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double_8 = double_1 + double_6;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		int_2 = int_5 * int_7;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_6;
		int_3 = int_4 + int_6;
		int_1 = int_8;
		long_1 = long_3 * long_5;
		double_6 = double_6;
		float_2 = float_4 + float_4;
		double_2 = double_2 * double_7;
		unsigned_int_1 = unsigned_int_7;
		long_2 = long_5 + long_5;
		unsigned_int_4 = unsigned_int_8;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
		char_1 = char_3 + char_1;
		double_5 = double_6 + double_6;
		char_2 = char_2 * char_4;
		int_9 = v_PDC_mouse_set();

		int_8 = v_XC_read_socket(int_5,int_5);

		double_7 = double_8;
	}
	short_2 = short_2 + short_1;
	float_1 = float_5 + float_4;
	return int_7;
}
unsigned int v_PDC_check_key()
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	double_1 = double_1;
	v_PDC_update_rects();

	v_XCursesExitCursesProcess(int_1,char_1,-1 );

	int_2 = int_1 * int_1;
	if(1)
	{
	}
	float_1 = float_1;
	float_3 = float_1 * float_2;
	return unsigned_int_1;
}
void v_PDC_flushinp()
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_PDC_get_key();

	float_1 = float_1 * float_2;
	char_2 = char_1 * char_1;
	unsigned_int_1 = v_PDC_check_key();

}
void v_PDC_reset_prog_mode()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	v_PDC_flushinp();

	int_1 = v_PDC_mouse_set();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_PDC_set_keyboard_binary(char_1);

}
int v_reset_prog_mode()
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long_1 = v__restore_mode(int_1,-1 );

	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_PDC_reset_prog_mode();

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	return int_2;
}
unsigned int v_isendwin()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	return unsigned_int_2;
}
int v_doupdate(int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	int int_8 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_PDC_transform_line(int_1,int_1,int_1,long_1,uni_para);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	int_6 = int_3 + int_5;
	int_1 = int_6 + int_7;
	double_1 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_3;
	char_1 = char_1;
	double_4 = double_3 * double_4;
	long_2 = long_1 + long_2;
	int_5 = int_4 + int_8;
	float_2 = float_1 * float_2;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
	double_1 = double_5 * double_3;
	double_4 = double_4;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
	long_2 = long_2 + long_1;
	short_2 = short_1 * short_1;
	short_2 = short_1 + short_1;
	int_5 = int_8 * int_4;
	return int_7;
}
int v_wnoutrefresh()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short_2 = short_1 + short_1;
	double_2 = double_1 + double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "H") < 0)
	{
		double double_3 = 1;
		long_1 = long_1 + long_1;
		double_2 = double_1 + double_3;
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float_1 = float_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			unsigned_int_1 = unsigned_int_3;
		}
	}
	float_2 = float_3;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	long_2 = long_1 + long_2;
	return int_1;
}
int v_wrefresh( float parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_2031[3];
	fgets(controller4vul_2031 ,3 ,stdin);
	if( strcmp( controller4vul_2031, "3n") > 0)
	{
		int_1 = v_doupdate(uni_para);

	}
	long_1 = long_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_1 = long_3 * long_4;
	}
	return int_2;
}
void v_PDC_sync( unsigned int parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char_3 = char_1 + char_2;
	char controller4vul_2030[2];
	fgets(controller4vul_2030 ,2 ,stdin);
	if( strcmp( controller4vul_2030, "h") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = v_wrefresh(float_1,uni_para);

		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		char char_4 = 1;
		char_2 = char_4;
	}
}
int v_wclrtoeol( long parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v_PDC_sync(unsigned_int_1,uni_para);

	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_3;
	if(1)
	{
	}
	int_3 = int_3;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	double_1 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	return int_3;
}
int v_wclrtobot( unsigned int parameter_1,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float_1 = float_1 + float_1;
	double_1 = double_1 + double_1;
	int_3 = int_1 * int_2;
	char controller4vul_2029[2];
	fgets(controller4vul_2029 ,2 ,stdin);
	if( strcmp( controller4vul_2029, "0") > 0)
	{
		int_1 = v_wclrtoeol(long_1,uni_para);

	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "j") > 0)
	{
		double double_2 = 1;
		int_2 = int_3 * int_1;
		int_3 = int_1 * int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		double_1 = double_2 + double_2;
		double_3 = double_3;
	}
	long_2 = long_1 * long_2;
	double_5 = double_3 + double_4;
	return int_1;
}
int v_wmove( int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short_1 = short_2;
	if(1)
	{
	}
	short_3 = short_1 * short_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
int v_werase( char parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 + short_1;
	char controller4vul_2028[2];
	fgets(controller4vul_2028 ,2 ,stdin);
	if( strcmp( controller4vul_2028, "c") > 0)
	{
		int_1 = v_wclrtobot(unsigned_int_1,uni_para);

	}
	return int_1;
}
int v_PDC_makelines( double parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "x$") > 0)
		{
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_2 = 1;
			double double_3 = 1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_1 = double_1 * double_1;
			}
			int_2 = int_2;
			char_3 = char_1 + char_2;
			double_1 = double_2 * double_3;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return int_1;
}
unsigned int v_subwin( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long_2 = long_1 + long_1;
	long_2 = long_2 * long_1;
	v_PDC_makenew(int_1,int_2,int_2,int_2);

	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 * float_1;
	float_2 = float_3;
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "d_") > 0)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	float_3 = float_1 * float_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_2 = short_1 * short_3;
	long_3 = long_2;
	float_3 = float_1 + float_1;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	float_4 = float_1 + float_2;
	char_1 = char_2 * char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_2 + long_3;
	}
	double_1 = double_1 + double_1;
	return unsigned_int_2;
}
int v_touchwin( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_2;
	long_2 = long_1 + long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "4") == 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_4 = int_2 + int_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return int_1;
}
void v_PDC_makenew( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		double_2 = double_1 + double_2;
		int_1 = v_touchwin(int_2);

		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		double_2 = double_2 * double_1;
	}
	short_1 = short_1 * short_2;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	double_3 = double_2;
	long_4 = long_2 + long_3;
	long_4 = long_2 + long_3;
	short_3 = short_2;
	float_2 = float_1 * float_1;
	short_2 = short_3 + short_3;
}
float v_subpad( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double double_6 = 1;
	int int_4 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	long_1 = long_1 * long_2;
	long_3 = long_2 * long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		long_1 = long_4 * long_1;
	}
	if(1)
	{
	}
	char_1 = char_1 * char_3;
	double_4 = double_3 + double_1;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_1 * int_2;
	char_3 = char_1 * char_1;
	char_2 = char_3 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_5 = double_1;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	int_1 = int_3 + int_3;
	double_6 = double_5 * double_3;
	v_PDC_makenew(int_2,int_2,int_3,int_4);

	unsigned_int_3 = unsigned_int_1;
	double_3 = double_3 * double_7;
	float_3 = float_1 + float_2;
	long_2 = long_4 + long_1;
	return float_1;
}
short v_resize_window( double parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	int int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_7 = 1;
	float float_4 = 1;
	int int_8 = 1;
	char char_3 = 1;
	short short_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
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
	}
	if(1)
	{
		if(1)
		{
			float_2 = float_1 * float_1;
			short_1 = short_1;
		}
		if(1)
		{
			double double_1 = 1;
			int_1 = v_copywin(char_1,long_1,int_2,int_2,int_1,int_2,int_2,int_1,int_1);

			double_1 = double_1 + double_2;
			int_1 = int_3 + int_3;
		}
		if(1)
		{
		}
	}
	double_3 = double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
		}
		v_PDC_makenew(int_2,int_3,int_2,int_2);

		int_1 = int_1 * int_1;
		float_3 = float_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				long long_2 = 1;
				long_1 = long_2 * long_1;
			}
		}
	}
	float_3 = float_1 + float_1;
	char_1 = char_2 + char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	double_2 = double_2;
	double_6 = double_5 + double_2;
	float_2 = float_2 * float_3;
	unsigned_int_2 = v_subwin(float_1,int_1,int_1,int_3,int_1);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_8 = double_7 + double_8;
	float_2 = v_subpad(int_4,int_3,int_5,int_4,int_1);

	long_1 = long_3;
	int_3 = v_PDC_makelines(double_6);

	int_6 = v_werase(char_1,-1 );

	long_3 = long_3;
	int_3 = int_5 + int_2;
	short_3 = short_2 * short_1;
	int_4 = int_1 + int_7;
	float_2 = float_1 * float_4;
	int_8 = int_5 + int_1;
	short_3 = short_2 * short_3;
	char_3 = char_3;
	int_2 = int_2 + int_8;
	int_8 = int_2 * int_3;
	return short_4;
}
int v_wresize( double parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short_1 = v_resize_window(double_1,int_1,int_2);

	float_3 = float_1 + float_2;
	return int_2;
}
int v__fit_console_window( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	int_1 = int_2;
	int_1 = int_3 * int_3;
	if(1)
	{
	}
	char_1 = char_2;
	int_1 = int_1;
	double_1 = double_2;
	int_3 = int_1 * int_3;
	double_1 = double_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_4 = 1;
			int_4 = int_3 + int_4;
		}
	}
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
		}
	}
	return int_5;
}
void v_PDC_retile()
{
	char char_1 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
		char char_3 = 1;
		if(1)
		{
			char char_2 = 1;
			char_2 = char_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		char_3 = char_1 + char_3;
	}
}
int v_PDC_set_blink( float parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = long_1 * long_1;
	double_2 = double_1 + double_1;
	short_2 = short_1 + short_2;
	double_3 = double_1 + double_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	return int_1;
}
float v__set_80x25()
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char_1 = char_1 * char_1;
	int_3 = int_1 * int_2;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_1;
	float_1 = float_2;
	float_2 = float_2 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_2;
	return float_3;
}
int v_PDC_resize_screen( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float_1 = v__set_font(int_1);

	long_3 = long_1 * long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "!") < 0)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_2 = v_PDC_get_columns();

			float_1 = float_1;
			float_1 = v__set_80x25();

			int_2 = v__fit_console_window(char_1,int_1);

			int_1 = int_3 + int_2;
		}
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "@Y") > 0)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int_2 = v_PDC_get_rows();

			v_PDC_retile();

			double_3 = double_1 + double_2;
			int_3 = v_PDC_set_blink(float_2);

			int_4 = v_XCursesInstructAndWait(int_3,-1 );

			int_4 = int_4 * int_4;
		}
	}
	return int_5;
}
int v_resize_term( int parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	int_2 = int_2 + int_3;
	int_4 = int_4;
	if(1)
	{
	}
	double_1 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_2;
	char controller4vul_2023[3];
	fgets(controller4vul_2023 ,3 ,stdin);
	if( strcmp( controller4vul_2023, "Vt") < 0)
	{
		int int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char controller4vul_2024[3];
		fgets(controller4vul_2024 ,3 ,stdin);
		if( strcmp( controller4vul_2024, "ao") > 0)
		{
			v_PDC_slk_initialize(uni_para);

		}
		int_5 = int_1 * int_3;
		float_3 = float_1 + float_2;
		short_1 = short_1 * short_1;
		long_1 = long_2;
	}
	int_4 = int_6 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	return int_6;
}
float v__screen_mode_equals( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_2 = float_1 + float_1;
	double_1 = double_1 + double_2;
	return float_1;
}
char v__set_scrn_mode( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int_1 = v_PDC_get_rows();

	double_2 = double_1 * double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_2;
	}
	char_1 = v__get_font();

	int_1 = v_PDC_get_columns();

	int_2 = int_3;
	int_5 = int_3 + int_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	short_1 = v__get_scrn_mode();

	double_2 = double_2 + double_2;
	return char_2;
}
int v_PDC_display_cursor( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	float_1 = float_1 + float_1;
	double_2 = double_1 + double_1;
	long_3 = long_1 + long_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_2 = 1;
		int_1 = v_XC_write_socket(int_2,long_3,int_1);

		short_2 = short_1 + short_2;
		float_2 = float_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_6 = 1;
		double double_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_1 = double_1 * double_1;
		short_5 = short_3 + short_4;
		int_1 = int_3 + int_1;
		v_XCursesExitCursesProcess(int_3,char_1,-1 );

		long_4 = long_2 + long_3;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		short_4 = short_6 + short_6;
		double_4 = double_3 * double_2;
		double_3 = double_2 * double_4;
	}
	if(1)
	{
		double_4 = double_2;
	}
	return int_1;
}
void v_XC_release_line_lock( int parameter_1)
{
	long long_1 = 1;
	long_1 = long_1 + long_1;
}
long v__dummy_function()
{
	long long_1 = 1;
	return long_1;
}
void v_XC_get_line_lock( int parameter_1)
{
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	long_1 = v__dummy_function();

}
short v__highlight( short parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		if(1)
		{
			float_1 = float_1;
		}
		float_2 = float_2 + float_3;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		short_1 = short_1;
		if(1)
		{
			double_3 = double_2 + double_2;
		}
		if(1)
		{
			double_1 = double_3 + double_2;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		if(1)
		{
			float_2 = float_1 * float_2;
		}
		int_1 = int_1 * int_2;
		if(1)
		{
			double double_5 = 1;
			double_4 = double_4 * double_5;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			char_1 = char_1 * char_2;
			int_2 = int_3;
			int_2 = int_1 + int_4;
		}
		double_4 = double_6 + double_7;
	}
	return short_1;
}
int v_PDC_pair_content( short parameter_1,short parameter_2,short parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 985)
	{
		vul_var = vul_var + 1;
	}
	free(vul_var);
	int_2 = int_1 * int_1;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
char v__set_attr( long parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_6 = 1;
	char_2 = char_1 + char_1;
	char controller4vul_2032[2];
	fgets(controller4vul_2032 ,2 ,stdin);
	if( strcmp( controller4vul_2032, "?") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		char char_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_1 = long_2;
		if(1)
		{
		}
		int_1 = int_2;
		unsigned_int_1 = unsigned_int_2;
		short_2 = short_1 * short_1;
		if(1)
		{
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char_3 = char_1 + char_2;
			double_1 = double_2;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			char char_4 = 1;
			char_5 = char_3 + char_4;
			int_1 = int_1 * int_1;
		}
		char controller4vul_2033[2];
		fgets(controller4vul_2033 ,2 ,stdin);
		if( strcmp( controller4vul_2033, "m") > 0)
		{
			long long_3 = 1;
			if(1)
			{
				double_1 = double_1 + double_1;
			}
			char controller4vul_2034[2];
			fgets(controller4vul_2034 ,2 ,stdin);
			if( strcmp( controller4vul_2034, "3") > 0)
			{
				char controller4vul_2035[2];
				fgets(controller4vul_2035 ,2 ,stdin);
				if( strcmp( controller4vul_2035, "m") > 0)
				{
					double double_3 = 1;
					double double_4 = 1;
					int_2 = v_PDC_pair_content(short_2,short_1,short_2,uni_para);

					double_1 = double_3 + double_4;
				}
				char_5 = char_6 + char_2;
			}
			long_3 = long_2 + long_2;
		}
		float_2 = float_1 + float_1;
	}
	return char_6;
}
void v_PDC_update_rects()
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_2;
	}
}
void v_PDC_transform_line( int parameter_1,int parameter_2,int parameter_3,long parameter_4,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = v__set_attr(long_1,uni_para);

	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
}
void v_PDC_gotoyx( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	long long_2 = 1;
	char_1 = v__set_attr(long_1,-1 );

	int_1 = v_PDC_display_cursor(int_1,int_2,int_3,int_4,int_2);

	double_1 = double_1 * double_2;
	v_PDC_update_rects();

	short_2 = short_1 * short_2;
	int_2 = int_3 + int_1;
	float_1 = float_1 + float_2;
	double_3 = double_2 * double_1;
	int_1 = int_3;
	v_PDC_transform_line(int_1,int_1,int_5,long_2,-1 );

	double_2 = double_2;
}
int v_PDC_curs_set( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_2;
	double_3 = double_2 + double_1;
	short_2 = short_1 + short_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_PDC_display_cursor(int_1,int_2,int_2,int_2,int_3);

	short_2 = short_2 * short_2;
	int_2 = int_1;
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_4 + double_1;
	int_1 = int_2 * int_1;
	double_1 = double_3;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	v_PDC_gotoyx(int_4,int_5);

	short_1 = short_3 * short_4;
	short_1 = short_1 + short_3;
	char_1 = char_1 * char_1;
	return int_1;
}
int v_curs_set( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int_1 = v_PDC_curs_set(int_1);

	v_PDC_gotoyx(int_1,int_2);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	char_1 = char_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	return int_1;
}
float v__set_font( int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int_1 = v_curs_set(int_1);

	float_2 = float_1 + float_1;
	int_3 = int_2 + int_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "&") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1 * double_1;
		if(1)
		{
			char char_1 = 1;
			char_2 = char_1 + char_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1;
	}
	return float_2;
	char_2 = v__get_font();

}
void v_PDC_restore_screen_mode( int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		short_1 = v__get_scrn_mode();

		float_1 = v__screen_mode_equals(char_1);

		long_1 = long_1 + long_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			char_2 = v__get_font();

			char_3 = v__set_scrn_mode(int_1);

			int_1 = v_PDC_get_rows();

			unsigned_int_3 = unsigned_int_2;
		}
	}
	float_1 = v__set_font(int_2);

	int_3 = v_PDC_get_columns();

}
void v_PDC_set_keyboard_binary( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
}
int v_raw()
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	v_PDC_set_keyboard_binary(char_1);

	int_1 = int_1 * int_1;
	double_1 = double_1;
	char_2 = char_1;
	return int_1;
}
long v__restore_mode( int parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int_1 = v_resize_term(int_1,int_2,uni_para);

	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int_2 = int_1 * int_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		double_1 = double_1 + double_1;
		if(1)
		{
			double_4 = double_2 + double_3;
		}
		double_1 = double_5 + double_4;
		double_3 = double_2 * double_1;
	}
	int_2 = int_2 * int_3;
	return long_1;
}
int v_reset_shell_mode(int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_1 = v__restore_mode(int_1,uni_para);

	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 + char_2;
	return int_1;
}
void v_PDC_scr_close(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_3 = double_1 + double_2;
	float_3 = float_1 + float_2;
	int_3 = int_1 + int_2;
	if(1)
	{
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		long_1 = long_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_3 = int_3 + int_2;
		float_3 = float_2 * float_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		short_1 = short_1 + short_1;
		int_2 = int_3 * int_1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_2 = char_1 + char_1;
			unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		}
		double_1 = double_3 * double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_3 = long_4;
		}
		int_3 = int_3;
		double_1 = double_1 + double_3;
		long_4 = long_2 + long_1;
		short_3 = short_2 + short_3;
	}
	char controller4vul_2021[2];
	fgets(controller4vul_2021 ,2 ,stdin);
	if( strcmp( controller4vul_2021, ">") < 0)
	{
		unsigned int unsigned_int_6 = 1;
		int_5 = int_3 * int_4;
		char controller4vul_2022[2];
		fgets(controller4vul_2022 ,2 ,stdin);
		if( strcmp( controller4vul_2022, "b") > 0)
		{
			float float_4 = 1;
			int_2 = v_reset_shell_mode(uni_para);

			int_2 = int_1;
			char_2 = char_2 + char_1;
			float_4 = float_4 * float_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int_2 = int_5 * int_4;
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_5;
		}
		unsigned_int_6 = unsigned_int_4;
		long_2 = long_2 + long_4;
	}
	if(1)
	{
		double_3 = double_2;
		int_1 = int_3 * int_5;
		int_4 = int_3 * int_5;
		long_2 = long_4;
	}
	if(1)
	{
		int int_6 = 1;
		int int_7 = 1;
		double double_4 = 1;
		int_7 = int_6 * int_3;
		double_4 = double_1;
		int_6 = int_3 + int_6;
	}
}
void v_PDC_save_screen_mode( int parameter_1)
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_1 = long_1 * long_2;
	}
}
double v__save_mode( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	v_PDC_save_screen_mode(int_1);

	int_2 = int_1 + int_1;
	char_3 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return double_1;
}
int v_def_prog_mode()
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_1 = v__save_mode(int_1);

	short_3 = short_1 + short_2;
	int_4 = int_2 * int_3;
	return int_3;
}
int v_endwin(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_PDC_scr_close(uni_para);

	int_2 = int_1 + int_2;
	long_2 = long_1 + long_1;
	long_3 = long_1 + long_3;
	short_1 = short_2;
	return int_1;
}
void v_XCursesExitCursesProcess( int parameter_1,char parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_endwin(uni_para);

	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
}
int v_XC_write_socket( int parameter_1,long parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long_2 = long_1 + long_2;
	long_1 = long_1 + long_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double_3 = double_1 * double_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 * int_2;
			double_3 = double_1 * double_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			double double_4 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			double_2 = double_4;
		}
		unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
	}
	return int_3;
}
int v_XC_write_display_socket_int( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	return int_1;
	int_2 = v_XC_write_socket(int_3,long_1,int_3);

}
int v_XCursesInstruct( int parameter_1,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_1;
	char controller4vul_2020[2];
	fgets(controller4vul_2020 ,2 ,stdin);
	if( strcmp( controller4vul_2020, "*") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_XCursesExitCursesProcess(int_1,char_1,uni_para);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return int_1;
}
int v_XCursesInstructAndWait( int parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	char controller4vul_2019[2];
	fgets(controller4vul_2019 ,2 ,stdin);
	if( strcmp( controller4vul_2019, "1") > 0)
	{
		int_2 = v_XCursesInstruct(int_3,uni_para);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	return int_1;
}
void v__find_console_handle()
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 + float_2;
	char_3 = char_1 * char_2;
	int_1 = int_1 + int_2;
	double_2 = double_1 + double_2;
}
void v__init_console_info()
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1;
	double_1 = double_1;
	int_2 = int_1 * int_2;
	long_1 = long_2;
	int_2 = int_2 + int_3;
	int_2 = int_3 * int_3;
	double_2 = double_1 + double_1;
	double_1 = double_2 * double_2;
	double_2 = double_2;
	int_2 = int_2 + int_3;
	int_4 = int_4 + int_2;
	double_3 = double_2 * double_2;
	char_1 = char_1 * char_2;
	int_3 = int_5 * int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_4 = long_1 * long_3;
	short_1 = short_1;
	short_2 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_3 = double_1;
		short_1 = short_3 + short_2;
	}
	int_2 = int_6;
	char_1 = char_2 * char_2;
	unsigned_int_1 = unsigned_int_3;
	v__find_console_handle();

	double_1 = double_4 + double_4;
	int_2 = int_2 * int_5;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
}
float v__egapal( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	short_1 = short_1 * short_1;
	float_1 = float_2;
	return float_3;
}
int v_PDC_color_content( short parameter_1,short parameter_2,short parameter_3,short parameter_4,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = v_XCursesInstructAndWait(int_1,uni_para);

	long_2 = long_1 + long_1;
	float_2 = float_1 * float_1;
	double_1 = double_1 + double_2;
	int_2 = int_2 + int_2;
	int_2 = int_1 * int_2;
	char_1 = char_2;
	long_1 = long_2 * long_2;
	return int_2;
}
void v_PDC_get_keyboard_info()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_2 = short_1 * short_1;
	long_1 = long_1 * long_2;
}
int v_PDC_get_columns()
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
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_2;
	double_3 = double_1 + double_2;
	double_1 = double_1 + double_3;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	float_2 = float_2 + float_2;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3;
	}
	char_2 = char_1 * char_2;
	return int_1;
}
short v__get_scrn_mode()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	return short_1;
}
int v_PDC_get_rows()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_3 = double_1 + double_2;
	float_1 = float_1 + float_1;
	char_1 = char_1;
	return int_1;
}
char v__get_font()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	char_3 = char_1 * char_2;
	double_3 = double_1 * double_2;
	char_1 = char_2 * char_1;
	long_1 = long_2;
	double_3 = double_3 + double_2;
	return char_4;
}
long v__sanity_check( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	char_1 = v__get_font();

	int_1 = v_PDC_get_rows();

	float_2 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
}
int v__query_adapter_type()
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_2;
	long_1 = v__sanity_check(int_2);

	int_2 = int_1 + int_2;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	short_1 = short_1;
	long_4 = long_2 * long_3;
	double_2 = double_1;
	short_2 = short_1 * short_1;
	double_2 = double_3 * double_2;
	double_3 = double_1 + double_4;
	return int_3;
}
int v_PDC_scr_open( int parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	short short_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	long_1 = long_1 + long_1;
	int_3 = int_1 * int_2;
	char controller4vul_2018[2];
	fgets(controller4vul_2018 ,2 ,stdin);
	if( strcmp( controller4vul_2018, "Y") < 0)
	{
		int_2 = v_PDC_color_content(short_1,short_2,short_2,short_2,uni_para);

		double_1 = double_1 * double_2;
	}
	double_1 = double_2 + double_1;
	int_1 = int_1 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3;
	}
	long_3 = long_2 * long_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	int_1 = int_3;
	long_2 = long_2 + long_1;
	int_4 = int_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_2 = long_4 * long_4;
		long_4 = long_1 * long_2;
	}
	short_3 = short_2 + short_1;
	long_4 = long_1;
	return int_4;
}
char v_Xinitscr( int parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_3 = 1;
	int int_7 = 1;
	short short_5 = 1;
	int int_8 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_2;
	char controller4vul_2017[3];
	fgets(controller4vul_2017 ,3 ,stdin);
	if( strcmp( controller4vul_2017, "4^") < 0)
	{
		int_1 = v_PDC_scr_open(int_2,char_1,uni_para);

	}
	if(1)
	{
		long long_2 = 1;
		int_4 = int_1 + int_3;
		long_3 = long_1 + long_2;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	double_3 = double_1 * double_2;
	float_2 = float_1 * float_2;
	double_2 = double_1 * double_3;
	float_1 = float_1 * float_2;
	int_5 = int_1 + int_2;
	double_3 = double_4 + double_5;
	double_4 = double_2 + double_4;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_5;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	int_3 = int_2 + int_5;
	double_5 = double_4;
	float_4 = float_1 * float_3;
	double_5 = double_6 + double_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	float_4 = float_4 * float_4;
	double_6 = double_1 * double_2;
	if(1)
	{
		double_2 = double_4 + double_7;
		double_6 = double_1 + double_6;
	}
	if(1)
	{
		short_2 = short_1 * short_2;
		double_5 = double_5 + double_4;
	}
	if(1)
	{
		char_2 = char_1 + char_1;
		long_4 = long_3;
	}
	float_3 = float_3 * float_2;
	unsigned_int_3 = unsigned_int_7 * unsigned_int_1;
	float_4 = float_3;
	int_6 = int_6 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_5 = int_4 + int_2;
		}
		if(1)
		{
			double_5 = double_4 + double_4;
		}
		double_4 = double_3 * double_7;
		unsigned_int_8 = unsigned_int_5 + unsigned_int_8;
	}
	unsigned_int_2 = unsigned_int_9 + unsigned_int_2;
	char controller_7[3];
	fgets(controller_7 ,3 ,stdin);
	if( strcmp( controller_7, "P>") < 0)
	{
		long_3 = long_1;
		char_2 = char_2 * char_2;
	}
	unsigned_int_6 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		short short_4 = 1;
		float_1 = float_3 + float_3;
		long_5 = long_4;
		long_3 = long_6;
		short_4 = short_2 + short_3;
	}
	if(1)
	{
		char_2 = char_2 * char_1;
	}
	unsigned_int_9 = unsigned_int_4;
	int_1 = int_6 * int_3;
	int_1 = int_2 * int_7;
	unsigned_int_8 = unsigned_int_5 + unsigned_int_8;
	short_5 = short_3 * short_1;
	unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	unsigned_int_9 = unsigned_int_1 * unsigned_int_3;
	int_2 = int_1 + int_8;
	int_1 = int_7 * int_6;
	return char_1;
}
void v_initscr(int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char_1 = v_Xinitscr(int_1,char_1,uni_para);

	char_1 = char_1 + char_2;
}
int main()
{
	int uni_para =985;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_6 = 1;
	long_1 = long_1 + long_2;
	short_1 = short_1 + short_1;
	char_1 = char_2;
	char_2 = char_1;
	char controller4vul_2016[3];
	fgets(controller4vul_2016 ,3 ,stdin);
	if( strcmp( controller4vul_2016, "+0") < 0)
	{
		v_initscr(uni_para);

		char_1 = char_2;
	}
	double_2 = double_1 + double_1;
	char_2 = char_3 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_3 + long_1;
	int_1 = int_1 + int_2;
	double_1 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		int_3 = int_2 + int_3;
		char_3 = char_2 * char_1;
		float_3 = float_1 * float_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_3;
		short_2 = short_2 + short_2;
	}
	float_1 = float_4 * float_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	char_2 = char_1 * char_3;
	int_3 = int_1;
	float_4 = float_5 + float_2;
	double_1 = double_3 * double_4;
	short_1 = short_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	float_2 = float_1 * float_3;
	double_2 = double_2 + double_2;
	float_5 = float_1 + float_6;
	return int_1;
}

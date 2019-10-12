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

int v_insert_tab( int parameter_1,int parameter_2);
int v_linstr( char parameter_1);
int v_lnewline();
int v_cinsert();
int v_insert_newline( int parameter_1,int parameter_2);
int v_getcmd();
void v_savematch();
float v_biteq( int parameter_1,char parameter_2);
unsigned int v_mceq( int parameter_1,char parameter_2);
void v_amatch( short parameter_1,int parameter_2,float parameter_3,int parameter_4);
int v_mcscanner( unsigned int parameter_1,int parameter_2,int parameter_3);
unsigned int v_setbit( int parameter_1,char parameter_2);
float v_clearbits();
unsigned int v_cclmake( char parameter_1,short parameter_2);
void v_mcclear();
void v_mcstr();
int v_backhunt( int parameter_1,int parameter_2);
int v_forwhunt( int parameter_1,int parameter_2);
float v_getgoal( int parameter_1);
int v_backline( int parameter_1,int parameter_2);
int v_forwline( int parameter_1,int parameter_2);
int v_gotobob( int parameter_1,int parameter_2);
int v_gotoeob( int parameter_1,int parameter_2);
int v_gotoline( int parameter_1,int parameter_2);
void v_cknewwindow();
int v_swbuffer();
void v_vttidy();
int v_lockrel();
int v_anycb();
int v_quit( int parameter_1,int parameter_2);
int v_quickexit( int parameter_1,int parameter_2);
short v_emergencyexit( int parameter_1);
int v_zotbuf( double parameter_1);
int v_docmd( char parameter_1);
void v_mlforce( char parameter_1);
void v_freewhile( unsigned int parameter_1);
long v_nextch( double parameter_1,int parameter_2,int parameter_3);
int v_scanner( int parameter_1,int parameter_2,int parameter_3);
int v_dobuf( double parameter_1);
int v_ffgetline();
int v_ffputline( char parameter_1,int parameter_2);
int v_ffwopen( char parameter_1);
int v_writeout( char parameter_1,int uni_para);
int v_filesave( int parameter_1,int parameter_2,int uni_para);
int v_upscreen( int parameter_1,int parameter_2);
int v_fmatch( int parameter_1);
int v_inspound();
void v_kdelete();
int v_forwdel( int parameter_1,int parameter_2);
int v_backdel( int parameter_1,int parameter_2);
int v_boundry( double parameter_1,int parameter_2,int parameter_3);
double v_is_beginning_utf8( long parameter_1);
int v_forwchar( int parameter_1,int parameter_2);
int v_backchar( int parameter_1,int parameter_2);
float v_linsert_byte( int parameter_1,int parameter_2);
long v_reverse_string( char parameter_1,char parameter_2);
int v_unicode_to_utf8( int parameter_1,char parameter_2);
int v_linsert( int parameter_1,int parameter_2);
int v_insbrace( int parameter_1,int parameter_2);
int v_lgetchar( int parameter_1);
int v_kinsert( int parameter_1);
int v_ldelnewline();
void v_lchange( int parameter_1);
int v_rdonly();
int v_ldelete( long parameter_1,int parameter_2);
int v_ldelchar( long parameter_1,int parameter_2);
int v_execute( int parameter_1,int parameter_2,int parameter_3,int uni_para);
void v_lfree( double parameter_1);
int v_mlyesno( char parameter_1);
int v_bclear( float parameter_1);
float v_mod95( int parameter_1);
void v_myencrypt( char parameter_1,float parameter_2);
double v_xlat( char parameter_1,char parameter_2,char parameter_3);
int v_fexist( char parameter_1);
unsigned int v_stock( char parameter_1);
long v_getfname();
float v_transbind( char parameter_1);
int v_eq( char parameter_1,int parameter_2);
int v_sindex( char parameter_1,char parameter_2);
int v_ernd();
void v_mkupper( char parameter_1);
int v_stol( char parameter_1);
int v_macarg( char parameter_1);
float v_mklower( char parameter_1);
char v_gtfun( char parameter_1);
short v_getctext();
void v_getkill();
int v_getwpos();
float v_ltos( int parameter_1);
int v_getcline();
int v_getccol( int parameter_1);
int v_itoa( int parameter_1);
unsigned int v_gtenv( char parameter_1);
unsigned int v_gtusr( char parameter_1);
int v_ctoec( int parameter_1);
int v_gettyp( char parameter_1);
long v_getval( char parameter_1);
float v_token( char parameter_1,char parameter_2,int parameter_3);
int v_xmkstemp( char parameter_1);
void v_outstring( char parameter_1);
int v_ctrlg( int parameter_1,int parameter_2);
int v_ectoc( int parameter_1);
float v_newscreensize( int parameter_1,int parameter_2);
void v_scwrite( int parameter_1,char parameter_2,int parameter_3,int parameter_4);
char v_updateline( int parameter_1,unsigned int parameter_2,float parameter_3);
char v_scrscroll( int parameter_1,int parameter_2,int parameter_3);
int v_abs( int parameter_1);
unsigned int v_endofline( short parameter_1,int parameter_2);
double v_texttest( int parameter_1,int parameter_2);
long v_scrolls( int parameter_1);
int v_updupd( int parameter_1);
void v_updgar();
void v_upddex(int uni_para);
int v_updext();
void v_updpos();
char v_modeline( long parameter_1);
double v_updall( short parameter_1);
float v_vteeol();
long v_vtputc( int parameter_1);
double v_utf8_to_unicode( char parameter_1,char parameter_2,long parameter_3,short parameter_4,int uni_para);
double v_show_line( unsigned int parameter_1,int uni_para);
void v_vtmove( int parameter_1,int parameter_2);
unsigned int v_updone();
double v_reframe( int parameter_1);
int v_typahead();
int v_update( int parameter_1,int uni_para);
int v_tgetc(int uni_para);
int v_get1key(int uni_para);
int v_getstring( char parameter_1,char parameter_2,int parameter_3,int parameter_4,int uni_para);
int v_nextarg( char parameter_1,char parameter_2,int parameter_3,int parameter_4,int uni_para);
int v_mlreply( char parameter_1,char parameter_2,int parameter_3,int uni_para);
int v_set_encryption_key( int parameter_1,int parameter_2,int uni_para);
float v_resetkey(int uni_para);
int v_lockchk( char parameter_1);
int v_readin( char parameter_1,int parameter_2,int uni_para);
void v_unqname( char parameter_1);
void v_makename( char parameter_1,char parameter_2);
int v_dofile( char parameter_1,int uni_para);
int v_ffclose();
int v_ffropen( char parameter_1);
int v_flook( char parameter_1,int parameter_2);
int v_startup( char parameter_1,int uni_para);
void v_varinit();
float v_mlputf( int parameter_1);
void v_mlputs( char parameter_1);
void v_mlputli( long parameter_1,int parameter_2);
float v_mlputi( int parameter_1,int parameter_2);
void v_mlerase();
void v_movecursor( int parameter_1,int parameter_2);
void v_mlwrite( long parameter_1,long parameter_2);
double v_lalloc( int parameter_1);
unsigned int v_bfind( char parameter_1,int parameter_2,int parameter_3);
void v_edinit( char parameter_1);
void v_report( unsigned int parameter_1,double parameter_2,long parameter_3);
void v_die( short parameter_1,float parameter_2);
unsigned int v_xmalloc( short parameter_1);
void v_vtinit();
void v_version();
void v_usage( int parameter_1);
void v_sizesignal( int parameter_1);
int v_insert_tab( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
	}
	return int_1;
	int_1 = v_linsert(int_2,int_3);

	int_4 = v_getccol(int_3);

}
int v_linstr( char parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "U;") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		int_1 = v_lnewline();

		v_mlwrite(long_1,long_2);

		long_1 = long_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_1 = int_2 * int_2;
		int_1 = v_linsert(int_3,int_1);

		float_1 = float_2;
	}
	return int_4;
}
int v_lnewline()
{
	int int_1 = 1;
	double double_1 = 1;
	return int_1;
	int_1 = v_rdonly();

	v_lchange(int_1);

	double_1 = v_lalloc(int_1);

}
int v_cinsert()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") > 0)
	{
	}
	int_1 = v_lnewline();

	int_1 = v_insert_tab(int_2,int_3);

	char_2 = char_1 + char_1;
	return int_4;
	int_4 = v_linstr(char_2);

}
int v_insert_newline( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int_1 = v_getccol(int_1);

	double_2 = double_1 + double_2;
	int_1 = v_execute(int_2,int_3,int_1,-1 );

	char_2 = char_1 + char_1;
	return int_2;
	int_2 = v_rdonly();

	int_2 = v_cinsert();

	int_4 = v_lnewline();

}
int v_getcmd()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int_1 = v_get1key(-1 );

	unsigned_int_1 = unsigned_int_1;
	return int_2;
}
void v_savematch()
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long_1 = v_nextch(double_1,int_1,int_2);

	double_3 = double_2 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_2;
	char_1 = char_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	char_3 = char_3 + char_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		char char_4 = 1;
		double_3 = double_2 + double_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_2 = 1;
			long_2 = long_2;
		}
		char_3 = char_2 * char_4;
	}
}
float v_biteq( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "6@") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ")") < 0)
	{
	}
	float_1 = float_1 + float_1;
	return float_1;
}
unsigned int v_mceq( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float_1 = v_biteq(int_1,char_1);

	long_2 = long_1 + long_1;
	if(1)
	{
		float float_2 = 1;
		int_1 = v_eq(char_1,int_1);

		v_mlwrite(long_2,long_1);

		float_2 = float_2 + float_3;
	}
	double_1 = double_1 * double_1;
	char_1 = char_2 + char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
	}
	double_2 = double_1 + double_2;
	float_3 = float_3 * float_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_2;
	return unsigned_int_2;
}
void v_amatch( short parameter_1,int parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	long_2 = long_1 + long_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1;
	float_2 = float_1 + float_1;
	long_2 = v_nextch(double_3,int_3,int_3);

	long_3 = long_4;
	if(1)
	{
		unsigned_int_1 = v_mceq(int_4,char_1);

		int_1 = int_4 * int_3;
	}
}
int v_mcscanner( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return int_1;
	int_2 = v_boundry(double_1,int_1,int_2);

	v_amatch(short_1,int_3,float_1,int_4);

	long_1 = v_nextch(double_1,int_1,int_3);

}
unsigned int v_setbit( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	return unsigned_int_3;
}
float v_clearbits()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	long_1 = long_1 * long_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "N") > 0)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_1 = float_1 * float_1;
		}
	}
	return float_1;
}
unsigned int v_cclmake( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	if(1)
	{
		int int_3 = 1;
		v_mlwrite(long_1,long_1);

		int_3 = int_1 * int_3;
	}
	double_3 = double_1 * double_2;
	unsigned_int_1 = v_setbit(int_2,char_1);

	double_1 = double_4 + double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	return unsigned_int_2;
	float_1 = v_clearbits();

}
void v_mcclear()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
	}
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_1 * double_1;
}
void v_mcstr()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int_3 = int_1 * int_2;
	v_mcclear();

	int_4 = int_4 + int_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	int_5 = int_5 + int_3;
	unsigned_int_4 = v_cclmake(char_1,short_2);

	int_1 = int_5 * int_3;
	double_1 = double_1;
	char_2 = char_2 * char_1;
	float_2 = float_2;
}
int v_backhunt( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	int_1 = v_forwhunt(int_1,int_2);

	v_mlwrite(long_1,long_2);

	v_mcstr();

	v_savematch();

	double_3 = double_1 * double_2;
	return int_3;
	int_4 = v_mcscanner(unsigned_int_1,int_3,int_3);

	int_5 = v_scanner(int_2,int_3,int_4);

}
int v_forwhunt( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = v_mcscanner(unsigned_int_1,int_1,int_1);

	long_3 = long_1 * long_2;
	int_1 = v_backhunt(int_2,int_2);

	v_savematch();

	float_2 = float_1 * float_1;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "{") > 0)
		{
			int_2 = v_scanner(int_1,int_2,int_2);

			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
			v_mlwrite(long_3,long_2);

			unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		}
	}
	char_1 = char_1 + char_2;
	return int_2;
	v_mcstr();

}
float v_getgoal( int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	if(1)
	{
		double_1 = double_1;
		float_1 = float_1 + float_2;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double_1 = v_utf8_to_unicode(char_1,char_1,long_1,short_1,-1 );

		float_1 = float_1 * float_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		char_2 = char_1;
		long_2 = long_2 * long_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_3 = 1;
		int_1 = int_1 * int_2;
		float_3 = float_2 + float_1;
	}
	char_2 = char_2 * char_1;
	unsigned_int_3 = unsigned_int_1;
	double_2 = double_2 * double_2;
	double_2 = double_1;
	char_4 = char_1 + char_3;
	return float_1;
}
int v_backline( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float_1 = float_1;
	char_3 = char_1 + char_2;
	int_1 = v_forwline(int_2,int_2);

	float_1 = v_getgoal(int_3);

	short_2 = short_1 * short_2;
	int_1 = v_getccol(int_4);

	char_5 = char_4 * char_4;
	return int_3;
}
int v_forwline( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	int_1 = int_1;
	int_1 = v_backline(int_1,int_1);

	float_1 = v_getgoal(int_2);

	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_3 + int_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_3 = float_2 + float_1;
	long_2 = long_1 + long_1;
	float_5 = float_4 + float_2;
	int_5 = v_getccol(int_5);

	int_1 = int_3;
	return int_5;
}
int v_gotobob( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
int v_gotoeob( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
	return int_1;
}
int v_gotoline( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int_1 = v_forwline(int_1,int_1);

	float_1 = float_1;
	int_2 = v_gotoeob(int_2,int_2);

	double_2 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			char char_3 = 1;
			int_3 = v_mlreply(char_1,char_2,int_4,-1 );

			char_3 = char_2;
		}
		int_1 = v_gotobob(int_2,int_4);

		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	return int_1;
	v_mlwrite(long_1,long_1);

}
void v_cknewwindow()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int_1 = v_execute(int_1,int_2,int_3,-1 );

	short_1 = short_1;
}
int v_swbuffer()
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	v_cknewwindow();

	long_1 = long_1 + long_1;
	return int_1;
	int_1 = v_readin(char_1,int_1,-1 );

}
void v_vttidy()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v_mlerase();

	int_3 = int_1 + int_2;
	v_movecursor(int_2,int_3);

	int_4 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_1;
	float_1 = float_1 + float_2;
	long_2 = long_1 + long_2;
}
int v_lockrel()
{
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1 + int_1;
		double_1 = double_1 + double_2;
	}
	return int_3;
}
int v_anycb()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	float_2 = float_1 + float_2;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	char_1 = char_2 + char_2;
	return int_1;
}
int v_quit( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	v_vttidy();

	double_1 = double_2;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			if(1)
			{
				int int_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				int_1 = int_1 * int_2;
				double_5 = double_3 * double_4;
				unsigned_int_1 = unsigned_int_1;
				int_3 = int_1 * int_3;
			}
			int_1 = v_anycb();

			int_1 = v_mlyesno(char_1);

			float_1 = float_1 * float_2;
		}
		if(1)
		{
			int int_4 = 1;
			int_3 = int_4 * int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			v_mlwrite(long_1,long_1);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	int_1 = v_lockrel();

	unsigned_int_1 = unsigned_int_3;
	return int_3;
}
int v_quickexit( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	v_mlwrite(long_1,long_2);

	float_1 = float_1;
	int_1 = v_quit(int_1,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		char_1 = char_1;
		int_2 = v_filesave(int_1,int_1,-1 );

		double_1 = double_1;
	}
	return int_3;
}
short v_emergencyexit( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int_1 = v_quickexit(int_1,int_1);

	int_1 = v_quit(int_2,int_1);

	double_1 = double_1;
	long_3 = long_1 + long_2;
	return short_1;
}
int v_zotbuf( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	v_mlwrite(long_1,long_2);

	int_1 = int_1 * int_2;
	float_2 = float_1 * float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "r.") > 0)
	{
	}
	float_2 = float_2 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_bclear(float_2);

	int_3 = int_3 * int_2;
	int_2 = int_1;
	char_1 = char_1 + char_1;
	return int_4;
}
int v_docmd( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	int_1 = int_1 * int_1;
	float_2 = float_1 * float_1;
	short_3 = short_1 + short_2;
	long_1 = v_getval(char_1);

	unsigned_int_2 = unsigned_int_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	v_mlwrite(long_3,long_2);

	int_1 = int_2 + int_2;
	int_2 = int_1 * int_3;
	double_2 = double_2 * double_2;
	int_2 = int_2 * int_2;
	char_1 = char_1 + char_2;
	int_4 = v_macarg(char_2);

	int_5 = v_gettyp(char_2);

	long_1 = long_3 * long_3;
	if(1)
	{
		double_3 = double_3 + double_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "X4") < 0)
	{
		int_1 = int_1 * int_4;
		double_2 = double_2;
		double_2 = double_3 * double_2;
		if(1)
		{
			double_1 = double_1 * double_2;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		long_4 = long_3 * long_3;
	}
	unsigned_int_1 = unsigned_int_3;
	double_1 = double_1 + double_1;
	float_1 = float_2 + float_3;
	long_2 = long_1 * long_4;
	int_5 = int_5 * int_4;
	double_1 = double_4 * double_5;
	return int_2;
}
void v_mlforce( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int_1 = int_2;
	v_mlwrite(long_1,long_1);

	int_2 = int_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2 + long_1;
}
void v_freewhile( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ".r") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	v_freewhile(unsigned_int_1);

	double_1 = double_1 + double_2;
}
long v_nextch( double parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	int_1 = int_1 * int_1;
	int_1 = int_1 + int_2;
	short_1 = short_1 * short_2;
	double_2 = double_1 * double_2;
	short_2 = short_3 * short_3;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			int_3 = int_4;
			int_4 = int_3 + int_4;
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
		if(1)
		{
			short short_4 = 1;
			float_1 = float_1 + float_1;
			short_3 = short_2 * short_4;
			float_2 = float_2;
		}
		if(1)
		{
			double_1 = double_1;
		}
	}
	float_3 = float_1 * float_1;
	float_1 = float_2 + float_3;
	return long_3;
}
int v_scanner( int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int_1 = v_boundry(double_1,int_2,int_2);

	int_2 = v_eq(char_1,int_2);

	char_1 = char_2 + char_1;
	float_1 = float_1 + float_1;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_3;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "}G") < 0)
		{
			char_1 = char_3 * char_2;
		}
	}
	int_4 = int_2 * int_3;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	char_1 = char_3;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3;
	return int_3;
	long_2 = v_nextch(double_3,int_4,int_3);

}
int v_dobuf( double parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_4 = 1;
	int_1 = v_macarg(char_1);

	int_2 = v_docmd(char_2);

	long_1 = long_2;
	v_mlwrite(long_2,long_1);

	int_3 = v_itoa(int_2);

	int_2 = v_get1key(-1 );

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return int_4;
	int_4 = v_scanner(int_3,int_4,int_3);

	v_freewhile(unsigned_int_2);

	v_mlforce(char_3);

	int_1 = v_update(int_4,-1 );

	double_1 = v_lalloc(int_4);

	int_1 = v_stol(char_2);

	float_1 = v_token(char_4,char_2,int_3);

}
int v_ffgetline()
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double_1 = double_1;
	v_mlwrite(long_1,long_1);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
		short_3 = short_2 + short_2;
	}
	float_3 = float_1 * float_2;
	v_myencrypt(char_1,float_1);

	double_2 = double_2 * double_3;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_4 = 1;
		int_2 = int_1 + int_2;
		short_2 = short_3 * short_4;
	}
	return int_3;
}
int v_ffputline( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_4 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	v_mlwrite(long_1,long_2);

	float_1 = float_1 + float_1;
	float_2 = float_2 + float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_3 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		}
	}
	double_1 = double_2;
	v_myencrypt(char_1,float_3);

	float_4 = float_3 + float_2;
	return int_1;
}
int v_ffwopen( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	float_1 = float_2;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_mlwrite(long_1,long_2);

	double_3 = double_2 + double_1;
	return int_1;
}
int v_writeout( char parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	char controller4vul_2041[3];
	fgets(controller4vul_2041 ,3 ,stdin);
	if( strcmp( controller4vul_2041, "bt") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_3 = 1;
		long_2 = long_1 * long_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1 + int_1;
		double_1 = double_1 + double_2;
		if(1)
		{
		}
		float_3 = float_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		long_3 = long_1 * long_1;
		char controller4vul_2042[3];
		fgets(controller4vul_2042 ,3 ,stdin);
		if( strcmp( controller4vul_2042, "bP") < 0)
		{
			double double_4 = 1;
			char_1 = char_2;
			double_4 = double_3 * double_3;
			char controller4vul_2043[3];
			fgets(controller4vul_2043 ,3 ,stdin);
			if( strcmp( controller4vul_2043, "rE") < 0)
			{
				float_3 = v_resetkey(uni_para);

				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
				}
				long_3 = long_3 + long_3;
			}
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				unsigned_int_4 = unsigned_int_6 + unsigned_int_2;
				unsigned_int_8 = unsigned_int_6 + unsigned_int_7;
				float_4 = float_1;
			}
		}
		if(1)
		{
			short short_1 = 1;
			int_1 = int_3 * int_1;
			double_5 = double_2 + double_1;
			if(1)
			{
				double double_6 = 1;
				short_1 = short_2;
				char_1 = char_1 + char_2;
				double_1 = double_6 * double_6;
			}
			if(1)
			{
				short_1 = short_2 + short_3;
				int_1 = int_1 * int_2;
			}
		}
	}
	if(1)
	{
		int int_5 = 1;
		float float_5 = 1;
		int_5 = int_4 + int_4;
		float_4 = float_1 + float_5;
		float_2 = float_5;
		short_2 = short_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char_1 = char_1;
			if(1)
			{
				char_2 = char_2;
			}
			if(1)
			{
				int_3 = int_4 + int_2;
				char_1 = char_1 * char_1;
				unsigned_int_3 = unsigned_int_1;
				float_2 = float_1 + float_4;
				char_2 = char_2 * char_1;
				if(1)
				{
					char_1 = char_2 + char_2;
					double_2 = double_5 * double_3;
				}
				if(1)
				{
					if(1)
					{
						float_1 = float_5 + float_2;
					}
				}
			}
			if(1)
			{
				int int_6 = 1;
				int_5 = int_6 + int_1;
			}
			unsigned_int_3 = unsigned_int_4 * unsigned_int_6;
		}
	}
	return int_4;
}
int v_filesave( int parameter_1,int parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		int int_3 = 1;
		double_2 = double_1 * double_1;
		int_3 = int_1 + int_2;
	}
	char controller4vul_2039[3];
	fgets(controller4vul_2039 ,3 ,stdin);
	if( strcmp( controller4vul_2039, "on") < 0)
	{
		char controller4vul_2040[2];
		fgets(controller4vul_2040 ,2 ,stdin);
		if( strcmp( controller4vul_2040, "h") < 0)
		{
			long long_1 = 1;
			double double_3 = 1;
			int_2 = v_writeout(char_1,uni_para);

			long_1 = long_1 * long_1;
			double_1 = double_3 * double_1;
			double_1 = double_1;
		}
	}
	int_4 = int_4 + int_4;
	int_4 = int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	return int_1;
}
int v_upscreen( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_3 = int_1 + int_2;
	return int_3;
	int_2 = v_update(int_4,-1 );

}
int v_fmatch( int parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	long long_6 = 1;
	int int_6 = 1;
	short short_1 = 1;
	int int_7 = 1;
	short short_3 = 1;
	char_1 = char_1 + char_1;
	double_1 = double_2;
	char_2 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	float_3 = float_3 * float_1;
	char_3 = char_2 * char_1;
	char_3 = char_1 * char_2;
	double_3 = double_3 * double_2;
	long_2 = long_1 * long_2;
	long_3 = long_2 + long_2;
	char_5 = char_2 + char_4;
	if(1)
	{
		double_2 = double_1 * double_3;
	}
	int_1 = v_forwchar(int_2,int_1);

	double_2 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_3 = v_backchar(int_4,int_1);

		double_3 = double_3 + double_4;
		float_1 = float_3 + float_2;
	}
	if(1)
	{
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			long_5 = long_3 * long_4;
			if(1)
			{
				char_5 = char_1 * char_1;
				long_4 = long_1 + long_2;
			}
		}
		if(1)
		{
			int_1 = int_4 * int_4;
		}
		if(1)
		{
			double_1 = double_5 * double_5;
			if(1)
			{
				int_5 = int_4 + int_5;
				int_3 = int_1 + int_1;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
			int_5 = int_5 * int_5;
			int_4 = int_3 + int_5;
			float_4 = float_1 * float_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
			double_7 = double_2 * double_6;
			double_7 = double_3 + double_8;
		}
		float_1 = float_3;
	}
	if(1)
	{
		double_9 = double_7 + double_8;
	}
	long_1 = long_6 * long_2;
	if(1)
	{
		int_6 = v_update(int_4,-1 );

		int_3 = int_4 + int_2;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_4 * unsigned_int_3;
			int_5 = int_1;
		}
	}
	double_1 = double_5 + double_5;
	if(1)
	{
		double_5 = double_2 * double_2;
		if(1)
		{
			char char_6 = 1;
			double_6 = double_4 + double_5;
			char_6 = char_4 * char_3;
			int_1 = int_4 * int_4;
		}
	}
	double_9 = double_6 + double_7;
	short_1 = short_1 + short_1;
	int_4 = int_7 + int_4;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_3;
	}
	char_1 = char_1 + char_2;
	if(1)
	{
		float float_5 = 1;
		float_5 = float_5 * float_2;
		if(1)
		{
			short_3 = short_3 * short_3;
			int_5 = int_2;
		}
	}
	if(1)
	{
		float_4 = float_2;
		int_3 = int_7 * int_5;
		if(1)
		{
			double_4 = double_3 + double_4;
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_3 = unsigned_int_7 + unsigned_int_2;
		}
	}
	if(1)
	{
		double_1 = double_6 * double_4;
	}
	return int_1;
}
int v_inspound()
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	char char_3 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		double_2 = double_1 + double_2;
		int_1 = int_1 * int_1;
	}
	int_1 = v_linsert(int_1,int_1);

	char_1 = char_1 + char_2;
	short_3 = short_1 * short_2;
	float_1 = float_2 * float_3;
	double_2 = double_1 * double_1;
	if(1)
	{
		double_2 = double_1 + double_2;
		short_3 = short_1;
	}
	short_3 = short_4 * short_5;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		long_2 = long_1 + long_1;
		int_2 = v_getccol(int_3);

		double_3 = double_2 + double_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_4 = v_backdel(int_1,int_2);

	char_1 = char_2 + char_3;
	short_2 = short_5 + short_3;
	return int_4;
}
void v_kdelete()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	double_1 = double_1 * double_2;
	double_3 = double_1;
	int_2 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_3 + int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		double double_4 = 1;
		int int_4 = 1;
		double_3 = double_1 * double_2;
		double_2 = double_4;
		if(1)
		{
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				float_3 = float_1 + float_2;
			}
			if(1)
			{
				short short_1 = 1;
				short_3 = short_1 + short_2;
			}
		}
		if(1)
		{
			double_3 = double_2 + double_1;
			double_1 = double_1 * double_1;
			int_1 = int_4 * int_3;
			if(1)
			{
				int_1 = int_1 + int_2;
			}
		}
		int_4 = int_3 * int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	short_3 = short_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	}
}
int v_forwdel( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			int_1 = v_backdel(int_2,int_2);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		int_1 = v_ldelchar(long_1,int_3);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	return int_1;
	int_2 = v_rdonly();

	v_kdelete();

}
int v_backdel( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int_1 = v_rdonly();

	int_2 = int_1 + int_2;
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
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		int_2 = int_3 * int_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	return int_3;
	int_4 = v_forwdel(int_1,int_2);

	v_kdelete();

	int_2 = v_backchar(int_2,int_2);

	int_2 = v_ldelchar(long_1,int_4);

}
int v_boundry( double parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "ro") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "TE") > 0)
	{
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	return int_1;
}
double v_is_beginning_utf8( long parameter_1)
{
	double double_1 = 1;
	return double_1;
}
int v_forwchar( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return int_1;
	int_1 = v_backchar(int_2,int_3);

	double_1 = v_is_beginning_utf8(long_1);

}
int v_backchar( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	return int_1;
	int_2 = v_forwchar(int_3,int_1);

	double_1 = v_is_beginning_utf8(long_1);

}
float v_linsert_byte( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long_1 = long_1 * long_1;
	int_1 = v_rdonly();

	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		v_lchange(int_2);

		char_1 = char_1 * char_2;
		if(1)
		{
		}
	}
	return float_1;
	v_mlwrite(long_2,long_2);

	double_1 = v_lalloc(int_3);

}
long v_reverse_string( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	return long_1;
}
int v_unicode_to_utf8( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	double_4 = double_4 + double_3;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_4 = 1;
		float_3 = float_1 * float_2;
		short_2 = short_1 * short_1;
		double_4 = double_4;
		double_6 = double_5 + double_6;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		long_1 = v_reverse_string(char_1,char_2);

		double_1 = double_2 * double_2;
		float_3 = float_4;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		}
	}
	if(1)
	{
	}
	return int_1;
}
int v_linsert( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double_1 = double_2;
	int_1 = v_unicode_to_utf8(int_1,char_1);

	float_1 = v_linsert_byte(int_1,int_1);

	int_1 = int_2 * int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
			}
		}
	}
	return int_1;
}
int v_insbrace( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	return int_1;
	int_1 = v_linsert(int_1,int_2);

	int_3 = v_backchar(int_4,int_5);

	int_2 = v_boundry(double_1,int_2,int_6);

	int_7 = v_forwchar(int_8,int_9);

	int_8 = v_getccol(int_7);

	int_2 = v_backdel(int_1,int_5);

}
int v_lgetchar( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int_1 = int_1 + int_1;
	double_1 = v_utf8_to_unicode(char_1,char_1,long_1,short_1,-1 );

	char_1 = char_2;
	return int_1;
}
int v_kinsert( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		if(1)
		{
		}
		if(1)
		{
			char_2 = char_1 * char_2;
		}
		if(1)
		{
			char_1 = char_2 * char_1;
		}
		double_2 = double_1 * double_1;
		double_2 = double_2 * double_1;
		int_1 = int_1 + int_1;
	}
	float_2 = float_1 * float_2;
	return int_2;
}
int v_ldelnewline()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = v_rdonly();

	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	v_lfree(double_2);

	int_2 = int_2 + int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	double_2 = v_lalloc(int_3);

	short_2 = short_1 * short_2;
	if(1)
	{
		double double_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double_3 = double_1 + double_3;
		int_5 = int_3 + int_4;
	}
	long_1 = long_2;
	return int_2;
}
void v_lchange( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = int_2;
	double_1 = double_1 * double_2;
	short_2 = short_1 * short_1;
	char_3 = char_1 * char_2;
	double_2 = double_1 + double_2;
	int_2 = int_1 + int_1;
	double_1 = double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	double_5 = double_3 + double_4;
	double_3 = double_4 + double_1;
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
		if(1)
		{
			char controller_5[2];
			fgets(controller_5 ,2 ,stdin);
			if( strcmp( controller_5, "E") < 0)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_2 = float_1 + float_2;
			}
		}
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				if(1)
				{
					char char_4 = 1;
					char_2 = char_4 * char_3;
					if(1)
					{
						int int_3 = 1;
						int_2 = int_2 + int_3;
					}
					if(1)
					{
						unsigned int unsigned_int_3 = 1;
						unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
					}
					if(1)
					{
						double double_6 = 1;
						if(1)
						{
							double_3 = double_3 + double_5;
						}
						unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
						double_6 = double_2 + double_6;
					}
				}
			}
		}
	}
}
int v_rdonly()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	v_mlwrite(long_1,long_2);

	double_1 = double_2;
	char_3 = char_1 * char_2;
	return int_1;
}
int v_ldelete( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 * long_1;
	short_1 = short_1 * short_2;
	int_1 = v_ldelnewline();

	long_1 = long_2 * long_2;
	v_lchange(int_1);

	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_2;
	int_1 = v_rdonly();

	long_4 = long_2 * long_3;
	int_2 = v_kinsert(int_3);

	double_1 = double_3;
	float_3 = float_2 + float_2;
	if(1)
	{
		short short_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		short_2 = short_2 + short_3;
		int_2 = int_3 * int_3;
	}
	return int_3;
}
int v_ldelchar( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	if(1)
	{
		int int_3 = 1;
		int_1 = v_ldelete(long_1,int_2);

		int_1 = v_lgetchar(int_2);

		int_4 = int_3 + int_4;
	}
	return int_4;
}
int v_execute( int parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short_1 = short_1;
	double_1 = double_2;
	char controller4vul_2038[2];
	fgets(controller4vul_2038 ,2 ,stdin);
	if( strcmp( controller4vul_2038, "b") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		int_1 = v_filesave(int_2,int_2,uni_para);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	return int_3;
}
void v_lfree( double parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	short_1 = short_1 * short_1;
	float_1 = float_1 + float_2;
	double_1 = double_1;
	double_2 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_1 * float_1;
}
int v_mlyesno( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int_1 = v_ectoc(int_2);

	float_2 = float_1 + float_1;
	float_1 = float_1 * float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_4 = 1;
		long long_1 = 1;
		double_1 = double_1 + double_2;
		char_3 = char_1 * char_2;
		float_1 = float_2 + float_4;
		long_1 = long_1 * long_1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return int_3;
	v_mlwrite(long_2,long_3);

	int_4 = v_tgetc(-1 );

}
int v_bclear( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 * short_1;
	double_2 = double_1 + double_1;
	int_1 = int_1 + int_1;
	int_1 = int_2;
	short_1 = short_2;
	double_3 = double_2 * double_2;
	double_1 = double_3 * double_1;
	int_2 = int_2 + int_3;
	short_4 = short_2 + short_3;
	char_1 = char_1;
	int_2 = int_2 + int_2;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	int_1 = int_2 + int_2;
	int_2 = v_mlyesno(char_2);

	v_lfree(double_4);

	float_1 = float_1 + float_1;
	double_6 = double_5 * double_1;
	double_3 = double_2;
	long_1 = long_2;
	return int_1;
}
float v_mod95( int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v_myencrypt( char parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_2;
	float_1 = v_mod95(int_1);

}
double v_xlat( char parameter_1,char parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long_2 = long_1 * long_1;
	float_2 = float_1 * float_1;
	return double_1;
}
int v_fexist( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float_1 = float_1;
	float_1 = float_2;
	if(1)
	{
	}
	char_1 = char_1;
	return int_1;
}
unsigned int v_stock( char parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char_1 = char_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 * int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_4 * int_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_5 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		int_1 = int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_4;
		long_2 = long_1 + long_1;
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "}") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float_2 = float_1 * float_1;
		double_1 = double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_3 = short_1 + short_2;
	}
	short_2 = short_4 * short_3;
	return unsigned_int_1;
}
long v_getfname()
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char_1 = char_1 * char_1;
	int_1 = int_1 + int_2;
	return long_1;
}
float v_transbind( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_2;
	char_1 = char_1 * char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "!") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = v_getfname();

		unsigned_int_1 = v_stock(char_2);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return float_1;
}
int v_eq( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 + long_2;
		}
	}
	return int_1;
}
int v_sindex( char parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	char_1 = char_2;
	double_1 = double_2;
	char_1 = char_3 * char_2;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 * int_1;
	long_1 = long_1 + long_1;
	int_3 = int_3 + int_2;
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	double_1 = double_1;
	unsigned_int_4 = unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	char_2 = char_3 + char_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	int_2 = v_eq(char_3,int_4);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_2 * double_2;
	if(1)
	{
		int_2 = int_3 + int_1;
	}
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	return int_5;
}
int v_ernd()
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_1;
	return int_1;
	int_1 = v_abs(int_2);

}
void v_mkupper( char parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_4 = 1;
	int_1 = int_1 * int_1;
	long_1 = long_1 * long_1;
	long_2 = long_2;
	char_1 = char_1 + char_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float_1 = float_1 + float_3;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
		short_3 = short_1 * short_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_3 = 1;
			char char_4 = 1;
			long_4 = long_2 + long_3;
			char_4 = char_2 + char_3;
		}
		double_1 = double_3 * double_3;
		double_4 = double_3 * double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_2 * int_3;
		}
		long_2 = long_3 + long_4;
	}
	long_1 = long_1 + long_1;
	long_4 = long_4 * long_4;
}
int v_stol( char parameter_1)
{
	int int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "K") == 0)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_macarg( char parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_nextarg(char_1,char_2,int_2,int_2,-1 );

	int_2 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_1 + long_2;
	int_2 = v_ctoec(int_2);

	float_3 = float_1 + float_2;
	int_2 = int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	return int_1;
}
float v_mklower( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_2;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	int_2 = int_1 * int_1;
	long_1 = long_3;
	long_1 = long_2 * long_2;
	long_3 = long_3 + long_4;
	int_3 = int_3;
	return float_1;
}
char v_gtfun( char parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_3 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = v_stol(char_1);

		int_1 = v_sindex(char_2,char_2);

		float_1 = v_transbind(char_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "o") > 0)
		{
			double double_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			float_1 = v_mklower(char_2);

			int_1 = v_macarg(char_1);

			int_1 = v_itoa(int_1);

			float_1 = v_ltos(int_1);

			long_1 = v_getval(char_3);

			double_3 = double_1 * double_2;
			int_2 = v_tgetc(-1 );

			int_3 = v_ernd();

			int_4 = v_fexist(char_1);

			int_1 = v_flook(char_1,int_4);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		}
	}
	return char_1;
	v_mkupper(char_2);

	int_4 = v_abs(int_3);

	double_2 = v_xlat(char_2,char_1,char_2);

}
short v_getctext()
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
void v_getkill()
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_1 = long_2;
	char_1 = char_1 * char_1;
	if(1)
	{
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
		unsigned_int_1 = unsigned_int_2;
	}
}
int v_getwpos()
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	long_1 = long_2;
	char_3 = char_3 * char_4;
	double_2 = double_1 + double_1;
	return int_1;
}
float v_ltos( int parameter_1)
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
int v_getcline()
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float_1 = float_1 * float_1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
		}
	}
	return int_1;
}
int v_getccol( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long_1 = long_2;
	double_1 = v_utf8_to_unicode(char_1,char_2,long_3,short_1,-1 );

	double_2 = double_2 * double_3;
	long_2 = long_3 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_2 + short_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	double_4 = double_3 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_itoa( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_7 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_1 = 1;
	long_3 = long_1 * long_2;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2;
	long_5 = long_1 * long_4;
	char_4 = char_1 + char_1;
	char_6 = char_5 + char_1;
	unsigned_int_3 = unsigned_int_3;
	double_1 = double_1 + double_1;
	long_5 = long_5 + long_6;
	unsigned_int_3 = unsigned_int_2;
	double_2 = double_3;
	short_2 = short_1 + short_2;
	double_5 = double_4 + double_3;
	float_1 = float_2;
	char_8 = char_7 * char_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	double_5 = double_4 + double_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
	return int_1;
}
unsigned int v_gtenv( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int_1 = v_getccol(int_1);

	int_2 = v_getcline();

	float_1 = v_ltos(int_2);

	char_1 = char_1 + char_1;
	return unsigned_int_1;
	int_3 = v_itoa(int_1);

	int_2 = v_getwpos();

	v_getkill();

	int_4 = v_typahead();

	short_1 = v_getctext();

}
unsigned int v_gtusr( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
int v_ctoec( int parameter_1)
{
	int int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "t") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	return int_1;
}
int v_gettyp( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "r") > 0)
	{
	}
	return int_1;
	float_1 = v_token(char_1,char_2,int_1);

}
long v_getval( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	char char_5 = 1;
	double_3 = double_1 * double_2;
	long_1 = v_getval(char_1);

	int_1 = int_2;
	short_2 = short_1 + short_1;
	float_3 = float_1 + float_2;
	double_4 = double_4 * double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_4 = float_2 + float_1;
	short_1 = short_3;
	int_1 = v_gettyp(char_2);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_5 = v_bfind(char_1,int_3,int_2);

	int_4 = int_4 * int_3;
	if(1)
	{
	}
	double_4 = double_1;
	int_2 = int_1 * int_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_6;
	}
	if(1)
	{
	}
	unsigned_int_6 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		unsigned_int_4 = v_gtusr(char_2);

		double_1 = double_1 * double_1;
	}
	short_5 = short_2 + short_4;
	unsigned_int_6 = unsigned_int_7;
	float_1 = float_4 * float_2;
	int_2 = v_ctoec(int_4);

	float_2 = v_token(char_1,char_1,int_5);

	int_4 = int_3 * int_3;
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "!.") > 0)
	{
		int int_6 = 1;
		int_5 = v_getstring(char_2,char_3,int_1,int_1,-1 );

		char_3 = v_gtfun(char_4);

		short_2 = short_1 + short_5;
		float_4 = float_1 + float_1;
		int_6 = int_3 * int_3;
	}
	return long_2;
	unsigned_int_6 = v_gtenv(char_5);

}
float v_token( char parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1;
	if(1)
	{
		float float_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float_2 = float_2 * float_3;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_2 = double_1 + double_2;
	}
	return float_2;
}
int v_xmkstemp( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_2;
	float_3 = float_1 * float_1;
	if(1)
	{
		long long_1 = 1;
		v_die(short_1,float_2);

		long_1 = long_1 * long_1;
	}
	return int_1;
}
void v_outstring( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_3 = char_1 * char_2;
		double_2 = double_1 + double_1;
	}
	float_1 = float_1 * float_2;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_2;
}
int v_ctrlg( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	v_mlwrite(long_1,long_2);

	int_1 = int_1 + int_1;
	return int_1;
}
int v_ectoc( int parameter_1)
{
	int int_3 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	return int_3;
}
float v_newscreensize( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_1 + short_2;
	int_1 = int_1;
	double_2 = double_1 * double_1;
	short_1 = short_3 + short_2;
	float_2 = float_1 * float_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	float_1 = float_2 * float_2;
	long_2 = long_1 + long_2;
	double_1 = double_2;
	char_3 = char_1 + char_2;
	long_3 = long_2 * long_2;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_1;
	double_2 = double_1 * double_3;
	char_3 = char_2;
	return float_1;
}
void v_scwrite( int parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_3 = float_1 + float_2;
	int_1 = int_1 * int_2;
	long_1 = long_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3;
	}
}
char v_updateline( int parameter_1,unsigned int parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	float_2 = float_1 * float_1;
	v_scwrite(int_1,char_1,int_2,int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	double_2 = double_1;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	double_2 = double_2 * double_2;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
	return char_2;
}
char v_scrscroll( int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 + int_2;
	return char_1;
}
int v_abs( int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	short_1 = short_1;
	return int_1;
}
unsigned int v_endofline( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
double v_texttest( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_2 * int_2;
	return double_1;
}
long v_scrolls( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	float float_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	short short_5 = 1;
	float_2 = float_1 * float_1;
	char_1 = char_1;
	double_1 = double_1;
	double_1 = double_1;
	float_3 = float_4;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	char_2 = char_2;
	double_2 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_1 = long_3 * long_3;
			int_3 = int_1 * int_2;
		}
	}
	if(1)
	{
	}
	char_3 = v_scrscroll(int_3,int_2,int_1);

	float_4 = float_2 * float_1;
	float_5 = float_4 + float_2;
	if(1)
	{
		float_3 = float_3 * float_5;
		if(1)
		{
			char_2 = char_2 + char_4;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			short_2 = short_1;
		}
	}
	if(1)
	{
		char_5 = char_5 * char_3;
	}
	int_1 = int_2 * int_1;
	int_4 = int_4 * int_1;
	double_2 = v_texttest(int_2,int_5);

	double_1 = double_2 * double_3;
	int_1 = int_2 * int_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			char_1 = char_3;
			int_1 = int_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					unsigned_int_4 = unsigned_int_5;
				}
				if(1)
				{
					long_1 = long_3 * long_3;
				}
			}
			if(1)
			{
				short_2 = short_2 + short_2;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
			}
		}
		char_4 = char_2;
	}
	char_1 = char_3 + char_5;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			short_2 = short_1 * short_3;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
			unsigned_int_3 = unsigned_int_6 * unsigned_int_7;
		}
	}
	if(1)
	{
		float float_6 = 1;
		double double_4 = 1;
		double double_6 = 1;
		int int_7 = 1;
		if(1)
		{
			double_1 = double_3 * double_2;
			long_3 = long_3 * long_3;
		}
		if(1)
		{
			short short_4 = 1;
			short_3 = short_4 + short_4;
			float_1 = float_6;
		}
		if(1)
		{
		}
		double_2 = double_4 + double_2;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double double_5 = 1;
			unsigned_int_4 = unsigned_int_6 + unsigned_int_4;
			short_3 = short_1 * short_3;
			int_6 = int_1 + int_5;
			double_6 = double_1 * double_5;
			if(1)
			{
				char char_6 = 1;
				double_1 = double_4 * double_4;
				char_6 = char_2 * char_2;
			}
			if(1)
			{
				int_6 = int_7 * int_5;
			}
		}
		if(1)
		{
			int int_8 = 1;
			int_2 = int_6 + int_8;
			double_4 = double_6 * double_6;
		}
		if(1)
		{
			double double_7 = 1;
			float_6 = float_2 + float_3;
			double_6 = double_7 * double_1;
		}
		if(1)
		{
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				char char_7 = 1;
				unsigned int unsigned_int_8 = 1;
				int_1 = v_abs(int_1);

				short_3 = short_3 + short_5;
				unsigned_int_1 = v_endofline(short_5,int_6);

				char_7 = char_7 * char_7;
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					int int_9 = 1;
					int_9 = int_5 + int_7;
				}
				unsigned_int_3 = unsigned_int_1 + unsigned_int_8;
			}
		}
	}
	return long_3;
}
int v_updupd( int parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int_1 = v_typahead();

	short_1 = short_1 * short_1;
	int_1 = int_2 + int_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_2 * int_1;
		}
	}
	if(1)
	{
		double double_2 = 1;
		char_1 = v_updateline(int_3,unsigned_int_1,float_1);

		double_1 = double_2;
	}
	double_3 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_3;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "p") > 0)
		{
			float float_2 = 1;
			if(1)
			{
				if(1)
				{
				}
			}
			if(1)
			{
				float float_3 = 1;
				long_1 = v_scrolls(int_1);

				float_1 = float_2 + float_3;
			}
			if(1)
			{
				float float_4 = 1;
				float_4 = float_2;
			}
		}
	}
	return int_3;
}
void v_updgar()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		v_mlerase();

		float_1 = float_1 + float_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_3 = 1;
			double_3 = double_1 * double_2;
		}
		unsigned_int_3 = unsigned_int_4;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			v_movecursor(int_1,int_2);

			int_2 = int_2 * int_1;
		}
	}
	double_5 = double_4 * double_2;
	int_5 = int_3 + int_4;
	double_4 = double_6 * double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		int_4 = int_4;
	}
}
void v_upddex(int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char controller4vul_2055[2];
	fgets(controller4vul_2055 ,2 ,stdin);
	if( strcmp( controller4vul_2055, ">") < 0)
	{
		double_1 = v_show_line(unsigned_int_1,uni_para);

	}
	int_1 = int_1 + int_2;
	long_1 = long_1;
}
int v_updext()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = v_show_line(unsigned_int_1,-1 );

	long_1 = long_1;
	double_1 = double_2 * double_3;
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	float_1 = v_vteeol();

	int_1 = int_1 * int_2;
	v_vtmove(int_1,int_3);

	int_2 = int_2 * int_4;
	double_1 = double_2 * double_1;
	double_3 = double_4 * double_5;
	double_6 = double_3;
	float_3 = float_2 * float_1;
	return int_4;
}
void v_updpos()
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double_1 = v_utf8_to_unicode(char_1,char_2,long_1,short_1,-1 );

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_updext();

	long_2 = long_2 + long_1;
	int_2 = int_1 * int_1;
}
char v_modeline( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 + int_2;
	int_4 = int_3 + int_1;
	float_2 = float_1 * float_2;
	double_4 = double_3 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_3 = 1;
		int int_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		int_4 = int_4 * int_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_4 = double_3;
			v_vtmove(int_3,int_5);

			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				double_1 = double_3 + double_5;
			}
			if(1)
			{
				char char_2 = 1;
				char_2 = char_1 * char_1;
			}
			if(1)
			{
				double_6 = double_3 * double_2;
			}
		}
		float_3 = float_1 + float_1;
		long_1 = v_vtputc(int_5);

		double_4 = double_1 * double_6;
		int_2 = int_6 * int_2;
		double_7 = double_1 * double_2;
		double_8 = double_5 + double_1;
		int_6 = int_3 * int_5;
		float_1 = float_1 + float_1;
		float_3 = float_1 * float_3;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
		char_1 = char_1;
		unsigned_int_4 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		short_2 = short_1 * short_1;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "Mz") > 0)
	{
	}
	if(1)
	{
	}
	return char_1;
}
double v_updall( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1;
	float_3 = float_1 + float_2;
	int_2 = int_2 * int_2;
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		double_3 = v_show_line(unsigned_int_1,-1 );

		int_4 = int_3 + int_2;
	}
	double_4 = double_3 + double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
		char_3 = char_3;
	}
	unsigned_int_3 = unsigned_int_1;
	float_3 = float_1 * float_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		v_vtmove(int_4,int_5);

		unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
	}
	char_3 = char_3 + char_3;
	float_2 = v_vteeol();

	unsigned_int_7 = unsigned_int_2;
	if(1)
	{
		double_2 = double_3;
	}
	return double_5;
}
float v_vteeol()
{
	float float_1 = 1;
	return float_1;
}
long v_vtputc( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	if(1)
	{
		short_1 = short_1;
	}
	short_2 = short_1 + short_1;
	return long_1;
}
double v_utf8_to_unicode( char parameter_1,char parameter_2,long parameter_3,short parameter_4,int uni_para)
{
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char * vul_var;
	float_1 = float_1 * float_1;
	long_1 = long_1 * long_1;
	int_1 = int_2;
	char controller4vul_2059[2];
	fgets(controller4vul_2059 ,2 ,stdin);
	if( strcmp( controller4vul_2059, "0") < 0)
	{
		char controller4vul_2060[3];
		fgets(controller4vul_2060 ,3 ,stdin);
		if( strcmp( controller4vul_2060, "6J") > 0)
		{
			vul_var=(char*)malloc(20*sizeof(char));
			strcpy(vul_var, "CWE-761");
			if(uni_para == 985)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			int_1 = int_1 * int_2;
		}
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "G") < 0)
	{
		long long_2 = 1;
		long_1 = long_2 + long_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		int_3 = int_1;
	}
	short_2 = short_2;
}
double v_show_line( unsigned int parameter_1,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_3 = 1;
	long long_4 = 1;
	int int_8 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double double_6 = 1;
	float float_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_5 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_8 = 1;
	float float_5 = 1;
	int int_10 = 1;
	short short_4 = 1;
	char controller4vul_2056[2];
	fgets(controller4vul_2056 ,2 ,stdin);
	if( strcmp( controller4vul_2056, ";") > 0)
	{
		char controller4vul_2057[3];
		fgets(controller4vul_2057 ,3 ,stdin);
		if( strcmp( controller4vul_2057, "}2") > 0)
		{
			char controller4vul_2058[3];
			fgets(controller4vul_2058 ,3 ,stdin);
			if( strcmp( controller4vul_2058, "RE") < 0)
			{
				double_1 = v_utf8_to_unicode(char_1,char_1,long_1,short_1,uni_para);

				float_1 = float_1 * float_1;
			}
		}
	}
	if(1)
	{
		double_4 = double_2 * double_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_1 = float_1 + float_1;
		}
	}
	int_3 = int_1 * int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_4 = int_4 * int_5;
		if(1)
		{
			long_2 = long_2 * long_2;
			double_1 = double_1 * double_2;
			double_1 = double_5 * double_3;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			double_1 = double_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			unsigned_int_4 = unsigned_int_4;
			double_5 = double_1 * double_4;
		}
		if(1)
		{
			if(1)
			{
				int_3 = int_2 * int_5;
				short_2 = short_1;
				double_2 = double_4 + double_5;
				long_2 = long_2 * long_1;
			}
			int_1 = int_3 + int_3;
		}
	}
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
	}
	double_1 = double_2 * double_3;
	float_2 = float_1 + float_1;
	long_3 = long_3 + long_2;
	unsigned_int_8 = unsigned_int_7 + unsigned_int_2;
	int_7 = int_6 + int_4;
	unsigned_int_8 = unsigned_int_8 + unsigned_int_8;
	int_5 = int_1 * int_6;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	float_3 = float_3 + float_1;
	char_2 = char_1 * char_2;
	double_2 = double_3;
	if(1)
	{
		long_3 = long_2 + long_4;
		if(1)
		{
			double_3 = double_2 * double_1;
		}
	}
	if(1)
	{
		double_1 = double_5 * double_5;
	}
	int_1 = int_4 * int_8;
	char_3 = char_3 * char_2;
	if(1)
	{
		int_7 = int_5 + int_7;
		double_2 = double_3 * double_3;
		int_8 = int_3 * int_6;
		short_3 = short_2 + short_1;
	}
	if(1)
	{
		double_5 = double_4 * double_6;
	}
	float_4 = float_3 + float_1;
	if(1)
	{
		float_3 = float_3 * float_4;
		int_6 = int_2;
	}
	unsigned_int_8 = unsigned_int_5 + unsigned_int_8;
	double_1 = double_3 * double_7;
	unsigned_int_4 = unsigned_int_9;
	int_8 = int_3;
	long_5 = long_5;
	long_5 = long_4 + long_2;
	double_6 = double_2 * double_3;
	int_5 = int_5 + int_9;
	unsigned_int_9 = unsigned_int_8 * unsigned_int_10;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short_1 = short_1;
	}
	double_5 = double_4 * double_7;
	int_5 = int_8 * int_8;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_3 = int_5;
		double_4 = double_1 * double_5;
		double_7 = double_6 * double_4;
	}
	double_8 = double_6 * double_6;
	float_5 = float_3 + float_4;
	int_2 = int_10;
	short_4 = short_4;
	short_4 = short_3 * short_4;
	int_8 = int_3;
	if(1)
	{
		long long_6 = 1;
		unsigned int unsigned_int_11 = 1;
		long_6 = long_2 * long_3;
		char_3 = char_3;
		int_1 = int_3 * int_1;
		unsigned_int_10 = unsigned_int_1 + unsigned_int_9;
		unsigned_int_5 = unsigned_int_8 * unsigned_int_11;
	}
	double_8 = double_4 + double_8;
	if(1)
	{
		int_6 = int_9 * int_10;
	}
	double_5 = double_8;
	if(1)
	{
		short_3 = short_1 * short_2;
	}
	return double_4;
}
void v_vtmove( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_3 = int_1 * int_2;
	int_4 = int_2 * int_4;
}
unsigned int v_updone()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = v_show_line(unsigned_int_1,-1 );

	short_1 = short_1 * short_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		char_2 = char_1 + char_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "8") < 0)
		{
			char char_3 = 1;
			char char_4 = 1;
			float_1 = v_vteeol();

			char_3 = char_4;
		}
		v_vtmove(int_3,int_4);

		int_2 = int_5 + int_6;
		int_4 = int_1 * int_4;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_4;
	}
	return unsigned_int_3;
}
double v_reframe( int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
int v_typahead()
{
	int int_1 = 1;
	if(1)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "r") == 0)
		{
		}
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	int_1 = int_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			if(1)
			{
			}
			if(1)
			{
				double double_1 = 1;
				double_2 = double_1 + double_1;
			}
			double_2 = double_3 * double_3;
		}
	}
	if(1)
	{
	}
	return int_1;
}
int v_update( int parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = short_1 * short_2;
	int_2 = int_1 + int_2;
	char controller4vul_2053[3];
	fgets(controller4vul_2053 ,3 ,stdin);
	if( strcmp( controller4vul_2053, "D#") > 0)
	{
		char controller4vul_2054[3];
		fgets(controller4vul_2054 ,3 ,stdin);
		if( strcmp( controller4vul_2054, "xN") < 0)
		{
			v_upddex(uni_para);

		}
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Px") < 0)
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
	return int_3;
}
int v_tgetc(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_2;
	char controller4vul_2050[3];
	fgets(controller4vul_2050 ,3 ,stdin);
	if( strcmp( controller4vul_2050, "p*") > 0)
	{
		if(1)
		{
		}
		char controller4vul_2051[2];
		fgets(controller4vul_2051 ,2 ,stdin);
		if( strcmp( controller4vul_2051, ":") < 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			char controller4vul_2052[3];
			fgets(controller4vul_2052 ,3 ,stdin);
			if( strcmp( controller4vul_2052, "6b") < 0)
			{
				int_2 = v_update(int_1,uni_para);

				float_1 = float_1 * float_1;
			}
		}
		if(1)
		{
			short_1 = short_1;
		}
	}
	double_1 = double_1 * double_1;
	float_2 = float_2 * float_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_1 + long_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 + short_1;
			float_3 = float_1 + float_2;
		}
	}
	return int_3;
}
int v_get1key(int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	long_2 = long_1 + long_2;
	char_1 = char_1 * char_1;
	char controller4vul_2048[3];
	fgets(controller4vul_2048 ,3 ,stdin);
	if( strcmp( controller4vul_2048, "O-") < 0)
	{
		char controller4vul_2049[3];
		fgets(controller4vul_2049 ,3 ,stdin);
		if( strcmp( controller4vul_2049, "F>") < 0)
		{
			int int_2 = 1;
			int_1 = v_tgetc(uni_para);

			int_2 = int_1 + int_1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
		}
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "W") < 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_2;
		}
	}
	return int_3;
}
int v_getstring( char parameter_1,char parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_1 = v_get1key(uni_para);

	int_2 = int_1;
	float_1 = float_1 * float_1;
	return int_1;
}
int v_nextarg( char parameter_1,char parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char controller4vul_2047[2];
	fgets(controller4vul_2047 ,2 ,stdin);
	if( strcmp( controller4vul_2047, "r") < 0)
	{
		int_1 = v_getstring(char_1,char_1,int_1,int_1,uni_para);

	}
	int_1 = int_2 * int_2;
	char_4 = char_2 * char_3;
	return int_1;
}
int v_mlreply( char parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int_1 = v_nextarg(char_1,char_2,int_1,int_1,uni_para);

	return int_2;
}
int v_set_encryption_key( int parameter_1,int parameter_2,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_5 = 1;
	float_1 = float_1;
	int_2 = int_1 * int_2;
	char_3 = char_1 + char_2;
	double_1 = double_1;
	int_1 = int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2 * float_3;
	char controller4vul_2046[2];
	fgets(controller4vul_2046 ,2 ,stdin);
	if( strcmp( controller4vul_2046, "q") < 0)
	{
		int_4 = v_mlreply(char_3,char_4,int_4,uni_para);

	}
	int_4 = int_4 * int_5;
	int_3 = int_4 * int_4;
	long_2 = long_1 * long_1;
	char_2 = char_5 * char_3;
	return int_3;
}
float v_resetkey(int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_3 = float_1 + float_2;
	long_2 = long_1 + long_1;
	char controller4vul_2044[2];
	fgets(controller4vul_2044 ,2 ,stdin);
	if( strcmp( controller4vul_2044, "u") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char controller4vul_2045[3];
		fgets(controller4vul_2045 ,3 ,stdin);
		if( strcmp( controller4vul_2045, "IO") < 0)
		{
			int_1 = v_set_encryption_key(int_1,int_2,uni_para);

			long_2 = long_2;
			char controller_1[3];
			fgets(controller_1 ,3 ,stdin);
			if( strcmp( controller_1, "c6") > 0)
			{
			}
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_2 * int_2;
		char_1 = char_1 * char_2;
		short_2 = short_1 + short_1;
		double_2 = double_1 + double_2;
	}
	return float_1;
}
int v_lockchk( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	char_2 = char_1 + char_1;
	float_2 = float_1 * float_1;
	short_1 = short_1 + short_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_2 * char_3;
	return int_1;
}
int v_readin( char parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int_1 = v_execute(int_1,int_1,int_1,uni_para);

	double_1 = double_1 * double_2;
	int_1 = int_2;
	return int_1;
}
void v_unqname( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	unsigned_int_1 = v_bfind(char_1,int_1,int_2);

}
void v_makename( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	float_2 = float_1 + float_2;
	double_3 = double_1 + double_2;
	double_1 = double_4;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_1 * int_1;
	int_3 = int_1 * int_1;
}
int v_dofile( char parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_2;
	int_1 = int_1 + int_1;
	short_1 = short_1 * short_1;
	float_1 = float_1 * float_1;
	int_1 = int_1 * int_1;
	char controller4vul_2037[3];
	fgets(controller4vul_2037 ,3 ,stdin);
	if( strcmp( controller4vul_2037, "?8") < 0)
	{
		int_2 = v_readin(char_1,int_2,uni_para);

	}
	int_4 = int_3 + int_1;
	short_1 = short_1 * short_1;
	short_1 = short_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	}
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	return int_1;
}
int v_ffclose()
{
	long long_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		v_mlwrite(long_1,long_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_2 = double_1 + double_1;
	}
	long_2 = long_1 + long_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		if(1)
		{
			double double_3 = 1;
			double_2 = double_3;
		}
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, ":") < 0)
	{
		int int_1 = 1;
		int_1 = int_1 + int_2;
	}
	return int_2;
}
int v_ffropen( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
int v_flook( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short_2 = short_1 + short_2;
	long_1 = long_1;
	short_4 = short_3 * short_1;
	return int_1;
	int_1 = v_ffropen(char_1);

	int_1 = v_ffclose();

}
int v_startup( char parameter_1,int uni_para)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_1;
	char controller4vul_2036[2];
	fgets(controller4vul_2036 ,2 ,stdin);
	if( strcmp( controller4vul_2036, ",") > 0)
	{
		int_1 = v_dofile(char_1,uni_para);

		double_1 = double_1 * double_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
	}
	return int_1;
}
void v_varinit()
{
	float float_1 = 1;
	float float_2 = 1;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
}
float v_mlputf( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = int_1 + int_2;
	int_3 = int_2 + int_1;
	double_2 = double_1 + double_2;
	float_1 = v_mlputi(int_2,int_4);

	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_2;
	short_1 = short_1 * short_1;
	short_3 = short_2 * short_1;
	return float_2;
}
void v_mlputs( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	if(1)
	{
	}
	char_1 = char_1 * char_2;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_2 = int_3 * int_2;
		if(1)
		{
			int int_4 = 1;
			int_2 = int_4 * int_3;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		long_1 = long_1 * long_2;
		if(1)
		{
			int_3 = int_2;
		}
		float_3 = float_1 * float_2;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
}
void v_mlputli( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = long_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = float_1 * float_2;
		unsigned_int_1 = unsigned_int_2;
	}
	long_4 = long_2 * long_3;
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		long_6 = long_5 * long_1;
	}
	long_7 = long_2 + long_2;
	short_2 = short_1 + short_2;
}
float v_mlputi( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4;
		long_3 = long_1 + long_2;
	}
	char_3 = char_1 + char_2;
	if(1)
	{
		long_3 = long_2 * long_1;
	}
	int_3 = int_1 + int_2;
	char_4 = char_1 + char_4;
	return float_1;
}
void v_mlerase()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1;
	if(1)
	{
	}
	if(1)
	{
		char_3 = char_1 * char_2;
	}
	char_2 = char_1 * char_3;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_5 = char_4 * char_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			short_1 = short_1;
		}
		float_2 = float_1 + float_2;
		short_3 = short_2 + short_2;
	}
	int_1 = int_1 + int_1;
	v_movecursor(int_2,int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void v_movecursor( int parameter_1,int parameter_2)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		int_2 = int_1 * int_1;
		short_2 = short_1 * short_1;
		float_1 = float_1;
	}
}
void v_mlwrite( long parameter_1,long parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	float_1 = v_mlputf(int_1);

	long_3 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		long long_4 = 1;
		v_movecursor(int_1,int_1);

		long_4 = long_4 + long_4;
	}
	v_mlerase();

	v_mlputli(long_2,int_1);

	v_mlputs(char_1);

	int_2 = int_2 * int_2;
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	char_3 = char_2 + char_2;
	if(1)
	{
		char char_4 = 1;
		char_3 = char_4 * char_1;
	}
	float_2 = v_mlputi(int_1,int_1);

}
double v_lalloc( int parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		v_mlwrite(long_1,long_2);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	double_3 = double_2 + double_2;
	int_1 = int_1 + int_2;
	return double_1;
}
unsigned int v_bfind( char parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	double_3 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_3 + int_4;
	double_4 = double_2 * double_3;
	double_5 = v_lalloc(int_1);

	char_2 = char_1 * char_2;
	if(1)
	{
	}
	return unsigned_int_5;
}
void v_edinit( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	double_2 = double_1 + double_2;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_2;
	float_3 = float_2 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	int_2 = int_3;
	char_3 = char_2 + char_2;
	double_1 = double_3 + double_2;
	float_2 = float_3;
	short_3 = short_2 + short_3;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	short_2 = short_2;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_7 = unsigned_int_1 + unsigned_int_6;
	unsigned_int_6 = v_bfind(char_1,int_1,int_2);

	float_4 = float_3;
}
void v_report( unsigned int parameter_1,double parameter_2,long parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_1;
	short_2 = short_1 + short_1;
	char_2 = char_1 + char_1;
}
void v_die( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	char_1 = char_1;
	int_1 = int_2;
	v_report(unsigned_int_1,double_1,long_1);

}
unsigned int v_xmalloc( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		v_die(short_1,float_1);

		double_1 = double_1 + double_1;
	}
	return unsigned_int_3;
}
void v_vtinit()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	int_2 = int_1 * int_3;
	double_2 = double_1 * double_1;
	float_1 = float_2;
	int_3 = int_1;
	if(1)
	{
		float float_3 = 1;
		float_2 = float_2 + float_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		short short_2 = 1;
		int_4 = int_1;
		unsigned_int_3 = v_xmalloc(short_1);

		int_4 = int_4 + int_1;
		if(1)
		{
			double_2 = double_2 * double_1;
		}
		int_5 = int_4 + int_4;
		double_4 = double_3 + double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
		long_1 = long_1 * long_1;
		short_1 = short_2 + short_1;
	}
}
void v_version()
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_2;
}
void v_usage( int parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long_1 = long_1;
	double_1 = double_1 + double_1;
	char_3 = char_1 + char_2;
	long_2 = long_2;
	double_2 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 + long_1;
	long_1 = long_3 + long_4;
}
void v_sizesignal( int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_1;
	char_2 = char_1 * char_1;
	int_3 = int_2 + int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
}
int main()
{
	int uni_para =985;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_startup(char_1,uni_para);

	char_2 = char_2 * char_3;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}

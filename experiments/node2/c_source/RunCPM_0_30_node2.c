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

float v_lua_close( double parameter_1);
float v_lua_pushlightuserdata( short parameter_1);
float v_lua_pushinteger( double parameter_1,char parameter_2);
double v_l_print( double parameter_1);
char v_incomplete( double parameter_1,int parameter_2);
char v_lua_tolstring( long parameter_1,int parameter_2,double parameter_3);
int v_multiline( double parameter_1);
long v_addreturn( float parameter_1);
unsigned int v_lua_pushlstring( double parameter_1,long parameter_2,short parameter_3);
int v_get_prompt( short parameter_1,int parameter_2);
unsigned int v_pushline( int parameter_1,int parameter_2);
char v_loadline( char parameter_1);
double v_doREPL( int parameter_1);
char v_lua_rawgeti( float parameter_1,int parameter_2,unsigned int parameter_3);
long v_lua_tointegerx( int parameter_1,int parameter_2,int parameter_3);
float v_lua_len( double parameter_1,int parameter_2);
unsigned int v_luaL_len( int parameter_1,int parameter_2);
char v_pushargs( char parameter_1);
double v_handle_script( float parameter_1,char parameter_2);
short v_lua_getglobal( long parameter_1,int parameter_2);
double v_dolibrary( int parameter_1,char parameter_2,int uni_para);
long v_runargs( unsigned int parameter_1,char parameter_2,int parameter_3,int uni_para);
char v_dostring( int parameter_1,short parameter_2,unsigned int parameter_3);
void v_report( float parameter_1,int parameter_2);
unsigned int v_lstop( float parameter_1,float parameter_2);
long v_lua_sethook( char parameter_1,short parameter_2,int parameter_3,int parameter_4);
float v_laction( int parameter_1);
void v_lua_settop( char parameter_1,int parameter_2);
char v_lua_copy( char parameter_1,int parameter_2,int parameter_3);
float v_lua_rawequal( int parameter_1,int parameter_2,int parameter_3);
long v_findindex( double parameter_1,char parameter_2,long parameter_3);
int v_luaH_next( unsigned int parameter_1,float parameter_2,char parameter_3);
double v_lua_next( long parameter_1,int parameter_2);
double v_lua_pushnil( char parameter_1);
double v_findfield( short parameter_1,int parameter_2,int parameter_3);
double v_pushglobalfuncname( unsigned int parameter_1,long parameter_2);
float v_pushfuncname( char parameter_1,long parameter_2);
short v_lua_error( double parameter_1);
float v_lua_concat( char parameter_1,int parameter_2);
short v_lua_pushvfstring( char parameter_1,char parameter_2,float parameter_3);
long v_collectvalidlines( char parameter_1,char parameter_2,int uni_para);
short v_getfuncname( int parameter_1,double parameter_2,int parameter_3);
double v_funcinfo( long parameter_1,unsigned int parameter_2);
unsigned int v_auxgetinfo( char parameter_1,long parameter_2,char parameter_3,int parameter_4,char parameter_5);
short v_swapextra( double parameter_1);
int v_lua_getinfo( float parameter_1,short parameter_2,char parameter_3,int uni_para);
float v_luaL_where( double parameter_1,int parameter_2,int uni_para);
double v_luaL_error( unsigned int parameter_1,short parameter_2,double parameter_3,int uni_para);
void v_luaD_growstack( float parameter_1,int parameter_2);
double v_growstack( char parameter_1);
char v_lua_checkstack( float parameter_1,int parameter_2);
float v_luaL_checkstack( char parameter_1,int parameter_2,short parameter_3,int uni_para);
unsigned int v_lua_getstack( double parameter_1,int parameter_2,long parameter_3);
double v_lastlevel( char parameter_1);
short v_luaL_traceback( double parameter_1,double parameter_2,long parameter_3,int parameter_4,int uni_para);
short v_lua_pushfstring( int parameter_1,char parameter_2,long parameter_3);
unsigned int v_lua_type( float parameter_1,int parameter_2);
long v_lua_rawget( char parameter_1,int parameter_2);
unsigned int v_lua_getmetatable( int parameter_1,int parameter_2);
char v_luaL_getmetafield( char parameter_1,int parameter_2,char parameter_3);
unsigned int v_luaL_callmeta( float parameter_1,int parameter_2,float parameter_3);
long v_msghandler( float parameter_1,int uni_para);
void v_lua_gettop( unsigned int parameter_1);
void v_docall( char parameter_1,int parameter_2,int parameter_3,int uni_para);
unsigned int v_dochunk( unsigned int parameter_1,int parameter_2);
long v_dofile( float parameter_1,short parameter_2);
unsigned int v_handle_luainit( float parameter_1);
short v_lua_rawseti( short parameter_1,int parameter_2,double parameter_3);
short v_lua_createtable( int parameter_1,int parameter_2,int parameter_3);
void v_createargtable( short parameter_1,char parameter_2,int parameter_3,int parameter_4);
long v_lua_setglobal( short parameter_1,float parameter_2);
long v_lua_pushstring( int parameter_1,unsigned int parameter_2);
long v_lua_toboolean( int parameter_1,int parameter_2);
long v_lua_pushvalue( float parameter_1,int parameter_2);
unsigned int v_lua_absindex( short parameter_1,int parameter_2);
long v_auxgetstr( int parameter_1,short parameter_2,float parameter_3);
double v_lua_getfield( short parameter_1,int parameter_2,unsigned int parameter_3);
short v_luaL_getsubtable( short parameter_1,int parameter_2,double parameter_3);
long v_luaL_requiref( char parameter_1,char parameter_2,double parameter_3,int parameter_4);
int v_luaL_openlibs( char parameter_1);
void v_luaV_finishset( short parameter_1,float parameter_2,char parameter_3,char parameter_4,char parameter_5);
short v_auxsetstr( char parameter_1,long parameter_2,short parameter_3);
char v_lua_setfield( float parameter_1,int parameter_2,char parameter_3);
long v_lua_pushboolean( float parameter_1,int parameter_2);
long v_print_version();
long v_print_usage( char parameter_1);
double v_collectargs( char parameter_1,int parameter_2);
double v_index2addr( short parameter_1,int parameter_2);
float v_lua_touserdata( long parameter_1,int parameter_2);
double v_pmain( char parameter_1,int uni_para);
short v_l_message( float parameter_1,long parameter_2);
float v_panic( long parameter_1);
float v_lua_atpanic( short parameter_1,short parameter_2);
char v_l_alloc(long parameter_3,long parameter_4);
long v_freestack( long parameter_1);
short v_dothecall( short parameter_1);
void v_correctstack( long parameter_1,double parameter_2);
void v_luaD_reallocstack( float parameter_1,int parameter_2);
void v_luaE_shrinkCI( float parameter_1);
void v_luaE_freeCI( float parameter_1);
long v_stackinuse( char parameter_1);
void v_luaD_shrinkstack( long parameter_1);
int v_luaD_pcall( short parameter_1,unsigned int parameter_2,float parameter_4,int parameter_5);
int v_udata2finalize( short parameter_1);
int v_GCTM( long parameter_1,int parameter_2);
int v_callallpendingfinalizers();
short v_findlast( int parameter_1);
char v_separatetobefnz( long parameter_1,int parameter_2);
void v_luaC_freeallobjects( long parameter_1);
void v_close_state( long parameter_1);
float v_lua_version( char parameter_1);
void v_luaX_init( char parameter_1);
void v_luaT_init( long parameter_1);
void v_luaC_fix( float parameter_1,short parameter_2);
void v_luaS_init( double parameter_1);
char v_luaG_errormsg(int uni_para);
double v_currentline( double parameter_1);
void v_luaO_chunkid( char parameter_1,short parameter_2,unsigned int parameter_3);
int v_luaG_addinfo( char parameter_1,long parameter_2,int parameter_3,int parameter_4);
float v_copy2buff( short parameter_1,int parameter_2,char parameter_3);
char v_luaG_opinterror( long parameter_1,double parameter_2,double parameter_3,double parameter_4);
void v_luaG_tointerror( double parameter_1,int parameter_2,float parameter_3);
char v_luaG_concaterror( unsigned int parameter_1,float parameter_2,short parameter_3);
void v_luaD_callnoyield( char parameter_1,float parameter_2,int parameter_3,int uni_para);
double v_luaF_findupval( double parameter_1,short parameter_2);
unsigned int v_luaF_newLclosure( double parameter_1,int parameter_2);
short v_pushclosure( long parameter_1,char parameter_2,int parameter_3,float parameter_4,long parameter_5);
char v_getcached( double parameter_1,long parameter_2,int parameter_3);
void v_luaH_resizearray( unsigned int parameter_1,int parameter_2,char parameter_3);
short v_forlimit( float parameter_1,int parameter_2,char parameter_3,int parameter_4);
void v_luaF_close( float parameter_1,double parameter_2);
long v_LEnum( float parameter_1,float parameter_2);
int v_luaV_lessequal( char parameter_1,int parameter_2,short parameter_3,int uni_para);
short v_luaG_ordererror( short parameter_1,unsigned int parameter_2,long parameter_3,int uni_para);
int v_luaT_callorderTM( float parameter_1,long parameter_2,double parameter_3,short parameter_4);
char v_l_strcmp( char parameter_1,double parameter_2);
char v_LEintfloat( int parameter_1,short parameter_2);
short v_LTintfloat( int parameter_1,unsigned int parameter_2);
short v_LTnum( long parameter_1,long parameter_2);
int v_luaV_lessthan( long parameter_1,short parameter_2,long parameter_3);
int v_luaS_eqlngstr( float parameter_1,unsigned int parameter_2);
int v_luaV_equalobj( long parameter_1,float parameter_2,char parameter_3);
unsigned int v_unbound_search( float parameter_1,unsigned int parameter_2);
int v_luaH_getn( short parameter_1);
void v_luaV_objlen( int parameter_1,int parameter_2,int parameter_3);
void v_luaV_div( float parameter_1,short parameter_2,char parameter_3);
char v_luaV_mod( int parameter_1,int parameter_2,short parameter_3);
long v_luaV_shiftl( short parameter_1,int parameter_2);
void v_luaV_finishget( unsigned int parameter_1,char parameter_2,short parameter_3,char parameter_4,char parameter_5);
int v_luaH_getstr( unsigned int parameter_1,short parameter_2);
int v_luaO_fb2int( int parameter_1);
unsigned int v_getgeneric( long parameter_1,double parameter_2);
int v_luaH_get( float parameter_1,unsigned int parameter_2);
int v_luaH_set( int parameter_1,float parameter_2,int parameter_3);
char v_computesizes( long parameter_1,float parameter_2);
float v_arrayindex( int parameter_1);
short v_countint( float parameter_1,long parameter_2);
double v_numusehash( double parameter_1,double parameter_2,long parameter_3);
char v_numusearray( int parameter_1,unsigned int parameter_2);
long v_rehash( unsigned int parameter_1,int parameter_2,char parameter_3);
long v_getfreepos( float parameter_1);
unsigned int v_luaS_hashlongstr( double parameter_1);
double v_l_hashfloat( char parameter_1);
short v_mainposition( int parameter_1,long parameter_2);
float v_l_str2dloc( unsigned int parameter_1,char parameter_2,int parameter_3);
unsigned int v_l_str2d( unsigned int parameter_1,double parameter_2);
int v_luaO_hexavalue( int parameter_1);
float v_isneg( unsigned int parameter_1);
long v_l_str2int( long parameter_1,double parameter_2);
short v_luaO_str2num( char parameter_1,float parameter_2);
int v_luaV_tointeger( int parameter_1,short parameter_2,int parameter_3);
float v_luaH_newkey( char parameter_1,double parameter_2,short parameter_3);
float v_luaH_getint( double parameter_1,short parameter_2);
void v_luaH_setint( short parameter_1,double parameter_2,short parameter_3,unsigned int parameter_4);
char v_setarrayvector( unsigned int parameter_1,float parameter_2,int parameter_3);
void v_luaH_resize( double parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4);
void v_luaV_execute( float parameter_1,int uni_para);
int v_currentpc( short parameter_1);
short v_kname( long parameter_1,int parameter_2,int parameter_3,char parameter_4);
long v_filterpc( int parameter_1,int parameter_2);
char v_findsetreg( char parameter_1,int parameter_2,int parameter_3);
unsigned int v_luaF_getlocalname( char parameter_1,int parameter_2,int parameter_3);
double v_getobjname( int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4);
float v_isinstack( short parameter_1,long parameter_2);
char v_upvalname( float parameter_1,int parameter_2);
short v_getupvalname( char parameter_1,int parameter_2,char parameter_3);
long v_varinfo( char parameter_1,char parameter_2);
unsigned int v_luaS_new( short parameter_1,short parameter_2,int uni_para);
char v_luaT_objtypename( short parameter_1,char parameter_2,int uni_para);
int v_luaG_typeerror( long parameter_1,long parameter_2,char parameter_3);
short v_tryfuncTM( float parameter_1,double parameter_2);
char v_callhook( double parameter_1,char parameter_2);
short v_adjust_varargs( float parameter_1,unsigned int parameter_2,int parameter_3);
int v_moveresults( int parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5);
int v_luaD_poscall( int parameter_1,long parameter_2,float parameter_3,int parameter_4);
void v_luaD_hook( unsigned int parameter_1,int parameter_2,int parameter_3);
int v_luaD_precall( short parameter_1,int parameter_2,int parameter_3);
float v_seterrorobj( char parameter_1,int parameter_2,double parameter_3);
unsigned int v_luaD_throw( char parameter_1,int parameter_2);
unsigned int v_stackerror( long parameter_1);
void v_luaD_call( float parameter_1,short parameter_2,int parameter_3,int uni_para);
void v_luaT_callTM( int parameter_1,char parameter_2,short parameter_3,int parameter_4,char parameter_5,int parameter_6);
int v_luaH_getshortstr( short parameter_1,long parameter_2);
short v_luaT_gettmbyobj( int parameter_1,float parameter_2,long parameter_3);
int v_luaT_callbinTM( char parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5);
void v_luaT_trybinTM( float parameter_1,int parameter_2,long parameter_3,int parameter_4,double parameter_5);
void v_luaV_concat( char parameter_1,int parameter_2);
int v_luaO_utf8esc( char parameter_1,short parameter_2);
void v_luaO_tostring( short parameter_1,unsigned int parameter_2);
void v_luaO_pushfstring( double parameter_1,double parameter_2,float parameter_3);
void v_luaD_inctop( double parameter_1);
int v_luaS_createlngstrobj( short parameter_1,long parameter_2);
float v_luaM_toobig( unsigned int parameter_1);
int v_createstrobj( short parameter_1,float parameter_2,int parameter_3,double parameter_4);
void v_luaS_resize( int parameter_1,int parameter_2);
long v_internshrstr( short parameter_1,float parameter_2,long parameter_3,int uni_para);
void v_luaS_newlstr( float parameter_1,short parameter_2,char parameter_3,int uni_para);
void v_pushstr( int parameter_1,double parameter_2,float parameter_3);
char v_luaO_pushvfstring( double parameter_1,double parameter_2,unsigned int parameter_3);
unsigned int v_luaG_runerror( short parameter_1,char parameter_2,long parameter_3,int uni_para);
int v_luaO_ceillog2( char parameter_1);
int v_setnodevector( char parameter_1,double parameter_2,unsigned int parameter_3,int uni_para);
void v_luaC_newobj( short parameter_1,int parameter_2,char parameter_3);
long v_luaH_new( double parameter_1,int uni_para);
long v_init_registry( char parameter_1,unsigned int parameter_2);
unsigned int v_stack_init( char parameter_1,int parameter_2);
int v_f_luaopen( long parameter_1);
int v_luaD_rawrunprotected( short parameter_1,unsigned int parameter_2);
unsigned int v_luaS_hash( short parameter_1,unsigned int parameter_2,long parameter_3,int uni_para);
float v_makeseed( double parameter_1);
char v_preinit_thread( short parameter_1,char parameter_2);
int v_lua_newstate( short parameter_1);
double v_luaL_newstate();
float v_lua_close( double parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	v_close_state(long_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_1;
	char_1 = char_2;
	return float_1;
}
float v_lua_pushlightuserdata( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	short_1 = short_1 * short_1;
	short_2 = short_1 + short_1;
	float_1 = float_1 * float_1;
	short_2 = short_1 + short_3;
	return float_2;
}
float v_lua_pushinteger( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int_1 = int_1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	return float_1;
}
double v_l_print( double parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float_1 = v_luaL_checkstack(char_1,int_1,short_1,-1 );

	short_2 = v_l_message(float_1,long_1);

	double_1 = double_1 + double_1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		short_3 = v_lua_pushfstring(int_2,char_2,long_2);

		float_3 = float_1 + float_2;
		int_3 = int_1 + int_2;
		v_lua_gettop(unsigned_int_1);

		int_1 = int_3;
		if(1)
		{
			short_1 = v_lua_getglobal(long_2,int_2);

			double_1 = double_1;
		}
	}
	return double_2;
}
char v_incomplete( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int_1 = int_1 * int_1;
		char_1 = v_lua_tolstring(long_1,int_2,double_1);

		int_4 = int_2 + int_3;
		if(1)
		{
			int_2 = int_3;
		}
	}
	return char_1;
}
char v_lua_tolstring( long parameter_1,int parameter_2,double parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long_1 = long_1;
	if(1)
	{
		float float_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		if(1)
		{
			if(1)
			{
				double_1 = v_index2addr(short_1,int_1);

				float_1 = float_2;
			}
		}
		long_2 = long_2 * long_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_2;
		float_1 = float_2 + float_1;
		int_2 = int_3;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3 + float_3;
	}
	return char_1;
	v_luaO_tostring(short_1,unsigned_int_2);

}
int v_multiline( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_4 = 1;
	char char_5 = 1;
	long long_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_4 = 1;
		int int_3 = 1;
		char_3 = char_1 + char_2;
		char_2 = v_incomplete(double_1,int_1);

		double_1 = double_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "<") < 0)
		{
			float float_2 = 1;
			float_1 = v_lua_concat(char_1,int_1);

			float_2 = float_1;
		}
		unsigned_int_2 = v_pushline(int_2,int_1);

		char_1 = char_4;
		int_2 = int_2 * int_3;
		char_3 = char_3 + char_2;
	}
	return int_4;
	char_5 = v_lua_tolstring(long_1,int_2,double_1);

}
long v_addreturn( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short_3 = short_1 + short_2;
	int_1 = int_1;
	short_3 = short_2 + short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		short_1 = short_2 * short_3;
	}
	return long_1;
	short_3 = v_lua_pushfstring(int_2,char_1,long_2);

}
unsigned int v_lua_pushlstring( double parameter_1,long parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = v_luaS_new(short_1,short_2,-1 );

	long_2 = long_1 + long_2;
	float_2 = float_1 + float_1;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_3;
	float_2 = float_1;
	v_luaS_newlstr(float_1,short_1,char_1,-1 );

	float_1 = float_3 * float_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	return unsigned_int_3;
}
int v_get_prompt( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_1;
	short_1 = v_lua_getglobal(long_1,int_1);

	double_2 = double_1 + double_1;
	int_1 = int_1 + int_2;
	if(1)
	{
		char_2 = char_2 + char_2;
	}
	return int_2;
}
unsigned int v_pushline( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	short_1 = v_lua_pushfstring(int_2,char_1,long_1);

	short_3 = short_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_2 = char_2 * char_1;
	long_1 = long_1 * long_2;
	if(1)
	{
		unsigned_int_1 = v_lua_pushlstring(double_1,long_2,short_4);

		int_1 = int_1 + int_1;
	}
	if(1)
	{
		short short_5 = 1;
		int_2 = v_get_prompt(short_3,int_2);

		short_3 = short_5 * short_5;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 + int_3;
	}
	int_1 = int_5 * int_6;
	return unsigned_int_1;
}
char v_loadline( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	short_1 = short_1 * short_2;
	return char_1;
	float_1 = float_2 * float_1;
	if(1)
	{
	}
	if(1)
	{
		short short_3 = 1;
		unsigned_int_1 = v_pushline(int_1,int_1);

		short_3 = short_2 * short_2;
	}
	double_2 = double_1 + double_1;
	v_lua_settop(char_2,int_2);

	int_2 = v_multiline(double_1);

	int_2 = int_2 + int_1;
	return char_3;
	v_lua_gettop(unsigned_int_1);

}
double v_doREPL( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_report(float_1,int_1);

	char_1 = char_1 + char_1;
	double_1 = double_1 + double_1;
	long_2 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		int_1 = int_2 + int_1;
	}
	if(1)
	{
		double_2 = v_l_print(double_3);

		int_1 = int_2 * int_1;
		char_1 = v_loadline(char_1);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_2 * int_1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_5 = 1;
		char_2 = char_2 * char_1;
		float_3 = float_1 + float_2;
		v_docall(char_2,int_1,int_1,-1 );

		unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	}
	v_lua_settop(char_2,int_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	return double_2;
}
char v_lua_rawgeti( float parameter_1,int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float_1 = v_luaH_getint(double_1,short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	double_2 = double_2 + double_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	double_2 = v_index2addr(short_1,int_1);

	int_2 = int_2 * int_2;
	int_2 = int_1;
	char_3 = char_1 + char_2;
	return char_1;
}
long v_lua_tointegerx( int parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	long_2 = long_1 * long_2;
	int_2 = int_1 + int_2;
	double_1 = v_index2addr(short_1,int_3);

	long_2 = long_1 * long_1;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "j5") == 0)
	{
		short_2 = short_2 + short_1;
	}
	return long_1;
}
float v_lua_len( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char_3 = char_1 * char_2;
	double_1 = v_index2addr(short_1,int_1);

	short_1 = short_1 * short_1;
	short_1 = short_1 + short_1;
	char_4 = char_4 * char_1;
	v_luaV_objlen(int_1,int_2,int_1);

	int_3 = int_3 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return float_1;
}
unsigned int v_luaL_len( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_2;
	long_2 = long_1 + long_1;
	double_2 = v_luaL_error(unsigned_int_1,short_1,double_1,-1 );

	double_2 = double_2 + double_3;
	long_2 = v_lua_tointegerx(int_1,int_1,int_2);

	int_4 = int_2 + int_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "K$") < 0)
	{
		float float_1 = 1;
		float_2 = float_1 + float_1;
	}
	short_1 = short_1 * short_1;
	return unsigned_int_1;
	float_2 = v_lua_len(double_1,int_2);

}
char v_pushargs( char parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	char_1 = v_lua_rawgeti(float_1,int_1,unsigned_int_1);

	long_2 = long_1 * long_2;
	if(1)
	{
		int int_3 = 1;
		unsigned_int_2 = v_luaL_len(int_2,int_1);

		int_2 = int_3 + int_2;
	}
	double_3 = double_1 + double_2;
	double_4 = v_luaL_error(unsigned_int_3,short_1,double_2,-1 );

	float_2 = v_luaL_checkstack(char_2,int_4,short_1,-1 );

	int_4 = int_4 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_3 + float_3;
	}
	short_1 = v_lua_getglobal(long_3,int_5);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	return char_1;
}
double v_handle_script( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	int_3 = int_1 + int_2;
	char_1 = v_pushargs(char_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		short short_1 = 1;
		float_1 = float_1 + float_1;
		short_1 = short_1 + short_1;
	}
	return double_1;
	v_docall(char_1,int_1,int_4,-1 );

	v_report(float_1,int_2);

}
short v_lua_getglobal( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = v_auxgetstr(int_1,short_1,float_1);

	float_1 = v_luaH_getint(double_1,short_2);

	long_2 = long_1 + long_1;
	return short_1;
}
double v_dolibrary( int parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double_1 = double_1;
	float_1 = float_2;
	float_2 = float_3;
	double_2 = double_2 + double_2;
	char controller4vul_331[3];
	fgets(controller4vul_331 ,3 ,stdin);
	if( strcmp( controller4vul_331, "jm") < 0)
	{
		float float_4 = 1;
		v_docall(char_1,int_1,int_1,uni_para);

		float_3 = float_2 * float_4;
	}
	return double_3;
}
long v_runargs( unsigned int parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double_2 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_1;
		char controller4vul_329[3];
		fgets(controller4vul_329 ,3 ,stdin);
		if( strcmp( controller4vul_329, "70") > 0)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_5 = 1;
			float float_6 = 1;
			int_1 = int_1;
			float_3 = float_1 * float_2;
			char controller4vul_330[3];
			fgets(controller4vul_330 ,3 ,stdin);
			if( strcmp( controller4vul_330, "r$") > 0)
			{
				float float_4 = 1;
				double_1 = v_dolibrary(int_1,char_1,uni_para);

				float_5 = float_1 + float_4;
			}
			short_2 = short_1 * short_2;
			float_1 = float_6 + float_5;
			if(1)
			{
			}
		}
	}
	return long_1;
}
char v_dostring( int parameter_1,short parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	return char_1;
	unsigned_int_1 = v_dochunk(unsigned_int_1,int_1);

}
void v_report( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short_1 = short_1 + short_1;
		short_1 = v_l_message(float_1,long_1);

		int_1 = int_1 + int_2;
		int_3 = int_3 + int_1;
	}
}
unsigned int v_lstop( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = v_lua_sethook(char_1,short_1,int_1,int_2);

	double_1 = v_luaL_error(unsigned_int_3,short_2,double_2,-1 );

	char_2 = char_3;
	return unsigned_int_4;
}
long v_lua_sethook( char parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int_2 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short_1 = short_2;
	}
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	long_1 = long_1 * long_2;
	short_1 = short_2 + short_2;
	return long_1;
}
float v_laction( int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long_1 = v_lua_sethook(char_1,short_1,int_1,int_1);

	unsigned_int_1 = v_lstop(float_1,float_2);

	double_1 = double_1 + double_1;
	int_1 = int_2;
	return float_2;
}
void v_lua_settop( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	float_1 = float_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
	}
}
char v_lua_copy( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_2;
	int_2 = int_1 * int_3;
	char_1 = char_2;
	char_1 = char_2 + char_1;
	int_5 = int_1 * int_4;
	char_3 = char_1;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		double_1 = v_index2addr(short_1,int_5);

		char_5 = char_4 * char_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
float v_lua_rawequal( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double_1 = v_index2addr(short_1,int_1);

	float_3 = float_1 + float_2;
	short_3 = short_2 + short_2;
	long_1 = long_1;
	return float_2;
}
long v_findindex( double parameter_1,char parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	short_1 = v_mainposition(int_1,long_1);

	unsigned_int_1 = v_luaG_runerror(short_1,char_1,long_1,-1 );

	float_1 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_2 = short_2 * short_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			long long_2 = 1;
			if(1)
			{
				float_1 = v_arrayindex(int_1);

				double_1 = double_1 * double_3;
			}
			long_1 = long_2 + long_1;
			if(1)
			{
				double_3 = double_2 * double_1;
			}
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
			}
		}
	}
	return long_1;
}
int v_luaH_next( unsigned int parameter_1,float parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_1 = double_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			int_2 = int_4 * int_2;
			unsigned_int_3 = unsigned_int_1;
		}
	}
	return int_3;
	long_1 = v_findindex(double_2,char_1,long_2);

}
double v_lua_next( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_7 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	int_3 = int_1 + int_1;
	double_3 = double_1 + double_2;
	int_2 = int_3;
	char_1 = char_1 + char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Xa") < 0)
	{
		int int_5 = 1;
		int_5 = int_2 * int_4;
	}
	if(1)
	{
		int int_6 = 1;
		int_4 = v_luaH_next(unsigned_int_4,float_1,char_1);

		int_6 = int_4;
	}
	char_1 = char_1 * char_2;
	return double_2;
	double_3 = v_index2addr(short_1,int_7);

}
double v_lua_pushnil( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	char_3 = char_1 + char_2;
	return double_1;
}
double v_findfield( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_2;
	double_3 = v_lua_next(long_1,int_1);

	int_2 = int_2 * int_3;
	unsigned_int_1 = v_lua_type(float_1,int_4);

	float_1 = v_lua_concat(char_1,int_2);

	float_1 = float_1 + float_1;
	long_3 = long_2 + long_2;
	return double_3;
	double_3 = v_lua_pushnil(char_2);

	float_2 = v_lua_rawequal(int_2,int_3,int_3);

}
double v_pushglobalfuncname( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2;
	double_1 = v_lua_getfield(short_1,int_1,unsigned_int_1);

	char_1 = v_lua_copy(char_1,int_1,int_1);

	double_3 = double_2 + double_2;
	if(1)
	{
		int int_3 = 1;
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			int_1 = int_1;
			unsigned_int_2 = unsigned_int_1;
		}
		v_lua_gettop(unsigned_int_2);

		double_2 = v_findfield(short_2,int_2,int_2);

		int_2 = int_3 + int_4;
		long_1 = v_lua_pushstring(int_4,unsigned_int_2);

		int_1 = int_1 + int_5;
	}
	if(1)
	{
		double_1 = double_2;
	}
	return double_1;
	int_2 = v_lua_getinfo(float_1,short_2,char_1,-1 );

	v_lua_settop(char_3,int_4);

}
float v_pushfuncname( char parameter_1,long parameter_2)
{
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	if(1)
	{
		int int_1 = 1;
		double double_2 = 1;
		int_2 = int_1 * int_1;
		double_1 = v_pushglobalfuncname(unsigned_int_1,long_1);

		double_1 = double_2 * double_2;
	}
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		float_2 = float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		int int_3 = 1;
		short_1 = v_lua_pushfstring(int_2,char_1,long_2);

		int_2 = int_2 + int_3;
	}
	return float_1;
}
short v_lua_error( double parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long_1 = long_1;
	double_1 = double_2;
	char_1 = v_luaG_errormsg(-1 );

	int_2 = int_1 * int_2;
	return short_1;
}
float v_lua_concat( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_2;
	v_luaV_concat(char_1,int_1);

	int_2 = int_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		char_2 = char_2 + char_1;
	}
	char_1 = char_2 + char_3;
	float_1 = float_2;
	return float_3;
	v_luaS_newlstr(float_3,short_1,char_2,-1 );

}
short v_lua_pushvfstring( char parameter_1,char parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_2 = float_1 * float_1;
	int_1 = int_1 + int_1;
	long_1 = long_1 + long_1;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return short_2;
	char_1 = v_luaO_pushvfstring(double_1,double_2,unsigned_int_1);

}
long v_collectvalidlines( char parameter_1,char parameter_2,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	char controller4vul_340[3];
	fgets(controller4vul_340 ,3 ,stdin);
	if( strcmp( controller4vul_340, "5X") > 0)
	{
		short short_1 = 1;
		double double_2 = 1;
		long_1 = v_luaH_new(double_1,uni_para);

		short_1 = short_1 * short_1;
		double_3 = double_2 + double_2;
	}
	if(1)
	{
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		long long_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_4;
		double_3 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_1 * int_1;
		long_2 = long_1 * long_2;
		int_2 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
	}
	return long_1;
}
short v_getfuncname( int parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	int int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_4 = 1;
	double double_6 = 1;
	short short_5 = 1;
	float float_2 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int_1 = int_2;
	long_1 = long_1 * long_2;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int_3 = int_2 * int_1;
	}
	short_3 = short_1 * short_2;
	char_2 = char_1 * char_1;
	short_3 = short_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_2 * int_1;
	double_1 = v_getobjname(int_4,int_2,int_2,unsigned_int_2);

	int_4 = int_2 * int_5;
	double_2 = double_2;
	double_3 = double_3 * double_1;
	double_1 = double_2;
	long_3 = long_3;
	int_2 = v_currentpc(short_1);

	int_3 = int_6 + int_5;
	double_5 = double_4 + double_3;
	long_1 = long_4 + long_2;
	double_6 = double_5 * double_1;
	short_5 = short_1 * short_1;
	float_2 = float_1 + float_1;
	long_5 = long_4 + long_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	double_1 = double_6 + double_4;
	double_5 = double_1;
	int_4 = int_4 + int_5;
	float_2 = float_3 * float_3;
	double_5 = double_5 + double_1;
	int_3 = int_3 + int_5;
	return short_3;
}
double v_funcinfo( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		short short_2 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short_2 = short_1 + short_2;
		char_2 = char_1 + char_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1;
		double_1 = double_2;
		double_3 = double_1 * double_3;
		long_1 = long_1;
		v_luaO_chunkid(char_1,short_1,unsigned_int_3);

		long_2 = long_1 + long_2;
	}
	int_2 = int_1 * int_2;
	return double_2;
}
unsigned int v_auxgetinfo( char parameter_1,long parameter_2,char parameter_3,int parameter_4,char parameter_5)
{
	int int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long_2 = long_1 * long_2;
		short_2 = short_1 + short_1;
		double_1 = double_1 * double_1;
		double_2 = v_currentline(double_1);

		char_1 = char_1 + char_1;
		short_2 = short_2 * short_2;
		if(1)
		{
			long long_3 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			long_2 = long_3 + long_1;
		}
		if(1)
		{
			float float_1 = 1;
			float_3 = float_1 + float_2;
			int_2 = int_2 * int_1;
		}
		double_2 = v_funcinfo(long_2,unsigned_int_2);

		int_3 = int_2 * int_1;
		short_1 = v_getfuncname(int_2,double_2,int_3);

		char_1 = char_1;
		float_3 = float_2 * float_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
			short_1 = short_1 + short_1;
		}
		int_1 = int_1 + int_4;
		char_2 = char_1 + char_2;
		int_5 = int_1 + int_3;
	}
	return unsigned_int_2;
}
short v_swapextra( double parameter_1)
{
	short short_1 = 1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		short_1 = short_2;
	}
	return short_1;
}
int v_lua_getinfo( float parameter_1,short parameter_2,char parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_2;
	short_2 = short_1 * short_1;
	float_3 = float_1 + float_2;
	double_2 = double_1 * double_1;
	int_3 = int_1 * int_2;
	char controller4vul_339[3];
	fgets(controller4vul_339 ,3 ,stdin);
	if( strcmp( controller4vul_339, "}B") < 0)
	{
		int int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long_1 = v_collectvalidlines(char_1,char_1,uni_para);

		short_2 = short_2 + short_1;
		int_2 = int_4 * int_4;
		double_2 = double_1 * double_3;
		double_3 = double_4 * double_4;
		float_1 = float_4;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		float_5 = float_5 * float_5;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		char_1 = char_2 + char_3;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	short_3 = short_2 + short_3;
	if(1)
	{
		long_1 = long_1 * long_1;
		float_5 = float_2 * float_4;
	}
	int_3 = int_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
	}
	float_3 = float_5 * float_3;
	return int_5;
}
float v_luaL_where( double parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 + int_1;
	char controller4vul_337[3];
	fgets(controller4vul_337 ,3 ,stdin);
	if( strcmp( controller4vul_337, "u2") > 0)
	{
		unsigned_int_1 = unsigned_int_1;
		char controller4vul_338[3];
		fgets(controller4vul_338 ,3 ,stdin);
		if( strcmp( controller4vul_338, "s$") > 0)
		{
			float float_2 = 1;
			float float_3 = 1;
			int_1 = v_lua_getinfo(float_1,short_1,char_1,uni_para);

			float_3 = float_2 + float_3;
		}
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return float_1;
}
double v_luaL_error( unsigned int parameter_1,short parameter_2,double parameter_3,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_1 = v_luaL_where(double_1,int_1,uni_para);

	short_1 = short_1 * short_1;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_1;
	float_2 = float_1 * float_1;
	double_3 = double_2 + double_1;
	return double_4;
}
void v_luaD_growstack( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_3 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
		unsigned_int_1 = v_luaD_throw(char_1,int_1);

		int_3 = int_1 * int_2;
	}
	if(1)
	{
		double double_1 = 1;
		short short_2 = 1;
		v_luaD_reallocstack(float_1,int_1);

		int_3 = int_3 * int_1;
		double_1 = double_1;
		if(1)
		{
			short short_1 = 1;
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			short_3 = short_3 + short_2;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
			float_1 = float_2 + float_2;
		}
		if(1)
		{
			unsigned_int_1 = v_luaG_runerror(short_3,char_1,long_1,-1 );

			int_1 = int_2 + int_2;
		}
	}
}
double v_growstack( char parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_1;
	long_1 = long_1 + long_2;
	return double_1;
	v_luaD_growstack(float_1,int_1);

}
char v_lua_checkstack( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	long_2 = long_1 + long_2;
	double_1 = v_growstack(char_1);

	int_2 = int_1 + int_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int_2 = v_luaD_rawrunprotected(short_1,unsigned_int_1);

		int_2 = int_1 * int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			double double_3 = 1;
			double_1 = double_1 * double_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	return char_2;
}
float v_luaL_checkstack( char parameter_1,int parameter_2,short parameter_3,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char controller4vul_335[2];
	fgets(controller4vul_335 ,2 ,stdin);
	if( strcmp( controller4vul_335, "s") < 0)
	{
		char controller4vul_336[2];
		fgets(controller4vul_336 ,2 ,stdin);
		if( strcmp( controller4vul_336, "9") > 0)
		{
			double_1 = v_luaL_error(unsigned_int_1,short_1,double_1,uni_para);

			float_1 = float_1 + float_1;
		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "_") == 0)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_1 = double_2 * double_3;
		}
	}
	return float_1;
}
unsigned int v_lua_getstack( double parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_2;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double_1 = double_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
		int_1 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	short_1 = short_3 + short_1;
	return unsigned_int_2;
}
double v_lastlevel( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_2 = short_1 * short_1;
	double_2 = double_1 + double_1;
	double_1 = double_1 + double_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = v_lua_getstack(double_2,int_2,long_1);

	int_5 = int_3 * int_4;
	int_2 = int_4 + int_5;
	int_1 = int_3 + int_5;
	float_3 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return double_2;
}
short v_luaL_traceback( double parameter_1,double parameter_2,long parameter_3,int parameter_4,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	char_2 = char_1 * char_2;
	double_3 = double_1 * double_2;
	char controller4vul_334[3];
	fgets(controller4vul_334 ,3 ,stdin);
	if( strcmp( controller4vul_334, "cm") > 0)
	{
		float_1 = v_luaL_checkstack(char_2,int_1,short_1,uni_para);

		char_3 = char_1 + char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	short_1 = short_1 * short_1;
	char_3 = char_3 * char_4;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	char_2 = char_5 + char_1;
	int_3 = int_2 * int_2;
	float_4 = float_2 + float_3;
	float_3 = float_3 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_3 * int_4;
	}
	double_1 = double_3 + double_1;
	double_5 = double_2 + double_4;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_5 = unsigned_int_7 * unsigned_int_6;
	}
	char_5 = char_1;
	long_2 = long_1 + long_1;
	return short_2;
}
short v_lua_pushfstring( int parameter_1,char parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	char_1 = char_1 * char_2;
	char_1 = v_luaO_pushvfstring(double_1,double_2,unsigned_int_3);

	long_1 = long_1 * long_1;
	double_2 = double_1;
	return short_1;
}
unsigned int v_lua_type( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 * char_1;
	double_1 = v_index2addr(short_1,int_1);

	float_1 = float_1 * float_1;
	return unsigned_int_1;
}
long v_lua_rawget( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_2;
	short_2 = short_1 + short_1;
	double_1 = v_index2addr(short_2,int_1);

	int_3 = v_luaH_get(float_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	char_1 = char_1 + char_1;
	return long_1;
}
unsigned int v_lua_getmetatable( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 + int_2;
	int_3 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_2;
	double_1 = v_index2addr(short_1,int_4);

	char_2 = char_1 * char_1;
	double_1 = double_2;
	int_5 = int_1 * int_1;
	double_3 = double_2 + double_2;
	int_3 = int_5 + int_4;
	short_2 = short_2 * short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Z") < 0)
	{
		char char_3 = 1;
		int int_6 = 1;
		int int_7 = 1;
		char_1 = char_3;
		int_7 = int_5 * int_6;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	double_1 = double_3 + double_3;
	return unsigned_int_3;
}
char v_luaL_getmetafield( char parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_3 = char_1 + char_2;
		unsigned_int_2 = v_lua_getmetatable(int_1,int_2);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			long_1 = v_lua_rawget(char_1,int_3);

			float_2 = float_1 * float_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
	}
	return char_3;
	long_2 = v_lua_pushstring(int_1,unsigned_int_3);

}
unsigned int v_luaL_callmeta( float parameter_1,int parameter_2,float parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "a") > 0)
	{
	}
	long_1 = v_lua_pushvalue(float_1,int_1);

	short_1 = short_2 + short_1;
	unsigned_int_1 = v_lua_absindex(short_3,int_1);

	char_1 = v_luaL_getmetafield(char_1,int_2,char_1);

	int_4 = int_3 * int_3;
	return unsigned_int_2;
}
long v_msghandler( float parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	int_2 = int_1 * int_1;
	char controller4vul_332[3];
	fgets(controller4vul_332 ,3 ,stdin);
	if( strcmp( controller4vul_332, "),") > 0)
	{
		char controller4vul_333[2];
		fgets(controller4vul_333 ,2 ,stdin);
		if( strcmp( controller4vul_333, "S") > 0)
		{
			short_1 = v_luaL_traceback(double_1,double_1,long_1,int_1,uni_para);

		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1;
		}
	}
	char_1 = char_1 * char_1;
	return long_2;
}
void v_lua_gettop( unsigned int parameter_1)
{
}
void v_docall( char parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = v_msghandler(float_1,uni_para);

	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_2;
	char_2 = char_1 + char_2;
	long_2 = long_2 * long_3;
	double_2 = double_3;
	double_1 = double_1;
	double_3 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
}
unsigned int v_dochunk( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		v_report(float_1,int_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return unsigned_int_2;
	v_docall(char_1,int_2,int_3,-1 );

}
long v_dofile( float parameter_1,short parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	return long_1;
	unsigned_int_1 = v_dochunk(unsigned_int_1,int_1);

}
unsigned int v_handle_luainit( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = v_dofile(float_1,short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float_1 = float_2 + float_1;
		double_1 = double_1 + double_2;
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
	return unsigned_int_2;
	char_1 = v_dostring(int_1,short_2,unsigned_int_4);

}
short v_lua_rawseti( short parameter_1,int parameter_2,double parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_4 = 1;
	double_1 = v_index2addr(short_1,int_1);

	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	int_2 = int_2 + int_3;
	short_3 = short_2 * short_2;
	unsigned_int_3 = unsigned_int_1;
	v_luaH_setint(short_1,double_2,short_3,unsigned_int_3);

	int_3 = int_4;
	double_3 = double_2 + double_3;
	float_5 = float_3 * float_4;
	return short_4;
}
short v_lua_createtable( int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 * long_2;
	double_1 = double_1;
	long_2 = v_luaH_new(double_2,-1 );

	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "n") > 0)
	{
		double double_3 = 1;
		double_4 = double_3 + double_2;
	}
	long_3 = long_3 * long_2;
	double_4 = double_2 * double_2;
	return short_1;
	v_luaH_resize(double_5,unsigned_int_4,double_2,double_4);

}
void v_createargtable( short parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long_1 = v_lua_pushstring(int_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "^") > 0)
	{
		short_1 = v_lua_rawseti(short_2,int_2,double_1);

		long_1 = long_1 + long_1;
	}
	double_2 = double_2;
	short_2 = v_lua_createtable(int_1,int_1,int_3);

	int_2 = int_2 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		long_1 = v_lua_setglobal(short_3,float_1);

		int_1 = int_2 * int_2;
		char_1 = char_1 + char_2;
	}
	char_2 = char_2 * char_2;
}
long v_lua_setglobal( short parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	short short_2 = 1;
	long long_4 = 1;
	char_2 = char_1 * char_1;
	float_1 = v_luaH_getint(double_1,short_1);

	long_2 = long_1 + long_1;
	double_3 = double_2 + double_1;
	return long_3;
	short_2 = v_auxsetstr(char_1,long_4,short_1);

}
long v_lua_pushstring( int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long_2 = long_1 + long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "]v") > 0)
	{
		long_1 = long_2 * long_2;
	}
	if(1)
	{
		char char_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		char_1 = char_1;
	}
	char_2 = char_2 + char_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = v_luaS_new(short_1,short_2,-1 );

	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	return long_1;
}
long v_lua_toboolean( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	return long_1;
	double_1 = v_index2addr(short_1,int_2);

}
long v_lua_pushvalue( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	long_1 = long_1 * long_2;
	double_1 = v_index2addr(short_1,int_1);

	char_2 = char_1 + char_1;
	return long_2;
}
unsigned int v_lua_absindex( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long v_auxgetstr( int parameter_1,short parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	short_1 = short_1 + short_2;
	long_1 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_1 = v_luaH_getstr(unsigned_int_1,short_3);

		float_1 = float_1;
		v_luaV_finishget(unsigned_int_2,char_1,short_2,char_1,char_2);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int int_2 = 1;
		char_4 = char_3 * char_2;
		char_1 = char_5 * char_3;
		unsigned_int_4 = v_luaS_new(short_1,short_4,-1 );

		int_2 = int_2 * int_2;
	}
	float_1 = float_1 + float_1;
	return long_1;
}
double v_lua_getfield( short parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double_1 = v_index2addr(short_1,int_1);

	short_2 = short_2;
	return double_2;
	long_1 = v_auxgetstr(int_1,short_1,float_1);

}
short v_luaL_getsubtable( short parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_5 = 1;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		int int_4 = 1;
		unsigned_int_1 = v_lua_absindex(short_1,int_1);

		short_3 = short_2 * short_1;
		long_1 = v_lua_pushvalue(float_1,int_1);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		int_2 = int_2;
		double_1 = v_lua_getfield(short_4,int_3,unsigned_int_3);

		char_1 = v_lua_setfield(float_2,int_1,char_1);

		unsigned_int_1 = unsigned_int_3;
		int_1 = int_4 * int_2;
	}
	return short_5;
}
long v_luaL_requiref( char parameter_1,char parameter_2,double parameter_3,int parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long_1 = v_lua_toboolean(int_1,int_1);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		long_1 = v_lua_pushstring(int_2,unsigned_int_2);

		long_2 = v_lua_pushvalue(float_1,int_1);

		double_2 = double_1 * double_2;
		int_4 = int_3 + int_2;
		short_1 = v_luaL_getsubtable(short_2,int_1,double_3);

		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
		long_2 = v_lua_setglobal(short_2,float_1);

		short_1 = short_1 * short_1;
	}
	short_2 = short_3;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "S") < 0)
	{
		double double_4 = 1;
		float_1 = float_1;
		double_2 = v_lua_getfield(short_2,int_1,unsigned_int_4);

		double_4 = double_3;
	}
	return long_3;
	char_2 = v_lua_setfield(float_2,int_2,char_2);

}
int v_luaL_openlibs( char parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	long_1 = v_luaL_requiref(char_1,char_2,double_1,int_1);

	short_2 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 * double_2;
		long_1 = long_1 * long_1;
	}
	return int_2;
}
void v_luaV_finishset( short parameter_1,float parameter_2,char parameter_3,char parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	long long_2 = 1;
	float float_6 = 1;
	int int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_1 = v_luaH_newkey(char_1,double_1,short_1);

		v_luaT_callTM(int_1,char_2,short_2,int_2,char_1,int_3);

		int_3 = int_2 * int_3;
		if(1)
		{
			float float_2 = 1;
			float float_5 = 1;
			double double_2 = 1;
			short_2 = v_luaT_gettmbyobj(int_1,float_1,long_1);

			float_2 = float_2;
			float_5 = float_3 + float_4;
			int_3 = v_luaG_typeerror(long_1,long_1,char_1);

			double_2 = double_2 * double_1;
			if(1)
			{
				if(1)
				{
					double_2 = double_1 * double_2;
				}
				unsigned_int_4 = v_luaG_runerror(short_2,char_3,long_2,-1 );

				float_6 = float_4 * float_3;
				int_4 = v_luaH_get(float_6,unsigned_int_4);

				long_1 = long_1 + long_1;
				long_1 = long_1 * long_2;
			}
		}
		if(1)
		{
			if(1)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_4 = double_1 + double_3;
			}
		}
		if(1)
		{
			float_3 = float_1;
		}
		float_4 = float_1 + float_6;
		if(1)
		{
		}
	}
	int_3 = int_2;
}
short v_auxsetstr( char parameter_1,long parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_2;
	float_2 = float_1 + float_1;
	unsigned_int_1 = v_luaS_new(short_1,short_1,-1 );

	int_3 = int_1 * int_2;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_3 = v_luaH_getstr(unsigned_int_1,short_3);

		int_5 = int_4 + int_5;
	}
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_6 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_1 = double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_2 * int_6;
		double_3 = double_1 * double_2;
	}
	short_5 = short_2 * short_4;
	return short_3;
	v_luaV_finishset(short_4,float_3,char_1,char_1,char_1);

}
char v_lua_setfield( float parameter_1,int parameter_2,char parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short_1 = v_auxsetstr(char_1,long_1,short_1);

	char_3 = char_2 + char_1;
	double_1 = v_index2addr(short_2,int_1);

	long_1 = long_2 + long_3;
	return char_1;
}
long v_lua_pushboolean( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_1 * short_2;
	long_1 = long_1 * long_1;
	long_1 = long_1;
	float_1 = float_2;
	return long_1;
}
long v_print_version()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	return long_1;
}
long v_print_usage( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return long_1;
}
double v_collectargs( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int_1 = int_1 + int_1;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		int int_4 = 1;
		double double_1 = 1;
		int_1 = int_2;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "eH") < 0)
		{
		}
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
		int_1 = int_3;
		float_1 = float_1 + float_2;
		long_1 = long_2;
		if(1)
		{
		}
		short_1 = short_1 + short_1;
		int_3 = int_4 + int_3;
		int_4 = int_2 * int_4;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
			}
		}
		double_1 = double_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_2;
}
double v_index2addr( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float_1 = float_1 + float_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		double_2 = double_2 + double_1;
	}
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
		int_2 = int_1 + int_2;
		if(1)
		{
		}
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double_2 = double_3 * double_4;
			char_2 = char_1 + char_2;
		}
	}
	return double_2;
}
float v_lua_touserdata( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double_1 = v_index2addr(short_1,int_1);

	short_1 = short_2 + short_1;
	return float_1;
}
double v_pmain( char parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_4 = 1;
	short short_4 = 1;
	short_1 = short_1 * short_2;
	short_3 = short_1 * short_1;
	float_1 = float_1 * float_2;
	long_1 = long_1 * long_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_3;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		char char_2 = 1;
		double_2 = double_1 * double_2;
		char_2 = char_1 + char_1;
	}
	double_2 = double_3 + double_4;
	double_4 = double_5 + double_4;
	char controller4vul_327[3];
	fgets(controller4vul_327 ,3 ,stdin);
	if( strcmp( controller4vul_327, "2:") > 0)
	{
		char controller4vul_328[2];
		fgets(controller4vul_328 ,2 ,stdin);
		if( strcmp( controller4vul_328, "s") < 0)
		{
			long_1 = v_runargs(unsigned_int_1,char_1,int_1,uni_para);

		}
	}
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		long_3 = long_4 + long_2;
	}
	if(1)
	{
		if(1)
		{
			float float_4 = 1;
			char char_3 = 1;
			float_4 = float_4;
			char_1 = char_3 + char_1;
		}
		if(1)
		{
			long_2 = long_1 + long_4;
		}
	}
	short_1 = short_4;
	return double_5;
}
short v_l_message( float parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "v") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	short_1 = short_2;
	return short_3;
}
float v_panic( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_1;
	return float_2;
}
float v_lua_atpanic( short parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_2;
	char_2 = char_1 * char_2;
	char_4 = char_1 + char_3;
	float_3 = float_1 * float_2;
	double_1 = double_1;
	return float_1;
}
char v_l_alloc(long parameter_3,long parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_1 = char_1 + char_2;
	short_1 = short_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "4") > 0)
	{
	}
	return char_1;
}
long v_freestack( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "dF") < 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	char_1 = char_1;
	char_1 = char_1;
	return long_1;
	v_luaE_freeCI(float_1);

}
short v_dothecall( short parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	v_luaD_callnoyield(char_1,float_1,int_1,-1 );

	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
void v_correctstack( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_1;
		double_4 = double_3 * double_1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 + long_2;
		}
	}
}
void v_luaD_reallocstack( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1;
	short_1 = short_1 + short_1;
	int_2 = int_2 + int_1;
	v_correctstack(long_1,double_1);

	int_2 = int_2 * int_2;
	int_1 = int_2 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	int_3 = int_1 * int_2;
	float_1 = float_1 * float_1;
	float_2 = float_1 * float_1;
}
void v_luaE_shrinkCI( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
}
void v_luaE_freeCI( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = double_2;
	int_1 = int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_2;
	}
	int_2 = int_2 * int_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3 * int_1;
	}
	double_1 = double_2 + double_2;
	float_2 = float_3 + float_4;
	if(1)
	{
		float_2 = float_3;
	}
	long_3 = long_1 * long_2;
}
long v_stackinuse( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 + double_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
	}
	return long_1;
}
void v_luaD_shrinkstack( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_3 = 1;
	float_2 = float_1 + float_2;
	v_luaD_reallocstack(float_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		long_1 = v_stackinuse(char_3);

		v_luaE_shrinkCI(float_1);

		int_3 = int_2 * int_1;
	}
	v_luaE_freeCI(float_1);

}
int v_luaD_pcall( short parameter_1,unsigned int parameter_2,float parameter_4,int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_2;
	int_1 = int_2 + int_1;
	char_2 = char_1 + char_1;
	short_1 = short_1 + short_2;
	char_1 = char_2 * char_2;
	v_luaF_close(float_1,double_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		long long_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_2 = 1;
		short_3 = short_2;
		int_1 = v_luaD_rawrunprotected(short_1,unsigned_int_3);

		long_2 = long_1 * long_1;
		double_1 = double_1 * double_1;
		char_2 = char_2 + char_2;
		int_4 = int_1 + int_3;
		v_luaD_shrinkstack(long_2);

		double_1 = double_1 + double_2;
		float_1 = v_seterrorobj(char_3,int_2,double_1);

		int_3 = int_2;
	}
	short_5 = short_1 * short_4;
	return int_2;
}
int v_udata2finalize( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char_2 = char_1 * char_1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1 * double_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	return int_2;
}
int v_GCTM( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	double_3 = double_1 + double_2;
	int_1 = int_1 + int_2;
	float_3 = float_1 * float_2;
	short_1 = short_1 + short_2;
	float_2 = float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		short_1 = v_luaT_gettmbyobj(int_3,float_1,long_1);

		short_1 = short_2 * short_1;
		v_luaO_pushfstring(double_4,double_4,float_3);

		double_2 = double_3 * double_4;
		unsigned_int_2 = v_luaD_throw(char_1,int_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_3 = int_3;
		double_5 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_3;
		char_1 = char_2 + char_3;
		long_2 = long_2 * long_3;
		int_2 = v_udata2finalize(short_1);

		char_3 = char_3 + char_3;
		int_2 = int_1 + int_2;
		if(1)
		{
			long long_4 = 1;
			if(1)
			{
				double double_6 = 1;
				double double_7 = 1;
				long_2 = long_1;
				unsigned_int_3 = unsigned_int_4;
				double_7 = double_3 + double_6;
			}
			short_1 = v_dothecall(short_3);

			long_4 = long_4;
		}
	}
	return int_3;
	int_2 = v_luaD_pcall(short_2,unsigned_int_4,float_1,int_2);

}
int v_callallpendingfinalizers()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int_1 = int_1 * int_1;
	return int_2;
	int_3 = v_GCTM(long_1,int_4);

}
short v_findlast( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	int_1 = int_3 * int_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
	}
	return short_1;
}
char v_separatetobefnz( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		double_2 = double_1 + double_2;
	}
	char_1 = char_1 * char_1;
	double_1 = double_3 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_4 = 1;
			short_3 = v_findlast(int_1);

			double_3 = double_2 * double_4;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char_1 = char_2 + char_2;
		}
		char_1 = char_2;
		short_2 = short_2 * short_3;
		char_1 = char_2;
	}
	return char_3;
}
void v_luaC_freeallobjects( long parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_5 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int_1 = v_callallpendingfinalizers();

	float_2 = float_1 + float_1;
	float_1 = float_2;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_4 = float_3 + float_3;
	long_2 = long_1 + long_2;
	int_1 = int_2 * int_2;
	float_5 = float_5 * float_3;
	char_1 = v_separatetobefnz(long_2,int_1);

	double_1 = double_1 * double_2;
	long_1 = long_1 + long_1;
	int_2 = int_1 + int_3;
}
void v_close_state( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_2;
	long_1 = long_1;
	double_1 = double_1 + double_3;
	if(1)
	{
		double double_4 = 1;
		double_1 = double_4;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	long_2 = v_freestack(long_1);

	long_4 = long_3 * long_2;
	float_1 = float_1 + float_1;
	v_luaF_close(float_1,double_1);

	v_luaC_freeallobjects(long_1);

}
float v_lua_version( char parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	short_1 = short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
void v_luaX_init( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_4 = 1;
	char_2 = char_1 + char_1;
	long_1 = long_1 * long_1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = v_luaS_new(short_1,short_1,-1 );

		short_3 = short_1 * short_2;
		int_2 = int_1 * int_2;
		short_1 = short_3;
	}
	v_luaC_fix(float_1,short_4);

}
void v_luaT_init( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = v_luaS_new(short_1,short_2,-1 );

	long_1 = long_1 + long_2;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		v_luaC_fix(float_1,short_1);

		long_4 = long_3 + long_2;
		long_3 = long_3 * long_3;
	}
}
void v_luaC_fix( float parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	float_2 = float_1 * float_2;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_2;
}
void v_luaS_init( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	v_luaS_resize(int_1,int_1);

	int_2 = int_2 * int_2;
	unsigned_int_1 = unsigned_int_3;
	v_luaC_fix(float_1,short_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_3 = 1;
			int_3 = int_1 * int_3;
		}
	}
}
char v_luaG_errormsg(int uni_para)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char controller4vul_344[3];
	fgets(controller4vul_344 ,3 ,stdin);
	if( strcmp( controller4vul_344, "&(") > 0)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_luaD_callnoyield(char_1,float_1,int_1,uni_para);

		float_1 = float_1 + float_1;
		int_1 = int_2 * int_3;
		int_3 = int_3 + int_4;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	long_3 = long_1 * long_2;
	return char_2;
}
double v_currentline( double parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	return double_1;
	int_1 = v_currentpc(short_1);

}
void v_luaO_chunkid( char parameter_1,short parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Pf") < 0)
	{
		if(1)
		{
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			double double_1 = 1;
			int_3 = int_1 + int_2;
			double_1 = double_1 * double_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			long long_2 = 1;
			double double_3 = 1;
			long_2 = long_1 + long_2;
			unsigned_int_1 = unsigned_int_3;
			double_2 = double_2 + double_3;
		}
	}
	if(1)
	{
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_3 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		int_2 = int_1 + int_4;
		float_1 = float_1 + float_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			long long_3 = 1;
			if(1)
			{
				int int_5 = 1;
				int_5 = int_4 * int_2;
			}
			if(1)
			{
				int_3 = int_1 + int_2;
			}
			long_1 = long_1 * long_3;
			short_3 = short_1 + short_3;
		}
		short_1 = short_3 + short_3;
	}
}
int v_luaG_addinfo( char parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "{d") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_3 = 1;
		float float_2 = 1;
		v_luaO_chunkid(char_1,short_1,unsigned_int_2);

		v_luaO_pushfstring(double_1,double_2,float_1);

		int_3 = int_2 + int_1;
		float_2 = float_1 + float_1;
	}
	return int_2;
}
float v_copy2buff( short parameter_1,int parameter_2,char parameter_3)
{
	float float_1 = 1;
	return float_1;
}
char v_luaG_opinterror( long parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		int_2 = v_luaG_typeerror(long_1,long_2,char_1);

		char_1 = char_1 * char_2;
	}
	char_2 = char_2 * char_3;
	return char_1;
}
void v_luaG_tointerror( double parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = v_luaG_runerror(short_1,char_1,long_1,-1 );

	float_1 = float_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_2;
	}
	double_2 = double_2 + double_2;
	long_1 = v_varinfo(char_2,char_3);

}
char v_luaG_concaterror( unsigned int parameter_1,float parameter_2,short parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	int_1 = v_luaG_typeerror(long_1,long_2,char_1);

	char_2 = char_2 + char_1;
	return char_1;
}
void v_luaD_callnoyield( char parameter_1,float parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v_luaD_call(float_1,short_1,int_1,uni_para);

	char_2 = char_1 * char_2;
	double_2 = double_1 * double_2;
	double_2 = double_3 + double_1;
}
double v_luaF_findupval( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	long_3 = long_1 * long_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		double_1 = double_1;
	}
	int_3 = int_2 + int_3;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		int int_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int_4 = int_2 * int_2;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
		short_3 = short_3 + short_4;
		if(1)
		{
			double_1 = double_2 * double_1;
		}
	}
	int_1 = int_3 * int_2;
	return double_3;
}
unsigned int v_luaF_newLclosure( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	return unsigned_int_1;
	v_luaC_newobj(short_1,int_1,char_1);

}
short v_pushclosure( long parameter_1,char parameter_2,int parameter_3,float parameter_4,long parameter_5)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 + long_1;
	float_2 = float_1 * float_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_1;
	double_4 = double_3 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			float float_3 = 1;
			double_2 = v_luaF_findupval(double_3,short_3);

			float_1 = float_2 + float_3;
		}
		unsigned_int_2 = v_luaF_newLclosure(double_2,int_2);

		int_1 = int_2;
	}
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double_6 = double_2 * double_5;
	}
	return short_2;
}
char v_getcached( double parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "/") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		float_2 = float_1 + float_2;
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double_1 = double_1;
			if(1)
			{
			}
		}
	}
	return char_1;
}
void v_luaH_resizearray( unsigned int parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 + double_2;
	v_luaH_resize(double_3,unsigned_int_1,double_3,double_2);

	double_2 = double_2 * double_2;
}
short v_forlimit( float parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 * short_1;
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_1 + int_2;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_1 = unsigned_int_3;
			}
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 + double_1;
			if(1)
			{
				int int_4 = 1;
				int_2 = v_luaV_tointeger(int_1,short_2,int_3);

				int_4 = int_2 * int_3;
			}
		}
	}
	return short_3;
}
void v_luaF_close( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	int_4 = int_1 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
	}
	short_1 = short_1 + short_2;
	long_4 = long_2 * long_3;
	if(1)
	{
		float_2 = float_1 + float_2;
	}
	long_1 = long_5 + long_2;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_2 + char_3;
	if(1)
	{
		short_1 = short_2 * short_1;
	}
	if(1)
	{
	}
	char_3 = char_2 * char_2;
}
long v_LEnum( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_1 = v_LEintfloat(int_1,short_1);

		char_3 = char_2 * char_3;
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
	return long_1;
	short_2 = v_LTintfloat(int_2,unsigned_int_1);

}
int v_luaV_lessequal( char parameter_1,int parameter_2,short parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
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
	char controller4vul_346[3];
	fgets(controller4vul_346 ,3 ,stdin);
	if( strcmp( controller4vul_346, "3$") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		char_2 = char_1 * char_2;
		double_1 = double_2;
		long_2 = long_1 * long_1;
		char controller4vul_347[2];
		fgets(controller4vul_347 ,2 ,stdin);
		if( strcmp( controller4vul_347, "k") > 0)
		{
			int int_2 = 1;
			short_3 = v_luaG_ordererror(short_2,unsigned_int_1,long_1,uni_para);

			int_1 = int_1 * int_2;
		}
	}
	return int_1;
}
short v_luaG_ordererror( short parameter_1,unsigned int parameter_2,long parameter_3,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int_1 = int_1 + int_1;
	short_1 = short_1 + short_2;
	char controller4vul_348[3];
	fgets(controller4vul_348 ,3 ,stdin);
	if( strcmp( controller4vul_348, "6#") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		char_1 = v_luaT_objtypename(short_3,char_1,uni_para);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		short_5 = short_4 * short_2;
	}
	return short_3;
}
int v_luaT_callorderTM( float parameter_1,long parameter_2,double parameter_3,short parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	int_1 = v_luaT_callbinTM(char_1,long_1,int_2,unsigned_int_1,char_1);

}
char v_l_strcmp( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	long_1 = long_1 * long_1;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			float_3 = float_1 * float_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			}
			if(1)
			{
			}
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			int_3 = int_3 + int_3;
			short_2 = short_1 + short_1;
			long_1 = long_1 * long_1;
			short_1 = short_1;
		}
	}
	return char_1;
}
char v_LEintfloat( int parameter_1,short parameter_2)
{
	char char_1 = 1;
	if(1)
	{
		if(1)
		{
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
	}
	return char_1;
}
short v_LTintfloat( int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	if(1)
	{
		if(1)
		{
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
	}
	return short_1;
}
short v_LTnum( long parameter_1,long parameter_2)
{
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 + int_2;
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
	return short_1;
	short_2 = v_LTintfloat(int_2,unsigned_int_1);

	char_1 = v_LEintfloat(int_4,short_2);

}
int v_luaV_lessthan( long parameter_1,short parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		char_1 = v_l_strcmp(char_2,double_1);

		int_1 = v_luaT_callorderTM(float_1,long_1,double_2,short_1);

		int_3 = int_2 * int_1;
	}
	return int_1;
	short_1 = v_LTnum(long_1,long_2);

	short_2 = v_luaG_ordererror(short_2,unsigned_int_1,long_2,-1 );

}
int v_luaS_eqlngstr( float parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
int v_luaV_equalobj( long parameter_1,float parameter_2,char parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double_1 = double_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			float_1 = float_1;
		}
	}
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 * long_1;
	}
	int_1 = v_luaS_eqlngstr(float_1,unsigned_int_1);

	v_luaT_callTM(int_2,char_1,short_1,int_2,char_1,int_3);

	short_1 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1;
	}
	long_2 = long_2 * long_2;
	if(1)
	{
	}
	float_3 = float_3 * float_2;
	return int_4;
}
unsigned int v_unbound_search( float parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		float_2 = v_luaH_getint(double_1,short_2);

		float_2 = float_2 * float_2;
	}
	if(1)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 * double_1;
		}
	}
	return unsigned_int_1;
}
int v_luaH_getn( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_4 = char_3 + char_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	char_3 = char_3 * char_3;
	unsigned_int_4 = v_unbound_search(float_1,unsigned_int_4);

	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	short_2 = short_1 * short_1;
	double_2 = double_2 * double_2;
	return int_1;
}
void v_luaV_objlen( int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	int_1 = int_1;
	if(1)
	{
		int_2 = int_3;
	}
	short_1 = v_luaT_gettmbyobj(int_2,float_1,long_1);

	double_3 = double_1;
	int_4 = v_luaG_typeerror(long_1,long_1,char_1);

	char_1 = char_1 + char_1;
	float_1 = float_1 + float_2;
	int_1 = v_luaH_getn(short_1);

	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_2 + long_3;
	}
	v_luaT_callTM(int_2,char_1,short_1,int_3,char_2,int_4);

	double_1 = double_4;
	short_1 = short_2;
}
void v_luaV_div( float parameter_1,short parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = v_luaG_runerror(short_1,char_1,long_1,-1 );

			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "A?") > 0)
		{
			double_1 = double_1;
		}
	}
}
char v_luaV_mod( int parameter_1,int parameter_2,short parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return char_1;
	unsigned_int_2 = v_luaG_runerror(short_1,char_1,long_2,-1 );

}
long v_luaV_shiftl( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
		}
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
void v_luaV_finishget( unsigned int parameter_1,char parameter_2,short parameter_3,char parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_5 = 1;
	double_2 = double_1 * double_2;
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		if(1)
		{
			char_2 = char_1 * char_1;
			int_1 = v_luaH_get(float_1,unsigned_int_1);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
				float float_2 = 1;
				float_1 = float_2 + float_2;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			int_1 = int_1;
			if(1)
			{
				int_2 = v_luaG_typeerror(long_2,long_3,char_1);

				short_1 = short_2;
			}
		}
		if(1)
		{
			short_4 = short_2 * short_3;
		}
		v_luaT_callTM(int_2,char_1,short_2,int_1,char_1,int_2);

		short_1 = short_1 * short_4;
		if(1)
		{
			short_4 = v_luaT_gettmbyobj(int_3,float_3,long_2);

			unsigned_int_1 = unsigned_int_1;
		}
	}
	unsigned_int_3 = v_luaG_runerror(short_5,char_2,long_1,-1 );

	short_3 = short_4 + short_4;
}
int v_luaH_getstr( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "AA") < 0)
	{
	}
	if(1)
	{
		double double_2 = 1;
		unsigned_int_1 = v_getgeneric(long_1,double_1);

		long_1 = long_1 * long_1;
		double_2 = double_2;
	}
	return int_1;
	int_1 = v_luaH_getshortstr(short_1,long_2);

}
int v_luaO_fb2int( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	return int_1;
}
unsigned int v_getgeneric( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		if(1)
		{
			char char_1 = 1;
			long long_1 = 1;
			char_1 = char_1 + char_1;
			char controller_3[3];
			fgets(controller_3 ,3 ,stdin);
			if( strcmp( controller_3, "]9") < 0)
			{
			}
			long_1 = long_1 + long_2;
		}
	}
	return unsigned_int_1;
	short_1 = v_mainposition(int_1,long_2);

}
int v_luaH_get( float parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float_1 = v_luaH_getint(double_1,short_1);

	int_1 = v_luaV_tointeger(int_1,short_2,int_1);

	double_2 = double_1 * double_1;
	if(1)
	{
	}
	return int_2;
	int_3 = v_luaH_getshortstr(short_2,long_1);

	unsigned_int_1 = v_getgeneric(long_1,double_3);

}
int v_luaH_set( int parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float_1 = v_luaH_newkey(char_1,double_1,short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "5r") < 0)
	{
	}
	if(1)
	{
	}
	return int_1;
	int_2 = v_luaH_get(float_2,unsigned_int_1);

}
char v_computesizes( long parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_2;
	float_1 = float_1 * float_1;
	char_1 = char_1 * char_1;
	char_1 = char_1 + char_2;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				long long_3 = 1;
				long_1 = long_3 * long_1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			}
		}
	}
	int_4 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	return char_2;
}
float v_arrayindex( int parameter_1)
{
	float float_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
	}
	return float_1;
}
short v_countint( float parameter_1,long parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float_1 = v_arrayindex(int_1);

	int_2 = v_luaO_ceillog2(char_1);

	int_1 = int_3 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ";o") > 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_2 * char_3;
	}
	if(1)
	{
	}
	return short_1;
}
double v_numusehash( double parameter_1,double parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double_1 = double_2;
	char_1 = char_1 * char_2;
	return double_1;
	short_1 = v_countint(float_1,long_1);

}
char v_numusearray( int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	long_2 = long_1 * long_1;
	short_2 = short_1 + short_2;
	char_1 = char_1 * char_2;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_5 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_2 = double_1 * double_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
			if(1)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_4 = double_2 + double_3;
			}
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				long_1 = long_3;
			}
		}
		long_3 = long_4 * long_4;
		double_5 = double_5;
	}
	return char_3;
}
long v_rehash( unsigned int parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_4 = 1;
	char char_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char_2 = char_1 + char_2;
	short_1 = v_countint(float_1,long_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_2;
	v_luaH_resize(double_1,unsigned_int_2,double_2,double_3);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	char_3 = v_numusearray(int_1,unsigned_int_5);

	char_2 = char_4 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_3 = int_2 * int_1;
	}
	double_2 = double_1;
	int_2 = int_1 * int_4;
	char_5 = char_1 * char_4;
	double_2 = double_1;
	int_5 = int_5 * int_6;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	double_4 = v_numusehash(double_3,double_1,long_1);

	unsigned_int_5 = unsigned_int_6 * unsigned_int_5;
	return long_2;
	char_5 = v_computesizes(long_2,float_1);

}
long v_getfreepos( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	return long_1;
}
unsigned int v_luaS_hashlongstr( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		short short_2 = 1;
		double double_3 = 1;
		unsigned_int_1 = v_luaS_hash(short_1,unsigned_int_2,long_1,-1 );

		short_2 = short_1 * short_2;
		double_1 = double_3 + double_3;
	}
	return unsigned_int_2;
}
double v_l_hashfloat( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	float_1 = float_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2;
	}
	if(1)
	{
		char char_1 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char_1 = char_1 + char_1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	}
	return double_1;
}
short v_mainposition( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = v_luaS_hashlongstr(double_1);

	int_3 = int_1 + int_2;
	return short_1;
	double_1 = v_l_hashfloat(char_1);

}
float v_l_str2dloc( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_2;
	return float_1;
}
unsigned int v_l_str2d( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_1;
	int_1 = int_2;
	if(1)
	{
	}
	float_1 = float_2 + float_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_4 = 1;
		float_3 = v_l_str2dloc(unsigned_int_1,char_1,int_1);

		double_3 = double_1 * double_2;
		short_1 = short_1 + short_2;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_3;
		float_4 = float_1 + float_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			int_1 = int_2 * int_2;
		}
	}
	return unsigned_int_3;
}
int v_luaO_hexavalue( int parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
float v_isneg( unsigned int parameter_1)
{
	float float_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	return float_1;
}
long v_l_str2int( long parameter_1,double parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	short_2 = short_3;
	float_1 = float_1 + float_1;
	float_2 = v_isneg(unsigned_int_1);

	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	return long_1;
	int_1 = v_luaO_hexavalue(int_2);

}
short v_luaO_str2num( char parameter_1,float parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1;
	long_1 = v_l_str2int(long_2,double_1);

	long_3 = long_1;
	char_2 = char_1 * char_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	if(1)
	{
		short short_2 = 1;
		unsigned_int_1 = v_l_str2d(unsigned_int_1,double_1);

		short_1 = short_1 * short_2;
	}
	if(1)
	{
	}
	return short_1;
}
int v_luaV_tointeger( int parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double_1 = double_2;
	if(1)
	{
		float_1 = float_1 + float_1;
		int_1 = int_1 * int_1;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				short_1 = v_luaO_str2num(char_1,float_1);

				double_2 = double_2 * double_2;
			}
		}
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if(remainder_check(controller_5,100,2))
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_2 + float_2;
		float_3 = float_1;
	}
	return int_1;
}
float v_luaH_newkey( char parameter_1,double parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	float float_2 = 1;
	unsigned_int_1 = v_luaG_runerror(short_1,char_1,long_1,-1 );

	long_2 = v_rehash(unsigned_int_1,int_1,char_1);

	long_2 = long_2 * long_1;
	return float_1;
	int_2 = v_luaV_tointeger(int_2,short_2,int_2);

	short_1 = v_mainposition(int_3,long_3);

	long_4 = v_getfreepos(float_1);

	int_4 = v_luaH_set(int_2,float_2,int_1);

}
float v_luaH_getint( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
			}
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 * char_2;
				if(1)
				{
					double double_1 = 1;
					double_1 = double_1 + double_1;
				}
				char_1 = char_2 + char_1;
			}
		}
	}
	return float_1;
}
void v_luaH_setint( short parameter_1,double parameter_2,short parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = v_luaH_newkey(char_1,double_1,short_1);

	int_1 = int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_3 = float_1 * float_2;
		float_3 = v_luaH_getint(double_1,short_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
}
char v_setarrayvector( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	int_2 = int_1 + int_2;
	return char_1;
}
void v_luaH_resize( double parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_1;
	v_luaH_setint(short_1,double_1,short_2,unsigned_int_1);

	int_1 = int_1 * int_1;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_2;
	if(1)
	{
		double double_2 = 1;
		int_1 = v_luaH_set(int_1,float_1,int_1);

		double_3 = double_1 + double_2;
	}
	char_1 = v_setarrayvector(unsigned_int_3,float_3,int_1);

	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				long long_1 = 1;
				long_1 = long_1 + long_1;
			}
		}
		int_2 = int_1 * int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		int_1 = v_setnodevector(char_1,double_3,unsigned_int_4,-1 );

		int_2 = int_3 * int_2;
		if(1)
		{
			int_2 = int_3;
		}
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "j*") < 0)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	}
}
void v_luaV_execute( float parameter_1,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int_1 = v_luaV_lessequal(char_1,int_1,short_1,uni_para);

	int_1 = int_1 * int_1;
	char_2 = char_1 + char_1;
}
int v_currentpc( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_2;
	return int_3;
}
short v_kname( long parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		double_1 = double_1 + double_1;
		if(1)
		{
			long_2 = long_1 + long_2;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_2;
		if(1)
		{
		}
	}
	long_1 = long_3 * long_2;
	return short_2;
	double_1 = v_getobjname(int_1,int_1,int_2,unsigned_int_1);

}
long v_filterpc( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
}
char v_findsetreg( char parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	int int_6 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	int_1 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int int_5 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_4 = 1;
		long long_5 = 1;
		int_5 = int_1 * int_4;
		short_1 = short_1 * short_1;
		float_3 = float_1 + float_2;
		short_1 = short_1 * short_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_2;
		}
		long_2 = long_1 + long_1;
		if(1)
		{
			char char_2 = 1;
			long_2 = v_filterpc(int_3,int_6);

			char_1 = char_1 * char_2;
		}
		double_3 = double_4;
		if(1)
		{
			float_3 = float_1;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		int_6 = int_4;
		long_3 = long_2 * long_3;
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_5 * unsigned_int_4;
			}
		}
		long_1 = long_4 + long_5;
		if(1)
		{
			short short_2 = 1;
			short_1 = short_1 + short_2;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	}
	return char_1;
}
unsigned int v_luaF_getlocalname( char parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1;
			if(1)
			{
			}
		}
	}
	return unsigned_int_1;
}
double v_getobjname( int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_5 = 1;
	long_1 = long_1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		char char_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		int int_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		char char_4 = 1;
		double double_3 = 1;
		float_1 = float_1 * float_1;
		short_1 = short_1 * short_1;
		char_2 = char_1 + char_1;
		if(1)
		{
		}
		float_4 = float_2 + float_3;
		char_3 = v_upvalname(float_1,int_1);

		double_1 = double_2;
		short_1 = v_kname(long_2,int_1,int_1,char_2);

		int_1 = int_1 * int_2;
		int_2 = int_1 + int_3;
		long_3 = long_1 + long_1;
		long_1 = long_3 * long_4;
		char_4 = char_2 + char_4;
		double_1 = double_3 + double_2;
		if(1)
		{
			int_4 = int_3 + int_1;
		}
		int_3 = int_3 * int_4;
		char_2 = v_findsetreg(char_2,int_4,int_1);

		char_4 = char_3 + char_1;
		int_2 = int_1 + int_3;
		double_2 = double_3 + double_2;
	}
	return double_2;
	unsigned_int_1 = v_luaF_getlocalname(char_5,int_1,int_2);

}
float v_isinstack( short parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	return float_1;
}
char v_upvalname( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
}
short v_getupvalname( char parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			char_1 = v_upvalname(float_1,int_1);

			long_1 = long_2;
		}
	}
	return short_1;
}
long v_varinfo( char parameter_1,char parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_1;
	int_1 = int_2;
	short_1 = v_getupvalname(char_1,int_1,char_2);

	v_luaO_pushfstring(double_1,double_2,float_1);

	double_3 = double_3 * double_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 * short_3;
		if(1)
		{
			float_2 = v_isinstack(short_2,long_1);

			int_3 = v_currentpc(short_1);

			int_2 = int_2 * int_1;
		}
	}
	double_4 = v_getobjname(int_2,int_1,int_2,unsigned_int_1);

	double_3 = double_1 + double_3;
	return long_1;
}
unsigned int v_luaS_new( short parameter_1,short parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_351[2];
		fgets(controller4vul_351 ,2 ,stdin);
		if( strcmp( controller4vul_351, "D") > 0)
		{
			v_luaS_newlstr(float_1,short_1,char_1,uni_para);

		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_2 = 1;
		float_2 = float_2;
	}
	double_3 = double_1 * double_2;
	return unsigned_int_3;
}
char v_luaT_objtypename( short parameter_1,char parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float_3 = float_1 + float_2;
	char controller4vul_349[2];
	fgets(controller4vul_349 ,2 ,stdin);
	if( strcmp( controller4vul_349, "^") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
		char controller4vul_350[2];
		fgets(controller4vul_350 ,2 ,stdin);
		if( strcmp( controller4vul_350, "A") < 0)
		{
			unsigned_int_1 = v_luaS_new(short_1,short_2,uni_para);

		}
	}
	return char_1;
}
int v_luaG_typeerror( long parameter_1,long parameter_2,char parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_1 = v_luaT_objtypename(short_1,char_2,-1 );

	int_2 = int_1 * int_1;
	unsigned_int_1 = v_luaG_runerror(short_1,char_1,long_1,-1 );

	long_1 = v_varinfo(char_2,char_2);

	double_2 = double_1 + double_2;
	return int_1;
}
short v_tryfuncTM( float parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "7I") < 0)
	{
		char char_1 = 1;
		char_3 = char_1 * char_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	}
	short_1 = v_luaT_gettmbyobj(int_1,float_1,long_1);

	char_3 = char_2;
	int_1 = v_luaG_typeerror(long_2,long_1,char_2);

	double_2 = double_2 + double_2;
	return short_2;
}
char v_callhook( double parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float_1 = float_2;
	double_1 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Ee") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1;
		v_luaD_hook(unsigned_int_1,int_1,int_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	char_2 = char_1 * char_1;
	char_3 = char_1 * char_1;
	return char_1;
}
short v_adjust_varargs( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_1;
	char_3 = char_1 + char_2;
	double_2 = double_1 + double_1;
	double_3 = double_2 + double_1;
	char_1 = char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short_1 = short_1 + short_2;
		unsigned_int_1 = unsigned_int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	return short_2;
}
int v_moveresults( int parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	long_2 = long_1 + long_2;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	double_1 = double_1;
	double_1 = double_3 + double_2;
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_2;
		}
	}
	int_1 = int_4 * int_5;
	long_1 = long_2 + long_3;
	return int_2;
}
int v_luaD_poscall( int parameter_1,long parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int_3 = v_moveresults(int_2,int_1,float_1,int_2,int_3);

			int_2 = int_3 + int_3;
			short_3 = short_1 * short_2;
			double_3 = double_1 + double_2;
		}
		float_1 = float_2 + float_3;
	}
	v_luaD_hook(unsigned_int_1,int_4,int_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	return int_1;
}
void v_luaD_hook( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		float float_4 = 1;
		short short_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		double_1 = double_1 * double_2;
		float_1 = float_2;
		double_4 = double_2 + double_3;
		float_3 = float_1;
		long_2 = long_1 * long_2;
		int_2 = int_3;
		char_1 = char_1 + char_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_3 * double_3;
		double_4 = double_4 + double_4;
		short_1 = short_1 * short_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		short_1 = short_2;
		long_4 = long_3 * long_2;
		float_2 = float_4 * float_2;
		short_3 = short_3 * short_2;
		double_3 = double_3 + double_4;
	}
}
int v_luaD_precall( short parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	int int_5 = 1;
	long long_3 = 1;
	short short_7 = 1;
	float float_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1;
	short_2 = short_1 * short_2;
	int_1 = int_1 * int_1;
	char_3 = char_1 * char_2;
	v_luaD_hook(unsigned_int_2,int_2,int_1);

	short_4 = short_3 * short_1;
	float_2 = float_1 + float_1;
	short_3 = v_adjust_varargs(float_2,unsigned_int_1,int_2);

	int_2 = int_2 * int_1;
	short_3 = short_5;
	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1;
	int_1 = int_1 * int_3;
	short_2 = short_6;
	if(1)
	{
		float_1 = float_1;
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
	double_2 = double_1 * double_2;
	int_3 = int_3 * int_4;
	double_1 = double_3;
	int_1 = int_4 * int_1;
	char_1 = v_callhook(double_4,char_3);

	double_5 = double_3 + double_1;
	int_4 = int_2 + int_1;
	double_5 = double_2;
	int_1 = v_luaD_precall(short_5,int_2,int_4);

	char_1 = char_4 + char_3;
	char_5 = char_4;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_1 = v_luaD_poscall(int_1,long_2,float_3,int_1);

			double_1 = double_4 * double_3;
		}
		double_6 = double_2 * double_5;
	}
	if(1)
	{
		int_1 = int_3 * int_1;
	}
	int_5 = int_4 * int_3;
	long_3 = long_1 * long_2;
	int_1 = int_2;
	short_7 = short_5 * short_3;
	double_4 = double_4 * double_6;
	short_5 = v_tryfuncTM(float_1,double_6);

	double_3 = double_6 + double_3;
	float_3 = float_2 * float_4;
	double_2 = double_6 * double_6;
	if(1)
	{
		char char_6 = 1;
		char_2 = char_2 + char_6;
	}
	short_3 = short_7 + short_4;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	return int_5;
}
float v_seterrorobj( char parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_2;
	double_2 = double_3 + double_2;
	double_5 = double_4 + double_4;
	float_2 = float_1 * float_2;
	char_1 = char_1 + char_1;
	float_2 = float_2;
	return float_1;
}
unsigned int v_luaD_throw( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	if(1)
	{
		float float_2 = 1;
		double_1 = double_1 * double_2;
		unsigned_int_1 = v_luaD_throw(char_1,int_1);

		float_2 = float_1 + float_1;
	}
	if(1)
	{
		double double_3 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		double_2 = double_1 + double_3;
		if(1)
		{
			long long_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long_2 = long_1 * long_1;
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			long long_3 = 1;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				float float_3 = 1;
				float float_4 = 1;
				int int_3 = 1;
				int int_4 = 1;
				int int_5 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					float_1 = v_seterrorobj(char_2,int_2,double_4);

					unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
				}
				float_4 = float_3 + float_3;
				int_5 = int_3 + int_4;
			}
			long_2 = long_3;
		}
	}
	return unsigned_int_1;
}
unsigned int v_stackerror( long parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		short short_2 = 1;
		unsigned_int_1 = v_luaD_throw(char_1,int_1);

		short_2 = short_2;
	}
	return unsigned_int_2;
	unsigned_int_3 = v_luaG_runerror(short_1,char_2,long_1,-1 );

}
void v_luaD_call( float parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char controller4vul_345[2];
	fgets(controller4vul_345 ,2 ,stdin);
	if( strcmp( controller4vul_345, "m") > 0)
	{
		float float_2 = 1;
		v_luaV_execute(float_1,uni_para);

		float_1 = float_2 + float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_2 = int_1 + int_1;
}
void v_luaT_callTM( int parameter_1,char parameter_2,short parameter_3,int parameter_4,char parameter_5,int parameter_6)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long_1 = long_1 * long_1;
	long_1 = long_1 + long_1;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	if(1)
	{
		v_luaD_callnoyield(char_3,float_1,int_1,-1 );

		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		v_luaD_call(float_2,short_1,int_1,-1 );

		unsigned_int_2 = unsigned_int_1;
		long_1 = long_1;
	}
}
int v_luaH_getshortstr( short parameter_1,long parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	long_1 = long_1 * long_1;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 * int_1;
			if(1)
			{
			}
			int_2 = int_3 + int_1;
		}
	}
	return int_4;
}
short v_luaT_gettmbyobj( int parameter_1,float parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float_1 = float_1 * float_2;
	int_1 = int_1 + int_1;
	long_1 = long_1 * long_1;
	double_1 = double_1 + double_2;
	int_2 = int_2 + int_2;
	int_3 = v_luaH_getshortstr(short_1,long_1);

	int_3 = int_3 + int_2;
	float_2 = float_3 * float_4;
	return short_1;
}
int v_luaT_callbinTM( char parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	short_1 = v_luaT_gettmbyobj(int_1,float_1,long_1);

	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	return int_3;
	v_luaT_callTM(int_2,char_1,short_2,int_2,char_2,int_2);

}
void v_luaT_trybinTM( float parameter_1,int parameter_2,long parameter_3,int parameter_4,double parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		int int_3 = 1;
		double double_3 = 1;
		float float_2 = 1;
		v_luaG_tointerror(double_1,int_1,float_1);

		int_1 = int_1 + int_2;
		char_1 = v_luaG_opinterror(long_1,double_1,double_2,double_1);

		int_1 = int_2 * int_3;
		if(1)
		{
			char_1 = v_luaG_concaterror(unsigned_int_1,float_1,short_1);

			double_3 = double_1 + double_2;
		}
		if(1)
		{
			int_2 = v_luaT_callbinTM(char_2,long_2,int_2,unsigned_int_2,char_2);

			double_2 = double_3;
		}
		float_2 = float_1 + float_2;
	}
}
void v_luaV_concat( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_5 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	short short_3 = 1;
	char char_7 = 1;
	char_3 = char_1 * char_2;
	int_2 = int_1 * int_2;
	char_2 = char_2 * char_2;
	int_3 = int_1 + int_2;
	int_3 = v_luaS_createlngstrobj(short_1,long_1);

	char_3 = char_4 + char_5;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1;
	float_1 = v_copy2buff(short_2,int_4,char_6);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	v_luaT_trybinTM(float_2,int_5,long_2,int_5,double_1);

	unsigned_int_3 = v_luaG_runerror(short_1,char_5,long_2,-1 );

	v_luaS_newlstr(float_3,short_3,char_7,-1 );

}
int v_luaO_utf8esc( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
void v_luaO_tostring( short parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	long_2 = long_1 * long_2;
	v_luaS_newlstr(float_1,short_1,char_1,-1 );

	char_1 = char_1 * char_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		double double_2 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		char char_3 = 1;
		double double_5 = 1;
		char_2 = char_3 * char_3;
		if(1)
		{
			if(1)
			{
				double double_4 = 1;
				double_1 = double_4 * double_3;
				double_3 = double_4;
			}
		}
		double_1 = double_5 * double_5;
	}
}
void v_luaO_pushfstring( double parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_1;
	int_3 = int_1 * int_2;
	int_4 = int_2 + int_1;
	char_1 = v_luaO_pushvfstring(double_1,double_2,unsigned_int_1);

	int_6 = int_5 + int_2;
}
void v_luaD_inctop( double parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_1 + float_1;
	long_2 = long_1 * long_2;
}
int v_luaS_createlngstrobj( short parameter_1,long parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = v_createstrobj(short_1,float_1,int_2,double_1);

	int_2 = int_2 * int_3;
	short_3 = short_2 + short_2;
	return int_3;
}
float v_luaM_toobig( unsigned int parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_1;
	return float_1;
	unsigned_int_1 = v_luaG_runerror(short_1,char_1,long_2,-1 );

}
int v_createstrobj( short parameter_1,float parameter_2,int parameter_3,double parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = short_2;
	v_luaC_newobj(short_1,int_1,char_1);

	float_1 = float_1 + float_2;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 + long_1;
	char_1 = char_2 + char_1;
	short_3 = short_1;
	long_2 = long_1;
	int_2 = int_1 + int_1;
	return int_3;
}
void v_luaS_resize( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2 + int_2;
	long_1 = long_1;
	long_3 = long_2 + long_3;
	if(1)
	{
		long_1 = long_3;
		if(1)
		{
			short_1 = short_1;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			int_3 = int_1 + int_3;
		}
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			long_3 = long_2 * long_3;
		}
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, ">") < 0)
	{
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_1 = double_2 * double_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
		short_1 = short_2 + short_3;
	}
}
long v_internshrstr( short parameter_1,float parameter_2,long parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	long_1 = long_2;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_354[2];
		fgets(controller4vul_354 ,2 ,stdin);
		if( strcmp( controller4vul_354, "N") > 0)
		{
			char controller4vul_355[3];
			fgets(controller4vul_355 ,3 ,stdin);
			if( strcmp( controller4vul_355, "]T") < 0)
			{
				unsigned_int_4 = v_luaS_hash(short_1,unsigned_int_1,long_1,uni_para);

				long_2 = long_1;
			}
		}
	}
	if(1)
	{
		long long_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		long_2 = long_3;
	}
	char_1 = char_1 + char_1;
	double_2 = double_1 + double_1;
	int_4 = int_3 + int_3;
	char_4 = char_2 + char_3;
	unsigned_int_3 = unsigned_int_4;
	int_2 = int_5 + int_1;
	return long_4;
}
void v_luaS_newlstr( float parameter_1,short parameter_2,char parameter_3,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	char controller4vul_352[2];
	fgets(controller4vul_352 ,2 ,stdin);
	if( strcmp( controller4vul_352, "?") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_2 = double_1 * double_1;
		char controller4vul_353[2];
		fgets(controller4vul_353 ,2 ,stdin);
		if( strcmp( controller4vul_353, "E") < 0)
		{
			unsigned int unsigned_int_1 = 1;
			long_1 = v_internshrstr(short_1,float_1,long_2,uni_para);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		double_1 = double_1 + double_2;
		double_4 = double_1 * double_3;
	}
}
void v_pushstr( int parameter_1,double parameter_2,float parameter_3)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_luaS_newlstr(float_1,short_1,char_1,-1 );

	v_luaD_inctop(double_1);

}
char v_luaO_pushvfstring( double parameter_1,double parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_6 = 1;
		long long_1 = 1;
		int int_7 = 1;
		long long_3 = 1;
		long long_4 = 1;
		float float_4 = 1;
		int int_8 = 1;
		short short_3 = 1;
		float float_5 = 1;
		float float_6 = 1;
		float_3 = float_1 * float_2;
		if(1)
		{
			double_1 = double_1 * double_1;
		}
		short_2 = short_1 + short_1;
		double_2 = double_2;
		if(1)
		{
			v_luaD_inctop(double_2);

			int_3 = int_1 * int_2;
		}
		double_3 = double_1 * double_1;
		double_4 = double_4 * double_2;
		int_2 = int_1 * int_4;
		if(1)
		{
			int_6 = int_5 + int_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		long_2 = long_1 * long_1;
		char_1 = char_1 + char_1;
		int_5 = v_luaO_utf8esc(char_1,short_2);

		char_1 = char_2 + char_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_1 = v_luaG_runerror(short_2,char_1,long_2,-1 );

		int_4 = int_6 * int_7;
		v_luaV_concat(char_3,int_2);

		long_3 = long_2 + long_2;
		long_1 = long_4;
		double_4 = double_1 * double_5;
		float_4 = float_3 * float_4;
		v_luaO_pushfstring(double_3,double_5,float_3);

		int_8 = int_7 * int_1;
		int_7 = int_6;
		int_3 = int_3;
		v_pushstr(int_1,double_4,float_3);

		int_4 = int_1 + int_8;
		char_2 = char_1 + char_3;
		short_1 = short_2 + short_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		int_4 = int_1;
		float_6 = float_5 + float_1;
		char_1 = char_3 * char_1;
		v_luaO_tostring(short_2,unsigned_int_1);

		double_4 = double_2;
		long_3 = long_1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4;
	}
	return char_2;
}
unsigned int v_luaG_runerror( short parameter_1,char parameter_2,long parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_1;
	char_1 = char_2 + char_3;
	int_1 = int_1 * int_1;
	int_1 = int_1 + int_1;
	char controller4vul_343[2];
	fgets(controller4vul_343 ,2 ,stdin);
	if( strcmp( controller4vul_343, "f") < 0)
	{
		long long_3 = 1;
		char_3 = v_luaG_errormsg(uni_para);

		long_1 = long_2 * long_3;
	}
	float_3 = float_1 * float_2;
	return unsigned_int_2;
}
int v_luaO_ceillog2( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "9") < 0)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
	}
	int_1 = int_1 + int_2;
	return int_3;
}
int v_setnodevector( char parameter_1,double parameter_2,unsigned int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_2;
		double_2 = double_1 * double_1;
	}
	char controller4vul_341[3];
	fgets(controller4vul_341 ,3 ,stdin);
	if( strcmp( controller4vul_341, "Bb") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		float float_2 = 1;
		char_2 = char_1 + char_1;
		int_1 = int_1 + int_1;
		char controller4vul_342[2];
		fgets(controller4vul_342 ,2 ,stdin);
		if( strcmp( controller4vul_342, "1") > 0)
		{
			unsigned_int_3 = v_luaG_runerror(short_1,char_3,long_1,uni_para);

			long_1 = long_1 + long_1;
		}
		double_1 = double_3 * double_2;
		float_2 = float_1 + float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_4 = 1;
			double_3 = double_4 + double_3;
			double_2 = double_3 * double_5;
			int_1 = int_2 * int_2;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
	}
	int_3 = int_2;
	float_3 = float_1 + float_1;
	return int_3;
}
void v_luaC_newobj( short parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_2;
	char_2 = char_1 * char_2;
	double_1 = double_1 * double_2;
	float_3 = float_1 + float_2;
	long_1 = long_1;
	short_1 = short_1 + short_1;
}
long v_luaH_new( double parameter_1,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int_1 = v_setnodevector(char_1,double_1,unsigned_int_1,uni_para);

	float_2 = float_1 + float_1;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_3 = double_2 * double_1;
	long_2 = long_1 + long_1;
	int_1 = int_1 * int_2;
	int_2 = int_1 * int_4;
	return long_1;
}
long v_init_registry( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int_3 = int_1 * int_2;
	long_2 = long_1 * long_1;
	float_3 = float_1 * float_2;
	v_luaH_resize(double_1,unsigned_int_1,double_1,double_1);

	float_1 = float_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	long_3 = v_luaH_new(double_1,-1 );

	char_2 = char_1 + char_1;
	return long_1;
	v_luaH_setint(short_1,double_1,short_1,unsigned_int_2);

}
unsigned int v_stack_init( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1;
	int_2 = int_1 * int_2;
	double_1 = double_1 + double_1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_2;
	long_1 = long_1 + long_1;
	char_3 = char_2 * char_2;
	char_4 = char_4 * char_3;
	int_2 = int_1;
	double_2 = double_1 * double_2;
	double_1 = double_1;
	long_3 = long_2 + long_2;
	return unsigned_int_3;
}
int v_f_luaopen( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = v_stack_init(char_1,int_1);

	v_luaS_init(double_1);

	int_1 = int_2 * int_1;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_2;
	v_luaX_init(char_1);

	char_2 = char_1 + char_1;
	v_luaT_init(long_1);

	float_1 = v_lua_version(char_2);

	double_2 = double_1 * double_1;
	double_3 = double_2 * double_3;
	long_2 = v_init_registry(char_2,unsigned_int_2);

	short_1 = short_2 + short_2;
	double_5 = double_4 * double_4;
	long_1 = long_2 + long_2;
	return int_3;
}
int v_luaD_rawrunprotected( short parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_2;
	short_1 = short_1 + short_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_3 * double_2;
	long_1 = long_1 + long_1;
	float_3 = float_1;
	int_1 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	return int_2;
}
unsigned int v_luaS_hash( short parameter_1,unsigned int parameter_2,long parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 480)
	{
		vul_var = vul_var + 1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		free(vul_var);
		int_1 = int_1 + int_2;
	}
	double_3 = double_1 * double_2;
}
float v_makeseed( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	float_1 = float_1 + float_2;
	float_3 = float_2 * float_2;
	long_1 = long_1 * long_1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = v_luaS_hash(short_1,unsigned_int_2,long_1,-1 );

	int_3 = int_2 + int_3;
	double_1 = double_1 + double_1;
	int_1 = v_lua_newstate(short_2);

	long_1 = long_1 * long_2;
	char_2 = char_1 + char_1;
	return float_4;
}
char v_preinit_thread( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_2;
	double_1 = double_2;
	int_1 = int_2;
	int_2 = int_1 * int_1;
	char_2 = char_1 + char_2;
	char_3 = char_4;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	char_4 = char_1;
	double_2 = double_1;
	short_1 = short_3 + short_3;
	float_2 = float_1 * float_1;
	short_2 = short_2;
	int_3 = int_2;
	long_3 = long_1 + long_2;
	float_2 = float_3 * float_1;
	return char_2;
}
int v_lua_newstate( short parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_6 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_7 = 1;
	v_close_state(long_1);

	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ",^") < 0)
	{
	}
	float_2 = float_3;
	int_3 = int_2;
	short_1 = short_1 + short_1;
	short_2 = short_2 + short_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	int_3 = int_1 + int_3;
	int_4 = v_f_luaopen(long_1);

	char_1 = char_1 * char_1;
	short_3 = short_2;
	int_3 = int_3 * int_5;
	char_3 = char_2 * char_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	float_1 = v_makeseed(double_2);

	int_1 = int_2 + int_6;
	char_5 = char_1 + char_4;
	long_1 = long_1;
	char_1 = char_2 * char_5;
	double_4 = double_3 + double_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	double_4 = double_3 + double_2;
	int_3 = int_4 * int_2;
	int_6 = int_2 * int_2;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	double_1 = double_4 + double_1;
	double_1 = double_2 + double_1;
	char_6 = v_preinit_thread(short_2,char_6);

	double_4 = double_5 * double_5;
	double_2 = double_1 + double_4;
	long_2 = long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_4 = 1;
		float_2 = float_2 * float_4;
	}
	if(1)
	{
		char_2 = char_6 + char_5;
		int_7 = v_luaD_rawrunprotected(short_1,unsigned_int_2);

		int_5 = int_3 * int_1;
	}
	return int_5;
}
double v_luaL_newstate()
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int_1 = v_lua_newstate(short_1);

	float_1 = v_lua_atpanic(short_1,short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char_1 = v_l_alloc(long_1,long_1);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	return double_1;
	float_1 = v_panic(long_2);

}
int main()
{
	int uni_para =480;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_326[2];
	fgets(controller4vul_326 ,2 ,stdin);
	if( strcmp( controller4vul_326, "c") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		double_1 = v_pmain(char_2,uni_para);

		int_2 = int_1 + int_1;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	char_3 = char_3;
	long_2 = long_1 + long_1;
	double_2 = double_1;
	char_4 = char_4 + char_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	char_4 = char_3 * char_1;
	return int_3;
}

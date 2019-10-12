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

float v_lua_close( short parameter_1);
long v_lua_pushlightuserdata( float parameter_1);
void v_lua_pushinteger( double parameter_1,short parameter_2);
float v_writer( int parameter_1,unsigned int parameter_2,char parameter_3);
int v_DumpDebug( float parameter_1,long parameter_2);
void v_DumpProtos( char parameter_1,int parameter_2);
char v_DumpUpvalues( int parameter_1,float parameter_2);
void v_DumpConstants( char parameter_1,int parameter_2);
float v_DumpCode( char parameter_1,float parameter_2);
short v_DumpInt( int parameter_1,unsigned int parameter_2);
double v_DumpString( short parameter_1,long parameter_2);
unsigned int v_DumpFunction( short parameter_1,int parameter_2,long parameter_3);
void v_DumpNumber( double parameter_1,char parameter_2);
double v_DumpInteger( double parameter_1,float parameter_2);
char v_DumpByte( int parameter_1,unsigned int parameter_2);
char v_DumpHeader();
int v_luaU_dump( char parameter_1,float parameter_2,int parameter_3,int parameter_5);
void v_cannot( double parameter_1);
void v_luaF_initupvals( char parameter_1,char parameter_2);
char v_check_conflict( unsigned int parameter_1,short parameter_2,unsigned int parameter_3);
long v_assignment( double parameter_1,char parameter_2,int parameter_3);
char v_exprstat( float parameter_1);
float v_retstat( double parameter_1);
char v_checkrepeated( long parameter_1,long parameter_2,char parameter_3);
long v_labelstat( double parameter_1,unsigned int parameter_2,int parameter_3);
char v_localstat( char parameter_1);
unsigned int v_localfunc( double parameter_1);
void v_luaK_storevar( double parameter_1,int parameter_2,long parameter_3);
long v_funcname( long parameter_1,int parameter_2);
void v_funcstat( int parameter_1,int parameter_2);
short v_repeatstat( float parameter_1,int parameter_2);
void v_luaK_setreturns( float parameter_1,char parameter_2,int parameter_3);
long v_adjust_assign( double parameter_1,int parameter_2,int parameter_3,short parameter_4);
short v_forlist( int parameter_1,double parameter_2);
char v_forbody( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
float v_exp1( float parameter_1);
short v_fornum( int parameter_1,float parameter_2,int parameter_3);
long v_forstat( long parameter_1,int parameter_2);
char v_cond( float parameter_1);
long v_whilestat( float parameter_1,int parameter_2);
float v_block( unsigned int parameter_1);
long v_skipnoopstat( double parameter_1);
float v_gotostat( double parameter_1,int parameter_2);
double v_codecomp( char parameter_1,int parameter_2,long parameter_3,char parameter_4);
short v_freeexps( float parameter_1,double parameter_2,char parameter_3);
void v_codebinexpval( long parameter_1,short parameter_2,short parameter_3,long parameter_4,int parameter_5);
void v_luaK_posfix( float parameter_1,char parameter_2,float parameter_3,int parameter_4,int parameter_5);
void v_luaK_goiffalse( double parameter_1,char parameter_2);
unsigned int v_condjump( float parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5);
float v_jumponcond( double parameter_1,char parameter_2,int parameter_3);
void v_luaK_goiftrue( long parameter_1,char parameter_2);
void v_luaK_infix( short parameter_1,long parameter_2,char parameter_3,int uni_para);
short v_getbinopr( int parameter_1);
long v_explist( double parameter_1,char parameter_2);
short v_funcargs( float parameter_1,double parameter_2,int parameter_3);
void v_luaK_self( double parameter_1,double parameter_2,char parameter_3);
void v_luaK_exp2anyregup( long parameter_1,short parameter_2);
char v_fieldsel( float parameter_1,unsigned int parameter_2);
void v_luaK_indexed( short parameter_1,char parameter_2,short parameter_3);
short v_searchupvalue( long parameter_1,short parameter_2);
double v_markupval( float parameter_1,int parameter_2);
double v_searchvar( long parameter_1,short parameter_2);
short v_singlevaraux( long parameter_1,float parameter_2,long parameter_3,int parameter_4);
double v_singlevar( char parameter_1,int parameter_2);
float v_primaryexp( float parameter_1,unsigned int parameter_2);
long v_suffixedexp( long parameter_1,unsigned int parameter_2);
unsigned int v_undefgoto( double parameter_1,float parameter_2);
float v_findlabel( short parameter_1,int parameter_2);
char v_movegotosout( double parameter_1,char parameter_2);
double v_removevars( double parameter_1,int parameter_2);
void v_luaK_patchlist( double parameter_1,int parameter_2,int parameter_3);
short v_semerror( double parameter_1,unsigned int parameter_2);
int v_closegoto( short parameter_1,int parameter_2,short parameter_3);
int v_findgotos( char parameter_1,double parameter_2);
double v_newlabelentry( double parameter_1,long parameter_2,double parameter_3,int parameter_4,int parameter_5);
int v_breaklabel( int parameter_1);
void v_luaK_patchclose( double parameter_1,int parameter_2,int parameter_3);
void v_leaveblock( float parameter_1);
void v_luaK_ret( long parameter_1,int parameter_2,int parameter_3);
short v_close_func( short parameter_1);
unsigned int v_codeclosure( float parameter_1,char parameter_2);
int v_registerlocalvar( double parameter_1,char parameter_2);
int v_new_localvar( short parameter_1,char parameter_2);
void v_parlist( char parameter_1);
long v_getlocvar( char parameter_1,int parameter_2);
char v_adjustlocalvars( unsigned int parameter_1,int parameter_2);
long v_addprototype();
short v_body( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
int v_luaO_int2fb( double parameter_1);
int v_lastlistfield( int parameter_1,long parameter_2);
char v_check_match( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
double v_testnext( long parameter_1,int parameter_2);
float v_nilK();
int v_boolK( double parameter_1,int parameter_2);
int v_luaK_exp2RK( int parameter_1,float parameter_2,int uni_para);
void v_luaK_exp2val( char parameter_1,int parameter_2,int uni_para);
double v_yindex( double parameter_1,float parameter_2);
double v_str_checkname( long parameter_1);
short v_checkname( short parameter_1,double parameter_2);
unsigned int v_recfield( double parameter_1,float parameter_2);
unsigned int v_listfield( unsigned int parameter_1,long parameter_2);
int v_luaX_lookahead( short parameter_1);
int v_field( short parameter_1,float parameter_2);
void v_luaK_setlist( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4);
long v_closelistfield( long parameter_1,char parameter_2);
double v_error_expected( char parameter_1,int parameter_2);
int v_check( unsigned int parameter_1,int parameter_2);
int v_checknext( char parameter_1,int parameter_2);
void v_constructor( char parameter_1,unsigned int parameter_2);
int v_luaK_stringK( char parameter_1,unsigned int parameter_2);
char v_codestring( long parameter_1,char parameter_2,int parameter_3);
int v_simpleexp( double parameter_1,long parameter_2);
double v_removevalues( double parameter_1,int parameter_2);
void v_discharge2anyreg( unsigned int parameter_1,float parameter_2);
float v_negatecondition( float parameter_1,char parameter_2);
char v_codenot( float parameter_1,short parameter_2);
void v_luaK_fixline( int parameter_1,int parameter_2);
void v_luaK_checkstack( short parameter_1,int parameter_2);
void v_luaK_reserveregs( double parameter_1,int parameter_2);
void v_freeexp( long parameter_1,double parameter_2);
void v_luaK_exp2nextreg( unsigned int parameter_1,char parameter_2,int uni_para);
void v_luaK_patchtohere( long parameter_1,int parameter_2);
int v_luaK_getlabel();
short v_code_loadbool( short parameter_1,int parameter_2,int parameter_3,int parameter_4);
int v_luaK_jump( double parameter_1,int uni_para);
short v_need_value( short parameter_1,int parameter_2);
void v_luaK_concat( float parameter_1,int parameter_2,int parameter_3,int uni_para);
int v_luaK_intK( float parameter_1,int parameter_2);
long v_addk( short parameter_1,long parameter_2,unsigned int parameter_3);
double v_luaK_numberK( double parameter_1,short parameter_2);
short v_codeextraarg( long parameter_1,int parameter_2);
int v_luaK_codeABx( short parameter_1,short parameter_2,int parameter_3,char parameter_4);
int v_luaK_codek( long parameter_1,int parameter_2,int parameter_3);
void v_luaK_nil( float parameter_1,int parameter_2,int parameter_3);
short v_discharge2reg( double parameter_1,unsigned int parameter_2,int parameter_3);
char v_exp2reg( int parameter_1,short parameter_2,int parameter_3,int uni_para);
void v_luaK_setoneret( double parameter_1,float parameter_2);
long v_freereg( float parameter_1,int parameter_2);
short v_fixjump( short parameter_1,int parameter_2,int parameter_3,int uni_para);
long v_getjumpcontrol( short parameter_1,int parameter_2);
double v_patchtestreg( double parameter_1,int parameter_2,int parameter_3);
float v_getjump( int parameter_1,int parameter_2);
int v_patchlistaux( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
float v_dischargejpc( unsigned int parameter_1);
short v_luaK_code( int parameter_1,long parameter_2);
int v_luaK_codeABC( unsigned int parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5);
void v_luaK_dischargevars( short parameter_1,char parameter_2);
int v_luaK_exp2anyreg( float parameter_1,int parameter_2,int uni_para);
long v_codeunexpval( long parameter_1,char parameter_2,int parameter_3,int parameter_4);
short v_numarith( char parameter_1,int parameter_2,int parameter_3,long parameter_4);
short v_intarith( unsigned int parameter_1,int parameter_2,int parameter_3,double parameter_4);
void v_luaO_arith( int parameter_1,int parameter_2,unsigned int parameter_3,double parameter_4,float parameter_5);
long v_validop( int parameter_1,unsigned int parameter_2,char parameter_3);
long v_tonumeral( unsigned int parameter_1,short parameter_2);
void v_constfolding( unsigned int parameter_1,int parameter_2,float parameter_3,char parameter_4);
void v_luaK_prefix( double parameter_1,long parameter_2,long parameter_3,int parameter_4);
void v_getunopr( int parameter_1);
void v_subexpr( unsigned int parameter_1,long parameter_2,int parameter_3,int uni_para);
short v_expr( char parameter_1,float parameter_2,int uni_para);
double v_test_then_block( long parameter_1,int parameter_2,int uni_para);
char v_ifstat( unsigned int parameter_1,int parameter_2,int uni_para);
short v_enterlevel( unsigned int parameter_1);
void v_statement( float parameter_1,int uni_para);
long v_block_follow( short parameter_1,int parameter_2);
int v_statlist( int parameter_1,int uni_para);
double v_check_next2( long parameter_1,unsigned int parameter_2);
char v_read_numeral( int parameter_1,short parameter_2);
int v_readdecesc( float parameter_1);
int v_readutf8esc();
void v_utf8esc( float parameter_1);
short v_esccheck( char parameter_1,int parameter_2,char parameter_3);
short v_gethexa( int parameter_1);
char v_readhexaesc( char parameter_1);
short v_read_string( double parameter_1,int parameter_2,short parameter_3);
short v_check_next1( char parameter_1,int parameter_2);
int v_luaX_newstring( unsigned int parameter_1,long parameter_2,float parameter_3);
double v_read_long_string( char parameter_1,short parameter_2,int parameter_3);
void v_skip_sep( double parameter_1);
double v_inclinenumber( unsigned int parameter_1);
long v_llex( float parameter_1,float parameter_2);
void v_luaX_next( short parameter_1);
int v_luaX_token2str( long parameter_1,int parameter_2);
void v_save( long parameter_1,int parameter_2,int uni_para);
float v_txtToken( int parameter_1,int parameter_2,int uni_para);
unsigned int v_lexerror( int parameter_1,short parameter_2,int parameter_3,int uni_para);
double v_luaX_syntaxerror( double parameter_1,char parameter_2,int uni_para);
char v_errorlimit( unsigned int parameter_1,int parameter_2,long parameter_3);
float v_checklimit( int parameter_1,int parameter_2,int parameter_3,int parameter_4);
int v_newupvalue( short parameter_1,char parameter_2,short parameter_3);
void v_init_exp( unsigned int parameter_1,long parameter_2,int parameter_3);
short v_enterblock( unsigned int parameter_1,float parameter_2,int parameter_3);
double v_open_func( int parameter_1,float parameter_2,int parameter_3);
long v_mainfunc( char parameter_1,double parameter_2,int uni_para);
void v_luaX_setinput( double parameter_1,int parameter_2,double parameter_3,short parameter_4,int parameter_5);
double v_luaY_parser( double parameter_1,short parameter_2,unsigned int parameter_3,float parameter_4,int parameter_5,int parameter_6,int uni_para);
short v_LoadDebug( int parameter_1,short parameter_2);
short v_LoadProtos( float parameter_1,int parameter_2);
float v_LoadUpvalues( char parameter_1,char parameter_2);
long v_LoadConstants( char parameter_1,int parameter_2);
char v_LoadCode( int parameter_1,unsigned int parameter_2);
int v_LoadInt( char parameter_1);
long v_LoadString( double parameter_1);
short v_LoadFunction( double parameter_1,double parameter_2,double parameter_3);
int v_luaF_newproto( double parameter_1);
char v_LoadNumber( int parameter_1);
char v_LoadInteger( char parameter_1);
int v_LoadByte();
float v_error( double parameter_1,int parameter_2);
long v_checkliteral( double parameter_1,float parameter_2,double parameter_3);
double v_checkHeader( long parameter_1);
long v_luaU_undump( double parameter_1,short parameter_2,float parameter_3);
double v_checkmode( int parameter_1,char parameter_2,short parameter_3);
char v_f_parser( unsigned int parameter_1,int uni_para);
int v_luaD_protectedparser( float parameter_1,unsigned int parameter_2,float parameter_3,short parameter_4,int uni_para);
double v_reader( short parameter_1,short parameter_3);
void v_luaZ_init( double parameter_1,long parameter_2,double parameter_3);
void v_lua_load( char parameter_1,short parameter_2,char parameter_4,float parameter_5,int uni_para);
unsigned int v_combine( char parameter_1,int parameter_2,int uni_para);
void v_luaD_growstack( unsigned int parameter_1,int parameter_2);
char v_growstack( long parameter_1);
char v_lua_checkstack( int parameter_1,int parameter_2);
float v_index2addr( float parameter_1,int parameter_2);
double v_lua_touserdata( long parameter_1,int parameter_2);
unsigned int v_pmain( long parameter_1,int uni_para);
int v_fatal();
void v_panic( short parameter_1);
void v_lua_atpanic( long parameter_1,unsigned int parameter_2);
double v_l_alloc(unsigned int parameter_3,long parameter_4);
void v_freestack( long parameter_1);
short v_dothecall( double parameter_1);
long v_correctstack( float parameter_1,float parameter_2);
void v_luaD_reallocstack( char parameter_1,int parameter_2);
void v_luaE_shrinkCI( double parameter_1);
void v_luaE_freeCI( short parameter_1);
void v_stackinuse( unsigned int parameter_1);
void v_luaD_shrinkstack( char parameter_1);
int v_luaD_pcall( int parameter_1,double parameter_2,float parameter_4,double parameter_5);
void v_udata2finalize();
short v_GCTM( float parameter_1,int parameter_2);
char v_callallpendingfinalizers();
double v_findlast( char parameter_1);
void v_separatetobefnz( long parameter_1,int parameter_2);
void v_luaC_freeallobjects( int parameter_1);
short v_close_state( int parameter_1);
short v_lua_version( unsigned int parameter_1);
void v_luaX_init( short parameter_1);
void v_luaT_init( double parameter_1);
void v_luaC_fix( char parameter_1,long parameter_2);
void v_luaS_init( int parameter_1);
char v_luaG_errormsg( int parameter_1);
short v_currentline( short parameter_1);
void v_luaO_chunkid( char parameter_1,long parameter_2,long parameter_3);
float v_luaG_addinfo( double parameter_1,char parameter_2,float parameter_3,int parameter_4);
int v_copy2buff( float parameter_1,int parameter_2,char parameter_3);
int v_luaG_opinterror( double parameter_1,double parameter_2,long parameter_3,float parameter_4);
unsigned int v_luaG_tointerror( double parameter_1,int parameter_2,long parameter_3);
unsigned int v_luaG_concaterror( float parameter_1,char parameter_2,unsigned int parameter_3);
void v_luaD_callnoyield( float parameter_1,int parameter_2,int parameter_3);
char v_luaF_findupval( short parameter_1,unsigned int parameter_2);
long v_luaF_newLclosure( char parameter_1,int parameter_2);
double v_pushclosure( short parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,long parameter_5);
unsigned int v_getcached( float parameter_1,char parameter_2,char parameter_3);
void v_luaH_resizearray( char parameter_1,short parameter_2,unsigned int parameter_3);
char v_forlimit( int parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4);
void v_luaF_close( short parameter_1,float parameter_2);
float v_LEnum( char parameter_1,float parameter_2);
int v_luaV_lessequal( char parameter_1,int parameter_2,int parameter_3);
long v_luaG_ordererror( int parameter_1,int parameter_2,double parameter_3);
int v_luaT_callorderTM( int parameter_1,short parameter_2,int parameter_3,double parameter_4);
long v_l_strcmp( long parameter_1,unsigned int parameter_2);
int v_LEintfloat( short parameter_1,unsigned int parameter_2);
short v_LTintfloat( long parameter_1,short parameter_2);
int v_LTnum( int parameter_1,unsigned int parameter_2);
int v_luaV_lessthan( unsigned int parameter_1,int parameter_2,float parameter_3);
int v_luaS_eqlngstr( double parameter_1,long parameter_2);
int v_luaV_equalobj( short parameter_1,int parameter_2,double parameter_3);
short v_unbound_search( char parameter_1,unsigned int parameter_2);
int v_luaH_getn( short parameter_1);
void v_luaV_objlen( int parameter_1,int parameter_2,char parameter_3);
long v_luaV_div( double parameter_1,double parameter_2,int parameter_3);
short v_luaV_mod( char parameter_1,float parameter_2,unsigned int parameter_3);
int v_luaV_shiftl( short parameter_1,long parameter_2);
void v_luaV_finishget( unsigned int parameter_1,int parameter_2,long parameter_3,int parameter_4,short parameter_5);
char v_luaH_getstr( float parameter_1,unsigned int parameter_2);
int v_luaO_fb2int( int parameter_1);
int v_getgeneric( short parameter_1,long parameter_2);
unsigned int v_luaH_get( double parameter_1,int parameter_2);
unsigned int v_luaH_set( short parameter_1,unsigned int parameter_2,unsigned int parameter_3);
char v_computesizes( char parameter_1,int parameter_2);
char v_arrayindex( unsigned int parameter_1);
float v_countint( double parameter_1,long parameter_2);
char v_numusehash( long parameter_1,unsigned int parameter_2,unsigned int parameter_3);
char v_numusearray( short parameter_1,short parameter_2);
int v_rehash( long parameter_1,short parameter_2,float parameter_3);
unsigned int v_getfreepos( double parameter_1);
unsigned int v_luaS_hashlongstr( int parameter_1);
char v_l_hashfloat();
long v_mainposition( short parameter_1,unsigned int parameter_2);
char v_l_str2dloc( long parameter_1,unsigned int parameter_2,int parameter_3);
long v_l_str2d( char parameter_1,float parameter_2);
int v_luaO_hexavalue( int parameter_1);
char v_isneg( char parameter_1);
char v_l_str2int( float parameter_1,int parameter_2);
float v_luaO_str2num( float parameter_1,double parameter_2);
int v_luaV_tointeger( char parameter_1,unsigned int parameter_2,int parameter_3);
void v_luaH_newkey( float parameter_1,char parameter_2,unsigned int parameter_3);
short v_luaH_getint( long parameter_1,char parameter_2);
void v_luaH_setint( double parameter_1,float parameter_2,float parameter_3,short parameter_4);
float v_setarrayvector( char parameter_1,float parameter_2,float parameter_3);
void v_luaH_resize( float parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4);
void v_luaV_execute( char parameter_1);
double v_currentpc( float parameter_1);
double v_kname( float parameter_1,int parameter_2,int parameter_3,int parameter_4);
double v_filterpc( int parameter_1,int parameter_2);
short v_findsetreg( int parameter_1,int parameter_2,int parameter_3);
long v_luaF_getlocalname( long parameter_1,int parameter_2,int parameter_3);
int v_getobjname( char parameter_1,int parameter_2,int parameter_3,long parameter_4);
double v_isinstack( char parameter_1,long parameter_2);
char v_upvalname( long parameter_1,int parameter_2);
short v_getupvalname( unsigned int parameter_1,int parameter_2,float parameter_3);
float v_varinfo( float parameter_1,char parameter_2);
char v_luaS_new( short parameter_1,long parameter_2);
void v_luaT_objtypename( float parameter_1,char parameter_2);
char v_luaG_typeerror( char parameter_1,unsigned int parameter_2,int parameter_3);
void v_tryfuncTM( double parameter_1,int parameter_2);
long v_callhook( long parameter_1,double parameter_2);
void v_adjust_varargs( int parameter_1,char parameter_2,int parameter_3);
char v_moveresults( float parameter_1,char parameter_2,double parameter_3,int parameter_4,int parameter_5);
int v_luaD_poscall( unsigned int parameter_1,long parameter_2,int parameter_3,int parameter_4);
void v_luaD_hook( long parameter_1,int parameter_2,int parameter_3);
int v_luaD_precall( double parameter_1,float parameter_2,int parameter_3);
float v_seterrorobj( long parameter_1,int parameter_2,double parameter_3);
int v_luaD_throw( float parameter_1,int parameter_2);
double v_stackerror( unsigned int parameter_1);
void v_luaD_call( float parameter_1,unsigned int parameter_2,int parameter_3);
void v_luaT_callTM( double parameter_1,long parameter_2,char parameter_3,double parameter_4,float parameter_5,int parameter_6);
void v_luaH_getshortstr( float parameter_1,short parameter_2);
float v_luaT_gettmbyobj( long parameter_1,short parameter_2,unsigned int parameter_3);
int v_luaT_callbinTM( char parameter_1,long parameter_2,long parameter_3,int parameter_4,char parameter_5);
void v_luaT_trybinTM( float parameter_1,float parameter_2,double parameter_3,float parameter_4,unsigned int parameter_5);
void v_luaV_concat( unsigned int parameter_1,int parameter_2);
int v_luaO_utf8esc( char parameter_1,unsigned int parameter_2);
void v_luaO_tostring( short parameter_1,unsigned int parameter_2);
void v_luaO_pushfstring( double parameter_1,unsigned int parameter_2,int parameter_3);
void v_luaD_inctop( long parameter_1);
void v_luaS_createlngstrobj( char parameter_1,long parameter_2);
float v_luaM_toobig();
long v_createstrobj( short parameter_1,short parameter_2,int parameter_3,double parameter_4);
void v_luaS_resize( double parameter_1,int parameter_2);
int v_internshrstr( int parameter_1,int parameter_2,unsigned int parameter_3);
double v_luaS_newlstr( double parameter_1,float parameter_2,long parameter_3);
short v_pushstr( short parameter_1,float parameter_2,float parameter_3);
long v_luaO_pushvfstring( int parameter_1,char parameter_2,long parameter_3);
long v_luaG_runerror( float parameter_1,char parameter_2,short parameter_3);
int v_luaO_ceillog2( unsigned int parameter_1);
double v_setnodevector( int parameter_1,float parameter_2,unsigned int parameter_3);
long v_luaC_newobj( int parameter_1,int parameter_2,double parameter_3);
float v_luaH_new( char parameter_1);
unsigned int v_init_registry( char parameter_1,int parameter_2);
void v_stack_init( float parameter_1,char parameter_2);
short v_f_luaopen( long parameter_1);
int v_luaD_rawrunprotected( char parameter_1,char parameter_2);
unsigned int v_luaS_hash( long parameter_1,char parameter_2,char parameter_3);
short v_makeseed();
void v_preinit_thread( float parameter_1,int parameter_2);
float v_lua_newstate( short parameter_1);
unsigned int v_luaL_newstate();
long v_usage( short parameter_1);
short v_doargs( int parameter_1,char parameter_2);
float v_lua_close( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int_1 = int_2;
	short_1 = v_close_state(int_3);

	double_1 = double_1 * double_1;
	long_1 = long_1 + long_1;
	return float_1;
}
long v_lua_pushlightuserdata( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_1 + char_2;
	int_1 = int_1 + int_1;
	long_1 = long_1 * long_1;
	int_1 = int_1;
	return long_2;
}
void v_lua_pushinteger( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_2;
	int_1 = int_1 * int_1;
	long_2 = long_1 + long_1;
}
float v_writer( int parameter_1,unsigned int parameter_2,char parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_1;
	return float_1;
}
int v_DumpDebug( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_2;
	double_3 = double_1 + double_2;
	float_1 = float_1;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_DumpString(short_1,long_2);

	short_2 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		int_2 = int_1 * int_1;
	}
	int_4 = int_2 + int_3;
	double_1 = double_3 + double_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_2 = v_DumpInt(int_1,unsigned_int_2);

		short_4 = short_2 * short_3;
	}
	return int_4;
}
void v_DumpProtos( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	long_1 = long_1 + long_1;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = v_DumpFunction(short_1,int_1,long_1);

		long_1 = long_1 * long_1;
	}
	short_3 = v_DumpInt(int_2,unsigned_int_2);

}
char v_DumpUpvalues( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int_1 = int_1;
	char_1 = v_DumpByte(int_1,unsigned_int_1);

	short_2 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		short_2 = v_DumpInt(int_2,unsigned_int_2);

		double_1 = double_2;
		char_1 = char_1 * char_1;
	}
	return char_2;
}
void v_DumpConstants( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double_1 = double_2;
	v_DumpNumber(double_1,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		float float_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		char_2 = v_DumpByte(int_1,unsigned_int_4);

		char_3 = char_1 * char_3;
		float_2 = float_1 * float_1;
		float_1 = float_1 * float_1;
		float_1 = float_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		double_3 = v_DumpString(short_1,long_1);

		long_1 = long_2;
		double_1 = double_3 * double_1;
		unsigned_int_5 = unsigned_int_6;
		int_2 = int_1;
		short_2 = v_DumpInt(int_1,unsigned_int_3);

		char_3 = char_2;
		double_3 = double_1 * double_3;
	}
	double_2 = v_DumpInteger(double_4,float_1);

}
float v_DumpCode( char parameter_1,float parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short_1 = v_DumpInt(int_1,unsigned_int_1);

	long_2 = long_1 * long_1;
	int_3 = int_1 + int_2;
	return float_1;
}
short v_DumpInt( int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	long_1 = long_1 * long_1;
	return short_1;
}
double v_DumpString( short parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	if(1)
	{
		long_1 = long_2;
	}
	if(1)
	{
		int int_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char_1 = v_DumpByte(int_1,unsigned_int_1);

		int_2 = int_1 + int_2;
		double_2 = double_1 + double_2;
		if(1)
		{
			short_2 = short_1 * short_2;
		}
		if(1)
		{
			short_2 = short_2 * short_3;
			long_1 = long_1 + long_2;
		}
		short_1 = short_3 + short_4;
	}
	return double_2;
}
unsigned int v_DumpFunction( short parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		char_1 = v_DumpUpvalues(int_2,float_1);

		double_2 = double_1 + double_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	double_2 = double_1 + double_2;
	short_1 = v_DumpInt(int_4,unsigned_int_4);

	int_5 = v_DumpDebug(float_1,long_1);

	int_4 = int_4 * int_1;
	short_3 = short_2 * short_3;
	long_2 = long_2;
	v_DumpConstants(char_2,int_2);

	v_DumpProtos(char_2,int_5);

	unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
	char_1 = v_DumpByte(int_5,unsigned_int_5);

	int_2 = int_4;
	double_2 = v_DumpString(short_3,long_3);

	float_2 = v_DumpCode(char_2,float_3);

	double_3 = double_3 + double_2;
	double_2 = double_4;
	return unsigned_int_5;
}
void v_DumpNumber( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 + short_2;
}
double v_DumpInteger( double parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
char v_DumpByte( int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return char_1;
}
char v_DumpHeader()
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	float_2 = float_1 * float_2;
	int_1 = int_1 * int_1;
	double_1 = v_DumpInteger(double_1,float_3);

	v_DumpNumber(double_2,char_1);

	int_3 = int_2 * int_2;
	char_2 = v_DumpByte(int_1,unsigned_int_2);

	long_1 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_4 = double_1 * double_3;
	int_4 = int_2;
	double_1 = double_1;
	int_5 = int_2 + int_1;
	return char_3;
}
int v_luaU_dump( char parameter_1,float parameter_2,int parameter_3,int parameter_5)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char_1 = v_DumpByte(int_1,unsigned_int_1);

	long_1 = long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	int_3 = int_2 + int_1;
	double_1 = double_1;
	char_2 = v_DumpHeader();

	double_2 = double_1 * double_1;
	unsigned_int_4 = unsigned_int_3;
	unsigned_int_4 = v_DumpFunction(short_1,int_2,long_2);

	unsigned_int_5 = unsigned_int_6;
	double_2 = double_1 * double_2;
	return int_3;
}
void v_cannot( double parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
void v_luaF_initupvals( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char_2 = char_1 * char_2;
		double_2 = double_1 + double_2;
		double_5 = double_3 * double_4;
		double_1 = double_4 + double_4;
		float_2 = float_1 * float_1;
	}
}
char v_check_conflict( unsigned int parameter_1,short parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	int_1 = int_1;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
				unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
				int_1 = int_1 * int_2;
			}
			if(1)
			{
				int_3 = v_luaK_codeABC(unsigned_int_5,short_3,int_1,int_4,int_2);

				int_2 = int_5 + int_5;
				v_luaK_reserveregs(double_1,int_5);

				unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
			}
		}
	}
	if(1)
	{
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_2;
		unsigned_int_5 = unsigned_int_2;
		double_2 = double_1;
	}
	return char_1;
}
long v_assignment( double parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_6 = 1;
	double double_4 = 1;
	float float_2 = 1;
	double double_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	long long_3 = 1;
	char char_4 = 1;
	short_1 = short_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		double_2 = v_testnext(long_1,int_1);

		double_2 = double_1 * double_3;
		v_init_exp(unsigned_int_1,long_1,int_1);

		double_3 = double_2 + double_1;
		long_1 = long_1;
		if(1)
		{
			int_1 = int_2;
		}
		double_3 = double_2 + double_2;
		long_1 = v_suffixedexp(long_1,unsigned_int_2);

		int_2 = int_3 + int_3;
	}
	if(1)
	{
		char char_3 = 1;
		short short_2 = 1;
		int int_5 = 1;
		float_1 = v_checklimit(int_2,int_3,int_4,int_3);

		char_3 = char_1 * char_2;
		short_2 = short_2;
		int_4 = int_5;
		if(1)
		{
			int_2 = int_3;
		}
		if(1)
		{
			short short_4 = 1;
			long_1 = v_adjust_assign(double_2,int_4,int_3,short_3);

			short_4 = short_3;
			char_1 = v_check_conflict(unsigned_int_2,short_1,unsigned_int_2);

			int_2 = v_checknext(char_2,int_6);

			v_luaK_setoneret(double_4,float_2);

			double_4 = double_1 + double_4;
		}
	}
	v_luaK_storevar(double_5,int_6,long_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	int_7 = int_7 + int_4;
	return long_3;
	long_1 = v_explist(double_3,char_4);

}
char v_exprstat( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 * short_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		char char_2 = 1;
		long_1 = v_suffixedexp(long_1,unsigned_int_3);

		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		long_1 = v_assignment(double_2,char_1,int_3);

		char_1 = char_2;
	}
	return char_1;
}
float v_retstat( double parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float_1 = float_1 * float_1;
	short_1 = short_1 + short_1;
	int_1 = v_luaK_exp2anyreg(float_2,int_1,-1 );

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		long_1 = long_2;
	}
	if(1)
	{
		float float_4 = 1;
		double double_1 = 1;
		float_1 = float_3 + float_4;
		if(1)
		{
			int int_2 = 1;
			float float_5 = 1;
			int int_4 = 1;
			int_1 = int_2;
			if(1)
			{
				double double_2 = 1;
				int int_3 = 1;
				double_2 = double_1 * double_1;
				int_3 = int_2 + int_3;
			}
			float_4 = float_5 * float_3;
			int_5 = int_4 * int_1;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				long_1 = v_block_follow(short_1,int_1);

				unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
			}
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				double double_4 = 1;
				double_3 = v_testnext(long_2,int_5);

				unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
				double_1 = double_1 + double_4;
				v_luaK_exp2nextreg(unsigned_int_1,char_1,-1 );

				float_1 = float_3 * float_1;
			}
		}
	}
	long_2 = v_explist(double_3,char_2);

	v_luaK_ret(long_1,int_6,int_7);

	int_8 = int_7 + int_7;
	float_1 = float_2;
	return float_3;
}
char v_checkrepeated( long parameter_1,long parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short_2 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			v_luaO_pushfstring(double_1,unsigned_int_1,int_1);

			short_1 = v_semerror(double_2,unsigned_int_1);

			double_2 = double_2 * double_2;
			double_1 = double_2 * double_1;
		}
	}
	return char_1;
}
long v_labelstat( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long long_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_3 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = v_checkrepeated(long_1,long_2,char_2);

	double_1 = v_newlabelentry(double_2,long_3,double_3,int_1,int_1);

	int_1 = int_1 * int_1;
	int_2 = int_2;
	int_2 = v_luaK_getlabel();

	long_4 = v_skipnoopstat(double_4);

	short_3 = short_1 * short_2;
	double_1 = double_2 * double_1;
	long_6 = long_5 * long_2;
	if(1)
	{
		int_2 = int_1;
	}
	long_5 = v_block_follow(short_3,int_2);

	int_2 = v_findgotos(char_2,double_3);

	char_3 = char_3 + char_1;
	return long_1;
	int_1 = v_checknext(char_3,int_2);

}
char v_localstat( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	char char_4 = 1;
	int int_3 = 1;
	char char_5 = 1;
	float_3 = float_1 * float_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double_2 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_2 = v_str_checkname(long_1);

		double_3 = double_3 + double_1;
		char_1 = v_adjustlocalvars(unsigned_int_2,int_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		int_2 = v_new_localvar(short_1,char_2);

		long_1 = v_adjust_assign(double_4,int_2,int_2,short_2);

		char_2 = char_1 + char_3;
		long_1 = v_explist(double_3,char_4);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		short_2 = short_3;
		double_2 = v_testnext(long_1,int_3);

		short_4 = short_3 * short_2;
	}
	return char_5;
}
unsigned int v_localfunc( double parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double_1 = v_str_checkname(long_1);

	int_1 = int_1 + int_1;
	int_2 = v_new_localvar(short_1,char_1);

	int_1 = int_3 * int_4;
	long_1 = v_getlocvar(char_1,int_5);

	int_5 = int_1 * int_3;
	long_1 = long_2 + long_1;
	char_1 = char_2 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return unsigned_int_2;
	char_1 = v_adjustlocalvars(unsigned_int_2,int_1);

	short_1 = v_body(float_1,unsigned_int_2,int_2,int_3);

}
void v_luaK_storevar( double parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int_1 = int_1 * int_2;
	char_1 = v_exp2reg(int_1,short_1,int_3,-1 );

	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_luaK_exp2anyreg(float_1,int_3,-1 );

	int_3 = v_luaK_codeABC(unsigned_int_3,short_1,int_3,int_3,int_4);

	double_3 = double_1 * double_2;
	short_3 = short_1 * short_2;
	int_3 = int_5;
	short_1 = short_3;
	int_6 = v_luaK_exp2RK(int_4,float_1,-1 );

	int_5 = int_4 * int_2;
	v_freeexp(long_3,double_1);

	double_2 = double_4 + double_4;
	char_2 = char_2;
	char_4 = char_3 * char_2;
}
long v_funcname( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_1;
	double_1 = v_singlevar(char_1,int_1);

	double_1 = double_2 * double_2;
	char_1 = char_2 + char_1;
	char_1 = v_fieldsel(float_1,unsigned_int_1);

	double_2 = double_2 * double_2;
	return long_1;
}
void v_funcstat( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	v_luaK_storevar(double_1,int_1,long_1);

	short_1 = short_1 * short_1;
	short_2 = v_body(float_1,unsigned_int_1,int_1,int_1);

	int_1 = int_2;
	char_3 = char_1 + char_2;
	v_luaK_fixline(int_3,int_2);

	double_2 = double_3;
	long_2 = v_funcname(long_1,int_2);

	double_3 = double_4 * double_5;
	long_2 = long_3 + long_3;
	v_luaX_next(short_1);

	double_7 = double_5 + double_6;
}
short v_repeatstat( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	v_leaveblock(float_1);

	double_1 = double_2;
	v_luaK_patchlist(double_2,int_1,int_2);

	long_1 = long_1;
	float_1 = float_2 + float_1;
	int_3 = v_luaK_getlabel();

	short_1 = v_enterblock(unsigned_int_1,float_2,int_1);

	int_2 = int_2;
	char_3 = char_1 + char_2;
	short_1 = short_1 + short_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	v_luaX_next(short_1);

	char_3 = char_3 * char_3;
	char_3 = v_check_match(int_1,int_3,int_3,int_2);

	long_1 = long_2 * long_3;
	char_1 = v_cond(float_3);

	unsigned_int_4 = unsigned_int_2;
	if(1)
	{
		double_1 = double_1;
	}
	v_luaK_patchclose(double_3,int_1,int_4);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	short_1 = short_2 + short_1;
	int_5 = v_statlist(int_3,-1 );

	double_1 = double_3 * double_2;
	return short_3;
}
void v_luaK_setreturns( float parameter_1,char parameter_2,int parameter_3)
{
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int_1 = int_1 + int_1;
		int_3 = int_2 + int_3;
		unsigned_int_1 = unsigned_int_1;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		v_luaK_reserveregs(double_3,int_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
}
long v_adjust_assign( double parameter_1,int parameter_2,int parameter_3,short parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v_luaK_reserveregs(double_1,int_1);

	int_2 = int_2 * int_3;
	v_luaK_exp2nextreg(unsigned_int_1,char_1,-1 );

	v_luaK_nil(float_1,int_4,int_2);

	double_4 = double_2 * double_3;
	if(1)
	{
		double_5 = double_2 * double_3;
		if(1)
		{
			char char_2 = 1;
			char_2 = char_2 * char_2;
		}
		int_2 = int_4 * int_4;
		if(1)
		{
			return long_1;
			int_5 = int_1 * int_5;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			double_4 = double_5 * double_1;
			double_5 = double_1 + double_3;
			int_2 = int_2 * int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	return long_2;
}
short v_forlist( int parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_5 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	char_1 = char_1 + char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "tO") > 0)
	{
	}
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_3 = 1;
		double double_7 = 1;
		double_3 = double_1 * double_2;
		double_4 = v_testnext(long_1,int_1);

		double_6 = double_2 + double_5;
		float_2 = float_1 * float_2;
		char_4 = char_3 * char_2;
		double_7 = double_2 + double_5;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_6;
	}
	int_1 = int_2;
	char_5 = v_forbody(short_1,int_2,int_1,int_3,int_3);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_6 = v_str_checkname(long_1);

	v_luaK_checkstack(short_2,int_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_2 = v_adjust_assign(double_3,int_1,int_1,short_3);

	int_1 = int_3 + int_4;
	char_2 = char_2 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_3 = short_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			int_5 = v_new_localvar(short_1,char_5);

			unsigned_int_1 = unsigned_int_4;
		}
	}
	int_1 = int_3 + int_1;
	int_1 = v_checknext(char_4,int_6);

	int_5 = int_6 * int_4;
	long_1 = v_explist(double_5,char_6);

	float_3 = float_4;
	double_2 = double_2;
	return short_4;
}
char v_forbody( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	int int_6 = 1;
	char char_2 = 1;
	int int_7 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_5 = 1;
	int int_8 = 1;
	short short_6 = 1;
	int_2 = int_1 + int_2;
	int_1 = v_luaK_jump(double_1,-1 );

	short_1 = v_enterblock(unsigned_int_1,float_1,int_2);

	double_4 = double_2 * double_3;
	int_2 = v_luaK_codeABC(unsigned_int_2,short_2,int_3,int_1,int_2);

	double_5 = double_4 + double_4;
	int_5 = int_4 * int_5;
	int_2 = v_checknext(char_1,int_1);

	v_luaK_patchlist(double_4,int_1,int_6);

	int_1 = int_1 + int_3;
	char_1 = char_2;
	v_luaK_fixline(int_3,int_3);

	int_2 = int_7;
	v_leaveblock(float_2);

	float_2 = float_3 + float_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	float_4 = float_3;
	char_3 = char_1 + char_1;
	if(1)
	{
		float_1 = float_1 * float_4;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short short_4 = 1;
		v_luaK_patchtohere(long_1,int_2);

		short_3 = short_2 + short_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		short_5 = short_4 * short_4;
	}
	float_2 = v_block(unsigned_int_3);

	short_2 = short_3 * short_5;
	char_3 = v_adjustlocalvars(unsigned_int_2,int_8);

	short_5 = short_6 * short_3;
	return char_2;
	v_luaK_reserveregs(double_5,int_2);

}
float v_exp1( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	short_1 = v_expr(char_1,float_1,-1 );

	double_2 = double_2 * double_1;
	double_3 = double_1 + double_1;
	float_1 = float_1;
	v_luaK_exp2nextreg(unsigned_int_1,char_2,-1 );

	int_2 = int_1 * int_2;
	return float_2;
}
short v_fornum( int parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	char char_6 = 1;
	short short_6 = 1;
	int_1 = v_new_localvar(short_1,char_1);

	double_1 = v_testnext(long_1,int_2);

	double_4 = double_2 * double_3;
	int_3 = v_luaK_intK(float_1,int_4);

	double_4 = double_5;
	char_2 = v_forbody(short_2,int_4,int_3,int_3,int_3);

	float_1 = float_2 + float_2;
	char_2 = char_3;
	int_5 = v_checknext(char_4,int_5);

	char_1 = char_5 * char_5;
	double_4 = double_3 * double_2;
	int_3 = int_1 + int_2;
	short_3 = short_4;
	short_3 = short_4 + short_1;
	double_1 = double_3 * double_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		short short_5 = 1;
		v_luaK_reserveregs(double_5,int_3);

		short_3 = short_3 + short_3;
		float_2 = v_exp1(float_3);

		short_5 = short_2 + short_2;
	}
	char_6 = char_5 + char_3;
	return short_6;
	int_2 = v_luaK_codek(long_1,int_4,int_4);

}
long v_forstat( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_5 = 1;
	float float_4 = 1;
	int int_3 = 1;
	char char_4 = 1;
	short short_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	double_1 = v_str_checkname(long_1);

	double_1 = double_2 * double_2;
	char_3 = char_1 + char_2;
	short_1 = v_forlist(int_1,double_2);

	float_1 = float_2;
	v_luaX_next(short_2);

	short_2 = short_3 * short_2;
	float_2 = float_2 * float_3;
	short_4 = v_enterblock(unsigned_int_1,float_2,int_2);

	short_5 = v_fornum(int_1,float_4,int_3);

	double_2 = v_luaX_syntaxerror(double_1,char_4,-1 );

	short_6 = short_4 * short_1;
	char_4 = char_2 * char_3;
	long_2 = long_2 * long_3;
	unsigned_int_2 = unsigned_int_3;
	char_1 = char_2 * char_5;
	double_2 = double_2 + double_2;
	char_4 = v_check_match(int_4,int_1,int_5,int_2);

	v_leaveblock(float_2);

	int_5 = int_5 * int_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	return long_4;
}
char v_cond( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	short_3 = v_expr(char_2,float_1,-1 );

	v_luaK_goiftrue(long_1,char_1);

	short_5 = short_4 * short_3;
	return char_3;
}
long v_whilestat( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_4 = 1;
	char_3 = char_1 + char_2;
	double_1 = double_1 * double_2;
	float_1 = float_1 + float_2;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_2;
	int_2 = int_1 * int_1;
	char_4 = v_cond(float_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = v_block(unsigned_int_1);

	short_1 = short_1 * short_2;
	long_1 = long_1 * long_2;
	int_1 = v_luaK_getlabel();

	char_3 = char_5 + char_3;
	char_3 = v_check_match(int_1,int_3,int_3,int_1);

	int_3 = int_2 * int_4;
	short_2 = v_enterblock(unsigned_int_3,float_1,int_4);

	double_1 = double_2 * double_2;
	v_luaX_next(short_1);

	v_luaK_patchtohere(long_1,int_4);

	double_3 = double_1;
	int_3 = v_checknext(char_1,int_1);

	char_4 = char_5;
	return long_1;
	v_leaveblock(float_4);

}
float v_block( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_statlist(int_1,-1 );

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	short_1 = v_enterblock(unsigned_int_2,float_1,int_2);

	float_2 = float_2 * float_2;
	v_leaveblock(float_1);

	float_3 = float_3 * float_2;
	return float_2;
}
long v_skipnoopstat( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "q4") < 0)
		{
			char_2 = char_1 * char_1;
		}
	}
	v_statement(float_1,-1 );

	char_2 = char_1 * char_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		double_1 = double_1 + double_1;
	}
	return long_2;
}
float v_gotostat( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	v_luaX_next(short_1);

	int_1 = int_1 + int_1;
	char_1 = v_luaS_new(short_1,long_1);

	double_1 = v_newlabelentry(double_1,long_2,double_1,int_1,int_1);

	int_3 = int_2 + int_2;
	float_1 = v_findlabel(short_2,int_1);

	int_4 = int_1 + int_1;
	if(1)
	{
		long long_3 = 1;
		long_2 = long_3;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, ",") < 0)
	{
		char char_2 = 1;
		double_1 = v_testnext(long_2,int_4);

		double_2 = v_str_checkname(long_1);

		double_2 = double_2 + double_1;
		char_2 = char_1 + char_2;
	}
	short_1 = short_2 * short_2;
	unsigned_int_1 = unsigned_int_2;
	return float_2;
}
double v_codecomp( char parameter_1,int parameter_2,long parameter_3,char parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_6 = 1;
	float float_2 = 1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	char_3 = char_2 * char_2;
	short_1 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	char_3 = char_4 + char_4;
	short_3 = short_2 * short_2;
	int_1 = int_2;
	int_3 = v_luaK_exp2RK(int_2,float_1,-1 );

	unsigned_int_2 = v_condjump(float_1,short_4,int_3,int_2,int_1);

	short_2 = short_5 + short_2;
	long_3 = long_1 * long_2;
	long_2 = long_4 * long_2;
	return double_1;
	short_6 = v_freeexps(float_2,double_1,char_1);

}
short v_freeexps( float parameter_1,double parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char_1 = char_2;
	char_2 = char_2 + char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		long_1 = v_freereg(float_1,int_1);

		double_1 = double_1 + double_1;
		double_2 = double_2 + double_3;
	}
	return short_1;
}
void v_codebinexpval( long parameter_1,short parameter_2,short parameter_3,long parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_luaK_fixline(int_1,int_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	short_1 = v_freeexps(float_1,double_1,char_1);

	unsigned_int_2 = unsigned_int_4;
	short_2 = short_1 * short_1;
	int_1 = v_luaK_codeABC(unsigned_int_3,short_1,int_2,int_3,int_4);

	int_4 = int_2 + int_5;
	int_5 = v_luaK_exp2RK(int_3,float_2,-1 );

	unsigned_int_3 = unsigned_int_1;
}
void v_luaK_posfix( float parameter_1,char parameter_2,float parameter_3,int parameter_4,int parameter_5)
{
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short_1 = short_1;
	double_1 = double_1 * double_1;
	v_codebinexpval(long_1,short_2,short_3,long_2,int_1);

	char_1 = char_1 * char_2;
	v_luaK_dischargevars(short_1,char_2);

	double_3 = double_2 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	double_1 = double_2;
	float_1 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	v_luaK_exp2val(char_3,int_1,-1 );

	v_freeexp(long_1,double_3);

	int_2 = int_2 * int_1;
	int_2 = int_3;
	if(1)
	{
		short_2 = short_2 * short_3;
		long_3 = long_2 + long_2;
		v_luaK_exp2nextreg(unsigned_int_4,char_2,-1 );

		long_1 = long_2 * long_2;
		v_constfolding(unsigned_int_2,int_1,float_3,char_2);

		int_2 = int_1 + int_2;
		double_3 = double_2 + double_1;
	}
	if(1)
	{
		int_4 = int_1 * int_3;
		int_4 = int_3 + int_2;
	}
	int_4 = int_1 * int_1;
	if(1)
	{
		v_luaK_concat(float_4,int_5,int_4,-1 );

		unsigned_int_4 = unsigned_int_5;
	}
	double_2 = double_4 * double_2;
	double_3 = v_codecomp(char_4,int_2,long_2,char_4);

	unsigned_int_7 = unsigned_int_6 + unsigned_int_5;
	long_3 = long_2 + long_1;
	float_3 = float_1 * float_3;
}
void v_luaK_goiffalse( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	v_luaK_dischargevars(short_1,char_1);

	long_1 = long_1 + long_1;
	long_2 = long_1 * long_1;
	long_3 = long_2 + long_2;
	float_1 = float_1 + float_1;
	v_luaK_patchtohere(long_2,int_1);

	float_1 = float_2;
	char_1 = char_2 * char_2;
	int_1 = int_1;
	long_4 = long_2 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	v_luaK_concat(float_2,int_1,int_2,-1 );

	unsigned_int_2 = unsigned_int_3;
	float_2 = v_jumponcond(double_1,char_2,int_3);

}
unsigned int v_condjump( float parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = v_luaK_jump(double_1,-1 );

	double_2 = double_2 + double_2;
	return unsigned_int_1;
	int_1 = v_luaK_codeABC(unsigned_int_2,short_1,int_1,int_2,int_3);

}
float v_jumponcond( double parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		v_discharge2anyreg(unsigned_int_1,float_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		}
	}
	short_1 = short_1 * short_2;
	unsigned_int_1 = v_condjump(float_2,short_3,int_1,int_2,int_3);

	double_1 = double_2;
	return float_3;
	v_freeexp(long_1,double_1);

}
void v_luaK_goiftrue( long parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short_1 = short_2;
	v_luaK_patchtohere(long_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_2 + short_1;
	short_2 = short_3 + short_4;
	v_luaK_dischargevars(short_3,char_1);

	float_1 = v_negatecondition(float_1,char_1);

	double_1 = double_1;
	v_luaK_concat(float_1,int_1,int_1,-1 );

	char_1 = char_1 + char_1;
	double_1 = double_2 * double_1;
	short_2 = short_2 * short_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	double_2 = double_1 * double_3;
	float_1 = v_jumponcond(double_1,char_2,int_2);

	float_3 = float_1 + float_2;
}
void v_luaK_infix( short parameter_1,long parameter_2,char parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	int_2 = int_1 * int_1;
	double_2 = double_1 * double_1;
	short_3 = short_1 * short_2;
	int_2 = int_1 * int_3;
	char controller4vul_2562[2];
	fgets(controller4vul_2562 ,2 ,stdin);
	if( strcmp( controller4vul_2562, "1") < 0)
	{
		long long_1 = 1;
		int_3 = v_luaK_exp2RK(int_4,float_3,uni_para);

		long_1 = long_1 + long_1;
	}
	char_2 = char_1 * char_1;
	short_1 = short_1 * short_2;
	char_3 = char_3 * char_2;
}
short v_getbinopr( int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
long v_explist( double parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_5 = 1;
	double double_2 = 1;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		char char_4 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_1 = v_testnext(long_1,int_1);

		char_4 = char_3 * char_2;
	}
	short_1 = v_expr(char_3,float_1,-1 );

	v_luaK_exp2nextreg(unsigned_int_2,char_5,-1 );

	double_1 = double_2;
	return long_1;
}
short v_funcargs( float parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	long long_2 = 1;
	char char_4 = 1;
	int int_4 = 1;
	float float_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_2;
	v_luaK_exp2nextreg(unsigned_int_2,char_1,-1 );

	int_1 = int_1 + int_2;
	short_3 = short_1 + short_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		long_1 = v_explist(double_2,char_2);

		double_3 = double_2 * double_1;
	}
	if(1)
	{
		double_4 = double_4 * double_4;
		double_5 = double_1 * double_2;
	}
	char_3 = v_codestring(long_1,char_3,int_3);

	float_2 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	double_6 = double_3 * double_4;
	short_1 = short_2;
	v_constructor(char_1,unsigned_int_1);

	long_1 = long_1 + long_2;
	v_luaX_next(short_2);

	char_4 = v_check_match(int_3,int_1,int_1,int_4);

	v_luaK_fixline(int_1,int_3);

	float_3 = float_2 + float_3;
	unsigned_int_2 = unsigned_int_1;
	double_3 = v_luaX_syntaxerror(double_4,char_5,-1 );

	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
		int_2 = int_3 * int_3;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		if(1)
		{
			v_init_exp(unsigned_int_1,long_3,int_4);

			int_3 = v_luaK_codeABC(unsigned_int_1,short_3,int_2,int_4,int_5);

			double_3 = double_5 * double_1;
		}
		long_5 = long_3 + long_4;
	}
	float_4 = float_1 + float_2;
	float_3 = float_5 * float_6;
	double_7 = double_1 + double_3;
	return short_2;
}
void v_luaK_self( double parameter_1,double parameter_2,char parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	v_freeexp(long_1,double_1);

	short_2 = short_1 + short_2;
	float_2 = float_1 * float_2;
	int_1 = int_2;
	int_1 = v_luaK_exp2anyreg(float_2,int_1,-1 );

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_2;
	v_luaK_reserveregs(double_2,int_3);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_1 = float_2 * float_2;
	int_1 = v_luaK_codeABC(unsigned_int_1,short_2,int_1,int_2,int_3);

	double_3 = double_1 + double_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	int_3 = v_luaK_exp2RK(int_3,float_3,-1 );

}
void v_luaK_exp2anyregup( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_1 = v_luaK_exp2anyreg(float_1,int_1,-1 );

		double_2 = double_1 + double_1;
	}
}
char v_fieldsel( float parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_4 = 1;
	char char_3 = 1;
	short short_5 = 1;
	short_1 = short_1 * short_1;
	v_luaX_next(short_2);

	float_2 = float_1 * float_2;
	short_1 = short_2 * short_3;
	v_luaK_exp2anyregup(long_1,short_3);

	char_1 = char_1 + char_1;
	short_2 = v_checkname(short_1,double_1);

	int_1 = int_1 * int_2;
	char_1 = char_1 + char_1;
	return char_2;
	v_luaK_indexed(short_4,char_3,short_5);

}
void v_luaK_indexed( short parameter_1,char parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_3 = float_1 * float_2;
	int_2 = int_1 + int_1;
	double_2 = double_1 + double_2;
	int_1 = v_luaK_exp2RK(int_3,float_3,-1 );

	short_2 = short_1 + short_2;
	short_3 = short_3 + short_3;
}
short v_searchupvalue( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return short_1;
}
double v_markupval( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short_3 = short_1 + short_2;
	int_1 = int_1 * int_1;
	return double_1;
}
double v_searchvar( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return double_1;
	long_1 = v_getlocvar(char_1,int_2);

}
short v_singlevaraux( long parameter_1,float parameter_2,long parameter_3,int parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	short short_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double_1 = v_markupval(float_1,int_1);

		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double_3 = double_2 + double_2;
		if(1)
		{
			short_2 = short_1 + short_1;
			if(1)
			{
				long long_1 = 1;
				long_2 = long_1 + long_2;
			}
		}
		if(1)
		{
			v_init_exp(unsigned_int_2,long_3,int_1);

			short_1 = v_searchupvalue(long_3,short_2);

			long_2 = long_2;
			if(1)
			{
				float float_2 = 1;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
				if(1)
				{
				}
				float_1 = float_2 + float_1;
			}
			double_1 = v_searchvar(long_4,short_2);

			int_1 = v_newupvalue(short_2,char_1,short_3);

			int_1 = int_1;
		}
	}
	return short_3;
}
double v_singlevar( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_3 = 1;
	v_luaK_indexed(short_1,char_1,short_2);

	long_3 = long_1 * long_2;
	int_1 = int_1 * int_1;
	short_3 = v_singlevaraux(long_3,float_1,long_2,int_1);

	char_2 = v_codestring(long_1,char_2,int_1);

	char_3 = char_2;
	if(1)
	{
		long long_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_5 = 1;
		double double_2 = 1;
		long_3 = long_3 * long_4;
		unsigned_int_1 = unsigned_int_2;
		double_1 = v_str_checkname(long_2);

		long_5 = long_2 * long_2;
		double_2 = double_1 * double_1;
		double_3 = double_2 + double_3;
	}
	return double_3;
}
float v_primaryexp( float parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = v_singlevar(char_1,int_1);

	double_2 = double_2 + double_1;
	char_1 = v_check_match(int_2,int_3,int_2,int_4);

	v_luaK_dischargevars(short_1,char_1);

	double_3 = double_2 + double_1;
	v_luaX_next(short_2);

	short_4 = short_3 * short_3;
	float_1 = float_1;
	short_3 = short_1 * short_2;
	short_4 = v_expr(char_1,float_2,-1 );

	int_5 = int_3 + int_2;
	return float_3;
	double_1 = v_luaX_syntaxerror(double_3,char_1,-1 );

}
long v_suffixedexp( long parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	short short_4 = 1;
	float_1 = float_1;
	char_1 = char_1 * char_1;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		short short_3 = 1;
		int int_5 = 1;
		v_luaK_exp2anyregup(long_1,short_1);

		int_2 = int_1 * int_2;
		float_2 = float_1 * float_1;
		v_luaK_exp2nextreg(unsigned_int_1,char_3,-1 );

		long_1 = long_1;
		int_1 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_2;
		int_3 = int_1 * int_3;
		int_3 = int_1 * int_1;
		char_1 = v_fieldsel(float_1,unsigned_int_3);

		short_3 = short_1 + short_2;
		v_luaK_self(double_1,double_1,char_2);

		float_1 = float_1 + float_3;
		short_2 = v_funcargs(float_3,double_2,int_4);

		int_1 = int_4 * int_4;
		long_2 = long_2 + long_1;
		v_luaX_next(short_2);

		int_1 = int_3 * int_3;
		float_3 = float_3;
		double_1 = v_yindex(double_1,float_2);

		long_1 = long_1 * long_1;
		v_luaK_indexed(short_1,char_1,short_2);

		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		float_4 = v_primaryexp(float_1,unsigned_int_4);

		int_2 = int_5 * int_1;
	}
	return long_2;
	short_4 = v_checkname(short_4,double_2);

}
unsigned int v_undefgoto( double parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	v_luaO_pushfstring(double_1,unsigned_int_4,int_1);

	short_1 = v_semerror(double_2,unsigned_int_5);

	double_1 = double_3;
	short_1 = short_2 * short_2;
	return unsigned_int_5;
}
float v_findlabel( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	v_luaK_patchclose(double_1,int_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	int_1 = v_closegoto(short_1,int_1,short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	short_3 = short_2 + short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			char controller_2[3];
			fgets(controller_2 ,3 ,stdin);
			if( strcmp( controller_2, "sy") < 0)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_2 = float_1 + float_1;
			}
			int_3 = int_2 * int_2;
		}
	}
	return float_3;
}
char v_movegotosout( double parameter_1,char parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	return char_1;
	v_luaK_patchclose(double_1,int_1,int_1);

	float_1 = v_findlabel(short_1,int_2);

}
double v_removevars( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	double double_6 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	char_3 = char_1 * char_2;
	if(1)
	{
		int_1 = int_1;
	}
	float_3 = float_1 + float_2;
	double_4 = double_2 + double_3;
	long_1 = v_getlocvar(char_3,int_1);

	float_4 = float_4 + float_1;
	char_1 = char_1 * char_3;
	double_5 = double_5 * double_1;
	double_2 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_3;
	float_2 = float_2 + float_1;
	int_1 = int_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_3 = double_5 + double_2;
	char_4 = char_3 * char_4;
	char_2 = char_2 * char_3;
	double_2 = double_4 + double_2;
	char_5 = char_6;
	char_4 = char_7 * char_4;
	if(1)
	{
		double_2 = double_4 + double_3;
	}
	double_4 = double_5 * double_4;
	return double_6;
}
void v_luaK_patchlist( double parameter_1,int parameter_2,int parameter_3)
{
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	if(1)
	{
		long long_1 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_5 = 1;
		short_2 = short_1 * short_1;
		v_luaK_patchtohere(long_2,int_1);

		int_2 = v_patchlistaux(unsigned_int_1,int_3,int_2,int_1,int_4);

		int_1 = int_5 + int_3;
	}
}
short v_semerror( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double_1 = double_1;
	double_3 = double_2 * double_2;
	return short_1;
	double_2 = v_luaX_syntaxerror(double_2,char_1,-1 );

}
int v_closegoto( short parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_luaK_patchlist(double_1,int_1,int_1);

	float_2 = float_1 * float_1;
	float_4 = float_3 + float_4;
	int_2 = int_2 + int_2;
	float_2 = float_5 * float_6;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "w7") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		long_1 = v_getlocvar(char_1,int_1);

		float_3 = float_1 * float_5;
		short_1 = v_semerror(double_2,unsigned_int_1);

		double_4 = double_3 * double_2;
	}
	double_2 = double_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		v_luaO_pushfstring(double_3,unsigned_int_1,int_2);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	char_2 = char_1;
	return int_3;
}
int v_findgotos( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_1;
	int_1 = v_closegoto(short_1,int_2,short_2);

}
double v_newlabelentry( double parameter_1,long parameter_2,double parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_1;
	float_1 = float_1 * float_2;
	double_2 = double_2;
	short_1 = short_1 * short_1;
	return double_2;
}
int v_breaklabel( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double_1 = v_newlabelentry(double_1,long_1,double_2,int_1,int_1);

	double_3 = double_2 * double_1;
	int_2 = v_findgotos(char_1,double_1);

	double_3 = double_2 * double_1;
	int_1 = int_1 * int_2;
	return int_3;
	char_2 = v_luaS_new(short_1,long_1);

}
void v_luaK_patchclose( double parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = v_getjump(int_1,int_2);

	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		double_2 = double_1 + double_1;
		float_1 = float_2;
	}
}
void v_leaveblock( float parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double double_5 = 1;
		double_1 = double_2;
		int_1 = v_luaK_jump(double_3,-1 );

		v_luaK_patchclose(double_4,int_1,int_1);

		double_5 = double_1 * double_5;
		v_luaK_patchtohere(long_1,int_1);

		int_2 = int_1 + int_1;
	}
	if(1)
	{
		char_1 = v_movegotosout(double_2,char_1);

		int_4 = int_3 + int_2;
	}
	int_5 = v_breaklabel(int_2);

	int_6 = int_4 + int_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
	double_6 = v_removevars(double_6,int_3);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2;
	}
	unsigned_int_3 = v_undefgoto(double_1,float_1);

}
void v_luaK_ret( long parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_1;
	int_1 = v_luaK_codeABC(unsigned_int_1,short_1,int_1,int_2,int_1);

}
short v_close_func( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	int_2 = int_1 + int_1;
	long_2 = long_1 * long_1;
	int_2 = int_3 + int_1;
	v_luaK_ret(long_2,int_3,int_3);

	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	char_2 = char_1 * char_2;
	short_2 = short_1 * short_2;
	double_1 = double_2 + double_3;
	int_3 = int_3 + int_1;
	int_3 = int_4 + int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	int_5 = int_2 * int_1;
	double_4 = double_4;
	v_leaveblock(float_1);

	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
	char_3 = char_2 + char_2;
	return short_2;
}
unsigned int v_codeclosure( float parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	v_luaK_exp2nextreg(unsigned_int_1,char_1,-1 );

	double_1 = double_1 + double_1;
	float_1 = float_1 + float_2;
	float_2 = float_2;
	return unsigned_int_1;
	v_init_exp(unsigned_int_2,long_1,int_1);

	int_2 = v_luaK_codeABx(short_1,short_2,int_3,char_1);

}
int v_registerlocalvar( double parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float_2 = float_1 * float_2;
	double_1 = double_1 * double_2;
	int_1 = int_1 * int_2;
	int_1 = int_2 * int_2;
	int_4 = int_3 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double_4 = double_1 + double_3;
		if(1)
		{
			int_1 = int_3;
			int_4 = int_2;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 + char_1;
			}
		}
		long_1 = long_1 + long_1;
		long_1 = long_1;
	}
	return int_4;
}
int v_new_localvar( short parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	char char_3 = 1;
	float_2 = float_1 * float_1;
	char_1 = char_2;
	float_1 = v_checklimit(int_1,int_2,int_3,int_2);

	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_4;
	int_2 = v_registerlocalvar(double_1,char_3);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	return int_1;
}
void v_parlist( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	v_luaK_reserveregs(double_1,int_1);

	int_1 = int_2 + int_1;
	int_2 = v_new_localvar(short_1,char_1);

	v_luaX_next(short_2);

	double_2 = v_testnext(long_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = v_str_checkname(long_2);

	double_2 = v_luaX_syntaxerror(double_2,char_2,-1 );

	char_3 = v_adjustlocalvars(unsigned_int_3,int_2);

	int_1 = int_3;
}
long v_getlocvar( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int_1 = int_1;
	float_1 = float_2;
	return long_1;
}
char v_adjustlocalvars( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char char_4 = 1;
	int int_1 = 1;
	double_3 = double_1 + double_2;
	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	return char_3;
	long_1 = v_getlocvar(char_4,int_1);

}
long v_addprototype()
{
	int int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double_1 = double_2;
		int_1 = v_luaF_newproto(double_3);

		char_1 = char_1 + char_1;
	}
	return long_1;
}
short v_body( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_2;
	long_1 = v_addprototype();

	int_1 = v_statlist(int_2,-1 );

	unsigned_int_1 = v_codeclosure(float_1,char_1);

	short_1 = v_close_func(short_1);

	long_2 = long_2 + long_1;
	char_2 = char_2 * char_1;
	short_2 = short_1 * short_1;
	double_3 = double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		char char_3 = 1;
		v_parlist(char_1);

		short_1 = short_3 * short_2;
		char_3 = char_2 * char_1;
	}
	int_3 = v_checknext(char_1,int_2);

	double_3 = double_3 + double_3;
	double_2 = double_4;
	char_4 = char_2 * char_2;
	long_4 = long_3 + long_1;
	char_4 = v_adjustlocalvars(unsigned_int_3,int_2);

	char_4 = v_check_match(int_1,int_1,int_4,int_5);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_2;
	char_1 = char_2 * char_2;
	return short_1;
	double_4 = v_open_func(int_5,float_2,int_4);

}
int v_luaO_int2fb( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
		double_1 = double_1 + double_1;
	}
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_2;
	return int_1;
}
int v_lastlistfield( int parameter_1,long parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		long_1 = long_1;
		v_luaK_exp2nextreg(unsigned_int_1,char_1,-1 );

		double_1 = double_1 * double_1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		long long_2 = 1;
		if(1)
		{
			v_luaK_setlist(unsigned_int_2,int_1,int_1,int_1);

			int_1 = int_1 + int_2;
		}
		long_1 = long_2 * long_2;
	}
	return int_3;
}
char v_check_match( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	double double_5 = 1;
	long long_2 = 1;
	if(1)
	{
		if(1)
		{
			double_1 = v_error_expected(char_1,int_1);

			double_2 = v_luaX_syntaxerror(double_3,char_2,-1 );

			int_2 = v_luaX_token2str(long_1,int_2);

			int_3 = int_2 + int_1;
		}
		if(1)
		{
			v_luaO_pushfstring(double_4,unsigned_int_1,int_3);

			unsigned_int_1 = unsigned_int_1;
		}
	}
	return char_3;
	double_5 = v_testnext(long_2,int_3);

}
double v_testnext( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		v_luaX_next(short_1);

		int_3 = int_1 * int_2;
	}
	if(1)
	{
	}
	return double_1;
}
float v_nilK()
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long_1 = v_addk(short_1,long_1,unsigned_int_1);

	double_1 = double_1 + double_1;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1;
	return float_1;
}
int v_boolK( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long_1 = v_addk(short_1,long_1,unsigned_int_1);

	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
int v_luaK_exp2RK( int parameter_1,float parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_1 * double_2;
	int_3 = int_1 * int_2;
	double_1 = double_2 * double_1;
	short_3 = short_2 + short_1;
	double_4 = double_1 + double_3;
	double_4 = double_3 * double_3;
	int_4 = int_4 * int_3;
	short_1 = short_3;
	char controller4vul_2563[2];
	fgets(controller4vul_2563 ,2 ,stdin);
	if( strcmp( controller4vul_2563, "D") < 0)
	{
		v_luaK_exp2val(char_1,int_4,uni_para);

	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	double_3 = double_2 * double_3;
	return int_2;
}
void v_luaK_exp2val( char parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	char controller4vul_2564[2];
	fgets(controller4vul_2564 ,2 ,stdin);
	if( strcmp( controller4vul_2564, "E") > 0)
	{
		float float_2 = 1;
		int_1 = v_luaK_exp2anyreg(float_1,int_1,uni_para);

		float_1 = float_2;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
}
double v_yindex( double parameter_1,float parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	v_luaX_next(short_1);

	v_luaK_exp2val(char_1,int_1,-1 );

	int_1 = v_checknext(char_2,int_1);

	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 + int_2;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	return double_1;
	short_1 = v_expr(char_2,float_1,-1 );

}
double v_str_checkname( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char_3 = char_1 * char_2;
	double_1 = double_1 * double_2;
	int_1 = v_check(unsigned_int_1,int_1);

	unsigned_int_2 = unsigned_int_2;
	v_luaX_next(short_1);

	short_1 = short_2;
	return double_3;
}
short v_checkname( short parameter_1,double parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	char_1 = v_codestring(long_1,char_1,int_1);

	double_2 = double_1 + double_1;
	return short_1;
	double_3 = v_str_checkname(long_2);

}
unsigned int v_recfield( double parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 * char_2;
	float_1 = v_checklimit(int_1,int_2,int_2,int_2);

	char_3 = char_2;
	long_1 = long_1;
	if(1)
	{
		long long_2 = 1;
		int_3 = v_luaK_codeABC(unsigned_int_1,short_1,int_2,int_2,int_2);

		long_2 = long_1 + long_1;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		int_4 = v_luaK_exp2RK(int_5,float_1,-1 );

		float_3 = float_2 + float_3;
	}
	int_6 = v_checknext(char_1,int_5);

	double_2 = double_1 * double_1;
	short_2 = v_checkname(short_1,double_2);

	char_2 = char_3;
	int_6 = int_4 + int_2;
	double_2 = v_yindex(double_1,float_2);

	short_3 = v_expr(char_1,float_4,-1 );

	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	float_5 = float_6;
	float_7 = float_2 * float_3;
	return unsigned_int_2;
}
unsigned int v_listfield( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_2;
	short_1 = v_expr(char_1,float_1,-1 );

	float_2 = v_checklimit(int_2,int_2,int_1,int_1);

	char_2 = char_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_2;
}
int v_luaX_lookahead( short parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long_1 = v_llex(float_1,float_2);

	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
int v_field( short parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	if(1)
	{
		double double_2 = 1;
		unsigned_int_1 = v_listfield(unsigned_int_1,long_1);

		double_3 = double_1 + double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_1 = v_luaX_lookahead(short_1);

		unsigned_int_2 = v_recfield(double_3,float_1);

		char_3 = char_1 + char_2;
	}
	short_2 = short_2 + short_1;
	unsigned_int_3 = unsigned_int_1;
	double_3 = double_3 + double_1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	return int_1;
}
void v_luaK_setlist( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	int_1 = v_luaK_codeABC(unsigned_int_1,short_1,int_1,int_1,int_1);

	short_2 = v_codeextraarg(long_1,int_1);

	long_2 = long_1;
	double_1 = double_1 * double_1;
	int_2 = int_1 + int_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		char_1 = char_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	double_2 = v_luaX_syntaxerror(double_2,char_2,-1 );

	short_2 = short_2 + short_3;
}
long v_closelistfield( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	v_luaK_setlist(unsigned_int_1,int_1,int_1,int_2);

	float_3 = float_1 + float_2;
	float_3 = float_4;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_2;
		float_4 = float_2 + float_2;
	}
	return long_2;
	v_luaK_exp2nextreg(unsigned_int_1,char_1,-1 );

}
double v_error_expected( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double_1 = double_2;
	return double_1;
	double_1 = v_luaX_syntaxerror(double_2,char_1,-1 );

	v_luaO_pushfstring(double_3,unsigned_int_1,int_1);

	int_2 = v_luaX_token2str(long_1,int_3);

}
int v_check( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	return int_1;
	double_1 = v_error_expected(char_1,int_1);

}
int v_checknext( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	long_1 = long_1 + long_1;
	return int_2;
	int_3 = v_check(unsigned_int_1,int_4);

	v_luaX_next(short_1);

}
void v_constructor( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_2 = 1;
	int_1 = v_luaK_codeABC(unsigned_int_1,short_1,int_1,int_2,int_3);

	v_init_exp(unsigned_int_1,long_1,int_4);

	v_luaK_exp2nextreg(unsigned_int_1,char_1,-1 );

	int_1 = v_checknext(char_1,int_1);

	long_1 = v_closelistfield(long_2,char_2);

	int_4 = v_field(short_1,float_1);

	double_1 = v_testnext(long_1,int_4);

	char_1 = v_check_match(int_5,int_3,int_3,int_5);

	int_6 = v_lastlistfield(int_1,long_1);

	int_3 = v_luaO_int2fb(double_2);

}
int v_luaK_stringK( char parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 + char_2;
	return int_1;
	long_1 = v_addk(short_1,long_2,unsigned_int_3);

}
char v_codestring( long parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int_1 = v_luaK_stringK(char_1,unsigned_int_1);

	char_2 = char_1 * char_2;
	return char_2;
	v_init_exp(unsigned_int_1,long_1,int_2);

}
int v_simpleexp( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	double double_3 = 1;
	int int_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_2;
	short_1 = short_1 * short_2;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_1;
	short_3 = v_body(float_1,unsigned_int_3,int_2,int_2);

	long_2 = long_2 + long_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	v_init_exp(unsigned_int_2,long_2,int_1);

	unsigned_int_2 = unsigned_int_6 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	char_1 = v_codestring(long_2,char_1,int_2);

	int_1 = int_2;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	long_3 = v_suffixedexp(long_2,unsigned_int_3);

	double_2 = double_1;
	int_1 = int_1 * int_2;
	int_3 = int_1 + int_2;
	v_constructor(char_1,unsigned_int_4);

	double_1 = double_2 * double_2;
	v_luaX_next(short_1);

	unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
	int_2 = v_luaK_codeABC(unsigned_int_2,short_3,int_3,int_4,int_4);

	double_2 = double_1 * double_2;
	short_1 = short_4 + short_4;
	double_3 = double_2 * double_1;
	int_2 = int_5;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_1;
	return int_2;
}
double v_removevalues( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		float_1 = v_getjump(int_1,int_2);

		double_1 = v_patchtestreg(double_2,int_1,int_1);

		int_2 = int_2 * int_3;
	}
	return double_1;
}
void v_discharge2anyreg( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_1 * long_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	v_luaK_reserveregs(double_1,int_1);

	short_1 = v_discharge2reg(double_1,unsigned_int_1,int_1);

}
float v_negatecondition( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short_2 = short_1 + short_2;
	int_2 = int_1 + int_1;
	long_1 = v_getjumpcontrol(short_3,int_3);

	int_4 = int_2 + int_1;
	return float_1;
}
char v_codenot( float parameter_1,short parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	double double_6 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float_1 = float_1;
	double_1 = double_2;
	double_3 = v_removevalues(double_2,int_1);

	char_2 = char_1 * char_2;
	double_5 = double_4 * double_1;
	v_freeexp(long_1,double_4);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_luaK_dischargevars(short_1,char_3);

	double_4 = double_4 * double_1;
	short_1 = short_1 + short_2;
	double_6 = double_5 + double_1;
	float_1 = float_1;
	v_discharge2anyreg(unsigned_int_1,float_2);

	int_1 = int_1 * int_1;
	int_2 = int_1 * int_1;
	double_2 = double_1;
	int_2 = v_luaK_codeABC(unsigned_int_3,short_1,int_3,int_2,int_2);

	float_1 = float_1 * float_3;
	long_1 = long_1;
	short_3 = short_4;
	double_1 = double_2 * double_3;
	float_3 = v_negatecondition(float_3,char_3);

	int_3 = int_2;
	int_5 = int_4 * int_1;
	return char_3;
}
void v_luaK_fixline( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_2;
}
void v_luaK_checkstack( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = v_luaX_syntaxerror(double_2,char_1,-1 );

	double_4 = double_3 * double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		if(1)
		{
			int_1 = int_1;
		}
		int_2 = int_1 + int_1;
	}
}
void v_luaK_reserveregs( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_luaK_checkstack(short_1,int_1);

}
void v_freeexp( long parameter_1,double parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	long_1 = v_freereg(float_1,int_1);

}
void v_luaK_exp2nextreg( unsigned int parameter_1,char parameter_2,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char_1 = v_exp2reg(int_1,short_1,int_2,uni_para);

	long_1 = long_2;
	long_1 = long_1 * long_1;
	int_3 = int_1;
	char_1 = char_2 + char_2;
}
void v_luaK_patchtohere( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_2;
	double_2 = double_1 * double_1;
	int_1 = v_luaK_getlabel();

	v_luaK_concat(float_1,int_2,int_3,-1 );

}
int v_luaK_getlabel()
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_1;
	return int_2;
}
short v_code_loadbool( short parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int_1 = v_luaK_getlabel();

	short_2 = short_1 + short_1;
	return short_2;
	int_1 = v_luaK_codeABC(unsigned_int_1,short_2,int_1,int_2,int_2);

}
int v_luaK_jump( double parameter_1,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	v_luaK_concat(float_1,int_1,int_2,uni_para);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	char_1 = char_2;
	double_1 = double_3 + double_3;
	long_2 = long_1 * long_1;
	return int_3;
}
short v_need_value( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = v_getjumpcontrol(short_1,int_1);

		int_2 = int_2 + int_1;
		if(1)
		{
		}
	}
	return short_1;
	float_1 = v_getjump(int_1,int_2);

}
void v_luaK_concat( float parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	long long_1 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short_1 = v_fixjump(short_2,int_1,int_1,uni_para);

	float_3 = float_1 + float_2;
	short_3 = short_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 * double_2;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	char_1 = char_2 * char_1;
	short_4 = short_5 * short_3;
	long_1 = long_1;
	float_5 = float_3 + float_4;
}
int v_luaK_intK( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	short_1 = short_1 * short_2;
	return int_1;
	long_1 = v_addk(short_1,long_2,unsigned_int_3);

}
long v_addk( short parameter_1,long parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	char_1 = char_2;
	unsigned_int_1 = v_luaH_set(short_1,unsigned_int_1,unsigned_int_1);

	float_1 = float_2 * float_2;
	return long_1;
}
double v_luaK_numberK( double parameter_1,short parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_1 = v_addk(short_1,long_1,unsigned_int_1);

	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
short v_codeextraarg( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	return short_1;
	short_2 = v_luaK_code(int_1,long_1);

}
int v_luaK_codeABx( short parameter_1,short parameter_2,int parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_luaK_code(int_1,long_1);

	double_2 = double_1 + double_1;
	return int_2;
}
int v_luaK_codek( long parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
		short_1 = v_codeextraarg(long_1,int_1);

		short_2 = short_1 + short_1;
	}
	return int_1;
	int_1 = v_luaK_codeABx(short_2,short_1,int_2,char_1);

}
void v_luaK_nil( float parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float_3 = float_1 * float_2;
			char_2 = char_1 + char_1;
			if(1)
			{
				short short_1 = 1;
				double double_1 = 1;
				if(1)
				{
					char char_3 = 1;
					char_1 = char_3 + char_1;
				}
				if(1)
				{
					unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
				}
				short_2 = short_1 + short_1;
				double_1 = double_1;
			}
		}
	}
	int_2 = v_luaK_codeABC(unsigned_int_3,short_2,int_3,int_1,int_3);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
}
short v_discharge2reg( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = v_luaK_codeABC(unsigned_int_1,short_1,int_2,int_3,int_2);

	char_1 = char_2;
	short_3 = short_2 + short_1;
	int_3 = int_2 * int_4;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_2;
	v_luaK_nil(float_1,int_3,int_1);

	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	long_1 = long_1;
	double_2 = double_2 + double_3;
	double_3 = double_1 * double_1;
	char_2 = char_1 + char_3;
	v_luaK_dischargevars(short_4,char_3);

	int_3 = v_luaK_codek(long_2,int_4,int_1);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	float_3 = float_3 + float_4;
	if(1)
	{
		int_4 = int_1;
	}
	long_3 = long_3 * long_3;
	double_2 = v_luaK_numberK(double_4,short_2);

	int_5 = v_luaK_intK(float_5,int_4);

	int_5 = int_1 + int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	short_3 = short_2 + short_4;
	return short_2;
}
char v_exp2reg( int parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	char_1 = char_1 * char_2;
	char controller4vul_2567[3];
	fgets(controller4vul_2567 ,3 ,stdin);
	if( strcmp( controller4vul_2567, "}<") > 0)
	{
		int_1 = v_luaK_jump(double_1,uni_para);

		float_1 = float_1 + float_1;
	}
	if(1)
	{
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		float_1 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_2;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float_3 = float_4;
			short_2 = short_1 + short_1;
			short_4 = short_3 * short_2;
			long_1 = long_1 * long_2;
		}
		float_4 = float_5 * float_3;
		double_2 = double_3 + double_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	double_1 = double_2 * double_1;
	double_4 = double_1;
	char_1 = char_2;
	return char_1;
}
void v_luaK_setoneret( double parameter_1,float parameter_2)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		double_1 = double_1 * double_2;
		short_3 = short_1 * short_2;
		double_1 = double_1 + double_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_2 = float_1 + float_1;
		long_2 = long_1 * long_1;
	}
}
long v_freereg( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char_2 = char_1 + char_1;
		int_1 = int_2;
	}
	return long_1;
}
short v_fixjump( short parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_2;
	double_1 = double_1 + double_1;
	float_1 = float_2;
	char controller4vul_2568[2];
	fgets(controller4vul_2568 ,2 ,stdin);
	if( strcmp( controller4vul_2568, "*") > 0)
	{
		double double_3 = 1;
		double_1 = v_luaX_syntaxerror(double_2,char_1,uni_para);

		double_2 = double_3 * double_2;
	}
	double_1 = double_2 + double_4;
	return short_1;
}
long v_getjumpcontrol( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	short_3 = short_1 * short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Gf") == 0)
	{
	}
	if(1)
	{
	}
	return long_1;
}
double v_patchtestreg( double parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_1 = v_getjumpcontrol(short_1,int_1);

	short_1 = short_2 + short_2;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "d=") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	return double_1;
}
float v_getjump( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_2;
}
int v_patchlistaux( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = v_getjump(int_1,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = v_patchtestreg(double_1,int_2,int_2);

	short_1 = v_fixjump(short_2,int_3,int_2,-1 );

	int_2 = int_1;
	long_2 = long_1 + long_2;
	return int_2;
}
float v_dischargejpc( unsigned int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = v_patchlistaux(unsigned_int_1,int_2,int_1,int_2,int_2);

	float_1 = float_1 + float_1;
	float_1 = float_1 + float_1;
	return float_2;
}
short v_luaK_code( int parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_1;
	int_2 = int_1 + int_2;
	char_3 = char_2 + char_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	float_1 = v_dischargejpc(unsigned_int_3);

	int_2 = int_1 + int_2;
	return short_1;
}
int v_luaK_codeABC( unsigned int parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 * char_2;
	double_2 = double_1 + double_1;
	short_1 = v_luaK_code(int_1,long_1);

	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
}
void v_luaK_dischargevars( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_1;
	short_2 = short_1 + short_2;
	int_2 = int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		v_luaK_setoneret(double_2,float_1);

		int_4 = int_3 * int_3;
		short_3 = short_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 + double_3;
		int_2 = int_5;
	}
	int_5 = v_luaK_codeABC(unsigned_int_3,short_4,int_6,int_6,int_1);

	long_1 = long_1 * long_1;
	long_1 = long_2;
	long_2 = v_freereg(float_1,int_4);

	char_3 = char_4;
	int_1 = int_6 * int_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	double_2 = double_1 + double_2;
}
int v_luaK_exp2anyreg( float parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int_1 = int_1;
	char controller4vul_2565[3];
	fgets(controller4vul_2565 ,3 ,stdin);
	if( strcmp( controller4vul_2565, "z3") > 0)
	{
		char controller4vul_2566[2];
		fgets(controller4vul_2566 ,2 ,stdin);
		if( strcmp( controller4vul_2566, "z") < 0)
		{
			v_luaK_exp2nextreg(unsigned_int_1,char_1,uni_para);

		}
		if(1)
		{
			int int_3 = 1;
			int_1 = int_2 * int_3;
		}
	}
	int_2 = int_4 + int_1;
	return int_4;
}
long v_codeunexpval( long parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_1 = int_1;
	double_3 = double_1 + double_2;
	v_luaK_fixline(int_1,int_2);

	int_3 = int_2 + int_1;
	v_freeexp(long_1,double_3);

	char_2 = char_1 * char_2;
	double_1 = double_3 * double_4;
	return long_1;
	int_3 = v_luaK_exp2anyreg(float_1,int_2,-1 );

	int_1 = v_luaK_codeABC(unsigned_int_1,short_1,int_3,int_2,int_2);

}
short v_numarith( char parameter_1,int parameter_2,int parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_1 * int_2;
	return short_1;
}
short v_intarith( unsigned int parameter_1,int parameter_2,int parameter_3,double parameter_4)
{
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	long long_2 = 1;
	short_1 = v_luaV_mod(char_1,float_1,unsigned_int_1);

	long_1 = v_luaV_div(double_1,double_2,int_1);

	int_1 = int_2 * int_2;
	return short_1;
	int_2 = v_luaV_shiftl(short_2,long_2);

}
void v_luaO_arith( int parameter_1,int parameter_2,unsigned int parameter_3,double parameter_4,float parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_6 = 1;
	float_1 = float_2;
	v_luaT_trybinTM(float_3,float_4,double_1,float_5,unsigned_int_1);

	int_1 = int_2;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		short_1 = v_intarith(unsigned_int_2,int_2,int_3,double_3);

		char_2 = char_1 * char_2;
	}
	long_2 = long_1 * long_2;
	short_1 = v_numarith(char_2,int_2,int_3,long_1);

	short_1 = short_2 * short_1;
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3 * char_3;
	}
	double_1 = double_4 * double_1;
	double_3 = double_5;
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "rO") == 0)
	{
		char_1 = char_1 * char_1;
	}
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "XY") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		double_5 = double_5 * double_4;
	}
	float_4 = float_6;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
}
long v_validop( int parameter_1,unsigned int parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float_2 = float_1 + float_2;
	return long_1;
}
long v_tonumeral( unsigned int parameter_1,short parameter_2)
{
	long long_1 = 1;
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
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	return long_1;
}
void v_constfolding( unsigned int parameter_1,int parameter_2,float parameter_3,char parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	short_3 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		long_1 = v_tonumeral(unsigned_int_1,short_4);

		long_2 = v_validop(int_1,unsigned_int_2,char_1);

		double_1 = double_1;
		v_luaO_arith(int_1,int_2,unsigned_int_1,double_2,float_1);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		char char_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char_2 = char_2;
		if(1)
		{
		}
		int_3 = int_1 + int_3;
		double_1 = double_3 + double_4;
	}
}
void v_luaK_prefix( double parameter_1,long parameter_2,long parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
		long_2 = v_codeunexpval(long_1,char_1,int_1,int_2);

		char_1 = v_codenot(float_1,short_1);

		unsigned_int_1 = unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_2 * short_3;
	short_1 = short_3;
	double_3 = double_1 + double_2;
	v_constfolding(unsigned_int_4,int_3,float_1,char_2);

	float_1 = float_2 * float_3;
}
void v_getunopr( int parameter_1)
{
}
void v_subexpr( unsigned int parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char controller4vul_2561[2];
	fgets(controller4vul_2561 ,2 ,stdin);
	if( strcmp( controller4vul_2561, "s") > 0)
	{
		v_luaK_infix(short_1,long_1,char_1,uni_para);

	}
	float_1 = float_1 * float_1;
}
short v_expr( char parameter_1,float parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	v_subexpr(unsigned_int_1,long_1,int_1,uni_para);

	double_1 = double_2;
	return short_1;
}
double v_test_then_block( long parameter_1,int parameter_2,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	char_2 = char_1 * char_1;
	double_1 = double_1 + double_1;
	float_2 = float_1 + float_2;
	short_1 = short_2;
	int_2 = int_1 * int_2;
	short_3 = short_1 + short_2;
	int_1 = int_2 * int_1;
	char controller4vul_2559[3];
	fgets(controller4vul_2559 ,3 ,stdin);
	if( strcmp( controller4vul_2559, "Wn") < 0)
	{
		float float_3 = 1;
		long long_1 = 1;
		float_3 = float_2 + float_2;
		double_2 = double_1;
		long_1 = long_1 * long_1;
		int_4 = int_3 * int_2;
		char controller4vul_2560[2];
		fgets(controller4vul_2560 ,2 ,stdin);
		if( strcmp( controller4vul_2560, "{") > 0)
		{
			short_3 = v_expr(char_2,float_1,uni_para);

			double_3 = double_2 * double_3;
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_3;
		}
	}
	if(1)
	{
		double_3 = double_2 * double_2;
		int_4 = int_2 + int_3;
		double_3 = double_1 * double_3;
	}
	short_4 = short_2 * short_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2 * long_2;
	}
	double_3 = double_1 + double_4;
	return double_4;
}
char v_ifstat( unsigned int parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double_1 = v_test_then_block(long_1,int_1,uni_para);

	int_2 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	return char_1;
}
short v_enterlevel( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	char_2 = char_1 * char_2;
	float_1 = v_checklimit(int_1,int_2,int_1,int_3);

	short_1 = short_2;
	long_1 = long_1;
	return short_3;
}
void v_statement( float parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 + int_2;
	double_2 = double_1 + double_2;
	double_3 = double_3;
	float_2 = float_1 + float_2;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_2;
	float_3 = float_2 * float_2;
	int_1 = int_2;
	long_4 = long_3 * long_3;
	int_1 = int_1 * int_2;
	short_1 = short_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	long_5 = long_2 + long_4;
	float_1 = float_2;
	double_1 = double_2 * double_2;
	long_4 = long_4;
	char_1 = char_1 * char_1;
	int_1 = int_2 * int_2;
	char controller4vul_2558[3];
	fgets(controller4vul_2558 ,3 ,stdin);
	if( strcmp( controller4vul_2558, "5n") < 0)
	{
		char_1 = v_ifstat(unsigned_int_2,int_1,uni_para);

		char_1 = char_1 * char_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_1;
	int_2 = int_1 + int_3;
	double_3 = double_3 + double_3;
	long_6 = long_3 + long_5;
	long_3 = long_1 + long_2;
	short_3 = short_2 * short_3;
	double_3 = double_4 + double_2;
	double_4 = double_2;
	double_5 = double_5 * double_2;
	double_2 = double_4 * double_3;
	char_3 = char_3;
	double_3 = double_1;
	unsigned_int_5 = unsigned_int_2;
}
long v_block_follow( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
int v_statlist( int parameter_1,int uni_para)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	v_statement(float_1,uni_para);

	long_2 = long_1 + long_1;
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
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
		if(1)
		{
		}
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		if(1)
		{
		}
		int_1 = int_2 + int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3;
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
		}
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
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_4 = 1;
		float float_5 = 1;
		int_1 = int_3 * int_4;
		float_3 = float_1 + float_2;
		double_4 = double_2;
		char_2 = char_1 * char_1;
		float_5 = float_3 * float_4;
	}
	return int_2;
}
double v_check_next2( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
	}
	return double_2;
}
char v_read_numeral( int parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	double double_6 = 1;
	char char_1 = 1;
	long_3 = long_1 * long_2;
	v_save(long_4,int_1,-1 );

	int_2 = int_2 + int_2;
	double_1 = double_2;
	int_4 = int_3 + int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_3 = 1;
		double_2 = v_check_next2(long_3,unsigned_int_3);

		double_3 = double_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		if(1)
		{
			int_1 = int_1 + int_2;
		}
		if(1)
		{
			double_1 = double_2 + double_4;
		}
		if(1)
		{
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			float_1 = v_luaO_str2num(float_2,double_4);

			short_1 = short_1 + short_2;
		}
	}
	unsigned_int_4 = v_lexerror(int_2,short_1,int_5,-1 );

	float_1 = float_3;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_4 * float_4;
	}
	if(1)
	{
		double double_5 = 1;
		double_6 = double_2 + double_5;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
		double_6 = double_1;
	}
	return char_1;
}
int v_readdecesc( float parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long_1 = long_1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 * int_2;
	}
	int_3 = int_1;
	short_1 = v_esccheck(char_1,int_2,char_1);

	int_1 = int_1 + int_1;
	return int_1;
}
int v_readutf8esc()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	short_1 = v_esccheck(char_3,int_1,char_1);

	float_1 = float_2;
	if(1)
	{
		char char_4 = 1;
		int_1 = v_luaO_hexavalue(int_1);

		char_4 = char_4 + char_2;
	}
	return int_2;
	short_1 = v_gethexa(int_3);

}
void v_utf8esc( float parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1;
	int_1 = v_readutf8esc();

	char_3 = char_2 + char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_4 = 1;
		v_save(long_1,int_1,-1 );

		char_1 = char_4 + char_4;
	}
	int_2 = v_luaO_utf8esc(char_2,unsigned_int_1);

}
short v_esccheck( char parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	if(1)
	{
		int int_3 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
		unsigned_int_1 = v_lexerror(int_1,short_1,int_2,-1 );

		int_2 = int_3;
	}
	return short_2;
}
short v_gethexa( int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	short_1 = v_esccheck(char_1,int_1,char_2);

	long_2 = long_1 + long_1;
	char_3 = char_2;
	return short_2;
	int_2 = v_luaO_hexavalue(int_1);

}
char v_readhexaesc( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_3 = long_1 + long_2;
	short_1 = v_gethexa(int_1);

	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return char_2;
}
short v_read_string( double parameter_1,int parameter_2,short parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	return short_1;
	unsigned_int_1 = v_lexerror(int_1,short_2,int_2,-1 );

	char_1 = v_readhexaesc(char_2);

	v_utf8esc(float_1);

	double_1 = v_inclinenumber(unsigned_int_2);

	short_2 = v_esccheck(char_3,int_2,char_3);

	int_2 = v_readdecesc(float_1);

	v_save(long_1,int_2,-1 );

	int_1 = v_luaX_newstring(unsigned_int_1,long_1,float_1);

}
short v_check_next1( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
	}
	return short_1;
}
int v_luaX_newstring( unsigned int parameter_1,long parameter_2,float parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1;
	double_2 = double_2 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 * short_1;
	if(1)
	{
		double double_5 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		double_3 = v_luaS_newlstr(double_4,float_1,long_1);

		unsigned_int_3 = v_luaH_set(short_2,unsigned_int_3,unsigned_int_1);

		double_4 = double_5 + double_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	int_1 = int_2 * int_2;
	return int_3;
}
double v_read_long_string( char parameter_1,short parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long_2 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_3 = 1;
		char_1 = char_1 * char_2;
		short_1 = short_1;
		double_1 = double_2;
		v_luaO_pushfstring(double_2,unsigned_int_2,int_1);

		int_1 = v_luaX_newstring(unsigned_int_4,long_2,float_1);

		float_2 = float_1 + float_1;
		if(1)
		{
			short short_2 = 1;
			long_3 = long_2 * long_1;
			v_skip_sep(double_2);

			short_2 = short_1 * short_2;
		}
		double_3 = v_inclinenumber(unsigned_int_2);

		double_3 = double_2 + double_2;
		short_1 = short_1 * short_1;
		long_4 = long_3 * long_2;
		if(1)
		{
			int_1 = int_1;
		}
		short_1 = short_3 * short_3;
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		if(1)
		{
			double double_4 = 1;
			v_save(long_1,int_2,-1 );

			double_1 = double_4 * double_4;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_2 + float_3;
	}
	return double_5;
	unsigned_int_2 = v_lexerror(int_1,short_1,int_2,-1 );

}
void v_skip_sep( double parameter_1)
{
}
double v_inclinenumber( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = v_lexerror(int_1,short_1,int_2,-1 );

	double_1 = double_1 + double_2;
	int_4 = int_2 * int_3;
	char_3 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 + double_3;
	}
	return double_4;
}
long v_llex( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	short short_3 = 1;
	int int_6 = 1;
	long long_2 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_8 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = v_read_numeral(int_1,short_1);

	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = v_read_string(double_1,int_2,short_2);

	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	double_2 = v_inclinenumber(unsigned_int_2);

	int_3 = v_luaX_newstring(unsigned_int_2,long_1,float_3);

	int_2 = int_4 + int_5;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	v_skip_sep(double_3);

	double_1 = v_read_long_string(char_1,short_3,int_6);

	long_2 = long_1 * long_1;
	short_1 = v_check_next1(char_1,int_7);

	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		int_5 = int_1 * int_4;
		unsigned_int_4 = v_lexerror(int_8,short_4,int_2,-1 );

		double_5 = double_4 + double_5;
	}
	char_1 = char_1 + char_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
	return long_1;
}
void v_luaX_next( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
		short short_4 = 1;
		int int_1 = 1;
		short_4 = short_4 * short_1;
		long_1 = v_llex(float_1,float_2);

		int_2 = int_1 + int_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2;
	}
}
int v_luaX_token2str( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		v_luaO_pushfstring(double_1,unsigned_int_1,int_1);

		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return int_3;
}
void v_save( long parameter_1,int parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char * vul_var;
	short_2 = short_1 + short_1;
	char controller4vul_2569[3];
	fgets(controller4vul_2569 ,3 ,stdin);
	if( strcmp( controller4vul_2569, "H;") < 0)
	{
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 949)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		char_1 = char_1 * char_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		int_2 = int_1 + int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
}
float v_txtToken( int parameter_1,int parameter_2,int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	v_save(long_1,int_1,uni_para);

	float_3 = float_1 + float_2;
	return float_1;
}
unsigned int v_lexerror( int parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = v_txtToken(int_1,int_1,uni_para);

	int_2 = int_1 + int_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3 + int_2;
	}
	double_1 = double_2;
	return unsigned_int_1;
}
double v_luaX_syntaxerror( double parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = v_lexerror(int_1,short_1,int_1,uni_para);

	long_2 = long_1 * long_1;
	return double_1;
}
char v_errorlimit( unsigned int parameter_1,int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_2;
	double_2 = v_luaX_syntaxerror(double_4,char_1,-1 );

	int_1 = int_2;
	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_4;
	int_1 = int_2 * int_2;
	return char_2;
	v_luaO_pushfstring(double_4,unsigned_int_4,int_2);

}
float v_checklimit( int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "!") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return float_1;
	char_1 = v_errorlimit(unsigned_int_1,int_1,long_1);

}
int v_newupvalue( short parameter_1,char parameter_2,short parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float_1 = v_checklimit(int_1,int_2,int_2,int_2);

	char_1 = char_1 + char_1;
	return int_1;
}
void v_init_exp( unsigned int parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_2;
	double_2 = double_2;
}
short v_enterblock( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	long_1 = long_1 + long_1;
	short_1 = short_1;
	double_3 = double_1 + double_2;
	int_1 = int_1 + int_1;
	char_2 = char_1 + char_1;
	float_2 = float_1 + float_2;
	return short_2;
}
double v_open_func( int parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_7 = 1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_2;
	long_3 = long_1 + long_2;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 + int_2;
	short_1 = v_enterblock(unsigned_int_1,float_2,int_1);

	long_1 = long_2 * long_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	int_3 = int_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_6;
	double_1 = double_1 * double_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_7;
	int_1 = int_3 * int_3;
	unsigned_int_5 = unsigned_int_4;
	return double_1;
}
long v_mainfunc( char parameter_1,double parameter_2,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = v_statlist(int_1,uni_para);

	double_1 = double_1 * double_1;
	int_1 = int_2 + int_2;
	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_3;
	double_3 = double_1 + double_2;
	long_3 = long_2 + long_1;
	float_2 = float_1 + float_2;
	int_3 = int_4;
	return long_1;
}
void v_luaX_setinput( double parameter_1,int parameter_2,double parameter_3,short parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 * short_2;
	short_2 = short_2 * short_1;
	double_2 = double_1 * double_1;
	float_1 = float_2;
	char_1 = char_1 * char_2;
	short_2 = short_2 * short_3;
	int_1 = int_2;
	int_1 = int_1 + int_3;
	double_4 = double_3 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
}
double v_luaY_parser( double parameter_1,short parameter_2,unsigned int parameter_3,float parameter_4,int parameter_5,int parameter_6,int uni_para)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	double double_6 = 1;
	long_1 = v_mainfunc(char_1,double_1,uni_para);

	double_1 = double_2 * double_2;
	char_4 = char_2 + char_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_1;
	long_1 = long_2 * long_3;
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1;
	double_3 = double_2 * double_3;
	long_4 = long_2 * long_4;
	double_4 = double_2 + double_1;
	double_4 = double_4 * double_3;
	short_3 = short_1 * short_2;
	float_3 = float_3 * float_4;
	double_5 = double_3 + double_4;
	double_3 = double_4 + double_5;
	double_2 = double_3 + double_3;
	double_3 = double_5 + double_2;
	short_4 = short_1 * short_1;
	return double_6;
}
short v_LoadDebug( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	int_1 = v_LoadInt(char_1);

	double_2 = double_2;
	char_2 = char_2 + char_1;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	int_2 = int_1;
	double_2 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = v_LoadString(double_2);

		double_2 = double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_3 = 1;
		double_2 = double_1 * double_1;
		long_1 = long_1 + long_1;
		int_3 = int_2 * int_3;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_1 = long_1 + long_1;
	}
	return short_1;
}
short v_LoadProtos( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short_1 = v_LoadFunction(double_1,double_2,double_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		int_1 = v_luaF_newproto(double_4);

		float_2 = float_1 * float_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_5 = 1;
		double double_6 = 1;
		float float_3 = 1;
		int_2 = v_LoadInt(char_1);

		double_5 = double_5 * double_6;
		float_3 = float_3 * float_1;
	}
	return short_1;
}
float v_LoadUpvalues( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_1 = v_LoadInt(char_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_2 * char_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = v_LoadByte();

		long_1 = long_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_4 = 1;
		char char_4 = 1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
		char_3 = char_4 * char_2;
	}
	return float_1;
}
long v_LoadConstants( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	long long_4 = 1;
	short_3 = short_1 + short_2;
	int_2 = int_1 * int_2;
	char_1 = v_LoadInteger(char_1);

	short_1 = short_1 + short_2;
	int_2 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		int_1 = v_LoadByte();

		float_2 = float_1 * float_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_4 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char_3 = char_2 + char_1;
		long_1 = long_1 * long_2;
		int_4 = v_LoadInt(char_1);

		long_3 = long_1 * long_2;
		int_4 = int_2;
		char_1 = v_LoadNumber(int_2);

		int_2 = int_3;
		double_2 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		int_3 = int_2 + int_4;
		long_3 = long_3 + long_1;
		char_4 = char_3 + char_2;
		char_1 = char_3 + char_3;
	}
	return long_4;
	long_4 = v_LoadString(double_1);

}
char v_LoadCode( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	short_2 = short_1 * short_2;
	int_1 = v_LoadInt(char_1);

	int_2 = int_2 * int_2;
	return char_1;
}
int v_LoadInt( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_3 = char_1 + char_2;
	int_2 = int_1 + int_1;
	return int_1;
}
long v_LoadString( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_6 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
		v_luaS_createlngstrobj(char_1,long_1);

		double_3 = double_1 * double_2;
	}
	if(1)
	{
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_3 = double_4 * double_3;
		double_3 = double_2 + double_5;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		int int_2 = 1;
		int_1 = v_LoadByte();

		char_2 = char_2 + char_3;
		int_2 = int_2;
	}
	return long_1;
	double_6 = v_luaS_newlstr(double_6,float_1,long_2);

}
short v_LoadFunction( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	double double_6 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_1 = double_1;
	}
	char_1 = char_2;
	short_1 = v_LoadProtos(float_1,int_1);

	double_1 = double_1 * double_2;
	double_5 = double_3 + double_4;
	short_2 = v_LoadDebug(int_1,short_1);

	int_1 = int_2 * int_2;
	int_2 = v_LoadInt(char_3);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	int_3 = v_LoadByte();

	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	float_2 = v_LoadUpvalues(char_3,char_3);

	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	long_1 = v_LoadString(double_5);

	long_1 = v_LoadConstants(char_1,int_1);

	long_1 = long_1 * long_1;
	int_2 = int_1 * int_3;
	double_2 = double_6 * double_4;
	return short_3;
	char_3 = v_LoadCode(int_3,unsigned_int_2);

}
int v_luaF_newproto( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	int int_6 = 1;
	double double_4 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char_3 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	double_3 = double_2 * double_1;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	int_3 = int_1 * int_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	short_2 = short_1 + short_1;
	double_3 = double_1;
	int_1 = int_4 * int_5;
	long_1 = v_luaC_newobj(int_4,int_6,double_2);

	int_4 = int_1 * int_3;
	long_1 = long_1;
	double_2 = double_3 + double_4;
	long_2 = long_2;
	int_3 = int_6 * int_6;
	double_2 = double_1;
	short_1 = short_3 + short_1;
	short_1 = short_4 * short_4;
	long_2 = long_1 + long_1;
	return int_3;
}
char v_LoadNumber( int parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long_1 = long_1 * long_1;
	double_2 = double_1 + double_2;
	return char_1;
}
char v_LoadInteger( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_2;
	return char_1;
}
int v_LoadByte()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	return int_1;
}
float v_error( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int_1 = v_luaD_throw(float_1,int_2);

	int_2 = int_1 * int_3;
	v_luaO_pushfstring(double_1,unsigned_int_1,int_2);

	char_1 = char_1 + char_1;
	return float_1;
}
long v_checkliteral( double parameter_1,float parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		float float_2 = 1;
		float_1 = v_error(double_1,int_1);

		float_2 = float_1 * float_2;
	}
	return long_1;
}
double v_checkHeader( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		short short_1 = 1;
		float_1 = v_error(double_1,int_1);

		short_2 = short_1 + short_1;
	}
	long_1 = v_checkliteral(double_1,float_2,double_1);

	short_4 = short_2 * short_3;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_4 + short_2;
	int_1 = v_LoadByte();

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	char_1 = v_LoadNumber(int_2);

	char_2 = char_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3 + int_1;
	}
	if(1)
	{
		char_3 = v_LoadInteger(char_2);

		double_2 = double_1;
	}
	return double_2;
}
long v_luaU_undump( double parameter_1,short parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	double_3 = double_1 * double_2;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		int_3 = v_LoadByte();

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "R") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		short_1 = v_LoadFunction(double_1,double_1,double_1);

		double_4 = double_2 + double_2;
	}
	char_1 = char_1 * char_1;
	double_2 = v_checkHeader(long_1);

	char_3 = char_1 * char_2;
	char_2 = char_2 + char_3;
	long_2 = v_luaF_newLclosure(char_1,int_3);

	unsigned_int_1 = unsigned_int_3;
	double_4 = double_2 * double_5;
	double_2 = double_1 + double_1;
	v_luaD_inctop(long_2);

	double_3 = double_1;
	int_3 = int_1 + int_4;
	int_4 = int_1 * int_4;
	int_1 = v_luaF_newproto(double_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	return long_1;
}
double v_checkmode( int parameter_1,char parameter_2,short parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	if(1)
	{
		double double_1 = 1;
		int_1 = v_luaD_throw(float_1,int_2);

		double_2 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return double_2;
	v_luaO_pushfstring(double_3,unsigned_int_1,int_1);

}
char v_f_parser( unsigned int parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = char_2;
	long_1 = long_1 + long_1;
	double_3 = double_1 + double_2;
	char controller4vul_2557[3];
	fgets(controller4vul_2557 ,3 ,stdin);
	if( strcmp( controller4vul_2557, "cC") > 0)
	{
		double double_5 = 1;
		double_4 = v_luaY_parser(double_2,short_1,unsigned_int_1,float_1,int_1,int_1,uni_para);

		double_5 = double_2 * double_4;
		double_2 = double_3 + double_4;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char_4 = char_2 * char_3;
		float_3 = float_2 * float_1;
	}
	int_3 = int_2 + int_1;
	double_3 = double_3;
	return char_2;
}
int v_luaD_protectedparser( float parameter_1,unsigned int parameter_2,float parameter_3,short parameter_4,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = v_f_parser(unsigned_int_1,uni_para);

	float_1 = float_1 + float_2;
	char_3 = char_1 * char_2;
	double_2 = double_1 * double_1;
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 + double_1;
	int_3 = int_1 + int_2;
	int_3 = int_2 * int_3;
	double_4 = double_2 + double_3;
	int_2 = int_2 + int_1;
	short_1 = short_1 * short_1;
	char_1 = char_1 + char_2;
	int_3 = int_4 + int_1;
	long_1 = long_1 + long_1;
	int_1 = int_3;
	int_3 = int_4 + int_4;
	char_1 = char_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	return int_2;
}
double v_reader( short parameter_1,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	return double_2;
}
void v_luaZ_init( double parameter_1,long parameter_2,double parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double_1 = v_reader(short_1,short_1);

	long_1 = long_1 + long_1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_1 * double_2;
}
void v_lua_load( char parameter_1,short parameter_2,char parameter_4,float parameter_5,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_1;
	double_1 = double_1 + double_2;
	double_1 = double_3 * double_4;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	short_3 = short_1 + short_3;
	char_1 = char_1 + char_1;
	char controller4vul_2555[3];
	fgets(controller4vul_2555 ,3 ,stdin);
	if( strcmp( controller4vul_2555, "HU") < 0)
	{
		int int_1 = 1;
		int_2 = int_1 * int_1;
		char controller4vul_2556[2];
		fgets(controller4vul_2556 ,2 ,stdin);
		if( strcmp( controller4vul_2556, "Z") > 0)
		{
			float float_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int_3 = v_luaD_protectedparser(float_1,unsigned_int_1,float_2,short_1,uni_para);

			float_3 = float_2 * float_2;
			double_5 = double_4 + double_1;
			int_3 = int_3 + int_3;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		}
	}
	int_4 = int_2 * int_2;
}
unsigned int v_combine( char parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	char controller4vul_2553[3];
	fgets(controller4vul_2553 ,3 ,stdin);
	if( strcmp( controller4vul_2553, "]z") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double_2 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char controller4vul_2554[2];
		fgets(controller4vul_2554 ,2 ,stdin);
		if( strcmp( controller4vul_2554, "[") < 0)
		{
			v_lua_load(char_1,short_1,char_1,float_1,uni_para);

			double_2 = double_2 * double_1;
		}
		unsigned_int_2 = unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 + int_2;
			char controller_1[2];
			fgets(controller_1 ,2 ,stdin);
			if( strcmp( controller_1, "y") < 0)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_2 = long_1 * long_2;
			}
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return unsigned_int_1;
}
void v_luaD_growstack( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	short_2 = short_1 + short_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = double_1 * double_1;
		v_luaD_reallocstack(char_1,int_1);

		int_1 = int_1 * int_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			double double_3 = 1;
			long_1 = v_luaG_runerror(float_1,char_2,short_1);

			double_3 = double_1 * double_2;
		}
		if(1)
		{
			float_2 = float_2 * float_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 + long_2;
		}
	}
	int_1 = v_luaD_throw(float_2,int_1);

}
char v_growstack( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_3 = float_1 * float_2;
	int_2 = int_1 * int_1;
	return char_1;
	v_luaD_growstack(unsigned_int_1,int_2);

}
char v_lua_checkstack( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	double_1 = double_1 + double_2;
	char_1 = v_growstack(long_1);

	char_3 = char_2 * char_3;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		int_2 = int_1 + int_1;
		if(1)
		{
			double_2 = double_1 * double_2;
		}
		if(1)
		{
			double_1 = double_2;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	int_2 = int_2 * int_1;
	return char_1;
	int_2 = v_luaD_rawrunprotected(char_3,char_4);

}
float v_index2addr( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
		double_2 = double_1 + double_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
		double_1 = double_2 * double_1;
		if(1)
		{
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int_1 = int_2;
			float_3 = float_1 + float_2;
		}
	}
	return float_3;
}
double v_lua_touserdata( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = v_index2addr(float_2,int_1);

	double_2 = double_1 * double_2;
	return double_1;
}
unsigned int v_pmain( long parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_2;
	float_2 = float_1 + float_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		float_1 = float_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	char controller4vul_2551[2];
	fgets(controller4vul_2551 ,2 ,stdin);
	if( strcmp( controller4vul_2551, "U") > 0)
	{
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		short short_3 = 1;
		double double_3 = 1;
		char_2 = char_1 + char_2;
		char controller4vul_2552[2];
		fgets(controller4vul_2552 ,2 ,stdin);
		if( strcmp( controller4vul_2552, "I") > 0)
		{
			unsigned_int_2 = v_combine(char_1,int_2,uni_para);

			unsigned_int_4 = unsigned_int_3;
		}
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		long_2 = long_3 * long_1;
		short_1 = short_1 + short_3;
		if(1)
		{
			double double_2 = 1;
			double_3 = double_2 + double_2;
		}
		if(1)
		{
			double double_4 = 1;
			double_4 = double_3;
		}
	}
	return unsigned_int_6;
}
int v_fatal()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	return int_1;
}
void v_panic( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_2;
}
void v_lua_atpanic( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_1;
	int_1 = int_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
double v_l_alloc(unsigned int parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int_3 = int_1 * int_2;
	long_2 = long_1 * long_2;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
	}
	return double_2;
}
void v_freestack( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "m5") > 0)
	{
	}
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 + int_2;
	v_luaE_freeCI(short_1);

	double_1 = double_1 * double_2;
}
short v_dothecall( double parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	v_luaD_callnoyield(float_1,int_1,int_1);

	float_2 = float_2 * float_1;
	float_3 = float_3 + float_2;
	return short_1;
}
long v_correctstack( float parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1;
	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		long_4 = long_3 + long_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_3 = int_1 + int_2;
		char_1 = char_2;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "J") > 0)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_2;
		}
	}
	return long_3;
}
void v_luaD_reallocstack( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_6 = 1;
	int_1 = int_1 * int_1;
	long_1 = v_correctstack(float_1,float_2);

	float_2 = float_2 + float_2;
	short_3 = short_1 * short_2;
	short_5 = short_4 * short_3;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2 + int_2;
	}
	double_1 = double_2;
	int_2 = int_2 * int_2;
	short_4 = short_2 * short_6;
}
void v_luaE_shrinkCI( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
		if(1)
		{
		}
	}
	double_2 = double_1 * double_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_1 * int_1;
		int_2 = int_3 + int_2;
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
		}
	}
	double_2 = double_2;
	long_1 = long_1 + long_1;
}
void v_luaE_freeCI( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_2 = 1;
	float float_6 = 1;
	int int_4 = 1;
	short short_3 = 1;
	float float_7 = 1;
	long long_3 = 1;
	float float_8 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_4 = 1;
	double double_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_3 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_8 = 1;
	char char_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_8 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_14 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	short_1 = short_1;
	if(1)
	{
		double_3 = double_2 + double_1;
	}
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		int_1 = int_2;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		double_2 = double_1 * double_4;
		double_5 = double_1 + double_4;
		float_2 = float_1 + float_1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		long_2 = long_1 * long_2;
		int_2 = int_3 + int_3;
		float_3 = float_3 + float_4;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	double_1 = double_4 * double_2;
	float_4 = float_5;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_1 = unsigned_int_4;
	if(1)
	{
		double_1 = double_3 + double_3;
		double_4 = double_6 * double_2;
		float_1 = float_3 + float_4;
		short_1 = short_1;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
		short_2 = short_1 + short_2;
		if(1)
		{
			float_1 = float_6;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int_4 = int_2;
				if(1)
				{
					short_3 = short_1 + short_3;
				}
				double_6 = double_4 * double_2;
				int_4 = int_3 + int_2;
			}
		}
		if(1)
		{
			float_3 = float_7 * float_5;
		}
	}
	if(1)
	{
		long_2 = long_3 * long_3;
	}
	float_8 = float_2 + float_1;
	if(1)
	{
		char char_1 = 1;
		if(1)
		{
			unsigned_int_7 = unsigned_int_7;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_4;
		}
		char_1 = char_1 * char_1;
		short_2 = short_1 + short_2;
		float_4 = float_2 * float_3;
		if(1)
		{
			unsigned_int_8 = unsigned_int_1;
			if(1)
			{
				long_2 = long_4 + long_4;
			}
			if(1)
			{
				double_2 = double_7 + double_1;
			}
			if(1)
			{
				int_6 = int_5 + int_1;
			}
			if(1)
			{
				char_2 = char_1 + char_1;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_9;
			}
			if(1)
			{
				unsigned_int_9 = unsigned_int_10 * unsigned_int_3;
			}
		}
		if(1)
		{
			char_3 = char_3 + char_3;
		}
	}
	if(1)
	{
		int_7 = int_4 * int_7;
	}
	double_5 = double_7 * double_5;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_10 * unsigned_int_9;
		if(1)
		{
			if(1)
			{
				long long_5 = 1;
				long long_6 = 1;
				long_6 = long_4 + long_5;
			}
			if(1)
			{
				unsigned_int_11 = unsigned_int_3 * unsigned_int_6;
			}
		}
		long_1 = long_3 + long_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_2 = double_6;
		}
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			double_4 = double_8;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_5 = double_3 + double_1;
			}
			short_2 = short_2 * short_1;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_5 + unsigned_int_10;
		}
	}
	if(1)
	{
		char_2 = char_4 + char_3;
		if(1)
		{
			if(1)
			{
				unsigned_int_9 = unsigned_int_1 + unsigned_int_9;
			}
			if(1)
			{
				double_3 = double_8 * double_2;
			}
		}
		unsigned_int_7 = unsigned_int_5;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_2 = double_6;
		}
		int_3 = int_6;
		if(1)
		{
			double_7 = double_2 + double_7;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				char char_5 = 1;
				char_2 = char_5 * char_2;
			}
			double_1 = double_5;
		}
		if(1)
		{
			short_6 = short_4 + short_5;
		}
	}
	if(1)
	{
		int int_9 = 1;
		unsigned_int_1 = unsigned_int_10;
		short_3 = short_4;
		int_5 = int_2 + int_7;
		int_2 = int_8 * int_3;
		short_4 = short_5 + short_4;
		float_1 = float_3 + float_1;
		int_7 = int_9;
		int_1 = int_8 + int_4;
	}
	if(1)
	{
		char_2 = char_2 + char_2;
		unsigned_int_9 = unsigned_int_5;
	}
	if(1)
	{
		char_4 = char_3 + char_6;
		float_2 = float_1;
	}
	if(1)
	{
		char_2 = char_6 * char_3;
		float_5 = float_8 * float_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_12 + unsigned_int_9;
	}
	if(1)
	{
		double_1 = double_7 * double_8;
	}
	unsigned_int_3 = unsigned_int_8 + unsigned_int_8;
	int_4 = int_2 + int_2;
	if(1)
	{
		float_2 = float_6;
	}
	if(1)
	{
		unsigned_int_13 = unsigned_int_12 + unsigned_int_11;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_11;
	}
	if(1)
	{
		short short_7 = 1;
		double_5 = double_8 * double_7;
		float_7 = float_7 + float_6;
		short_6 = short_2 * short_7;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_13;
		float_4 = float_5 * float_7;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			if(1)
			{
				int int_10 = 1;
				int_10 = int_8 * int_8;
			}
		}
	}
	double_5 = double_9 + double_4;
	if(1)
	{
		float_7 = float_3;
	}
	if(1)
	{
		double_7 = double_4 + double_1;
	}
	unsigned_int_14 = unsigned_int_9 * unsigned_int_10;
}
void v_stackinuse( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		}
	}
}
void v_luaD_shrinkstack( char parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_5 = 1;
	v_luaE_freeCI(short_1);

	double_2 = double_1 + double_2;
	long_1 = long_1 + long_2;
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double double_4 = 1;
		v_stackinuse(unsigned_int_1);

		v_luaE_shrinkCI(double_3);

		double_4 = double_4 * double_3;
	}
	if(1)
	{
		v_luaD_reallocstack(char_1,int_1);

		double_5 = double_3 * double_2;
	}
	if(1)
	{
		double_5 = double_5 + double_1;
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_2 + double_3;
	}
}
int v_luaD_pcall( int parameter_1,double parameter_2,float parameter_4,double parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	int_1 = int_1 + int_2;
	float_1 = float_1 + float_2;
	double_1 = double_2;
	char_1 = char_1 + char_1;
	v_luaD_shrinkstack(char_1);

	int_1 = int_2 + int_2;
	v_luaF_close(short_1,float_1);

	char_1 = char_1;
	long_2 = long_1 * long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_3 + double_1;
		short_2 = short_2 * short_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		long_1 = long_2 + long_3;
		int_1 = v_luaD_rawrunprotected(char_1,char_1);

		int_3 = int_1 + int_3;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	}
	float_3 = v_seterrorobj(long_3,int_4,double_1);

	char_1 = char_2 * char_1;
	return int_1;
}
void v_udata2finalize()
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	char_1 = char_2;
	double_1 = double_2;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_4 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ";") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
}
short v_GCTM( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_luaO_pushfstring(double_1,unsigned_int_1,int_1);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	double_1 = double_1;
	if(1)
	{
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		int int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_4 = 1;
		int_2 = int_1 + int_1;
		float_3 = float_2 + float_3;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
		char_1 = char_2;
		unsigned_int_1 = unsigned_int_2;
		long_1 = long_1;
		float_3 = float_2 * float_2;
		short_1 = v_dothecall(double_2);

		double_3 = double_4;
		int_2 = v_luaD_pcall(int_1,double_3,float_4,double_5);

		int_2 = int_1 * int_3;
		int_2 = v_luaD_throw(float_2,int_1);

		short_4 = short_2 + short_3;
		int_4 = int_2 * int_1;
		if(1)
		{
			if(1)
			{
				short short_5 = 1;
				unsigned int unsigned_int_5 = 1;
				short_2 = short_1 * short_5;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
				v_udata2finalize();

				float_1 = float_1 * float_4;
			}
			double_1 = double_4 * double_3;
		}
	}
	return short_4;
	float_4 = v_luaT_gettmbyobj(long_1,short_1,unsigned_int_6);

}
char v_callallpendingfinalizers()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int_1 = int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int_1 = int_2;
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
		float float_1 = 1;
		char char_1 = 1;
		float_1 = float_1 * float_1;
		if(1)
		{
			double double_2 = 1;
			char_1 = char_1;
			double_1 = double_2;
		}
		if(1)
		{
			double_4 = double_3 * double_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1;
		}
	}
	char controller_9[2];
	fgets(controller_9 ,2 ,stdin);
	if( strcmp( controller_9, "0") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		int_2 = int_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	double_4 = double_1 * double_3;
	int_1 = int_2;
	int_1 = int_3 + int_2;
	return char_3;
	short_1 = v_GCTM(float_2,int_1);

}
double v_findlast( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
void v_separatetobefnz( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	double_1 = v_findlast(char_3);

}
void v_luaC_freeallobjects( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	int_1 = int_2;
	long_2 = long_1 + long_1;
	v_separatetobefnz(long_3,int_2);

	short_1 = short_1 + short_1;
	float_2 = float_1 * float_2;
	int_1 = int_3 * int_3;
	long_4 = long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	char_1 = v_callallpendingfinalizers();

	float_1 = float_1 + float_2;
}
short v_close_state( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_2;
	int_2 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "&+") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	v_freestack(long_1);

	short_3 = short_1 + short_2;
	int_2 = int_2;
	long_1 = long_1 * long_1;
	int_3 = int_1 + int_2;
	return short_2;
	v_luaF_close(short_3,float_1);

	v_luaC_freeallobjects(int_2);

}
short v_lua_version( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "P}") < 0)
	{
	}
	return short_1;
}
void v_luaX_init( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	short_1 = short_1 * short_2;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = int_1 + int_2;
		v_luaC_fix(char_1,long_2);

		char_2 = v_luaS_new(short_3,long_3);

		double_2 = double_1 + double_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
}
void v_luaT_init( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char_2 = char_1 + char_1;
	char_1 = char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char_3 = char_2 * char_2;
		double_2 = double_1 + double_1;
	}
	char_3 = v_luaS_new(short_1,long_1);

	v_luaC_fix(char_3,long_1);

}
void v_luaC_fix( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	long_1 = long_1 * long_1;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_2;
}
void v_luaS_init( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_6 = 1;
	double_2 = double_1 * double_1;
	v_luaC_fix(char_1,long_1);

	double_2 = double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	v_luaS_resize(double_1,int_1);

	unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_2 = 1;
			int_1 = int_2 + int_1;
		}
	}
}
char v_luaG_errormsg( int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		double double_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_1 = long_1 + long_1;
		int_1 = v_luaD_throw(float_1,int_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		float_2 = float_1 + float_2;
		double_1 = double_1;
		v_luaD_callnoyield(float_3,int_1,int_3);

		long_3 = long_2 + long_2;
	}
	int_1 = int_3 + int_3;
	return char_1;
}
short v_currentline( short parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	return short_1;
	double_1 = v_currentpc(float_1);

}
void v_luaO_chunkid( char parameter_1,long parameter_2,long parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long_2 = long_1 * long_2;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 + float_1;
			short_1 = short_2 * short_3;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_2 = 1;
			char_1 = char_1 * char_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_1 = unsigned_int_2;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
		}
	}
	if(1)
	{
		double double_1 = 1;
		long long_3 = 1;
		short short_5 = 1;
		double double_2 = 1;
		double_1 = double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		long_2 = long_3 * long_2;
		if(1)
		{
			short short_4 = 1;
			short_5 = short_3 + short_4;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			if(1)
			{
				char char_3 = 1;
				char_3 = char_1 * char_3;
			}
			if(1)
			{
				short short_6 = 1;
				short_5 = short_6;
			}
			double_2 = double_1 * double_1;
			int_1 = int_2;
		}
		double_2 = double_2 + double_2;
	}
}
float v_luaG_addinfo( double parameter_1,char parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_1 = double_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
	if(1)
	{
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_2 = char_1 + char_2;
		v_luaO_chunkid(char_2,long_1,long_1);

		v_luaO_pushfstring(double_3,unsigned_int_1,int_1);

		unsigned_int_1 = unsigned_int_2;
	}
	return float_1;
}
int v_copy2buff( float parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	return int_1;
}
int v_luaG_opinterror( double parameter_1,double parameter_2,long parameter_3,float parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_1 = v_luaG_typeerror(char_2,unsigned_int_1,int_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	short_2 = short_1 + short_1;
	return int_1;
}
unsigned int v_luaG_tointerror( double parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		int int_3 = 1;
		float_1 = v_varinfo(float_2,char_1);

		int_3 = int_1 + int_2;
	}
	long_1 = v_luaG_runerror(float_1,char_1,short_1);

	long_2 = long_1 * long_1;
	return unsigned_int_1;
}
unsigned int v_luaG_concaterror( float parameter_1,char parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "B") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_1;
	}
	char_1 = v_luaG_typeerror(char_2,unsigned_int_1,int_1);

	int_1 = int_1 + int_2;
	return unsigned_int_2;
}
void v_luaD_callnoyield( float parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_1;
	int_2 = int_1 + int_1;
	float_1 = float_1 + float_1;
	v_luaD_call(float_1,unsigned_int_1,int_3);

}
char v_luaF_findupval( short parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	double_2 = double_1 * double_1;
	short_1 = short_2 * short_2;
	char_1 = char_1 + char_1;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	int_2 = int_1;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "d>") < 0)
	{
		int_2 = int_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_1;
	char_1 = char_2 * char_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1 * int_3;
		}
	}
	return char_2;
}
long v_luaF_newLclosure( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_1;
	int_2 = int_2;
	if(1)
	{
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_1 + long_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		long_1 = v_luaC_newobj(int_1,int_1,double_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return long_1;
}
double v_pushclosure( short parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,long parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 * double_2;
	short_1 = short_1 * short_1;
	float_2 = float_1 + float_2;
	double_2 = double_1 * double_2;
	long_2 = long_1 * long_1;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		if(1)
		{
			float float_3 = 1;
			long_1 = v_luaF_newLclosure(char_1,int_2);

			float_1 = float_1 + float_3;
		}
		if(1)
		{
			int_1 = int_1 * int_3;
		}
		int_5 = int_4 + int_3;
	}
	if(1)
	{
		int int_6 = 1;
		int_1 = int_1 + int_6;
	}
	return double_2;
	char_2 = v_luaF_findupval(short_1,unsigned_int_1);

}
unsigned int v_getcached( float parameter_1,char parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_1 = double_1 * double_1;
		short_1 = short_1 + short_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_1;
			if(1)
			{
			}
		}
	}
	return unsigned_int_3;
}
void v_luaH_resizearray( char parameter_1,short parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	v_luaH_resize(float_1,short_1,char_1,unsigned_int_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_1 + int_1;
}
char v_forlimit( int parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_1 = v_luaV_tointeger(char_1,unsigned_int_1,int_3);

		double_1 = double_2;
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_2;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_1 = short_1 + short_2;
			}
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
		}
	}
	return char_1;
}
void v_luaF_close( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_2 = int_1 + int_1;
		double_3 = double_1 + double_2;
		int_2 = int_1 + int_1;
	}
	int_2 = int_2 * int_2;
	int_2 = int_2 * int_1;
}
float v_LEnum( char parameter_1,float parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		short_1 = v_LTintfloat(long_1,short_1);

		int_1 = int_1;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		double double_1 = 1;
		int_1 = v_LEintfloat(short_1,unsigned_int_1);

		double_1 = double_1;
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
	return float_1;
}
int v_luaV_lessequal( char parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	long_1 = v_luaG_ordererror(int_1,int_2,double_1);

	short_1 = short_1 * short_2;
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
		short short_3 = 1;
		int int_4 = 1;
		long long_2 = 1;
		short_1 = short_3;
		float_1 = v_LEnum(char_1,float_1);

		int_3 = v_luaT_callorderTM(int_1,short_1,int_2,double_2);

		int_4 = int_3 * int_2;
		long_1 = v_l_strcmp(long_1,unsigned_int_1);

		long_2 = long_1;
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 * char_2;
		}
	}
	return int_5;
}
long v_luaG_ordererror( int parameter_1,int parameter_2,double parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	v_luaT_objtypename(float_1,char_1);

	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return long_1;
	long_1 = v_luaG_runerror(float_3,char_2,short_1);

}
int v_luaT_callorderTM( int parameter_1,short parameter_2,int parameter_3,double parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	int_1 = v_luaT_callbinTM(char_1,long_1,long_2,int_2,char_1);

}
long v_l_strcmp( long parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	char_2 = char_1 * char_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_1 + char_2;
		if(1)
		{
		}
		if(1)
		{
			long long_2 = 1;
			char char_4 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			double double_3 = 1;
			long_2 = long_1 * long_2;
			if(1)
			{
				char char_3 = 1;
				char_1 = char_3;
			}
			if(1)
			{
			}
			char_2 = char_4 * char_4;
			int_1 = int_1 + int_1;
			double_2 = double_1 * double_2;
			float_1 = float_1 * float_1;
			double_3 = double_1 + double_2;
		}
	}
	return long_1;
}
int v_LEintfloat( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
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
	return int_1;
}
short v_LTintfloat( long parameter_1,short parameter_2)
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
int v_LTnum( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	short short_4 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 + short_2;
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
	return int_1;
	short_1 = v_LTintfloat(long_1,short_3);

	int_2 = v_LEintfloat(short_4,unsigned_int_1);

}
int v_luaV_lessthan( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_1 = v_LTnum(int_2,unsigned_int_1);

	long_1 = v_l_strcmp(long_2,unsigned_int_1);

	int_3 = v_luaT_callorderTM(int_3,short_1,int_3,double_1);

	int_5 = int_4 * int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		long_2 = v_luaG_ordererror(int_5,int_5,double_1);

		unsigned_int_2 = unsigned_int_2;
	}
	return int_3;
}
int v_luaS_eqlngstr( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	short_1 = short_1 + short_2;
	return int_1;
}
int v_luaV_equalobj( short parameter_1,int parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			long_1 = long_1 * long_2;
		}
	}
	if(1)
	{
	}
	if(1)
	{
	}
	long_2 = long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	short_1 = short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_2;
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	v_luaT_callTM(double_1,long_2,char_1,double_2,float_1,int_3);

	int_3 = int_2 + int_1;
	char controller_10[3];
	fgets(controller_10 ,3 ,stdin);
	if( strcmp( controller_10, ":7") < 0)
	{
	}
	float_2 = float_3;
	return int_1;
	int_3 = v_luaS_eqlngstr(double_2,long_1);

}
short v_unbound_search( char parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	return short_1;
	short_2 = v_luaH_getint(long_1,char_1);

}
int v_luaH_getn( short parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_1 = 1;
	short short_4 = 1;
	long_1 = long_1 * long_1;
	float_1 = float_2;
	double_1 = double_1 * double_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					int_1 = int_2;
				}
			}
		}
	}
	int_3 = int_2 + int_1;
	short_3 = v_unbound_search(char_1,unsigned_int_2);

	short_2 = short_2 + short_4;
	return int_2;
}
void v_luaV_objlen( int parameter_1,int parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	double double_5 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_1;
	int_3 = int_1 * int_2;
	long_1 = long_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	double_4 = double_2 + double_3;
	float_1 = float_1 * float_1;
	float_2 = v_luaT_gettmbyobj(long_1,short_1,unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_1 = double_4 + double_4;
	if(1)
	{
		int_3 = v_luaH_getn(short_2);

		char_1 = v_luaG_typeerror(char_2,unsigned_int_3,int_3);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	short_2 = short_1 * short_2;
	v_luaT_callTM(double_1,long_2,char_1,double_5,float_1,int_4);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
}
long v_luaV_div( double parameter_1,double parameter_2,int parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			long_1 = v_luaG_runerror(float_1,char_1,short_1);

			long_1 = long_1 * long_1;
		}
	}
	return long_1;
}
short v_luaV_mod( char parameter_1,float parameter_2,unsigned int parameter_3)
{
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_3 = 1;
			long_3 = long_1 + long_2;
		}
	}
	if(1)
	{
		char char_2 = 1;
		long_2 = v_luaG_runerror(float_1,char_1,short_1);

		char_2 = char_2 * char_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
	}
	return short_1;
}
int v_luaV_shiftl( short parameter_1,long parameter_2)
{
	int int_1 = 1;
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
	return int_1;
}
void v_luaV_finishget( unsigned int parameter_1,int parameter_2,long parameter_3,int parameter_4,short parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	char char_4 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = v_luaH_get(double_1,int_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
			float_1 = v_luaT_gettmbyobj(long_1,short_1,unsigned_int_2);

			char_1 = v_luaG_typeerror(char_2,unsigned_int_5,int_1);

			double_1 = double_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
			}
		}
		if(1)
		{
			int_2 = int_2;
			double_1 = double_1;
			if(1)
			{
				int_2 = int_1;
			}
		}
		if(1)
		{
			int int_3 = 1;
			int_1 = int_3 + int_2;
		}
		long_1 = v_luaG_runerror(float_1,char_2,short_2);

		double_1 = double_2;
		if(1)
		{
			long_1 = long_1 * long_1;
		}
	}
	char_3 = char_3;
	v_luaT_callTM(double_3,long_2,char_4,double_4,float_2,int_1);

}
char v_luaH_getstr( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		int_1 = v_getgeneric(short_1,long_1);

		double_2 = double_1 * double_1;
		short_1 = short_1 + short_2;
	}
	return char_1;
	v_luaH_getshortstr(float_1,short_1);

}
int v_luaO_fb2int( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_2;
	return int_1;
}
int v_getgeneric( short parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			int int_2 = 1;
			long_1 = long_1 * long_1;
			if(1)
			{
			}
			long_2 = v_mainposition(short_1,unsigned_int_1);

			int_1 = int_1 + int_2;
		}
	}
	return int_1;
}
unsigned int v_luaH_get( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	v_luaH_getshortstr(float_1,short_1);

	int_1 = v_luaV_tointeger(char_1,unsigned_int_1,int_1);

	long_3 = long_1 + long_2;
	if(1)
	{
	}
	return unsigned_int_2;
	short_1 = v_luaH_getint(long_1,char_2);

	int_2 = v_getgeneric(short_1,long_3);

}
unsigned int v_luaH_set( short parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	v_luaH_newkey(float_1,char_1,unsigned_int_1);

	long_3 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
	unsigned_int_1 = v_luaH_get(double_1,int_1);

}
char v_computesizes( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	double_2 = double_2 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_1 + float_2;
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				double double_4 = 1;
				long_1 = long_2 + long_3;
				double_1 = double_2 + double_4;
			}
		}
	}
	short_1 = short_2 + short_2;
	int_3 = int_1 + int_2;
	return char_1;
}
char v_arrayindex( unsigned int parameter_1)
{
	char char_2 = 1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_2;
		if(1)
		{
		}
	}
	return char_2;
}
float v_countint( double parameter_1,long parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int_1 = v_luaO_ceillog2(unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_1;
	}
	if(1)
	{
	}
	return float_1;
	char_1 = v_arrayindex(unsigned_int_1);

}
char v_numusehash( long parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		float_3 = v_countint(double_1,long_1);

		double_2 = double_2;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		float_3 = float_3 + float_1;
	}
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		double_2 = double_1 + double_3;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_3 * double_4;
		}
		int_2 = int_2;
		double_4 = double_1;
	}
	if(1)
	{
	}
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	int_3 = int_3 * int_1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	int_2 = int_4;
	if(1)
	{
	}
	long_2 = long_2;
	int_3 = int_5 + int_1;
	float_3 = float_4 * float_2;
	double_4 = double_2 + double_2;
	long_2 = long_1 + long_2;
	if(1)
	{
		double_1 = double_3 + double_1;
	}
	if(1)
	{
		long_1 = long_1;
	}
	return char_1;
}
char v_numusearray( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_1 + float_1;
		int_2 = int_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_2 = long_1 * long_1;
			}
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			}
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		float_3 = float_2 + float_2;
	}
	return char_1;
}
int v_rehash( long parameter_1,short parameter_2,float parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	double_1 = double_1;
	char_1 = v_numusehash(long_1,unsigned_int_1,unsigned_int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = v_numusearray(short_1,short_1);

	char_3 = v_computesizes(char_1,int_1);

	int_2 = int_1 * int_2;
	double_2 = double_1 + double_2;
	int_3 = int_1 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		float_1 = v_countint(double_3,long_2);

		long_4 = long_3 + long_1;
	}
	short_2 = short_2 + short_2;
	int_4 = int_4 + int_2;
	int_6 = int_5 * int_2;
	v_luaH_resize(float_2,short_3,char_3,unsigned_int_2);

	double_2 = double_3 + double_4;
	double_2 = double_2;
	double_4 = double_5 * double_1;
	short_3 = short_2 + short_4;
	return int_2;
}
unsigned int v_getfreepos( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_2;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	return unsigned_int_1;
}
unsigned int v_luaS_hashlongstr( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_1 = v_luaS_hash(long_1,char_1,char_1);

		short_1 = short_1 + short_2;
	}
	return unsigned_int_2;
}
char v_l_hashfloat()
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short_2 = short_1 + short_2;
	float_2 = float_1 * float_2;
	long_1 = long_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_3 = double_1 + double_3;
		int_2 = int_1 + int_2;
	}
	return char_1;
}
long v_mainposition( short parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = v_luaS_hashlongstr(int_1);

	short_1 = short_1 * short_1;
	return long_1;
	char_1 = v_l_hashfloat();

}
char v_l_str2dloc( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 + char_1;
	float_2 = float_1 + float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	float_3 = float_2 + float_2;
	double_1 = double_2;
	double_2 = double_1 * double_1;
	return char_1;
}
long v_l_str2d( char parameter_1,float parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_4 = 1;
	double_1 = double_1 * double_1;
	int_2 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_4 = double_2 * double_3;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char_1 = v_l_str2dloc(long_1,unsigned_int_3,int_3);

		char_1 = char_2;
		char_4 = char_3 + char_2;
		if(1)
		{
		}
		long_1 = long_2;
		long_4 = long_2 * long_3;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
	}
	return long_4;
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
char v_isneg( char parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "F") > 0)
	{
		short_1 = short_1 + short_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "4P") > 0)
	{
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	return char_1;
}
char v_l_str2int( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = v_isneg(char_1);

	int_1 = int_1;
	return char_1;
	int_1 = v_luaO_hexavalue(int_2);

}
float v_luaO_str2num( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	long_1 = v_l_str2d(char_1,float_1);

	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 + int_1;
	char_3 = char_2 * char_2;
	if(1)
	{
		int_3 = int_2 + int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
	}
	return float_1;
	char_4 = v_l_str2int(float_1,int_3);

}
int v_luaV_tointeger( char parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double_1 = double_1;
	if(1)
	{
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_1 = char_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				double_3 = double_2 + double_2;
			}
		}
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	if(1)
	{
		short short_1 = 1;
		char char_2 = 1;
		short_1 = short_1 * short_1;
		float_1 = v_luaO_str2num(float_2,double_1);

		char_2 = char_2;
	}
	return int_1;
}
void v_luaH_newkey( float parameter_1,char parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	long long_3 = 1;
	short short_4 = 1;
	long_1 = v_luaG_runerror(float_1,char_1,short_1);

	unsigned_int_1 = v_luaH_set(short_2,unsigned_int_2,unsigned_int_1);

	int_3 = int_1 + int_2;
	unsigned_int_2 = v_getfreepos(double_1);

	short_2 = short_3 * short_1;
	int_1 = v_rehash(long_2,short_3,float_1);

	double_2 = double_2 * double_3;
	int_4 = v_luaV_tointeger(char_2,unsigned_int_3,int_5);

	unsigned_int_2 = unsigned_int_1;
	double_4 = double_2 + double_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Mc") > 0)
	{
		float float_2 = 1;
		float_1 = float_2 + float_2;
	}
	double_1 = double_3;
	long_3 = v_mainposition(short_4,unsigned_int_3);

}
short v_luaH_getint( long parameter_1,char parameter_2)
{
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					double_1 = double_2;
				}
				unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			}
		}
	}
	return short_1;
}
void v_luaH_setint( double parameter_1,float parameter_2,float parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_1;
	short_2 = short_1 * short_2;
	if(1)
	{
		long long_1 = 1;
		v_luaH_newkey(float_1,char_1,unsigned_int_1);

		long_1 = long_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char_1 = char_1 + char_1;
		int_3 = int_1;
		int_1 = int_4 * int_5;
	}
	short_2 = v_luaH_getint(long_2,char_2);

	char_3 = char_1 * char_3;
}
float v_setarrayvector( char parameter_1,float parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_2;
	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float_2 = float_2 + float_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return float_3;
}
void v_luaH_resize( float parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	int_1 = int_2;
	double_1 = double_2;
	int_2 = int_3 * int_3;
	double_1 = double_1 * double_2;
	int_5 = int_1 + int_4;
	if(1)
	{
		short short_2 = 1;
		float_1 = v_setarrayvector(char_1,float_1,float_2);

		short_1 = short_1 + short_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_3 = 1;
		double_1 = double_3 + double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				double double_5 = 1;
				unsigned_int_3 = v_luaH_set(short_3,unsigned_int_1,unsigned_int_4);

				double_1 = double_5;
			}
		}
		unsigned_int_5 = unsigned_int_5;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			double_4 = v_setnodevector(int_3,float_2,unsigned_int_2);

			long_2 = long_1 * long_2;
		}
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	v_luaH_setint(double_1,float_3,float_1,short_1);

}
void v_luaV_execute( char parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	double double_3 = 1;
	short short_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_7 = 1;
	if(1)
	{
	}
	long_1 = v_luaV_div(double_1,double_1,int_1);

	long_1 = v_luaG_runerror(float_1,char_1,short_1);

	short_3 = short_2 * short_1;
	if(1)
	{
	}
	v_luaH_resize(float_1,short_3,char_2,unsigned_int_1);

	int_1 = v_luaV_shiftl(short_1,long_2);

	short_4 = v_luaV_mod(char_1,float_1,unsigned_int_2);

	v_luaV_objlen(int_2,int_1,char_2);

	int_2 = v_luaV_lessthan(unsigned_int_1,int_2,float_1);

	int_1 = v_luaV_lessequal(char_3,int_1,int_2);

	v_luaH_resizearray(char_3,short_1,unsigned_int_3);

	short_3 = short_3 + short_1;
	if(1)
	{
		v_luaV_concat(unsigned_int_3,int_2);

		int_2 = v_luaD_precall(double_2,float_2,int_3);

		char_2 = v_forlimit(int_1,long_1,unsigned_int_4,int_1);

		double_1 = v_pushclosure(short_3,short_2,char_3,unsigned_int_5,long_3);

		char_4 = char_3 * char_2;
		float_2 = v_luaH_new(char_2);

		int_2 = v_luaO_fb2int(int_4);

		v_luaV_finishget(unsigned_int_6,int_2,long_2,int_1,short_1);

		int_1 = v_luaV_equalobj(short_5,int_1,double_3);

		v_luaF_close(short_6,float_1);

		unsigned_int_4 = v_getcached(float_1,char_4,char_4);

		short_1 = short_3;
	}
	char_2 = v_luaH_getstr(float_3,unsigned_int_2);

	v_luaT_trybinTM(float_4,float_3,double_3,float_2,unsigned_int_6);

	int_2 = v_luaD_poscall(unsigned_int_7,long_1,int_3,int_3);

	v_luaD_call(float_3,unsigned_int_5,int_2);

	v_luaH_setint(double_2,float_2,float_4,short_7);

}
double v_currentpc( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short_1 = short_2;
	return double_1;
}
double v_kname( float parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			int_1 = v_getobjname(char_1,int_2,int_3,long_1);

			unsigned_int_1 = unsigned_int_1;
		}
	}
	if(1)
	{
		int_3 = int_3 * int_2;
		if(1)
		{
		}
	}
	short_1 = short_1 + short_1;
	return double_1;
}
double v_filterpc( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "H") > 0)
	{
	}
	if(1)
	{
	}
	return double_1;
}
short v_findsetreg( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double_1 = v_filterpc(int_1,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_2;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		char char_3 = 1;
		short short_3 = 1;
		int int_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		float_1 = float_1;
		double_1 = double_2;
		char_2 = char_1 * char_2;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_3 * double_2;
		}
		short_2 = short_1 + short_2;
		if(1)
		{
			int_2 = int_2 + int_2;
		}
		char_1 = char_2 * char_3;
		if(1)
		{
			short_2 = short_3 + short_1;
		}
		int_1 = int_3;
		short_2 = short_4 * short_3;
		double_1 = double_2;
		if(1)
		{
			if(1)
			{
				float float_2 = 1;
				float_2 = float_2;
			}
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			double_2 = double_2;
		}
		long_1 = long_1 + long_2;
	}
	return short_2;
}
long v_luaF_getlocalname( long parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 + int_1;
			if(1)
			{
			}
		}
	}
	return long_1;
}
int v_getobjname( char parameter_1,int parameter_2,int parameter_3,long parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_7 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_9 = 1;
	long_2 = long_1 + long_2;
	long_3 = long_1 + long_1;
	if(1)
	{
	}
	long_3 = v_luaF_getlocalname(long_1,int_1,int_2);

	int_2 = int_1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_8 = 1;
		int_3 = int_1 * int_1;
		int_4 = int_1 * int_4;
		double_1 = double_1 * double_1;
		if(1)
		{
		}
		short_1 = v_findsetreg(int_3,int_3,int_3);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_2 = long_3 + long_3;
		double_1 = double_1 + double_1;
		int_6 = int_3 * int_5;
		long_2 = long_2 + long_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_2 = double_1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
		}
		char_1 = v_upvalname(long_3,int_4);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		float_2 = float_1 * float_1;
		int_7 = int_8;
		long_1 = long_3 * long_3;
	}
	return int_3;
	double_3 = v_kname(float_3,int_2,int_9,int_7);

}
double v_isinstack( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float_1 = float_1 * float_2;
	return double_1;
}
char v_upvalname( long parameter_1,int parameter_2)
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
short v_getupvalname( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			char_1 = v_upvalname(long_1,int_1);

			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		}
	}
	return short_2;
}
float v_varinfo( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = v_isinstack(char_1,long_1);

	double_1 = v_currentpc(float_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_luaO_pushfstring(double_2,unsigned_int_1,int_1);

	int_1 = int_1 * int_1;
	int_1 = int_2 * int_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_4 = long_2 * long_3;
		if(1)
		{
			long_1 = long_2;
		}
	}
	short_1 = v_getupvalname(unsigned_int_3,int_2,float_1);

	int_3 = v_getobjname(char_2,int_4,int_5,long_4);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	return float_1;
}
char v_luaS_new( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1 * int_2;
	int_2 = int_2 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_1 = double_2;
	}
	double_2 = v_luaS_newlstr(double_3,float_1,long_1);

	int_5 = int_3 + int_4;
	return char_1;
}
void v_luaT_objtypename( float parameter_1,char parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	v_luaH_getshortstr(float_1,short_1);

	char_1 = v_luaS_new(short_2,long_1);

	char_3 = char_1 * char_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 * short_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "{") < 0)
		{
		}
	}
}
char v_luaG_typeerror( char parameter_1,unsigned int parameter_2,int parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long_1 = v_luaG_runerror(float_1,char_1,short_1);

	float_2 = v_varinfo(float_3,char_1);

	float_1 = float_3 * float_1;
	long_1 = long_1 * long_1;
	return char_1;
	v_luaT_objtypename(float_4,char_1);

}
void v_tryfuncTM( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = v_luaT_gettmbyobj(long_1,short_1,unsigned_int_1);

	char_1 = v_luaG_typeerror(char_1,unsigned_int_1,int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	int_3 = int_2 + int_1;
	int_2 = int_4 * int_2;
}
long v_callhook( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_3 = double_1 + double_2;
	short_3 = short_1 + short_2;
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long_2 = long_1 + long_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_3;
	v_luaD_hook(long_3,int_1,int_2);

	int_1 = int_1 * int_2;
	return long_2;
}
void v_adjust_varargs( int parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	double_1 = double_1 + double_1;
	char_2 = char_1 + char_1;
	short_1 = short_1 + short_2;
	long_1 = long_1 + long_1;
	char_2 = char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_2 * int_3;
	}
}
char v_moveresults( float parameter_1,char parameter_2,double parameter_3,int parameter_4,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1;
	}
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_1 + short_1;
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_1 = int_2 * int_1;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_1 = int_1;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_2 = double_2 + double_2;
		}
	}
	char_2 = char_1;
	int_2 = int_3;
	return char_2;
}
int v_luaD_poscall( unsigned int parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
			int_1 = int_1;
			double_1 = double_2;
		}
		v_luaD_hook(long_2,int_1,int_2);

		char_1 = v_moveresults(float_1,char_2,double_2,int_1,int_1);

		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	}
	long_1 = long_3 * long_4;
	int_1 = int_2 * int_2;
	return int_3;
}
void v_luaD_hook( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "S") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		float float_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		float float_4 = 1;
		float_2 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_3 = int_2 * int_2;
		char_1 = char_1;
		float_1 = float_3 + float_1;
		char_1 = char_2;
		char_4 = char_3 * char_3;
		double_1 = double_1 * double_2;
		long_1 = long_1 + long_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		unsigned_int_5 = unsigned_int_2;
		double_2 = double_2 + double_1;
		int_4 = int_3 * int_1;
		float_3 = float_1;
		unsigned_int_4 = unsigned_int_3;
		double_2 = double_2;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_5;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
		float_4 = float_3;
		int_4 = int_4;
	}
}
int v_luaD_precall( double parameter_1,float parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	int int_5 = 1;
	long long_4 = 1;
	int int_6 = 1;
	long long_5 = 1;
	int int_7 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	int int_8 = 1;
	long_1 = long_1 + long_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_1 = v_luaD_precall(double_3,float_1,int_3);

	float_1 = float_1 + float_2;
	double_1 = double_4;
	int_3 = int_1;
	long_1 = long_2 + long_2;
	int_2 = int_1 * int_2;
	v_adjust_varargs(int_4,char_1,int_1);

	double_2 = double_4;
	float_2 = float_2 * float_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
	}
	v_luaD_hook(long_3,int_5,int_5);

	long_4 = long_3 + long_4;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	int_6 = v_luaD_poscall(unsigned_int_2,long_5,int_5,int_7);

	int_5 = int_3;
	int_7 = int_6 * int_2;
	short_1 = short_1 * short_1;
	int_4 = int_5 + int_5;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
	float_1 = float_1;
	double_2 = double_1 * double_5;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_6 = 1;
			long long_7 = 1;
			long_7 = long_4 * long_6;
		}
		long_5 = v_callhook(long_1,double_4);

		double_5 = double_2 * double_4;
	}
	if(1)
	{
		float_2 = float_2 * float_2;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	float_4 = float_3 * float_2;
	double_3 = double_4 * double_2;
	unsigned_int_6 = unsigned_int_3 + unsigned_int_7;
	float_3 = float_1;
	int_4 = int_5 + int_7;
	unsigned_int_5 = unsigned_int_3;
	char_1 = char_1 * char_1;
	if(1)
	{
		float_1 = float_4 + float_3;
	}
	double_6 = double_6 * double_3;
	int_4 = int_6;
	return int_2;
	v_tryfuncTM(double_6,int_8);

}
float v_seterrorobj( long parameter_1,int parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1;
	long_3 = long_3 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	int_1 = int_1 * int_1;
	long_3 = long_3;
	return float_1;
}
int v_luaD_throw( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	if(1)
	{
		float float_2 = 1;
		float_1 = v_seterrorobj(long_1,int_1,double_1);

		int_2 = int_1 + int_1;
		float_3 = float_2 + float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_2;
		if(1)
		{
			double double_3 = 1;
			double_4 = double_1 * double_3;
			float_3 = float_1;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			if(1)
			{
				double double_5 = 1;
				double_5 = double_4 + double_5;
				if(1)
				{
					long long_2 = 1;
					int_2 = v_luaD_throw(float_3,int_2);

					long_2 = long_1 * long_2;
				}
				int_3 = int_2 * int_1;
				double_5 = double_2 * double_1;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	return int_3;
}
double v_stackerror( unsigned int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int_1 = v_luaD_throw(float_1,int_1);

		char_2 = char_1 * char_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "6") < 0)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	return double_1;
	long_1 = v_luaG_runerror(float_2,char_3,short_1);

}
void v_luaD_call( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		double double_2 = 1;
		double_1 = v_stackerror(unsigned_int_1);

		v_luaV_execute(char_1);

		double_2 = double_1 + double_2;
	}
	if(1)
	{
		int_1 = v_luaD_precall(double_3,float_1,int_1);

		short_1 = short_1 * short_1;
	}
	short_2 = short_1 + short_1;
}
void v_luaT_callTM( double parameter_1,long parameter_2,char parameter_3,double parameter_4,float parameter_5,int parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	short_1 = short_2;
	long_3 = long_1 * long_2;
	float_1 = float_2;
	short_2 = short_1;
	float_1 = float_1 * float_3;
	char_1 = char_1 + char_1;
	if(1)
	{
		long_3 = long_3 + long_1;
	}
	if(1)
	{
		float float_4 = 1;
		v_luaD_call(float_2,unsigned_int_1,int_1);

		float_4 = float_3 * float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
		v_luaD_callnoyield(float_2,int_2,int_1);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
}
void v_luaH_getshortstr( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_2;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
		if(1)
		{
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_3 = 1;
			short_3 = short_1 * short_2;
			if(1)
			{
			}
			int_3 = int_2 + int_3;
		}
	}
}
float v_luaT_gettmbyobj( long parameter_1,short parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	short_3 = short_1 + short_2;
	double_2 = double_1 + double_2;
	v_luaH_getshortstr(float_1,short_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	char_1 = char_1 * char_2;
	int_5 = int_3 + int_4;
	double_3 = double_1 + double_2;
	return float_1;
}
int v_luaT_callbinTM( char parameter_1,long parameter_2,long parameter_3,int parameter_4,char parameter_5)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	v_luaT_callTM(double_1,long_1,char_1,double_2,float_1,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
	}
	double_3 = double_2 + double_1;
	return int_2;
	float_2 = v_luaT_gettmbyobj(long_1,short_1,unsigned_int_1);

}
void v_luaT_trybinTM( float parameter_1,float parameter_2,double parameter_3,float parameter_4,unsigned int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_1 = v_luaG_concaterror(float_1,char_1,unsigned_int_2);

		double_1 = double_1 * double_2;
		double_1 = double_2 + double_1;
		if(1)
		{
			unsigned_int_3 = v_luaG_tointerror(double_2,int_1,long_1);

			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			int_2 = v_luaT_callbinTM(char_1,long_1,long_2,int_1,char_1);

			int_2 = v_luaG_opinterror(double_3,double_3,long_3,float_2);

			unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
		}
		double_5 = double_4 * double_4;
	}
}
void v_luaV_concat( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	long_1 = v_luaG_runerror(float_1,char_1,short_1);

	double_1 = v_luaS_newlstr(double_1,float_1,long_1);

	long_1 = long_2 + long_2;
	int_1 = v_copy2buff(float_2,int_1,char_1);

	v_luaS_createlngstrobj(char_2,long_2);

	char_2 = char_3 + char_4;
	float_1 = float_3;
	v_luaT_trybinTM(float_2,float_2,double_1,float_4,unsigned_int_1);

	long_1 = long_3;
}
int v_luaO_utf8esc( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_7 = 1;
	float float_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_8 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_10 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_11 = 1;
	float float_7 = 1;
	double double_9 = 1;
	double double_10 = 1;
	char char_8 = 1;
	short short_5 = 1;
	double double_11 = 1;
	int int_8 = 1;
	short short_6 = 1;
	long long_8 = 1;
	long long_9 = 1;
	int int_9 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_13 = 1;
	int int_10 = 1;
	char char_10 = 1;
	short short_9 = 1;
	int_1 = int_1 + int_2;
	short_1 = short_1 * short_2;
	int_2 = int_1 * int_3;
	float_2 = float_1 + float_1;
	double_2 = double_1 + double_1;
	char_1 = char_1 + char_2;
	int_3 = int_2;
	double_3 = double_3 + double_3;
	double_1 = double_1 + double_4;
	float_1 = float_3 * float_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_3 + float_4;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	double_3 = double_4 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_6;
	unsigned_int_5 = unsigned_int_7 * unsigned_int_6;
	long_1 = long_1 * long_1;
	double_3 = double_4;
	int_1 = int_4 + int_4;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	char_1 = char_2;
	int_5 = int_3 + int_4;
	char_3 = char_1 * char_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_6;
	char_4 = char_3 * char_3;
	int_3 = int_5 * int_5;
	char_3 = char_5 + char_4;
	double_1 = double_5 * double_6;
	int_4 = int_1 + int_5;
	long_1 = long_1;
	long_2 = long_3;
	double_4 = double_3 + double_3;
	double_7 = double_4 * double_1;
	float_5 = float_5 * float_5;
	char_2 = char_6 + char_7;
	unsigned_int_8 = unsigned_int_1;
	int_6 = int_5 * int_4;
	double_4 = double_5 * double_6;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	short_2 = short_2;
	int_1 = int_2 * int_1;
	short_4 = short_1 + short_3;
	float_1 = float_2 + float_1;
	short_2 = short_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_7;
		int_3 = int_4 * int_6;
		unsigned_int_5 = unsigned_int_7 * unsigned_int_5;
		double_8 = double_1 * double_7;
		float_4 = float_4 + float_1;
		char_3 = char_2 + char_7;
		int_2 = int_7;
		int_7 = int_7;
	}
	if(1)
	{
		long long_7 = 1;
		double double_12 = 1;
		char char_9 = 1;
		char_4 = char_5 * char_5;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_3 = unsigned_int_9;
		unsigned_int_3 = unsigned_int_8;
		float_3 = float_2 * float_4;
		char_7 = char_6 + char_6;
		float_6 = float_5;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
		double_6 = double_5 * double_2;
		unsigned_int_10 = unsigned_int_3 + unsigned_int_5;
		float_2 = float_5 * float_6;
		long_6 = long_4 * long_5;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_11;
		char_6 = char_4 + char_4;
		float_7 = float_5;
		double_7 = double_2 + double_8;
		int_7 = int_2 + int_2;
		int_1 = int_1 * int_5;
		double_3 = double_1 + double_2;
		long_1 = long_6 + long_5;
		double_9 = double_5 + double_7;
		double_7 = double_3 + double_10;
		char_3 = char_8;
		short_3 = short_3 + short_5;
		unsigned_int_10 = unsigned_int_7 * unsigned_int_6;
		long_1 = long_6 * long_7;
		int_4 = int_2 + int_6;
		double_11 = double_11 + double_4;
		int_6 = int_8;
		float_1 = float_1 * float_4;
		float_7 = float_6 * float_7;
		short_3 = short_6 + short_1;
		short_5 = short_3 + short_5;
		long_3 = long_8 * long_7;
		double_12 = double_6 + double_12;
		float_4 = float_5 * float_4;
		unsigned_int_3 = unsigned_int_9 * unsigned_int_4;
		char_5 = char_9;
		unsigned_int_11 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_11;
		double_3 = double_11 + double_6;
		long_1 = long_3;
		long_6 = long_8 + long_3;
	}
	double_1 = double_10 * double_5;
	if(1)
	{
		float_3 = float_7 * float_4;
	}
	if(1)
	{
		long_2 = long_5;
	}
	int_2 = int_3 + int_4;
	if(1)
	{
		double double_13 = 1;
		double_7 = double_13;
	}
	if(1)
	{
		int_2 = int_2 + int_4;
	}
	long_8 = long_9 * long_8;
	if(1)
	{
		unsigned int unsigned_int_12 = 1;
		float float_8 = 1;
		float float_9 = 1;
		short short_8 = 1;
		unsigned int unsigned_int_14 = 1;
		double double_14 = 1;
		unsigned_int_12 = unsigned_int_3 + unsigned_int_11;
		double_1 = double_4 + double_4;
		double_7 = double_2 + double_6;
		char_6 = char_4 * char_3;
		short_2 = short_5 * short_2;
		int_2 = int_5 + int_2;
		char_2 = char_7 * char_1;
		int_5 = int_9 + int_3;
		unsigned_int_3 = unsigned_int_8 * unsigned_int_2;
		int_2 = int_7;
		unsigned_int_11 = unsigned_int_5 + unsigned_int_10;
		float_9 = float_8 * float_6;
		short_7 = short_3 + short_1;
		float_9 = float_1 * float_3;
		short_8 = short_2;
		unsigned_int_13 = unsigned_int_11;
		unsigned_int_14 = unsigned_int_7 + unsigned_int_7;
		double_9 = double_10 + double_14;
		short_6 = short_2;
		unsigned_int_2 = unsigned_int_8 * unsigned_int_9;
		int_5 = int_10 * int_5;
		float_7 = float_4 + float_1;
	}
	unsigned_int_7 = unsigned_int_6 + unsigned_int_7;
	if(1)
	{
		char_6 = char_1 * char_4;
		short_5 = short_6 * short_2;
		unsigned_int_1 = unsigned_int_13;
		int_9 = int_4 * int_8;
		char_8 = char_8 + char_3;
		char_5 = char_4 + char_3;
		double_5 = double_10;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_7;
		unsigned_int_1 = unsigned_int_10 * unsigned_int_3;
		long_1 = long_3;
	}
	if(1)
	{
		long_5 = long_1 * long_6;
		int_3 = int_9 * int_10;
	}
	double_5 = double_11 + double_10;
	char controller_10[3];
	fgets(controller_10 ,3 ,stdin);
	if( strcmp( controller_10, "yo") < 0)
	{
		int_8 = int_2;
	}
	if(1)
	{
		long_4 = long_3 * long_2;
	}
	char_8 = char_7 + char_10;
	short_7 = short_6 * short_9;
	int_6 = int_3 + int_4;
	return int_10;
}
void v_luaO_tostring( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_2;
	double_1 = v_luaS_newlstr(double_1,float_1,long_1);

	short_2 = short_1 + short_2;
	double_1 = double_2;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_1 * long_2;
		if(1)
		{
			if(1)
			{
				short short_3 = 1;
				int int_3 = 1;
				short_3 = short_1 + short_1;
				int_2 = int_1 + int_3;
			}
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
}
void v_luaO_pushfstring( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_2 = int_1 * int_1;
	double_3 = double_1 * double_2;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = v_luaO_pushvfstring(int_1,char_1,long_2);

	long_2 = long_3;
}
void v_luaD_inctop( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
}
void v_luaS_createlngstrobj( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_1;
	double_2 = double_1 * double_1;
	long_1 = v_createstrobj(short_1,short_1,int_2,double_3);

}
float v_luaM_toobig()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	return float_1;
	long_1 = v_luaG_runerror(float_1,char_1,short_1);

}
long v_createstrobj( short parameter_1,short parameter_2,int parameter_3,double parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_2;
	int_1 = int_1;
	int_1 = int_2 + int_2;
	char_3 = char_1 * char_2;
	short_1 = short_1;
	long_1 = v_luaC_newobj(int_1,int_3,double_3);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	return long_2;
}
void v_luaS_resize( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_1;
	float_1 = float_1 * float_2;
	double_1 = double_1 + double_2;
}
int v_internshrstr( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_3 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = int_2;
	double_1 = double_1 + double_2;
	char_1 = char_1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				double_1 = double_1 * double_2;
			}
		}
	}
	if(1)
	{
		short short_1 = 1;
		long_2 = long_1 + long_2;
		unsigned_int_1 = v_luaS_hash(long_2,char_1,char_1);

		short_1 = short_1 + short_1;
	}
	float_3 = float_1 * float_3;
	unsigned_int_2 = unsigned_int_2;
	int_4 = int_3 * int_2;
	char_2 = char_1;
	float_5 = float_4 * float_3;
	char_3 = char_2 * char_2;
	return int_5;
	v_luaS_resize(double_1,int_2);

	long_1 = v_createstrobj(short_2,short_3,int_5,double_2);

}
double v_luaS_newlstr( double parameter_1,float parameter_2,long parameter_3)
{
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short_3 = short_1 + short_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		float_1 = v_luaM_toobig();

		int_1 = int_1;
		int_1 = v_internshrstr(int_2,int_1,unsigned_int_2);

		float_3 = float_2 * float_1;
	}
	return double_1;
	v_luaS_createlngstrobj(char_1,long_1);

}
short v_pushstr( short parameter_1,float parameter_2,float parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_3 = 1;
	v_luaD_inctop(long_1);

	short_1 = short_1 * short_1;
	long_1 = long_1 + long_2;
	return short_2;
	double_1 = v_luaS_newlstr(double_1,float_1,long_3);

}
long v_luaO_pushvfstring( int parameter_1,char parameter_2,long parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	long long_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	v_luaO_pushfstring(double_1,unsigned_int_1,int_1);

	double_1 = double_2 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		float float_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		long long_2 = 1;
		double double_6 = 1;
		char char_4 = 1;
		char char_5 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		double double_7 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			char_2 = char_1 + char_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		v_luaO_tostring(short_1,unsigned_int_3);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		}
		long_1 = v_luaG_runerror(float_1,char_1,short_1);

		unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
		v_luaV_concat(unsigned_int_5,int_2);

		float_3 = float_1 * float_2;
		short_2 = short_1;
		if(1)
		{
			char_1 = char_2 * char_3;
		}
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		short_3 = v_pushstr(short_3,float_4,float_2);

		unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
		int_1 = int_3 * int_2;
		double_4 = double_2 * double_3;
		int_4 = int_4 * int_2;
		float_4 = float_1 + float_4;
		unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
		int_2 = v_luaO_utf8esc(char_3,unsigned_int_4);

		unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
		long_3 = long_2 * long_2;
		double_2 = double_3 * double_5;
		double_1 = double_4 + double_6;
		double_6 = double_5 + double_4;
		char_4 = char_2 * char_4;
		char_6 = char_5 + char_2;
		long_3 = long_4;
		int_4 = int_1;
		double_6 = double_1 + double_5;
		char_6 = char_3 * char_1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_7;
		unsigned_int_8 = unsigned_int_5 * unsigned_int_6;
		int_4 = int_5 + int_2;
		char_6 = char_3 + char_4;
		double_7 = double_7;
	}
	v_luaD_inctop(long_4);

	int_1 = int_5 + int_6;
	double_4 = double_5 * double_1;
	if(1)
	{
		long long_5 = 1;
		long_1 = long_5 + long_1;
	}
	return long_3;
}
long v_luaG_runerror( float parameter_1,char parameter_2,short parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short_1 = short_1 * short_1;
	char_1 = char_1;
	int_1 = int_2;
	char_1 = v_luaG_errormsg(int_1);

	double_1 = double_1 + double_1;
	short_2 = v_currentline(short_2);

	short_3 = short_3 * short_4;
	long_1 = long_1;
	if(1)
	{
		long_2 = v_luaO_pushvfstring(int_2,char_2,long_3);

		float_1 = v_luaG_addinfo(double_2,char_3,float_2,int_3);

		float_2 = float_1 * float_1;
	}
	double_1 = double_3 + double_1;
	return long_3;
}
int v_luaO_ceillog2( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1 + int_1;
	return int_1;
}
double v_setnodevector( int parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	double double_2 = 1;
	int_1 = v_luaO_ceillog2(unsigned_int_1);

	float_2 = float_1 * float_2;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		double double_1 = 1;
		float_1 = float_3 + float_4;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = v_luaG_runerror(float_2,char_1,short_1);

		long_2 = long_2 * long_3;
		char_3 = char_2 + char_3;
		if(1)
		{
			short short_2 = 1;
			short_2 = short_2;
		}
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		int_2 = int_1 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_4 = 1;
			int int_3 = 1;
			char_2 = char_3;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
			int_4 = int_2 + int_3;
			int_2 = int_3 * int_2;
		}
	}
	int_5 = int_4 * int_2;
	long_4 = long_3 + long_2;
	return double_2;
}
long v_luaC_newobj( int parameter_1,int parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double_3 = double_1 * double_2;
	double_1 = double_4 * double_2;
	double_2 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 * int_2;
	double_4 = double_1 + double_4;
	return long_1;
}
float v_luaH_new( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	long_1 = v_luaC_newobj(int_1,int_2,double_1);

	short_1 = short_1 * short_1;
	long_2 = long_3;
	int_1 = int_2 + int_1;
	char_2 = char_1 * char_1;
	char_4 = char_3 + char_1;
	return float_1;
	double_1 = v_setnodevector(int_2,float_2,unsigned_int_3);

}
unsigned int v_init_registry( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = v_luaH_new(char_1);

	short_3 = short_1 * short_2;
	float_2 = float_2 + float_3;
	v_luaH_setint(double_1,float_3,float_4,short_2);

	long_2 = long_1 * long_1;
	short_5 = short_2 * short_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 + short_1;
	char_1 = char_1 + char_2;
	int_1 = int_1 + int_1;
	return unsigned_int_3;
	v_luaH_resize(float_4,short_4,char_1,unsigned_int_2);

}
void v_stack_init( float parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	long_3 = long_1 + long_2;
	int_3 = int_1 * int_2;
	char_1 = char_1 * char_2;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_2 + int_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	float_2 = float_1 * float_2;
	int_4 = int_4 + int_4;
	char_2 = char_2 + char_1;
	int_3 = int_1 * int_2;
	int_3 = int_1;
	int_1 = int_1 * int_3;
}
short v_f_luaopen( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	float_1 = float_1 + float_2;
	int_1 = int_1;
	v_luaX_init(short_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_stack_init(float_2,char_1);

	short_3 = short_1 + short_2;
	double_2 = double_1 * double_1;
	unsigned_int_1 = v_init_registry(char_2,int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	v_luaT_init(double_3);

	short_2 = v_lua_version(unsigned_int_3);

	long_3 = long_1 * long_2;
	double_1 = double_2 + double_4;
	return short_1;
	v_luaS_init(int_2);

}
int v_luaD_rawrunprotected( char parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1;
	char_2 = char_1 + char_1;
	int_3 = int_1 + int_2;
	short_3 = short_1 + short_2;
	long_1 = long_2;
	char_1 = char_3;
	short_2 = short_3 * short_1;
	short_1 = short_4 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
unsigned int v_luaS_hash( long parameter_1,char parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_2 = short_1;
	}
	return unsigned_int_2;
}
short v_makeseed()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	unsigned_int_1 = v_luaS_hash(long_1,char_1,char_1);

	int_1 = int_1 * int_1;
	float_1 = v_lua_newstate(short_1);

	double_1 = double_1 * double_2;
	int_1 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	float_2 = float_2 * float_3;
	char_1 = char_1 + char_1;
	return short_2;
}
void v_preinit_thread( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	long_3 = long_1 + long_2;
	long_1 = long_4 + long_1;
	double_1 = double_1 + double_2;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2 * double_3;
	int_2 = int_1 + int_1;
	long_3 = long_3 * long_3;
	double_2 = double_3 + double_2;
	double_1 = double_1 + double_3;
	int_3 = int_4;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	char_1 = char_1 * char_2;
	int_1 = int_1 + int_1;
	double_1 = double_3 * double_4;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
	int_3 = int_3 + int_2;
}
float v_lua_newstate( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_7 = 1;
	float float_8 = 1;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	float_3 = float_2;
	v_preinit_thread(float_1,int_1);

	int_2 = int_2 * int_3;
	short_1 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1;
	int_3 = v_luaD_rawrunprotected(char_1,char_2);

	int_3 = int_3 + int_2;
	char_1 = char_3 + char_3;
	long_2 = long_1 * long_2;
	short_1 = short_2 + short_2;
	double_3 = double_2 * double_3;
	int_3 = int_1 + int_3;
	float_4 = float_3 + float_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	short_1 = v_close_state(int_2);

	float_1 = float_5 * float_6;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	short_4 = short_3 * short_3;
	int_3 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	int_3 = int_1 + int_2;
	double_2 = double_1;
	short_5 = v_makeseed();

	short_5 = short_2 * short_4;
	double_2 = double_3 + double_3;
	long_1 = long_1;
	int_1 = int_1;
	double_3 = double_2 + double_2;
	long_1 = long_2 + long_2;
	float_1 = float_3 * float_7;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	}
	if(1)
	{
		char char_4 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		char_3 = char_4 * char_2;
	}
	return float_8;
	short_5 = v_f_luaopen(long_2);

}
unsigned int v_luaL_newstate()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	double_1 = v_l_alloc(unsigned_int_1,long_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float_1 = v_lua_newstate(short_1);

		v_panic(short_1);

		unsigned_int_4 = unsigned_int_1;
	}
	return unsigned_int_2;
	v_lua_atpanic(long_2,unsigned_int_4);

}
long v_usage( short parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	short_1 = short_2;
	int_1 = int_2;
	return long_1;
}
short v_doargs( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		long_2 = long_1 + long_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_8 = 1;
		if(1)
		{
			float_2 = float_1 * float_2;
		}
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			float_1 = float_1 * float_2;
			if(1)
			{
				int_4 = int_1 + int_1;
			}
			int_5 = int_4 + int_3;
		}
		if(1)
		{
			float_2 = float_1 + float_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			int int_6 = 1;
			int int_7 = 1;
			int_8 = int_6 + int_7;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		}
		if(1)
		{
			int_1 = int_2 + int_8;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_3 = long_4;
		}
		if(1)
		{
			double double_3 = 1;
			double_3 = double_1 * double_2;
		}
	}
	if(1)
	{
		long long_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_1 = long_5;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		int int_9 = 1;
		int_9 = int_1 + int_2;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		}
	}
	return short_1;
	long_2 = v_usage(short_1);

}
int main()
{
	int uni_para =949;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_1;
	char_3 = char_1 * char_2;
	double_3 = double_2 * double_1;
	double_2 = double_4 * double_1;
	char controller4vul_2550[2];
	fgets(controller4vul_2550 ,2 ,stdin);
	if( strcmp( controller4vul_2550, "U") < 0)
	{
		double double_5 = 1;
		unsigned_int_1 = v_pmain(long_1,uni_para);

		double_5 = double_4 * double_2;
	}
	int_2 = int_1 + int_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_2 * long_3;
	}
	float_1 = float_1 * float_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char char_4 = 1;
		char_1 = char_2 * char_4;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}

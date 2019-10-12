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

long v_lua_close();
double v_lua_pushlightuserdata( float parameter_1);
char v_lua_pushinteger( int parameter_1,unsigned int parameter_2);
unsigned int v_writer( unsigned int parameter_1,char parameter_2,double parameter_3);
double v_DumpDebug( double parameter_1,int parameter_2);
int v_DumpProtos( short parameter_1,unsigned int parameter_2);
char v_DumpUpvalues( unsigned int parameter_1,char parameter_2);
unsigned int v_DumpConstants( long parameter_1,double parameter_2);
double v_DumpCode( double parameter_1,unsigned int parameter_2);
short v_DumpInt( int parameter_1,float parameter_2);
int v_DumpString( float parameter_1,short parameter_2);
long v_DumpFunction( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
long v_DumpNumber( short parameter_1,int parameter_2);
unsigned int v_DumpInteger( char parameter_1,float parameter_2);
double v_DumpByte( int parameter_1,double parameter_2);
double v_DumpHeader( char parameter_1);
int v_luaU_dump( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_5);
unsigned int v_cannot( unsigned int parameter_1);
void v_luaF_initupvals( unsigned int parameter_1,float parameter_2);
long v_check_conflict( float parameter_1,long parameter_2,long parameter_3);
double v_assignment( short parameter_1,unsigned int parameter_2,int parameter_3,int uni_para);
double v_exprstat( short parameter_1,int uni_para);
long v_retstat( char parameter_1);
int v_checkrepeated( int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void v_labelstat( unsigned int parameter_1,float parameter_2,int parameter_3);
void v_localstat( char parameter_1);
long v_localfunc();
void v_luaK_storevar( short parameter_1,short parameter_2,unsigned int parameter_3);
short v_funcname( unsigned int parameter_1,float parameter_2);
int v_funcstat( unsigned int parameter_1,int parameter_2);
long v_repeatstat( float parameter_1,int parameter_2);
void v_luaK_setreturns( long parameter_1,float parameter_2,int parameter_3);
long v_adjust_assign( short parameter_1,int parameter_2,int parameter_3,float parameter_4);
int v_forlist( char parameter_1,unsigned int parameter_2);
char v_forbody( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
int v_exp1( unsigned int parameter_1);
short v_fornum( short parameter_1,unsigned int parameter_2,int parameter_3);
unsigned int v_forstat( int parameter_1,int parameter_2);
unsigned int v_cond( float parameter_1);
double v_whilestat( double parameter_1,int parameter_2);
void v_block( double parameter_1);
int v_skipnoopstat( char parameter_1);
float v_gotostat( long parameter_1,int parameter_2);
int v_codecomp( int parameter_1,double parameter_2,unsigned int parameter_3,float parameter_4);
void v_freeexps( double parameter_1,unsigned int parameter_2,float parameter_3);
void v_codebinexpval( short parameter_1,double parameter_2,long parameter_3,short parameter_4,int parameter_5,int uni_para);
void v_luaK_posfix( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,float parameter_4,int parameter_5,int uni_para);
void v_luaK_goiffalse( int parameter_1,double parameter_2);
short v_condjump( double parameter_1,long parameter_2,int parameter_3,int parameter_4,int parameter_5);
char v_jumponcond( float parameter_1,float parameter_2,int parameter_3);
void v_luaK_goiftrue( float parameter_1,float parameter_2);
void v_luaK_infix( int parameter_1,double parameter_2,float parameter_3);
int v_getbinopr( int parameter_1);
int v_explist( int parameter_1,unsigned int parameter_2);
void v_funcargs( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,int uni_para);
void v_luaK_self( double parameter_1,int parameter_2,unsigned int parameter_3);
void v_luaK_exp2anyregup( double parameter_1,long parameter_2);
float v_fieldsel( char parameter_1,double parameter_2);
void v_luaK_indexed( unsigned int parameter_1,long parameter_2,unsigned int parameter_3);
short v_searchupvalue( float parameter_1,char parameter_2);
int v_markupval( unsigned int parameter_1,int parameter_2);
int v_searchvar( float parameter_1,int parameter_2);
short v_singlevaraux( int parameter_1,float parameter_2,int parameter_3,int parameter_4);
float v_singlevar( double parameter_1,char parameter_2);
float v_primaryexp( float parameter_1,float parameter_2);
unsigned int v_suffixedexp( double parameter_1,float parameter_2,int uni_para);
float v_undefgoto( long parameter_1,char parameter_2);
char v_findlabel( short parameter_1,int parameter_2);
unsigned int v_movegotosout( long parameter_1,double parameter_2);
long v_removevars( unsigned int parameter_1,int parameter_2);
void v_luaK_patchlist( short parameter_1,int parameter_2,int parameter_3);
char v_semerror( double parameter_1,int parameter_2);
char v_closegoto( int parameter_1,int parameter_2,int parameter_3);
int v_findgotos( long parameter_1,short parameter_2);
double v_newlabelentry( double parameter_1,char parameter_2,float parameter_3,int parameter_4,int parameter_5);
double v_breaklabel( float parameter_1);
void v_luaK_patchclose( int parameter_1,int parameter_2,int parameter_3);
short v_leaveblock( int parameter_1);
void v_luaK_ret( unsigned int parameter_1,int parameter_2,int parameter_3);
long v_close_func( double parameter_1);
long v_codeclosure( long parameter_1,double parameter_2);
short v_registerlocalvar( short parameter_1,int parameter_2);
int v_new_localvar( int parameter_1,float parameter_2);
unsigned int v_parlist( float parameter_1);
long v_getlocvar( char parameter_1,int parameter_2);
unsigned int v_adjustlocalvars( long parameter_1,int parameter_2);
short v_addprototype( unsigned int parameter_1);
long v_body( int parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
int v_luaO_int2fb( unsigned int parameter_1);
long v_lastlistfield( unsigned int parameter_1,long parameter_2);
unsigned int v_check_match( long parameter_1,int parameter_2,int parameter_3,int parameter_4);
void v_testnext( short parameter_1,int parameter_2);
int v_nilK( unsigned int parameter_1);
short v_boolK( long parameter_1,int parameter_2);
int v_luaK_exp2RK( char parameter_1,char parameter_2,int uni_para);
void v_luaK_exp2val( int parameter_1,short parameter_2,int uni_para);
unsigned int v_yindex( short parameter_1,char parameter_2,int uni_para);
short v_str_checkname( double parameter_1);
double v_checkname( int parameter_1,unsigned int parameter_2);
void v_recfield( double parameter_1,char parameter_2,int uni_para);
unsigned int v_listfield( char parameter_1,char parameter_2);
int v_luaX_lookahead( float parameter_1);
float v_field( short parameter_1,int parameter_2,int uni_para);
void v_luaK_setlist( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4);
char v_closelistfield( double parameter_1,double parameter_2);
float v_error_expected( unsigned int parameter_1,int parameter_2);
int v_check( short parameter_1,int parameter_2);
void v_checknext( float parameter_1,int parameter_2);
unsigned int v_constructor( long parameter_1,unsigned int parameter_2,int uni_para);
int v_luaK_stringK( int parameter_1,int parameter_2);
long v_codestring( long parameter_1,int parameter_2,unsigned int parameter_3);
long v_simpleexp( long parameter_1,double parameter_2);
unsigned int v_removevalues( double parameter_1,int parameter_2);
void v_discharge2anyreg( unsigned int parameter_1,char parameter_2);
unsigned int v_negatecondition( char parameter_1,double parameter_2);
short v_codenot( double parameter_1,unsigned int parameter_2);
void v_luaK_fixline( float parameter_1,int parameter_2);
void v_luaK_checkstack( unsigned int parameter_1,int parameter_2);
void v_luaK_reserveregs( int parameter_1,int parameter_2);
long v_freeexp( int parameter_1,double parameter_2);
void v_luaK_exp2nextreg( float parameter_1,unsigned int parameter_2);
void v_luaK_patchtohere( double parameter_1,int parameter_2);
int v_luaK_getlabel();
void v_code_loadbool( short parameter_1,int parameter_2,int parameter_3,int parameter_4);
int v_luaK_jump();
void v_need_value( char parameter_1,int parameter_2);
void v_luaK_concat( float parameter_1,int parameter_2,int parameter_3);
int v_luaK_intK( char parameter_1,unsigned int parameter_2);
int v_addk( unsigned int parameter_1,double parameter_2,double parameter_3,int uni_para);
float v_luaK_numberK( unsigned int parameter_1,long parameter_2,int uni_para);
long v_codeextraarg( double parameter_1,int parameter_2);
int v_luaK_codeABx( int parameter_1,long parameter_2,int parameter_3,float parameter_4);
int v_luaK_codek( float parameter_1,int parameter_2,int parameter_3);
void v_luaK_nil( long parameter_1,int parameter_2,int parameter_3);
int v_discharge2reg( float parameter_1,long parameter_2,int parameter_3,int uni_para);
double v_exp2reg( short parameter_1,short parameter_2,int parameter_3,int uni_para);
void v_luaK_setoneret( char parameter_1,int parameter_2);
long v_freereg( double parameter_1,int parameter_2);
void v_fixjump( int parameter_1,int parameter_2,int parameter_3);
long v_getjumpcontrol( double parameter_1,int parameter_2);
double v_patchtestreg( unsigned int parameter_1,int parameter_2,int parameter_3);
int v_getjump( float parameter_1,int parameter_2);
long v_patchlistaux( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
float v_dischargejpc( unsigned int parameter_1);
void v_luaK_code( short parameter_1,float parameter_2);
int v_luaK_codeABC( double parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5);
void v_luaK_dischargevars( short parameter_1,double parameter_2);
int v_luaK_exp2anyreg( long parameter_1,char parameter_2,int uni_para);
char v_codeunexpval( float parameter_1,long parameter_2,int parameter_3,int parameter_4);
long v_numarith( short parameter_1,int parameter_2,float parameter_3,long parameter_4);
int v_intarith( long parameter_1,int parameter_2,double parameter_3,int parameter_4);
void v_luaO_arith( float parameter_1,int parameter_2,long parameter_3,int parameter_4,long parameter_5);
long v_validop( int parameter_1,float parameter_2,short parameter_3);
long v_tonumeral( long parameter_1,double parameter_2);
char v_constfolding( char parameter_1,int parameter_2,double parameter_3,long parameter_4);
void v_luaK_prefix( unsigned int parameter_1,long parameter_2,int parameter_3,int parameter_4);
long v_getunopr( int parameter_1);
int v_subexpr( char parameter_1,char parameter_2,int parameter_3,int uni_para);
long v_expr( int parameter_1,char parameter_2,int uni_para);
short v_test_then_block( unsigned int parameter_1,int parameter_2);
double v_ifstat( float parameter_1,int parameter_2);
unsigned int v_enterlevel( short parameter_1);
long v_statement( int parameter_1,int uni_para);
int v_block_follow( char parameter_1,int parameter_2);
int v_statlist( long parameter_1,int uni_para);
float v_check_next2( float parameter_1,long parameter_2);
long v_read_numeral( char parameter_1,double parameter_2);
char v_readdecesc( char parameter_1);
short v_readutf8esc( float parameter_1);
char v_utf8esc( long parameter_1);
unsigned int v_esccheck( double parameter_1,int parameter_2,double parameter_3);
int v_gethexa( short parameter_1);
unsigned int v_readhexaesc( char parameter_1);
void v_read_string( char parameter_1,int parameter_2,long parameter_3);
int v_check_next1( long parameter_1,int parameter_2);
void v_luaX_newstring( short parameter_1,char parameter_2,int parameter_3);
char v_read_long_string( double parameter_1,double parameter_2,int parameter_3);
double v_skip_sep( int parameter_1);
double v_inclinenumber( short parameter_1);
void v_llex( unsigned int parameter_1,int parameter_2);
void v_luaX_next( int parameter_1);
double v_luaX_token2str( long parameter_1,int parameter_2);
long v_save( unsigned int parameter_1,int parameter_2);
double v_txtToken( float parameter_1,int parameter_2);
char v_lexerror( double parameter_1,unsigned int parameter_2,int parameter_3);
short v_luaX_syntaxerror( double parameter_1,char parameter_2);
short v_errorlimit( double parameter_1,int parameter_2,char parameter_3);
float v_checklimit( short parameter_1,int parameter_2,int parameter_3,long parameter_4);
char v_newupvalue( double parameter_1,long parameter_2,unsigned int parameter_3);
int v_init_exp( unsigned int parameter_1,float parameter_2,int parameter_3);
void v_enterblock( double parameter_1,int parameter_2,float parameter_3);
double v_open_func( char parameter_1,double parameter_2,long parameter_3);
short v_mainfunc( char parameter_1,double parameter_2,int uni_para);
void v_luaX_setinput( long parameter_1,long parameter_2,int parameter_3,char parameter_4,int parameter_5);
int v_luaY_parser( float parameter_1,double parameter_2,char parameter_3,double parameter_4,short parameter_5,int parameter_6,int uni_para);
long v_LoadDebug( short parameter_1,unsigned int parameter_2);
int v_LoadProtos( long parameter_1,unsigned int parameter_2);
int v_LoadUpvalues( unsigned int parameter_1,short parameter_2);
float v_LoadConstants( double parameter_1,long parameter_2);
void v_LoadCode( unsigned int parameter_1,char parameter_2);
unsigned int v_LoadInt( double parameter_1);
short v_LoadString( short parameter_1);
float v_LoadFunction( int parameter_1,double parameter_2,char parameter_3);
void v_luaF_newproto( int parameter_1);
float v_LoadNumber( float parameter_1);
void v_LoadInteger( double parameter_1);
unsigned int v_LoadByte( short parameter_1);
float v_error( float parameter_1,char parameter_2);
char v_checkliteral( float parameter_1,long parameter_2,unsigned int parameter_3);
float v_checkHeader( float parameter_1);
char v_luaU_undump( double parameter_1,double parameter_2,int parameter_3);
unsigned int v_checkmode( float parameter_1,int parameter_2,double parameter_3);
long v_f_parser( double parameter_1,int uni_para);
int v_luaD_protectedparser( char parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4,int uni_para);
long v_reader( int parameter_1,unsigned int parameter_3);
void v_luaZ_init( float parameter_1,short parameter_2,int parameter_3);
double v_lua_load( unsigned int parameter_1,short parameter_2,int parameter_4,float parameter_5,int uni_para);
float v_combine( short parameter_1,int parameter_2,int uni_para);
void v_luaD_growstack( char parameter_1,int parameter_2);
long v_growstack( long parameter_1);
int v_lua_checkstack( int parameter_1,int parameter_2);
float v_index2addr( int parameter_1,int parameter_2);
long v_lua_touserdata( unsigned int parameter_1,int parameter_2);
short v_pmain( char parameter_1,int uni_para);
int v_fatal( long parameter_1);
long v_panic( char parameter_1);
char v_lua_atpanic( float parameter_1,long parameter_2);
char v_l_alloc(long parameter_3,unsigned int parameter_4);
char v_freestack( float parameter_1);
char v_dothecall( float parameter_1);
long v_correctstack( char parameter_1,char parameter_2);
void v_luaD_reallocstack( short parameter_1,int parameter_2);
void v_luaE_shrinkCI( char parameter_1);
void v_luaE_freeCI( char parameter_1);
char v_stackinuse( short parameter_1);
void v_luaD_shrinkstack( float parameter_1);
int v_luaD_pcall( int parameter_1,long parameter_2,unsigned int parameter_4,float parameter_5);
void v_udata2finalize( int parameter_1);
void v_GCTM( double parameter_1,int parameter_2);
void v_callallpendingfinalizers( short parameter_1);
double v_findlast( unsigned int parameter_1);
long v_separatetobefnz( long parameter_1,int parameter_2);
void v_luaC_freeallobjects( double parameter_1);
char v_close_state( short parameter_1);
int v_lua_version( long parameter_1);
void v_luaX_init();
void v_luaT_init( char parameter_1);
void v_luaC_fix( int parameter_1,short parameter_2);
void v_luaS_init( double parameter_1);
char v_luaG_errormsg( int parameter_1);
double v_currentline( unsigned int parameter_1);
void v_luaO_chunkid( char parameter_1,double parameter_2,long parameter_3);
char v_luaG_addinfo( float parameter_1,long parameter_2,long parameter_3,int parameter_4);
int v_copy2buff( long parameter_1,int parameter_2,char parameter_3);
long v_luaG_opinterror( double parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4);
int v_luaG_tointerror( int parameter_1,long parameter_2,int parameter_3);
void v_luaG_concaterror( long parameter_1,char parameter_2,int parameter_3);
void v_luaD_callnoyield( unsigned int parameter_1,short parameter_2,int parameter_3);
float v_luaF_findupval( short parameter_1,int parameter_2);
float v_luaF_newLclosure( unsigned int parameter_1,int parameter_2);
short v_pushclosure( unsigned int parameter_1,float parameter_2,char parameter_3,long parameter_4,int parameter_5);
double v_getcached( int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void v_luaH_resizearray( int parameter_1,unsigned int parameter_2,long parameter_3);
short v_forlimit( int parameter_1,double parameter_2,double parameter_3,int parameter_4);
void v_luaF_close( int parameter_1,char parameter_2);
long v_LEnum( int parameter_1,double parameter_2);
int v_luaV_lessequal( int parameter_1,short parameter_2,unsigned int parameter_3);
float v_luaG_ordererror( short parameter_1,float parameter_2,int parameter_3);
int v_luaT_callorderTM( int parameter_1,int parameter_2,int parameter_3,short parameter_4);
void v_l_strcmp( long parameter_1,short parameter_2);
char v_LEintfloat( unsigned int parameter_1,unsigned int parameter_2);
short v_LTintfloat( short parameter_1,unsigned int parameter_2);
long v_LTnum( float parameter_1,int parameter_2);
int v_luaV_lessthan( short parameter_1,float parameter_2,short parameter_3);
int v_luaS_eqlngstr( long parameter_1,float parameter_2);
int v_luaV_equalobj( unsigned int parameter_1,float parameter_2,long parameter_3);
double v_unbound_search( char parameter_1,short parameter_2);
int v_luaH_getn( double parameter_1);
void v_luaV_objlen( double parameter_1,short parameter_2,int parameter_3);
float v_luaV_div( long parameter_1,long parameter_2,int parameter_3);
double v_luaV_mod( long parameter_1,double parameter_2,float parameter_3);
char v_luaV_shiftl( char parameter_1,float parameter_2);
void v_luaV_finishget( char parameter_1,double parameter_2,double parameter_3,double parameter_4,long parameter_5);
float v_luaH_getstr( int parameter_1,long parameter_2);
int v_luaO_fb2int( int parameter_1);
long v_getgeneric( char parameter_1,double parameter_2);
long v_luaH_get( long parameter_1,short parameter_2,int uni_para);
float v_luaH_set( double parameter_1,float parameter_2,short parameter_3,int uni_para);
double v_computesizes( short parameter_1,float parameter_2);
long v_arrayindex( double parameter_1);
int v_countint( unsigned int parameter_1,char parameter_2);
double v_numusehash( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
double v_numusearray( long parameter_1,long parameter_2);
double v_rehash( char parameter_1,double parameter_2,double parameter_3);
void v_getfreepos( long parameter_1);
unsigned int v_luaS_hashlongstr( int parameter_1);
short v_l_hashfloat( char parameter_1);
char v_mainposition( short parameter_1,long parameter_2);
int v_l_str2dloc( short parameter_1,char parameter_2,int parameter_3);
float v_l_str2d( char parameter_1,int parameter_2);
int v_luaO_hexavalue( int parameter_1);
short v_isneg( unsigned int parameter_1,int uni_para);
unsigned int v_l_str2int( unsigned int parameter_1,float parameter_2,int uni_para);
double v_luaO_str2num( unsigned int parameter_1,unsigned int parameter_2,int uni_para);
int v_luaV_tointeger( float parameter_1,long parameter_2,int parameter_3,int uni_para);
long v_luaH_newkey( char parameter_1,float parameter_2,double parameter_3);
double v_luaH_getint( char parameter_1,double parameter_2);
void v_luaH_setint( float parameter_1,int parameter_2,short parameter_3,unsigned int parameter_4);
int v_setarrayvector( char parameter_1,char parameter_2,short parameter_3);
void v_luaH_resize( double parameter_1,short parameter_2,double parameter_3,short parameter_4);
void v_luaV_execute( short parameter_1);
char v_currentpc( int parameter_1);
short v_kname( short parameter_1,int parameter_2,int parameter_3,short parameter_4);
long v_filterpc( int parameter_1,int parameter_2);
int v_findsetreg( int parameter_1,int parameter_2,int parameter_3);
void v_luaF_getlocalname( float parameter_1,int parameter_2,int parameter_3);
double v_getobjname( char parameter_1,int parameter_2,int parameter_3,char parameter_4);
void v_isinstack( double parameter_1,unsigned int parameter_2);
double v_upvalname( unsigned int parameter_1,int parameter_2);
char v_getupvalname( short parameter_1,unsigned int parameter_2,long parameter_3);
char v_varinfo( int parameter_1,double parameter_2);
void v_luaS_new( char parameter_1,double parameter_2);
float v_luaT_objtypename( unsigned int parameter_1,int parameter_2);
unsigned int v_luaG_typeerror( long parameter_1,float parameter_2,int parameter_3);
short v_tryfuncTM( char parameter_1,int parameter_2);
short v_callhook( short parameter_1,char parameter_2);
void v_adjust_varargs( long parameter_1,float parameter_2,int parameter_3);
char v_moveresults( short parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5);
int v_luaD_poscall( short parameter_1,char parameter_2,long parameter_3,int parameter_4);
void v_luaD_hook( short parameter_1,int parameter_2,int parameter_3);
int v_luaD_precall( int parameter_1,double parameter_2,int parameter_3);
double v_seterrorobj( short parameter_1,int parameter_2,double parameter_3);
float v_luaD_throw( unsigned int parameter_1,int parameter_2);
void v_stackerror( char parameter_1);
void v_luaD_call( unsigned int parameter_1,double parameter_2,int parameter_3);
void v_luaT_callTM( short parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,char parameter_5,int parameter_6);
long v_luaH_getshortstr( short parameter_1,unsigned int parameter_2);
unsigned int v_luaT_gettmbyobj( long parameter_1,unsigned int parameter_2,short parameter_3);
int v_luaT_callbinTM( unsigned int parameter_1,char parameter_2,float parameter_3,int parameter_4,double parameter_5);
void v_luaT_trybinTM( char parameter_1,char parameter_2,float parameter_3,long parameter_4,short parameter_5);
void v_luaV_concat( short parameter_1,int parameter_2);
int v_luaO_utf8esc( char parameter_1,float parameter_2);
void v_luaO_tostring( float parameter_1,float parameter_2);
char v_luaO_pushfstring( float parameter_1,unsigned int parameter_2,int parameter_3);
void v_luaD_inctop( long parameter_1);
float v_luaS_createlngstrobj( char parameter_1,int parameter_2);
double v_luaM_toobig( int parameter_1);
char v_createstrobj( long parameter_1,long parameter_2,int parameter_3,double parameter_4);
void v_luaS_resize( int parameter_1,int parameter_2);
short v_internshrstr( long parameter_1,long parameter_2,short parameter_3);
float v_luaS_newlstr( int parameter_1,int parameter_2,int parameter_3);
int v_pushstr( long parameter_1,float parameter_2,float parameter_3);
unsigned int v_luaO_pushvfstring( int parameter_1,unsigned int parameter_2,float parameter_3);
char v_luaG_runerror( unsigned int parameter_1,float parameter_2,unsigned int parameter_3);
int v_luaO_ceillog2( char parameter_1);
int v_setnodevector( short parameter_1,char parameter_2,int parameter_3);
long v_luaC_newobj( short parameter_1,int parameter_2,short parameter_3);
int v_luaH_new( long parameter_1);
int v_init_registry( short parameter_1,short parameter_2);
short v_stack_init( unsigned int parameter_1,double parameter_2);
char v_f_luaopen( short parameter_1);
int v_luaD_rawrunprotected( int parameter_1,float parameter_2);
unsigned int v_luaS_hash( short parameter_1,short parameter_2,short parameter_3);
int v_makeseed( long parameter_1);
void v_preinit_thread( char parameter_1,float parameter_2);
double v_lua_newstate( float parameter_1);
short v_luaL_newstate();
float v_usage( long parameter_1);
short v_doargs( int parameter_1,char parameter_2);
long v_lua_close()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_1;
	double_1 = double_2;
	return long_1;
	char_1 = v_close_state(short_1);

}
double v_lua_pushlightuserdata( float parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_1;
	char_1 = char_1 + char_1;
	int_2 = int_1 * int_2;
	double_2 = double_1 + double_1;
	return double_3;
}
char v_lua_pushinteger( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_1 * int_2;
	double_2 = double_1 + double_1;
	long_3 = long_1 + long_2;
	return char_1;
}
unsigned int v_writer( unsigned int parameter_1,char parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_1;
}
double v_DumpDebug( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long_1 = long_1 + long_1;
	short_1 = v_DumpInt(int_1,float_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 * short_1;
	int_1 = int_2 + int_3;
	short_2 = short_3 + short_2;
	char_1 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_1 = double_2;
		int_3 = v_DumpString(float_2,short_3);

		double_3 = double_2 * double_1;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_3 = 1;
		float_2 = float_3 + float_2;
	}
	return double_3;
}
int v_DumpProtos( short parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_DumpInt(int_1,float_1);

	short_2 = short_1 + short_1;
	int_2 = int_2 + int_3;
	int_3 = int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_3;
	}
	return int_5;
	long_1 = v_DumpFunction(unsigned_int_1,int_1,unsigned_int_2);

}
char v_DumpUpvalues( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double_1 = v_DumpByte(int_1,double_1);

	short_1 = short_2;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		char char_1 = 1;
		char char_3 = 1;
		double_1 = double_2 + double_2;
		char_3 = char_1 + char_2;
	}
	return char_2;
	short_1 = v_DumpInt(int_1,float_1);

}
unsigned int v_DumpConstants( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = v_DumpInteger(char_1,float_1);

	int_1 = v_DumpString(float_2,short_1);

	unsigned_int_2 = unsigned_int_2;
	short_1 = v_DumpInt(int_1,float_2);

	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_4 = 1;
		int_3 = int_2 + int_3;
		unsigned_int_2 = unsigned_int_1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
		double_1 = v_DumpByte(int_3,double_3);

		long_1 = v_DumpNumber(short_1,int_3);

		unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
		long_2 = long_2;
		char_1 = char_1 * char_1;
		long_3 = long_2 * long_1;
		int_3 = int_4 + int_5;
		int_5 = int_1 + int_2;
		long_4 = long_1;
		double_2 = double_2 * double_2;
		float_1 = float_2 + float_2;
	}
	return unsigned_int_3;
}
double v_DumpCode( double parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short_1 = v_DumpInt(int_1,float_1);

	long_2 = long_1 + long_1;
	int_1 = int_1 + int_2;
	return double_1;
}
short v_DumpInt( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	return short_1;
}
int v_DumpString( float parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char_1 = char_1 * char_1;
		short_2 = short_1 + short_1;
		if(1)
		{
			float_2 = float_1;
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "{") < 0)
		{
			double double_3 = 1;
			double_1 = v_DumpByte(int_1,double_2);

			double_2 = double_2 * double_3;
			double_2 = double_3 + double_3;
		}
		short_2 = short_1 + short_3;
	}
	return int_1;
}
long v_DumpFunction( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		long_1 = long_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "W") < 0)
	{
		double_1 = v_DumpByte(int_1,double_1);

		float_1 = float_1;
	}
	unsigned_int_1 = v_DumpConstants(long_1,double_1);

	float_3 = float_1 * float_2;
	double_1 = v_DumpCode(double_2,unsigned_int_1);

	double_1 = double_1;
	double_2 = double_1;
	long_3 = long_2 * long_2;
	long_3 = long_2 * long_2;
	int_4 = int_2 * int_3;
	int_5 = v_DumpString(float_2,short_1);

	short_1 = v_DumpInt(int_3,float_3);

	short_1 = short_2 * short_3;
	char_1 = char_1 + char_1;
	int_6 = v_DumpProtos(short_2,unsigned_int_2);

	char_2 = char_3;
	double_1 = v_DumpDebug(double_1,int_3);

	float_1 = float_1 + float_2;
	return long_3;
	char_3 = v_DumpUpvalues(unsigned_int_3,char_1);

}
long v_DumpNumber( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_1;
}
unsigned int v_DumpInteger( char parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 * double_2;
	return unsigned_int_1;
}
double v_DumpByte( int parameter_1,double parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
double v_DumpHeader( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	float float_2 = 1;
	double_1 = v_DumpByte(int_1,double_2);

	short_1 = short_1;
	double_1 = double_1 + double_3;
	char_1 = char_1 + char_1;
	int_3 = int_1 + int_2;
	long_1 = long_1 + long_2;
	unsigned_int_1 = v_DumpInteger(char_1,float_1);

	long_2 = v_DumpNumber(short_2,int_1);

	char_1 = char_2 + char_2;
	long_3 = long_3 + long_1;
	short_3 = short_3 * short_2;
	short_4 = short_4 + short_2;
	double_1 = double_4 * double_1;
	float_2 = float_1 + float_1;
	return double_1;
}
int v_luaU_dump( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_2 = short_1 + short_1;
	char_1 = char_1 * char_1;
	char_1 = char_2;
	double_1 = v_DumpByte(int_1,double_2);

	double_1 = double_1;
	long_1 = v_DumpFunction(unsigned_int_1,int_2,unsigned_int_2);

	double_2 = double_1 + double_3;
	double_2 = v_DumpHeader(char_3);

	int_3 = int_3 * int_2;
	double_2 = double_3 * double_3;
	long_1 = long_1 * long_2;
	unsigned_int_3 = unsigned_int_1;
	return int_2;
}
unsigned int v_cannot( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	return unsigned_int_2;
}
void v_luaF_initupvals( unsigned int parameter_1,float parameter_2)
{
	char char_1 = 1;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char_2 = char_1;
		unsigned_int_1 = unsigned_int_1;
		float_1 = float_2;
		double_2 = double_1 * double_1;
		double_3 = double_2 * double_2;
	}
}
long v_check_conflict( float parameter_1,long parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_3 = long_1 + long_2;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				float_1 = float_1 + float_1;
				int_1 = int_1 + int_1;
				char_1 = char_1 + char_1;
			}
			if(1)
			{
				float float_2 = 1;
				float_1 = float_1 + float_2;
				long_1 = long_1;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		v_luaK_reserveregs(int_1,int_2);

		unsigned_int_1 = unsigned_int_3;
		int_2 = int_3 * int_2;
		int_4 = int_2;
	}
	return long_4;
	int_3 = v_luaK_codeABC(double_1,double_2,int_2,int_2,int_1);

}
double v_assignment( short parameter_1,unsigned int parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_2;
	char controller4vul_368[3];
	fgets(controller4vul_368 ,3 ,stdin);
	if( strcmp( controller4vul_368, "sL") > 0)
	{
		int int_2 = 1;
		double double_3 = 1;
		float_1 = float_1;
		int_2 = int_1 + int_2;
		double_1 = double_1 * double_2;
		char controller4vul_369[3];
		fgets(controller4vul_369 ,3 ,stdin);
		if( strcmp( controller4vul_369, "8F") > 0)
		{
			unsigned_int_4 = v_suffixedexp(double_1,float_1,uni_para);

			char_1 = char_1 + char_2;
		}
		double_3 = double_3 + double_3;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char_1 = char_2 + char_1;
		short_1 = short_1 + short_1;
		short_3 = short_2 + short_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		}
		if(1)
		{
			float float_2 = 1;
			float_1 = float_1;
			float_2 = float_1 + float_1;
		}
	}
	double_2 = double_4 + double_2;
	int_1 = int_3 + int_3;
	return double_5;
}
double v_exprstat( short parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short_1 = short_1 * short_2;
	long_1 = long_1;
	double_1 = double_1 + double_1;
	char controller4vul_367[2];
	fgets(controller4vul_367 ,2 ,stdin);
	if( strcmp( controller4vul_367, ",") < 0)
	{
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_2 = v_assignment(short_3,unsigned_int_1,int_1,uni_para);

		double_3 = double_2 * double_3;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 * int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return double_2;
}
long v_retstat( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short_1 = short_1 + short_1;
	short_2 = short_1 * short_2;
	short_3 = short_2 + short_2;
	if(1)
	{
		int_1 = v_explist(int_2,unsigned_int_1);

		int_2 = int_2 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			char char_2 = 1;
			double_2 = double_1 * double_1;
			if(1)
			{
				short short_4 = 1;
				short_4 = short_2 + short_2;
				int_1 = v_block_follow(char_1,int_2);

				v_luaK_ret(unsigned_int_3,int_4,int_4);

				int_2 = int_3 + int_5;
			}
			double_3 = double_2;
			char_1 = char_2 + char_3;
		}
		if(1)
		{
			if(1)
			{
				int_5 = int_3 * int_1;
			}
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				int_3 = int_4 + int_1;
				v_luaK_exp2nextreg(float_1,unsigned_int_3);

				double_3 = double_3 * double_2;
				int_5 = v_luaK_exp2anyreg(long_1,char_3,-1 );

				long_2 = long_2 * long_3;
			}
		}
	}
	double_4 = double_1;
	v_testnext(short_3,int_2);

	double_1 = double_2 + double_5;
	return long_1;
}
int v_checkrepeated( int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
			char_1 = v_luaO_pushfstring(float_1,unsigned_int_1,int_1);

			char_2 = v_semerror(double_2,int_1);

			int_1 = int_2 * int_1;
		}
	}
	return int_2;
}
void v_labelstat( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char_3 = char_1 + char_2;
	int_1 = int_1 * int_1;
	int_1 = v_block_follow(char_1,int_1);

	int_2 = v_findgotos(long_1,short_1);

	double_1 = double_1;
	int_2 = v_luaK_getlabel();

	int_3 = v_skipnoopstat(char_1);

	char_4 = char_1;
	v_checknext(float_1,int_1);

	char_3 = char_5 * char_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	double_3 = double_3 * double_2;
	int_3 = v_checkrepeated(int_4,unsigned_int_2,unsigned_int_2);

	double_2 = v_newlabelentry(double_1,char_5,float_2,int_1,int_2);

}
void v_localstat( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned_int_1 = v_adjustlocalvars(long_1,int_1);

	double_2 = double_1 + double_2;
	if(1)
	{
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		double double_3 = 1;
		long_2 = long_1 * long_1;
		int_1 = v_new_localvar(int_1,float_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		int_1 = v_explist(int_1,unsigned_int_2);

		short_1 = short_1 + short_1;
		short_2 = v_str_checkname(double_2);

		int_2 = int_1 + int_2;
		v_testnext(short_2,int_1);

		float_3 = float_2 * float_2;
		long_3 = v_adjust_assign(short_2,int_1,int_3,float_3);

		short_2 = short_1 * short_1;
		double_3 = double_2 + double_2;
	}
}
long v_localfunc()
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int_1 = v_new_localvar(int_1,float_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	int_1 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_1 = v_str_checkname(double_2);

	unsigned_int_3 = v_adjustlocalvars(long_1,int_2);

	long_1 = v_getlocvar(char_1,int_1);

	long_2 = long_2 + long_1;
	char_2 = char_1;
	return long_2;
	long_2 = v_body(int_1,unsigned_int_1,int_3,int_2);

}
void v_luaK_storevar( short parameter_1,short parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int_1 = v_luaK_codeABC(double_1,double_2,int_1,int_1,int_2);

	float_1 = float_1 + float_2;
	short_1 = short_1 * short_2;
	double_3 = double_1 + double_3;
	int_2 = v_luaK_exp2anyreg(long_1,char_1,-1 );

	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_luaK_exp2RK(char_3,char_1,-1 );

	unsigned_int_2 = unsigned_int_2;
	double_1 = double_2 * double_2;
	short_2 = short_1 * short_2;
	char_1 = char_4 * char_5;
	double_2 = v_exp2reg(short_1,short_1,int_1,-1 );

	char_2 = char_6;
	long_2 = v_freeexp(int_2,double_4);

	char_1 = char_1 * char_4;
}
short v_funcname( unsigned int parameter_1,float parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	long_1 = long_1 + long_1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = v_singlevar(double_1,char_1);

	float_2 = v_fieldsel(char_1,double_2);

	long_3 = long_2 + long_2;
	return short_1;
}
int v_funcstat( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = v_body(int_1,unsigned_int_2,int_1,int_1);

	double_1 = double_1;
	v_luaK_fixline(float_1,int_1);

	int_2 = int_1;
	int_3 = int_2 * int_3;
	short_1 = v_funcname(unsigned_int_3,float_1);

	double_2 = double_2;
	v_luaK_storevar(short_2,short_3,unsigned_int_4);

	int_5 = int_1 * int_4;
	float_2 = float_2;
	return int_1;
	v_luaX_next(int_5);

}
long v_repeatstat( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_7 = 1;
	double double_4 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_3 = float_1 + float_2;
	double_2 = double_1 * double_1;
	v_luaX_next(int_1);

	int_1 = int_2 * int_2;
	int_4 = int_1 + int_3;
	int_1 = int_3 * int_3;
	double_2 = double_1 + double_2;
	int_1 = v_statlist(long_1,-1 );

	unsigned_int_1 = v_check_match(long_2,int_2,int_5,int_5);

	v_luaK_patchclose(int_5,int_6,int_5);

	float_1 = float_2 + float_2;
	int_4 = v_luaK_getlabel();

	float_2 = float_4 * float_2;
	double_3 = double_1 + double_3;
	v_luaK_patchlist(short_1,int_5,int_7);

	int_3 = int_3;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		v_enterblock(double_4,int_5,float_4);

		unsigned_int_1 = v_cond(float_3);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	double_1 = double_4 * double_4;
	short_2 = v_leaveblock(int_7);

	char_2 = char_1 * char_2;
	float_1 = float_4;
	return long_1;
}
void v_luaK_setreturns( long parameter_1,float parameter_2,int parameter_3)
{
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
		float float_1 = 1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1 + int_1;
		double_2 = double_1 * double_2;
		v_luaK_reserveregs(int_1,int_2);

		float_2 = float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2;
	}
}
long v_adjust_assign( short parameter_1,int parameter_2,int parameter_3,float parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	short_3 = short_1 + short_2;
	int_2 = int_1 + int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "-") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		long_1 = long_1;
		if(1)
		{
			float float_2 = 1;
			v_luaK_exp2nextreg(float_1,unsigned_int_2);

			float_1 = float_2 * float_1;
		}
	}
	if(1)
	{
		if(1)
		{
			float float_4 = 1;
			return long_2;
			float_4 = float_3;
		}
		if(1)
		{
			int int_5 = 1;
			v_luaK_nil(long_3,int_3,int_4);

			int_5 = int_3;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			long_1 = long_3 + long_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		v_luaK_reserveregs(int_2,int_2);

		double_2 = double_1 * double_2;
	}
	return long_1;
}
int v_forlist( char parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		short_1 = v_str_checkname(double_1);

		v_checknext(float_1,int_1);

		short_1 = short_2;
		long_1 = long_1 * long_1;
		float_1 = float_1 * float_2;
		float_1 = float_1;
		short_2 = short_3 * short_1;
		float_1 = float_2 * float_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	double_3 = double_2 + double_1;
	char_2 = char_1 + char_2;
	char_3 = char_2 + char_2;
	int_2 = v_new_localvar(int_1,float_1);

	long_1 = v_adjust_assign(short_4,int_1,int_3,float_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_4 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_1;
		if(1)
		{
			double_2 = double_2;
		}
	}
	short_3 = short_4 * short_2;
	v_luaK_checkstack(unsigned_int_1,int_5);

	char_4 = v_forbody(char_2,int_5,int_3,int_3,int_5);

	double_2 = double_3 * double_2;
	v_testnext(short_4,int_2);

	short_3 = short_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_2;
	int_4 = v_explist(int_2,unsigned_int_4);

}
char v_forbody( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	short short_1 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_4 = 1;
	short short_2 = 1;
	v_checknext(float_1,int_1);

	int_1 = v_luaK_codeABC(double_1,double_1,int_2,int_1,int_1);

	double_1 = double_1 * double_2;
	v_luaK_fixline(float_1,int_1);

	int_1 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 + float_1;
	double_2 = double_1;
	long_3 = long_1 + long_2;
	unsigned_int_1 = v_adjustlocalvars(long_2,int_3);

	long_3 = long_4 * long_5;
	char_3 = char_1 + char_2;
	long_2 = long_5 + long_4;
	v_block(double_1);

	double_2 = double_3 * double_1;
	int_1 = int_3 + int_1;
	char_2 = char_3 + char_1;
	if(1)
	{
		int_3 = int_1 + int_3;
	}
	if(1)
	{
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = v_luaK_jump();

		int_5 = int_3 * int_4;
		v_luaK_reserveregs(int_6,int_3);

		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		v_enterblock(double_2,int_6,float_2);

		float_1 = float_3;
	}
	short_1 = v_leaveblock(int_2);

	float_1 = float_4 + float_3;
	float_6 = float_2 * float_5;
	return char_3;
	v_luaK_patchtohere(double_4,int_5);

	v_luaK_patchlist(short_2,int_6,int_6);

}
int v_exp1( unsigned int parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	v_luaK_exp2nextreg(float_1,unsigned_int_1);

	double_1 = double_1 * double_1;
	int_1 = int_1 + int_1;
	float_2 = float_2 + float_3;
	float_4 = float_1 + float_2;
	int_1 = int_2 * int_1;
	char_3 = char_1 * char_2;
	return int_3;
	long_1 = v_expr(int_1,char_2,-1 );

}
short v_fornum( short parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_exp1(unsigned_int_2);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	v_checknext(float_1,int_2);

	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_2 = int_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	int_1 = int_1 * int_2;
	int_1 = int_1 + int_1;
	int_4 = v_luaK_codek(float_1,int_5,int_6);

	short_1 = short_1 + short_1;
	v_luaK_reserveregs(int_6,int_4);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		char_1 = v_forbody(char_2,int_4,int_2,int_1,int_2);

		double_3 = double_1 * double_3;
	}
	if(1)
	{
		int_1 = v_new_localvar(int_6,float_2);

		int_5 = int_1;
		int_1 = int_6 + int_6;
	}
	int_3 = v_luaK_intK(char_2,unsigned_int_2);

	double_3 = double_4;
	return short_2;
	v_testnext(short_2,int_6);

}
unsigned int v_forstat( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 * int_1;
	int_2 = int_1 * int_1;
	short_2 = short_1 + short_1;
	char_3 = char_1 * char_2;
	v_enterblock(double_1,int_1,float_1);

	v_luaX_next(int_2);

	double_1 = double_2 * double_3;
	unsigned_int_1 = v_check_match(long_1,int_3,int_1,int_1);

	int_3 = int_3 + int_2;
	short_1 = v_str_checkname(double_1);

	short_2 = v_leaveblock(int_2);

	double_3 = double_3 + double_2;
	short_3 = short_1 + short_3;
	short_1 = v_luaX_syntaxerror(double_1,char_1);

	char_1 = char_1 + char_4;
	int_3 = int_3;
	long_2 = long_3;
	int_4 = v_forlist(char_2,unsigned_int_2);

	float_1 = float_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	return unsigned_int_2;
	short_2 = v_fornum(short_3,unsigned_int_2,int_2);

}
unsigned int v_cond( float parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = v_expr(int_1,char_1,-1 );

	v_luaK_goiftrue(float_1,float_1);

	int_2 = int_1 * int_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	short_1 = short_2 * short_2;
	return unsigned_int_1;
}
double v_whilestat( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	float_3 = float_1 * float_2;
	short_3 = short_1 * short_2;
	int_1 = v_luaK_getlabel();

	v_block(double_1);

	char_1 = char_1;
	double_1 = double_1;
	v_luaK_patchtohere(double_1,int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	unsigned_int_3 = v_cond(float_2);

	v_enterblock(double_2,int_3,float_2);

	unsigned_int_2 = v_check_match(long_1,int_3,int_2,int_3);

	short_2 = short_2 * short_4;
	short_1 = v_leaveblock(int_3);

	int_2 = int_1 * int_3;
	int_4 = int_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_luaX_next(int_4);

	unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	int_3 = int_1 * int_1;
	v_checknext(float_3,int_1);

	double_1 = double_3 + double_1;
	int_2 = int_5;
	return double_4;
}
void v_block( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	int_1 = int_2;
	double_1 = double_1 * double_2;
	short_2 = short_1 + short_2;
	short_2 = v_leaveblock(int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 * float_2;
	v_enterblock(double_3,int_3,float_4);

	int_1 = v_statlist(long_1,-1 );

}
int v_skipnoopstat( char parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	long_1 = v_statement(int_1,-1 );

	long_1 = long_2 * long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
	}
	short_2 = short_1 * short_1;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	short_1 = short_2 + short_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		double_1 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return int_2;
}
float v_gotostat( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	float float_2 = 1;
	long_1 = long_1 + long_1;
	v_testnext(short_1,int_1);

	char_1 = v_findlabel(short_2,int_2);

	int_3 = int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		short_3 = v_str_checkname(double_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2 * long_2;
		double_1 = v_newlabelentry(double_1,char_2,float_1,int_3,int_3);

		double_3 = double_1 + double_2;
	}
	v_luaS_new(char_1,double_3);

	double_2 = double_3 + double_1;
	char_3 = char_3 + char_3;
	return float_2;
	v_luaX_next(int_2);

}
int v_codecomp( int parameter_1,double parameter_2,unsigned int parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	int int_5 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_2;
	int_3 = int_4;
	long_1 = long_1;
	int_4 = int_2;
	int_4 = int_4 * int_4;
	short_1 = short_2;
	int_4 = int_3 * int_3;
	double_1 = double_1;
	short_3 = short_3 + short_2;
	int_5 = int_3 + int_2;
	v_freeexps(double_2,unsigned_int_1,float_1);

	float_1 = float_2 * float_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return int_6;
	int_3 = v_luaK_exp2RK(char_1,char_2,-1 );

	short_1 = v_condjump(double_1,long_2,int_1,int_6,int_6);

}
void v_freeexps( double parameter_1,unsigned int parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_5 = 1;
	float_2 = float_1 + float_1;
	float_1 = float_3 + float_4;
	if(1)
	{
		double double_2 = 1;
		long_1 = v_freereg(double_1,int_1);

		float_4 = float_2 + float_5;
		double_2 = double_2 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		float_4 = float_5;
	}
}
void v_codebinexpval( short parameter_1,double parameter_2,long parameter_3,short parameter_4,int parameter_5,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int_1 = v_luaK_exp2RK(char_1,char_2,uni_para);

	unsigned_int_1 = unsigned_int_1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	char_4 = char_3 + char_4;
	char_6 = char_5 + char_3;
}
void v_luaK_posfix( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,float parameter_4,int parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	double double_7 = 1;
	long long_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 + short_1;
	float_1 = float_1 + float_2;
	short_2 = short_1 + short_1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	float_1 = float_2 * float_1;
	double_4 = double_1 * double_2;
	long_1 = long_1 + long_1;
	char controller4vul_375[3];
	fgets(controller4vul_375 ,3 ,stdin);
	if( strcmp( controller4vul_375, "+)") > 0)
	{
		float float_3 = 1;
		float float_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		v_codebinexpval(short_3,double_3,long_1,short_1,int_2,uni_para);

		float_4 = float_3 * float_2;
		double_6 = double_2 + double_5;
		double_2 = double_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_6;
		char_1 = char_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
		short_2 = short_2;
	}
	double_2 = double_7;
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	short_4 = short_5;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_4;
	long_2 = long_2 + long_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
}
void v_luaK_goiffalse( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float_3 = float_1 + float_2;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_jumponcond(float_1,float_3,int_1);

	short_1 = short_1;
	v_luaK_dischargevars(short_1,double_2);

	long_1 = long_2;
	double_4 = double_3 + double_1;
	v_luaK_patchtohere(double_1,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_2 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_4 * double_5;
	v_luaK_concat(float_3,int_3,int_2);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
}
short v_condjump( double parameter_1,long parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = v_luaK_jump();

	double_1 = double_2;
	return short_1;
	int_2 = v_luaK_codeABC(double_1,double_1,int_3,int_4,int_1);

}
char v_jumponcond( float parameter_1,float parameter_2,int parameter_3)
{
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	long long_4 = 1;
	int int_4 = 1;
	double double_3 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
			int int_1 = 1;
			int_1 = int_2;
		}
	}
	short_1 = v_condjump(double_1,long_1,int_2,int_3,int_2);

	v_discharge2anyreg(unsigned_int_1,char_1);

	long_1 = long_2 + long_3;
	double_1 = double_2;
	return char_1;
	long_4 = v_freeexp(int_4,double_3);

}
void v_luaK_goiftrue( float parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	short short_3 = 1;
	float float_4 = 1;
	float_2 = float_1 * float_1;
	v_luaK_dischargevars(short_1,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = v_negatecondition(char_1,double_2);

	double_1 = double_2 * double_2;
	char_1 = v_jumponcond(float_3,float_1,int_1);

	char_1 = char_1;
	v_luaK_patchtohere(double_3,int_1);

	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1;
	short_2 = short_1 * short_2;
	char_1 = char_1 + char_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	v_luaK_concat(float_2,int_2,int_1);

	short_3 = short_3;
	float_1 = float_2 * float_4;
	unsigned_int_2 = unsigned_int_4;
}
void v_luaK_infix( int parameter_1,double parameter_2,float parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_luaK_goiffalse(int_1,double_1);

	int_1 = int_1 * int_2;
	long_1 = v_tonumeral(long_2,double_2);

	double_3 = double_3 + double_1;
	int_1 = int_2 * int_3;
	int_4 = v_luaK_exp2RK(char_1,char_2,-1 );

	char_3 = char_1 + char_3;
	v_luaK_exp2nextreg(float_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 * short_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	short_3 = short_2 + short_1;
	v_luaK_goiftrue(float_1,float_1);

	int_2 = int_2;
}
int v_getbinopr( int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_explist( int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	v_luaK_exp2nextreg(float_1,unsigned_int_1);

	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int_2 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_1;
	}
	v_testnext(short_1,int_3);

	float_3 = float_2 + float_3;
	return int_1;
	long_1 = v_expr(int_3,char_1,-1 );

}
void v_funcargs( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
		double_1 = double_2;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_3;
	float_1 = float_1 + float_2;
	float_3 = float_2 + float_1;
	int_3 = int_1 * int_3;
	float_3 = float_2;
	double_3 = double_1 * double_3;
	double_1 = double_3 + double_4;
	int_3 = int_3 * int_3;
	int_4 = int_4 + int_1;
	if(1)
	{
		double_2 = double_4 + double_2;
	}
	char controller4vul_370[3];
	fgets(controller4vul_370 ,3 ,stdin);
	if( strcmp( controller4vul_370, "[z") > 0)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		char controller4vul_371[2];
		fgets(controller4vul_371 ,2 ,stdin);
		if( strcmp( controller4vul_371, "@") < 0)
		{
			unsigned_int_1 = v_constructor(long_1,unsigned_int_1,uni_para);

			double_3 = double_4 + double_2;
		}
		unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
	}
	long_2 = long_1 * long_1;
	int_1 = int_3;
	char_1 = char_1 * char_2;
}
void v_luaK_self( double parameter_1,int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = v_freeexp(int_1,double_1);

	char_2 = char_1 * char_1;
	char_1 = char_2 * char_3;
	v_luaK_reserveregs(int_2,int_1);

	double_1 = double_1;
	int_1 = int_2 * int_2;
	int_1 = v_luaK_exp2anyreg(long_2,char_1,-1 );

	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_4 = int_2 * int_3;
	float_2 = float_1 + float_1;
	int_3 = v_luaK_exp2RK(char_3,char_3,-1 );

	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	int_3 = v_luaK_codeABC(double_2,double_2,int_5,int_1,int_1);

}
void v_luaK_exp2anyregup( double parameter_1,long parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	int_1 = v_luaK_exp2anyreg(long_1,char_1,-1 );

}
float v_fieldsel( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_1 * double_1;
	v_luaK_exp2anyregup(double_1,long_1);

	double_1 = double_1 + double_2;
	long_1 = long_1 * long_1;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_luaX_next(int_1);

	v_luaK_indexed(unsigned_int_1,long_1,unsigned_int_3);

	long_1 = long_2 * long_2;
	return float_1;
	double_1 = v_checkname(int_2,unsigned_int_4);

}
void v_luaK_indexed( unsigned int parameter_1,long parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_1;
	int_1 = v_luaK_exp2RK(char_1,char_1,-1 );

	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1;
	int_2 = int_3 + int_1;
}
short v_searchupvalue( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return short_1;
}
int v_markupval( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_2;
	short_2 = short_1 + short_1;
	return int_2;
}
int v_searchvar( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return int_1;
	long_1 = v_getlocvar(char_1,int_1);

}
short v_singlevaraux( int parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_5 = 1;
	float float_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_6 = 1;
	float float_6 = 1;
	int int_7 = 1;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 + int_2;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 * float_1;
			if(1)
			{
				double double_1 = 1;
				int_1 = v_markupval(unsigned_int_1,int_4);

				double_2 = double_1 * double_2;
			}
		}
		if(1)
		{
			short_1 = v_searchupvalue(float_1,char_1);

			int_2 = int_3 + int_4;
			if(1)
			{
				float float_4 = 1;
				float float_5 = 1;
				int_3 = int_2;
				if(1)
				{
				}
				int_5 = v_init_exp(unsigned_int_1,float_3,int_4);

				float_4 = float_5;
			}
			char_2 = v_newupvalue(double_2,long_1,unsigned_int_1);

			unsigned_int_1 = unsigned_int_1;
		}
	}
	return short_1;
	int_6 = v_searchvar(float_6,int_7);

}
float v_singlevar( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	float float_2 = 1;
	short_1 = v_singlevaraux(int_1,float_1,int_1,int_2);

	int_4 = int_3 + int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_5 = unsigned_int_3;
		long_2 = long_1 * long_2;
		short_1 = v_str_checkname(double_1);

		v_luaK_indexed(unsigned_int_6,long_2,unsigned_int_2);

		int_3 = int_3 + int_2;
		long_3 = v_codestring(long_1,int_4,unsigned_int_5);

		short_4 = short_2 + short_3;
	}
	return float_2;
}
float v_primaryexp( float parameter_1,float parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	short_1 = v_luaX_syntaxerror(double_1,char_1);

	double_2 = double_1 + double_1;
	v_luaX_next(int_1);

	long_1 = v_expr(int_1,char_1,-1 );

	int_3 = int_2 + int_2;
	float_1 = v_singlevar(double_3,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = v_check_match(long_2,int_2,int_3,int_4);

	v_luaK_dischargevars(short_2,double_2);

	double_2 = double_3 * double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	float_2 = float_2 + float_1;
	double_3 = double_2 + double_4;
	return float_1;
}
unsigned int v_suffixedexp( double parameter_1,float parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_funcargs(unsigned_int_1,unsigned_int_2,int_1,uni_para);

	float_3 = float_1 + float_2;
	char_1 = char_1 * char_2;
	int_3 = int_2 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		float float_4 = 1;
		float float_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		long long_3 = 1;
		double double_4 = 1;
		long long_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_6 = 1;
		long_1 = long_1 + long_1;
		float_3 = float_4 * float_5;
		int_4 = int_1 + int_1;
		int_4 = int_1 + int_5;
		int_2 = int_2 * int_6;
		long_2 = long_1 + long_1;
		double_2 = double_1 + double_2;
		unsigned_int_2 = unsigned_int_3;
		double_3 = double_1 * double_1;
		long_1 = long_1 * long_3;
		double_3 = double_2 * double_4;
		unsigned_int_1 = unsigned_int_3;
		long_4 = long_3 + long_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		short_1 = short_1 * short_2;
		float_1 = float_2 * float_6;
	}
	return unsigned_int_2;
}
float v_undefgoto( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double_1 = double_2;
	char_1 = v_luaO_pushfstring(float_1,unsigned_int_1,int_1);

	int_2 = int_3;
	char_2 = v_semerror(double_3,int_1);

	int_1 = int_2 * int_1;
	return float_1;
}
char v_findlabel( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		v_luaK_patchclose(int_1,int_1,int_2);

		char_1 = char_1;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			if(1)
			{
				char_2 = v_closegoto(int_2,int_3,int_3);

				double_4 = double_2 + double_3;
			}
			double_4 = double_3 + double_3;
		}
	}
	return char_3;
}
unsigned int v_movegotosout( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	return unsigned_int_1;
	v_luaK_patchclose(int_1,int_1,int_2);

	char_1 = v_findlabel(short_1,int_3);

}
long v_removevars( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	int int_5 = 1;
	float float_3 = 1;
	short short_3 = 1;
	char char_5 = 1;
	int_2 = int_1 + int_2;
	int_2 = int_3 * int_4;
	int_1 = int_2 * int_2;
	char_2 = char_1 + char_2;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	int_2 = int_3 * int_2;
	double_1 = double_1;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_4;
	long_1 = long_1;
	float_2 = float_1 + float_1;
	double_2 = double_2 + double_2;
	double_2 = double_3;
	char_4 = char_3 * char_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	long_2 = v_getlocvar(char_4,int_5);

	long_1 = long_1 + long_2;
	char_4 = char_4 * char_2;
	float_3 = float_3 * float_1;
	short_1 = short_1 * short_3;
	if(1)
	{
		char_5 = char_2 + char_3;
	}
	char_5 = char_5 * char_3;
	return long_2;
}
void v_luaK_patchlist( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		float float_2 = 1;
		long_1 = v_patchlistaux(float_1,int_1,int_2,int_1,int_2);

		float_1 = float_2 + float_2;
		double_1 = double_1 * double_3;
	}
	v_luaK_patchtohere(double_3,int_3);

}
char v_semerror( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 + int_2;
	short_1 = v_luaX_syntaxerror(double_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return char_1;
}
char v_closegoto( int parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	long_1 = v_getlocvar(char_1,int_1);

	float_2 = float_1 * float_2;
	float_2 = float_1 + float_2;
	char_1 = v_semerror(double_1,int_2);

	float_1 = float_2 * float_1;
	char_2 = v_luaO_pushfstring(float_3,unsigned_int_1,int_2);

	double_2 = double_1 + double_1;
	short_1 = short_1 * short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "v.") > 0)
	{
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char_4 = char_3 + char_2;
		unsigned_int_2 = unsigned_int_3;
		double_4 = double_2 + double_3;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
	}
	v_luaK_patchlist(short_2,int_3,int_2);

	unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
	return char_4;
}
int v_findgotos( long parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_1;
	return int_1;
	char_1 = v_closegoto(int_2,int_2,int_2);

}
double v_newlabelentry( double parameter_1,char parameter_2,float parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	int_1 = int_1 + int_2;
	double_1 = double_4 + double_2;
	long_1 = long_1 * long_1;
	short_2 = short_1 + short_1;
	short_2 = short_2 + short_3;
	return double_1;
}
double v_breaklabel( float parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int_1 = v_findgotos(long_1,short_1);

	int_2 = int_3;
	double_1 = v_newlabelentry(double_2,char_1,float_1,int_1,int_4);

	short_2 = short_1 * short_2;
	v_luaS_new(char_1,double_3);

	int_2 = int_1 * int_5;
	return double_2;
}
void v_luaK_patchclose( int parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_3 = 1;
		int_3 = int_1 * int_2;
		long_1 = long_1 + long_3;
	}
	int_4 = v_getjump(float_1,int_4);

}
short v_leaveblock( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short short_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	long long_5 = 1;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		int_1 = v_luaK_jump();

		float_3 = float_1 + float_2;
		int_3 = int_1 + int_2;
		v_luaK_patchtohere(double_1,int_4);

		int_2 = int_1 + int_3;
	}
	if(1)
	{
		float_3 = v_undefgoto(long_1,char_1);

		short_1 = short_3;
	}
	int_3 = int_2 + int_4;
	unsigned_int_3 = v_movegotosout(long_2,double_2);

	short_4 = short_4 * short_3;
	v_luaK_patchclose(int_4,int_4,int_2);

	char_2 = char_2 + char_3;
	long_4 = long_3 + long_1;
	double_3 = v_breaklabel(float_1);

	int_3 = int_2 * int_3;
	if(1)
	{
		long_4 = long_1 * long_5;
	}
	if(1)
	{
		short_1 = short_3 * short_1;
	}
	return short_3;
	long_5 = v_removevars(unsigned_int_2,int_3);

}
void v_luaK_ret( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	int_1 = v_luaK_codeABC(double_3,double_2,int_2,int_2,int_2);

}
long v_close_func( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_1;
	short_3 = short_1 * short_2;
	int_1 = int_1 * int_2;
	short_1 = short_4 * short_3;
	unsigned_int_2 = unsigned_int_3;
	double_3 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 * double_3;
	v_luaK_ret(unsigned_int_1,int_3,int_3);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	long_1 = long_1 + long_1;
	float_1 = float_2;
	int_1 = int_4 * int_3;
	short_5 = v_leaveblock(int_4);

	int_3 = int_5 * int_3;
	int_5 = int_4 + int_5;
	double_2 = double_2;
	double_3 = double_1;
	long_1 = long_1 + long_1;
	int_5 = int_1 * int_6;
	double_2 = double_1 + double_3;
	return long_1;
}
long v_codeclosure( long parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_luaK_codeABx(int_2,long_1,int_3,float_1);

	v_luaK_exp2nextreg(float_1,unsigned_int_1);

	int_1 = int_1;
	int_1 = int_4;
	int_1 = v_init_exp(unsigned_int_2,float_2,int_4);

	double_2 = double_1 * double_2;
	return long_1;
}
short v_registerlocalvar( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	long_1 = long_1 + long_1;
	int_4 = int_2 * int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float_2 = float_2 * float_1;
		if(1)
		{
			int int_5 = 1;
			int_3 = int_5 + int_5;
			unsigned_int_2 = unsigned_int_2;
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				long_3 = long_2 * long_3;
			}
		}
		char_1 = char_1 * char_2;
		int_3 = int_2;
	}
	return short_1;
}
int v_new_localvar( int parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	short_1 = v_registerlocalvar(short_2,int_1);

	short_3 = short_3 + short_2;
	float_1 = v_checklimit(short_1,int_2,int_2,long_1);

	short_1 = short_3 * short_2;
	char_1 = char_1 * char_1;
	int_3 = int_2 * int_1;
	double_1 = double_1 * double_1;
	char_2 = char_1;
	return int_3;
}
unsigned int v_parlist( float parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	char char_3 = 1;
	short_1 = v_str_checkname(double_1);

	double_1 = double_1 * double_1;
	v_luaX_next(int_1);

	v_luaK_reserveregs(int_1,int_1);

	char_2 = char_1 * char_1;
	v_testnext(short_2,int_1);

	unsigned_int_1 = v_adjustlocalvars(long_1,int_1);

	short_3 = short_1 * short_2;
	return unsigned_int_1;
	int_1 = v_new_localvar(int_1,float_1);

	short_4 = v_luaX_syntaxerror(double_1,char_3);

}
long v_getlocvar( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_2;
	float_3 = float_1 * float_2;
	return long_1;
}
unsigned int v_adjustlocalvars( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return unsigned_int_1;
	long_1 = v_getlocvar(char_1,int_1);

}
short v_addprototype( unsigned int parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_1 = double_1 + double_1;
		v_luaF_newproto(int_1);

		float_1 = float_2;
	}
	return short_1;
}
long v_body( int parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	short short_4 = 1;
	long long_5 = 1;
	long_2 = long_1 + long_2;
	double_1 = v_open_func(char_1,double_2,long_1);

	unsigned_int_1 = unsigned_int_1;
	int_1 = v_statlist(long_3,-1 );

	long_3 = long_2 + long_2;
	double_3 = double_3 * double_2;
	int_3 = int_2 + int_1;
	int_3 = int_3 + int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char_1 = char_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	long_1 = long_3 * long_1;
	short_1 = v_addprototype(unsigned_int_3);

	v_checknext(float_1,int_4);

	char_3 = char_2 + char_3;
	unsigned_int_4 = v_check_match(long_3,int_4,int_4,int_2);

	long_1 = v_codeclosure(long_3,double_2);

	float_2 = float_3;
	long_3 = long_3 * long_3;
	long_2 = v_close_func(double_2);

	int_5 = int_1 * int_5;
	short_1 = short_2 * short_3;
	unsigned_int_5 = v_adjustlocalvars(long_4,int_1);

	unsigned_int_3 = v_parlist(float_3);

	short_4 = short_3;
	return long_5;
}
int v_luaO_int2fb( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 * int_1;
	long_2 = long_1 + long_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = double_1 + double_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	short_2 = short_1 + short_2;
	int_2 = int_3 + int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	return int_2;
}
long v_lastlistfield( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "6") > 0)
	{
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		v_luaK_setlist(unsigned_int_1,int_1,int_2,int_3);

		int_2 = int_1 * int_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
		char_2 = char_1 + char_2;
	}
	return long_1;
	v_luaK_exp2nextreg(float_1,unsigned_int_3);

}
unsigned int v_check_match( long parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			short_1 = v_luaX_syntaxerror(double_1,char_1);

			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			float_1 = v_error_expected(unsigned_int_2,int_1);

			double_1 = double_1;
		}
	}
	return unsigned_int_2;
	v_testnext(short_2,int_1);

	char_2 = v_luaO_pushfstring(float_1,unsigned_int_3,int_1);

	double_1 = v_luaX_token2str(long_1,int_1);

}
void v_testnext( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "_3") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
	}
	v_luaX_next(int_1);

}
int v_nilK( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_1;
	double_1 = double_1 + double_1;
	return int_1;
	int_2 = v_addk(unsigned_int_2,double_1,double_2,-1 );

}
short v_boolK( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	int_1 = v_addk(unsigned_int_1,double_1,double_1,-1 );

	double_1 = double_1 + double_1;
	return short_1;
}
int v_luaK_exp2RK( char parameter_1,char parameter_2,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	double_3 = double_2 + double_2;
	long_1 = long_1 * long_2;
	double_3 = double_4 * double_3;
	double_2 = double_1 + double_4;
	double_4 = double_4 + double_4;
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_376[3];
	fgets(controller4vul_376 ,3 ,stdin);
	if( strcmp( controller4vul_376, "7|") > 0)
	{
		v_luaK_exp2val(int_1,short_1,uni_para);

	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "e") > 0)
	{
		float float_3 = 1;
		float_1 = float_1 + float_3;
	}
	short_2 = short_1 * short_3;
	return int_1;
}
void v_luaK_exp2val( int parameter_1,short parameter_2,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char controller4vul_377[2];
	fgets(controller4vul_377 ,2 ,stdin);
	if( strcmp( controller4vul_377, "u") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		int_1 = v_luaK_exp2anyreg(long_1,char_1,uni_para);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 * int_1;
	}
}
unsigned int v_yindex( short parameter_1,char parameter_2,int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = v_expr(int_1,char_1,uni_para);

	short_1 = short_1 + short_1;
	float_3 = float_1 + float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	return unsigned_int_4;
}
short v_str_checkname( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 * long_2;
	double_2 = double_1 + double_1;
	double_1 = double_2 * double_1;
	return short_1;
	int_1 = v_check(short_1,int_1);

	v_luaX_next(int_1);

}
double v_checkname( int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = v_codestring(long_1,int_1,unsigned_int_1);

	short_1 = v_str_checkname(double_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return double_2;
}
void v_recfield( double parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	int int_5 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_2;
	int_3 = int_4;
	char_1 = char_1;
	char controller4vul_373[2];
	fgets(controller4vul_373 ,2 ,stdin);
	if( strcmp( controller4vul_373, "j") < 0)
	{
		unsigned_int_1 = v_yindex(short_1,char_2,uni_para);

		double_1 = double_1 + double_2;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		long_1 = long_2 * long_1;
	}
	int_2 = int_4 * int_1;
	char_3 = char_1 + char_2;
	short_2 = short_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_4;
	int_5 = int_2 * int_2;
}
unsigned int v_listfield( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = v_checklimit(short_1,int_1,int_2,long_1);

	char_2 = char_1 * char_1;
	double_1 = double_1 + double_2;
	char_3 = char_4;
	float_4 = float_2 * float_3;
	return unsigned_int_1;
	long_1 = v_expr(int_1,char_2,-1 );

}
int v_luaX_lookahead( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	short_2 = short_1 + short_2;
	v_llex(unsigned_int_1,int_1);

	short_4 = short_3 + short_1;
	return int_2;
}
float v_field( short parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char controller4vul_372[3];
	fgets(controller4vul_372 ,3 ,stdin);
	if( strcmp( controller4vul_372, "ln") > 0)
	{
		double double_2 = 1;
		v_recfield(double_1,char_1,uni_para);

		double_2 = double_3;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	short_3 = short_1 * short_2;
	float_1 = float_1 + float_2;
	double_4 = double_3;
	int_3 = int_1 + int_1;
	long_2 = long_1 + long_2;
	return float_2;
}
void v_luaK_setlist( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_4 = 1;
	long_1 = v_codeextraarg(double_1,int_1);

	short_3 = short_1 * short_2;
	int_3 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short_4 = short_2 * short_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		char_3 = char_1 + char_2;
		float_1 = float_1;
	}
	if(1)
	{
		short_2 = short_1;
	}
	long_2 = long_2 * long_2;
	int_1 = v_luaK_codeABC(double_2,double_2,int_1,int_4,int_4);

	short_4 = v_luaX_syntaxerror(double_3,char_4);

}
char v_closelistfield( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	v_luaK_setlist(unsigned_int_1,int_1,int_2,int_3);

	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_2 = int_4 * int_1;
		float_2 = float_1 + float_2;
	}
	return char_1;
	v_luaK_exp2nextreg(float_3,unsigned_int_1);

}
float v_error_expected( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short_1 = v_luaX_syntaxerror(double_1,char_1);

	char_1 = v_luaO_pushfstring(float_1,unsigned_int_1,int_1);

	double_2 = v_luaX_token2str(long_1,int_2);

	double_3 = double_3 * double_4;
	return float_1;
}
int v_check( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float_1 = v_error_expected(unsigned_int_1,int_1);

		short_1 = short_2;
	}
	return int_2;
}
void v_checknext( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = v_check(short_1,int_2);

	v_luaX_next(int_3);

	float_2 = float_1 * float_1;
	double_3 = double_1 + double_2;
}
unsigned int v_constructor( long parameter_1,unsigned int parameter_2,int uni_para)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = v_field(short_1,int_1,uni_para);

	return unsigned_int_1;
}
int v_luaK_stringK( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = v_addk(unsigned_int_1,double_1,double_1,-1 );

	int_1 = int_1;
	short_3 = short_1 * short_2;
	return int_1;
}
long v_codestring( long parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = v_init_exp(unsigned_int_1,float_1,int_1);

	short_3 = short_1 * short_2;
	return long_1;
	int_1 = v_luaK_stringK(int_2,int_3);

}
long v_simpleexp( long parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_3 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_5 = 1;
	int int_7 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_8 = 1;
	float_1 = float_1 * float_2;
	int_1 = v_init_exp(unsigned_int_1,float_2,int_2);

	float_1 = float_2;
	int_3 = v_luaK_codeABC(double_1,double_1,int_1,int_1,int_4);

	long_2 = long_1 + long_1;
	int_1 = int_2;
	long_1 = v_codestring(long_1,int_5,unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1;
	double_2 = double_2 * double_3;
	short_1 = short_1 + short_1;
	unsigned_int_3 = v_constructor(long_3,unsigned_int_2,-1 );

	int_2 = int_3 * int_6;
	int_6 = int_6 + int_5;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_2 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_3;
	double_2 = double_4;
	unsigned_int_5 = unsigned_int_3;
	long_4 = long_1 * long_4;
	unsigned_int_3 = v_suffixedexp(double_5,float_3,-1 );

	short_3 = short_1 + short_2;
	double_7 = double_6 * double_3;
	long_4 = long_5;
	v_luaX_next(int_3);

	int_3 = int_7 * int_4;
	long_1 = v_body(int_3,unsigned_int_3,int_2,int_3);

	float_5 = float_4 * float_5;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	int_1 = int_8 * int_8;
	return long_3;
}
unsigned int v_removevalues( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		double_1 = v_patchtestreg(unsigned_int_1,int_1,int_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	return unsigned_int_2;
	int_2 = v_getjump(float_1,int_2);

}
void v_discharge2anyreg( unsigned int parameter_1,char parameter_2)
{
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	if(1)
	{
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_1 = int_1 * int_1;
		v_luaK_reserveregs(int_2,int_3);

		short_2 = short_1 + short_2;
	}
	int_3 = v_discharge2reg(float_1,long_1,int_3,-1 );

}
unsigned int v_negatecondition( char parameter_1,double parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long_1 = v_getjumpcontrol(double_1,int_1);

	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_2 * long_1;
	return unsigned_int_1;
}
short v_codenot( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_2;
	long_1 = v_freeexp(int_3,double_3);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_1 * short_1;
	v_discharge2anyreg(unsigned_int_4,char_1);

	int_1 = int_1 * int_1;
	int_3 = int_3 + int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_2 = v_removevalues(double_1,int_3);

	unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_1;
	float_1 = float_2;
	v_luaK_dischargevars(short_2,double_3);

	long_2 = long_3;
	unsigned_int_6 = v_negatecondition(char_1,double_3);

	double_1 = double_3 * double_3;
	int_2 = v_luaK_codeABC(double_3,double_2,int_4,int_4,int_2);

	char_1 = char_1;
	int_1 = int_3 * int_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_6;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_6;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_3;
	return short_1;
}
void v_luaK_fixline( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_2;
}
void v_luaK_checkstack( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char_2 = char_1 * char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "cc") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			char char_3 = 1;
			char_3 = char_2 * char_1;
		}
		unsigned_int_1 = unsigned_int_1;
	}
	short_1 = v_luaX_syntaxerror(double_1,char_2);

}
void v_luaK_reserveregs( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long_1 = long_1;
	float_3 = float_1 + float_2;
	v_luaK_checkstack(unsigned_int_1,int_1);

}
long v_freeexp( int parameter_1,double parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	if(1)
	{
		int int_2 = 1;
		long_1 = v_freereg(double_1,int_1);

		int_2 = int_1 * int_2;
	}
	return long_2;
}
void v_luaK_exp2nextreg( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	v_luaK_reserveregs(int_1,int_1);

	double_2 = double_1 * double_2;
	long_1 = v_freeexp(int_2,double_1);

	double_1 = v_exp2reg(short_1,short_1,int_2,-1 );

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	v_luaK_dischargevars(short_3,double_2);

}
void v_luaK_patchtohere( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_2;
	v_luaK_concat(float_1,int_1,int_1);

	double_1 = double_1;
	int_2 = v_luaK_getlabel();

}
int v_luaK_getlabel()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_1 = short_2;
	return int_1;
}
void v_code_loadbool( short parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = v_luaK_codeABC(double_1,double_2,int_2,int_2,int_1);

	int_2 = int_2 * int_3;
	int_2 = v_luaK_getlabel();

}
int v_luaK_jump()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_2;
	v_luaK_concat(float_1,int_2,int_3);

	double_1 = double_1;
	char_1 = char_1;
	int_1 = int_1;
	short_1 = short_1 + short_1;
	return int_3;
}
void v_need_value( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = v_getjump(float_1,int_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
	}
	long_1 = v_getjumpcontrol(double_1,int_1);

}
void v_luaK_concat( float parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_2;
	int_3 = int_1 + int_2;
	v_fixjump(int_4,int_3,int_5);

	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_2 * double_2;
	double_4 = double_3 * double_2;
	double_5 = double_5;
	float_3 = float_3 + float_4;
	int_1 = v_getjump(float_2,int_6);

	char_1 = char_1 * char_2;
}
int v_luaK_intK( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int_1 = v_addk(unsigned_int_1,double_1,double_2,-1 );

	char_2 = char_1 * char_2;
	char_3 = char_3;
	double_2 = double_2 * double_3;
	return int_1;
}
int v_addk( unsigned int parameter_1,double parameter_2,double parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_1;
	float_1 = float_1 * float_1;
	short_2 = short_3 + short_4;
	char controller4vul_383[3];
	fgets(controller4vul_383 ,3 ,stdin);
	if( strcmp( controller4vul_383, "3]") > 0)
	{
		float_1 = v_luaH_set(double_1,float_2,short_1,uni_para);

	}
	double_2 = double_2;
	double_1 = double_2 * double_1;
	return int_1;
}
float v_luaK_numberK( unsigned int parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_1 = v_addk(unsigned_int_1,double_1,double_2,uni_para);

	double_1 = double_1 + double_1;
	int_2 = int_1 + int_1;
	return float_1;
}
long v_codeextraarg( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	v_luaK_code(short_1,float_1);

	double_3 = double_1 * double_2;
	return long_1;
}
int v_luaK_codeABx( int parameter_1,long parameter_2,int parameter_3,float parameter_4)
{
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	v_luaK_code(short_1,float_1);

	char_1 = char_1;
	float_2 = float_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
int v_luaK_codek( float parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int_1 = v_luaK_codeABx(int_2,long_1,int_2,float_1);

		char_3 = char_1 * char_2;
		float_3 = float_1 + float_2;
	}
	return int_1;
	long_1 = v_codeextraarg(double_1,int_3);

}
void v_luaK_nil( long parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_3 = double_1 + double_2;
	double_2 = double_1 + double_2;
	if(1)
	{
		double_2 = double_3;
		if(1)
		{
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double_4 = double_3 + double_2;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				if(1)
				{
					long long_1 = 1;
					long long_2 = 1;
					long long_3 = 1;
					int_1 = v_luaK_codeABC(double_5,double_2,int_1,int_1,int_2);

					long_3 = long_1 + long_2;
				}
				if(1)
				{
					float float_1 = 1;
					float float_2 = 1;
					float_2 = float_1 + float_1;
				}
				char_2 = char_1 * char_1;
				int_3 = int_2 * int_2;
			}
		}
	}
	int_3 = int_1 + int_2;
}
int v_discharge2reg( float parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_5 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short_1 = short_1 + short_2;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	int_4 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2 + double_2;
	float_2 = float_1 * float_1;
	double_1 = double_2;
	char_1 = char_1 * char_1;
	int_5 = int_4 + int_1;
	float_1 = float_2 + float_1;
	int_5 = int_4 * int_2;
	char controller4vul_382[2];
	fgets(controller4vul_382 ,2 ,stdin);
	if( strcmp( controller4vul_382, "M") > 0)
	{
		double double_3 = 1;
		float_3 = v_luaK_numberK(unsigned_int_1,long_1,uni_para);

		double_2 = double_3 + double_3;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	int_3 = int_6;
	int_1 = int_3 * int_6;
	double_1 = double_2 + double_1;
	return int_7;
}
double v_exp2reg( short parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_1 = double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	char controller4vul_380[2];
	fgets(controller4vul_380 ,2 ,stdin);
	if( strcmp( controller4vul_380, "|") < 0)
	{
		int int_2 = 1;
		long long_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_2 = 1;
		int_2 = int_1 * int_1;
		double_3 = double_1 + double_1;
		char_1 = char_1;
		char controller4vul_381[2];
		fgets(controller4vul_381 ,2 ,stdin);
		if( strcmp( controller4vul_381, "A") > 0)
		{
			int int_3 = 1;
			char char_2 = 1;
			int_1 = v_discharge2reg(float_1,long_1,int_1,uni_para);

			double_2 = double_1 + double_3;
			int_2 = int_3 * int_2;
			char_2 = char_2 + char_2;
			char_1 = char_2 * char_3;
		}
		long_3 = long_1 * long_2;
		int_5 = int_2 * int_4;
		float_1 = float_1 + float_2;
	}
	long_3 = long_1 * long_4;
	char_3 = char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	return double_3;
}
void v_luaK_setoneret( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		int int_1 = 1;
		char_1 = char_2;
		short_1 = short_2;
		int_1 = int_1;
	}
	if(1)
	{
		short_1 = short_2 * short_2;
		char_1 = char_2;
	}
}
long v_freereg( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_1 * double_1;
	}
	return long_1;
}
void v_fixjump( int parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_3 = 1;
	short_1 = short_1;
	float_1 = float_1 * float_2;
	long_2 = long_1 + long_2;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		short_1 = v_luaX_syntaxerror(double_1,char_1);

		long_4 = long_3 + long_1;
	}
	float_3 = float_3 + float_2;
}
long v_getjumpcontrol( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
}
double v_patchtestreg( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = v_getjumpcontrol(double_3,int_1);

		long_1 = long_2 + long_2;
	}
	return double_4;
}
int v_getjump( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
long v_patchlistaux( float parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	int_1 = v_getjump(float_1,int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_2;
	long_2 = long_1 + long_2;
	char_1 = char_1 + char_1;
	short_1 = short_2;
	return long_1;
	double_1 = v_patchtestreg(unsigned_int_3,int_1,int_3);

	v_fixjump(int_1,int_2,int_4);

}
float v_dischargejpc( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	long_1 = v_patchlistaux(float_1,int_1,int_1,int_1,int_1);

	int_1 = int_1 + int_1;
	return float_1;
}
void v_luaK_code( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_1;
	long_1 = long_1;
	int_2 = int_1 * int_2;
	char_1 = char_1;
	int_1 = int_2 + int_2;
	long_2 = long_1 * long_1;
	float_1 = v_dischargejpc(unsigned_int_1);

}
int v_luaK_codeABC( double parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_luaK_code(short_1,float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	short_2 = short_2 * short_3;
	return int_1;
}
void v_luaK_dischargevars( short parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_6 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 + char_1;
	double_1 = double_2;
	int_1 = int_1 + int_2;
	short_1 = short_3;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_2;
		int_3 = v_luaK_codeABC(double_1,double_3,int_2,int_2,int_1);

		int_1 = int_4 + int_5;
	}
	if(1)
	{
		long_1 = v_freereg(double_1,int_5);

		double_1 = double_3 + double_2;
		int_4 = int_5 + int_3;
	}
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	v_luaK_setoneret(char_1,int_3);

	char_2 = char_3 * char_1;
	char_3 = char_3;
	int_3 = int_6;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
}
int v_luaK_exp2anyreg( long parameter_1,char parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float_1 = float_1 + float_2;
	char controller4vul_378[2];
	fgets(controller4vul_378 ,2 ,stdin);
	if( strcmp( controller4vul_378, "`") < 0)
	{
		char controller4vul_379[3];
		fgets(controller4vul_379 ,3 ,stdin);
		if( strcmp( controller4vul_379, ",1") > 0)
		{
			double_1 = v_exp2reg(short_1,short_2,int_1,uni_para);

		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "c") < 0)
		{
			char char_1 = 1;
			char_1 = char_1;
		}
	}
	long_1 = long_1 * long_1;
	return int_2;
}
char v_codeunexpval( float parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long_1 = v_freeexp(int_1,double_1);

	float_2 = float_1 + float_1;
	float_1 = float_2;
	double_3 = double_2 * double_2;
	v_luaK_fixline(float_1,int_2);

	double_1 = double_4 + double_1;
	int_2 = v_luaK_exp2anyreg(long_1,char_1,-1 );

	int_2 = v_luaK_codeABC(double_4,double_3,int_3,int_4,int_5);

	int_1 = int_2 + int_3;
	return char_1;
}
long v_numarith( short parameter_1,int parameter_2,float parameter_3,long parameter_4)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	char_1 = char_1 + char_1;
	short_1 = short_2;
	short_3 = short_2 + short_1;
	return long_1;
}
int v_intarith( long parameter_1,int parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = v_luaV_mod(long_1,double_2,float_1);

	short_1 = short_1;
	return int_1;
	float_2 = v_luaV_div(long_1,long_2,int_1);

	char_1 = v_luaV_shiftl(char_2,float_1);

}
void v_luaO_arith( float parameter_1,int parameter_2,long parameter_3,int parameter_4,long parameter_5)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1;
	long_1 = v_numarith(short_1,int_1,float_1,long_2);

	double_3 = double_1 + double_2;
	if(1)
	{
		int_2 = v_intarith(long_2,int_1,double_1,int_2);

		char_2 = char_1 * char_2;
	}
	if(1)
	{
		long_3 = long_1 + long_3;
	}
	v_luaT_trybinTM(char_1,char_2,float_2,long_4,short_1);

	int_3 = int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 + float_1;
	}
	if(1)
	{
		short_1 = short_1;
	}
	long_4 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_2 * short_3;
	}
	if(1)
	{
		long_4 = long_3 * long_3;
	}
	if(1)
	{
		double double_4 = 1;
		double_1 = double_2 + double_4;
	}
	long_3 = long_2;
	long_2 = long_2 + long_1;
}
long v_validop( int parameter_1,float parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char_3 = char_1 + char_2;
	return long_1;
}
long v_tonumeral( long parameter_1,double parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return long_1;
}
char v_constfolding( char parameter_1,int parameter_2,double parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	long_1 = v_validop(int_1,float_1,short_1);

	char_3 = char_1 * char_2;
	if(1)
	{
		short short_2 = 1;
		double_2 = double_1 + double_1;
		long_2 = v_tonumeral(long_3,double_3);

		v_luaO_arith(float_2,int_1,long_2,int_1,long_2);

		short_1 = short_2;
	}
	if(1)
	{
		long long_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long_1 = long_4 * long_3;
		if(1)
		{
		}
		double_1 = double_3 + double_2;
		float_1 = float_3 + float_4;
	}
	return char_2;
}
void v_luaK_prefix( unsigned int parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float_3 = float_1 * float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "SU") < 0)
	{
		short_1 = short_1 * short_1;
	}
	char_1 = v_codeunexpval(float_1,long_1,int_1,int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	int_3 = int_2 + int_3;
	long_1 = long_1 * long_1;
	char_1 = v_constfolding(char_1,int_1,double_1,long_1);

	short_1 = v_codenot(double_2,unsigned_int_1);

}
long v_getunopr( int parameter_1)
{
	long long_1 = 1;
	return long_1;
}
int v_subexpr( char parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char controller4vul_374[2];
	fgets(controller4vul_374 ,2 ,stdin);
	if( strcmp( controller4vul_374, "s") < 0)
	{
		v_luaK_posfix(unsigned_int_1,unsigned_int_2,double_1,float_1,int_1,uni_para);

	}
	int_1 = int_1 * int_1;
	return int_2;
}
long v_expr( int parameter_1,char parameter_2,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_1 = v_subexpr(char_1,char_1,int_1,uni_para);

	double_1 = double_2;
	return long_1;
}
short v_test_then_block( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	float float_5 = 1;
	v_enterblock(double_1,int_1,float_1);

	long_1 = long_1 * long_2;
	v_luaX_next(int_1);

	v_luaK_goiffalse(int_1,double_2);

	short_2 = short_1 * short_2;
	double_1 = double_2;
	float_1 = float_2 + float_1;
	v_luaK_goiftrue(float_1,float_2);

	short_2 = short_1 + short_2;
	long_2 = long_3 + long_4;
	v_checknext(float_3,int_2);

	double_3 = double_1 * double_3;
	if(1)
	{
		double double_5 = 1;
		int_3 = v_luaK_jump();

		double_4 = double_4 * double_5;
		v_luaK_patchtohere(double_6,int_3);

		unsigned_int_1 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		int_3 = int_2 + int_2;
		if(1)
		{
			int_1 = v_statlist(long_1,-1 );

			float_2 = float_2 * float_1;
		}
		if(1)
		{
			double double_7 = 1;
			double_4 = double_7 + double_6;
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_3 = v_block_follow(char_1,int_3);

		char_1 = char_2 * char_1;
		float_4 = v_gotostat(long_1,int_2);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		int_4 = int_1 + int_4;
	}
	short_2 = short_3;
	long_2 = v_expr(int_5,char_2,-1 );

	long_4 = long_4 * long_4;
	if(1)
	{
		int_6 = v_skipnoopstat(char_3);

		v_luaK_concat(float_5,int_5,int_1);

		double_3 = double_4 + double_3;
	}
	float_1 = float_4;
	return short_2;
	short_2 = v_leaveblock(int_6);

}
double v_ifstat( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	v_block(double_1);

	unsigned_int_3 = v_check_match(long_1,int_1,int_1,int_2);

	char_2 = char_1 + char_2;
	v_testnext(short_1,int_2);

	unsigned_int_2 = unsigned_int_3;
	return double_1;
	short_2 = v_test_then_block(unsigned_int_1,int_1);

	v_luaK_patchtohere(double_2,int_1);

}
unsigned int v_enterlevel( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 + int_2;
	float_1 = v_checklimit(short_1,int_1,int_4,long_1);

	int_2 = int_3;
	double_2 = double_1 * double_1;
	return unsigned_int_1;
}
long v_statement( int parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	int int_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	short short_8 = 1;
	short short_9 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double_1 = double_1 * double_2;
	float_2 = float_1 + float_2;
	short_2 = short_1 + short_1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_2 + short_2;
	double_2 = double_2 * double_3;
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	int_3 = int_1 * int_2;
	int_4 = int_4;
	char_1 = char_1;
	short_4 = short_3 + short_3;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_5;
	int_3 = int_3 * int_4;
	short_5 = short_2 + short_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	int_1 = int_2 + int_2;
	long_3 = long_1 + long_2;
	char controller4vul_366[2];
	fgets(controller4vul_366 ,2 ,stdin);
	if( strcmp( controller4vul_366, "a") < 0)
	{
		double_2 = v_exprstat(short_3,uni_para);

		int_4 = int_2;
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "nW") > 0)
	{
		double_4 = double_1 + double_1;
	}
	double_5 = double_4 + double_1;
	float_3 = float_1 * float_3;
	int_2 = int_5 + int_3;
	short_8 = short_6 + short_7;
	short_6 = short_1 + short_9;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	double_3 = double_2 + double_3;
	int_4 = int_2 * int_1;
	short_8 = short_2 * short_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
	char_4 = char_2 + char_3;
	long_5 = long_4 * long_3;
	long_6 = long_4 + long_5;
	return long_6;
}
int v_block_follow( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
int v_statlist( long parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_3 = int_1 * int_2;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char controller4vul_364[3];
	fgets(controller4vul_364 ,3 ,stdin);
	if( strcmp( controller4vul_364, "uW") > 0)
	{
		float_1 = float_2 + float_1;
		char controller4vul_365[3];
		fgets(controller4vul_365 ,3 ,stdin);
		if( strcmp( controller4vul_365, "]<") < 0)
		{
			long_1 = v_statement(int_2,uni_para);

		}
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_1 * double_3;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
		}
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_1 * int_4;
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
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		float_2 = float_1;
		float_3 = float_3 + float_1;
		int_5 = int_3 * int_2;
	}
	return int_1;
}
float v_check_next2( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
	}
	return float_2;
}
long v_read_numeral( char parameter_1,double parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	long long_5 = 1;
	long_1 = v_save(unsigned_int_1,int_1);

	long_1 = long_2;
	double_1 = v_luaO_str2num(unsigned_int_2,unsigned_int_2,-1 );

	short_1 = short_1 * short_2;
	short_2 = short_1 + short_2;
	char_1 = v_lexerror(double_1,unsigned_int_1,int_2);

	double_2 = double_3;
	int_1 = int_1 + int_3;
	if(1)
	{
		float_1 = v_check_next2(float_2,long_2);

		int_1 = int_3 + int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2 + char_1;
		}
		if(1)
		{
			char char_3 = 1;
			char_3 = char_3 + char_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		}
	}
	short_2 = short_1 * short_2;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_3 + short_2;
	}
	if(1)
	{
		int_4 = int_3;
	}
	if(1)
	{
		int int_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int_5 = int_4 + int_2;
		long_4 = long_3 + long_1;
	}
	return long_5;
}
char v_readdecesc( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_4 = 1;
	char_3 = char_1 * char_2;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_2 = long_1 + long_1;
		short_3 = short_1 * short_2;
	}
	double_2 = double_1 + double_2;
	unsigned_int_1 = v_esccheck(double_1,int_1,double_1);

	double_3 = double_2;
	return char_4;
}
short v_readutf8esc( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	int_1 = v_gethexa(short_1);

	int_3 = int_2 + int_3;
	if(1)
	{
		unsigned_int_1 = v_esccheck(double_1,int_3,double_2);

		double_2 = double_1 + double_1;
	}
	return short_1;
	int_3 = v_luaO_hexavalue(int_4);

}
char v_utf8esc( long parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long_1 = v_save(unsigned_int_1,int_1);

	long_2 = long_1 + long_1;
	long_1 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		int_2 = v_luaO_utf8esc(char_1,float_1);

		short_1 = v_readutf8esc(float_1);

		long_4 = long_2 + long_3;
	}
	return char_2;
}
unsigned int v_esccheck( double parameter_1,int parameter_2,double parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			char_1 = v_lexerror(double_1,unsigned_int_1,int_1);

			double_3 = double_2 * double_3;
		}
		int_4 = int_2 + int_3;
	}
	return unsigned_int_2;
}
int v_gethexa( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = v_esccheck(double_1,int_1,double_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	return int_1;
	int_1 = v_luaO_hexavalue(int_1);

}
unsigned int v_readhexaesc( char parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_2;
	return unsigned_int_3;
	int_1 = v_gethexa(short_3);

}
void v_read_string( char parameter_1,int parameter_2,long parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char_1 = v_lexerror(double_1,unsigned_int_1,int_1);

	unsigned_int_2 = v_readhexaesc(char_2);

	char_2 = v_utf8esc(long_1);

	double_1 = v_inclinenumber(short_1);

	unsigned_int_1 = v_esccheck(double_1,int_1,double_1);

	char_3 = v_readdecesc(char_2);

	long_2 = v_save(unsigned_int_3,int_1);

	v_luaX_newstring(short_2,char_3,int_2);

}
int v_check_next1( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
	}
	return int_1;
}
void v_luaX_newstring( short parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_1 = v_luaS_newlstr(int_1,int_1,int_2);

	double_3 = double_1 + double_2;
	char_3 = char_1 * char_2;
	long_2 = long_1 + long_2;
	short_1 = short_1 * short_2;
	char_3 = char_3 + char_3;
	if(1)
	{
		double double_4 = 1;
		char char_4 = 1;
		float_1 = v_luaH_set(double_3,float_1,short_1,-1 );

		double_3 = double_3 + double_4;
		char_4 = char_3 * char_3;
	}
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	char_1 = char_2 + char_2;
}
char v_read_long_string( double parameter_1,double parameter_2,int parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	char char_5 = 1;
	long_1 = v_save(unsigned_int_1,int_1);

	short_1 = short_1;
	char_1 = v_lexerror(double_1,unsigned_int_2,int_1);

	double_2 = v_skip_sep(int_2);

	long_2 = long_2 + long_2;
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 * float_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double_3 = v_inclinenumber(short_1);

		char_3 = char_1 * char_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_3 = v_luaO_pushfstring(float_2,unsigned_int_1,int_1);

		int_3 = int_1 * int_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			short short_2 = 1;
			short_2 = short_2 + short_2;
			v_luaX_newstring(short_3,char_4,int_4);

			double_5 = double_4 * double_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_7 = double_4 * double_6;
		float_4 = float_3 + float_2;
		if(1)
		{
			double double_8 = 1;
			double_8 = double_3 + double_5;
		}
		int_3 = int_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			short short_4 = 1;
			short_4 = short_1 * short_1;
		}
	}
	if(1)
	{
		int int_5 = 1;
		int_3 = int_1 * int_5;
	}
	return char_5;
}
double v_skip_sep( int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
double v_inclinenumber( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_2;
	}
	return double_1;
	char_2 = v_lexerror(double_1,unsigned_int_1,int_3);

}
void v_llex( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	long long_3 = 1;
	short short_2 = 1;
	int_1 = int_2;
	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_2 = v_lexerror(double_1,unsigned_int_3,int_2);

	float_1 = float_1;
	double_2 = v_skip_sep(int_1);

	char_2 = v_read_long_string(double_1,double_3,int_3);

	v_read_string(char_1,int_4,long_1);

	long_2 = long_1 * long_1;
	double_1 = v_inclinenumber(short_1);

	int_4 = int_3 * int_4;
	int_6 = int_5 + int_2;
	int_6 = int_2 + int_5;
	if(1)
	{
		float_1 = float_1 + float_1;
		double_3 = double_4 + double_4;
	}
	long_1 = v_read_numeral(char_1,double_3);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	int_2 = v_check_next1(long_3,int_2);

	v_luaX_newstring(short_2,char_1,int_3);

	double_4 = double_1 + double_2;
}
void v_luaX_next( int parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		v_llex(unsigned_int_1,int_1);

		int_3 = int_2 * int_1;
		double_3 = double_2 * double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
}
double v_luaX_token2str( long parameter_1,int parameter_2)
{
	float float_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return double_1;
	char_3 = v_luaO_pushfstring(float_2,unsigned_int_1,int_1);

}
long v_save( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	long long_3 = 1;
	short_1 = short_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int_3 = int_1 * int_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char_1 = v_lexerror(double_1,unsigned_int_1,int_1);

			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
		int_3 = int_2 * int_2;
		long_1 = long_2;
	}
	int_3 = int_2 * int_4;
	return long_3;
}
double v_txtToken( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long_1 = v_save(unsigned_int_1,int_1);

	double_1 = v_luaX_token2str(long_2,int_2);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	return double_2;
	char_1 = v_luaO_pushfstring(float_1,unsigned_int_2,int_1);

}
char v_lexerror( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double_1 = v_txtToken(float_1,int_1);

	float_1 = v_luaD_throw(unsigned_int_1,int_1);

	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_2 = v_luaO_pushfstring(float_2,unsigned_int_1,int_2);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	float_2 = float_3 * float_2;
	return char_1;
	char_2 = v_luaG_addinfo(float_2,long_1,long_1,int_2);

}
short v_luaX_syntaxerror( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short_1 = short_1 * short_1;
	return short_1;
	char_1 = v_lexerror(double_1,unsigned_int_1,int_1);

}
short v_errorlimit( double parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_2;
	short_1 = v_luaX_syntaxerror(double_2,char_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 * long_2;
	char_1 = v_luaO_pushfstring(float_1,unsigned_int_4,int_1);

	float_2 = float_1 + float_2;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
	double_2 = double_1 * double_3;
	return short_2;
}
float v_checklimit( short parameter_1,int parameter_2,int parameter_3,long parameter_4)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	return float_1;
	short_1 = v_errorlimit(double_2,int_1,char_1);

}
char v_newupvalue( double parameter_1,long parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_2 = double_1 * double_1;
	return char_1;
	float_1 = v_checklimit(short_1,int_1,int_2,long_1);

}
int v_init_exp( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	char_3 = char_1 + char_2;
	short_2 = short_1 * short_1;
	return int_1;
}
void v_enterblock( double parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_2;
	long_1 = long_2;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 + double_1;
	double_2 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	float_2 = float_1 * float_1;
}
double v_open_func( char parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	double_3 = double_1 + double_2;
	float_2 = float_1 + float_1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_4 = double_2;
	short_3 = short_1 * short_2;
	int_1 = int_2;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	int_3 = int_1 * int_3;
	double_2 = double_3 * double_1;
	double_2 = double_3;
	v_enterblock(double_3,int_2,float_3);

	float_2 = float_2 + float_1;
	long_2 = long_1;
	return double_4;
}
short v_mainfunc( char parameter_1,double parameter_2,int uni_para)
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	int_1 = v_statlist(long_1,uni_para);

	float_2 = float_1 * float_2;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_1;
	short_2 = short_1 + short_1;
	long_2 = long_1;
	double_3 = double_2 * double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_2;
	char_4 = char_1 * char_3;
	return short_3;
}
void v_luaX_setinput( long parameter_1,long parameter_2,int parameter_3,char parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 + short_2;
	double_2 = double_1 * double_1;
	double_2 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_2;
	short_2 = short_2;
	int_3 = int_3;
	long_1 = long_1 + long_1;
	short_4 = short_1 + short_3;
}
int v_luaY_parser( float parameter_1,double parameter_2,char parameter_3,double parameter_4,short parameter_5,int parameter_6,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	short short_5 = 1;
	short_1 = v_mainfunc(char_1,double_1,uni_para);

	long_2 = long_1 + long_2;
	int_2 = int_1 * int_2;
	double_1 = double_2;
	int_1 = int_3 + int_3;
	int_2 = int_2 * int_4;
	float_2 = float_1 + float_2;
	float_4 = float_3 + float_2;
	short_3 = short_2 * short_2;
	double_3 = double_2 * double_3;
	short_4 = short_3 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_3;
	char_1 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	short_5 = short_4 * short_2;
	long_1 = long_2;
	short_5 = short_5;
	return int_2;
}
long v_LoadDebug( short parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	long_2 = long_3 + long_3;
	int_2 = int_1 * int_2;
	short_2 = short_1 * short_1;
	short_3 = v_LoadString(short_3);

	int_2 = int_2 + int_1;
	double_1 = double_1 + double_1;
	unsigned_int_2 = v_LoadInt(double_2);

	int_2 = int_3 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_4 = int_5;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short_1 = short_2 + short_3;
		float_2 = float_1 * float_2;
		short_5 = short_4 + short_5;
	}
	short_1 = short_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	return long_2;
}
int v_LoadProtos( long parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int_1 = int_2;
	float_1 = v_LoadFunction(int_2,double_1,char_1);

	char_2 = char_2 * char_1;
	long_2 = long_1 * long_2;
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_luaF_newproto(int_1);

		float_1 = float_1 + float_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_1 = int_1;
		long_2 = long_2 + long_2;
	}
	return int_1;
	unsigned_int_1 = v_LoadInt(double_2);

}
int v_LoadUpvalues( unsigned int parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = char_1 * char_2;
	unsigned_int_1 = v_LoadInt(double_1);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	long_3 = long_1 + long_2;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		short short_3 = 1;
		double_1 = double_1;
		short_3 = short_1 * short_2;
	}
	return int_1;
	unsigned_int_5 = v_LoadByte(short_2);

}
float v_LoadConstants( double parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_1;
	float_2 = v_LoadNumber(float_1);

	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = v_LoadByte(short_1);

		double_2 = double_1 + double_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		char char_4 = 1;
		double_1 = double_1 + double_3;
		v_LoadInteger(double_3);

		double_4 = double_1 + double_1;
		char_1 = char_1 * char_2;
		short_1 = v_LoadString(short_2);

		char_3 = char_3;
		int_1 = int_1;
		int_3 = int_2 + int_2;
		int_4 = int_3 + int_4;
		int_2 = int_4 * int_3;
		int_1 = int_5 + int_2;
		double_3 = double_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		float_2 = float_3 + float_2;
		unsigned_int_3 = v_LoadInt(double_1);

		char_2 = char_4 + char_3;
	}
	return float_2;
}
void v_LoadCode( unsigned int parameter_1,char parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = v_LoadInt(double_1);

	char_1 = char_1 * char_1;
}
unsigned int v_LoadInt( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_3 = char_1 * char_2;
	int_1 = int_1 * int_2;
	return unsigned_int_1;
}
short v_LoadString( short parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float_1 = v_luaS_newlstr(int_1,int_2,int_1);

	float_2 = float_2 * float_2;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1;
		unsigned_int_1 = v_LoadByte(short_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_1;
		int_2 = int_1 * int_1;
	}
	return short_1;
	float_1 = v_luaS_createlngstrobj(char_1,int_2);

}
float v_LoadFunction( int parameter_1,double parameter_2,char parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short_1 = v_LoadString(short_1);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		float_1 = v_LoadConstants(double_1,long_1);

		int_1 = int_1 + int_2;
	}
	int_2 = int_3 * int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_1 + long_2;
	int_2 = v_LoadUpvalues(unsigned_int_4,short_1);

	unsigned_int_5 = unsigned_int_1;
	short_1 = short_1 + short_1;
	float_2 = float_1 + float_2;
	int_2 = int_3 + int_2;
	int_3 = v_LoadProtos(long_3,unsigned_int_3);

	long_4 = v_LoadDebug(short_2,unsigned_int_5);

	double_1 = double_1 * double_2;
	char_1 = char_1;
	unsigned_int_4 = v_LoadByte(short_1);

	int_5 = int_3 * int_4;
	return float_3;
	unsigned_int_6 = v_LoadInt(double_1);

	v_LoadCode(unsigned_int_6,char_1);

}
void v_luaF_newproto( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_1;
	int_4 = int_3 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	double_1 = double_1 + double_1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_3 * int_4;
	long_1 = v_luaC_newobj(short_1,int_4,short_1);

	double_1 = double_1 + double_2;
	long_1 = long_1 * long_2;
	double_3 = double_1 + double_1;
	char_1 = char_3 * char_3;
	double_4 = double_3 + double_2;
	unsigned_int_3 = unsigned_int_2;
	double_4 = double_5 + double_2;
	long_3 = long_2 * long_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	long_5 = long_4 + long_5;
}
float v_LoadNumber( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_2;
	return float_1;
}
void v_LoadInteger( double parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
unsigned int v_LoadByte( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 * int_2;
	return unsigned_int_1;
}
float v_error( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_1 * int_1;
	return float_1;
	char_1 = v_luaO_pushfstring(float_2,unsigned_int_1,int_2);

	float_2 = v_luaD_throw(unsigned_int_1,int_2);

}
char v_checkliteral( float parameter_1,long parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float_2 = float_1 + float_1;
	double_1 = double_1 + double_1;
	float_2 = v_error(float_1,char_1);

	double_1 = double_2 * double_3;
	if(1)
	{
		double_1 = double_2;
	}
	return char_2;
}
float v_checkHeader( float parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_1 = v_checkliteral(float_1,long_1,unsigned_int_1);

	int_1 = int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ",*") < 0)
	{
		v_LoadInteger(double_1);

		double_2 = double_1 + double_1;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	unsigned_int_1 = v_LoadByte(short_2);

	short_3 = short_3 + short_4;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_3 = v_LoadNumber(float_4);

	short_4 = short_2 * short_1;
	float_5 = v_error(float_3,char_1);

	double_2 = double_3 * double_4;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		double double_5 = 1;
		double_4 = double_5;
	}
	return float_5;
}
char v_luaU_undump( double parameter_1,double parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_4 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_5 = 1;
	short short_2 = 1;
	char char_3 = 1;
	float_1 = v_checkHeader(float_2);

	v_luaD_inctop(long_1);

	int_3 = int_1 * int_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		long_1 = long_3 + long_2;
	}
	if(1)
	{
		float_3 = v_luaF_newLclosure(unsigned_int_1,int_1);

		unsigned_int_2 = v_LoadByte(short_1);

		v_luaF_newproto(int_3);

		double_1 = double_1;
	}
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_1 = int_4 + int_1;
	double_3 = double_2;
	unsigned_int_3 = unsigned_int_3;
	float_3 = float_3 * float_4;
	double_2 = double_3 * double_3;
	int_4 = int_3 * int_1;
	float_2 = v_LoadFunction(int_2,double_4,char_1);

	char_1 = char_2;
	float_1 = float_5 * float_3;
	short_1 = short_2 + short_1;
	return char_3;
}
unsigned int v_checkmode( float parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		short_3 = short_1 * short_2;
	}
	return unsigned_int_1;
	char_1 = v_luaO_pushfstring(float_1,unsigned_int_3,int_1);

	float_2 = v_luaD_throw(unsigned_int_3,int_2);

}
long v_f_parser( double parameter_1,int uni_para)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	long_1 = long_1 * long_1;
	float_1 = float_2;
	char_1 = char_1 + char_1;
	char controller4vul_363[3];
	fgets(controller4vul_363 ,3 ,stdin);
	if( strcmp( controller4vul_363, "KK") < 0)
	{
		int_1 = v_luaY_parser(float_2,double_1,char_1,double_1,short_1,int_1,uni_para);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_1 = double_1 * double_1;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "E") > 0)
	{
		double double_3 = 1;
		double_2 = double_2 + double_3;
		unsigned_int_1 = unsigned_int_1;
	}
	double_1 = double_4 * double_2;
	unsigned_int_1 = unsigned_int_2;
	return long_1;
}
int v_luaD_protectedparser( char parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	long_1 = v_f_parser(double_1,uni_para);

	int_2 = int_1 + int_1;
	char_1 = char_1 + char_1;
	int_1 = int_1 + int_2;
	long_3 = long_2 * long_2;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 * float_1;
	double_1 = double_2 * double_3;
	int_2 = int_3 * int_3;
	char_2 = char_3;
	long_4 = long_1 + long_3;
	double_2 = double_1 + double_1;
	long_4 = long_2 + long_5;
	double_2 = double_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_1;
	int_4 = int_2 + int_4;
	return int_1;
}
long v_reader( int parameter_1,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	return long_1;
}
void v_luaZ_init( float parameter_1,short parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	char_1 = char_1 + char_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	long_2 = v_reader(int_1,unsigned_int_5);

}
double v_lua_load( unsigned int parameter_1,short parameter_2,int parameter_4,float parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_5 = 1;
	int_1 = int_2;
	int_3 = int_2 * int_2;
	double_1 = double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	short_1 = short_1;
	double_3 = double_2 + double_2;
	char controller4vul_361[3];
	fgets(controller4vul_361 ,3 ,stdin);
	if( strcmp( controller4vul_361, "*V") < 0)
	{
		int int_4 = 1;
		int_4 = int_2 + int_2;
		char controller4vul_362[3];
		fgets(controller4vul_362 ,3 ,stdin);
		if( strcmp( controller4vul_362, "6u") > 0)
		{
			unsigned int unsigned_int_3 = 1;
			double double_4 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int_3 = v_luaD_protectedparser(char_1,unsigned_int_2,int_5,long_1,uni_para);

			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
			int_1 = int_4 * int_1;
			double_3 = double_3 * double_4;
			short_3 = short_2 + short_1;
		}
	}
	char_1 = char_1 * char_1;
	return double_5;
}
float v_combine( short parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	char controller4vul_359[3];
	fgets(controller4vul_359 ,3 ,stdin);
	if( strcmp( controller4vul_359, "Vb") < 0)
	{
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_1;
		char controller4vul_360[3];
		fgets(controller4vul_360 ,3 ,stdin);
		if( strcmp( controller4vul_360, "D{") > 0)
		{
			long long_1 = 1;
			double_1 = v_lua_load(unsigned_int_1,short_1,int_1,float_1,uni_para);

			long_1 = long_2;
		}
		char_3 = char_1 + char_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_1 = int_2 * int_3;
			if(1)
			{
				long long_3 = 1;
				long_2 = long_2 + long_3;
			}
		}
		char_3 = char_2 + char_4;
	}
	return float_1;
}
void v_luaD_growstack( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	v_luaD_reallocstack(short_1,int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
		float_1 = float_1 * float_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1;
		}
		if(1)
		{
			double double_3 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double_2 = double_3 + double_3;
			long_2 = long_2 * long_3;
		}
		if(1)
		{
			int_2 = int_2 + int_1;
		}
	}
	float_1 = v_luaD_throw(unsigned_int_4,int_2);

	char_1 = v_luaG_runerror(unsigned_int_2,float_2,unsigned_int_1);

}
long v_growstack( long parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	v_luaD_growstack(char_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1;
	return long_1;
}
int v_lua_checkstack( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = v_luaD_rawrunprotected(int_1,float_1);

	int_1 = int_1 + int_2;
	long_1 = v_growstack(long_1);

	char_1 = char_1 + char_1;
	long_2 = long_1 + long_1;
	char_1 = char_1 * char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 + double_1;
		}
		if(1)
		{
			int_2 = int_2 * int_2;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_1;
	}
	short_2 = short_1 + short_2;
	return int_1;
}
float v_index2addr( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
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
		int_1 = int_1 * int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		char char_1 = 1;
		int_2 = int_1 * int_2;
		char_1 = char_1 + char_1;
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char_1 = char_1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		}
	}
	return float_1;
}
long v_lua_touserdata( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return long_1;
	float_1 = v_index2addr(int_1,int_1);

}
short v_pmain( char parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_5 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short_1 = short_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2 + int_3;
		if(1)
		{
			double_3 = double_1 * double_2;
		}
	}
	short_1 = short_1 + short_1;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_1 + int_2;
	}
	char controller4vul_357[2];
	fgets(controller4vul_357 ,2 ,stdin);
	if( strcmp( controller4vul_357, "X") < 0)
	{
		double double_4 = 1;
		double_2 = double_2 + double_4;
		char controller4vul_358[3];
		fgets(controller4vul_358 ,3 ,stdin);
		if( strcmp( controller4vul_358, "hY") < 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			float_1 = v_combine(short_1,int_5,uni_para);

			char_1 = char_1 + char_2;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_3 = double_2;
		double_3 = double_3 + double_1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "zk") > 0)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_1;
		}
	}
	return short_2;
}
int v_fatal( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 + double_2;
	return int_1;
}
long v_panic( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_1;
	return long_1;
}
char v_lua_atpanic( float parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_2;
	float_1 = float_2;
	float_4 = float_2 + float_3;
	long_1 = long_2;
	return char_1;
}
char v_l_alloc(long parameter_3,unsigned int parameter_4)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 * int_2;
	}
	if(1)
	{
	}
	return char_1;
}
char v_freestack( float parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_1;
	return char_2;
	v_luaE_freeCI(char_1);

}
char v_dothecall( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int_2 = int_1 * int_2;
	v_luaD_callnoyield(unsigned_int_1,short_1,int_1);

	char_1 = char_1 * char_1;
	return char_1;
}
long v_correctstack( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_2;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 + int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		float_1 = float_1 + float_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
	}
	return long_1;
}
void v_luaD_reallocstack( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	char_1 = char_1;
	float_1 = float_1 * float_2;
	long_1 = v_correctstack(char_1,char_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_1 + double_1;
	}
	long_3 = long_2 + long_1;
	long_3 = long_2 * long_4;
	double_3 = double_2 * double_1;
}
void v_luaE_shrinkCI( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	short_1 = short_2;
	if(1)
	{
		if(1)
		{
		}
	}
	int_1 = int_1 + int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_3 = char_1 + char_2;
		double_1 = double_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
		}
	}
	int_3 = int_2 * int_2;
	int_3 = int_3 + int_2;
}
void v_luaE_freeCI( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_6 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	long long_7 = 1;
	double double_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_7 = 1;
	int int_11 = 1;
	short short_8 = 1;
	short short_9 = 1;
	int int_12 = 1;
	long_1 = long_2;
	long_5 = long_3 * long_4;
	int_2 = int_1 * int_1;
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	long_2 = long_5;
	long_5 = long_6;
	if(1)
	{
		double_1 = double_1;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		short_3 = short_4;
		double_2 = double_2 + double_3;
		int_2 = int_3 + int_1;
	}
	if(1)
	{
		int_1 = int_4;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		long_2 = long_5 * long_1;
		char_1 = char_1 + char_1;
	}
	long_3 = long_4 + long_3;
	double_4 = double_4 + double_2;
	double_3 = double_1 + double_3;
	int_1 = int_1 * int_1;
	float_1 = float_1 * float_1;
	int_5 = int_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		short_5 = short_3 * short_5;
		double_1 = double_3 * double_1;
		short_4 = short_1 + short_1;
		unsigned_int_3 = unsigned_int_3;
		short_4 = short_5 * short_1;
		long_1 = long_7 + long_6;
		if(1)
		{
			double_5 = double_4 * double_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char_3 = char_2 * char_1;
				if(1)
				{
					unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
				}
				long_3 = long_2 * long_6;
				float_3 = float_1 + float_2;
			}
		}
		if(1)
		{
			int_7 = int_1 + int_6;
		}
	}
	if(1)
	{
		long_2 = long_4 * long_4;
	}
	long_6 = long_1 + long_1;
	if(1)
	{
		int int_8 = 1;
		double double_6 = 1;
		if(1)
		{
			long_1 = long_4;
		}
		if(1)
		{
			int_8 = int_4 + int_1;
		}
		double_1 = double_6;
		int_8 = int_5 + int_8;
		char_3 = char_2 + char_1;
		if(1)
		{
			long_5 = long_4 + long_7;
			if(1)
			{
				double_3 = double_6 * double_4;
			}
			if(1)
			{
				short_1 = short_5 * short_6;
			}
			if(1)
			{
				int_1 = int_5 + int_6;
			}
			if(1)
			{
				char_5 = char_1 + char_4;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
			}
			if(1)
			{
				double_6 = double_7 * double_8;
			}
		}
		if(1)
		{
			double_9 = double_8 + double_9;
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_6;
	}
	int_3 = int_9 + int_4;
	if(1)
	{
		double_1 = double_9 + double_9;
	}
	if(1)
	{
		double double_10 = 1;
		char_4 = char_4 * char_4;
		if(1)
		{
			if(1)
			{
				long_4 = long_5 * long_4;
			}
			if(1)
			{
				short short_7 = 1;
				short_5 = short_7 + short_1;
			}
		}
		double_2 = double_3 * double_10;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char_5 = char_2 + char_2;
		}
		unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
		if(1)
		{
			char_1 = char_3;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				long_1 = long_3 * long_4;
			}
			char_5 = char_3 * char_2;
		}
		if(1)
		{
			double_9 = double_10 * double_1;
		}
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			if(1)
			{
				unsigned_int_6 = unsigned_int_8 * unsigned_int_2;
			}
			if(1)
			{
				double_7 = double_4;
			}
		}
		double_3 = double_7 * double_5;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			float float_4 = 1;
			float_2 = float_2 * float_4;
		}
		unsigned_int_6 = unsigned_int_9 * unsigned_int_8;
		if(1)
		{
			char char_6 = 1;
			int_4 = int_10 + int_9;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				double double_11 = 1;
				double_2 = double_9 + double_11;
			}
			char_1 = char_6 * char_3;
		}
		if(1)
		{
			char_2 = char_4 * char_2;
		}
	}
	if(1)
	{
		long long_8 = 1;
		short_6 = short_6;
		long_8 = long_1 + long_4;
		double_9 = double_7 * double_4;
		double_2 = double_8;
		unsigned_int_10 = unsigned_int_4 * unsigned_int_1;
		char_2 = char_7 * char_1;
		int_5 = int_5;
		long_6 = long_4 + long_4;
	}
	if(1)
	{
		long_3 = long_4 + long_5;
		unsigned_int_4 = unsigned_int_10 + unsigned_int_8;
	}
	if(1)
	{
		int_9 = int_4 * int_4;
		double_3 = double_9 + double_8;
	}
	if(1)
	{
		long_2 = long_7 + long_1;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_3;
	}
	if(1)
	{
		int_11 = int_6 * int_11;
	}
	if(1)
	{
		int_10 = int_2 + int_10;
	}
	short_6 = short_8 + short_4;
	short_9 = short_6 + short_5;
	if(1)
	{
		unsigned_int_7 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		short short_10 = 1;
		short short_11 = 1;
		short_2 = short_10 + short_11;
		unsigned_int_4 = unsigned_int_6 + unsigned_int_4;
	}
	if(1)
	{
		char char_8 = 1;
		double double_12 = 1;
		unsigned_int_1 = unsigned_int_9 * unsigned_int_10;
		short_1 = short_3 + short_5;
		char_7 = char_7 + char_8;
		double_1 = double_3 + double_12;
		int_6 = int_7 + int_11;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			if(1)
			{
				unsigned_int_3 = unsigned_int_6 * unsigned_int_2;
			}
		}
	}
	unsigned_int_8 = unsigned_int_6;
	if(1)
	{
		float float_5 = 1;
		float_3 = float_5 * float_3;
	}
	if(1)
	{
		unsigned_int_10 = unsigned_int_10 * unsigned_int_4;
	}
	int_12 = int_5;
}
char v_stackinuse( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	char_2 = char_1 + char_1;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1;
		}
	}
	return char_3;
}
void v_luaD_shrinkstack( float parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	v_luaD_reallocstack(short_1,int_1);

	int_2 = int_2 * int_1;
	int_2 = int_2 * int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		v_luaE_shrinkCI(char_1);

		double_3 = double_1 + double_2;
	}
	if(1)
	{
		char_2 = v_stackinuse(short_2);

		int_2 = int_2 * int_1;
	}
	if(1)
	{
		int_2 = int_2 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	v_luaE_freeCI(char_2);

}
int v_luaD_pcall( int parameter_1,long parameter_2,unsigned int parameter_4,float parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	short short_4 = 1;
	double double_2 = 1;
	char char_2 = 1;
	double_1 = double_1;
	int_1 = int_1 + int_1;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_2;
	char_1 = char_1;
	int_3 = v_luaD_rawrunprotected(int_4,float_1);

	v_luaF_close(int_4,char_1);

	long_4 = long_3 * long_4;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_5 = 1;
		long long_6 = 1;
		short short_3 = 1;
		float_3 = float_1 * float_2;
		short_2 = short_1 + short_2;
		long_2 = long_1 + long_1;
		v_luaD_shrinkstack(float_4);

		int_4 = int_2 * int_1;
		long_6 = long_5 + long_2;
		short_3 = short_2;
		double_1 = v_seterrorobj(short_4,int_2,double_2);

		int_4 = int_1 + int_1;
	}
	char_1 = char_1 + char_2;
	return int_1;
}
void v_udata2finalize( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float_3 = float_1 * float_2;
	int_1 = int_1 * int_1;
	char_2 = char_1 * char_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_1 = int_2 + int_3;
	}
}
void v_GCTM( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_6 = 1;
	long long_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1 * int_2;
	float_1 = v_luaD_throw(unsigned_int_1,int_3);

	long_1 = long_1 + long_2;
	double_1 = double_1 + double_2;
	double_1 = double_1;
	short_2 = short_1 + short_1;
	if(1)
	{
		double double_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		short short_3 = 1;
		long long_3 = 1;
		int int_7 = 1;
		int_3 = v_luaD_pcall(int_4,long_1,unsigned_int_2,float_2);

		double_1 = double_3 * double_2;
		double_1 = double_1 + double_2;
		int_2 = int_2 + int_2;
		int_5 = int_1 * int_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		double_2 = double_1 + double_4;
		short_1 = short_3 + short_3;
		char_1 = v_dothecall(float_1);

		int_6 = int_2;
		long_3 = long_2 * long_3;
		int_6 = int_5 + int_7;
		v_udata2finalize(int_6);

		long_3 = long_3 * long_3;
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
				unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
				int_2 = int_2;
			}
			unsigned_int_2 = v_luaT_gettmbyobj(long_4,unsigned_int_2,short_4);

			char_1 = v_luaO_pushfstring(float_1,unsigned_int_5,int_4);

			float_4 = float_3 * float_3;
		}
	}
}
void v_callallpendingfinalizers( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	char char_1 = 1;
	float float_4 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_3 = int_3 * int_1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			float_3 = float_1 * float_2;
			long_1 = long_1 + long_2;
		}
		if(1)
		{
			float_1 = float_2 * float_2;
		}
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2;
		}
		if(1)
		{
			float_2 = float_3 + float_4;
		}
	}
	if(1)
	{
		double double_5 = 1;
		float_3 = float_4;
		v_GCTM(double_3,int_4);

		double_4 = double_4 * double_5;
	}
	char_1 = char_1 * char_3;
	double_2 = double_1;
	double_3 = double_1 + double_4;
}
double v_findlast( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long_1 = long_2;
	int_2 = int_1 * int_1;
	return double_1;
}
long v_separatetobefnz( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double_1 = v_findlast(unsigned_int_1);

	char_1 = char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1;
	}
	return long_1;
}
void v_luaC_freeallobjects( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	long_1 = v_separatetobefnz(long_2,int_1);

	int_1 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_1 * short_2;
	int_2 = int_2 * int_2;
	long_2 = long_3 * long_4;
	float_1 = float_1 + float_2;
	v_callallpendingfinalizers(short_4);

	double_3 = double_1 * double_2;
	int_2 = int_3 + int_4;
	long_1 = long_2 + long_3;
	float_1 = float_3 * float_1;
}
char v_close_state( short parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	v_luaC_freeallobjects(double_1);

	char_1 = v_freestack(float_1);

	float_1 = float_1;
	v_luaF_close(int_1,char_1);

	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "o[") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	double_4 = double_1 + double_3;
	double_5 = double_4;
	double_2 = double_1;
	int_2 = int_3;
	return char_2;
}
int v_lua_version( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_2;
}
void v_luaX_init()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_2;
	float_1 = float_1 + float_1;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		v_luaC_fix(int_2,short_1);

		v_luaS_new(char_1,double_3);

		char_1 = char_1 * char_1;
	}
}
void v_luaT_init( char parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	v_luaS_new(char_1,double_1);

	char_1 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		v_luaC_fix(int_1,short_1);

		double_1 = double_1 + double_1;
		double_1 = double_2 * double_2;
	}
}
void v_luaC_fix( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_2;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_2;
}
void v_luaS_init( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	long_2 = long_1 + long_1;
	char_1 = char_1;
	int_2 = int_1 * int_2;
	int_1 = int_1 + int_2;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			float float_2 = 1;
			v_luaS_resize(int_3,int_4);

			float_2 = float_1 + float_2;
		}
	}
	v_luaC_fix(int_4,short_1);

}
char v_luaG_errormsg( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		float float_2 = 1;
		int_2 = int_1 + int_2;
		double_3 = double_1 + double_2;
		short_2 = short_1 * short_1;
		v_luaD_callnoyield(unsigned_int_1,short_1,int_1);

		float_2 = float_1 * float_1;
		int_1 = int_2 + int_1;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	return char_1;
	float_1 = v_luaD_throw(unsigned_int_3,int_2);

}
double v_currentline( unsigned int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	return double_1;
	char_1 = v_currentpc(int_1);

}
void v_luaO_chunkid( char parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_4 = int_3 * int_2;
			int_5 = int_4 + int_4;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1;
			short_2 = short_1 + short_1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		short_1 = short_2 * short_1;
		int_2 = int_2 * int_5;
		int_2 = int_1 + int_1;
		if(1)
		{
			int_5 = int_4;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			if(1)
			{
				long long_1 = 1;
				long_1 = long_1;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double_1 = double_1 * double_2;
			}
			float_2 = float_1 + float_2;
			unsigned_int_3 = unsigned_int_3;
		}
		unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	}
}
char v_luaG_addinfo( float parameter_1,long parameter_2,long parameter_3,int parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	v_luaO_chunkid(char_1,double_1,long_1);

	int_2 = int_1 * int_2;
	if(1)
	{
		int int_3 = 1;
		int_4 = int_3 * int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		char_2 = v_luaO_pushfstring(float_1,unsigned_int_1,int_4);

		float_3 = float_2 + float_1;
	}
	return char_1;
}
int v_copy2buff( long parameter_1,int parameter_2,char parameter_3)
{
	int int_1 = 1;
	return int_1;
}
long v_luaG_opinterror( double parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		char char_1 = 1;
		unsigned_int_1 = v_luaG_typeerror(long_1,float_1,int_1);

		char_1 = char_1 * char_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return long_2;
}
int v_luaG_tointerror( int parameter_1,long parameter_2,int parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char_1 = v_luaG_runerror(unsigned_int_1,float_1,unsigned_int_2);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	char_1 = v_varinfo(int_1,double_1);

	int_2 = int_1 + int_1;
	return int_2;
}
void v_luaG_concaterror( long parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	int_1 = int_1 * int_1;
	unsigned_int_1 = v_luaG_typeerror(long_1,float_1,int_1);

}
void v_luaD_callnoyield( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	v_luaD_call(unsigned_int_1,double_1,int_1);

	float_2 = float_1 * float_1;
	int_2 = int_2 * int_1;
	short_1 = short_1 + short_1;
}
float v_luaF_findupval( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	float float_4 = 1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	if(1)
	{
		double_3 = double_2 * double_1;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_2 = char_3 * char_4;
	}
	float_1 = float_1;
	float_3 = float_1 * float_2;
	long_1 = long_1 * long_1;
	if(1)
	{
		if(1)
		{
			double_3 = double_3 * double_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		}
	}
	return float_4;
}
float v_luaF_newLclosure( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = v_luaC_newobj(short_1,int_1,short_2);

	double_3 = double_1 + double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char_2 = char_1 * char_2;
		double_3 = double_2 * double_3;
		int_3 = int_2 * int_3;
	}
	return float_1;
}
short v_pushclosure( unsigned int parameter_1,float parameter_2,char parameter_3,long parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_4 = 1;
	int_3 = int_1 + int_2;
	float_1 = v_luaF_newLclosure(unsigned_int_1,int_1);

	double_3 = double_1 * double_2;
	double_3 = double_2 + double_2;
	double_2 = double_4;
	double_2 = double_4 + double_3;
	long_1 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			float_2 = v_luaF_findupval(short_1,int_2);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			short short_2 = 1;
			short_1 = short_2;
		}
		double_3 = double_2 + double_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "]") < 0)
	{
		short short_3 = 1;
		short_3 = short_1 * short_3;
	}
	return short_4;
}
double v_getcached( int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char_1 = char_2;
		long_2 = long_1 + long_1;
		float_2 = float_1 * float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_3 = 1;
			char_3 = char_3 * char_2;
			if(1)
			{
			}
		}
	}
	return double_1;
}
void v_luaH_resizearray( int parameter_1,unsigned int parameter_2,long parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	v_luaH_resize(double_1,short_1,double_1,short_1);

	double_4 = double_2 * double_3;
	int_1 = int_2;
}
short v_forlimit( int parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "9v") > 0)
	{
		short_1 = short_3;
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				int_1 = v_luaV_tointeger(float_1,long_1,int_1,-1 );

				unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			}
		}
		if(1)
		{
			int int_2 = 1;
			int_1 = int_1 * int_2;
			char controller_6[3];
			fgets(controller_6 ,3 ,stdin);
			if( strcmp( controller_6, "Z?") == 0)
			{
				char char_1 = 1;
				char char_2 = 1;
				char_2 = char_1 + char_1;
			}
		}
	}
	return short_3;
}
void v_luaF_close( int parameter_1,char parameter_2)
{
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		int int_3 = 1;
		char_2 = char_1 * char_1;
		long_3 = long_1 * long_2;
		int_3 = int_1 * int_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_4 + int_4;
}
long v_LEnum( int parameter_1,double parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 * long_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		int int_1 = 1;
		short_1 = v_LTintfloat(short_2,unsigned_int_1);

		int_1 = int_1 * int_1;
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
	char_1 = v_LEintfloat(unsigned_int_1,unsigned_int_2);

}
int v_luaV_lessequal( int parameter_1,short parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	v_l_strcmp(long_1,short_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
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
		double double_2 = 1;
		double double_3 = 1;
		float_1 = v_luaG_ordererror(short_1,float_2,int_1);

		double_3 = double_1 * double_2;
		long_1 = long_1 + long_1;
		long_2 = v_LEnum(int_1,double_4);

		int_1 = int_1 + int_2;
		if(1)
		{
			long_1 = long_1 + long_2;
		}
	}
	return int_2;
	int_2 = v_luaT_callorderTM(int_2,int_3,int_2,short_2);

}
float v_luaG_ordererror( short parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	float_2 = float_1 * float_1;
	char_1 = v_luaG_runerror(unsigned_int_1,float_3,unsigned_int_1);

	int_1 = int_1;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		float_2 = v_luaT_objtypename(unsigned_int_1,int_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return float_1;
}
int v_luaT_callorderTM( int parameter_1,int parameter_2,int parameter_3,short parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	int_1 = v_luaT_callbinTM(unsigned_int_1,char_1,float_1,int_2,double_1);

}
void v_l_strcmp( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			short short_4 = 1;
			float_3 = float_1 * float_2;
			if(1)
			{
				int int_2 = 1;
				int_3 = int_1 * int_2;
			}
			if(1)
			{
			}
			double_3 = double_1 + double_2;
			int_3 = int_1 + int_3;
			int_3 = int_1 * int_1;
			double_1 = double_4 * double_4;
			short_4 = short_2 * short_2;
		}
	}
}
char v_LEintfloat( unsigned int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "j") > 0)
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
short v_LTintfloat( short parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	if(1)
	{
		if(1)
		{
			char controller_3[2];
			fgets(controller_3 ,2 ,stdin);
			if( strcmp( controller_3, "$") < 0)
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
long v_LTnum( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		char char_2 = 1;
		short_1 = v_LTintfloat(short_1,unsigned_int_1);

		char_2 = char_1 + char_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
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
	char_1 = v_LEintfloat(unsigned_int_2,unsigned_int_3);

}
int v_luaV_lessthan( short parameter_1,float parameter_2,short parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int_1 = v_luaT_callorderTM(int_2,int_2,int_1,short_1);

		float_2 = float_1 * float_2;
	}
	return int_1;
	long_1 = v_LTnum(float_2,int_3);

	v_l_strcmp(long_2,short_1);

	float_2 = v_luaG_ordererror(short_1,float_2,int_3);

}
int v_luaS_eqlngstr( long parameter_1,float parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_1;
	double_3 = double_1 + double_2;
	return int_1;
}
int v_luaV_equalobj( unsigned int parameter_1,float parameter_2,long parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
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
		int_1 = v_luaS_eqlngstr(long_1,float_1);

		double_1 = double_2;
	}
	double_2 = double_2 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_2 + float_1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	int_1 = int_1;
	if(1)
	{
	}
	int_1 = int_2 * int_1;
	return int_1;
	v_luaT_callTM(short_1,unsigned_int_2,int_3,float_1,char_1,int_1);

}
double v_unbound_search( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	return double_1;
	double_2 = v_luaH_getint(char_1,double_2);

}
int v_luaH_getn( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_1;
	float_4 = float_3 + float_2;
	double_1 = v_unbound_search(char_1,short_1);

	short_2 = short_2 + short_3;
	long_2 = long_1 * long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "a") < 0)
	{
		char char_2 = 1;
		char_1 = char_2 + char_3;
	}
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_3 + long_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					int int_1 = 1;
					int_2 = int_1 * int_1;
				}
			}
		}
	}
	char_3 = char_1 + char_1;
	char_1 = char_1 + char_1;
	return int_2;
}
void v_luaV_objlen( double parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = v_luaT_gettmbyobj(long_1,unsigned_int_2,short_1);

	int_2 = int_2 * int_3;
	int_4 = v_luaH_getn(double_1);

	v_luaT_callTM(short_2,unsigned_int_3,int_4,float_1,char_1,int_3);

	short_2 = short_3 + short_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "QL") < 0)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	}
	int_2 = int_3 + int_2;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	unsigned_int_1 = v_luaG_typeerror(long_1,float_1,int_5);

	short_1 = short_3 * short_3;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_5;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
	}
	long_1 = long_1 + long_1;
	unsigned_int_5 = unsigned_int_4;
}
float v_luaV_div( long parameter_1,long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			char_1 = v_luaG_runerror(unsigned_int_1,float_1,unsigned_int_1);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	return float_1;
}
double v_luaV_mod( long parameter_1,double parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 + int_1;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	return double_1;
	char_1 = v_luaG_runerror(unsigned_int_2,float_1,unsigned_int_1);

}
char v_luaV_shiftl( char parameter_1,float parameter_2)
{
	char char_1 = 1;
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
	return char_1;
}
void v_luaV_finishget( char parameter_1,double parameter_2,double parameter_3,double parameter_4,long parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "Rd") > 0)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			float_1 = float_1;
			if(1)
			{
				float_3 = float_2 + float_2;
			}
		}
		if(1)
		{
			int int_2 = 1;
			unsigned_int_3 = v_luaT_gettmbyobj(long_1,unsigned_int_4,short_3);

			unsigned_int_1 = v_luaG_typeerror(long_1,float_1,int_1);

			int_2 = int_2 * int_2;
			long_2 = v_luaH_get(long_1,short_1,-1 );

			char_2 = char_1 + char_1;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				v_luaT_callTM(short_3,unsigned_int_5,int_3,float_1,char_2,int_4);

				double_3 = double_1 * double_2;
			}
		}
		if(1)
		{
			float_2 = float_1;
		}
		int_5 = int_4;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			char_1 = v_luaG_runerror(unsigned_int_1,float_3,unsigned_int_4);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_6;
		}
	}
	int_1 = int_4 * int_5;
}
float v_luaH_getstr( int parameter_1,long parameter_2)
{
	short short_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short_1 = short_1 + short_2;
		double_1 = double_1 + double_2;
	}
	return float_1;
	long_1 = v_luaH_getshortstr(short_2,unsigned_int_1);

	long_2 = v_getgeneric(char_1,double_3);

}
int v_luaO_fb2int( int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_1;
	return int_1;
}
long v_getgeneric( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
			if(1)
			{
			}
			char_1 = v_mainposition(short_1,long_1);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	return long_2;
}
long v_luaH_get( long parameter_1,short parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_385[2];
	fgets(controller4vul_385 ,2 ,stdin);
	if( strcmp( controller4vul_385, "E") > 0)
	{
		int_1 = v_luaV_tointeger(float_1,long_1,int_1,uni_para);

	}
	return long_2;
}
float v_luaH_set( double parameter_1,float parameter_2,short parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_384[2];
	fgets(controller4vul_384 ,2 ,stdin);
	if( strcmp( controller4vul_384, "w") < 0)
	{
		long_1 = v_luaH_get(long_2,short_1,uni_para);

	}
	if(1)
	{
	}
	return float_1;
}
double v_computesizes( short parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_2 = 1;
			double_1 = double_1 + double_2;
			char controller_2[2];
			fgets(controller_2 ,2 ,stdin);
			if( strcmp( controller_2, "5") == 0)
			{
				unsigned int unsigned_int_5 = 1;
				char_1 = char_2;
				unsigned_int_5 = unsigned_int_4;
			}
		}
	}
	char_4 = char_2 + char_3;
	char_1 = char_1 + char_5;
	return double_1;
}
long v_arrayindex( double parameter_1)
{
	long long_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
		if(1)
		{
		}
	}
	return long_1;
}
int v_countint( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		long_1 = v_arrayindex(double_3);

		int_1 = v_luaO_ceillog2(char_1);

		int_3 = int_2 * int_3;
	}
	if(1)
	{
	}
	return int_4;
}
double v_numusehash( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	char char_3 = 1;
	int_1 = int_1 * int_1;
	int_2 = int_2 * int_3;
	double_2 = double_1 + double_1;
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double_1 = double_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	int_2 = int_1;
	if(1)
	{
		char char_2 = 1;
		long_1 = long_1 + long_2;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		short_1 = short_1 * short_1;
		long_4 = long_1 + long_3;
	}
	if(1)
	{
	}
	long_2 = long_4 + long_3;
	if(1)
	{
	}
	long_4 = long_4 * long_2;
	if(1)
	{
	}
	long_3 = long_3;
	if(1)
	{
	}
	double_4 = double_2 + double_2;
	if(1)
	{
	}
	double_1 = double_5 * double_5;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	int_2 = int_2 * int_4;
	double_4 = double_3 * double_3;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
	if(1)
	{
		int_5 = v_countint(unsigned_int_4,char_3);

		double_5 = double_5;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_4;
	}
	return double_3;
}
double v_numusearray( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	double_2 = double_1 * double_1;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long_3 = long_1 * long_2;
		short_1 = short_1 + short_1;
		if(1)
		{
			int_1 = int_1 * int_1;
			if(1)
			{
				short_1 = short_1 * short_1;
			}
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int int_2 = 1;
				int_1 = int_2 + int_1;
			}
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		double_2 = double_2;
	}
	return double_1;
}
double v_rehash( char parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	double_1 = double_1 + double_1;
	float_2 = float_1 + float_1;
	char_1 = char_1 * char_1;
	long_1 = long_1 + long_2;
	v_luaH_resize(double_1,short_1,double_1,short_1);

	double_2 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	double_2 = v_computesizes(short_1,float_3);

	short_1 = short_2 + short_1;
	short_1 = short_2;
	int_1 = int_1 * int_1;
	double_1 = v_numusehash(unsigned_int_1,unsigned_int_3,unsigned_int_4);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	double_3 = v_numusearray(long_1,long_2);

	short_2 = short_3;
	float_1 = float_3 + float_4;
	int_1 = v_countint(unsigned_int_3,char_1);

	double_4 = double_1 + double_2;
	return double_3;
}
void v_getfreepos( long parameter_1)
{
	int int_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 + float_1;
		}
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 + float_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2;
	}
}
unsigned int v_luaS_hashlongstr( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_1 = v_luaS_hash(short_1,short_2,short_1);

		float_2 = float_3 * float_3;
		double_3 = double_1 + double_2;
	}
	return unsigned_int_2;
}
short v_l_hashfloat( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_1 = short_2;
	float_1 = float_1 * float_1;
	char_2 = char_1 * char_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_2 * float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		int_2 = int_1 + int_2;
	}
	return short_1;
}
char v_mainposition( short parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = v_luaS_hashlongstr(int_1);

	short_1 = short_2;
	return char_1;
	short_1 = v_l_hashfloat(char_2);

}
int v_l_str2dloc( short parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_1 = long_1 * long_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	int_1 = int_1 * int_1;
	long_3 = long_2 * long_2;
	char_2 = char_1 + char_1;
	return int_1;
}
float v_l_str2d( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_1 = double_2 * double_2;
		long_1 = long_1 + long_2;
		if(1)
		{
		}
		int_1 = v_l_str2dloc(short_1,char_1,int_1);

		double_2 = double_1 + double_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		double_3 = double_3 + double_4;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1;
		}
	}
	return float_1;
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
short v_isneg( unsigned int parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char * vul_var;
	char controller4vul_390[3];
	fgets(controller4vul_390 ,3 ,stdin);
	if( strcmp( controller4vul_390, "1:") < 0)
	{
		double double_1 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 480)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	char_1 = char_1 + char_2;
}
unsigned int v_l_str2int( unsigned int parameter_1,float parameter_2,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short_1 = v_isneg(unsigned_int_1,uni_para);

	int_1 = int_1 + int_1;
	return unsigned_int_1;
}
double v_luaO_str2num( unsigned int parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	long_3 = long_1 * long_2;
	char controller4vul_389[3];
	fgets(controller4vul_389 ,3 ,stdin);
	if( strcmp( controller4vul_389, "zm") < 0)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = v_l_str2int(unsigned_int_1,float_1,uni_para);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
	}
	return double_1;
}
int v_luaV_tointeger( float parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_6 = 1;
	int_3 = int_1 + int_2;
	char controller4vul_386[2];
	fgets(controller4vul_386 ,2 ,stdin);
	if( strcmp( controller4vul_386, "(") < 0)
	{
		int int_4 = 1;
		int int_5 = 1;
		float float_1 = 1;
		int_1 = int_4 + int_5;
		float_1 = float_1 + float_1;
		char controller4vul_387[2];
		fgets(controller4vul_387 ,2 ,stdin);
		if( strcmp( controller4vul_387, ")") > 0)
		{
			char controller4vul_388[3];
			fgets(controller4vul_388 ,3 ,stdin);
			if( strcmp( controller4vul_388, "ut") > 0)
			{
				double_1 = v_luaO_str2num(unsigned_int_1,unsigned_int_1,uni_para);

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
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		float float_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		float_2 = float_2 + float_2;
	}
	return int_6;
}
long v_luaH_newkey( char parameter_1,float parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float_2 = float_1 + float_1;
	double_1 = v_rehash(char_1,double_2,double_2);

	short_1 = short_1 * short_1;
	char_2 = v_luaG_runerror(unsigned_int_1,float_1,unsigned_int_2);

	char_2 = v_mainposition(short_1,long_1);

	v_getfreepos(long_1);

	char_2 = char_3 + char_3;
	int_1 = int_1 + int_1;
	float_2 = v_luaH_set(double_1,float_2,short_1,-1 );

	char_2 = char_3 * char_3;
	if(1)
	{
		char_2 = char_3;
	}
	int_2 = v_luaV_tointeger(float_3,long_1,int_1,-1 );

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return long_2;
}
double v_luaH_getint( char parameter_1,double parameter_2)
{
	double double_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
			}
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int_1 = int_1 + int_2;
				if(1)
				{
					double double_1 = 1;
					double_2 = double_1 + double_1;
				}
				float_1 = float_1 * float_2;
			}
		}
	}
	return double_2;
}
void v_luaH_setint( float parameter_1,int parameter_2,short parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_5 = 1;
	char char_4 = 1;
	double_1 = double_1 + double_1;
	char_1 = char_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_2 = v_luaH_getint(char_3,double_2);

		double_4 = double_3 + double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_1 = v_luaH_newkey(char_2,float_1,double_5);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	char_4 = char_2 + char_3;
}
int v_setarrayvector( char parameter_1,char parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_2;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_1 = double_1 + double_1;
	return int_2;
}
void v_luaH_resize( double parameter_1,short parameter_2,double parameter_3,short parameter_4)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	v_luaH_setint(float_1,int_1,short_1,unsigned_int_1);

	int_2 = int_2;
	int_3 = int_3 + int_4;
	int_5 = int_4 + int_1;
	float_2 = v_luaH_set(double_1,float_2,short_1,-1 );

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		int_1 = int_3 + int_1;
	}
	int_3 = int_2;
	if(1)
	{
		char_1 = char_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				double_1 = double_2 * double_1;
			}
		}
		double_3 = double_2 + double_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_3 = 1;
		int_4 = v_setarrayvector(char_2,char_1,short_1);

		int_1 = v_setnodevector(short_1,char_2,int_2);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			double_2 = double_3 + double_1;
		}
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "m") > 0)
	{
		unsigned_int_1 = unsigned_int_1;
	}
}
void v_luaV_execute( short parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	char char_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	if(1)
	{
	}
	int_1 = v_luaH_new(long_1);

	v_luaV_finishget(char_1,double_1,double_2,double_2,long_2);

	v_luaT_trybinTM(char_1,char_2,float_1,long_3,short_1);

	int_2 = v_luaV_equalobj(unsigned_int_1,float_1,long_1);

	int_1 = v_luaD_poscall(short_1,char_3,long_3,int_3);

	char_1 = v_luaG_runerror(unsigned_int_2,float_2,unsigned_int_1);

	double_3 = v_getcached(int_4,unsigned_int_2,unsigned_int_3);

	short_2 = short_2 * short_2;
	if(1)
	{
	}
	char_4 = v_luaV_shiftl(char_3,float_3);

	v_luaV_concat(short_2,int_4);

	int_3 = v_luaV_lessequal(int_1,short_2,unsigned_int_1);

	v_luaH_setint(float_2,int_1,short_1,unsigned_int_4);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		v_luaH_resize(double_1,short_3,double_4,short_2);

		int_3 = v_luaO_fb2int(int_1);

		double_2 = v_luaV_mod(long_4,double_2,float_2);

		float_1 = v_luaV_div(long_3,long_4,int_5);

		v_luaD_call(unsigned_int_2,double_5,int_6);

		v_luaH_resizearray(int_7,unsigned_int_2,long_2);

		short_3 = v_pushclosure(unsigned_int_4,float_2,char_5,long_2,int_3);

		char_2 = char_4;
		float_3 = v_luaH_getstr(int_5,long_2);

		int_1 = v_luaD_precall(int_6,double_5,int_3);

		v_luaF_close(int_2,char_2);

		int_4 = int_4 + int_5;
	}
	v_luaV_objlen(double_6,short_4,int_6);

	int_4 = v_luaV_lessthan(short_1,float_3,short_3);

	short_5 = v_forlimit(int_2,double_5,double_4,int_3);

}
char v_currentpc( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return char_1;
}
short v_kname( short parameter_1,int parameter_2,int parameter_3,short parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1 + int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = v_getobjname(char_1,int_1,int_1,char_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
	}
	double_3 = double_1 + double_2;
	return short_1;
}
long v_filterpc( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "]") < 0)
	{
	}
	if(1)
	{
	}
	return long_1;
}
int v_findsetreg( int parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_1;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double_3 = double_1 + double_2;
		unsigned_int_1 = unsigned_int_1;
		short_1 = short_1 + short_1;
		double_3 = double_4 * double_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		double_1 = double_2 * double_4;
		if(1)
		{
			double_1 = double_4;
		}
		int_1 = int_2 * int_3;
		long_1 = long_3 + long_1;
		double_6 = double_1 * double_5;
		if(1)
		{
			if(1)
			{
				long long_4 = 1;
				long_2 = long_4 * long_4;
			}
		}
		short_3 = short_1 * short_2;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
		}
		long_3 = v_filterpc(int_3,int_4);

		double_1 = double_4 + double_5;
	}
	return int_5;
}
void v_luaF_getlocalname( float parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 + long_1;
			if(1)
			{
			}
		}
	}
}
double v_getobjname( char parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float float_3 = 1;
	short_3 = short_1 + short_2;
	double_1 = v_upvalname(unsigned_int_1,int_1);

	float_1 = float_2;
	if(1)
	{
	}
	int_2 = v_findsetreg(int_1,int_1,int_2);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_5 = 1;
		short short_6 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_5 = 1;
		long_1 = long_1 + long_1;
		int_2 = int_1 + int_1;
		int_2 = int_1 * int_2;
		if(1)
		{
		}
		short_1 = v_kname(short_4,int_2,int_3,short_4);

		char_1 = char_1 * char_2;
		short_5 = short_1;
		short_6 = short_3 * short_5;
		char_4 = char_3 + char_2;
		int_4 = int_2 + int_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		double_3 = double_2 + double_1;
		char_2 = char_3 * char_4;
		if(1)
		{
			double_1 = double_1 * double_2;
		}
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		int_2 = int_4;
		unsigned_int_4 = unsigned_int_5;
		v_luaF_getlocalname(float_3,int_4,int_1);

		char_1 = char_1 + char_4;
	}
	return double_2;
}
void v_isinstack( double parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
double v_upvalname( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
}
char v_getupvalname( short parameter_1,unsigned int parameter_2,long parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long_3 = long_1 * long_2;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
	}
	return char_1;
	double_1 = v_upvalname(unsigned_int_1,int_1);

}
char v_varinfo( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_2 = 1;
	char char_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	char_1 = v_getupvalname(short_1,unsigned_int_2,long_1);

	char_1 = v_currentpc(int_1);

	double_3 = double_1 * double_2;
	if(1)
	{
		char_2 = v_luaO_pushfstring(float_1,unsigned_int_1,int_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_2 = long_2 + long_3;
		}
	}
	v_isinstack(double_3,unsigned_int_3);

	double_3 = v_getobjname(char_3,int_2,int_1,char_3);

	char_4 = char_1 * char_3;
	return char_2;
}
void v_luaS_new( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		double_3 = double_2 + double_2;
	}
	float_1 = v_luaS_newlstr(int_1,int_2,int_1);

	short_2 = short_1 + short_1;
}
float v_luaT_objtypename( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_2;
	if(1)
	{
		v_luaS_new(char_1,double_1);

		char_1 = char_1 + char_1;
		if(1)
		{
		}
	}
	return float_3;
	long_1 = v_luaH_getshortstr(short_1,unsigned_int_1);

}
unsigned int v_luaG_typeerror( long parameter_1,float parameter_2,int parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	char_1 = v_varinfo(int_1,double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_luaG_runerror(unsigned_int_1,float_1,unsigned_int_2);

	char_3 = char_2 * char_3;
	return unsigned_int_1;
	float_2 = v_luaT_objtypename(unsigned_int_1,int_1);

}
short v_tryfuncTM( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long_1 = long_1 * long_2;
	int_1 = int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_1;
	return short_1;
	unsigned_int_1 = v_luaT_gettmbyobj(long_1,unsigned_int_1,short_1);

	unsigned_int_1 = v_luaG_typeerror(long_3,float_1,int_2);

}
short v_callhook( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 + int_2;
	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		v_luaD_hook(short_1,int_2,int_1);

		short_2 = short_2 * short_2;
	}
	double_2 = double_1;
	float_2 = float_1 + float_2;
	return short_2;
}
void v_adjust_varargs( long parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 * short_2;
	short_3 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_4 = 1;
		short short_5 = 1;
		short_5 = short_2 * short_4;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
}
char v_moveresults( short parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 + char_1;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_1 + long_1;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	double_2 = double_1 + double_2;
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_3 = unsigned_int_6 * unsigned_int_4;
		}
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long_1 = long_1 * long_2;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			long_2 = long_1 * long_1;
		}
	}
	short_1 = short_1 * short_1;
	char_2 = char_3 + char_3;
	return char_4;
}
int v_luaD_poscall( short parameter_1,char parameter_2,long parameter_3,int parameter_4)
{
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 * short_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		short short_3 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short_1 = short_1 * short_2;
			v_luaD_hook(short_1,int_2,int_2);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			char_1 = v_moveresults(short_2,char_2,char_1,int_2,int_1);

			long_3 = long_1 * long_2;
		}
		short_1 = short_3 * short_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_2;
	return int_1;
}
void v_luaD_hook( short parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long_1 = long_1 + long_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_4 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_3 = 1;
		double_2 = double_1 + double_2;
		double_3 = double_2 * double_3;
		int_1 = int_1 * int_2;
		short_1 = short_1 * short_1;
		short_2 = short_3;
		long_1 = long_1 * long_1;
		double_4 = double_4 * double_1;
		double_4 = double_3 + double_4;
		long_1 = long_1 * long_2;
		float_1 = float_2;
		short_5 = short_4 * short_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		char_1 = char_1 + char_2;
		char_3 = char_2 + char_3;
		char_1 = char_1 + char_3;
		double_1 = double_1;
		double_1 = double_2;
		int_3 = int_1 + int_2;
		double_3 = double_1 * double_2;
		double_3 = double_4 * double_1;
	}
}
int v_luaD_precall( int parameter_1,double parameter_2,int parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	short short_4 = 1;
	int int_6 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_9 = 1;
	int int_10 = 1;
	int int_11 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_12 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_6 = 1;
	double double_2 = 1;
	float float_3 = 1;
	v_adjust_varargs(long_1,float_1,int_1);

	short_1 = v_tryfuncTM(char_1,int_2);

	char_3 = char_1 + char_2;
	v_luaD_hook(short_2,int_2,int_3);

	short_1 = short_2 * short_2;
	unsigned_int_1 = unsigned_int_1;
	short_3 = short_2 + short_3;
	int_5 = int_1 * int_4;
	float_2 = float_2 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_4 = short_4 + short_3;
	int_6 = v_luaD_precall(int_1,double_1,int_2);

	int_2 = int_5 * int_4;
	short_4 = short_2 * short_1;
	double_1 = double_1;
	int_1 = int_3 * int_3;
	long_1 = long_2;
	if(1)
	{
		int_7 = int_7;
	}
	int_6 = int_4 + int_2;
	int_3 = int_6;
	double_1 = double_1 * double_1;
	int_8 = int_2;
	long_1 = long_2 + long_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3;
	int_1 = int_3 * int_7;
	int_8 = int_8 + int_2;
	int_11 = int_9 * int_10;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_3 = 1;
			long long_5 = 1;
			long_5 = long_3 + long_4;
		}
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	}
	short_2 = short_3;
	int_11 = int_1 * int_12;
	int_11 = int_11 * int_7;
	int_4 = int_4 * int_5;
	int_8 = v_luaD_poscall(short_4,char_3,long_4,int_1);

	float_1 = float_1;
	short_5 = v_callhook(short_4,char_3);

	unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	short_4 = short_5 * short_6;
	double_2 = double_1 + double_2;
	if(1)
	{
		int_11 = int_9;
	}
	float_1 = float_2 + float_3;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
	return int_2;
}
double v_seterrorobj( short parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	int_3 = int_1 + int_2;
	double_1 = double_2 * double_2;
	char_2 = char_1 + char_1;
	int_3 = int_3;
	int_4 = int_4;
	return double_1;
}
float v_luaD_throw( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float_1 = v_luaD_throw(unsigned_int_1,int_1);

		double_1 = double_1;
		char_3 = char_1 + char_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		long_3 = long_1 * long_2;
		double_1 = v_seterrorobj(short_1,int_2,double_2);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			int_3 = int_2 + int_2;
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			int int_4 = 1;
			if(1)
			{
				int_2 = int_2 + int_3;
				if(1)
				{
					double double_3 = 1;
					double_1 = double_2 + double_3;
				}
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				int_3 = int_1;
			}
			int_1 = int_4 * int_1;
		}
	}
	return float_1;
}
void v_stackerror( char parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		float_1 = v_luaD_throw(unsigned_int_1,int_1);

		int_1 = int_1;
	}
	if(1)
	{
		char_1 = v_luaG_runerror(unsigned_int_2,float_1,unsigned_int_2);

		int_1 = int_1 + int_1;
	}
}
void v_luaD_call( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Oy") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		int_1 = v_luaD_precall(int_1,double_1,int_1);

		float_1 = float_2;
	}
	v_stackerror(char_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	v_luaV_execute(short_1);

}
void v_luaT_callTM( short parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,char parameter_5,int parameter_6)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_2;
	int_1 = int_1 * int_1;
	float_3 = float_1 + float_2;
	v_luaD_call(unsigned_int_1,double_2,int_2);

	int_2 = int_2 * int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		int int_4 = 1;
		v_luaD_callnoyield(unsigned_int_2,short_1,int_1);

		int_4 = int_2 + int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		double_3 = double_3 + double_4;
	}
}
long v_luaH_getshortstr( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, " ") < 0)
		{
		}
		if(1)
		{
			char char_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			char_1 = char_1 + char_1;
			if(1)
			{
			}
			int_3 = int_2 + int_3;
		}
	}
	return long_1;
}
unsigned int v_luaT_gettmbyobj( long parameter_1,unsigned int parameter_2,short parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = v_luaH_getshortstr(short_1,unsigned_int_1);

	char_1 = char_1;
	float_3 = float_1 * float_2;
	int_2 = int_1 + int_1;
	short_2 = short_1 * short_2;
	int_3 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_3 * int_2;
	return unsigned_int_1;
}
int v_luaT_callbinTM( unsigned int parameter_1,char parameter_2,float parameter_3,int parameter_4,double parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		unsigned_int_1 = v_luaT_gettmbyobj(long_1,unsigned_int_1,short_3);

		v_luaT_callTM(short_4,unsigned_int_2,int_1,float_1,char_1,int_2);

		int_2 = int_2;
	}
	if(1)
	{
	}
	int_3 = int_3 + int_1;
	return int_1;
}
void v_luaT_trybinTM( char parameter_1,char parameter_2,float parameter_3,long parameter_4,short parameter_5)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	char char_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		long_1 = v_luaG_opinterror(double_1,long_1,unsigned_int_1,char_1);

		double_1 = double_1 + double_1;
		int_1 = v_luaT_callbinTM(unsigned_int_2,char_2,float_1,int_1,double_2);

		int_1 = int_1;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			float_3 = float_2 + float_1;
		}
		if(1)
		{
			int_1 = v_luaG_tointerror(int_2,long_2,int_3);

			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
		v_luaG_concaterror(long_3,char_3,int_2);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
}
void v_luaV_concat( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1;
	float_1 = v_luaS_createlngstrobj(char_1,int_1);

	char_2 = char_3;
	int_1 = v_copy2buff(long_1,int_2,char_4);

	double_2 = double_1 + double_1;
	v_luaT_trybinTM(char_1,char_1,float_1,long_1,short_1);

	float_2 = v_luaS_newlstr(int_3,int_3,int_3);

	int_1 = int_2 + int_3;
	char_5 = v_luaG_runerror(unsigned_int_1,float_2,unsigned_int_2);

}
int v_luaO_utf8esc( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	char char_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_8 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	int int_10 = 1;
	long long_7 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	char char_7 = 1;
	double double_11 = 1;
	int int_12 = 1;
	double double_12 = 1;
	int int_13 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_2;
	long_2 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	short_2 = short_1 * short_2;
	int_4 = int_3 + int_1;
	int_4 = int_4 + int_3;
	double_1 = double_1 + double_1;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
	long_3 = long_3 + long_1;
	char_2 = char_1 * char_2;
	int_4 = int_5;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
	double_2 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_7;
	float_1 = float_1 + float_1;
	float_2 = float_1 * float_2;
	double_3 = double_2 + double_2;
	unsigned_int_6 = unsigned_int_3;
	double_1 = double_4;
	double_3 = double_1 * double_4;
	short_3 = short_2 + short_3;
	char_1 = char_2 * char_3;
	float_2 = float_1 + float_2;
	short_1 = short_2 * short_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_1 + double_3;
	int_1 = int_5 + int_4;
	int_1 = int_1 + int_6;
	int_3 = int_7 + int_4;
	short_2 = short_3 + short_1;
	double_5 = double_3 * double_4;
	long_5 = long_3 * long_4;
	long_3 = long_2 + long_3;
	double_5 = double_5 * double_2;
	float_1 = float_3;
	long_3 = long_5;
	char_3 = char_3 + char_3;
	int_6 = int_4 * int_7;
	unsigned_int_3 = unsigned_int_8 + unsigned_int_6;
	unsigned_int_8 = unsigned_int_3 + unsigned_int_2;
	short_2 = short_1 * short_4;
	short_2 = short_5 + short_6;
	if(1)
	{
		float_3 = float_1 + float_2;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
		int_8 = int_8 * int_5;
		long_2 = long_5;
		double_4 = double_4 * double_3;
		float_1 = float_2 + float_4;
		char_3 = char_1 + char_3;
		unsigned_int_9 = unsigned_int_5;
	}
	if(1)
	{
		long long_6 = 1;
		char char_6 = 1;
		short short_7 = 1;
		long long_8 = 1;
		int_6 = int_9 * int_3;
		double_2 = double_4 + double_4;
		unsigned_int_1 = unsigned_int_10;
		double_4 = double_1;
		int_9 = int_8 * int_5;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_10;
		int_1 = int_2 + int_5;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_11;
		int_2 = int_10 * int_1;
		long_7 = long_6 * long_2;
		unsigned_int_2 = unsigned_int_3;
		char_4 = char_5;
		char_4 = char_6 * char_2;
		double_2 = double_5 + double_5;
		double_1 = double_2 * double_3;
		short_1 = short_7 * short_6;
		float_2 = float_1 * float_1;
		long_2 = long_5 + long_6;
		long_1 = long_8;
		char_3 = char_3;
		double_6 = double_3 + double_6;
		double_8 = double_7 * double_6;
		int_9 = int_2 * int_5;
		double_4 = double_8 + double_6;
		float_3 = float_4 + float_4;
		long_4 = long_8 + long_8;
		float_4 = float_1;
		short_6 = short_4 * short_4;
		int_7 = int_4;
		double_8 = double_4;
		unsigned_int_8 = unsigned_int_2 * unsigned_int_12;
		float_3 = float_2 + float_2;
		unsigned_int_12 = unsigned_int_13;
		unsigned_int_10 = unsigned_int_13;
		unsigned_int_9 = unsigned_int_8 * unsigned_int_7;
		float_3 = float_1 * float_3;
		char_1 = char_6 * char_3;
		short_4 = short_2;
		char_7 = char_2;
		short_5 = short_3 * short_5;
		unsigned_int_2 = unsigned_int_11 + unsigned_int_3;
		unsigned_int_7 = unsigned_int_7 * unsigned_int_1;
		double_8 = double_5 + double_2;
	}
	float_4 = float_1 + float_3;
	if(1)
	{
		unsigned_int_10 = unsigned_int_8;
	}
	if(1)
	{
		float_4 = float_1 + float_2;
	}
	unsigned_int_6 = unsigned_int_3 * unsigned_int_8;
	if(1)
	{
		int_6 = int_2 + int_1;
	}
	if(1)
	{
		long_3 = long_7 * long_7;
	}
	double_7 = double_4;
	if(1)
	{
		double double_9 = 1;
		int int_11 = 1;
		double double_10 = 1;
		long long_9 = 1;
		unsigned int unsigned_int_14 = 1;
		double_8 = double_2;
		double_2 = double_9 + double_5;
		double_1 = double_3 + double_3;
		int_7 = int_9 + int_11;
		double_10 = double_3;
		double_2 = double_10 * double_11;
		short_5 = short_3 + short_6;
		int_6 = int_10 + int_1;
		double_11 = double_6;
		unsigned_int_5 = unsigned_int_10 + unsigned_int_11;
		long_1 = long_9 * long_3;
		int_12 = int_6 + int_7;
		unsigned_int_7 = unsigned_int_5 + unsigned_int_8;
		int_8 = int_1 * int_3;
		int_3 = int_9;
		int_10 = int_6 * int_2;
		double_1 = double_5 * double_9;
		double_5 = double_7;
		unsigned_int_6 = unsigned_int_14 * unsigned_int_6;
		char_2 = char_2 + char_7;
		unsigned_int_11 = unsigned_int_11 + unsigned_int_14;
		double_5 = double_9 * double_12;
	}
	unsigned_int_6 = unsigned_int_6 + unsigned_int_7;
	if(1)
	{
		float float_5 = 1;
		double_7 = double_12 * double_6;
		int_10 = int_9 * int_8;
		float_1 = float_5 + float_3;
		unsigned_int_6 = unsigned_int_13 + unsigned_int_10;
		double_4 = double_11 * double_12;
		double_2 = double_7;
		double_2 = double_6 * double_4;
		unsigned_int_7 = unsigned_int_12 * unsigned_int_12;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_1;
		short_4 = short_2 + short_6;
	}
	if(1)
	{
		int_6 = int_13 + int_6;
		int_10 = int_9 + int_12;
	}
	char_2 = char_7 + char_4;
	if(1)
	{
		double_6 = double_5 * double_7;
	}
	if(1)
	{
		int_12 = int_2 + int_3;
	}
	double_1 = double_7 * double_3;
	long_3 = long_1 * long_2;
	char_2 = char_5 * char_4;
	return int_13;
}
void v_luaO_tostring( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	if(1)
	{
		float_1 = v_luaS_newlstr(int_1,int_2,int_3);

		double_1 = double_2 * double_1;
	}
	if(1)
	{
		int int_4 = 1;
		int_1 = int_3 * int_4;
		if(1)
		{
			if(1)
			{
				double_2 = double_2 + double_1;
				int_3 = int_1 * int_1;
			}
		}
		double_2 = double_2 + double_1;
	}
}
char v_luaO_pushfstring( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_1 = v_luaO_pushvfstring(int_1,unsigned_int_1,float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1;
	double_1 = double_2;
	long_1 = long_1 * long_2;
	return char_1;
}
void v_luaD_inctop( long parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1 * int_1;
}
float v_luaS_createlngstrobj( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = v_createstrobj(long_1,long_2,int_1,double_1);

	short_2 = short_1 + short_1;
	float_2 = float_1 + float_1;
	return float_1;
}
double v_luaM_toobig( int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char_1 = v_luaG_runerror(unsigned_int_1,float_1,unsigned_int_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	return double_1;
}
char v_createstrobj( long parameter_1,long parameter_2,int parameter_3,double parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	short_1 = short_1 * short_2;
	double_2 = double_1 * double_2;
	long_1 = long_2;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	long_3 = v_luaC_newobj(short_3,int_2,short_3);

	float_2 = float_1 + float_2;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	int_3 = int_3 * int_3;
	return char_1;
}
void v_luaS_resize( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_2;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1;
}
short v_internshrstr( long parameter_1,long parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	short_3 = short_1 + short_2;
	char_1 = char_2;
	unsigned_int_2 = v_luaS_hash(short_2,short_3,short_1);

	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_2;
			}
		}
	}
	if(1)
	{
		char_3 = v_createstrobj(long_1,long_3,int_1,double_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		int_2 = int_2 * int_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_2 + double_3;
	v_luaS_resize(int_2,int_3);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	double_5 = double_2 + double_4;
	unsigned_int_2 = unsigned_int_1;
	short_1 = short_1 * short_4;
	return short_2;
}
float v_luaS_newlstr( int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		char char_2 = 1;
		double double_2 = 1;
		int_2 = int_1 + int_2;
		if(1)
		{
			float float_1 = 1;
			float_2 = float_1 + float_1;
		}
		char_2 = char_1 * char_2;
		double_1 = v_luaM_toobig(int_3);

		float_2 = v_luaS_createlngstrobj(char_1,int_1);

		double_2 = double_1;
	}
	return float_3;
	short_1 = v_internshrstr(long_1,long_2,short_2);

}
int v_pushstr( long parameter_1,float parameter_2,float parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	v_luaD_inctop(long_1);

	long_1 = long_1 * long_1;
	double_3 = double_1 * double_2;
	return int_1;
	float_1 = v_luaS_newlstr(int_2,int_1,int_2);

}
unsigned int v_luaO_pushvfstring( int parameter_1,unsigned int parameter_2,float parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	double double_3 = 1;
	long long_7 = 1;
	int int_5 = 1;
	float float_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		short short_2 = 1;
		float float_3 = 1;
		long long_4 = 1;
		char char_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		double double_4 = 1;
		int int_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			int_3 = int_1 * int_2;
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		char_1 = char_2;
		if(1)
		{
			double_2 = double_1 + double_2;
		}
		float_1 = float_2;
		double_2 = double_2 + double_1;
		v_luaV_concat(short_1,int_3);

		int_2 = int_2 + int_2;
		if(1)
		{
			char_1 = char_3 + char_1;
		}
		if(1)
		{
			short_1 = short_2 + short_2;
		}
		v_luaD_inctop(long_3);

		float_2 = float_1 + float_2;
		float_1 = float_3 + float_4;
		float_2 = float_4 + float_2;
		long_2 = long_2 + long_4;
		char_1 = char_3;
		char_2 = v_luaO_pushfstring(float_4,unsigned_int_1,int_4);

		char_4 = char_4;
		long_4 = long_5 + long_5;
		double_3 = double_2 * double_1;
		int_4 = int_1 * int_3;
		long_7 = long_6 + long_7;
		double_4 = double_1 + double_3;
		int_1 = int_1 * int_2;
		int_1 = int_2 * int_5;
		int_6 = int_4 + int_6;
		char_3 = v_luaG_runerror(unsigned_int_3,float_1,unsigned_int_4);

		short_1 = short_2 + short_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		short_3 = short_2 + short_1;
		int_5 = v_pushstr(long_7,float_5,float_2);

		short_4 = short_3;
		int_4 = int_2;
		int_4 = int_6 * int_4;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		char_1 = char_2 + char_3;
	}
	v_luaO_tostring(float_1,float_4);

	double_2 = double_1 + double_1;
	double_5 = double_6;
	if(1)
	{
		double_5 = double_1 + double_3;
	}
	return unsigned_int_4;
	int_2 = v_luaO_utf8esc(char_5,float_1);

}
char v_luaG_runerror( unsigned int parameter_1,float parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 + double_1;
	char_2 = char_1 + char_2;
	char_1 = v_luaG_addinfo(float_1,long_1,long_1,int_1);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = v_luaO_pushvfstring(int_1,unsigned_int_3,float_2);

	short_1 = short_1 * short_2;
	char_1 = v_luaG_errormsg(int_2);

	double_3 = double_1 + double_2;
	int_2 = int_3 + int_3;
	if(1)
	{
		float float_3 = 1;
		float_1 = float_1 * float_3;
	}
	double_1 = v_currentline(unsigned_int_4);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	return char_2;
}
int v_luaO_ceillog2( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 + short_2;
	return int_1;
}
int v_setnodevector( short parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		double_2 = double_1 + double_2;
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_3 = 1;
		float_2 = float_1 + float_1;
		long_3 = long_1 * long_2;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "0+") > 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 + char_1;
		}
		double_2 = double_2 * double_2;
		char_3 = v_luaG_runerror(unsigned_int_1,float_3,unsigned_int_1);

		int_2 = int_1 * int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int_1 = v_luaO_ceillog2(char_3);

			int_1 = int_1 + int_2;
			int_2 = int_1 * int_1;
			float_3 = float_1 * float_1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
	}
	double_1 = double_3;
	long_2 = long_2;
	return int_2;
}
long v_luaC_newobj( short parameter_1,int parameter_2,short parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float_1 = float_1 * float_1;
	int_3 = int_1 + int_2;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_5;
	return long_1;
}
int v_luaH_new( long parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_setnodevector(short_1,char_1,int_2);

	long_3 = long_1 + long_2;
	int_1 = int_1 + int_3;
	short_1 = short_1 * short_2;
	float_2 = float_1 + float_1;
	char_1 = char_1 + char_1;
	long_1 = v_luaC_newobj(short_2,int_3,short_2);

	double_2 = double_1 + double_1;
	long_3 = long_3 * long_3;
	return int_3;
}
int v_init_registry( short parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	short_3 = short_1 * short_2;
	double_1 = double_2;
	int_1 = v_luaH_new(long_1);

	v_luaH_setint(float_1,int_2,short_1,unsigned_int_1);

	long_2 = long_2 * long_3;
	char_2 = char_1 * char_2;
	short_2 = short_3 * short_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_3 = int_1 + int_1;
	v_luaH_resize(double_2,short_1,double_3,short_4);

	int_4 = int_1 * int_1;
	return int_3;
}
short v_stack_init( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2 + double_2;
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float_2 = float_1 * float_1;
	}
	float_3 = float_2 * float_3;
	int_1 = int_1;
	long_1 = long_1 + long_1;
	int_2 = int_1 * int_2;
	double_2 = double_1;
	char_2 = char_1 * char_1;
	int_1 = int_1 + int_3;
	short_1 = short_1 + short_1;
	short_1 = short_1;
	return short_1;
}
char v_f_luaopen( short parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_1;
	int_2 = int_1 * int_1;
	double_3 = double_1 + double_2;
	short_1 = v_stack_init(unsigned_int_1,double_3);

	double_3 = double_3 + double_1;
	v_luaT_init(char_1);

	float_1 = float_1 * float_1;
	v_luaX_init();

	int_2 = v_lua_version(long_1);

	float_3 = float_2 * float_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	v_luaS_init(double_3);

	double_2 = double_2 * double_1;
	double_5 = double_4 * double_4;
	int_1 = v_init_registry(short_2,short_2);

	float_4 = float_4;
	return char_2;
}
int v_luaD_rawrunprotected( int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	char_1 = char_1 + char_1;
	float_1 = float_1 * float_2;
	float_1 = float_1 * float_1;
	char_1 = char_2;
	return int_2;
}
unsigned int v_luaS_hash( short parameter_1,short parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	return unsigned_int_1;
}
int v_makeseed( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_5 = 1;
	long long_4 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_2;
	float_4 = float_2 + float_3;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1;
	unsigned_int_1 = v_luaS_hash(short_1,short_1,short_2);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	double_1 = v_lua_newstate(float_5);

	long_4 = long_2 * long_3;
	return int_1;
}
void v_preinit_thread( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 + float_1;
	long_1 = long_1 + long_2;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 + float_1;
	int_2 = int_1 + int_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	int_3 = int_3 + int_2;
	int_2 = int_1 + int_1;
	double_2 = double_1 * double_1;
	float_2 = float_1 * float_1;
	long_2 = long_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	short_4 = short_5;
	short_6 = short_5 * short_2;
}
double v_lua_newstate( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	double double_6 = 1;
	long long_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	char char_4 = 1;
	float float_3 = 1;
	char char_5 = 1;
	long long_5 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	int_1 = int_1;
	double_3 = double_1;
	double_4 = double_4 * double_1;
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_3;
	v_preinit_thread(char_2,float_2);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	int_3 = int_2 + int_1;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_5;
	char_1 = char_2 * char_2;
	unsigned_int_5 = unsigned_int_2;
	short_1 = short_1 * short_1;
	double_6 = double_4 + double_3;
	int_2 = v_makeseed(long_1);

	long_3 = long_1 + long_3;
	short_2 = short_2 + short_3;
	char_2 = char_3 + char_1;
	int_4 = v_luaD_rawrunprotected(int_1,float_2);

	char_2 = char_2;
	long_4 = long_1 * long_2;
	float_2 = float_2;
	char_4 = char_4 * char_2;
	double_5 = double_6;
	char_1 = v_f_luaopen(short_3);

	long_3 = long_2 + long_2;
	float_1 = float_3 * float_3;
	char_2 = char_1 + char_5;
	char_5 = char_5 * char_2;
	long_2 = long_4 * long_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_6 = 1;
		char_1 = char_6;
	}
	if(1)
	{
		int int_5 = 1;
		double_2 = double_2 * double_1;
		int_5 = int_1 * int_3;
	}
	return double_3;
	char_5 = v_close_state(short_2);

}
short v_luaL_newstate()
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char_1 = v_l_alloc(long_1,unsigned_int_1);

	long_2 = v_panic(char_1);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	return short_1;
	double_3 = v_lua_newstate(float_1);

	char_2 = v_lua_atpanic(float_1,long_1);

}
float v_usage( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	int_2 = int_1 * int_1;
	char_1 = char_1 * char_2;
	return float_1;
}
short v_doargs( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	float_1 = v_usage(long_1);

	char_1 = char_2;
	int_2 = int_1 * int_2;
	if(1)
	{
		char_2 = char_3 * char_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			char char_4 = 1;
			char_3 = char_1 + char_4;
			if(1)
			{
				char char_5 = 1;
				char_1 = char_4 * char_5;
			}
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			short_2 = short_3 * short_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			long_2 = long_1;
			if(1)
			{
				double_2 = double_1 + double_2;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
		}
		if(1)
		{
			long_2 = long_2 * long_3;
		}
		if(1)
		{
			double_1 = double_2 + double_2;
		}
		if(1)
		{
			double_2 = double_2;
		}
		if(1)
		{
			double double_3 = 1;
			double_2 = double_2 * double_3;
		}
	}
	if(1)
	{
		int int_3 = 1;
		double double_4 = 1;
		int_1 = int_2 * int_3;
		double_4 = double_2 + double_1;
	}
	if(1)
	{
		short_4 = short_4 * short_1;
		if(1)
		{
			long_3 = long_2;
		}
	}
	return short_3;
}
int main()
{
	int uni_para =480;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 + long_1;
	long_2 = long_1 * long_3;
	char controller4vul_356[3];
	fgets(controller4vul_356 ,3 ,stdin);
	if( strcmp( controller4vul_356, "f2") > 0)
	{
		short_1 = v_pmain(char_1,uni_para);

		short_1 = short_2 * short_2;
	}
	float_2 = float_1 * float_2;
	if(1)
	{
		short_2 = short_2 + short_1;
	}
	char_3 = char_2 + char_2;
	int_1 = int_1;
	double_1 = double_1 + double_3;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	double_2 = double_3 + double_1;
	return int_3;
}

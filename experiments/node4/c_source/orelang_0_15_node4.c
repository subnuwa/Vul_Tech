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

double v_ore_cfunc_exit( long parameter_1,int parameter_2,short parameter_3);
unsigned int v_ore_cfunc_environ( char parameter_1,int parameter_2,long parameter_3);
short v_mpc_ast_print_depth( unsigned int parameter_1,int parameter_2,long parameter_3);
void v_mpc_ast_print( int parameter_1);
double v_ore_value_str_ptr();
int v_mpc_input_new_file( long parameter_1,char parameter_2);
int v_mpc_parse_file( int parameter_1,long parameter_2,int parameter_3,char parameter_4);
short v_mpc_err_file( float parameter_1,short parameter_2);
int v_mpc_parse_contents( float parameter_1,float parameter_2,char parameter_3);
char v_ore_cfunc_load( char parameter_1,int parameter_2,unsigned int parameter_3);
void v_ore_cfunc_typeof( int parameter_1,int parameter_2,int parameter_3);
unsigned int v_ore_cfunc_range( char parameter_1,int parameter_2,short parameter_3);
void v_ore_cfunc_len( unsigned int parameter_1,int parameter_2,short parameter_3);
char v_ore_cfunc_println( char parameter_1,int parameter_2,int parameter_3);
long v_ore_cfunc_to_string( short parameter_1,int parameter_2,short parameter_3);
short v_kputc( int parameter_1,short parameter_2);
int v_kvsprintf( long parameter_1,int parameter_2,int parameter_3);
int v_ksprintf( short parameter_1,unsigned int parameter_2,short parameter_3);
int v_kputsn( long parameter_1,int parameter_2,unsigned int parameter_3);
short v_kputs( unsigned int parameter_1,short parameter_2);
int v_ore_value_to_str( short parameter_1,long parameter_2);
int v_ore_cfunc_print( short parameter_1,int parameter_2,short parameter_3);
long v_ore_cfunc_dump_env( unsigned int parameter_1,int parameter_2,int parameter_3);
int v_ore_is_true( unsigned int parameter_1);
unsigned int v_ore_value_env_from_context( char parameter_1);
unsigned int v_ore_call( long parameter_1,short parameter_2);
double v_ore_bind_args( long parameter_1,long parameter_2,short parameter_3,long parameter_4);
void v_ore_find_statements( unsigned int parameter_1);
char v_ore_class_new( int parameter_1,unsigned int parameter_2);
void v_ore_find_global( long parameter_1,short parameter_2);
short v_ore_object_new( int parameter_1,double parameter_2);
double v_ore_define_class( unsigned int parameter_1,char parameter_2,unsigned int parameter_3,int parameter_4);
float v_toi( int parameter_1,int uni_para);
short v_hextoi( short parameter_1,int uni_para);
int v_match_op( int parameter_1,float parameter_2,unsigned int parameter_3,int uni_para);
int v_match_set( int parameter_1,int parameter_2,long parameter_3,double parameter_4,int uni_para);
int v_is_quantifier( double parameter_1);
double v_bar( long parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,float parameter_5,int parameter_6,int uni_para);
int v_doh( char parameter_1,int parameter_2,long parameter_3,int parameter_4,int uni_para);
float v_baz( int parameter_1,int parameter_2,char parameter_3,int uni_para);
long v_setup_branch_points( long parameter_1);
double v_is_metacharacter( unsigned int parameter_1);
short v_op_len( double parameter_1);
int v_set_len( float parameter_1,int parameter_2);
char v_get_op_len( long parameter_1,int parameter_2);
short v_foo( long parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,short parameter_5,int uni_para);
int v_slre_match( short parameter_1,char parameter_2,int parameter_3,char parameter_4,int parameter_5,int parameter_6,int uni_para);
float v_ore_match_regexp( unsigned int parameter_1,char parameter_2,float parameter_3,int uni_para);
double v_ore_cmp_lessmore( short parameter_1,float parameter_2,double parameter_3);
void v_ore_cmp_eq( double parameter_1,unsigned int parameter_2,short parameter_3);
void v_ore_cmp( int parameter_1,double parameter_2,char parameter_3,char parameter_4,int uni_para);
void v_ore_set( double parameter_1,double parameter_2,long parameter_3);
unsigned int v_ore_value_str_from_ptr( char parameter_1,char parameter_2,int parameter_3);
unsigned int v_ore_expr0( int parameter_1,float parameter_2,double parameter_3,short parameter_4);
unsigned int v_ore_expr( float parameter_1,float parameter_2);
void v_ore_get( int parameter_1,short parameter_2);
int v_ore_index_ref( float parameter_1,char parameter_2,float parameter_3,int parameter_4);
unsigned int v_ore_value_hash_from_khash( float parameter_1,unsigned int parameter_2);
void v_ore_parse_str( char parameter_1,long parameter_2);
int v_ore_parse_num( int parameter_1,unsigned int parameter_2);
double v_ore_value_false();
unsigned int v_ore_value_true();
long v_ore_eval( float parameter_1,short parameter_2,int uni_para);
int v_ore_value_array_from_klist( double parameter_1,unsigned int parameter_2);
short v_ore_func_call( double parameter_1,short parameter_2,int parameter_3,int parameter_4,int uni_para);
float v_ore_prop( long parameter_1,double parameter_2);
void v_ore_destroy( short parameter_1);
int v_ore_value_real_free( float parameter_1,int uni_para);
void v_ore_value_unref( char parameter_1,int uni_para);
void v_ore_value_ref( int parameter_1);
unsigned int v_ore_value_nil();
void v_ore_define( long parameter_1,double parameter_2,short parameter_3,int uni_para);
void v_ore_define_cfunc( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,double parameter_5,int uni_para);
double v_ore_new();
long v_ore_err_print( short parameter_1);
float v_mpc_tok_parens( int parameter_1,short parameter_2);
double v_mpc_ast_add_tag( char parameter_1,unsigned int parameter_2);
float v_mpca_add_tag( float parameter_1,int parameter_2);
float v_mpc_ast_add_root( float parameter_1);
float v_mpca_root( unsigned int parameter_1);
long v_mpcaf_grammar_id( long parameter_1);
float v_mpc_tok_braces( int parameter_1,unsigned int parameter_2);
char v_mpc_undefine( float parameter_1);
void v_mpc_cleanup( int parameter_1,char parameter_2);
void v_mpc_err_delete( long parameter_1);
void v_mpc_err_char_unescape( char parameter_1);
void v_mpc_err_string_cat( char parameter_1,int parameter_2,int parameter_3,char parameter_4,float parameter_5);
int v_mpc_err_string( long parameter_1);
unsigned int v_mpc_input_delete( short parameter_1);
int v_mpc_err_export( float parameter_1,unsigned int parameter_2);
char v_mpc_err_count( int parameter_1,unsigned int parameter_2,int parameter_3);
short v_mpc_err_repeat( short parameter_1,short parameter_2,char parameter_3);
long v_mpc_err_many1( int parameter_1,double parameter_2);
float v_mpcf_input_state_ast( double parameter_1,int parameter_2,double parameter_3);
double v_mpc_calloc( unsigned int parameter_1,double parameter_2,double parameter_3);
int v_mpcf_input_strfold( float parameter_1,int parameter_2,unsigned int parameter_3);
double v_mpcf_input_trd_free( char parameter_1,int parameter_2,short parameter_3);
double v_mpcf_trd_free( int parameter_1,float parameter_2);
char v_mpcf_input_snd_free( int parameter_1,int parameter_2,short parameter_3);
unsigned int v_mpcf_input_nth_free( float parameter_1,int parameter_2,short parameter_3,int parameter_4);
long v_mpcf_input_fst_free( float parameter_1,int parameter_2,unsigned int parameter_3);
float v_mpcf_fst_free( int parameter_1,long parameter_2);
double v_mpcf_trd( int parameter_1,double parameter_2);
void v_mpcf_null( int parameter_1,long parameter_2);
double v_mpc_parse_fold( unsigned int parameter_1,long parameter_2,int parameter_3,long parameter_4);
short v_mpc_err_delete_internal( short parameter_1,float parameter_2);
void v_mpc_realloc( char parameter_1,short parameter_3);
int v_mpc_err_add_expected( long parameter_1,int parameter_2,char parameter_3);
long v_mpc_err_contains_expected( double parameter_1,double parameter_2,char parameter_3);
long v_mpc_err_or( long parameter_1,long parameter_2,int parameter_3);
long v_mpc_err_merge( double parameter_1,char parameter_2,int parameter_3);
float v_mpc_parse_dtor( long parameter_1,unsigned int parameter_2,int parameter_3);
char v_mpc_input_backtrack_enable( unsigned int parameter_1);
unsigned int v_mpc_input_backtrack_disable( unsigned int parameter_1);
void v_mpc_err_new( float parameter_1,double parameter_2);
unsigned int v_mpc_input_suppress_disable();
unsigned int v_mpc_input_suppress_enable( int parameter_1);
unsigned int v_mpc_parse_apply_to( float parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4);
double v_mpc_export( int parameter_1);
long v_mpcf_input_str_ast( double parameter_1,double parameter_2);
short v_mpc_mem_ptr( int parameter_1);
short v_mpc_free( short parameter_1);
unsigned int v_mpcf_input_free( short parameter_1,int parameter_2);
int v_mpc_parse_apply( double parameter_1,long parameter_2,unsigned int parameter_3);
short v_mpc_input_state_copy( long parameter_1);
char v_mpc_input_peekc( unsigned int parameter_1);
int v_mpc_input_anchor( int parameter_1,double parameter_2,char parameter_3,char parameter_4);
long v_mpc_input_unmark( int parameter_1);
int v_mpc_input_rewind( char parameter_1);
void v_mpc_input_mark( long parameter_1);
unsigned int v_mpc_input_string( char parameter_1,double parameter_2,char parameter_3);
short v_mpc_input_satisfy( unsigned int parameter_1,unsigned int parameter_2,char parameter_3);
void v_mpc_input_noneof( float parameter_1,unsigned int parameter_2,char parameter_3);
double v_mpc_input_oneof( float parameter_1,short parameter_2,char parameter_3);
int v_mpc_input_range( char parameter_1,char parameter_2,char parameter_3,char parameter_4);
float v_mpc_input_failure( float parameter_1,char parameter_2);
unsigned int v_mpc_input_char( unsigned int parameter_1,char parameter_2,char parameter_3);
unsigned int v_mpc_input_success( long parameter_1,char parameter_2,char parameter_3);
char v_mpc_input_terminated( short parameter_1);
float v_mpc_input_buffer_get();
void v_mpc_input_buffer_in_range();
char v_mpc_input_getc( float parameter_1);
char v_mpc_input_any( unsigned int parameter_1,char parameter_2);
char v_mpc_parse_run( int parameter_1,double parameter_2,float parameter_3,unsigned int parameter_4);
void v_mpc_state_invalid();
float v_mpc_malloc( double parameter_1,char parameter_2);
char v_mpc_err_fail( float parameter_1,short parameter_2);
int v_mpc_parse_input( unsigned int parameter_1,short parameter_2,double parameter_3);
int v_mpc_parse( unsigned int parameter_1,double parameter_2);
short v_mpc_re_range_escape_char( char parameter_1);
void v_mpc_fail( long parameter_1);
long v_mpcf_re_range( long parameter_1);
unsigned int v_mpc_boundary_anchor( char parameter_1,char parameter_2);
void v_mpc_boundary();
void v_mpc_re_escape_char( char parameter_1);
int v_mpcf_re_escape( float parameter_1);
long v_mpc_squares( unsigned int parameter_1,unsigned int parameter_2);
void v_mpc_parens( double parameter_1,short parameter_2);
short v_mpc_brackets( char parameter_1,int parameter_2);
float v_mpcf_re_repeat( int parameter_1,unsigned int parameter_2);
long v_mpc_lift( short parameter_1);
unsigned int v_mpcf_re_and( int parameter_1,char parameter_2);
double v_mpcf_re_or( int parameter_1,unsigned int parameter_2);
void v_mpc_re( float parameter_1);
long v_mpcf_unescape_regex( short parameter_1);
double v_mpcaf_grammar_regex( float parameter_1);
short v_mpc_regex_lit();
short v_mpcaf_grammar_char( short parameter_1);
float v_mpc_char_lit();
double v_mpcf_str_ast( short parameter_1);
float v_mpc_ast_tag( float parameter_1,int parameter_2);
long v_mpca_tag( short parameter_1,float parameter_2);
unsigned int v_mpc_state();
unsigned int v_mpc_ast_state( short parameter_1,double parameter_2);
long v_mpcf_state_ast( int parameter_1,long parameter_2);
char v_mpca_state( int parameter_1);
double v_mpcf_unescape_new( float parameter_1,float parameter_2,float parameter_3);
double v_mpcf_unescape( char parameter_1);
unsigned int v_mpcaf_grammar_string( int parameter_1);
float v_mpcf_int( long parameter_1);
unsigned int v_mpc_digits();
long v_mpc_int();
void v_mpc_tok_between( short parameter_1,short parameter_2,short parameter_3,unsigned int parameter_4);
int v_mpc_tok_brackets( short parameter_1,short parameter_2);
char v_mpc_count( int parameter_1,long parameter_2,char parameter_3,short parameter_4);
int v_mpca_count( int parameter_1,float parameter_2);
short v_mpc_not_lift( float parameter_1,long parameter_2,char parameter_3);
unsigned int v_mpc_not( double parameter_1,unsigned int parameter_2);
double v_mpca_not();
long v_mpca_maybe( double parameter_1);
float v_mpca_many1( float parameter_1);
float v_mpca_many( short parameter_1);
short v_mpcaf_grammar_repeat( int parameter_1,char parameter_2);
char v_mpca_and( int parameter_1,short parameter_2);
double v_mpc_pass();
short v_mpcaf_grammar_and( int parameter_1,long parameter_2);
void v_mpc_many1( long parameter_1,int parameter_2);
char v_mpca_or( int parameter_1,unsigned int parameter_2);
short v_mpcaf_grammar_or( int parameter_1,short parameter_2);
char v_mpc_sym( short parameter_1);
double v_mpc_string( double parameter_1);
char v_mpcf_nth_free( int parameter_1,int parameter_2,int parameter_3);
char v_mpcf_snd_free( int parameter_1,long parameter_2);
void v_mpc_between( int parameter_1,float parameter_2,long parameter_3,short parameter_4);
char v_mpc_noneof( float parameter_1);
void v_mpc_any();
char v_mpc_escape();
int v_mpc_string_lit();
short v_mpcf_ctor_null();
int v_mpc_maybe_lift( short parameter_1,short parameter_2);
float v_mpc_maybe( long parameter_1);
long v_mpc_digit();
char v_mpc_alphanum();
double v_mpc_char( char parameter_1);
long v_mpc_underscore();
void v_mpc_alpha();
float v_mpc_or( int parameter_1,char parameter_2);
void v_mpc_ident();
short v_mpcf_fst( int parameter_1,char parameter_2);
short v_mpc_tok( char parameter_1);
long v_mpca_stmt_afold( int parameter_1,double parameter_2);
long v_mpcf_ctor_str();
void v_mpc_ast_delete( int parameter_1);
void v_mpc_delete( short parameter_1);
int v_mpc_ast_delete_no_children( int parameter_1);
long v_mpc_ast_add_child( short parameter_1,unsigned int parameter_2);
int v_mpc_ast_new( unsigned int parameter_1,int parameter_2);
long v_mpcf_fold_ast( int parameter_1,float parameter_2);
double v_mpc_optimise_unretained( char parameter_1,int parameter_2);
void v_mpc_optimise( unsigned int parameter_1);
char v_is_number();
float v_mpca_grammar_find_parser( char parameter_1,long parameter_2);
void v_mpca_stmt_list_apply_to( int parameter_1);
int v_mpc_undefine_and();
void v_mpc_undefine_or( float parameter_1);
void v_mpc_undefine_unretained( char parameter_1,int parameter_2);
short v_mpc_soft_delete( short parameter_1);
unsigned int v_mpca_stmt_list_delete( short parameter_1);
void v_mpca_stmt_fold( int parameter_1,int parameter_2);
float v_mpc_predictive( short parameter_1);
void v_mpcf_free( int parameter_1);
int v_mpc_expectf( short parameter_1,double parameter_2,double parameter_3);
char v_mpc_oneof( long parameter_1);
float v_mpc_whitespace();
int v_mpcf_strfold( int parameter_1,short parameter_2);
long v_mpc_many( float parameter_1,long parameter_2);
unsigned int v_mpc_whitespaces();
int v_mpc_apply( double parameter_1);
short v_mpc_blank();
float v_mpc_strip( char parameter_1);
void v_mpcf_dtor_null( short parameter_1);
float v_mpc_eoi_anchor( char parameter_1,char parameter_2);
short v_mpc_eoi();
unsigned int v_mpc_soi_anchor( char parameter_1,char parameter_2);
void v_mpc_anchor( float parameter_1,char parameter_2);
double v_mpc_expect( double parameter_1,short parameter_2);
unsigned int v_mpc_soi();
int v_mpcf_snd( int parameter_1,char parameter_2);
double v_mpc_and( int parameter_1,char parameter_2,int parameter_3);
long v_mpc_whole( short parameter_1,long parameter_2);
double v_mpc_total( long parameter_1,float parameter_2);
float v_mpc_apply_to( short parameter_1);
long v_mpc_failf( long parameter_1,float parameter_2);
int v_mpc_define( double parameter_1,char parameter_2);
long v_mpca_lang_st( double parameter_1,char parameter_2);
short v_mpc_state_new();
int v_mpc_input_new_string( short parameter_1,unsigned int parameter_2);
int v_mpca_lang( int parameter_1,short parameter_2,short parameter_3);
int v_mpc_undefined();
char v_mpc_new();
char v_usage( char parameter_1);
unsigned int v_parse_args( int parameter_1,char parameter_2);
double v_ore_cfunc_exit( long parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		unsigned_int_1 = v_ore_value_nil();

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_2 = double_1 + double_2;
	}
	int_1 = int_1;
	return double_2;
}
unsigned int v_ore_cfunc_environ( char parameter_1,int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = v_ore_value_nil();

		double_1 = double_1 * double_1;
		int_3 = int_1 + int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_1 = 1;
			float float_2 = 1;
			char char_1 = 1;
			float_1 = float_1 + float_2;
			if(1)
			{
				short short_1 = 1;
				short_1 = short_1 * short_1;
			}
			char_1 = char_1 * char_2;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				int int_4 = 1;
				short short_2 = 1;
				short short_3 = 1;
				double double_3 = 1;
				unsigned_int_1 = v_ore_value_hash_from_khash(float_3,unsigned_int_1);

				unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
				unsigned_int_3 = v_ore_value_str_from_ptr(char_2,char_2,int_3);

				int_1 = int_3 + int_4;
				double_1 = double_2 + double_1;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
				short_3 = short_2 + short_3;
				double_1 = double_3 * double_2;
			}
		}
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
	double_1 = double_1 * double_2;
	return unsigned_int_4;
}
short v_mpc_ast_print_depth( unsigned int parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		int_1 = int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	return short_1;
}
void v_mpc_ast_print( int parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_1 = v_mpc_ast_print_depth(unsigned_int_1,int_1,long_1);

	short_3 = short_1 * short_2;
}
double v_ore_value_str_ptr()
{
	double double_1 = 1;
	return double_1;
}
int v_mpc_input_new_file( long parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_2;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_3 * int_1;
	short_1 = v_mpc_state_new();

	float_1 = float_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_3 * int_2;
	double_1 = double_1 * double_2;
	char_2 = char_1 + char_2;
	double_1 = double_2 * double_3;
	double_2 = double_3 + double_1;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
	double_4 = double_1 + double_2;
	return int_3;
}
int v_mpc_parse_file( int parameter_1,long parameter_2,int parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = v_mpc_input_delete(short_1);

	int_4 = int_3 + int_4;
	int_4 = v_mpc_parse_input(unsigned_int_1,short_1,double_1);

	short_3 = short_2 + short_2;
	int_3 = v_mpc_input_new_file(long_1,char_1);

	float_3 = float_1 + float_2;
	return int_5;
}
short v_mpc_err_file( float parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char_1 = char_2;
	short_1 = v_mpc_state_new();

	double_3 = double_1 + double_2;
	char_1 = char_3 * char_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1;
	int_1 = int_1;
	short_2 = short_2 + short_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	long_1 = long_1;
	int_1 = int_1 * int_1;
	return short_2;
}
int v_mpc_parse_contents( float parameter_1,float parameter_2,char parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		short_1 = v_mpc_err_file(float_1,short_2);

		int_2 = v_mpc_parse_file(int_1,long_1,int_2,char_1);

		double_1 = double_1 + double_2;
		double_1 = double_1;
	}
	short_2 = short_2 + short_1;
	double_1 = double_3 + double_3;
	return int_1;
}
char v_ore_cfunc_load( char parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	int_1 = int_1 * int_1;
	int_1 = v_mpc_parse_contents(float_1,float_2,char_1);

	float_1 = float_2;
	if(1)
	{
		long long_3 = 1;
		double_1 = double_1 * double_1;
		long_1 = v_ore_eval(float_2,short_1,-1 );

		long_1 = v_mpc_ast_add_child(short_1,unsigned_int_1);

		long_2 = long_2 * long_3;
	}
	if(1)
	{
		int int_3 = 1;
		long_1 = long_2;
		int_2 = int_2 + int_2;
		unsigned_int_1 = v_ore_value_nil();

		double_1 = v_ore_value_str_ptr();

		int_3 = int_3 + int_1;
	}
	if(1)
	{
		int_2 = int_1;
	}
	v_mpc_err_delete(long_2);

	v_mpc_ast_print(int_2);

	char_2 = char_1 + char_1;
	char_3 = char_1 * char_2;
	return char_3;
	long_4 = v_ore_err_print(short_2);

}
void v_ore_cfunc_typeof( int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_ore_value_str_from_ptr(char_1,char_2,int_1);

}
unsigned int v_ore_cfunc_range( char parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	short_2 = short_1 * short_1;
	long_2 = long_1 + long_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "J(") > 0)
	{
		double double_1 = 1;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_6 * unsigned_int_4;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_8;
		}
		int_2 = int_1 + int_1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_1 = v_ore_value_array_from_klist(double_2,unsigned_int_9);

		int_4 = int_2 * int_3;
	}
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short short_4 = 1;
		long long_3 = 1;
		int int_5 = 1;
		short_3 = short_4;
		long_2 = long_3;
		unsigned_int_2 = v_ore_value_nil();

		int_2 = int_1 * int_5;
	}
	return unsigned_int_8;
}
void v_ore_cfunc_len( unsigned int parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_3 = double_1 + double_2;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_4 = unsigned_int_4;
	}
	double_2 = double_1 + double_1;
	int_1 = int_2;
	long_2 = long_1 * long_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_2 = v_ore_value_nil();

}
char v_ore_cfunc_println( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int_1 = v_ore_cfunc_print(short_1,int_2,short_2);

	unsigned_int_1 = v_ore_value_nil();

	double_2 = double_1 * double_1;
	long_1 = long_1 * long_2;
	return char_1;
}
long v_ore_cfunc_to_string( short parameter_1,int parameter_2,short parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	return long_1;
	unsigned_int_1 = v_ore_value_str_from_ptr(char_1,char_1,int_1);

	int_2 = v_ore_value_to_str(short_1,long_1);

}
short v_kputc( int parameter_1,short parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 + int_2;
		}
		if(1)
		{
		}
	}
	float_1 = float_1 + float_1;
	long_1 = long_2;
	return short_1;
}
int v_kvsprintf( long parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	float_2 = float_1 + float_2;
	short_2 = short_1 * short_1;
	char_2 = char_1 + char_1;
	float_2 = float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_4 = 1;
		short short_5 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		short_1 = short_2 * short_3;
		long_2 = long_1 + long_2;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 + int_1;
		short_4 = short_4 * short_5;
	}
	float_3 = float_2 + float_1;
	return int_1;
}
int v_ksprintf( short parameter_1,unsigned int parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1 + long_2;
	int_1 = int_1;
	int_2 = v_kvsprintf(long_3,int_2,int_1);

	short_1 = short_1 * short_1;
	double_1 = double_1 + double_1;
	float_1 = float_2;
	return int_1;
}
int v_kputsn( long parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "!") < 0)
	{
		long long_1 = 1;
		long_1 = long_1;
		int_2 = int_1 + int_1;
		int_2 = int_1 + int_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
		}
	}
	int_2 = int_2 + int_1;
	float_1 = float_1 + float_1;
	int_1 = int_1 + int_1;
	return int_1;
}
short v_kputs( unsigned int parameter_1,short parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return short_1;
	int_1 = v_kputsn(long_1,int_1,unsigned_int_1);

}
int v_ore_value_to_str( short parameter_1,long parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_6 = 1;
	float float_4 = 1;
	int int_7 = 1;
	long long_4 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	int int_9 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_4 = 1;
	long long_8 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float_1 = float_1;
	double_2 = double_1 + double_2;
	int_1 = int_2;
	if(1)
	{
		int_3 = int_1 + int_1;
	}
	if(1)
	{
		long_1 = long_2;
	}
	int_4 = int_4;
	long_1 = long_2 + long_1;
	int_1 = int_2 * int_5;
	int_3 = int_1 * int_5;
	short_1 = v_kputs(unsigned_int_1,short_1);

	double_3 = double_1;
	long_3 = long_1 + long_3;
	double_4 = double_5;
	short_1 = short_2;
	int_1 = v_ksprintf(short_3,unsigned_int_1,short_3);

	int_3 = int_5 * int_2;
	char_1 = char_1 + char_2;
	double_7 = double_6 * double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		}
		double_2 = double_2;
		float_1 = float_1 + float_1;
		float_3 = float_1 + float_2;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_1;
	char_3 = char_3 + char_1;
	short_3 = short_3 + short_2;
	int_3 = int_4 * int_4;
	int_6 = int_2 + int_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double_7 = double_2 * double_2;
		}
		if(1)
		{
			float float_5 = 1;
			float_5 = float_3 + float_4;
		}
		double_3 = double_7 + double_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		int_2 = int_7 + int_7;
		long_2 = long_3 * long_4;
		int_1 = int_8;
	}
	int_5 = int_5 * int_5;
	long_1 = long_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	long_4 = long_2 + long_1;
	long_2 = long_5 + long_1;
	float_4 = float_2 * float_4;
	float_2 = float_4;
	long_7 = long_6 + long_3;
	int_4 = int_9 + int_8;
	char_1 = char_4 + char_2;
	char_3 = char_1 + char_5;
	double_2 = double_6;
	int_5 = int_7 * int_4;
	short_4 = v_kputc(int_7,short_3);

	short_2 = short_1 + short_4;
	long_8 = long_6 * long_5;
	unsigned_int_3 = unsigned_int_5;
	double_3 = double_6 + double_3;
	double_9 = double_8 + double_5;
	return int_4;
}
int v_ore_cfunc_print( short parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = v_ore_value_nil();

	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
			double_3 = double_2 + double_1;
		}
		double_1 = double_1;
		double_3 = double_2 * double_4;
		double_3 = double_3 * double_4;
		float_2 = float_1 + float_1;
	}
	return int_1;
	int_2 = v_ore_value_to_str(short_1,long_1);

}
long v_ore_cfunc_dump_env( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_ore_cfunc_print(short_1,int_1,short_1);

	unsigned_int_1 = v_ore_value_nil();

	char_1 = char_1 * char_1;
	return long_1;
}
int v_ore_is_true( unsigned int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1;
	float_1 = float_1 + float_2;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	int_1 = int_1 + int_1;
	float_1 = float_2;
	float_3 = float_3 + float_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
	int_1 = int_2 + int_2;
	return int_3;
}
unsigned int v_ore_value_env_from_context( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = v_ore_value_nil();

	char_2 = char_1 * char_1;
	double_1 = double_1;
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		short_1 = short_1 * short_1;
		int_1 = int_1 + int_1;
	}
	float_2 = float_1 + float_2;
	float_1 = float_1;
	return unsigned_int_2;
}
unsigned int v_ore_call( long parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	v_ore_find_statements(unsigned_int_1);

	char_2 = char_1 + char_1;
	v_ore_define(long_1,double_3,short_1,-1 );

	long_1 = long_1;
	long_1 = v_ore_eval(float_1,short_1,-1 );

	double_2 = double_1;
	v_ore_get(int_1,short_1);

	double_3 = v_ore_new();

	unsigned_int_1 = v_ore_value_env_from_context(char_1);

	double_1 = double_2;
	float_2 = v_ore_prop(long_2,double_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_2 + double_2;
	unsigned_int_2 = v_ore_value_nil();

	double_3 = v_ore_bind_args(long_2,long_2,short_1,long_1);

	long_1 = long_2 * long_2;
	return unsigned_int_1;
}
double v_ore_bind_args( long parameter_1,long parameter_2,short parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	v_ore_define(long_1,double_3,short_1,-1 );

	double_2 = double_1 + double_3;
	if(1)
	{
		unsigned_int_1 = v_ore_value_nil();

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	float_1 = float_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			long_2 = v_ore_eval(float_1,short_2,-1 );

			short_1 = short_2 * short_1;
			double_1 = double_4;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			if(1)
			{
				double_4 = double_2 * double_4;
				double_3 = double_2;
			}
		}
		if(1)
		{
			long long_3 = 1;
			long_2 = long_2 * long_3;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			int_1 = int_1 + int_1;
			int_1 = v_ore_value_array_from_klist(double_2,unsigned_int_4);

			char_1 = char_2;
		}
	}
	unsigned_int_3 = unsigned_int_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			float float_3 = 1;
			float_2 = float_3 + float_1;
			float_1 = float_3 + float_1;
		}
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_2 = 1;
			long_5 = long_4 + long_1;
			unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
			}
			int_1 = int_1 + int_2;
		}
		if(1)
		{
			if(1)
			{
				float_1 = float_2;
			}
		}
	}
	return double_4;
}
void v_ore_find_statements( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
			}
		}
	}
}
char v_ore_class_new( int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_4 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	char_3 = char_1 + char_2;
	long_3 = long_1 * long_2;
	v_ore_find_statements(unsigned_int_1);

	short_1 = short_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_1 = int_1;
	}
	if(1)
	{
		v_ore_define(long_4,double_1,short_1,-1 );

		int_2 = int_2 + int_1;
		if(1)
		{
			v_ore_find_global(long_5,short_1);

			unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		}
	}
	double_1 = v_ore_new();

	unsigned_int_3 = v_ore_value_nil();

	double_1 = double_1 + double_1;
	double_2 = double_2 * double_3;
	double_3 = double_4;
	int_2 = int_2 * int_1;
	double_3 = double_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	return char_1;
	long_1 = v_ore_eval(float_1,short_1,-1 );

}
void v_ore_find_global( long parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double_1 = double_2;
	double_3 = double_1 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_1 = v_ore_prop(long_1,double_2);

		double_4 = double_2 * double_4;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			int_1 = int_1 * int_1;
		}
	}
}
short v_ore_object_new( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_5 = 1;
	int_1 = int_2;
	int_3 = int_1 + int_3;
	short_2 = short_1 * short_2;
	double_1 = double_1 + double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "f") < 0)
	{
		int_2 = int_3 * int_2;
		float_1 = v_ore_prop(long_1,double_2);

		double_1 = double_3 * double_4;
	}
	short_4 = short_3 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_2 = 1;
		float_1 = float_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	char_2 = char_1 + char_2;
	short_1 = v_ore_func_call(double_4,short_2,int_2,int_3,-1 );

	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	char_1 = char_3 * char_4;
	char_2 = v_ore_class_new(int_2,unsigned_int_1);

	short_1 = short_2;
	double_3 = v_ore_bind_args(long_2,long_3,short_4,long_3);

	unsigned_int_2 = v_ore_value_nil();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_5 + char_3;
	double_1 = double_4 + double_4;
	return short_4;
	v_ore_find_global(long_2,short_3);

}
double v_ore_define_class( unsigned int parameter_1,char parameter_2,unsigned int parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 + short_2;
	v_ore_define(long_1,double_1,short_3,-1 );

	int_1 = int_1 * int_1;
	char_2 = char_1 + char_1;
	return double_2;
	unsigned_int_1 = v_ore_value_nil();

}
float v_toi( int parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 495)
	{
		vul_var = vul_var + 1;
	}
	free(vul_var);
	int_1 = int_1 + int_2;
	int_3 = int_1 * int_2;
}
short v_hextoi( short parameter_1,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float_1 = v_toi(int_1,uni_para);

	return short_1;
}
int v_match_op( int parameter_1,float parameter_2,unsigned int parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short_1 = v_hextoi(short_1,uni_para);

	short_3 = short_2 + short_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	return int_1;
}
int v_match_set( int parameter_1,int parameter_2,long parameter_3,double parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_2;
	char controller4vul_903[3];
	fgets(controller4vul_903 ,3 ,stdin);
	if( strcmp( controller4vul_903, "/B") > 0)
	{
		int int_4 = 1;
		int_3 = v_match_op(int_2,float_1,unsigned_int_2,uni_para);

		int_3 = int_4 * int_4;
	}
	char_2 = char_1 + char_1;
	return int_3;
}
int v_is_quantifier( double parameter_1)
{
	int int_1 = 1;
	return int_1;
}
double v_bar( long parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,float parameter_5,int parameter_6,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_match_set(int_1,int_2,long_1,double_1,uni_para);

	double_1 = double_2 * double_2;
	return double_1;
}
int v_doh( char parameter_1,int parameter_2,long parameter_3,int parameter_4,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char_1 = char_1 * char_1;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_902[3];
		fgets(controller4vul_902 ,3 ,stdin);
		if( strcmp( controller4vul_902, "xu") < 0)
		{
			short short_1 = 1;
			double_1 = v_bar(long_2,int_1,unsigned_int_1,int_2,float_1,int_3,uni_para);

			short_1 = short_1;
		}
	}
	return int_3;
}
float v_baz( int parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short_2 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		char controller4vul_901[3];
		fgets(controller4vul_901 ,3 ,stdin);
		if( strcmp( controller4vul_901, "mg") < 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int_1 = v_doh(char_1,int_1,long_1,int_1,uni_para);

			double_2 = double_1 * double_2;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		}
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 + char_2;
		}
	}
	return float_1;
}
long v_setup_branch_points( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int_3 = int_1 * int_2;
	int_1 = int_4 * int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_5 = int_2 + int_3;
	char_2 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	return long_1;
}
double v_is_metacharacter( unsigned int parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	long_1 = long_1 * long_1;
	return double_1;
}
short v_op_len( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_1 = int_2;
	return short_1;
}
int v_set_len( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	return int_1;
	short_1 = v_op_len(double_1);

}
char v_get_op_len( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int_1 = v_set_len(float_1,int_1);

	short_1 = v_op_len(double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
short v_foo( long parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,short parameter_5,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_5 = 1;
	float float_5 = 1;
	int_2 = int_1 + int_2;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double_1 = double_2 + double_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
			double_3 = double_1 * double_3;
			int_3 = int_2 * int_1;
			int_3 = int_2 * int_1;
		}
		char controller4vul_899[3];
		fgets(controller4vul_899 ,3 ,stdin);
		if( strcmp( controller4vul_899, "zp") < 0)
		{
			long_1 = long_1 + long_2;
			char controller4vul_900[2];
			fgets(controller4vul_900 ,2 ,stdin);
			if( strcmp( controller4vul_900, "<") > 0)
			{
				char char_3 = 1;
				char char_4 = 1;
				float_1 = v_baz(int_2,int_1,char_1,uni_para);

				int_1 = int_2 * int_2;
				char_4 = char_3 * char_3;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			}
		}
		if(1)
		{
			long long_3 = 1;
			int int_5 = 1;
			int_1 = int_2 * int_2;
			long_3 = long_2 + long_1;
			int_5 = int_1 + int_4;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
			double_3 = double_2 * double_1;
			short_1 = short_1 * short_1;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			long long_4 = 1;
			float float_2 = 1;
			unsigned_int_2 = unsigned_int_6;
			int_4 = int_1 * int_3;
			long_1 = long_1 * long_4;
			float_4 = float_2 * float_3;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_6;
		}
	}
	long_5 = long_5;
	float_4 = float_5 * float_3;
	return short_1;
}
int v_slre_match( short parameter_1,char parameter_2,int parameter_3,char parameter_4,int parameter_5,int parameter_6,int uni_para)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short_1 = v_foo(long_1,int_1,unsigned_int_1,int_2,short_1,uni_para);

	double_2 = double_1 * double_1;
	float_2 = float_1 + float_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_1 * short_1;
	unsigned_int_4 = unsigned_int_2;
	short_2 = short_2;
	return int_2;
}
float v_ore_match_regexp( unsigned int parameter_1,char parameter_2,float parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	char controller4vul_896[2];
	fgets(controller4vul_896 ,2 ,stdin);
	if( strcmp( controller4vul_896, "9") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_1 * double_1;
		char controller4vul_897[2];
		fgets(controller4vul_897 ,2 ,stdin);
		if( strcmp( controller4vul_897, "s") > 0)
		{
			double_1 = double_1;
			int_3 = int_1 + int_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int int_4 = 1;
				char controller4vul_898[3];
				fgets(controller4vul_898 ,3 ,stdin);
				if( strcmp( controller4vul_898, "4D") < 0)
				{
					int_3 = v_slre_match(short_1,char_1,int_2,char_2,int_1,int_2,uni_para);

					int_1 = int_1;
				}
				unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
				float_3 = float_1 + float_2;
				int_4 = int_4;
			}
		}
	}
	return float_4;
}
double v_ore_cmp_lessmore( short parameter_1,float parameter_2,double parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "B") == 0)
	{
	}
	long_1 = long_1;
	float_1 = float_2;
	int_1 = int_1 + int_1;
	return double_1;
}
void v_ore_cmp_eq( double parameter_1,unsigned int parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
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
	}
	if(1)
	{
	}
	short_2 = short_1 * short_1;
}
void v_ore_cmp( int parameter_1,double parameter_2,char parameter_3,char parameter_4,int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char controller4vul_895[2];
	fgets(controller4vul_895 ,2 ,stdin);
	if( strcmp( controller4vul_895, "#") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		float_1 = v_ore_match_regexp(unsigned_int_1,char_1,float_1,uni_para);

		double_1 = double_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_2 = char_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
	}
}
void v_ore_set( double parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	v_ore_value_ref(int_1);

	v_ore_value_unref(char_1,-1 );

	int_1 = int_1 + int_1;
	unsigned_int_1 = v_ore_value_nil();

}
unsigned int v_ore_value_str_from_ptr( char parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_3 = double_1 * double_2;
		char_2 = char_1 * char_2;
	}
	float_1 = float_1 * float_1;
	short_3 = short_1 * short_2;
	double_2 = double_2 * double_2;
	return unsigned_int_2;
	unsigned_int_2 = v_ore_value_nil();

}
unsigned int v_ore_expr0( int parameter_1,float parameter_2,double parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	if(1)
	{
		int_2 = int_1 + int_1;
		short_3 = short_1 * short_2;
		int_3 = int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			long long_2 = 1;
			long_2 = long_2 * long_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			float_1 = float_1 * float_2;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			double_1 = double_1 + double_2;
		}
	}
	if(1)
	{
		double_4 = double_3 + double_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	}
	float_2 = float_1 * float_1;
	if(1)
	{
		unsigned_int_2 = v_ore_value_nil();

		float_1 = float_1 * float_1;
		if(1)
		{
			double_4 = double_3 * double_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_3;
		}
		if(1)
		{
			int_3 = int_2 + int_1;
		}
		if(1)
		{
			double_5 = double_2;
		}
		if(1)
		{
			short_1 = short_2;
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_3 = float_1 * float_1;
			float_3 = float_4 + float_3;
		}
	}
	if(1)
	{
		char_2 = char_1 * char_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	unsigned_int_2 = v_ore_value_str_from_ptr(char_2,char_2,int_2);

	unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
	int_2 = int_2 + int_3;
	if(1)
	{
		float float_5 = 1;
		if(1)
		{
			char_1 = char_3 * char_1;
		}
		if(1)
		{
			float_5 = float_2;
		}
		if(1)
		{
			int_1 = int_3 * int_3;
		}
		if(1)
		{
			int int_4 = 1;
			int_4 = int_1 * int_3;
			double_2 = double_3 + double_5;
		}
		short_1 = short_3 + short_2;
		float_2 = float_5 + float_1;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
		int_2 = int_2 * int_1;
		double_3 = double_1 * double_3;
	}
	if(1)
	{
		double_3 = double_4 + double_2;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	}
	unsigned_int_5 = unsigned_int_3;
	char_1 = char_3;
	int_6 = int_3 * int_5;
	return unsigned_int_1;
}
unsigned int v_ore_expr( float parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = v_ore_expr0(int_1,float_1,double_1,short_1);

	int_1 = int_1 * int_1;
	long_1 = v_ore_eval(float_2,short_2,-1 );

	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_3;
		double_2 = double_1;
	}
	return unsigned_int_1;
}
void v_ore_get( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	int_1 = int_1;
	double_2 = double_1 * double_1;
	short_1 = short_1 * short_1;
	int_1 = int_2 * int_2;
	int_1 = int_3;
	float_2 = float_1 + float_1;
	unsigned_int_2 = v_ore_value_nil();

	short_1 = short_2 + short_2;
	int_1 = int_2 + int_4;
	float_4 = float_1 + float_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	}
	short_1 = short_2 + short_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	float_1 = float_4 + float_5;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	double_1 = double_1 + double_3;
}
int v_ore_index_ref( float parameter_1,char parameter_2,float parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	int int_7 = 1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		int int_2 = 1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			double_1 = double_1 + double_1;
		}
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		long_1 = long_2;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				if(1)
				{
					short short_2 = 1;
					unsigned_int_2 = unsigned_int_5;
					short_2 = short_1 + short_2;
				}
			}
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		}
		unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		int int_3 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_6;
			int_5 = int_3 * int_4;
		}
		double_1 = double_1 + double_2;
		if(1)
		{
			short short_4 = 1;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
			short_4 = short_3 + short_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
				int_4 = int_4 * int_1;
			}
			int_3 = int_5 + int_4;
		}
		if(1)
		{
			float_1 = float_1 + float_1;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		short_1 = short_3;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			float float_2 = 1;
			unsigned_int_7 = unsigned_int_6 + unsigned_int_2;
			int_1 = int_4 + int_4;
			if(1)
			{
				unsigned_int_7 = unsigned_int_4;
				double_2 = double_2;
			}
			v_ore_value_unref(char_1,-1 );

			float_1 = float_2;
		}
		if(1)
		{
			int int_6 = 1;
			int_6 = int_6 * int_4;
			if(1)
			{
			}
		}
	}
	long_3 = long_3 + long_1;
	int_4 = int_1 + int_7;
	return int_5;
}
unsigned int v_ore_value_hash_from_khash( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "!v") > 0)
	{
		short_1 = short_1 * short_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_3 = v_ore_value_nil();

	short_3 = short_1 + short_2;
	double_2 = double_1 + double_1;
	return unsigned_int_2;
}
void v_ore_parse_str( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = v_ore_value_nil();

	char_3 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	double_1 = double_1 * double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		int_1 = int_2;
		long_1 = long_1 * long_1;
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 * double_1;
	}
}
int v_ore_parse_num( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		int int_1 = 1;
		float_1 = float_1 + float_1;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		double double_1 = 1;
		int int_4 = 1;
		double_1 = double_1;
		int_2 = int_4;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		short_1 = short_1 + short_2;
	}
	return int_3;
}
double v_ore_value_false()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
unsigned int v_ore_value_true()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_3 = float_1 + float_2;
	int_2 = int_1 + int_1;
	return unsigned_int_1;
}
long v_ore_eval( float parameter_1,short parameter_2,int uni_para)
{
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		int_1 = int_1 * int_2;
		char controller4vul_894[3];
		fgets(controller4vul_894 ,3 ,stdin);
		if( strcmp( controller4vul_894, "DQ") < 0)
		{
			v_ore_cmp(int_3,double_1,char_1,char_2,uni_para);

			short_2 = short_1 * short_1;
			double_1 = double_1;
		}
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, ",") < 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		double_1 = double_2 * double_2;
		short_2 = short_2 + short_3;
		float_1 = float_2;
		short_4 = short_4 * short_1;
	}
	return long_1;
}
int v_ore_value_array_from_klist( double parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_ore_value_nil();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double_1 = double_1;
		double_1 = double_1 * double_2;
	}
	char_1 = char_1;
	double_1 = double_2 + double_2;
	return int_1;
}
short v_ore_func_call( double parameter_1,short parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_5 = 1;
	if(1)
	{
		char_3 = char_1 * char_2;
		char_5 = char_4 * char_1;
		long_2 = long_1 * long_1;
	}
	double_3 = double_1 * double_2;
	char_5 = char_1 + char_3;
	double_4 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_5 = 1;
		if(1)
		{
			double double_5 = 1;
			short short_1 = 1;
			short short_3 = 1;
			long_5 = long_3 + long_4;
			double_3 = double_5 + double_4;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				long long_6 = 1;
				long_2 = long_1 * long_6;
			}
			short_3 = short_1 + short_2;
		}
		char controller4vul_892[3];
		fgets(controller4vul_892 ,3 ,stdin);
		if( strcmp( controller4vul_892, "[Y") > 0)
		{
			char controller4vul_893[3];
			fgets(controller4vul_893 ,3 ,stdin);
			if( strcmp( controller4vul_893, "OK") > 0)
			{
				long_3 = v_ore_eval(float_1,short_2,uni_para);

				long_5 = long_2 + long_1;
			}
		}
		if(1)
		{
			if(1)
			{
				double double_6 = 1;
				char char_6 = 1;
				double_1 = double_6 * double_2;
				char_1 = char_6 * char_2;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			char_5 = char_4 * char_5;
		}
	}
	long_4 = long_2 + long_4;
	if(1)
	{
		short short_4 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short_2 = short_2 * short_4;
		if(1)
		{
			short short_6 = 1;
			short_6 = short_4 * short_5;
		}
		double_2 = double_4;
		int_1 = int_1;
		unsigned_int_1 = unsigned_int_3;
	}
	return short_5;
}
float v_ore_prop( long parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	long_1 = long_1 * long_2;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	return float_3;
	unsigned_int_1 = v_ore_value_nil();

}
void v_ore_destroy( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char_2 = char_1 * char_2;
	short_1 = short_1 * short_1;
	float_1 = float_1;
}
int v_ore_value_real_free( float parameter_1,int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	float float_5 = 1;
	double double_4 = 1;
	char controller4vul_891[3];
	fgets(controller4vul_891 ,3 ,stdin);
	if( strcmp( controller4vul_891, "eP") > 0)
	{
		short_1 = v_ore_func_call(double_1,short_2,int_1,int_2,uni_para);

		int_2 = int_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_1 + float_1;
	char_1 = char_1 * char_2;
	long_1 = long_1 + long_2;
	if(1)
	{
		int_4 = int_3 + int_1;
	}
	unsigned_int_2 = unsigned_int_1;
	long_2 = long_3 * long_3;
	double_1 = double_1;
	long_2 = long_3 + long_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	char_1 = char_3 * char_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	float_1 = float_2;
	float_4 = float_2 + float_3;
	if(1)
	{
		char char_4 = 1;
		char_3 = char_4 * char_4;
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
	int_4 = int_3;
	double_2 = double_1 + double_2;
	if(1)
	{
		int_1 = int_2;
	}
	unsigned_int_4 = unsigned_int_5 * unsigned_int_6;
	int_3 = int_2 * int_5;
	short_2 = short_1 * short_3;
	if(1)
	{
		int_1 = int_1 + int_3;
	}
	float_5 = float_4 + float_4;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 + double_2;
	}
	int_5 = int_4 * int_2;
	float_2 = float_1 + float_5;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_7;
	double_2 = double_4 + double_1;
	int_1 = int_4 + int_4;
	return int_1;
}
void v_ore_value_unref( char parameter_1,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char controller4vul_890[2];
	fgets(controller4vul_890 ,2 ,stdin);
	if( strcmp( controller4vul_890, "5") < 0)
	{
		int_1 = v_ore_value_real_free(float_1,uni_para);

		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	char_2 = char_1 + char_1;
	if(1)
	{
		long_1 = long_2;
	}
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	double_4 = double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_2;
	}
	char_4 = char_1 + char_3;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 + long_2;
	}
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	double_3 = double_2 * double_5;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_2 * long_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	char_2 = char_5 + char_4;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		double_4 = double_2;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	double_2 = double_2 * double_1;
}
void v_ore_value_ref( int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	char_3 = char_1 + char_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_2;
	}
	long_3 = long_1 * long_2;
	long_4 = long_3 + long_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	char_6 = char_4 + char_5;
	long_4 = long_1 * long_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	char_5 = char_3;
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "cZ") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	double_1 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	}
	char_5 = char_5;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
}
unsigned int v_ore_value_nil()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 * int_2;
	return unsigned_int_1;
}
void v_ore_define( long parameter_1,double parameter_2,short parameter_3,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	float_1 = float_1 * float_2;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2;
	char controller4vul_889[2];
	fgets(controller4vul_889 ,2 ,stdin);
	if( strcmp( controller4vul_889, "5") < 0)
	{
		v_ore_value_unref(char_1,uni_para);

		long_1 = long_1;
	}
	int_2 = int_1 * int_1;
	int_2 = int_3 * int_1;
	double_1 = double_1 + double_2;
	int_4 = int_2 * int_4;
}
void v_ore_define_cfunc( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,double parameter_5,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	double double_3 = 1;
	v_ore_define(long_1,double_1,short_1,uni_para);

	double_1 = double_1 * double_2;
	int_2 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_3 * int_1;
	long_3 = long_2 * long_2;
	int_5 = int_5 + int_1;
	double_3 = double_1;
}
double v_ore_new()
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char_1 = char_1 * char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "J}") < 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	double_2 = double_1 + double_1;
	int_3 = int_3 + int_2;
	return double_2;
}
long v_ore_err_print( short parameter_1)
{
	long long_1 = 1;
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return long_1;
}
float v_mpc_tok_parens( int parameter_1,short parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return float_1;
	v_mpc_tok_between(short_1,short_1,short_1,unsigned_int_1);

}
double v_mpc_ast_add_tag( char parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") < 0)
	{
	}
	short_3 = short_1 + short_2;
	short_1 = short_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	return double_2;
}
float v_mpca_add_tag( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return float_1;
	float_1 = v_mpc_apply_to(short_1);

	double_1 = v_mpc_ast_add_tag(char_1,unsigned_int_1);

}
float v_mpc_ast_add_root( float parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	long_1 = long_2;
	long_3 = v_mpc_ast_add_child(short_1,unsigned_int_1);

	char_1 = char_1 * char_2;
	return float_1;
	int_1 = v_mpc_ast_new(unsigned_int_2,int_1);

}
float v_mpca_root( unsigned int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	return float_1;
	int_1 = v_mpc_apply(double_1);

	float_1 = v_mpc_ast_add_root(float_2);

}
long v_mpcaf_grammar_id( long parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = v_mpca_grammar_find_parser(char_1,long_1);

	char_1 = v_mpca_state(int_1);

	float_1 = v_mpca_root(unsigned_int_1);

	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2;
	float_2 = v_mpca_add_tag(float_1,int_2);

	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "[4") > 0)
	{
	}
	return long_1;
}
float v_mpc_tok_braces( int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	return float_1;
	v_mpc_tok_between(short_1,short_1,short_2,unsigned_int_1);

}
char v_mpc_undefine( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return char_1;
	v_mpc_undefine_unretained(char_1,int_1);

}
void v_mpc_cleanup( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	char_1 = v_mpc_undefine(float_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_2 = 1;
		double double_3 = 1;
		v_mpc_delete(short_2);

		double_3 = double_1 * double_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_2 * char_3;
	}
	double_5 = double_4 * double_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
}
void v_mpc_err_delete( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	double_1 = double_1 * double_1;
	int_2 = int_1 * int_1;
	int_1 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
void v_mpc_err_char_unescape( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	short_1 = short_1 + short_2;
	int_3 = int_1 + int_2;
}
void v_mpc_err_string_cat( char parameter_1,int parameter_2,int parameter_3,char parameter_4,float parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	}
	double_2 = double_1 + double_1;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
}
int v_mpc_err_string( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_3 = double_1 * double_2;
	double_2 = double_1;
	v_mpc_err_string_cat(char_1,int_1,int_1,char_1,float_1);

	short_2 = short_1 + short_1;
	int_1 = int_1;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	double_4 = double_3;
	if(1)
	{
		int int_3 = 1;
		v_mpc_err_char_unescape(char_1);

		int_3 = int_2 + int_3;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		double_3 = double_1 * double_4;
	}
	int_4 = int_2 * int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
	return int_4;
}
unsigned int v_mpc_input_delete( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_2 + int_1;
	return unsigned_int_2;
}
int v_mpc_err_export( float parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	char_3 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double_1 = v_mpc_export(int_1);

		double_1 = double_2 * double_1;
	}
	long_2 = long_1 + long_1;
	double_3 = double_3;
	float_3 = float_1 * float_2;
	return int_2;
}
char v_mpc_err_count( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short_1 = v_mpc_err_repeat(short_2,short_3,char_1);

	double_1 = double_1 * double_2;
	short_4 = v_mpc_free(short_3);

	double_3 = double_1 * double_3;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_1 * long_2;
	double_3 = double_1 * double_1;
	int_1 = int_3 + int_2;
	return char_2;
	float_1 = v_mpc_malloc(double_3,char_1);

}
short v_mpc_err_repeat( short parameter_1,short parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short short_7 = 1;
	long_3 = long_1 + long_2;
	int_3 = int_1 + int_2;
	int_2 = int_2 * int_3;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short_3 = short_1 + short_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		short_4 = v_mpc_free(short_3);

		long_2 = long_2 * long_1;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		float float_1 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		v_mpc_realloc(char_1,short_4);

		double_1 = double_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_2 = v_mpc_calloc(unsigned_int_1,double_2,double_3);

		float_2 = float_1 * float_1;
		double_3 = double_4 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		short short_5 = 1;
		float float_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		float float_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_5 = 1;
		unsigned_int_3 = unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_3 = double_2 * double_1;
		}
		long_1 = long_2 + long_2;
		int_3 = int_1 + int_4;
		short_4 = short_2 * short_5;
		float_3 = v_mpc_malloc(double_2,char_2);

		float_4 = float_3 + float_4;
		char_1 = char_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
			char_4 = char_2 + char_3;
		}
		unsigned_int_2 = unsigned_int_3;
		float_2 = float_4 + float_5;
		char_4 = char_3 * char_4;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short_5 = short_6;
		}
		unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
		short_6 = short_4 * short_4;
		int_2 = int_3 + int_5;
	}
	return short_7;
}
long v_mpc_err_many1( int parameter_1,double parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	return long_1;
	short_1 = v_mpc_err_repeat(short_1,short_2,char_1);

}
float v_mpcf_input_state_ast( double parameter_1,int parameter_2,double parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_1 = 1;
	short_1 = v_mpc_free(short_2);

	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = v_mpc_ast_state(short_3,double_1);

	long_1 = long_1 * long_1;
	int_3 = int_1 * int_1;
	short_5 = short_2 * short_4;
	return float_1;
}
double v_mpc_calloc( unsigned int parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	return double_1;
	float_1 = v_mpc_malloc(double_1,char_1);

}
int v_mpcf_input_strfold( float parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 * int_1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		short_1 = v_mpc_free(short_1);

		long_3 = long_2 * long_2;
	}
	v_mpc_realloc(char_1,short_1);

	double_1 = double_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		double_4 = double_1 * double_3;
		double_2 = v_mpc_calloc(unsigned_int_1,double_3,double_3);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return int_1;
}
double v_mpcf_input_trd_free( char parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	return double_1;
	unsigned_int_1 = v_mpcf_input_nth_free(float_1,int_1,short_1,int_2);

}
double v_mpcf_trd_free( int parameter_1,float parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	return double_1;
	char_1 = v_mpcf_nth_free(int_1,int_1,int_1);

}
char v_mpcf_input_snd_free( int parameter_1,int parameter_2,short parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	return char_1;
	unsigned_int_1 = v_mpcf_input_nth_free(float_1,int_1,short_1,int_1);

}
unsigned int v_mpcf_input_nth_free( float parameter_1,int parameter_2,short parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			short_1 = v_mpc_free(short_2);

			float_2 = float_1 * float_2;
		}
	}
	return unsigned_int_1;
}
long v_mpcf_input_fst_free( float parameter_1,int parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	return long_1;
	unsigned_int_1 = v_mpcf_input_nth_free(float_1,int_1,short_1,int_2);

}
float v_mpcf_fst_free( int parameter_1,long parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	return float_1;
	char_1 = v_mpcf_nth_free(int_1,int_2,int_3);

}
double v_mpcf_trd( int parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long_2 = long_1 + long_2;
	return double_1;
}
void v_mpcf_null( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
}
double v_mpc_parse_fold( unsigned int parameter_1,long parameter_2,int parameter_3,long parameter_4)
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_3 = 1;
	v_mpcf_null(int_1,long_1);

	float_1 = v_mpcf_fst_free(int_2,long_1);

	long_1 = v_mpcf_input_fst_free(float_1,int_1,unsigned_int_1);

	char_1 = v_mpcf_snd_free(int_1,long_2);

	double_1 = v_mpcf_trd_free(int_3,float_2);

	int_3 = v_mpcf_strfold(int_2,short_1);

	float_2 = v_mpcf_input_state_ast(double_1,int_2,double_2);

	double_3 = v_mpc_export(int_2);

	double_1 = double_3 + double_1;
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
	}
	if(1)
	{
	}
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "3P") > 0)
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
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = v_mpcf_snd(int_2,char_1);

		double_1 = v_mpcf_trd(int_1,double_2);

		char_1 = v_mpcf_input_snd_free(int_4,int_2,short_2);

		int_2 = v_mpcf_input_strfold(float_3,int_3,unsigned_int_2);

		unsigned_int_2 = unsigned_int_1;
	}
	return double_2;
	short_1 = v_mpcf_fst(int_1,char_1);

	double_2 = v_mpcf_input_trd_free(char_2,int_2,short_2);

	long_3 = v_mpcf_state_ast(int_2,long_2);

}
short v_mpc_err_delete_internal( short parameter_1,float parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_mpc_free(short_1);

	char_3 = char_1 + char_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	float_2 = float_1 * float_2;
	short_2 = short_1 + short_1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_2;
	return short_2;
}
void v_mpc_realloc( char parameter_1,short parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short_1 = v_mpc_mem_ptr(int_1);

	double_2 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		double double_3 = 1;
		double_2 = double_1 * double_1;
		short_1 = v_mpc_free(short_2);

		short_4 = short_3 * short_4;
		double_1 = double_2 * double_3;
	}
}
int v_mpc_err_add_expected( long parameter_1,int parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_2;
	int_3 = int_1 * int_2;
	v_mpc_realloc(char_1,short_1);

	float_2 = v_mpc_malloc(double_1,char_2);

	int_1 = int_3 * int_1;
	return int_3;
}
long v_mpc_err_contains_expected( double parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return long_1;
}
long v_mpc_err_or( long parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_6 = 1;
	short_1 = short_1;
	double_1 = double_1 + double_2;
	long_1 = v_mpc_err_contains_expected(double_1,double_3,char_1);

	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_2 = short_2 * short_2;
		}
	}
	if(1)
	{
	}
	short_2 = v_mpc_err_delete_internal(short_2,float_1);

	long_3 = long_2 * long_3;
	short_1 = short_2 * short_2;
	v_mpc_state_invalid();

	float_1 = float_2;
	unsigned_int_1 = unsigned_int_2;
	char_3 = char_2 + char_1;
	double_1 = double_4 + double_5;
	char_2 = char_2 + char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		if(1)
		{
			char_2 = char_1;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short short_3 = 1;
		short short_4 = 1;
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			long_5 = long_4 + long_1;
		}
		if(1)
		{
			double double_6 = 1;
			double_6 = double_4 + double_4;
		}
		if(1)
		{
			double double_7 = 1;
			float float_3 = 1;
			float float_4 = 1;
			int_1 = v_mpc_err_add_expected(long_2,int_2,char_4);

			double_7 = double_4 + double_1;
			float_3 = float_4;
			unsigned_int_3 = unsigned_int_1;
		}
		short_4 = short_2 * short_3;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			if(1)
			{
				short short_5 = 1;
				short_5 = short_5 + short_3;
			}
		}
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		char controller_9[2];
		fgets(controller_9 ,2 ,stdin);
		if( strcmp( controller_9, "L") < 0)
		{
			char char_5 = 1;
			char_2 = char_5;
		}
		float_2 = v_mpc_malloc(double_5,char_4);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	return long_6;
}
long v_mpc_err_merge( double parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long_1 = v_mpc_err_or(long_2,long_1,int_1);

	long_2 = long_2 * long_2;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_1;
	return long_3;
}
float v_mpc_parse_dtor( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	double_1 = v_mpc_export(int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	return float_1;
	short_1 = v_mpc_free(short_1);

}
char v_mpc_input_backtrack_enable( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_2;
	return char_1;
}
unsigned int v_mpc_input_backtrack_disable( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return unsigned_int_2;
}
void v_mpc_err_new( float parameter_1,double parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	float_1 = v_mpc_malloc(double_1,char_1);

	double_3 = double_1 * double_2;
	int_3 = int_2 * int_2;
	short_1 = short_1 * short_2;
	double_4 = double_4 * double_1;
	double_1 = double_4 + double_3;
	short_2 = short_1 + short_2;
	float_2 = float_1 + float_1;
	long_1 = long_1 + long_1;
	int_1 = int_3;
	char_3 = char_2 * char_3;
	char_2 = v_mpc_input_peekc(unsigned_int_1);

}
unsigned int v_mpc_input_suppress_disable()
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1;
	return unsigned_int_1;
}
unsigned int v_mpc_input_suppress_enable( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	return unsigned_int_2;
}
unsigned int v_mpc_parse_apply_to( float parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	return unsigned_int_1;
	double_1 = v_mpc_export(int_1);

}
double v_mpc_export( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	short_1 = v_mpc_free(short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = v_mpc_mem_ptr(int_1);

	short_4 = short_3 * short_2;
	double_2 = double_1 + double_1;
	return double_3;
}
long v_mpcf_input_str_ast( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short_1 = v_mpc_free(short_2);

	float_1 = float_1 + float_2;
	double_2 = double_1 + double_1;
	return long_1;
	int_1 = v_mpc_ast_new(unsigned_int_1,int_2);

}
short v_mpc_mem_ptr( int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
short v_mpc_free( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "n#") > 0)
	{
		int_1 = int_1;
	}
	short_1 = short_1 + short_2;
	double_1 = double_1 + double_1;
	return short_1;
	short_2 = v_mpc_mem_ptr(int_1);

}
unsigned int v_mpcf_input_free( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = v_mpc_free(short_1);

	int_1 = int_2;
	return unsigned_int_1;
}
int v_mpc_parse_apply( double parameter_1,long parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	v_mpcf_free(int_1);

	unsigned_int_1 = v_mpcf_input_free(short_1,int_2);

	double_1 = v_mpcf_str_ast(short_1);

	long_1 = v_mpcf_input_str_ast(double_1,double_1);

	double_2 = v_mpc_export(int_3);

}
short v_mpc_input_state_copy( long parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float_1 = v_mpc_malloc(double_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	return short_1;
}
char v_mpc_input_peekc( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char_1 = char_1 + char_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float_1 = float_2;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_3 = v_mpc_input_buffer_get();

		double_1 = double_1 + double_1;
		if(1)
		{
		}
		v_mpc_input_buffer_in_range();

		long_1 = long_1 * long_2;
	}
	return char_3;
}
int v_mpc_input_anchor( int parameter_1,double parameter_2,char parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_2;
	return int_1;
	char_3 = v_mpc_input_peekc(unsigned_int_1);

}
long v_mpc_input_unmark( int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_2 = double_1 * double_2;
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 * double_3;
		unsigned_int_1 = unsigned_int_1;
	}
	return long_1;
}
int v_mpc_input_rewind( char parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	double_1 = double_1;
	float_2 = float_1 * float_2;
	if(1)
	{
		long_1 = v_mpc_input_unmark(int_1);

		int_1 = int_1 * int_2;
	}
	int_2 = int_3 + int_3;
	return int_3;
}
void v_mpc_input_mark( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	if(1)
	{
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_2;
		float_1 = float_1;
		double_4 = double_2;
	}
	float_1 = float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_3 = double_1;
	}
}
unsigned int v_mpc_input_string( char parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	return unsigned_int_1;
	v_mpc_input_mark(long_1);

	unsigned_int_1 = v_mpc_input_char(unsigned_int_2,char_1,char_1);

	int_1 = v_mpc_input_rewind(char_2);

	long_2 = v_mpc_input_unmark(int_1);

	float_1 = v_mpc_malloc(double_1,char_3);

}
short v_mpc_input_satisfy( unsigned int parameter_1,unsigned int parameter_2,char parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char_1 = v_mpc_input_getc(float_1);

	unsigned_int_1 = v_mpc_input_success(long_1,char_1,char_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
	}
	char_1 = v_mpc_input_terminated(short_1);

	float_1 = v_mpc_input_failure(float_1,char_1);

	long_3 = long_1 * long_2;
	return short_1;
}
void v_mpc_input_noneof( float parameter_1,unsigned int parameter_2,char parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char_1 = v_mpc_input_terminated(short_1);

	unsigned_int_1 = v_mpc_input_success(long_1,char_2,char_3);

	float_1 = v_mpc_input_failure(float_2,char_2);

	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
	}
	char_3 = v_mpc_input_getc(float_1);

	double_1 = double_1 + double_1;
}
double v_mpc_input_oneof( float parameter_1,short parameter_2,char parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float_1 = v_mpc_input_failure(float_1,char_1);

	int_1 = int_1 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "M4") < 0)
	{
	}
	char_1 = v_mpc_input_getc(float_1);

	char_2 = v_mpc_input_terminated(short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return double_1;
	unsigned_int_2 = v_mpc_input_success(long_1,char_1,char_2);

}
int v_mpc_input_range( char parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	unsigned_int_1 = v_mpc_input_success(long_1,char_1,char_2);

	float_1 = v_mpc_input_failure(float_2,char_2);

	int_1 = int_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	return int_3;
	char_3 = v_mpc_input_getc(float_2);

	char_4 = v_mpc_input_terminated(short_1);

}
float v_mpc_input_failure( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int_1 = int_1 + int_2;
	v_mpc_input_buffer_in_range();

	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		float float_1 = 1;
		char_1 = char_1 + char_1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	int_1 = int_1 + int_1;
	return float_2;
}
unsigned int v_mpc_input_char( unsigned int parameter_1,char parameter_2,char parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_2 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	char_1 = v_mpc_input_terminated(short_1);

	unsigned_int_1 = v_mpc_input_success(long_1,char_1,char_1);

	short_1 = short_1 + short_2;
	return unsigned_int_2;
	char_1 = v_mpc_input_getc(float_1);

	float_2 = v_mpc_input_failure(float_1,char_2);

}
unsigned int v_mpc_input_success( long parameter_1,char parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
		double_1 = double_2;
		double_3 = double_3 + double_1;
	}
	double_4 = double_2 * double_2;
	double_4 = double_1 + double_2;
	v_mpc_input_buffer_in_range();

	float_1 = v_mpc_malloc(double_1,char_1);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double_3 = double_3 + double_5;
		double_4 = double_3 * double_2;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
		double_5 = double_5 * double_5;
		long_1 = long_1 + long_1;
	}
	return unsigned_int_1;
}
char v_mpc_input_terminated( short parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
}
float v_mpc_input_buffer_get()
{
	float float_1 = 1;
	return float_1;
}
void v_mpc_input_buffer_in_range()
{
}
char v_mpc_input_getc( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "6N") > 0)
	{
		char char_1 = 1;
		v_mpc_input_buffer_in_range();

		float_1 = v_mpc_input_buffer_get();

		char_2 = char_1 + char_1;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_3 + long_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	return char_2;
}
char v_mpc_input_any( unsigned int parameter_1,char parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char_1 = v_mpc_input_terminated(short_1);

	unsigned_int_1 = v_mpc_input_success(long_1,char_1,char_2);

	double_3 = double_1 * double_2;
	if(1)
	{
	}
	return char_2;
	char_1 = v_mpc_input_getc(float_1);

}
char v_mpc_parse_run( int parameter_1,double parameter_2,float parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	long long_4 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_6 = 1;
	long long_5 = 1;
	short short_3 = 1;
	int_1 = v_mpc_input_range(char_1,char_1,char_1,char_1);

	short_1 = v_mpc_input_satisfy(unsigned_int_1,unsigned_int_1,char_1);

	char_2 = v_mpc_err_fail(float_1,short_1);

	short_1 = v_mpc_input_state_copy(long_1);

	int_1 = v_mpc_parse_apply(double_1,long_2,unsigned_int_1);

	unsigned_int_1 = v_mpc_parse_apply_to(float_2,unsigned_int_1,float_1,char_2);

	char_2 = v_mpc_input_backtrack_enable(unsigned_int_1);

	int_2 = v_mpc_input_rewind(char_2);

	long_3 = v_mpc_err_merge(double_1,char_1,int_1);

	v_mpc_realloc(char_1,short_1);

	int_2 = int_3 * int_2;
	if(1)
	{
		v_mpc_input_noneof(float_1,unsigned_int_2,char_1);

		unsigned_int_3 = v_mpc_input_string(char_2,double_1,char_3);

		v_mpc_err_new(float_2,double_1);

		long_4 = v_mpc_input_unmark(int_2);

		double_2 = v_mpc_parse_fold(unsigned_int_3,long_4,int_4,long_3);

		char_1 = v_mpc_err_count(int_5,unsigned_int_1,int_4);

		char_2 = char_2;
	}
	return char_4;
	char_3 = v_mpc_input_any(unsigned_int_2,char_2);

	unsigned_int_3 = v_mpc_input_char(unsigned_int_2,char_5,char_1);

	double_3 = v_mpc_input_oneof(float_2,short_2,char_3);

	int_3 = v_mpc_input_anchor(int_3,double_2,char_2,char_6);

	unsigned_int_3 = v_mpc_input_suppress_enable(int_4);

	unsigned_int_1 = v_mpc_input_suppress_disable();

	unsigned_int_2 = v_mpc_input_backtrack_disable(unsigned_int_2);

	v_mpc_input_mark(long_5);

	float_2 = v_mpc_parse_dtor(long_4,unsigned_int_3,int_1);

	float_2 = v_mpc_malloc(double_1,char_6);

	short_2 = v_mpc_free(short_3);

	long_5 = v_mpc_err_many1(int_2,double_3);

}
void v_mpc_state_invalid()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 + long_1;
	float_1 = float_1 + float_2;
}
float v_mpc_malloc( double parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char_2 = char_1 + char_1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char char_3 = 1;
		char_1 = char_1 + char_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		if(1)
		{
			short_4 = short_1 + short_2;
		}
		int_2 = int_2 + int_3;
		int_1 = int_3 * int_1;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_6;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
	}
	int_5 = int_3 + int_4;
	if(1)
	{
	}
	int_1 = int_1 * int_5;
	double_1 = double_1 * double_2;
	float_2 = float_1 + float_2;
	char_1 = char_2;
	float_3 = float_3 * float_3;
	if(1)
	{
		short_1 = short_1 * short_4;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	}
	return float_2;
}
char v_mpc_err_fail( float parameter_1,short parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_1 = v_mpc_malloc(double_1,char_1);

	double_1 = double_2 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "b") > 0)
	{
	}
	double_1 = double_1;
	int_3 = int_1 * int_2;
	int_2 = int_3 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	short_1 = short_1 * short_1;
	long_3 = long_1 + long_2;
	int_1 = int_1;
	char_1 = char_1 + char_1;
	return char_1;
}
int v_mpc_parse_input( unsigned int parameter_1,short parameter_2,double parameter_3)
{
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	short_1 = short_1 * short_1;
	char_1 = v_mpc_err_fail(float_1,short_2);

	double_1 = v_mpc_export(int_1);

	double_2 = double_1 * double_2;
	long_1 = long_1 + long_1;
	int_3 = int_2 * int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short_1 = v_mpc_err_delete_internal(short_1,float_2);

		unsigned_int_1 = unsigned_int_2;
		v_mpc_state_invalid();

		int_1 = v_mpc_err_export(float_3,unsigned_int_3);

		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char_2 = v_mpc_parse_run(int_2,double_1,float_2,unsigned_int_2);

		long_2 = v_mpc_err_merge(double_2,char_3,int_2);

		double_5 = double_3 + double_4;
	}
	return int_1;
}
int v_mpc_parse( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = v_mpc_input_delete(short_1);

	char_1 = char_2;
	int_1 = v_mpc_parse_input(unsigned_int_1,short_1,double_1);

	short_3 = short_2 * short_1;
	int_2 = v_mpc_input_new_string(short_2,unsigned_int_2);

	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	char_2 = char_1 * char_2;
	return int_2;
}
short v_mpc_re_range_escape_char( char parameter_1)
{
	short short_1 = 1;
	return short_1;
}
void v_mpc_fail( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_3 = char_1 + char_2;
	double_1 = double_1 * double_2;
	int_1 = v_mpc_undefined();

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
}
long v_mpcf_re_range( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	long long_3 = 1;
	char char_5 = 1;
	long long_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	int_1 = int_1 * int_2;
	long_1 = long_2;
	short_1 = short_2;
	int_1 = int_2 + int_2;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 * int_3;
	if(1)
	{
		short_3 = v_mpc_re_range_escape_char(char_1);

		char_1 = char_1 + char_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		float float_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			double_3 = double_1 + double_1;
			if(1)
			{
				float_1 = float_1 * float_1;
				char_1 = char_2;
			}
			if(1)
			{
				short_3 = short_1;
				double_1 = double_1 + double_4;
				double_3 = double_1 + double_3;
			}
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
		if(1)
		{
			if(1)
			{
				double double_5 = 1;
				unsigned int unsigned_int_5 = 1;
				double_3 = double_3 + double_5;
				unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
			}
			if(1)
			{
				float float_2 = 1;
				float_1 = float_1 + float_2;
				double_3 = double_3 * double_4;
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					char char_3 = 1;
					char char_4 = 1;
					int int_4 = 1;
					char_1 = char_2 * char_3;
					v_mpc_fail(long_2);

					char_4 = char_1;
					int_3 = int_4;
				}
			}
		}
		if(1)
		{
			double double_6 = 1;
			double double_7 = 1;
			short short_4 = 1;
			char_1 = v_mpc_noneof(float_3);

			long_2 = long_3 + long_1;
			double_7 = double_4 + double_6;
			short_4 = short_1 + short_1;
		}
	}
	char_5 = v_mpc_oneof(long_3);

	long_1 = long_3 * long_4;
	char_7 = char_6 * char_7;
	int_1 = int_1 * int_2;
	return long_1;
}
unsigned int v_mpc_boundary_anchor( char parameter_1,char parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "2") > 0)
	{
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "?") == 0)
	{
	}
	return unsigned_int_1;
}
void v_mpc_boundary()
{
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	double_1 = v_mpc_expect(double_1,short_1);

	v_mpc_anchor(float_1,char_1);

	unsigned_int_1 = v_mpc_boundary_anchor(char_1,char_2);

}
void v_mpc_re_escape_char( char parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double_1 = v_mpc_char(char_1);

	double_2 = v_mpc_and(int_1,char_2,int_1);

	int_1 = v_mpcf_snd(int_1,char_3);

	v_mpc_boundary();

	long_1 = v_mpc_lift(short_1);

	long_2 = v_mpcf_ctor_str();

	short_2 = v_mpc_not_lift(float_1,long_2,char_1);

	unsigned_int_1 = v_mpc_soi();

	short_2 = v_mpc_eoi();

	long_1 = v_mpc_digit();

	float_2 = v_mpc_whitespace();

	char_3 = v_mpc_alphanum();

}
int v_mpcf_re_escape( float parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_6 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long_1 = long_1;
	int_1 = v_mpcf_snd(int_2,char_1);

	int_3 = int_3 + int_4;
	if(1)
	{
		int int_5 = 1;
		unsigned_int_1 = v_mpc_soi();

		int_5 = int_6;
	}
	if(1)
	{
		double_1 = v_mpc_and(int_2,char_1,int_2);

		long_1 = v_mpcf_ctor_str();

		int_3 = int_2 * int_6;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = v_mpc_eoi();

		double_1 = v_mpc_char(char_1);

		short_2 = short_2 * short_2;
	}
	if(1)
	{
		double double_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		v_mpc_any();

		long_1 = v_mpc_lift(short_1);

		double_1 = double_2 + double_2;
		long_3 = long_2 * long_1;
		unsigned_int_2 = unsigned_int_1;
	}
	int_4 = int_2 + int_3;
	double_4 = double_3 * double_1;
	return int_6;
	v_mpc_re_escape_char(char_2);

}
long v_mpc_squares( unsigned int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	return long_1;
	v_mpc_between(int_1,float_1,long_2,short_1);

}
void v_mpc_parens( double parameter_1,short parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	v_mpc_between(int_1,float_1,long_1,short_1);

}
short v_mpc_brackets( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	return short_1;
	v_mpc_between(int_1,float_1,long_1,short_1);

}
float v_mpcf_re_repeat( int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	float float_3 = 1;
	long_1 = v_mpcf_ctor_str();

	char_2 = char_1 + char_1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		int_1 = v_mpcf_strfold(int_1,short_1);

		float_1 = float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		long_2 = long_1 * long_1;
	}
	v_mpc_many1(long_1,int_2);

	char_3 = v_mpc_count(int_2,long_2,char_2,short_1);

	short_3 = short_2 + short_2;
	long_1 = v_mpc_many(float_1,long_3);

	int_1 = v_mpc_maybe_lift(short_4,short_1);

	double_3 = double_2 * double_1;
	return float_3;
}
long v_mpc_lift( short parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_1 = v_mpc_undefined();

	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	return long_1;
}
unsigned int v_mpcf_re_and( int parameter_1,char parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	long_1 = v_mpc_lift(short_1);

	short_1 = short_1;
	double_1 = v_mpc_and(int_1,char_1,int_2);

	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		long_1 = v_mpcf_ctor_str();

		float_1 = float_1 + float_1;
	}
	return unsigned_int_1;
	int_2 = v_mpcf_strfold(int_1,short_2);

}
double v_mpcf_re_or( int parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float_1 = v_mpc_or(int_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "s") < 0)
	{
	}
	if(1)
	{
	}
	return double_1;
}
void v_mpc_re( float parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_5 = 1;
	float float_3 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_7 = 1;
	long_1 = v_mpcf_re_range(long_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_2;
	char_1 = char_2;
	float_1 = float_1;
	double_4 = double_2 * double_4;
	double_1 = v_mpcf_re_or(int_1,unsigned_int_2);

	v_mpc_optimise(unsigned_int_3);

	int_1 = int_1 + int_2;
	float_1 = v_mpcf_re_repeat(int_2,unsigned_int_1);

	long_3 = long_2 + long_1;
	float_2 = v_mpc_predictive(short_1);

	double_1 = double_3 * double_3;
	int_1 = v_mpc_parse(unsigned_int_3,double_3);

	int_1 = v_mpc_err_string(long_4);

	short_3 = short_1 + short_2;
	char_1 = char_2 + char_1;
	char_3 = v_mpc_new();

	char_4 = v_mpc_escape();

	long_2 = long_4 + long_5;
	float_2 = float_1 + float_1;
	v_mpc_parens(double_4,short_3);

	float_3 = float_2 + float_1;
	long_6 = long_2 + long_4;
	long_4 = v_mpc_squares(unsigned_int_3,unsigned_int_4);

	int_3 = v_mpcf_re_escape(float_1);

	int_1 = int_3 + int_1;
	double_5 = double_4 * double_1;
	float_1 = v_mpc_or(int_4,char_2);

	char_2 = char_4;
	v_mpc_delete(short_1);

	char_4 = char_1 * char_2;
	char_1 = v_mpcf_snd_free(int_2,long_4);

	short_1 = short_3 * short_2;
	double_4 = v_mpc_char(char_3);

	int_1 = int_3 * int_1;
	long_5 = v_mpc_int();

	int_4 = v_mpcf_strfold(int_2,short_2);

	double_2 = double_1;
	if(1)
	{
		long_4 = v_mpc_failf(long_2,float_2);

		long_3 = long_4 + long_4;
		int_2 = v_mpc_define(double_4,char_3);

		v_mpc_err_delete(long_2);

		int_2 = int_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		long_1 = v_mpc_many(float_4,long_4);

		int_3 = int_1;
		char_1 = v_mpc_noneof(float_5);

		int_3 = int_5 + int_4;
	}
	float_1 = v_mpc_maybe(long_5);

	int_3 = int_3 * int_5;
	short_2 = v_mpc_brackets(char_3,int_4);

	double_5 = v_mpc_pass();

	int_5 = int_6 * int_4;
	double_1 = v_mpc_and(int_6,char_1,int_4);

	unsigned_int_4 = v_mpcf_re_and(int_7,char_4);

	int_7 = v_mpc_apply(double_4);

	long_7 = v_mpc_whole(short_2,long_4);

	v_mpc_cleanup(int_5,char_4);

}
long v_mpcf_unescape_regex( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_2;
	double_1 = v_mpcf_unescape_new(float_1,float_2,float_3);

	short_2 = short_1 + short_3;
	return long_1;
}
double v_mpcaf_grammar_regex( float parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double_1 = v_mpcf_str_ast(short_1);

	long_3 = long_1 + long_2;
	short_2 = v_mpc_tok(char_1);

	int_1 = int_1;
	long_1 = v_mpcf_unescape_regex(short_3);

	v_mpc_re(float_1);

	short_4 = short_2 * short_3;
	char_1 = v_mpca_state(int_2);

	long_3 = v_mpca_tag(short_3,float_1);

	int_3 = int_4;
	return double_2;
	int_2 = v_mpc_apply(double_1);

}
short v_mpc_regex_lit()
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float_1 = v_mpc_or(int_1,char_1);

	char_1 = v_mpc_noneof(float_2);

	double_1 = v_mpc_expect(double_2,short_1);

	long_1 = v_mpc_many(float_2,long_1);

	int_1 = v_mpcf_strfold(int_2,short_2);

	double_4 = double_3 + double_4;
	return short_2;
	char_2 = v_mpc_escape();

	v_mpc_between(int_1,float_1,long_1,short_1);

}
short v_mpcaf_grammar_char( short parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short_1 = v_mpc_tok(char_1);

	char_2 = v_mpca_state(int_1);

	double_2 = double_1 * double_1;
	double_3 = v_mpcf_unescape(char_1);

	double_1 = v_mpc_char(char_2);

	int_1 = v_mpc_apply(double_1);

	float_1 = float_1;
	char_2 = char_1 + char_2;
	float_1 = float_1 * float_1;
	return short_2;
	long_1 = v_mpca_tag(short_1,float_1);

	double_2 = v_mpcf_str_ast(short_1);

}
float v_mpc_char_lit()
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	return float_1;
	double_1 = v_mpc_expect(double_2,short_1);

	v_mpc_between(int_1,float_1,long_1,short_1);

	float_1 = v_mpc_or(int_1,char_1);

	char_1 = v_mpc_escape();

	v_mpc_any();

}
double v_mpcf_str_ast( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_3 = float_1 * float_2;
	int_1 = v_mpc_ast_new(unsigned_int_1,int_2);

	double_1 = double_1 + double_2;
	return double_1;
}
float v_mpc_ast_tag( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short_2 = short_1 + short_1;
	long_1 = long_1 + long_2;
	return float_1;
}
long v_mpca_tag( short parameter_1,float parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	return long_1;
	float_1 = v_mpc_apply_to(short_1);

	float_1 = v_mpc_ast_tag(float_1,int_1);

}
unsigned int v_mpc_state()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_2;
	int_1 = v_mpc_undefined();

	double_2 = double_1 + double_2;
	return unsigned_int_1;
}
unsigned int v_mpc_ast_state( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
	}
	int_1 = int_1 + int_1;
	return unsigned_int_1;
}
long v_mpcf_state_ast( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_mpc_ast_state(short_1,double_1);

	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_2;
	double_3 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_1 = int_1 + int_1;
	return long_1;
}
char v_mpca_state( int parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return char_1;
	double_1 = v_mpc_and(int_1,char_2,int_2);

	long_1 = v_mpcf_state_ast(int_2,long_1);

	unsigned_int_1 = v_mpc_state();

}
double v_mpcf_unescape_new( float parameter_1,float parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_6 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_2 + double_1;
	char_1 = char_1 + char_1;
	short_1 = short_2;
	double_3 = double_2 + double_2;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	int_1 = int_1 * int_1;
	double_3 = double_3;
	double_4 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_3;
	short_1 = short_1 + short_2;
	long_1 = long_1;
	double_4 = double_3;
	char_2 = char_3;
	int_1 = int_4;
	char_2 = char_1 + char_1;
	int_1 = int_4;
	int_4 = int_3 * int_1;
	long_2 = long_2 * long_2;
	int_5 = int_3 + int_1;
	int_4 = int_3;
	double_5 = double_2 * double_2;
	double_2 = double_4 + double_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
	float_1 = float_2;
	char_4 = char_2 + char_2;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	double_5 = double_5;
	short_2 = short_2 * short_2;
	int_3 = int_6 * int_4;
	unsigned_int_7 = unsigned_int_8;
	double_6 = double_5;
	double_2 = double_3 * double_2;
	double_2 = double_6 * double_6;
	return double_5;
}
double v_mpcf_unescape( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return double_1;
	double_2 = v_mpcf_unescape_new(float_1,float_1,float_1);

}
unsigned int v_mpcaf_grammar_string( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	double_1 = v_mpcf_unescape(char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = v_mpc_string(double_3);

	char_2 = v_mpca_state(int_1);

	long_1 = v_mpca_tag(short_1,float_1);

	int_2 = int_1 + int_2;
	short_2 = v_mpc_tok(char_1);

	double_2 = double_3 + double_4;
	int_2 = v_mpc_apply(double_4);

	long_2 = long_2 * long_2;
	return unsigned_int_1;
	double_4 = v_mpcf_str_ast(short_1);

}
float v_mpcf_int( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_2;
	short_2 = short_1 + short_2;
	return float_1;
}
unsigned int v_mpc_digits()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	return unsigned_int_1;
	double_1 = v_mpc_expect(double_2,short_1);

	v_mpc_many1(long_1,int_1);

	int_1 = v_mpcf_strfold(int_1,short_1);

	long_2 = v_mpc_digit();

}
long v_mpc_int()
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	return long_1;
	double_1 = v_mpc_expect(double_2,short_1);

	int_1 = v_mpc_apply(double_3);

	unsigned_int_1 = v_mpc_digits();

	float_1 = v_mpcf_int(long_2);

}
void v_mpc_tok_between( short parameter_1,short parameter_2,short parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double_1 = v_mpc_and(int_1,char_1,int_1);

	char_1 = v_mpcf_snd_free(int_1,long_1);

	char_2 = v_mpc_sym(short_1);

	short_1 = v_mpc_tok(char_2);

}
int v_mpc_tok_brackets( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return int_1;
	v_mpc_tok_between(short_1,short_1,short_1,unsigned_int_1);

}
char v_mpc_count( int parameter_1,long parameter_2,char parameter_3,short parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	int_1 = v_mpc_undefined();

	char_3 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_3;
	return char_3;
}
int v_mpca_count( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	return int_1;
	char_1 = v_mpc_count(int_1,long_1,char_1,short_1);

	long_2 = v_mpcf_fold_ast(int_1,float_1);

	v_mpc_ast_delete(int_1);

}
short v_mpc_not_lift( float parameter_1,long parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 * short_2;
	long_2 = long_1 + long_2;
	char_1 = char_1 + char_1;
	int_1 = v_mpc_undefined();

	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	return short_1;
}
unsigned int v_mpc_not( double parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	return unsigned_int_1;
	short_1 = v_mpc_not_lift(float_1,long_1,char_1);

	short_2 = v_mpcf_ctor_null();

}
double v_mpca_not()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	return double_1;
	unsigned_int_1 = v_mpc_not(double_2,unsigned_int_2);

	v_mpc_ast_delete(int_1);

}
long v_mpca_maybe( double parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	return long_1;
	float_1 = v_mpc_maybe(long_1);

}
float v_mpca_many1( float parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	return float_1;
	v_mpc_many1(long_1,int_1);

	long_1 = v_mpcf_fold_ast(int_2,float_1);

}
float v_mpca_many( short parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	return float_1;
	long_1 = v_mpc_many(float_1,long_1);

	long_1 = v_mpcf_fold_ast(int_1,float_2);

}
short v_mpcaf_grammar_repeat( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	float_1 = v_mpca_many1(float_1);

	long_1 = v_mpca_maybe(double_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "S") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		float_2 = v_mpca_many(short_1);

		double_2 = v_mpca_not();

		int_1 = int_1;
	}
	unsigned_int_2 = unsigned_int_3;
	int_1 = v_mpca_count(int_1,float_1);

	int_2 = int_1;
	return short_2;
}
char v_mpca_and( int parameter_1,short parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	float_1 = float_1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	v_mpc_ast_delete(int_2);

	double_1 = double_1 + double_2;
	double_2 = double_2;
	long_1 = v_mpcf_fold_ast(int_3,float_2);

	short_1 = short_1 * short_1;
	int_3 = v_mpc_undefined();

	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	double_4 = double_2 + double_1;
	return char_3;
}
double v_mpc_pass()
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return double_1;
	int_1 = v_mpc_undefined();

}
short v_mpcaf_grammar_and( int parameter_1,long parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_1 = v_mpc_pass();

	float_1 = float_1 * float_1;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return short_1;
	char_1 = v_mpca_and(int_1,short_1);

}
void v_mpc_many1( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 + long_1;
	int_2 = int_1 * int_2;
	short_1 = short_1 * short_2;
	double_2 = double_1 * double_1;
	int_2 = v_mpc_undefined();

}
char v_mpca_or( int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char_1 = char_1 + char_1;
	int_1 = v_mpc_undefined();

	char_3 = char_1 + char_2;
	int_2 = int_1 + int_1;
	short_2 = short_1 + short_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		int_3 = int_3 * int_3;
	}
	short_4 = short_2 * short_3;
	return char_2;
}
short v_mpcaf_grammar_or( int parameter_1,short parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char_1 = v_mpca_or(int_1,unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
}
char v_mpc_sym( short parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	return char_1;
	short_1 = v_mpc_tok(char_1);

	double_1 = v_mpc_string(double_1);

}
double v_mpc_string( double parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = v_mpc_undefined();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_1;
	int_2 = v_mpc_expectf(short_1,double_1,double_1);

	short_2 = short_2 + short_2;
	int_3 = int_4;
	return double_1;
}
char v_mpcf_nth_free( int parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_3 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, ")G") < 0)
		{
			char_1 = char_1 + char_3;
		}
	}
	return char_2;
}
char v_mpcf_snd_free( int parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	return char_1;
	char_2 = v_mpcf_nth_free(int_1,int_1,int_2);

}
void v_mpc_between( int parameter_1,float parameter_2,long parameter_3,short parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double_1 = v_mpc_and(int_1,char_1,int_2);

	char_2 = v_mpcf_snd_free(int_3,long_1);

	double_1 = v_mpc_string(double_1);

}
char v_mpc_noneof( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_2;
	double_2 = double_3 * double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_mpc_undefined();

	int_1 = v_mpc_expectf(short_1,double_2,double_3);

	char_1 = char_1;
	return char_2;
}
void v_mpc_any()
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double_1 = v_mpc_expect(double_1,short_1);

	long_2 = long_1 * long_1;
	float_1 = float_1 * float_1;
	int_1 = v_mpc_undefined();

}
char v_mpc_escape()
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	return char_1;
	double_1 = v_mpc_and(int_1,char_1,int_1);

	int_2 = v_mpcf_strfold(int_2,short_1);

	double_1 = v_mpc_char(char_1);

	v_mpc_any();

}
int v_mpc_string_lit()
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	float_1 = v_mpc_or(int_1,char_1);

	char_2 = v_mpc_escape();

	int_2 = int_1 + int_1;
	return int_3;
	char_1 = v_mpc_noneof(float_2);

	double_1 = v_mpc_expect(double_2,short_1);

	v_mpc_between(int_3,float_2,long_1,short_2);

	long_1 = v_mpc_many(float_2,long_2);

	int_1 = v_mpcf_strfold(int_2,short_1);

}
short v_mpcf_ctor_null()
{
	short short_1 = 1;
	return short_1;
}
int v_mpc_maybe_lift( short parameter_1,short parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = v_mpc_undefined();

	double_1 = double_1 * double_1;
	float_1 = float_2;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
}
float v_mpc_maybe( long parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	return float_1;
	int_1 = v_mpc_maybe_lift(short_1,short_1);

	short_1 = v_mpcf_ctor_null();

}
long v_mpc_digit()
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	return long_1;
	double_1 = v_mpc_expect(double_1,short_1);

	char_1 = v_mpc_oneof(long_1);

}
char v_mpc_alphanum()
{
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	return char_1;
	double_1 = v_mpc_expect(double_1,short_1);

	float_1 = v_mpc_or(int_1,char_1);

	v_mpc_alpha();

	long_1 = v_mpc_digit();

	long_2 = v_mpc_underscore();

}
double v_mpc_char( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_1 = v_mpc_undefined();

	double_3 = double_1 + double_2;
	int_1 = v_mpc_expectf(short_1,double_3,double_4);

	float_1 = float_1 + float_2;
	float_2 = float_1 + float_3;
	return double_1;
}
long v_mpc_underscore()
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	return long_1;
	double_1 = v_mpc_expect(double_1,short_1);

	double_1 = v_mpc_char(char_1);

}
void v_mpc_alpha()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double_1 = v_mpc_expect(double_2,short_1);

	char_1 = v_mpc_oneof(long_1);

}
float v_mpc_or( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_1;
	double_2 = double_3;
	long_2 = long_1 + long_1;
	double_3 = double_1 * double_4;
	float_1 = float_2;
	int_1 = v_mpc_undefined();

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_4 = double_4 + double_3;
	}
	double_2 = double_5 + double_6;
	return float_1;
}
void v_mpc_ident()
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	float float_4 = 1;
	long long_3 = 1;
	long_1 = v_mpc_underscore();

	int_1 = v_mpcf_strfold(int_2,short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2;
	float_3 = v_mpc_or(int_2,char_1);

	double_1 = v_mpc_and(int_1,char_2,int_2);

	int_2 = int_1;
	v_mpc_alpha();

	long_2 = v_mpc_many(float_4,long_3);

	char_1 = v_mpc_alphanum();

}
short v_mpcf_fst( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_1;
	return short_1;
}
short v_mpc_tok( char parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	return short_1;
	double_1 = v_mpc_and(int_1,char_1,int_2);

	short_1 = v_mpcf_fst(int_1,char_1);

	short_2 = v_mpc_blank();

	v_mpcf_dtor_null(short_1);

}
long v_mpca_stmt_afold( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	return long_1;
}
long v_mpcf_ctor_str()
{
	long long_1 = 1;
	return long_1;
}
void v_mpc_ast_delete( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		v_mpc_ast_delete(int_3);

		long_1 = long_2;
	}
	int_4 = int_2 + int_1;
	double_2 = double_1 * double_1;
	int_5 = int_1 * int_5;
	char_2 = char_1 + char_2;
}
void v_mpc_delete( short parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "N<") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		float_1 = float_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	v_mpc_undefine_unretained(char_1,int_1);

}
int v_mpc_ast_delete_no_children( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	short_3 = short_1 + short_2;
	return int_1;
}
long v_mpc_ast_add_child( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double_1 = double_2;
	long_1 = long_1;
	int_1 = int_1 + int_1;
	return long_2;
}
int v_mpc_ast_new( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short_1 = v_mpc_state_new();

	char_2 = char_1 + char_2;
	char_3 = char_4;
	long_2 = long_1 + long_1;
	short_1 = short_2 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_5 = char_4 * char_5;
	char_1 = char_6 * char_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return int_1;
}
long v_mpcf_fold_ast( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_2;
	short_2 = short_1 + short_2;
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
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "O") < 0)
	{
	}
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_1 = v_mpc_ast_add_child(short_2,unsigned_int_1);

			short_1 = short_1 + short_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned int unsigned_int_2 = 1;
				int_1 = v_mpc_ast_new(unsigned_int_1,int_1);

				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
			int_2 = v_mpc_ast_delete_no_children(int_3);

			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			short_2 = short_1;
		}
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_2 = char_2 + char_3;
	}
	return long_1;
}
double v_mpc_optimise_unretained( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int_1 = v_mpcf_strfold(int_2,short_1);

	char_1 = char_1 + char_2;
	long_1 = v_mpcf_fold_ast(int_2,float_1);

	v_mpc_delete(short_1);

	long_2 = v_mpcf_ctor_str();

	long_1 = long_1 + long_1;
	v_mpc_ast_delete(int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return double_1;
}
void v_mpc_optimise( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short_2 = short_1 + short_1;
	double_1 = v_mpc_optimise_unretained(char_1,int_1);

}
char v_is_number()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, ";Y") > 0)
		{
		}
	}
	return char_1;
}
float v_mpca_grammar_find_parser( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	return float_1;
	char_1 = v_is_number();

	long_1 = v_mpc_failf(long_2,float_1);

}
void v_mpca_stmt_list_apply_to( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	char char_2 = 1;
	v_mpc_optimise(unsigned_int_1);

	int_2 = int_1 * int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "Q") > 0)
	{
	}
	float_1 = v_mpca_grammar_find_parser(char_1,long_1);

	float_2 = v_mpc_predictive(short_1);

	double_1 = v_mpc_expect(double_1,short_2);

	int_1 = v_mpc_define(double_2,char_2);

}
int v_mpc_undefine_and()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int_1 = int_1 * int_1;
	short_2 = short_1 * short_2;
	return int_2;
	v_mpc_undefine_unretained(char_1,int_1);

}
void v_mpc_undefine_or( float parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_mpc_undefine_unretained(char_1,int_1);

	int_3 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	int_2 = int_2 + int_2;
}
void v_mpc_undefine_unretained( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	if(1)
	{
	}
	double_1 = double_2;
	int_1 = int_2;
	double_3 = double_2 + double_3;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1;
	long_3 = long_1 + long_2;
	char_1 = char_1 * char_1;
	int_3 = v_mpc_undefine_and();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_4 * int_5;
	double_1 = double_4 * double_5;
	int_3 = int_3;
	int_5 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	short_2 = short_1 + short_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
	v_mpc_undefine_or(float_1);

	unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
	double_3 = double_2;
	float_3 = float_2 + float_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_6;
	unsigned_int_3 = unsigned_int_7;
	float_2 = float_1 * float_4;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ">7") > 0)
	{
		short short_3 = 1;
		short_3 = short_2 * short_1;
		char_1 = char_1 * char_1;
	}
}
short v_mpc_soft_delete( short parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	v_mpc_undefine_unretained(char_1,int_1);

	double_1 = double_1 + double_2;
	return short_1;
}
unsigned int v_mpca_stmt_list_delete( short parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = v_mpc_soft_delete(short_1);

	int_1 = int_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	int_3 = int_2 + int_2;
	long_1 = long_2;
	return unsigned_int_1;
}
void v_mpca_stmt_fold( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	float_1 = float_1 + float_1;
}
float v_mpc_predictive( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_mpc_undefined();

	short_3 = short_1 + short_2;
	return float_1;
}
void v_mpcf_free( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
int v_mpc_expectf( short parameter_1,double parameter_2,double parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	float_1 = float_1 * float_1;
	short_1 = short_2;
	int_1 = int_1;
	long_2 = long_1 * long_1;
	short_2 = short_1 * short_1;
	int_2 = v_mpc_undefined();

	int_3 = int_1;
	char_1 = char_1 + char_1;
	int_3 = int_3 * int_2;
	double_1 = double_2;
	float_2 = float_1;
	long_2 = long_2 + long_3;
	return int_1;
}
char v_mpc_oneof( long parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	int_1 = v_mpc_undefined();

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 + double_2;
	double_5 = double_1 * double_4;
	int_2 = v_mpc_expectf(short_1,double_6,double_6);

	float_3 = float_1 + float_2;
	return char_1;
}
float v_mpc_whitespace()
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	return float_1;
	double_1 = v_mpc_expect(double_1,short_1);

	char_1 = v_mpc_oneof(long_1);

}
int v_mpcf_strfold( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 + int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "j^") < 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	long_2 = long_1 * long_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		int_2 = int_2 * int_3;
	}
	return int_3;
}
long v_mpc_many( float parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	return long_1;
	int_1 = v_mpc_undefined();

}
unsigned int v_mpc_whitespaces()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	return unsigned_int_1;
	double_1 = v_mpc_expect(double_1,short_1);

	long_1 = v_mpc_many(float_1,long_2);

	int_1 = v_mpcf_strfold(int_1,short_2);

	float_1 = v_mpc_whitespace();

}
int v_mpc_apply( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_2;
	int_1 = v_mpc_undefined();

}
short v_mpc_blank()
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	return short_1;
	double_1 = v_mpc_expect(double_1,short_1);

	int_1 = v_mpc_apply(double_2);

	unsigned_int_1 = v_mpc_whitespaces();

	v_mpcf_free(int_2);

}
float v_mpc_strip( char parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	return float_1;
	double_1 = v_mpc_and(int_1,char_1,int_2);

	int_2 = v_mpcf_snd(int_2,char_2);

	short_1 = v_mpc_blank();

	v_mpcf_dtor_null(short_1);

}
void v_mpcf_dtor_null( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
float v_mpc_eoi_anchor( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_2;
	return float_1;
}
short v_mpc_eoi()
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	return short_1;
	double_1 = v_mpc_expect(double_1,short_1);

	v_mpc_anchor(float_1,char_1);

	float_1 = v_mpc_eoi_anchor(char_1,char_2);

}
unsigned int v_mpc_soi_anchor( char parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 + short_1;
	return unsigned_int_1;
}
void v_mpc_anchor( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_2;
	double_1 = v_mpc_expect(double_1,short_1);

	long_1 = long_2;
	double_3 = double_2 * double_1;
	int_1 = v_mpc_undefined();

}
double v_mpc_expect( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double_3 = double_1 + double_2;
	int_1 = v_mpc_undefined();

	float_2 = float_1 * float_1;
	char_2 = char_1 + char_1;
	int_2 = int_1 * int_1;
	float_2 = float_2 * float_3;
	return double_1;
}
unsigned int v_mpc_soi()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	return unsigned_int_1;
	double_1 = v_mpc_expect(double_1,short_1);

	v_mpc_anchor(float_1,char_1);

	unsigned_int_2 = v_mpc_soi_anchor(char_1,char_1);

}
int v_mpcf_snd( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
double v_mpc_and( int parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_2 = char_1 * char_1;
	int_1 = v_mpc_undefined();

	double_1 = double_1 + double_1;
	char_2 = char_2 + char_3;
	char_1 = char_4;
	char_5 = char_1;
	int_3 = int_1 * int_2;
	double_3 = double_2 * double_2;
	short_2 = short_1 * short_2;
	short_3 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_1 = int_3 * int_3;
	}
	double_1 = double_2 * double_2;
	return double_3;
}
long v_mpc_whole( short parameter_1,long parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	return long_1;
	double_1 = v_mpc_and(int_1,char_1,int_2);

	int_1 = v_mpcf_snd(int_3,char_1);

	unsigned_int_1 = v_mpc_soi();

	short_1 = v_mpc_eoi();

	v_mpcf_dtor_null(short_2);

}
double v_mpc_total( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	return double_1;
	long_1 = v_mpc_whole(short_1,long_2);

	float_1 = v_mpc_strip(char_1);

}
float v_mpc_apply_to( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_2;
	int_1 = int_2 + int_1;
	int_3 = v_mpc_undefined();

	int_3 = int_2 + int_1;
	int_1 = int_3 * int_1;
	return float_1;
}
long v_mpc_failf( long parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_1 * double_1;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_2;
	double_1 = double_3;
	int_2 = int_2 + int_1;
	unsigned_int_3 = unsigned_int_1;
	double_1 = double_2 + double_2;
	double_3 = double_3;
	return long_1;
	int_1 = v_mpc_undefined();

}
int v_mpc_define( double parameter_1,char parameter_2)
{
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "?A") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		double_3 = double_1 * double_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "D") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_2 = 1;
		float float_1 = 1;
		double_3 = double_2 * double_2;
		char_1 = char_1 + char_2;
		long_1 = long_1 + long_2;
		float_2 = float_1 * float_2;
	}
	int_2 = int_1 * int_1;
	return int_3;
	long_1 = v_mpc_failf(long_3,float_2);

}
long v_mpca_lang_st( double parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	int int_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_6 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	short short_7 = 1;
	int int_7 = 1;
	double double_5 = 1;
	short_1 = v_mpc_soft_delete(short_2);

	unsigned_int_1 = v_mpc_digits();

	v_mpc_cleanup(int_1,char_1);

	int_2 = int_1 * int_1;
	double_1 = double_1 * double_1;
	short_3 = short_1 * short_1;
	int_3 = v_mpc_tok_brackets(short_2,short_4);

	float_1 = v_mpc_tok_parens(int_1,short_4);

	char_2 = char_1 * char_2;
	char_2 = v_mpcf_snd_free(int_3,long_1);

	v_mpc_optimise(unsigned_int_2);

	long_3 = long_2 * long_1;
	float_2 = v_mpc_predictive(short_3);

	int_4 = v_mpc_string_lit();

	unsigned_int_1 = v_mpcaf_grammar_string(int_4);

	char_3 = char_2 + char_1;
	long_3 = v_mpc_many(float_1,long_1);

	short_4 = short_4 + short_5;
	unsigned_int_3 = v_mpca_stmt_list_delete(short_1);

	short_1 = v_mpc_tok(char_3);

	double_2 = v_mpc_pass();

	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	double_2 = v_mpc_total(long_1,float_2);

	float_1 = v_mpc_maybe(long_2);

	short_4 = v_mpc_regex_lit();

	double_2 = double_1 * double_3;
	long_3 = v_mpca_stmt_afold(int_2,double_1);

	char_3 = v_mpc_sym(short_3);

	unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
	short_2 = short_1;
	float_1 = v_mpc_char_lit();

	short_6 = v_mpcaf_grammar_char(short_1);

	int_3 = v_mpc_parse_input(unsigned_int_4,short_3,double_3);

	float_2 = float_1 + float_2;
	long_2 = long_4 * long_4;
	short_5 = v_mpcaf_grammar_repeat(int_1,char_3);

	long_4 = v_mpc_int();

	float_2 = v_mpc_tok_braces(int_1,unsigned_int_5);

	float_4 = float_3 * float_4;
	float_2 = v_mpc_or(int_2,char_2);

	char_2 = char_1;
	v_mpc_many1(long_1,int_4);

	float_5 = float_4 + float_2;
	v_mpc_ident();

	long_1 = v_mpcaf_grammar_id(long_4);

	double_2 = double_1 + double_4;
	short_2 = v_mpcaf_grammar_or(int_5,short_6);

	unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	v_mpca_stmt_fold(int_1,int_6);

	double_1 = v_mpc_and(int_3,char_2,int_3);

	double_2 = v_mpcaf_grammar_regex(float_2);

	short_4 = short_6 + short_7;
	float_5 = v_mpc_apply_to(short_5);

	double_2 = double_1 + double_4;
	v_mpca_stmt_list_apply_to(int_7);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_6;
	if(1)
	{
		long long_5 = 1;
		long_4 = long_4 * long_5;
	}
	if(1)
	{
		double_5 = double_5 + double_3;
	}
	int_4 = v_mpc_define(double_3,char_1);

	double_5 = double_1 + double_5;
	return long_3;
	char_1 = v_mpc_new();

	short_7 = v_mpcaf_grammar_and(int_4,long_4);

}
short v_mpc_state_new()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	int_1 = int_1 * int_2;
	short_1 = short_1 * short_1;
	return short_1;
}
int v_mpc_input_new_string( short parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	int int_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	double_1 = double_1 + double_2;
	long_1 = long_1 + long_2;
	long_2 = long_2 + long_1;
	short_2 = short_1 * short_1;
	double_1 = double_3 + double_3;
	float_2 = float_1 + float_2;
	int_1 = int_1 * int_2;
	char_1 = char_1 * char_1;
	short_1 = short_1;
	double_4 = double_4;
	float_2 = float_3 + float_3;
	char_3 = char_2 + char_2;
	short_3 = v_mpc_state_new();

	int_3 = int_2;
	float_4 = float_1 * float_2;
	char_4 = char_2 * char_4;
	long_1 = long_1 + long_2;
	return int_2;
}
int v_mpca_lang( int parameter_1,short parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_3 = int_1 + int_2;
	int_1 = v_mpc_input_new_string(short_1,unsigned_int_1);

	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_2 + int_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	float_1 = float_1;
	float_2 = float_3 + float_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_1 = v_mpc_input_delete(short_1);

	double_3 = double_1 * double_1;
	int_2 = int_3 * int_1;
	long_1 = v_mpca_lang_st(double_2,char_1);

	char_2 = char_1;
	return int_1;
}
int v_mpc_undefined()
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	long_2 = long_1 * long_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
char v_mpc_new()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	float_1 = float_1;
	double_1 = double_1 * double_2;
	return char_1;
	int_1 = v_mpc_undefined();

}
char v_usage( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1;
	return char_2;
}
unsigned int v_parse_args( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_1 + float_2;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1;
	}
	if(1)
	{
	}
	return unsigned_int_2;
}
int main()
{
	int uni_para =495;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	v_ore_define_cfunc(short_1,unsigned_int_1,int_1,int_2,double_1,uni_para);

	double_2 = double_2 * double_3;
	short_2 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short_3 = short_2 + short_1;
	}
	return int_2;
}

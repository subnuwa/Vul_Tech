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

void v_rasqal_uri_finish( float parameter_1);
void v_rasqal_xsd_finish( int parameter_1);
void v_rasqal_delete_query_language_factories( char parameter_1);
void v_rasqal_finish_query_results();
void v_rasqal_finish_result_formats();
void v_rasqal_free_world( char parameter_1);
void v_rasqal_free_memory();
float v_rasqal_algebra_get_variables_mentioned_in( long parameter_1,int parameter_2);
double v_rasqal_algebra_query_add_construct_projection( long parameter_1,unsigned int parameter_2);
int v_rasqal_algebra_node_is_empty( long parameter_1);
unsigned int v_rasqal_algebra_remove_znodes( double parameter_1,short parameter_2);
int v_rasqal_algebra_node_visit( long parameter_1,int parameter_2);
short v_rasqal_new_service_algebra_node( float parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,int parameter_5);
float v_rasqal_graph_pattern_get_filter_expression( char parameter_1);
long v_rasqal_query_write_sparql_triple( int parameter_1,char parameter_2,double parameter_3);
int v_rasqal_graph_pattern_get_triple( unsigned int parameter_1,int parameter_2);
unsigned int v_rasqal_query_write_sparql_row( int parameter_1,double parameter_2,float parameter_3,int parameter_4);
float v_rasqal_query_write_sparql_values( short parameter_1,double parameter_2,char parameter_3,float parameter_4);
short v_rasqal_query_write_sparql_expression_sequence( float parameter_1,long parameter_2,unsigned int parameter_3);
unsigned int v_rasqal_query_write_sparql_modifiers( int parameter_1,double parameter_2,char parameter_3);
long v_rasqal_query_write_indent( char parameter_1,float parameter_2);
char v_rasqal_query_write_sparql_uri( double parameter_1,long parameter_2,int parameter_3);
long v_rasqal_query_write_sparql_literal( short parameter_1,float parameter_2,unsigned int parameter_3);
int v_rasqal_query_write_sparql_expression_op( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
int v_rasqal_query_write_sparql_expression( char parameter_1,short parameter_2,int parameter_3);
int v_rasqal_query_write_sparql_variable( unsigned int parameter_1,char parameter_2,float parameter_3);
long v_rasqal_query_write_sparql_variables_sequence( unsigned int parameter_1,short parameter_2,short parameter_3);
float v_rasqal_graph_pattern_get_operator( long parameter_1);
long v_rasqal_query_write_sparql_graph_pattern( float parameter_1,float parameter_2,int parameter_3,int parameter_4,short parameter_5);
int v_rasqal_query_write_sparql_20060406_graph_pattern( float parameter_1,double parameter_2,int parameter_3);
int v_rasqal_algebra_service_graph_pattern_to_algebra( unsigned int parameter_1,short parameter_2);
unsigned int v_rasqal_algebra_values_graph_pattern_to_algebra( long parameter_1,int parameter_2);
long v_rasqal_algebra_filter_graph_pattern_to_algebra( int parameter_1,double parameter_2);
char v_rasqal_new_values_algebra_node( double parameter_1,short parameter_2);
long v_rasqal_new_bindings_from_bindings( float parameter_1);
int v_rasqal_algebra_bindings_to_algebra( double parameter_1,float parameter_2);
short v_rasqal_new_slice_algebra_node( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
char v_rasqal_algebra_query_add_slice( float parameter_1,short parameter_2,int parameter_3);
int v_rasqal_new_distinct_algebra_node( float parameter_1,char parameter_2);
long v_rasqal_algebra_query_add_distinct( unsigned int parameter_1,char parameter_2,int parameter_3);
char v_rasqal_new_orderby_algebra_node( char parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4);
unsigned int v_rasqal_algebra_query_add_orderby( char parameter_1,double parameter_2,double parameter_3,short parameter_4);
float v_rasqal_new_project_algebra_node( long parameter_1,char parameter_2,int parameter_3);
double v_rasqal_algebra_query_add_projection( long parameter_1,int parameter_2,short parameter_3);
float v_rasqal_new_having_algebra_node( char parameter_1,short parameter_2,short parameter_3);
char v_rasqal_algebra_query_add_having( float parameter_1,int parameter_2,int parameter_3);
int v_rasqal_new_aggregation_algebra_node( float parameter_1,int parameter_2,char parameter_3,int parameter_4);
long v_rasqal_algebra_query_add_aggregation( float parameter_1,unsigned int parameter_2,int parameter_3);
double v_rasqal_algebra_replace_aggregate_expressions( long parameter_1,short parameter_2,int parameter_3);
short v_rasqal_free_map_node( int parameter_1,float parameter_2);
void v_rasqal_free_map( unsigned int parameter_1);
void v_rasqal_free_algebra_aggregate( int parameter_1);
short v_rasqal_map_node_write_indent( float parameter_1,int parameter_2);
double v_rasqal_map_node_print_visit();
double v_rasqal_map_node_visit( unsigned int parameter_1,char parameter_2);
void v_rasqal_map_visit( long parameter_1);
int v_rasqal_map_print( unsigned int parameter_1,char parameter_2);
unsigned int v_rasqal_map_node_add_kv( int parameter_1);
float v_rasqal_new_map_node( char parameter_1);
int v_rasqal_map_add_kv( unsigned int parameter_1);
short v_rasqal_new_variable_literal( float parameter_1,double parameter_2);
int v_rasqal_expression_convert_aggregate_to_variable( char parameter_1,float parameter_2,short parameter_3);
char v_rasqal_map_search_internal( char parameter_1,double parameter_2,long parameter_3);
long v_rasqal_map_search( int parameter_1,double parameter_2);
int v_rasqal_expression_is_aggregate();
long v_rasqal_algebra_extract_aggregate_expression_visit(int parameter_2);
int v_rasqal_expression_compare( double parameter_1,short parameter_2,int parameter_3,int parameter_4);
void v_rasqal_agg_expr_var_compare(long parameter_2,int parameter_3);
int v_rasqal_new_map( long parameter_1,long parameter_3,double parameter_4,double parameter_5,unsigned int parameter_6,unsigned int parameter_7,int parameter_8);
unsigned int v_rasqal_algebra_extract_aggregate_expressions( char parameter_1,char parameter_2,double parameter_3,int parameter_4);
int v_rasqal_algebra_query_prepare_aggregates( long parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4);
int v_rasqal_algebra_write_indent( double parameter_1,long parameter_2);
void v_rasqal_algebra_node_operator_as_counted_string( short parameter_1,float parameter_2);
int v_rasqal_algebra_algebra_node_write_internal( char parameter_1,unsigned int parameter_2,unsigned int parameter_3);
int v_rasqal_algebra_algebra_node_write( int parameter_1,unsigned int parameter_2);
int v_rasqal_algebra_node_print( double parameter_1,int parameter_2);
long v_rasqal_new_groupby_algebra_node( int parameter_1,char parameter_2,long parameter_3);
char v_rasqal_expression_copy_expression_sequence();
int v_rasqal_algebra_query_add_group_by( short parameter_1,double parameter_2,long parameter_3);
void v_rasqal_algebra_select_graph_pattern_to_algebra( short parameter_1,short parameter_2);
unsigned int v_rasqal_new_assignment_algebra_node( char parameter_1,unsigned int parameter_2,float parameter_3);
int v_rasqal_algebra_let_graph_pattern_to_algebra( int parameter_1,char parameter_2);
void v_rasqal_new_graph_algebra_node( short parameter_1,float parameter_2,unsigned int parameter_3);
int v_rasqal_algebra_graph_graph_pattern_to_algebra( char parameter_1,unsigned int parameter_2);
unsigned int v_rasqal_new_literal_expression( unsigned int parameter_1,double parameter_2);
float v_rasqal_algebra_new_boolean_constant_expr( long parameter_1,int parameter_2);
short v_rasqal_new_leftjoin_algebra_node( unsigned int parameter_1,int parameter_2,char parameter_3,char parameter_4);
short v_rasqal_new_empty_algebra_node( unsigned int parameter_1);
long v_rasqal_algebra_group_graph_pattern_to_algebra( char parameter_1,unsigned int parameter_2);
unsigned int v_rasqal_new_2op_algebra_node( unsigned int parameter_1,double parameter_2,long parameter_3,short parameter_4);
void v_rasqal_algebra_union_graph_pattern_to_algebra( double parameter_1,unsigned int parameter_2);
void v_rasqal_free_algebra_node( char parameter_1);
float v_rasqal_new_filter_algebra_node( double parameter_1,unsigned int parameter_2,float parameter_3);
char v_rasqal_query_get_triple_sequence( int parameter_1);
unsigned int v_rasqal_new_algebra_node( char parameter_1,unsigned int parameter_2);
double v_rasqal_new_triples_algebra_node( long parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
unsigned int v_rasqal_algebra_basic_graph_pattern_to_algebra( long parameter_1,long parameter_2);
int v_rasqal_algebra_graph_pattern_to_algebra( double parameter_1,unsigned int parameter_2);
long v_rasqal_algebra_query_to_algebra( long parameter_1);
int v_rasqal_query_variable_is_bound( double parameter_1,float parameter_2);
float v_rasqal_query_check_unused_variables( double parameter_1);
int v_rasqal_graph_pattern_variable_bound_in( int parameter_1,long parameter_2);
int v_rasqal_graph_pattern_variable_bound_below( unsigned int parameter_1,short parameter_2);
int v_rasqal_graph_pattern_find_parent( float parameter_1,short parameter_2);
float v_rasqal_graph_pattern_get_parent( unsigned int parameter_1,float parameter_2,unsigned int parameter_3);
void v_rasqal_expression_has_variable(char parameter_2);
int v_rasqal_expression_mentions_variable( float parameter_1,char parameter_2);
double v_rasqal_query_filter_variable_scope( char parameter_1,float parameter_2);
short v_rasqal_query_build_variable_agg_use( short parameter_1);
short v_rasqal_query_values_build_variables_use_map_binds( int parameter_1,float parameter_2,int parameter_3,short parameter_4,char parameter_5);
double v_rasqal_query_union_build_variables_use_map_binds( double parameter_1,float parameter_2,int parameter_3,double parameter_4,int parameter_5);
long v_rasqal_query_select_build_variables_use_map_binds( short parameter_1,char parameter_2,int parameter_3,double parameter_4,float parameter_5);
long v_rasqal_query_let_build_variables_use_map_binds( long parameter_1,double parameter_2);
short v_rasqal_query_graph_build_variables_use_map_binds( short parameter_1,float parameter_2);
long v_rasqal_graph_pattern_promote_variable_mention_to_bind( float parameter_1,float parameter_2,long parameter_3);
short v_rasqal_query_triples_build_variables_use_map_binds( float parameter_1,short parameter_2,int parameter_3,float parameter_4,short parameter_5);
long v_rasqal_query_graph_pattern_build_variables_use_map_binds( float parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4,long parameter_5);
void v_rasqal_query_build_variables_use_map_binds( long parameter_1,char parameter_2,int parameter_3,int parameter_4);
void v_rasqal_graph_pattern_mentions_variable( unsigned int parameter_1,short parameter_2);
void v_rasqal_graph_pattern_tree_mentions_variable( double parameter_1,char parameter_2);
unsigned int v_rasqal_query_select_build_variables_use_map( int parameter_1,float parameter_2,int parameter_3,char parameter_4);
char v_rasqal_query_let_build_variables_use_map( float parameter_1,long parameter_2,long parameter_3);
int v_rasqal_query_graph_build_variables_use_map( int parameter_1,int parameter_2);
double v_rasqal_query_graph_pattern_build_variables_use_map( unsigned int parameter_1,float parameter_2,int parameter_3,double parameter_4);
double v_rasqal_query_get_having_conditions_sequence( double parameter_1);
unsigned int v_rasqal_query_build_expressions_sequence_use_map_row( unsigned int parameter_1,unsigned int parameter_2);
void v_rasqal_query_get_group_conditions_sequence( double parameter_1);
int v_rasqal_query_triples_build_variables_use_map_row( int parameter_1,float parameter_2,int parameter_3,int parameter_4);
int v_rasqal_query_build_literals_sequence_use_map_row( float parameter_1,char parameter_2);
void v_rasqal_query_expression_build_variables_use_map_row( int parameter_1,double parameter_2);
long v_rasqal_query_expression_build_variables_use_map( short parameter_1,unsigned int parameter_2);
double v_rasqal_query_build_variables_sequence_use_map_row( double parameter_1,int parameter_2,int parameter_3);
int v_rasqal_variables_table_get_total_variables_count();
double v_rasqal_query_build_variables_use_map( long parameter_1,long parameter_2);
int v_rasqal_query_build_variables_use( char parameter_1,long parameter_2);
char v_rasqal_query_prepare_count_graph_pattern( double parameter_1,short parameter_2);
unsigned int v_rasqal_query_enumerate_graph_patterns( char parameter_1);
int v_rasqal_query_merge_graph_patterns( unsigned int parameter_1,long parameter_2);
double v_rasqal_query_remove_empty_group_graph_patterns( long parameter_1,double parameter_2);
void v_rasqal_new_2op_expression( float parameter_1,long parameter_2,unsigned int parameter_3,float parameter_4);
unsigned int v_rasqal_new_expression_from_expression();
int v_rasqal_graph_pattern_move_constraints( int parameter_1,int parameter_2);
int v_rasqal_graph_patterns_join( short parameter_1,char parameter_2);
void v_rasqal_query_merge_triple_patterns( unsigned int parameter_1,short parameter_2);
int v_rasqal_graph_pattern_get_sub_graph_pattern( short parameter_1,int parameter_2);
short v_rasqal_graph_pattern_get_sub_graph_pattern_sequence( double parameter_1);
int v_rasqal_graph_pattern_visit( short parameter_1,unsigned int parameter_2);
long v_rasqal_query_get_query_graph_pattern( long parameter_1);
int v_rasqal_query_graph_pattern_visit2( float parameter_1,short parameter_2);
int v_rasqal_row_write( long parameter_1,unsigned int parameter_2);
unsigned int v_rasqal_bindings_get_row( short parameter_1,int parameter_2);
int v_rasqal_variables_write( char parameter_1,long parameter_2);
short v_rasqal_projection_get_variables_sequence( float parameter_1);
void v_rasqal_triple_write( short parameter_1,short parameter_2);
short v_rasqal_graph_pattern_write_plurals( float parameter_1,char parameter_2,int parameter_3);
int v_rasqal_graph_pattern_write_indent( long parameter_1,int parameter_2);
char v_rasqal_graph_pattern_operator_as_string( short parameter_1);
float v_rasqal_graph_pattern_write_internal( int parameter_1,int parameter_2,int parameter_3);
int v_rasqal_graph_pattern_print( short parameter_1,short parameter_2);
void v_rasqal_expression_convert_to_literal( double parameter_1,int parameter_2);
void v_rasqal_expression_evaluate_struuid( char parameter_1,int parameter_2,int parameter_3);
unsigned int v_rasqal_expression_evaluate_uuid( double parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
unsigned int v_rasqal_expression_evaluate_uriuuid( double parameter_1,short parameter_2,int parameter_3);
float v_rasqal_expression_evaluate_digest( double parameter_1,double parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_floor( short parameter_1,long parameter_2);
float v_rasqal_literal_floor( char parameter_1,int parameter_2);
float v_rasqal_expression_evaluate_floor( short parameter_1,short parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_ceil( float parameter_1,long parameter_2);
short v_rasqal_literal_ceil( char parameter_1,int parameter_2);
double v_rasqal_expression_evaluate_ceil( double parameter_1,unsigned int parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_round( float parameter_1,char parameter_2);
unsigned int v_rasqal_literal_round( unsigned int parameter_1,int parameter_2);
long v_rasqal_expression_evaluate_round( int parameter_1,short parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_abs( double parameter_1,char parameter_2);
float v_rasqal_literal_abs( short parameter_1,int parameter_2);
int v_rasqal_expression_evaluate_abs( unsigned int parameter_1,short parameter_2,int parameter_3);
short v_rasqal_regex_replace( short parameter_1,double parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5,int parameter_6,int parameter_7,char parameter_8,float parameter_9);
float v_rasqal_expression_evaluate_replace( char parameter_1,double parameter_2,int parameter_3);
void v_rasqal_expression_evaluate_strafter( short parameter_1,float parameter_2,int parameter_3);
int v_rasqal_literal_is_string( double parameter_1);
float v_rasqal_expression_evaluate_strbefore( short parameter_1,char parameter_2,int parameter_3);
float v_rasqal_expression_evaluate_substr( char parameter_1,float parameter_2,int parameter_3);
float v_rasqal_expression_evaluate_encode_for_uri( short parameter_1,double parameter_2,int parameter_3);
int v_rasqal_xsd_datetime_get_tz_as_counted_string( long parameter_1,double parameter_2);
short v_rasqal_expression_evaluate_datetime_tz( unsigned int parameter_1,double parameter_2,int parameter_3);
char v_rasqal_xsd_datetime_get_timezone_as_counted_string( float parameter_1,long parameter_2);
unsigned int v_rasqal_expression_evaluate_datetime_timezone( float parameter_1,unsigned int parameter_2,int parameter_3);
short v_rasqal_literals_sparql11_compatible( short parameter_1,float parameter_2);
short v_rasqal_expression_evaluate_str_prefix_suffix( double parameter_1,double parameter_2,int parameter_3);
unsigned int v_rasqal_expression_evaluate_set_case( short parameter_1,int parameter_2,int parameter_3);
float v_rasqal_expression_evaluate_strlen( double parameter_1,short parameter_2,int parameter_3);
int v_rasqal_random_irand( short parameter_1);
double v_rasqal_random_drand( short parameter_1);
unsigned int v_rasqal_expression_evaluate_rand( double parameter_1,char parameter_2,int parameter_3);
int v_rasqal_xsd_datetime_set_from_unixtime( long parameter_1,int parameter_2);
char v_rasqal_new_xsd_datetime_from_unixtime( int parameter_1,short parameter_2);
void v_rasqal_expression_evaluate_from_unixtime( long parameter_1,unsigned int parameter_2,int parameter_3);
void v_rasqal_new_numeric_literal_from_long( double parameter_1,int parameter_2,long parameter_3);
int v_rasqal_expression_evaluate_to_unixtime( long parameter_1,double parameter_2,int parameter_3);
int v_rasqal_xsd_datetime_set_from_timeval( long parameter_1,long parameter_2);
short v_rasqal_new_xsd_datetime_from_timeval( float parameter_1,float parameter_2);
long v_rasqal_world_get_now_timeval( int parameter_1);
unsigned int v_rasqal_expression_evaluate_now( float parameter_1,unsigned int parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_set_long( float parameter_1,long parameter_2);
double v_rasqal_xsd_datetime_get_seconds_as_decimal( int parameter_1,int parameter_2);
long v_rasqal_expression_evaluate_datetime_part( long parameter_1,double parameter_2,int parameter_3);
void v_rasqal_expression_evaluate_in_set( float parameter_1,double parameter_2,int parameter_3,int uni_para);
float v_rasqal_world_default_generate_bnodeid_handler(short parameter_2);
void v_rasqal_world_generate_bnodeid( short parameter_1,short parameter_2);
unsigned int v_rasqal_expression_evaluate_bnode_constructor( unsigned int parameter_1,char parameter_2,int parameter_3);
unsigned int v_rasqal_literal_as_uri();
float v_rasqal_expression_evaluate_strdt( char parameter_1,unsigned int parameter_2,int parameter_3);
float v_rasqal_expression_evaluate_strlang( short parameter_1,double parameter_2,int parameter_3);
unsigned int v_rasqal_expression_evaluate_uri_constructor( float parameter_1,float parameter_2,int parameter_3);
long v_rasqal_expression_evaluate_if( float parameter_1,char parameter_2,int parameter_3);
short v_rasqal_expression_evaluate_coalesce( char parameter_1,long parameter_2,int parameter_3);
double v_rasqal_expression_evaluate_concat( long parameter_1,int parameter_2,int parameter_3);
int v_rasqal_literal_same_term( unsigned int parameter_1,float parameter_2);
void v_rasqal_expression_evaluate_sameterm( int parameter_1,unsigned int parameter_2,int parameter_3);
int v_rasqal_literal_cast( float parameter_1,float parameter_2,int parameter_3,int parameter_4);
int v_rasqal_regex_match( int parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5,float parameter_6);
unsigned int v_rasqal_expression_evaluate_strmatch( int parameter_1,unsigned int parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_is_zero( double parameter_1);
int v_rasqal_xsd_decimal_divide( double parameter_1,short parameter_2,double parameter_3);
unsigned int v_rasqal_literal_divide( long parameter_1,float parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_multiply( int parameter_1,short parameter_2,float parameter_3);
void v_rasqal_literal_multiply( double parameter_1,float parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_subtract( float parameter_1,char parameter_2,short parameter_3);
void v_rasqal_literal_subtract( long parameter_1,unsigned int parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_add( char parameter_1,float parameter_2,long parameter_3);
double v_rasqal_literal_add( long parameter_1,long parameter_2,int parameter_3);
int v_rasqal_literal_is_numeric( char parameter_1);
unsigned int v_rasqal_expression_evaluate_istype( double parameter_1,long parameter_2,int parameter_3);
char v_rasqal_expression_evaluate_datatype( float parameter_1,int parameter_2,int parameter_3);
int v_rasqal_language_matches( char parameter_1,char parameter_2);
char v_rasqal_expression_evaluate_langmatches( char parameter_1,long parameter_2,int parameter_3);
long v_rasqal_expression_evaluate_lang( double parameter_1,char parameter_2,int parameter_3);
short v_rasqal_expression_evaluate_str( double parameter_1,long parameter_2,int parameter_3);
int v_rasqal_expression_evaluate_bound( double parameter_1,long parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_negate( long parameter_1,long parameter_2);
long v_rasqal_new_decimal_literal( unsigned int parameter_1,double parameter_2);
void v_rasqal_new_numeric_literal( long parameter_1,unsigned int parameter_2,double parameter_3);
double v_rasqal_literal_negate( int parameter_1,int parameter_2);
int v_rasqal_xsd_decimal_compare( double parameter_1,long parameter_2);
int v_rasqal_literal_string_datatypes_compare( char parameter_1,float parameter_2);
short v_rasqal_literal_string_compare( double parameter_1,char parameter_2,int parameter_3);
short v_rasqal_literal_rdql_promote_calculate( char parameter_1,long parameter_2);
short v_rasqal_literal_value();
int v_rasqal_literal_compare( float parameter_1,double parameter_2,int parameter_3,int parameter_4);
int v_rasqal_literal_not_equals_flags( int parameter_1,short parameter_2,int parameter_3,int parameter_4);
unsigned int v_rasqal_new_boolean_literal( unsigned int parameter_1,int parameter_2);
short v_rasqal_expression_evaluate2( short parameter_1,short parameter_2,int parameter_3,int uni_para);
int v_rasqal_literal_is_constant( double parameter_1);
int v_rasqal_expression_is_constant( float parameter_1);
void v_rasqal_expression_foreach_fold(float parameter_2,int uni_para);
int v_rasqal_expression_visit( char parameter_1);
short v_rasqal_query_expression_fold( unsigned int parameter_1,unsigned int parameter_2,int uni_para);
char v_rasqal_graph_pattern_fold_expressions( long parameter_1,char parameter_2,int uni_para);
double v_rasqal_query_get_order_conditions_sequence( int parameter_1);
double v_rasqal_query_fold_expressions( long parameter_1,int uni_para);
void v_rasqal_log_warning_simple( char parameter_1,double parameter_2,unsigned int parameter_3,short parameter_4,long parameter_5);
int v_rasqal_query_remove_duplicate_select_vars( short parameter_1,double parameter_2);
double v_rasqal_query_get_projection( int parameter_1);
int v_rasqal_query_prepare_common(int uni_para);
int v_rasqal_evaluation_context_set_rand_seed( int parameter_1,unsigned int parameter_2);
int v_rasqal_evaluation_context_set_base_uri( short parameter_1,float parameter_2);
void v_rasqal_query_set_base_uri( char parameter_1,int parameter_2);
int v_rasqal_query_prepare( short parameter_1,long parameter_2,unsigned int parameter_3,int uni_para);
int v_file_read_string( short parameter_1,char parameter_2,int parameter_3);
unsigned int v_rasqal_random_get_system_seed( double parameter_1);
int v_rasqal_random_seed( unsigned int parameter_1,short parameter_2);
double v_rasqal_new_random( double parameter_1);
short v_rasqal_new_evaluation_context( short parameter_1,float parameter_2,int parameter_3);
void v_rasqal_free_bindings( float parameter_1);
void v_rasqal_free_solution_modifier( double parameter_1);
void v_rasqal_free_projection( float parameter_1);
void v_rasqal_free_graph_pattern( int parameter_1);
void v_rasqal_free_random( unsigned int parameter_1);
void v_rasqal_free_evaluation_context( double parameter_1);
void v_rasqal_free_query( long parameter_1);
void v_rasqal_query_results_remove_query_reference();
int v_rasqal_data_graph_print( double parameter_1,double parameter_2);
void v_rasqal_free_data_graph( short parameter_1);
int v_rasqal_prefix_print( short parameter_1,long parameter_2);
void v_rasqal_free_prefix( double parameter_1);
unsigned int v_rasqal_new_variables_table( char parameter_1);
float v_rasqal_get_query_language_factory( int parameter_1,long parameter_2,short parameter_3);
void v_rasqal_new_query( int parameter_1,unsigned int parameter_2,float parameter_3);
float v_rasqal_query_results_rdfxml_recognise_syntax( unsigned int parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,double parameter_6);
double v_rasqal_query_results_rdfxml_register_factory();
int v_rasqal_init_result_format_rdf();
short v_rasqal_query_results_turtle_recognise_syntax( double parameter_1,double parameter_2,unsigned int parameter_3,double parameter_4,double parameter_5,short parameter_6);
short v_rasqal_query_results_rdf_get_rowsource( double parameter_1,int parameter_2,long parameter_3,unsigned int parameter_4,float parameter_5,unsigned int parameter_6);
char v_rasqal_query_results_rdf_write( float parameter_1,float parameter_2,float parameter_3,double parameter_4);
int v_rasqal_literal_write_turtle( int parameter_1,long parameter_2);
char v_rasqal_query_results_turtle_write( char parameter_1,short parameter_2,unsigned int parameter_3,unsigned int parameter_4);
short v_rasqal_query_results_rdf_finish( unsigned int parameter_1);
long v_rasqal_query_results_rdf_init( unsigned int parameter_1,long parameter_2);
unsigned int v_rasqal_query_results_format_rdf_copy_syntax_description_from_parser( unsigned int parameter_1,double parameter_2);
void v_rasqal_query_results_turtle_register_factory();
int v_rasqal_init_result_format_turtle( char parameter_1);
int v_rasqal_query_results_get_count( unsigned int parameter_1);
float v_rasqal_iostream_write_html_literal( char parameter_1,unsigned int parameter_2,double parameter_3);
void v_rasqal_query_results_write_html_bindings( double parameter_1,unsigned int parameter_2);
void v_rasqal_query_results_write_html_boolean( double parameter_1,short parameter_2);
unsigned int v_rasqal_query_results_write_html( double parameter_1,unsigned int parameter_2,long parameter_3,long parameter_4);
void v_rasqal_query_results_html_register_factory( double parameter_1);
int v_rasqal_init_result_format_html();
short v_rasqal_query_results_tsv_recognise_syntax( char parameter_1,float parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5,float parameter_6);
short v_rasqal_query_results_get_rowsource_tsv( char parameter_1,char parameter_2,char parameter_3,short parameter_4,int parameter_5,double parameter_6);
unsigned int v_rasqal_query_results_write_tsv( short parameter_1,char parameter_2,float parameter_3,unsigned int parameter_4);
short v_rasqal_query_results_tsv_register_factory( long parameter_1);
void v_rasqal_query_results_mkr_recognise_syntax( int parameter_1,char parameter_2,double parameter_3,double parameter_4,char parameter_5,char parameter_6);
float v_rasqal_query_results_get_rowsource_mkr( unsigned int parameter_1,short parameter_2,float parameter_3,short parameter_4,long parameter_5,char parameter_6);
double v_rasqal_query_results_write_mkr( float parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4);
float v_rasqal_query_results_mkr_register_factory( double parameter_1);
void v_rasqal_query_results_sv_score_first_line( float parameter_1,long parameter_2,double parameter_3,short parameter_4,unsigned int parameter_5);
float v_rasqal_query_results_csv_recognise_syntax( long parameter_1,unsigned int parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5,float parameter_6);
char v_rasqal_query_results_get_rowsource_csv( short parameter_1,float parameter_2,unsigned int parameter_3,short parameter_4,long parameter_5,char parameter_6);
float v_rasqal_iostream_write_csv_string( short parameter_1,char parameter_2,unsigned int parameter_3);
void v_rasqal_query_results_write_sv( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4,int parameter_5,int parameter_6,char parameter_7,double parameter_8,int parameter_9);
short v_rasqal_query_results_write_csv( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,float parameter_4);
float v_rasqal_query_results_csv_register_factory( int parameter_1);
int v_rasqal_init_result_format_sv( long parameter_1);
int v_rasqal_query_results_write_table_boolean( char parameter_1,short parameter_2,long parameter_3);
short v_rasqal_iostream_write_counted_string_padded( int parameter_1,short parameter_2,int parameter_3,double parameter_4,float parameter_5);
unsigned int v_rasqal_alloc_memory( char parameter_1);
long v_rasqal_free_chararray();
int v_rasqal_query_results_write_table_bindings( long parameter_1,int parameter_2,long parameter_3);
short v_rasqal_query_results_write_table( float parameter_1,long parameter_2,short parameter_3,char parameter_4);
int v_rasqal_query_results_table_register_factory( char parameter_1);
int v_rasqal_init_result_format_table( float parameter_1);
int v_rasqal_query_get_distinct( unsigned int parameter_1);
float v_rasqal_query_get_order_condition( float parameter_1,int parameter_2);
double v_rasqal_iostream_write_json_boolean( int parameter_1,double parameter_2,int parameter_3);
void v_rasqal_query_results_get_query();
long v_rasqal_query_results_write_json1( double parameter_1,char parameter_2,char parameter_3,double parameter_4);
char v_rasqal_query_results_json_register_factory();
int v_rasqal_init_result_format_json( double parameter_1);
int v_rasqal_sparql_xml_free_context( double parameter_1);
int v_rasqal_sparql_xml_start( int parameter_1);
short v_rasqal_rowsource_sparql_xml_get_boolean( float parameter_1,int parameter_2,double parameter_3,long parameter_4,long parameter_5);
short v_rasqal_query_results_xml_recognise_syntax( long parameter_1,long parameter_2,double parameter_3,char parameter_4,unsigned int parameter_5,long parameter_6);
void v_rasqal_expression_print_op( char parameter_1,long parameter_2);
int v_rasqal_expression_print( char parameter_1,char parameter_2);
int v_rasqal_variable_print( long parameter_1,long parameter_2);
unsigned int v_rasqal_new_rowsource_from_handler( float parameter_1,long parameter_2,unsigned int parameter_4,short parameter_5,int parameter_6);
void v_rasqal_new_variables_table_from_variables_table( double parameter_1);
int v_rasqal_row_print( int parameter_1,double parameter_2);
int v_rasqal_row_set_value_at( unsigned int parameter_1,int parameter_2,int parameter_3);
void v_rasqal_sparql_xml_sax2_end_element_handler(int parameter_2);
unsigned int v_rasqal_sparql_xml_sax2_characters_handler(int parameter_2,short parameter_3,int parameter_4);
float v_rasqal_new_row_common( unsigned int parameter_1,int parameter_2,int parameter_3);
int v_rasqal_rowsource_get_size( char parameter_1);
int v_rasqal_new_rowsource_from_rowsource( double parameter_1);
char v_rasqal_new_row( int parameter_1);
int v_rasqal_rowsource_get_variable_offset_by_name( unsigned int parameter_1,char parameter_2);
int v_rasqal_rowsource_add_variable( double parameter_1,long parameter_2);
float v_rasqal_sparql_xml_sax2_start_element_handler(char parameter_2);
int v_rasqal_sparql_xml_init_context( float parameter_1,unsigned int parameter_2,char parameter_3,long parameter_4);
char v_rasqal_query_results_get_rowsource_sparql_xml( short parameter_1,long parameter_2,short parameter_3,int parameter_4,double parameter_5,double parameter_6);
double v_rasqal_query_results_next_internal( short parameter_1);
int v_rasqal_query_results_next( char parameter_1);
char v_rasqal_query_results_get_binding_value( int parameter_1,int parameter_2);
int v_rasqal_query_results_get_bindings_count( short parameter_1);
int v_rasqal_query_results_finished( unsigned int parameter_1);
int v_rasqal_query_results_get_boolean( char parameter_1);
int v_rasqal_query_results_is_boolean( double parameter_1);
int v_rasqal_variables_table_contains( double parameter_1,char parameter_2,long parameter_3);
int v_rasqal_variables_table_add_variable( long parameter_1,float parameter_2);
unsigned int v_rasqal_new_variable_from_variable();
long v_rasqal_variables_table_add2( int parameter_1,double parameter_2,int parameter_3,long parameter_4,long parameter_5);
char v_rasqal_rowsource_print_header( long parameter_1,short parameter_2);
int v_rasqal_rowsource_ensure_variables( long parameter_1);
unsigned int v_rasqal_rowsource_get_variable_by_offset( long parameter_1,int parameter_2);
long v_rasqal_row_get_variable_by_offset( unsigned int parameter_1,int parameter_2);
void v_rasqal_free_variables_table( double parameter_1);
void v_rasqal_free_rowsource( long parameter_1);
void v_rasqal_free_row( unsigned int parameter_1);
double v_rasqal_variables_table_get_by_name( unsigned int parameter_1,float parameter_2,char parameter_3);
double v_rasqal_variables_table_get( short parameter_1,int parameter_2);
int v_rasqal_variables_table_get_named_variables_count( float parameter_1);
double v_rasqal_query_results_update_query_bindings( int parameter_1,float parameter_2);
float v_rasqal_literal_as_node( long parameter_1);
int v_rasqal_row_to_nodes();
char v_rasqal_new_row_from_row( float parameter_1);
int v_rasqal_query_check_limit_offset_core( int parameter_1,int parameter_2,int parameter_3);
int v_rasqal_query_get_offset( long parameter_1);
int v_rasqal_query_get_limit( long parameter_1);
int v_rasqal_query_check_limit_offset( short parameter_1,int parameter_2);
char v_rasqal_query_results_get_row_from_saved( long parameter_1);
long v_rasqal_query_results_ensure_have_row_internal( short parameter_1);
unsigned int v_rasqal_query_results_get_current_row( int parameter_1);
void v_rasqal_query_results_get_binding_name( float parameter_1,int parameter_2);
int v_rasqal_query_results_is_bindings( float parameter_1);
double v_rasqal_query_results_type_label();
char v_rasqal_query_results_get_type( unsigned int parameter_1);
char v_rasqal_query_results_get_world( long parameter_1);
double v_rasqal_query_results_write_sparql_xml( int parameter_1,char parameter_2,unsigned int parameter_3,long parameter_4);
float v_rasqal_query_results_sparql_xml_register_factory( char parameter_1);
float v_rasqal_world_register_query_results_format_factory( unsigned int parameter_1,int parameter_2);
int v_rasqal_init_result_format_sparql_xml();
void v_rasqal_free_query_results_format_factory( char parameter_1);
int v_rasqal_init_result_formats( long parameter_1);
int v_rasqal_init_query_results();
int v_rasqal_raptor_init_triples_source2( char parameter_1,float parameter_2,float parameter_5,unsigned int parameter_6,char parameter_7);
void v_rasqal_raptor_init_triples_source( double parameter_1,int parameter_4,char parameter_5);
void v_rasqal_triples_source_error_handler2( char parameter_1,long parameter_2,unsigned int parameter_3);
int v_rasqal_raptor_generate_id_handler(char parameter_2);
int v_rasqal_new_triple( char parameter_1,short parameter_2,unsigned int parameter_3);
unsigned int v_rasqal_new_simple_literal( unsigned int parameter_1,long parameter_2,long parameter_3);
short v_rasqal_new_literal_from_term( unsigned int parameter_1,int parameter_2);
void v_raptor_statement_as_rasqal_triple( float parameter_1,short parameter_2);
long v_rasqal_raptor_statement_handler(float parameter_2);
double v_rasqal_raptor_get_genid( unsigned int parameter_1,double parameter_2,int parameter_3);
double v_rasqal_new_uri_literal( short parameter_1,double parameter_2);
int v_rasqal_raptor_support_feature(int parameter_2);
void v_rasqal_free_triple();
void v_rasqal_triple_set_origin( char parameter_1,long parameter_2);
char v_rasqal_raptor_free_triples_source();
float v_rasqal_raptor_triple_present( float parameter_1,char parameter_3);
void v_rasqal_raptor_finish_triples_match( double parameter_1);
unsigned int v_rasqal_raptor_is_end( int parameter_1);
int v_rasqal_raptor_triple_match( double parameter_1,int parameter_2,long parameter_3,short parameter_4);
float v_rasqal_literal_as_variable( int parameter_1);
long v_rasqal_raptor_next_match( long parameter_1);
int v_rasqal_literal_equals( char parameter_1,int parameter_2);
int v_rasqal_xsd_decimal_equals( double parameter_1,short parameter_2);
int v_rasqal_double_approximately_compare( double parameter_1,double parameter_2);
int v_rasqal_double_approximately_equal( double parameter_1,double parameter_2);
int v_rasqal_xsd_datetime_compare2( short parameter_1,long parameter_2,int parameter_3);
int v_rasqal_xsd_datetime_equals2( char parameter_1,unsigned int parameter_2,int parameter_3);
double v_rasqal_xsd_timeline_compare( char parameter_1,short parameter_2,long parameter_3,long parameter_4,long parameter_5,double parameter_6,int parameter_7);
int v_rasqal_xsd_date_compare( unsigned int parameter_1,char parameter_2,int parameter_3);
int v_rasqal_xsd_date_equals( long parameter_1,short parameter_2,int parameter_3);
char v_rasqal_literal_blank_equals( float parameter_1,float parameter_2);
int v_rasqal_strcasecmp( long parameter_1,short parameter_2);
int v_rasqal_literal_string_languages_compare( char parameter_1,unsigned int parameter_2);
int v_rasqal_literal_string_equals_flags( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
char v_rasqal_literal_uri_equals( short parameter_1,long parameter_2);
long v_rasqal_literal_as_string_flags( char parameter_1,int parameter_2,int parameter_3);
long v_rasqal_literal_as_string( int parameter_1);
double v_rasqal_new_string_literal( int parameter_1,char parameter_2,int parameter_3,char parameter_4,long parameter_5,int uni_para);
int v_rasqal_literal_as_boolean( unsigned int parameter_1,int parameter_2);
double v_rasqal_xsd_format_integer( int parameter_1,int parameter_2);
char v_rasqal_new_integer_literal( int parameter_1,char parameter_2,int parameter_3);
long v_rasqal_xsd_decimal_get_long( unsigned int parameter_1,int parameter_2);
int v_rasqal_literal_as_integer( int parameter_1,int parameter_2);
short v_rasqal_new_floating_literal( double parameter_1,int parameter_2,double parameter_3);
long v_rasqal_new_double_literal( int parameter_1,double parameter_2);
double v_rasqal_new_decimal_literal_from_decimal( long parameter_1,char parameter_2,float parameter_3);
int v_rasqal_xsd_decimal_set_double( short parameter_1,double parameter_2);
double v_rasqal_xsd_decimal_get_double( short parameter_1);
double v_rasqal_literal_as_double( long parameter_1,int parameter_2);
int v_rasqal_new_string_literal_common( float parameter_1,int parameter_2,int parameter_3,long parameter_4,int parameter_5,int parameter_6,int uni_para);
double v_rasqal_new_string_literal_node( long parameter_1,short parameter_2,unsigned int parameter_3,float parameter_4);
int v_rasqal_literal_as_counted_string( int parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
int v_rasqal_xsd_datatype_is_numeric( long parameter_1);
void v_rasqal_new_datetime_literal_from_datetime( int parameter_1,short parameter_2);
int v_rasqal_new_xsd_datetime_from_xsd_date( unsigned int parameter_1,short parameter_2);
double v_rasqal_new_literal_from_promotion( double parameter_1,double parameter_2,int parameter_3,int uni_para);
int v_rasqal_literal_promote_numerics( float parameter_1,double parameter_2,int parameter_3);
short v_rasqal_xsd_format_microseconds( char parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void v_rasqal_xsd_datetime_to_counted_string( int parameter_1,float parameter_2);
int v_rasqal_new_xsd_datetime( long parameter_1,short parameter_2);
int v_rasqal_format_integer( char parameter_1,char parameter_2,int parameter_3,int parameter_4,char parameter_5);
char v_rasqal_xsd_timezone_format( int parameter_1,char parameter_2,char parameter_3,short parameter_4);
long v_rasqal_xsd_date_to_counted_string( float parameter_1,float parameter_2);
int v_rasqal_timegm( long parameter_1,int uni_para);
char v_rasqal_xsd_datetime_get_as_unixtime( long parameter_1,int uni_para);
float v_rasqal_xsd_datetime_normalize( float parameter_1,int uni_para);
char v_days_per_month( int parameter_1,int parameter_2);
float v_rasqal_xsd_datetime_parse( double parameter_1,unsigned int parameter_2,int parameter_3);
void v_rasqal_new_xsd_date( double parameter_1,char parameter_2,int uni_para);
int v_rasqal_xsd_boolean_value_from_string( char parameter_1);
char v_rasqal_xsd_decimal_as_string( short parameter_1);
unsigned int v_rasqal_xsd_decimal_as_counted_string( short parameter_1,short parameter_2);
int v_rasqal_xsd_decimal_set_string( short parameter_1,long parameter_2);
unsigned int v_rasqal_xsd_decimal_init( char parameter_1);
int v_rasqal_new_xsd_decimal( float parameter_1);
long v_rasqal_xsd_format_double( double parameter_1,short parameter_2);
void v_rasqal_xsd_datatype_parent_type( unsigned int parameter_1);
short v_rasqal_xsd_datatype_type_to_uri( int parameter_1,long parameter_2);
double v_rasqal_xsd_datatype_label( int parameter_1);
int v_rasqal_xsd_datatype_check( float parameter_1,long parameter_2,int parameter_3);
unsigned int v_rasqal_literal_set_typed_value( float parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4,int uni_para);
float v_rasqal_xsd_datatype_uri_to_type( float parameter_1,unsigned int parameter_2);
int v_rasqal_literal_string_to_native( double parameter_1,int parameter_2,int uni_para);
long v_rasqal_literal_get_rdf_term_type( float parameter_1);
int v_rasqal_literal_equals_flags( int parameter_1,float parameter_2,int parameter_3,int parameter_4,int uni_para);
short v_rasqal_new_literal_from_literal( long parameter_1);
void v_rasqal_expression_clear( short parameter_1);
void v_rasqal_free_expression( unsigned int parameter_1);
void v_rasqal_free_variable( int parameter_1);
void v_rasqal_xsd_decimal_clear_string( float parameter_1);
short v_rasqal_xsd_decimal_clear( int parameter_1);
void v_rasqal_free_xsd_decimal( long parameter_1);
void v_rasqal_free_xsd_datetime( char parameter_1);
void v_rasqal_free_xsd_date( char parameter_1);
void v_rasqal_free_literal();
void v_rasqal_variable_set_value( unsigned int parameter_1,int parameter_2);
double v_rasqal_expression_op_label( double parameter_1);
void v_rasqal_expression_write_op( short parameter_1,char parameter_2);
void v_rasqal_expression_write( float parameter_1,unsigned int parameter_2);
void v_rasqal_variable_write( short parameter_1,int parameter_2);
float v_rasqal_literal_type_label( double parameter_1);
void v_rasqal_literal_write_type( int parameter_1,float parameter_2);
void v_rasqal_literal_write( short parameter_1,char parameter_2);
int v_rasqal_literal_print( unsigned int parameter_1,unsigned int parameter_2);
int v_rasqal_triple_print( int parameter_1,int parameter_2);
void v_rasqal_raptor_bind_match( unsigned int parameter_1,float parameter_3,unsigned int parameter_4);
short v_rasqal_raptor_init_triples_match( int parameter_1,short parameter_2,float parameter_4,float parameter_5);
double v_rasqal_raptor_init_triples_source_common( char parameter_1,short parameter_2,char parameter_3,float parameter_6,short parameter_7,float parameter_8,long parameter_9);
int v_rasqal_raptor_new_triples_source( short parameter_1,char parameter_4);
char v_rasqal_raptor_register_triples_source_factory( short parameter_1);
float v_rasqal_set_triples_source_factory( float parameter_1,char parameter_2);
int v_rasqal_raptor_init( short parameter_1);
long v_rasqal_free_query_language_factory( short parameter_1);
int v_rasqal_xsd_init( float parameter_1);
void v_rasqal_log_error_varargs( double parameter_1,char parameter_2,double parameter_3,char parameter_4,float parameter_5);
void v_rasqal_log_error_simple( short parameter_1,short parameter_2,unsigned int parameter_3,char parameter_4,double parameter_5);
int v_rasqal_uri_init( double parameter_1);
int v_rasqal_world_open( double parameter_1);
short v_rasqal_new_world();
double v_rasqal_basename( double parameter_1);
void v_rasqal_uri_finish( float parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double_1 = double_1 * double_1;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		double double_2 = 1;
		float float_1 = 1;
		double_2 = double_2 + double_2;
		float_1 = float_1 + float_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "o=") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_2 = 1;
		char_2 = char_1 * char_1;
		float_2 = float_2 * float_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
		double_1 = double_1 + double_1;
	}
}
void v_rasqal_xsd_finish( int parameter_1)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_2 = double_1 + double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				double double_3 = 1;
				double_3 = double_3;
			}
		}
		char_3 = char_1 + char_2;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
void v_rasqal_delete_query_language_factories( char parameter_1)
{
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_1 + long_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
}
void v_rasqal_finish_query_results()
{
}
void v_rasqal_finish_result_formats()
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		long_2 = long_1 + long_1;
	}
}
void v_rasqal_free_world( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_rasqal_delete_query_language_factories(char_1);

	double_1 = double_1 + double_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	v_rasqal_xsd_finish(int_1);

	double_1 = double_2 * double_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		int int_2 = 1;
		v_rasqal_uri_finish(float_1);

		int_2 = int_2 * int_2;
	}
	v_rasqal_finish_query_results();

	double_1 = double_2 + double_2;
	v_rasqal_finish_result_formats();

}
void v_rasqal_free_memory()
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
}
float v_rasqal_algebra_get_variables_mentioned_in( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double_2 = double_1 * double_1;
	double_3 = double_4;
	v_rasqal_free_variable(int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	unsigned_int_1 = v_rasqal_new_variable_from_variable();

	long_3 = long_3;
	if(1)
	{
	}
	double_1 = v_rasqal_variables_table_get(short_1,int_2);

	unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	int_3 = v_rasqal_variables_table_get_total_variables_count();

	short_2 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		int int_4 = 1;
		float float_3 = 1;
		float_2 = float_1 + float_2;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "$c") > 0)
		{
			long long_4 = 1;
			long_1 = long_4 * long_1;
		}
		int_3 = v_rasqal_variable_print(long_2,long_3);

		int_4 = int_4 + int_2;
		float_2 = float_1 + float_3;
	}
	return float_1;
}
double v_rasqal_algebra_query_add_construct_projection( long parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_rasqal_free_algebra_node(char_1);

	short_2 = short_1 * short_2;
	long_1 = long_1 + long_2;
	float_1 = float_1 * float_1;
	if(1)
	{
		v_rasqal_free_variable(int_1);

		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	}
	float_1 = v_rasqal_new_project_algebra_node(long_3,char_1,int_1);

	unsigned_int_1 = unsigned_int_5 + unsigned_int_4;
	unsigned_int_1 = v_rasqal_new_variable_from_variable();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		int_2 = v_rasqal_variable_print(long_2,long_1);

		unsigned_int_1 = unsigned_int_6 + unsigned_int_6;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_3 = long_4;
		short_1 = short_2 * short_2;
		char_2 = char_1 + char_1;
		long_3 = long_4 * long_5;
	}
	unsigned_int_7 = unsigned_int_5 + unsigned_int_4;
	if(1)
	{
		unsigned_int_6 = unsigned_int_2 * unsigned_int_7;
	}
	int_2 = v_rasqal_algebra_node_print(double_1,int_3);

	double_2 = double_1 * double_1;
	char_1 = char_2 * char_1;
	float_2 = v_rasqal_algebra_get_variables_mentioned_in(long_2,int_1);

	unsigned_int_8 = unsigned_int_5 * unsigned_int_6;
	return double_3;
}
int v_rasqal_algebra_node_is_empty( long parameter_1)
{
	int int_1 = 1;
	return int_1;
}
unsigned int v_rasqal_algebra_remove_znodes( double parameter_1,short parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_6 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		int int_3 = 1;
		int_2 = int_1 + int_1;
		double_1 = double_1 + double_2;
		char_1 = char_2;
		if(1)
		{
		}
		double_2 = double_2 + double_1;
		if(1)
		{
		}
		int_1 = v_rasqal_expression_is_constant(float_2);

		int_2 = int_2 + int_3;
		char_1 = char_2 * char_1;
		if(1)
		{
		}
		if(1)
		{
		}
		int_2 = v_rasqal_algebra_node_is_empty(long_1);

		short_1 = short_1 + short_2;
		int_4 = v_rasqal_literal_as_boolean(unsigned_int_2,int_2);

		int_1 = int_4;
	}
	if(1)
	{
	}
	float_3 = float_2 + float_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_2 + short_3;
	}
	long_3 = long_1 + long_2;
	v_rasqal_free_literal();

	double_4 = double_2 + double_3;
	long_4 = long_3 * long_2;
	if(1)
	{
		char char_3 = 1;
		long long_5 = 1;
		long long_6 = 1;
		char_1 = char_1 * char_3;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
		float_3 = float_3;
		int_1 = int_5 + int_5;
		long_6 = long_5 * long_2;
	}
	if(1)
	{
		int int_6 = 1;
		short short_7 = 1;
		double_2 = double_4;
		int_1 = v_rasqal_algebra_node_print(double_3,int_5);

		v_rasqal_algebra_node_operator_as_counted_string(short_5,float_2);

		int_6 = int_4 + int_2;
		unsigned_int_2 = unsigned_int_3;
		short_6 = v_rasqal_expression_evaluate2(short_3,short_1,int_5,-1 );

		v_rasqal_free_expression(unsigned_int_6);

		short_3 = short_7;
		double_4 = double_1 * double_1;
	}
	return unsigned_int_5;
}
int v_rasqal_algebra_node_visit( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
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
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
		}
	}
	return int_1;
}
short v_rasqal_new_service_algebra_node( float parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	short_1 = short_2 + short_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_1 = long_1 * long_2;
		unsigned_int_2 = v_rasqal_new_algebra_node(char_1,unsigned_int_1);

		float_1 = float_2;
		short_2 = short_1 * short_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	return short_3;
}
float v_rasqal_graph_pattern_get_filter_expression( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float_2 = float_1 + float_1;
	return float_2;
}
long v_rasqal_query_write_sparql_triple( int parameter_1,char parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long_1 = long_1;
	long_3 = long_2 + long_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	if(1)
	{
		long_1 = v_rasqal_query_write_sparql_literal(short_1,float_1,unsigned_int_1);

		unsigned_int_1 = unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	short_2 = short_2;
	char_1 = char_1 + char_1;
	return long_1;
}
int v_rasqal_graph_pattern_get_triple( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	long_1 = long_2;
	if(1)
	{
	}
	return int_1;
}
unsigned int v_rasqal_query_write_sparql_row( int parameter_1,double parameter_2,float parameter_3,int parameter_4)
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = v_rasqal_query_write_sparql_literal(short_1,float_1,unsigned_int_1);

	int_1 = int_1 * int_2;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_2 = short_2 * short_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_3 = int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			float_1 = float_1 + float_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	return unsigned_int_1;
}
float v_rasqal_query_write_sparql_values( short parameter_1,double parameter_2,char parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
		long_1 = v_rasqal_query_write_sparql_variables_sequence(unsigned_int_3,short_1,short_1);

		double_1 = double_1;
	}
	double_1 = double_2;
	if(1)
	{
		short short_2 = 1;
		unsigned_int_3 = v_rasqal_query_write_sparql_row(int_1,double_3,float_2,int_2);

		short_2 = short_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3;
	}
	double_4 = double_2 + double_2;
	if(1)
	{
		int_4 = int_3 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		double double_5 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			char_3 = char_3 + char_3;
		}
		double_2 = double_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_5 = 1;
			int_3 = int_4 * int_3;
			long_1 = v_rasqal_query_write_indent(char_2,float_3);

			unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
			if(1)
			{
				char_1 = char_2 * char_2;
				unsigned_int_3 = unsigned_int_1;
				float_1 = float_1 + float_4;
			}
			if(1)
			{
				char char_4 = 1;
				char char_5 = 1;
				char_3 = char_4 * char_5;
			}
		}
		float_6 = float_3 + float_5;
	}
	if(1)
	{
		float_1 = float_6 + float_4;
	}
	if(1)
	{
		int_4 = int_2 + int_2;
	}
	float_7 = float_4 * float_5;
	return float_6;
}
short v_rasqal_query_write_sparql_expression_sequence( float parameter_1,long parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float_1 = float_1 * float_1;
		if(1)
		{
			int int_3 = 1;
			int_1 = v_rasqal_query_write_sparql_expression(char_1,short_1,int_2);

			int_1 = int_3;
		}
		double_3 = double_1 + double_2;
	}
	return short_2;
}
unsigned int v_rasqal_query_write_sparql_modifiers( int parameter_1,double parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	int_1 = int_1 * int_1;
	if(1)
	{
		int_2 = int_2 * int_2;
		short_1 = short_2;
		float_1 = float_2;
	}
	char_1 = char_1 * char_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_4 = unsigned_int_1;
		double_3 = double_1 * double_2;
		short_3 = short_2 * short_3;
	}
	double_4 = double_4 * double_4;
	if(1)
	{
		int_1 = int_2 + int_1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	}
	long_2 = long_1 + long_2;
	double_6 = double_5 * double_4;
	if(1)
	{
		if(1)
		{
			float_1 = float_2;
			double_3 = double_6;
		}
		if(1)
		{
			if(1)
			{
				float float_3 = 1;
				short_1 = v_rasqal_query_write_sparql_expression_sequence(float_1,long_3,unsigned_int_4);

				float_3 = float_3;
			}
			long_2 = long_1 + long_3;
			char_2 = char_1 + char_1;
		}
		short_3 = short_3;
	}
	return unsigned_int_5;
}
long v_rasqal_query_write_indent( char parameter_1,float parameter_2)
{
	long long_1 = 1;
	return long_1;
}
char v_rasqal_query_write_sparql_uri( double parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	char_2 = char_1 * char_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		float_3 = float_1 + float_2;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1;
		}
		int_2 = int_1 * int_1;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 * long_3;
	}
	if(1)
	{
		char_1 = char_3 + char_3;
	}
	float_3 = float_4 + float_3;
	char_3 = char_1 * char_1;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	return char_1;
}
long v_rasqal_query_write_sparql_literal( short parameter_1,float parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	int_1 = v_rasqal_query_write_sparql_variable(unsigned_int_1,char_1,float_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	char_1 = char_2 * char_1;
	char_1 = char_3;
	short_1 = short_2;
	double_3 = double_3 + double_3;
	char_1 = char_3 * char_2;
	char_3 = v_rasqal_query_write_sparql_uri(double_3,long_1,int_2);

	double_1 = double_1 + double_4;
	short_1 = v_rasqal_xsd_datatype_type_to_uri(int_1,long_2);

	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		unsigned_int_2 = unsigned_int_5;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
	}
	int_2 = int_3;
	double_3 = double_2 + double_2;
	int_3 = int_1 * int_4;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	double_5 = double_3 + double_3;
	int_4 = int_5 * int_3;
	short_2 = short_1;
	char_3 = char_3 + char_2;
	double_7 = double_5 * double_6;
	short_3 = short_2 + short_2;
	if(1)
	{
		double double_8 = 1;
		long_1 = long_1;
		double_6 = double_1;
		double_8 = double_6 * double_5;
		double_6 = double_7 * double_4;
		if(1)
		{
			long_2 = long_2 * long_3;
		}
		if(1)
		{
			int_1 = int_4 * int_3;
		}
		double_3 = double_2 * double_7;
	}
	unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
	unsigned_int_7 = unsigned_int_2 + unsigned_int_6;
	return long_3;
}
int v_rasqal_query_write_sparql_expression_op( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char_3 = char_1 * char_2;
	short_2 = short_1 * short_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	int_3 = int_1 * int_2;
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	return int_4;
}
int v_rasqal_query_write_sparql_expression( char parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_4 = 1;
	char char_6 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_8 = 1;
	char char_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_10 = 1;
	short short_5 = 1;
	double double_7 = 1;
	long long_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_2;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
	short_1 = short_1 + short_2;
	long_1 = long_1 + long_2;
	double_2 = double_3 + double_2;
	long_1 = long_1 * long_2;
	short_1 = short_2;
	char_2 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	double_3 = double_1 * double_2;
	long_2 = long_1 + long_3;
	double_2 = double_2;
	char_5 = char_3 + char_4;
	double_1 = double_4 * double_5;
	int_2 = int_1 * int_1;
	float_1 = float_1 * float_1;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_1;
	long_2 = v_rasqal_query_write_sparql_literal(short_1,float_1,unsigned_int_1);

	float_2 = float_1 * float_1;
	float_3 = float_1 * float_2;
	int_5 = int_3 * int_4;
	if(1)
	{
		char_1 = char_4;
		double_3 = double_5 * double_3;
	}
	long_2 = long_2 * long_3;
	char_4 = char_2;
	int_1 = int_3;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
	int_3 = int_6;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_6;
	float_4 = float_4 * float_1;
	char_2 = char_4 * char_1;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	char_6 = char_2 * char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	}
	int_5 = int_2 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
		long_1 = long_4 + long_4;
		if(1)
		{
			long_4 = long_3 * long_1;
		}
		unsigned_int_1 = unsigned_int_5 * unsigned_int_7;
	}
	long_4 = long_1;
	int_6 = int_1 * int_4;
	int_4 = int_7 * int_3;
	unsigned_int_4 = unsigned_int_8 * unsigned_int_2;
	unsigned_int_7 = unsigned_int_5;
	unsigned_int_8 = unsigned_int_3 + unsigned_int_2;
	int_2 = v_rasqal_query_write_sparql_expression_op(unsigned_int_1,int_2,unsigned_int_8);

	double_1 = double_5 + double_3;
	int_8 = int_2 + int_5;
	char_7 = char_3;
	double_5 = double_4 + double_3;
	long_4 = long_3 + long_3;
	char_2 = char_1 * char_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char_7 = char_2 * char_7;
		int_1 = int_3 + int_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
		}
		short_4 = short_3 + short_2;
	}
	float_1 = float_4 * float_2;
	long_3 = long_4 * long_5;
	double_4 = double_3 + double_3;
	if(1)
	{
		unsigned_int_9 = unsigned_int_5 * unsigned_int_8;
	}
	int_6 = int_7 * int_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char char_8 = 1;
		long_4 = long_5 + long_5;
		int_7 = int_2 + int_3;
		if(1)
		{
			char_4 = char_6 * char_5;
		}
		char_2 = char_4 * char_8;
	}
	if(1)
	{
		double_5 = double_6 * double_2;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_9;
	}
	unsigned_int_10 = unsigned_int_5 * unsigned_int_3;
	short_5 = short_3 + short_4;
	unsigned_int_8 = unsigned_int_7 * unsigned_int_10;
	int_7 = int_4 * int_4;
	double_7 = double_4 + double_4;
	long_4 = long_6;
	unsigned_int_3 = unsigned_int_7 + unsigned_int_9;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short_5 = short_5 + short_3;
		long_6 = long_6 + long_3;
		if(1)
		{
			int int_9 = 1;
			int_9 = int_7 + int_2;
		}
		unsigned_int_7 = unsigned_int_4 * unsigned_int_3;
	}
	double_1 = double_1 + double_6;
	int_5 = int_2 * int_1;
	double_5 = double_4 * double_5;
	return int_5;
}
int v_rasqal_query_write_sparql_variable( unsigned int parameter_1,char parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float_3 = float_1 * float_2;
		char_1 = char_1 * char_2;
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_3;
	}
	short_2 = short_1 + short_1;
	if(1)
	{
		int_3 = v_rasqal_query_write_sparql_expression(char_3,short_2,int_2);

		int_1 = int_3 + int_3;
	}
	return int_3;
}
long v_rasqal_query_write_sparql_variables_sequence( unsigned int parameter_1,short parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_2 = int_1 + int_1;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_2 = v_rasqal_query_write_sparql_variable(unsigned_int_1,char_1,float_2);

			int_4 = int_3 * int_3;
		}
		double_1 = double_1 + double_2;
	}
	return long_1;
}
float v_rasqal_graph_pattern_get_operator( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	return float_1;
}
long v_rasqal_query_write_sparql_graph_pattern( float parameter_1,float parameter_2,int parameter_3,int parameter_4,short parameter_5)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	short short_4 = 1;
	float_1 = v_rasqal_query_write_sparql_values(short_1,double_1,char_1,float_1);

	double_2 = double_1;
	long_1 = v_rasqal_query_write_sparql_literal(short_2,float_2,unsigned_int_1);

	int_1 = v_rasqal_graph_pattern_get_triple(unsigned_int_2,int_1);

	float_1 = v_rasqal_graph_pattern_get_filter_expression(char_2);

	int_3 = int_1 * int_2;
	double_3 = double_2 * double_3;
	long_3 = long_1 * long_2;
	if(1)
	{
		short short_3 = 1;
		int int_5 = 1;
		int_3 = v_rasqal_query_write_sparql_expression(char_1,short_2,int_4);

		short_1 = short_3 * short_1;
		float_3 = v_rasqal_graph_pattern_get_operator(long_3);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_3 = v_rasqal_query_write_sparql_modifiers(int_4,double_1,char_1);

		int_5 = int_1 * int_2;
		int_3 = int_6;
		if(1)
		{
			float_2 = float_3 * float_3;
		}
		long_3 = v_rasqal_query_write_indent(char_1,float_4);

		int_2 = v_rasqal_graph_pattern_get_sub_graph_pattern(short_1,int_6);

		int_2 = v_rasqal_query_write_sparql_variable(unsigned_int_2,char_1,float_2);

		unsigned_int_4 = unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		long_3 = v_rasqal_query_write_sparql_variables_sequence(unsigned_int_4,short_2,short_1);

		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		if(1)
		{
			short_2 = v_rasqal_projection_get_variables_sequence(float_4);

			long_4 = v_rasqal_query_write_sparql_triple(int_4,char_1,double_3);

			short_4 = v_rasqal_graph_pattern_get_sub_graph_pattern_sequence(double_1);

			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		}
	}
	if(1)
	{
		long long_5 = 1;
		long long_6 = 1;
		long_5 = long_6;
	}
	return long_1;
}
int v_rasqal_query_write_sparql_20060406_graph_pattern( float parameter_1,double parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 * short_1;
	int_1 = int_2;
	short_4 = short_2 * short_3;
	int_2 = int_2 * int_3;
	double_2 = double_1 + double_1;
	int_4 = int_1;
	long_1 = v_rasqal_query_write_sparql_graph_pattern(float_1,float_1,int_4,int_2,short_2);

	float_3 = float_2 * float_3;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	int_3 = int_3 + int_2;
	int_5 = int_1;
	double_3 = double_2 + double_3;
	if(1)
	{
		int_1 = int_2 + int_4;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_5;
}
int v_rasqal_algebra_service_graph_pattern_to_algebra( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = v_rasqal_query_write_sparql_20060406_graph_pattern(float_1,double_1,int_1);

	int_1 = int_2 * int_3;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 * char_3;
	int_3 = int_3;
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		short_2 = v_rasqal_new_service_algebra_node(float_2,unsigned_int_3,short_1,double_1,int_3);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	int_4 = int_2 * int_4;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_5;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	short_2 = short_2 * short_3;
	int_3 = v_rasqal_graph_pattern_get_sub_graph_pattern(short_1,int_1);

	short_4 = short_4 + short_3;
	double_3 = double_1 + double_2;
	int_6 = int_5 + int_3;
	double_5 = double_4 * double_4;
	if(1)
	{
		float float_3 = 1;
		int int_7 = 1;
		unsigned_int_2 = v_rasqal_alloc_memory(char_4);

		float_3 = float_2 + float_1;
		int_3 = int_2 * int_7;
	}
	if(1)
	{
		char char_5 = 1;
		unsigned_int_6 = v_rasqal_literal_as_uri();

		char_4 = char_5 + char_1;
	}
	return int_6;
}
unsigned int v_rasqal_algebra_values_graph_pattern_to_algebra( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 + char_1;
	int_1 = v_rasqal_algebra_bindings_to_algebra(double_1,float_1);

	long_1 = long_1 * long_1;
	return unsigned_int_1;
}
long v_rasqal_algebra_filter_graph_pattern_to_algebra( int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short_2 = short_1 * short_2;
	double_1 = double_1 + double_1;
	unsigned_int_1 = v_rasqal_new_expression_from_expression();

	float_1 = v_rasqal_new_filter_algebra_node(double_1,unsigned_int_1,float_2);

	long_2 = long_1 + long_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	unsigned_int_2 = unsigned_int_1;
	int_2 = int_2 * int_2;
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3;
	}
	return long_1;
}
char v_rasqal_new_values_algebra_node( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	v_rasqal_free_bindings(float_3);

	double_2 = double_1 * double_1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_1 = v_rasqal_new_algebra_node(char_1,unsigned_int_1);

		double_5 = double_3 * double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2;
	}
	return char_2;
}
long v_rasqal_new_bindings_from_bindings( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	return long_1;
}
int v_rasqal_algebra_bindings_to_algebra( double parameter_1,float parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long_1 = v_rasqal_new_bindings_from_bindings(float_1);

	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_3 = v_rasqal_new_values_algebra_node(double_1,short_1);

	double_1 = double_1 * double_1;
	return int_1;
}
short v_rasqal_new_slice_algebra_node( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	unsigned_int_1 = v_rasqal_new_algebra_node(char_1,unsigned_int_1);

	double_1 = double_2;
	if(1)
	{
		double_2 = double_2 + double_1;
	}
	v_rasqal_free_algebra_node(char_2);

	long_3 = long_1 * long_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		short_1 = short_2;
		double_3 = double_1;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3;
	}
	return short_3;
}
char v_rasqal_algebra_query_add_slice( float parameter_1,short parameter_2,int parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short_1 = v_rasqal_new_slice_algebra_node(short_1,unsigned_int_1,int_1,int_1);

		short_1 = short_2;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_2 * int_1;
		}
		char_1 = char_1 * char_2;
		int_1 = v_rasqal_algebra_node_print(double_1,int_1);

		float_1 = float_2;
	}
	return char_3;
}
int v_rasqal_new_distinct_algebra_node( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		unsigned_int_1 = v_rasqal_new_algebra_node(char_1,unsigned_int_1);

		int_1 = int_1;
	}
	int_1 = int_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		short_1 = short_1;
	}
	return int_3;
	v_rasqal_free_algebra_node(char_1);

}
long v_rasqal_algebra_query_add_distinct( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_3 = 1;
		int_1 = v_rasqal_algebra_node_print(double_1,int_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			int_1 = v_rasqal_new_distinct_algebra_node(float_1,char_1);

			double_2 = double_1;
		}
		float_4 = float_2 * float_3;
		double_1 = double_2 + double_3;
	}
	return long_1;
}
char v_rasqal_new_orderby_algebra_node( char parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	v_rasqal_free_algebra_node(char_3);

	short_1 = short_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int_4 = int_1 + int_3;
		double_1 = double_1 + double_2;
		unsigned_int_1 = v_rasqal_new_algebra_node(char_3,unsigned_int_1);

		long_1 = long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_3 + short_1;
	}
	return char_1;
}
unsigned int v_rasqal_algebra_query_add_orderby( char parameter_1,double parameter_2,double parameter_3,short parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_2;
	char_3 = v_rasqal_expression_copy_expression_sequence();

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
		int int_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		v_rasqal_free_algebra_node(char_2);

		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			int_1 = int_1 + int_1;
		}
		if(1)
		{
			double_2 = double_1 + double_1;
		}
		double_2 = double_1 + double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
		int_1 = int_1;
		float_1 = float_1 * float_2;
	}
	return unsigned_int_2;
	char_2 = v_rasqal_new_orderby_algebra_node(char_2,unsigned_int_1,long_1,int_2);

	int_2 = v_rasqal_algebra_node_print(double_1,int_2);

}
float v_rasqal_new_project_algebra_node( long parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
		char char_2 = 1;
		char_3 = char_1 * char_2;
	}
	unsigned_int_1 = v_rasqal_new_algebra_node(char_3,unsigned_int_1);

	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_1;
	}
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		v_rasqal_free_algebra_node(char_1);

		int_1 = int_2 * int_1;
	}
	return float_1;
}
double v_rasqal_algebra_query_add_projection( long parameter_1,int parameter_2,short parameter_3)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	v_rasqal_free_algebra_node(char_1);

	long_2 = long_1 * long_2;
	char_1 = char_2;
	long_3 = long_1 + long_3;
	int_1 = v_rasqal_algebra_node_print(double_1,int_1);

	double_1 = double_2;
	if(1)
	{
	}
	float_1 = v_rasqal_new_project_algebra_node(long_2,char_2,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_3 = double_2 * double_3;
	}
	double_1 = double_3 + double_1;
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int_1 = int_3;
		float_1 = float_2;
		int_1 = v_rasqal_variable_print(long_2,long_2);

		int_1 = int_3 + int_4;
		double_2 = double_4 + double_5;
	}
	v_rasqal_free_variable(int_4);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	long_1 = long_2 * long_1;
	float_3 = float_3 + float_1;
	return double_5;
	unsigned_int_3 = v_rasqal_new_variable_from_variable();

}
float v_rasqal_new_having_algebra_node( char parameter_1,short parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	char_1 = char_1 + char_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = v_rasqal_new_algebra_node(char_1,unsigned_int_2);

		unsigned_int_3 = unsigned_int_1;
	}
	if(1)
	{
		double double_2 = 1;
		v_rasqal_free_algebra_node(char_2);

		double_1 = double_2 * double_1;
	}
	return float_1;
}
char v_rasqal_algebra_query_add_having( float parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	char char_5 = 1;
	float_1 = v_rasqal_new_having_algebra_node(char_1,short_1,short_1);

	char_3 = char_2 * char_3;
	if(1)
	{
	}
	v_rasqal_free_algebra_node(char_4);

	long_2 = long_1 + long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_5 = 1;
		char char_6 = 1;
		unsigned_int_1 = unsigned_int_2;
		int_2 = int_1 + int_1;
		if(1)
		{
			int_3 = v_rasqal_algebra_node_print(double_1,int_4);

			int_4 = int_2 * int_3;
		}
		char_5 = v_rasqal_expression_copy_expression_sequence();

		int_5 = int_5 + int_5;
		if(1)
		{
			char_1 = char_4;
		}
		char_6 = char_4 + char_6;
		long_1 = long_2;
	}
	return char_4;
}
int v_rasqal_new_aggregation_algebra_node( float parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_rasqal_new_algebra_node(char_1,unsigned_int_2);

	char_2 = char_2 * char_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_2;
	}
	double_2 = double_3;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		v_rasqal_free_algebra_node(char_2);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		float_2 = float_1 * float_1;
		double_2 = double_2 + double_4;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_1 + char_3;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	return int_1;
}
long v_rasqal_algebra_query_add_aggregation( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	float float_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	long long_1 = 1;
	int_1 = int_2;
	int_2 = int_1 + int_1;
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_2 = char_1 + char_3;
	}
	double_3 = double_1 * double_2;
	double_2 = double_1 * double_3;
	int_1 = int_2 * int_3;
	double_3 = double_2 * double_2;
	int_3 = v_rasqal_new_aggregation_algebra_node(float_1,int_2,char_4,int_1);

	float_1 = float_2 + float_1;
	int_2 = int_4;
	v_rasqal_free_algebra_aggregate(int_4);

	float_1 = float_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = v_rasqal_algebra_node_print(double_3,int_5);

	double_1 = double_4 * double_5;
	if(1)
	{
		int int_6 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		int_6 = int_6 * int_6;
	}
	if(1)
	{
		double double_6 = 1;
		double_4 = double_6 + double_2;
	}
	double_5 = double_5 * double_1;
	float_4 = float_1;
	if(1)
	{
		int int_7 = 1;
		int_7 = int_4 + int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	return long_1;
	v_rasqal_free_algebra_node(char_4);

}
double v_rasqal_algebra_replace_aggregate_expressions( long parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_1;
	int_2 = int_1 + int_2;
	char_1 = char_1 * char_1;
	int_1 = v_rasqal_expression_visit(char_1);

	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return double_2;
	long_1 = v_rasqal_algebra_extract_aggregate_expression_visit(int_3);

}
short v_rasqal_free_map_node( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
void v_rasqal_free_map( unsigned int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2;
	}
	int_3 = int_1 * int_2;
	short_1 = v_rasqal_free_map_node(int_3,float_1);

}
void v_rasqal_free_algebra_aggregate( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		v_rasqal_free_map(unsigned_int_1);

		double_1 = double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	int_2 = int_1 + int_1;
}
short v_rasqal_map_node_write_indent( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	long_2 = long_1 + long_1;
	int_2 = int_1 + int_3;
	long_4 = long_3 + long_1;
	float_2 = float_1 * float_1;
	double_2 = double_1 * double_1;
	float_1 = float_1 + float_3;
	double_3 = double_3;
	double_5 = double_4 * double_3;
	return short_1;
}
double v_rasqal_map_node_print_visit()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_1;
	int_4 = int_1 * int_3;
	short_1 = v_rasqal_map_node_write_indent(float_1,int_2);

	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_3 + double_2;
	char_1 = char_2;
	if(1)
	{
		int_2 = int_2 * int_4;
	}
	if(1)
	{
		char_2 = char_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_4 * double_3;
	}
	float_2 = float_2;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_1 + char_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3 + float_2;
	}
	int_4 = int_2;
	return double_1;
}
double v_rasqal_map_node_visit( unsigned int parameter_1,char parameter_2)
{
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_3 = long_1 + long_2;
	}
	long_3 = long_3 + long_4;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	return double_1;
}
void v_rasqal_map_visit( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "p") < 0)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	double_1 = v_rasqal_map_node_visit(unsigned_int_1,char_1);

}
int v_rasqal_map_print( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	double_1 = v_rasqal_map_node_print_visit();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long_1 = long_2;
		float_2 = float_1 * float_1;
		int_2 = int_1 * int_2;
		short_1 = short_2;
		v_rasqal_map_visit(long_3);

		double_4 = double_2 + double_3;
	}
	short_2 = short_1 * short_1;
	return int_1;
}
unsigned int v_rasqal_map_node_add_kv( int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1 * double_1;
	float_2 = float_1 + float_2;
	if(1)
	{
		short short_2 = 1;
		if(1)
		{
		}
		float_2 = v_rasqal_new_map_node(char_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		short_2 = short_1;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "[") < 0)
	{
	}
	double_4 = double_2 + double_3;
	float_1 = float_2 * float_1;
	return unsigned_int_1;
}
float v_rasqal_new_map_node( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return float_1;
}
int v_rasqal_map_add_kv( unsigned int parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		short short_1 = 1;
		float_1 = v_rasqal_new_map_node(char_1);

		unsigned_int_1 = v_rasqal_map_node_add_kv(int_1);

		float_2 = float_2 + float_3;
		short_1 = short_1 + short_1;
	}
	return int_1;
}
short v_rasqal_new_variable_literal( float parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_2;
	double_1 = double_1 + double_1;
	char_1 = char_1;
	int_1 = int_2;
	if(1)
	{
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		double_1 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1;
		long_1 = long_1 * long_2;
		double_2 = double_1 * double_3;
		v_rasqal_free_variable(int_3);

		char_2 = char_1 + char_2;
	}
	if(1)
	{
		double_3 = double_1 + double_1;
	}
	return short_1;
}
int v_rasqal_expression_convert_aggregate_to_variable( char parameter_1,float parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_5 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_5 = 1;
	short short_4 = 1;
	long_2 = long_1 + long_1;
	long_4 = long_1 * long_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "&6") < 0)
	{
		short_1 = v_rasqal_new_variable_literal(float_1,double_1);

		long_3 = long_3 * long_5;
	}
	short_2 = short_2 * short_2;
	if(1)
	{
		float_1 = float_2 + float_1;
		if(1)
		{
			float_3 = float_1;
		}
	}
	double_3 = double_2 * double_3;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		double double_4 = 1;
		short short_3 = 1;
		double_4 = double_3 * double_1;
		short_2 = short_3;
	}
	if(1)
	{
		float_3 = float_2;
	}
	float_1 = float_4 + float_3;
	int_5 = int_3 * int_4;
	int_4 = int_6 + int_5;
	double_5 = double_3 + double_3;
	if(1)
	{
		long long_6 = 1;
		long_4 = long_3 + long_5;
		v_rasqal_expression_clear(short_4);

		long_2 = long_6 + long_4;
	}
	return int_3;
}
char v_rasqal_map_search_internal( char parameter_1,double parameter_2,long parameter_3)
{
	char char_2 = 1;
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 * char_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return char_2;
}
long v_rasqal_map_search( int parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_2;
	char_1 = v_rasqal_map_search_internal(char_1,double_1,long_1);

	short_1 = short_1 + short_2;
	return long_2;
}
int v_rasqal_expression_is_aggregate()
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
long v_rasqal_algebra_extract_aggregate_expression_visit(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	char char_5 = 1;
	long long_3 = 1;
	unsigned_int_1 = v_rasqal_new_expression_from_expression();

	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	if(1)
	{
		long_1 = v_rasqal_map_search(int_1,double_4);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			double_2 = double_3 * double_1;
		}
	}
	if(1)
	{
		double double_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_6 = 1;
		double_4 = double_5 * double_4;
		char_1 = char_2;
		if(1)
		{
			short short_3 = 1;
			unsigned_int_2 = unsigned_int_2;
			short_3 = short_1 * short_2;
		}
		double_1 = double_3 * double_5;
		int_2 = v_rasqal_expression_convert_aggregate_to_variable(char_2,float_1,short_2);

		char_4 = char_2 * char_3;
		if(1)
		{
			char_3 = char_3 * char_1;
		}
		if(1)
		{
			short_1 = short_2 * short_4;
		}
		float_3 = float_2 + float_1;
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		}
		double_6 = double_2 * double_4;
		unsigned_int_4 = v_rasqal_new_variable_from_variable();

		int_3 = v_rasqal_map_add_kv(unsigned_int_4);

		unsigned_int_1 = unsigned_int_6 * unsigned_int_6;
		long_1 = v_rasqal_variables_table_add2(int_2,double_1,int_4,long_1,long_2);

		short_2 = short_4 + short_4;
		v_rasqal_log_error_simple(short_2,short_1,unsigned_int_3,char_2,double_3);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			double double_7 = 1;
			double_7 = double_1 + double_4;
		}
		int_1 = v_rasqal_map_print(unsigned_int_5,char_5);

		char_5 = char_2 + char_1;
		if(1)
		{
			int int_5 = 1;
			int_3 = v_rasqal_expression_is_aggregate();

			int_5 = int_3;
		}
	}
	return long_3;
}
int v_rasqal_expression_compare( double parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_5 = 1;
	long long_3 = 1;
	int int_4 = 1;
	short short_6 = 1;
	int int_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	long long_5 = 1;
	short short_8 = 1;
	int int_10 = 1;
	double double_7 = 1;
	float_2 = float_1 + float_2;
	short_1 = short_2;
	int_1 = int_2;
	if(1)
	{
		double_3 = double_1 + double_2;
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
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
		int_1 = v_rasqal_literal_compare(float_2,double_3,int_2,int_2);

		double_2 = double_3 * double_3;
	}
	double_3 = double_4 + double_4;
	short_4 = short_2 + short_3;
	if(1)
	{
	}
	double_5 = double_5 * double_5;
	if(1)
	{
	}
	float_3 = float_2 + float_1;
	if(1)
	{
	}
	float_2 = float_2;
	double_5 = double_2 * double_2;
	char_3 = char_1 + char_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_4 = double_3 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_2;
	int_3 = int_1;
	short_3 = short_5 * short_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_3 = long_2 * long_2;
		double_2 = double_5 * double_1;
		int_4 = int_3;
		short_6 = short_3;
		int_5 = int_1 + int_5;
		if(1)
		{
			long_2 = long_1 * long_1;
		}
	}
	long_4 = long_3 + long_2;
	short_3 = short_5 * short_6;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
	unsigned_int_5 = unsigned_int_4;
	double_5 = double_4 * double_2;
	int_1 = int_4 + int_3;
	double_6 = double_1 * double_3;
	int_1 = int_6 + int_5;
	int_8 = int_2 + int_7;
	if(1)
	{
		int_5 = int_4;
	}
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_7 = 1;
		char_1 = char_1 + char_3;
		double_3 = double_6 * double_6;
		short_7 = short_6 + short_1;
		int_7 = int_6 + int_1;
		int_4 = int_4;
		if(1)
		{
			float float_4 = 1;
			float_3 = float_4 + float_4;
		}
	}
	if(1)
	{
		char_1 = char_2 + char_2;
	}
	int_9 = int_6;
	double_1 = double_5 + double_5;
	long_2 = long_5 + long_2;
	if(1)
	{
	}
	short_8 = short_2 * short_2;
	if(1)
	{
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int_9 = int_10 * int_2;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		double_5 = double_3;
		double_4 = double_7 + double_4;
		short_5 = short_8 * short_3;
		if(1)
		{
			char char_4 = 1;
			char char_5 = 1;
			char_5 = char_2 + char_4;
		}
	}
	short_4 = short_6 * short_1;
	double_1 = double_7 + double_4;
	return int_10;
}
void v_rasqal_agg_expr_var_compare(long parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_2;
	short_1 = short_2;
	double_1 = double_3;
	short_1 = short_1;
	int_1 = v_rasqal_expression_compare(double_3,short_2,int_2,int_3);

	int_2 = int_2;
}
int v_rasqal_new_map( long parameter_1,long parameter_3,double parameter_4,double parameter_5,unsigned int parameter_6,unsigned int parameter_7,int parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	long_1 = long_1;
	if(1)
	{
		if(1)
		{
			int_1 = int_1 + int_1;
		}
	}
	float_1 = float_1;
	float_1 = float_2 * float_2;
	double_1 = double_2 * double_3;
	int_3 = int_1 * int_2;
	float_1 = float_3;
	double_4 = double_3 * double_4;
	double_5 = double_2 * double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return int_3;
}
unsigned int v_rasqal_algebra_extract_aggregate_expressions( char parameter_1,char parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	long long_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_6 = 1;
	int int_5 = 1;
	double_1 = double_2;
	float_3 = float_1 * float_2;
	float_3 = float_2 + float_3;
	float_3 = float_3 * float_3;
	if(1)
	{
	}
	v_rasqal_free_expression(unsigned_int_1);

	double_3 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v_rasqal_agg_expr_var_compare(long_1,int_1);

	double_4 = double_2 * double_2;
	long_3 = long_2 * long_2;
	short_2 = short_1 * short_2;
	int_2 = v_rasqal_expression_visit(char_1);

	int_3 = int_2;
	double_2 = double_1;
	int_3 = int_3 * int_1;
	int_1 = v_rasqal_new_map(long_4,long_2,double_4,double_5,unsigned_int_2,unsigned_int_2,int_2);

	int_1 = int_1 + int_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_4 = int_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1;
			}
			if(1)
			{
				double double_6 = 1;
				v_rasqal_free_variable(int_4);

				int_2 = v_rasqal_variable_print(long_5,long_1);

				double_6 = double_1;
				int_1 = v_rasqal_expression_print(char_2,char_3);

				long_6 = long_5 * long_4;
			}
		}
	}
	if(1)
	{
		long_6 = v_rasqal_algebra_extract_aggregate_expression_visit(int_5);

		char_2 = char_1 * char_2;
	}
	return unsigned_int_1;
}
int v_rasqal_algebra_query_prepare_aggregates( long parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double_1 = v_rasqal_algebra_replace_aggregate_expressions(long_1,short_1,int_1);

	double_1 = double_2;
	int_1 = int_2 + int_3;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_1 + float_1;
		char_1 = char_1 + char_2;
		double_2 = double_1 * double_3;
	}
	if(1)
	{
		v_rasqal_free_algebra_aggregate(int_4);

		int_1 = int_3;
	}
	if(1)
	{
		int_4 = v_rasqal_query_build_variables_use(char_3,long_2);

		int_2 = int_4 + int_3;
		if(1)
		{
			long long_3 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_3 = double_3 * double_2;
			long_2 = long_3 + long_2;
			int_4 = int_1 * int_1;
			v_rasqal_free_algebra_node(char_2);

			int_2 = int_2 + int_2;
			unsigned_int_1 = v_rasqal_algebra_extract_aggregate_expressions(char_1,char_4,double_4,int_4);

			char_3 = char_2;
		}
	}
	if(1)
	{
		char char_5 = 1;
		char_4 = char_5 + char_5;
	}
	if(1)
	{
		if(1)
		{
			float float_2 = 1;
			unsigned int unsigned_int_3 = 1;
			float_1 = float_2 * float_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_1 = unsigned_int_3;
		}
	}
	return int_4;
}
int v_rasqal_algebra_write_indent( double parameter_1,long parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = int_1 * int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	return int_1;
}
void v_rasqal_algebra_node_operator_as_counted_string( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		int_1 = int_2;
	}
}
int v_rasqal_algebra_algebra_node_write_internal( char parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_8 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_9 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	long long_4 = 1;
	double double_10 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	double double_11 = 1;
	char char_6 = 1;
	double double_14 = 1;
	long long_5 = 1;
	double double_16 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double_1 = double_1;
	double_3 = double_1 + double_2;
	short_2 = short_1 * short_1;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	double_4 = double_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
		double_2 = double_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long_1 = long_3;
			unsigned_int_4 = unsigned_int_5;
			if(1)
			{
				double double_5 = 1;
				double double_6 = 1;
				double_1 = double_3 + double_1;
				double_2 = double_5 * double_6;
			}
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		}
	}
	if(1)
	{
		double double_7 = 1;
		if(1)
		{
			double_7 = double_4;
			short_1 = short_3 * short_3;
		}
		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		short_2 = short_2 + short_3;
		if(1)
		{
			if(1)
			{
				double_8 = double_7;
				int_2 = int_1 + int_1;
			}
			double_3 = double_9 + double_1;
			v_rasqal_algebra_node_operator_as_counted_string(short_2,float_1);

			char_1 = char_1 + char_2;
		}
	}
	if(1)
	{
		if(1)
		{
			v_rasqal_literal_write(short_4,char_1);

			long_1 = long_1;
			short_2 = short_2 + short_3;
		}
		long_3 = long_4;
		double_9 = double_3 * double_10;
	}
	if(1)
	{
		if(1)
		{
			char_3 = char_1 + char_3;
			char_1 = char_4 * char_5;
		}
		unsigned_int_2 = unsigned_int_5 + unsigned_int_4;
		unsigned_int_6 = unsigned_int_6;
	}
	if(1)
	{
		v_rasqal_triple_write(short_4,short_1);

		char_4 = char_5 + char_4;
		if(1)
		{
			long_3 = long_2 * long_4;
			if(1)
			{
				double double_12 = 1;
				int_3 = v_rasqal_algebra_write_indent(double_11,long_4);

				int_3 = int_3 + int_3;
				double_12 = double_9 * double_1;
			}
			char_2 = char_6;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double double_13 = 1;
				float float_3 = 1;
				float float_4 = 1;
				long_1 = long_2 + long_2;
				double_10 = double_13;
				if(1)
				{
					short_4 = short_3 + short_4;
				}
				v_rasqal_expression_write(float_2,unsigned_int_6);

				double_9 = double_14 + double_3;
				float_4 = float_2 + float_3;
			}
			long_5 = long_3 + long_2;
		}
	}
	if(1)
	{
		double double_15 = 1;
		long long_6 = 1;
		if(1)
		{
			double_16 = double_15 * double_14;
			int_3 = int_4 * int_2;
		}
		long_4 = long_3 + long_5;
		long_6 = long_4 + long_4;
		double_10 = double_15 + double_11;
		int_3 = int_4 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			int_1 = v_rasqal_variables_write(char_4,long_5);

			int_6 = int_5 + int_6;
			double_4 = double_16;
		}
		unsigned_int_7 = unsigned_int_4 + unsigned_int_3;
		char_6 = char_5 + char_4;
		long_3 = long_2 + long_1;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_7;
		long_5 = long_2;
		int_3 = int_3 + int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		if(1)
		{
			double_4 = double_16;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_6;
		}
		long_1 = long_5 * long_3;
		int_2 = int_6 + int_7;
		v_rasqal_variable_write(short_1,int_3);

		unsigned_int_1 = unsigned_int_8 + unsigned_int_2;
	}
	char_3 = char_2 + char_6;
	double_9 = double_3 * double_8;
	char_6 = char_2 + char_2;
	int_1 = int_4 + int_7;
	return int_5;
}
int v_rasqal_algebra_algebra_node_write( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return int_1;
	int_2 = v_rasqal_algebra_algebra_node_write_internal(char_1,unsigned_int_1,unsigned_int_1);

}
int v_rasqal_algebra_node_print( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	double_1 = double_1 + double_1;
	int_1 = v_rasqal_algebra_algebra_node_write(int_2,unsigned_int_3);

	float_2 = float_1 + float_1;
	return int_2;
}
long v_rasqal_new_groupby_algebra_node( int parameter_1,char parameter_2,long parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	v_rasqal_free_algebra_node(char_1);

	short_1 = short_1 * short_2;
	if(1)
	{
		short_2 = short_3;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_4 = 1;
		short_2 = short_1 + short_4;
		char_1 = char_1;
	}
	if(1)
	{
		short short_5 = 1;
		short_5 = short_2 + short_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = v_rasqal_new_algebra_node(char_2,unsigned_int_2);

		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	}
	return long_1;
}
char v_rasqal_expression_copy_expression_sequence()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	v_rasqal_free_expression(unsigned_int_1);

	char_1 = char_1;
	char_1 = char_2;
	unsigned_int_2 = v_rasqal_new_expression_from_expression();

	short_3 = short_1 * short_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
	}
	int_1 = v_rasqal_expression_print(char_2,char_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_3 = int_2 * int_3;
		double_1 = double_1 + double_2;
		if(1)
		{
			short short_4 = 1;
			short_2 = short_1 + short_4;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
			}
		}
	}
	return char_1;
}
int v_rasqal_algebra_query_add_group_by( short parameter_1,double parameter_2,long parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = v_rasqal_new_groupby_algebra_node(int_1,char_1,long_1);

	long_2 = long_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		short short_3 = 1;
		char_2 = v_rasqal_expression_copy_expression_sequence();

		short_2 = short_1 + short_2;
		v_rasqal_free_algebra_node(char_2);

		char_3 = char_2 + char_3;
		if(1)
		{
			int_2 = int_1;
		}
		char_1 = char_1 + char_2;
		if(1)
		{
			double double_4 = 1;
			int_3 = v_rasqal_algebra_node_print(double_2,int_2);

			double_4 = double_1;
		}
		short_1 = short_2 + short_3;
		int_1 = int_2 + int_3;
	}
	return int_2;
}
void v_rasqal_algebra_select_graph_pattern_to_algebra( short parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	char char_4 = 1;
	long long_3 = 1;
	float float_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_8 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	int_3 = v_rasqal_algebra_query_add_group_by(short_1,double_1,long_1);

	char_1 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	long_1 = long_1;
	unsigned_int_1 = v_rasqal_algebra_query_add_orderby(char_2,double_1,double_1,short_2);

	char_3 = v_rasqal_algebra_query_add_slice(float_1,short_1,int_2);

	float_2 = float_2 + float_2;
	int_3 = v_rasqal_algebra_query_prepare_aggregates(long_2,char_4,long_3,unsigned_int_3);

	char_2 = v_rasqal_algebra_query_add_having(float_3,int_2,int_3);

	long_2 = long_4 + long_2;
	double_1 = double_1 + double_1;
	short_2 = short_2;
	long_4 = long_4 * long_2;
	long_5 = v_rasqal_algebra_query_add_aggregation(float_3,unsigned_int_2,int_3);

	v_rasqal_free_algebra_node(char_3);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	char_5 = char_5 * char_6;
	if(1)
	{
		float_1 = float_1 + float_3;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	long_1 = long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	}
	unsigned_int_5 = v_rasqal_new_2op_algebra_node(unsigned_int_1,double_2,long_6,short_1);

	unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		int_4 = v_rasqal_graph_pattern_get_sub_graph_pattern(short_3,int_5);

		int_4 = int_6 * int_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_7;
		if(1)
		{
			int_5 = int_4 * int_1;
		}
	}
	int_7 = v_rasqal_algebra_graph_pattern_to_algebra(double_3,unsigned_int_5);

	double_1 = double_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	double_3 = double_3 + double_3;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_3 + short_3;
	}
	double_1 = double_4;
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_8 = unsigned_int_4 * unsigned_int_2;
	}
	long_2 = long_6 + long_2;
	if(1)
	{
		char char_7 = 1;
		char_5 = char_1 + char_7;
	}
	char_2 = char_6 + char_5;
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_9 = unsigned_int_6 * unsigned_int_2;
	}
	if(1)
	{
		int int_8 = 1;
		long_6 = long_3 * long_5;
		double_4 = v_rasqal_algebra_query_add_projection(long_2,int_4,short_1);

		int_5 = int_8 + int_6;
		if(1)
		{
			long_5 = v_rasqal_algebra_query_add_distinct(unsigned_int_4,char_8,int_6);

			long_1 = long_2 * long_1;
			float_2 = float_2;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	int_7 = v_rasqal_algebra_bindings_to_algebra(double_2,float_3);

}
unsigned int v_rasqal_new_assignment_algebra_node( char parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	v_rasqal_free_expression(unsigned_int_1);

	int_1 = int_1 + int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = v_rasqal_new_algebra_node(char_1,unsigned_int_2);

		long_1 = long_1 + long_2;
	}
	int_3 = int_2 * int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4;
	}
	return unsigned_int_1;
}
int v_rasqal_algebra_let_graph_pattern_to_algebra( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = v_rasqal_new_expression_from_expression();

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_5 = v_rasqal_new_assignment_algebra_node(char_1,unsigned_int_5,float_1);

	unsigned_int_5 = unsigned_int_4;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if(remainder_check(controller_1,100,1))
	{
	}
	return int_1;
}
void v_rasqal_new_graph_algebra_node( short parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_rasqal_free_literal();

	int_2 = int_1 + int_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_1 + short_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 * int_3;
	}
	unsigned_int_1 = v_rasqal_new_algebra_node(char_1,unsigned_int_2);

	v_rasqal_free_algebra_node(char_1);

}
int v_rasqal_algebra_graph_graph_pattern_to_algebra( char parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int int_4 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	v_rasqal_new_graph_algebra_node(short_1,float_1,unsigned_int_1);

	v_rasqal_free_literal();

	double_2 = double_1 * double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	short_2 = v_rasqal_new_literal_from_literal(long_1);

	int_1 = v_rasqal_graph_pattern_get_sub_graph_pattern(short_3,int_2);

	long_2 = long_1 + long_1;
	if(1)
	{
		double_1 = double_1;
	}
	int_1 = int_1 * int_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_2 + int_3;
		int_4 = v_rasqal_algebra_graph_pattern_to_algebra(double_1,unsigned_int_2);

		float_1 = float_3 * float_1;
	}
	if(1)
	{
		short_2 = short_2;
	}
	return int_2;
}
unsigned int v_rasqal_new_literal_expression( unsigned int parameter_1,double parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_rasqal_free_literal();

	char_1 = char_1 + char_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_2 = 1;
		double_3 = double_1 + double_2;
		int_3 = int_1 + int_2;
		char_1 = char_1 * char_2;
		int_3 = int_1 * int_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	return unsigned_int_2;
}
float v_rasqal_algebra_new_boolean_constant_expr( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = v_rasqal_new_boolean_literal(unsigned_int_1,int_1);

	unsigned_int_2 = unsigned_int_1;
	long_3 = long_1 * long_2;
	if(1)
	{
		unsigned_int_3 = v_rasqal_new_literal_expression(unsigned_int_4,double_1);

		double_1 = double_1;
	}
	return float_1;
}
short v_rasqal_new_leftjoin_algebra_node( unsigned int parameter_1,int parameter_2,char parameter_3,char parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	v_rasqal_free_algebra_node(char_1);

	int_2 = int_1 * int_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_2 * int_3;
	}
	v_rasqal_free_expression(unsigned_int_1);

	int_4 = int_1 * int_4;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long_1 = long_2;
		short_1 = short_1 + short_2;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	return short_2;
	unsigned_int_4 = v_rasqal_new_algebra_node(char_1,unsigned_int_3);

}
short v_rasqal_new_empty_algebra_node( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_3 * short_3;
	long_2 = long_1 + long_1;
	return short_4;
	unsigned_int_1 = v_rasqal_new_algebra_node(char_1,unsigned_int_2);

}
long v_rasqal_algebra_group_graph_pattern_to_algebra( char parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	double double_7 = 1;
	short short_3 = 1;
	short short_5 = 1;
	short short_7 = 1;
	long long_5 = 1;
	int int_8 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 * long_1;
	float_1 = v_rasqal_new_filter_algebra_node(double_1,unsigned_int_2,float_2);

	float_1 = float_3 * float_3;
	double_2 = double_1 * double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		v_rasqal_new_2op_expression(float_4,long_2,unsigned_int_2,float_1);

		unsigned_int_2 = unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_2 = 1;
		double double_6 = 1;
		long long_3 = 1;
		int int_7 = 1;
		int_3 = int_1 + int_2;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		if(1)
		{
			unsigned_int_3 = v_rasqal_new_expression_from_expression();

			double_4 = double_3 * double_3;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
			int_4 = v_rasqal_algebra_graph_pattern_to_algebra(double_5,unsigned_int_6);

			int_5 = int_1 + int_1;
			if(1)
			{
				short_2 = short_1 + short_1;
				int_3 = int_3 + int_1;
			}
			long_2 = long_2 * long_2;
			if(1)
			{
				unsigned_int_4 = unsigned_int_2 + unsigned_int_6;
			}
		}
		if(1)
		{
			v_rasqal_free_algebra_node(char_1);

			char_3 = char_1 + char_2;
			double_6 = double_6 * double_6;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int int_6 = 1;
				long_4 = long_2 + long_3;
				int_5 = int_5;
				double_1 = double_4 + double_7;
				unsigned_int_5 = unsigned_int_5;
				if(1)
				{
					long_3 = long_2 + long_4;
					short_2 = short_2 * short_1;
				}
				if(1)
				{
					short short_4 = 1;
					int_4 = int_5 + int_6;
					short_3 = v_rasqal_new_leftjoin_algebra_node(unsigned_int_6,int_1,char_3,char_2);

					int_4 = int_2 * int_4;
					short_1 = short_4;
					short_2 = short_4 + short_2;
					float_2 = v_rasqal_algebra_new_boolean_constant_expr(long_2,int_4);

					unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
					short_2 = short_1 + short_5;
					if(1)
					{
						float float_5 = 1;
						float_4 = float_5 + float_3;
						int_2 = int_3;
					}
				}
				if(1)
				{
					short short_6 = 1;
					short_3 = v_rasqal_new_empty_algebra_node(unsigned_int_1);

					int_3 = int_3;
					int_6 = int_4;
					if(1)
					{
						int_1 = int_3 * int_4;
						unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
					}
					short_7 = short_3 + short_6;
					if(1)
					{
						int_7 = int_2 * int_5;
						long_2 = long_5;
					}
					double_5 = double_5 + double_7;
				}
			}
		}
		if(1)
		{
			long_5 = long_5 + long_3;
			unsigned_int_2 = v_rasqal_new_2op_algebra_node(unsigned_int_1,double_7,long_2,short_7);

			v_rasqal_free_expression(unsigned_int_3);

			int_8 = int_7 * int_4;
			if(1)
			{
				float float_6 = 1;
				float float_7 = 1;
				char_2 = char_3;
				float_7 = float_6 * float_1;
			}
			unsigned_int_6 = unsigned_int_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_5;
				double_3 = double_6 * double_5;
			}
		}
	}
	if(1)
	{
		double_4 = double_2 + double_7;
		int_5 = v_rasqal_graph_pattern_get_sub_graph_pattern(short_5,int_8);

		long_5 = long_5 + long_4;
		if(1)
		{
			int int_9 = 1;
			short_1 = short_1 + short_3;
			int_2 = int_8 + int_9;
		}
	}
	if(1)
	{
	}
	if(1)
	{
		short_7 = short_7;
	}
	if(1)
	{
		char char_4 = 1;
		char_3 = char_2 * char_4;
	}
	return long_5;
}
unsigned int v_rasqal_new_2op_algebra_node( unsigned int parameter_1,double parameter_2,long parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		unsigned_int_1 = v_rasqal_new_algebra_node(char_1,unsigned_int_2);

		int_4 = int_2 * int_3;
	}
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		char_1 = char_1 + char_2;
		short_1 = short_1;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_3 + long_1;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	return unsigned_int_3;
	v_rasqal_free_algebra_node(char_2);

}
void v_rasqal_algebra_union_graph_pattern_to_algebra( double parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int_1 = int_2;
	int_3 = v_rasqal_algebra_graph_pattern_to_algebra(double_1,unsigned_int_1);

	unsigned_int_2 = v_rasqal_new_2op_algebra_node(unsigned_int_3,double_1,long_1,short_1);

	long_1 = long_2 + long_3;
	if(1)
	{
	}
	if(1)
	{
	}
	v_rasqal_free_algebra_node(char_1);

	int_4 = int_4;
	int_3 = v_rasqal_graph_pattern_get_sub_graph_pattern(short_1,int_4);

}
void v_rasqal_free_algebra_node( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		v_rasqal_free_variable(int_1);

		float_2 = float_1 + float_1;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 * float_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		v_rasqal_free_literal();

		char_1 = char_1 * char_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	char controller_10[2];
	fgets(controller_10 ,2 ,stdin);
	if( strcmp( controller_10, "/") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_6;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_4;
	}
	v_rasqal_free_expression(unsigned_int_2);

	v_rasqal_free_bindings(float_1);

	int_4 = int_2 * int_2;
}
float v_rasqal_new_filter_algebra_node( double parameter_1,unsigned int parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
		v_rasqal_free_algebra_node(char_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	char_1 = char_1;
	if(1)
	{
		float float_4 = 1;
		float_3 = float_4 + float_1;
		unsigned_int_2 = v_rasqal_new_algebra_node(char_1,unsigned_int_1);

		float_1 = float_3 * float_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	return float_1;
	v_rasqal_free_expression(unsigned_int_1);

}
char v_rasqal_query_get_triple_sequence( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long_2 = long_1 * long_2;
	return char_1;
}
unsigned int v_rasqal_new_algebra_node( char parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	short_1 = short_2;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	short_3 = short_1 + short_1;
	return unsigned_int_1;
}
double v_rasqal_new_triples_algebra_node( long parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_2 = v_rasqal_new_algebra_node(char_1,unsigned_int_3);

		unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
		float_2 = float_1 + float_1;
	}
	double_2 = double_1 * double_2;
	long_2 = long_1 * long_2;
	return double_2;
}
unsigned int v_rasqal_algebra_basic_graph_pattern_to_algebra( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_1;
	float_1 = v_rasqal_new_filter_algebra_node(double_1,unsigned_int_1,float_1);

	int_1 = int_1;
	if(1)
	{
		v_rasqal_free_algebra_node(char_1);

		char_2 = char_2 + char_3;
	}
	if(1)
	{
		float float_2 = 1;
		double double_2 = 1;
		char char_4 = 1;
		unsigned_int_1 = v_rasqal_new_expression_from_expression();

		float_2 = float_2 * float_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			double_1 = double_2 * double_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
		double_1 = v_rasqal_new_triples_algebra_node(long_1,unsigned_int_3,int_1,int_2);

		char_2 = v_rasqal_query_get_triple_sequence(int_2);

		double_1 = double_1 * double_2;
		char_3 = char_4 + char_3;
		if(1)
		{
			long long_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long_3 = long_2 * long_3;
			short_2 = short_1 * short_1;
		}
	}
	if(1)
	{
		long long_4 = 1;
		long_3 = long_4 + long_3;
	}
	return unsigned_int_1;
}
int v_rasqal_algebra_graph_pattern_to_algebra( double parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_2 = 1;
	float float_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float_1 = float_1 + float_2;
	int_2 = int_1 * int_1;
	char_1 = char_1 + char_1;
	double_1 = double_1 * double_1;
	v_rasqal_algebra_union_graph_pattern_to_algebra(double_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_1;
	char_2 = char_2 * char_1;
	float_1 = float_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	v_rasqal_algebra_select_graph_pattern_to_algebra(short_1,short_1);

	char_3 = char_1 + char_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
	char_3 = v_rasqal_graph_pattern_operator_as_string(short_1);

	long_2 = long_1 * long_1;
	unsigned_int_3 = v_rasqal_algebra_basic_graph_pattern_to_algebra(long_3,long_3);

	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	int_2 = v_rasqal_algebra_graph_graph_pattern_to_algebra(char_2,unsigned_int_6);

	int_4 = int_3 + int_3;
	char_3 = char_4 * char_2;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_6;
	short_1 = short_2 * short_2;
	int_3 = v_rasqal_algebra_node_print(double_1,int_3);

	unsigned_int_2 = unsigned_int_4 + unsigned_int_7;
	short_2 = short_2 * short_2;
	float_1 = float_2 * float_4;
	if(1)
	{
		if(1)
		{
			int_5 = v_rasqal_graph_pattern_print(short_1,short_2);

			unsigned_int_2 = unsigned_int_4 * unsigned_int_6;
			unsigned_int_7 = unsigned_int_3 + unsigned_int_4;
			unsigned_int_1 = v_rasqal_algebra_values_graph_pattern_to_algebra(long_1,int_2);

			int_6 = v_rasqal_algebra_service_graph_pattern_to_algebra(unsigned_int_4,short_2);

			double_1 = double_1;
		}
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			int int_8 = 1;
			int_2 = v_rasqal_algebra_let_graph_pattern_to_algebra(int_7,char_3);

			int_6 = int_6 * int_2;
			long_3 = v_rasqal_algebra_group_graph_pattern_to_algebra(char_4,unsigned_int_3);

			long_3 = v_rasqal_algebra_filter_graph_pattern_to_algebra(int_1,double_1);

			double_2 = double_3;
			int_6 = int_5 * int_8;
		}
	}
	return int_6;
}
long v_rasqal_algebra_query_to_algebra( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	float_2 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_1;
	int_2 = v_rasqal_algebra_bindings_to_algebra(double_1,float_1);

	int_2 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		float float_3 = 1;
		v_rasqal_free_algebra_node(char_1);

		unsigned_int_2 = unsigned_int_1;
		long_1 = v_rasqal_query_get_query_graph_pattern(long_2);

		int_4 = int_3 + int_3;
		if(1)
		{
			int_2 = v_rasqal_algebra_node_print(double_1,int_3);

			long_2 = long_3 + long_1;
		}
		float_3 = float_3 + float_1;
	}
	int_3 = v_rasqal_algebra_graph_pattern_to_algebra(double_1,unsigned_int_3);

	unsigned_int_1 = v_rasqal_algebra_remove_znodes(double_1,short_1);

	int_4 = int_3 * int_1;
	if(1)
	{
		unsigned_int_2 = v_rasqal_new_2op_algebra_node(unsigned_int_1,double_2,long_3,short_1);

		int_2 = int_3 + int_2;
	}
	double_3 = double_2 * double_1;
	int_4 = v_rasqal_algebra_node_visit(long_4,int_2);

	int_4 = int_1 + int_5;
	return long_3;
}
int v_rasqal_query_variable_is_bound( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_2;
	double_1 = double_3 * double_1;
	int_1 = v_rasqal_variables_table_get_total_variables_count();

	int_1 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_2;
		if(1)
		{
		}
	}
	return int_3;
}
float v_rasqal_query_check_unused_variables( double parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double_1 = v_rasqal_variables_table_get(short_1,int_1);

	float_1 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_rasqal_log_warning_simple(char_1,double_2,unsigned_int_2,short_1,long_1);

	double_1 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		double double_4 = 1;
		short_2 = short_2 * short_2;
		double_4 = double_3 * double_2;
		if(1)
		{
			double_3 = double_3 + double_3;
		}
	}
	return float_3;
	int_1 = v_rasqal_variables_table_get_named_variables_count(float_3);

	int_1 = v_rasqal_query_variable_is_bound(double_3,float_1);

}
int v_rasqal_graph_pattern_variable_bound_in( int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_1;
	int_2 = v_rasqal_variables_table_get_total_variables_count();

	double_2 = double_1 + double_1;
	int_3 = int_1 + int_1;
	char_3 = char_1 * char_2;
	short_3 = short_1 * short_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_5 = int_4 * int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	return int_3;
}
int v_rasqal_graph_pattern_variable_bound_below( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int_3 = int_1 * int_2;
	int_3 = int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char_2 = char_1 + char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char_1 = char_3 * char_3;
			short_1 = short_1 + short_2;
			double_2 = double_1 + double_2;
			if(1)
			{
				int_2 = v_rasqal_graph_pattern_variable_bound_in(int_3,long_1);

				short_2 = short_2 * short_1;
			}
		}
	}
	return int_3;
}
int v_rasqal_graph_pattern_find_parent( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		double_1 = double_2 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			char_2 = char_1 + char_1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				int int_4 = 1;
				int_4 = int_4 + int_2;
			}
		}
	}
	return int_2;
}
float v_rasqal_graph_pattern_get_parent( unsigned int parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_2 = 1;
	int_1 = v_rasqal_graph_pattern_find_parent(float_1,short_1);

	int_2 = int_1;
	double_2 = double_1 + double_2;
	short_3 = short_2 + short_3;
	if(1)
	{
	}
	int_1 = v_rasqal_graph_pattern_visit(short_3,unsigned_int_1);

	short_5 = short_2 + short_4;
	return float_2;
}
void v_rasqal_expression_has_variable(char parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = v_rasqal_literal_as_variable(int_1);

	double_1 = double_1 + double_1;
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
}
int v_rasqal_expression_mentions_variable( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	return int_1;
	int_1 = v_rasqal_expression_visit(char_1);

	v_rasqal_expression_has_variable(char_2);

}
double v_rasqal_query_filter_variable_scope( char parameter_1,float parameter_2)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = v_rasqal_graph_pattern_operator_as_string(short_1);

	float_1 = float_1;
	double_1 = double_2;
	int_1 = v_rasqal_variables_table_get_named_variables_count(float_2);

	v_rasqal_expression_convert_to_literal(double_2,int_2);

	double_2 = double_1 * double_2;
	if(1)
	{
		float_2 = v_rasqal_graph_pattern_get_parent(unsigned_int_1,float_3,unsigned_int_1);

		char_2 = char_1 * char_2;
		if(1)
		{
			long long_3 = 1;
			int_3 = v_rasqal_graph_pattern_print(short_1,short_1);

			double_1 = v_rasqal_variables_table_get(short_2,int_2);

			long_2 = long_1 * long_1;
			long_2 = long_3 + long_3;
		}
	}
	if(1)
	{
		if(1)
		{
			float_3 = float_4;
		}
	}
	if(1)
	{
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			long_2 = v_rasqal_query_get_query_graph_pattern(long_4);

			long_2 = long_1 + long_4;
			if(1)
			{
				int_2 = int_2 + int_1;
				double_2 = double_1 * double_1;
			}
		}
		int_3 = v_rasqal_expression_mentions_variable(float_4,char_2);

		int_4 = int_2 * int_2;
		int_1 = int_3 * int_4;
		int_5 = v_rasqal_graph_pattern_variable_bound_below(unsigned_int_2,short_2);

		unsigned_int_1 = v_rasqal_new_boolean_literal(unsigned_int_3,int_3);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		float_1 = float_3 + float_4;
	}
	return double_2;
}
short v_rasqal_query_build_variable_agg_use( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_2;
	double_1 = double_1;
	double_1 = double_2;
	int_1 = v_rasqal_variables_table_get_total_variables_count();

	long_1 = long_1 + long_2;
	long_3 = long_2 + long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		int int_2 = 1;
		double_3 = double_1;
		double_3 = double_3;
		int_2 = int_1 * int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_4 = 1;
			double_4 = double_2 * double_2;
		}
	}
	return short_2;
}
short v_rasqal_query_values_build_variables_use_map_binds( int parameter_1,float parameter_2,int parameter_3,short parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	double_1 = double_3 + double_1;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_5 = double_1 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_3 = 1;
		short short_2 = 1;
		long_1 = v_rasqal_graph_pattern_promote_variable_mention_to_bind(float_1,float_2,long_1);

		char_2 = char_1 + char_1;
		float_3 = float_2 * float_3;
		short_1 = short_2;
	}
	return short_3;
}
double v_rasqal_query_union_build_variables_use_map_binds( double parameter_1,float parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_2;
	int_3 = int_1 * int_2;
	float_2 = float_4 + float_1;
	int_2 = int_3 + int_3;
	short_1 = short_1 * short_2;
	int_3 = int_3 + int_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		long long_3 = 1;
		long_1 = v_rasqal_query_graph_pattern_build_variables_use_map_binds(float_2,unsigned_int_1,int_2,short_1,long_2);

		double_2 = double_1 * double_1;
		long_2 = long_2 * long_3;
		double_2 = double_1 + double_2;
		float_2 = float_4 + float_1;
		if(1)
		{
			long_2 = long_1;
		}
	}
	int_4 = int_1 * int_2;
	return double_2;
}
long v_rasqal_query_select_build_variables_use_map_binds( short parameter_1,char parameter_2,int parameter_3,double parameter_4,float parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	char char_4 = 1;
	float_1 = float_2;
	short_1 = v_rasqal_projection_get_variables_sequence(float_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = v_rasqal_query_graph_pattern_build_variables_use_map_binds(float_3,unsigned_int_2,int_1,short_1,long_1);

	int_3 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_3 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_1 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_4;
		double_3 = double_2 + double_2;
	}
	char_3 = char_2 * char_2;
	long_2 = v_rasqal_graph_pattern_promote_variable_mention_to_bind(float_2,float_1,long_1);

	double_2 = double_3 + double_2;
	int_2 = int_4;
	char_1 = char_4 * char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_5 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
		int_4 = int_1 * int_1;
		int_5 = int_2 * int_5;
	}
	return long_1;
}
long v_rasqal_query_let_build_variables_use_map_binds( long parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = v_rasqal_graph_pattern_promote_variable_mention_to_bind(float_1,float_1,long_1);

	unsigned_int_1 = unsigned_int_2;
	return long_2;
}
short v_rasqal_query_graph_build_variables_use_map_binds( short parameter_1,float parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float_1 = v_rasqal_literal_as_variable(int_1);

	long_1 = v_rasqal_graph_pattern_promote_variable_mention_to_bind(float_1,float_2,long_1);

	double_1 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_1 * double_3;
	}
	return short_1;
}
long v_rasqal_graph_pattern_promote_variable_mention_to_bind( float parameter_1,float parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_2 * int_1;
	if(1)
	{
	}
	double_1 = double_2;
	short_2 = short_1 * short_1;
	short_1 = short_2;
	int_1 = v_rasqal_variables_table_get_total_variables_count();

	double_4 = double_3 + double_4;
	char_2 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	return long_1;
}
short v_rasqal_query_triples_build_variables_use_map_binds( float parameter_1,short parameter_2,int parameter_3,float parameter_4,short parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_5 = 1;
	int int_4 = 1;
	short_1 = short_1 + short_2;
	float_1 = float_1;
	double_3 = double_1 + double_2;
	short_4 = short_2 * short_3;
	short_1 = short_2 * short_1;
	float_2 = v_rasqal_literal_as_variable(int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_2;
	int_3 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		double_1 = double_3 * double_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		char_1 = char_3 * char_2;
		float_4 = float_2 + float_3;
		if(1)
		{
			if(1)
			{
				long_1 = long_1;
			}
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
			}
		}
		if(1)
		{
			if(1)
			{
				double double_4 = 1;
				double_4 = double_2 * double_3;
			}
			if(1)
			{
				long_3 = long_2 * long_3;
			}
		}
		if(1)
		{
			if(1)
			{
				long long_4 = 1;
				long_3 = long_1 + long_4;
			}
			if(1)
			{
				int_1 = int_2 * int_1;
			}
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					long_5 = v_rasqal_graph_pattern_promote_variable_mention_to_bind(float_4,float_3,long_3);

					short_3 = short_2 + short_3;
				}
				if(1)
				{
					int_2 = int_2 * int_4;
				}
			}
		}
		if(1)
		{
			float_4 = float_3 + float_4;
		}
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			char_3 = char_2 * char_2;
		}
		if(1)
		{
			if(1)
			{
				int_3 = int_2 + int_1;
			}
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_2 = double_1 * double_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char_1 = char_2 * char_3;
			if(1)
			{
				int int_5 = 1;
				unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
				int_4 = int_5 + int_3;
			}
		}
		if(1)
		{
			long_5 = long_2 * long_5;
		}
		if(1)
		{
			char char_4 = 1;
			char_2 = char_4 * char_4;
		}
	}
	return short_1;
}
long v_rasqal_query_graph_pattern_build_variables_use_map_binds( float parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4,long parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	char char_2 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_3 = 1;
	long long_5 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int int_5 = 1;
	long long_7 = 1;
	long_1 = v_rasqal_query_let_build_variables_use_map_binds(long_2,double_1);

	int_2 = int_1 * int_2;
	double_3 = double_1 * double_2;
	long_3 = v_rasqal_query_select_build_variables_use_map_binds(short_1,char_1,int_2,double_3,float_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_4 = long_2 * long_1;
	short_4 = short_2 * short_3;
	short_5 = v_rasqal_query_triples_build_variables_use_map_binds(float_1,short_5,int_1,float_1,short_6);

	double_2 = double_3 * double_2;
	char_2 = char_1;
	unsigned_int_1 = unsigned_int_2;
	short_6 = short_6 * short_5;
	char_1 = char_2 * char_1;
	double_4 = double_2 + double_1;
	float_2 = float_1;
	int_2 = int_1 * int_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	long_5 = long_1;
	short_7 = v_rasqal_query_graph_build_variables_use_map_binds(short_4,float_1);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	short_6 = v_rasqal_query_values_build_variables_use_map_binds(int_4,float_3,int_4,short_2,char_3);

	int_4 = int_3 * int_2;
	if(1)
	{
		int_4 = int_3 * int_2;
		double_1 = v_rasqal_query_union_build_variables_use_map_binds(double_1,float_2,int_2,double_5,int_5);

		char_3 = v_rasqal_graph_pattern_operator_as_string(short_5);

		short_4 = short_2 * short_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_8 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_6 = 1;
			int int_7 = 1;
			short_6 = short_8 + short_6;
			float_4 = float_3;
			float_2 = float_1 * float_5;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
			if(1)
			{
				long long_6 = 1;
				long_7 = long_6 + long_4;
			}
			float_5 = float_4;
			int_6 = int_6 + int_7;
		}
	}
	return long_7;
}
void v_rasqal_query_build_variables_use_map_binds( long parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	long_1 = v_rasqal_query_graph_pattern_build_variables_use_map_binds(float_1,unsigned_int_1,int_1,short_1,long_1);

	short_1 = short_1 + short_1;
	float_3 = float_1 * float_2;
	int_2 = int_2;
	short_1 = short_2 + short_2;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
	float_4 = float_4 + float_3;
	if(1)
	{
		double double_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_1 = double_1;
		double_3 = double_2 * double_3;
		v_rasqal_query_get_group_conditions_sequence(double_4);

		long_1 = long_1;
		long_3 = long_2 + long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_2 = 1;
			char char_3 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			double_2 = double_1 + double_2;
			float_1 = float_3;
			char_3 = char_2 * char_2;
			if(1)
			{
				char char_4 = 1;
				char_2 = char_2 + char_4;
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					float_3 = float_4 + float_2;
					unsigned_int_3 = unsigned_int_2;
				}
			}
		}
	}
	double_2 = double_1 * double_4;
}
void v_rasqal_graph_pattern_mentions_variable( unsigned int parameter_1,short parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_3 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	float_2 = float_1 + float_1;
	int_1 = v_rasqal_variables_table_get_total_variables_count();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	short_1 = short_1;
	float_2 = float_3;
}
void v_rasqal_graph_pattern_tree_mentions_variable( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short_1 = short_1 * short_1;
		v_rasqal_graph_pattern_mentions_variable(unsigned_int_1,short_2);

		int_1 = int_1 * int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			int_2 = int_1 * int_2;
			double_1 = double_1;
			if(1)
			{
			}
		}
	}
}
unsigned int v_rasqal_query_select_build_variables_use_map( int parameter_1,float parameter_2,int parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = v_rasqal_new_variable_from_variable();

	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "i") < 0)
	{
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		v_rasqal_free_variable(int_1);

		double_1 = v_rasqal_variables_table_get(short_1,int_1);

		char_3 = char_2 + char_1;
		unsigned_int_3 = unsigned_int_4;
		double_3 = double_2 * double_2;
		short_2 = short_1 + short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_2 = 1;
			long_2 = long_1 + long_2;
			float_1 = float_1 * float_1;
			double_3 = double_2 * double_3;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char_3 = char_1 + char_2;
				long_1 = long_2 * long_1;
				if(1)
				{
					unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
					unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				}
			}
		}
		float_1 = float_1 * float_1;
	}
	v_rasqal_graph_pattern_tree_mentions_variable(double_3,char_2);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = v_rasqal_variable_print(long_1,long_1);

		double_2 = v_rasqal_query_build_variables_sequence_use_map_row(double_4,int_2,int_1);

		int_3 = int_2 + int_2;
		if(1)
		{
		}
	}
	return unsigned_int_3;
	short_3 = v_rasqal_projection_get_variables_sequence(float_1);

}
char v_rasqal_query_let_build_variables_use_map( float parameter_1,long parameter_2,long parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int_1 = int_1;
	return char_1;
	int_1 = v_rasqal_expression_visit(char_2);

	v_rasqal_query_expression_build_variables_use_map_row(int_1,double_1);

}
int v_rasqal_query_graph_build_variables_use_map( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	return int_4;
	float_1 = v_rasqal_literal_as_variable(int_1);

}
double v_rasqal_query_graph_pattern_build_variables_use_map( unsigned int parameter_1,float parameter_2,int parameter_3,double parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_7 = 1;
	float float_4 = 1;
	int int_8 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_1 = v_rasqal_query_triples_build_variables_use_map_row(int_1,float_1,int_2,int_3);

			float_2 = float_2 * float_1;
			int_4 = int_2 + int_4;
			if(1)
			{
			}
		}
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_rasqal_query_let_build_variables_use_map(float_2,long_2,long_2);

	int_6 = int_5 * int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_1 * float_3;
	unsigned_int_2 = v_rasqal_query_select_build_variables_use_map(int_7,float_4,int_8,char_1);

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_2 * char_1;
	char_1 = char_3 * char_2;
	long_1 = long_1 * long_2;
	long_3 = v_rasqal_query_expression_build_variables_use_map(short_1,unsigned_int_1);

	double_1 = double_1 * double_2;
	short_4 = short_2 + short_3;
	double_2 = double_3 + double_1;
	return double_4;
	int_4 = v_rasqal_query_graph_build_variables_use_map(int_7,int_5);

}
double v_rasqal_query_get_having_conditions_sequence( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_1 = int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Kz") < 0)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "9") < 0)
	{
	}
	return double_1;
}
unsigned int v_rasqal_query_build_expressions_sequence_use_map_row( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_2;
	int_1 = int_3 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		char_2 = char_1 * char_1;
		short_1 = short_1 + short_2;
		if(1)
		{
			short_1 = short_2 + short_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return unsigned_int_2;
	long_1 = v_rasqal_query_expression_build_variables_use_map(short_1,unsigned_int_1);

}
void v_rasqal_query_get_group_conditions_sequence( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
	}
}
int v_rasqal_query_triples_build_variables_use_map_row( int parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_2;
	float_1 = v_rasqal_literal_as_variable(int_1);

	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		double double_2 = 1;
		int int_4 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		int_2 = int_2 * int_3;
		double_2 = double_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_3;
		}
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "n") > 0)
		{
			int_4 = int_2 * int_1;
		}
		if(1)
		{
			if(1)
			{
				int int_5 = 1;
				int_1 = int_4 + int_5;
			}
		}
	}
	return int_1;
}
int v_rasqal_query_build_literals_sequence_use_map_row( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_3 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double_1 = double_1 * double_2;
		float_1 = v_rasqal_literal_as_variable(int_1);

		double_3 = double_1 * double_1;
		char_3 = char_1 + char_2;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_2 * int_1;
		}
		short_1 = short_4 + short_5;
		if(1)
		{
			float float_2 = 1;
			float_1 = float_2 * float_1;
		}
	}
	return int_2;
}
void v_rasqal_query_expression_build_variables_use_map_row( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
		int int_2 = 1;
		float_1 = v_rasqal_literal_as_variable(int_1);

		int_1 = int_2 * int_1;
		int_1 = int_2 * int_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
}
long v_rasqal_query_expression_build_variables_use_map( short parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int_1 = v_rasqal_expression_visit(char_1);

	float_1 = float_1 + float_1;
	return long_1;
	v_rasqal_query_expression_build_variables_use_map_row(int_1,double_1);

}
double v_rasqal_query_build_variables_sequence_use_map_row( double parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char_1 = char_1 + char_1;
		char_2 = char_2 + char_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			int int_3 = 1;
			int_1 = int_3 * int_3;
			double_1 = double_1 + double_1;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				short short_1 = 1;
				short short_3 = 1;
				unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
				short_3 = short_1 * short_2;
			}
		}
		float_2 = float_1 * float_1;
	}
	return double_1;
	long_1 = v_rasqal_query_expression_build_variables_use_map(short_2,unsigned_int_4);

}
int v_rasqal_variables_table_get_total_variables_count()
{
	int int_1 = 1;
	return int_1;
}
double v_rasqal_query_build_variables_use_map( long parameter_1,long parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	char char_6 = 1;
	int int_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double double_8 = 1;
	int_1 = int_1 + int_1;
	long_3 = long_1 * long_2;
	short_1 = short_1 * short_1;
	v_rasqal_query_get_group_conditions_sequence(double_1);

	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2 + short_2;
	double_2 = v_rasqal_query_get_having_conditions_sequence(double_3);

	char_3 = char_1 + char_2;
	double_3 = double_3 * double_1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		double_4 = double_4 * double_5;
	}
	char_3 = char_4 + char_3;
	float_2 = float_1 + float_1;
	int_1 = int_2 + int_3;
	if(1)
	{
		double_4 = double_1;
		v_rasqal_query_build_variables_use_map_binds(long_1,char_1,int_1,int_3);

		int_1 = int_1 * int_1;
	}
	if(1)
	{
		long_2 = long_4 + long_2;
	}
	short_1 = short_1 * short_1;
	int_2 = int_1 * int_1;
	int_4 = v_rasqal_query_triples_build_variables_use_map_row(int_2,float_1,int_2,int_5);

	long_5 = long_2 * long_4;
	if(1)
	{
		double_2 = double_4;
	}
	double_1 = double_1 * double_4;
	int_2 = v_rasqal_query_build_literals_sequence_use_map_row(float_1,char_5);

	double_3 = double_4 * double_3;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		float_2 = float_3 + float_3;
		int_5 = int_3 * int_1;
	}
	char_6 = char_3 + char_4;
	long_3 = long_1;
	long_4 = long_4 + long_1;
	if(1)
	{
		int_6 = int_3 + int_3;
	}
	double_3 = double_4 + double_2;
	if(1)
	{
		char char_7 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		char_6 = char_7 * char_2;
		if(1)
		{
			double_6 = double_6 + double_4;
		}
	}
	int_5 = int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		int_1 = int_1 + int_2;
		if(1)
		{
			double_4 = double_2 * double_6;
		}
	}
	double_3 = double_4 + double_2;
	if(1)
	{
		char char_8 = 1;
		char char_9 = 1;
		short short_3 = 1;
		char_9 = char_2 + char_8;
		unsigned_int_4 = v_rasqal_query_build_expressions_sequence_use_map_row(unsigned_int_1,unsigned_int_4);

		short_3 = short_1;
		if(1)
		{
			int_1 = int_7 + int_6;
		}
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_2 + short_1;
		double_4 = v_rasqal_query_graph_pattern_build_variables_use_map(unsigned_int_4,float_3,int_3,double_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			int_7 = int_4 + int_1;
		}
	}
	unsigned_int_3 = unsigned_int_5;
	if(1)
	{
		char char_10 = 1;
		char_6 = char_10 * char_2;
	}
	int_4 = int_4 * int_6;
	long_1 = long_5 + long_3;
	float_2 = float_2;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
	if(1)
	{
		double_4 = double_1 + double_5;
	}
	int_3 = v_rasqal_variables_table_get_total_variables_count();

	double_7 = double_2 + double_2;
	double_3 = v_rasqal_query_build_variables_sequence_use_map_row(double_3,int_1,int_8);

	double_6 = v_rasqal_query_get_order_conditions_sequence(int_6);

	int_3 = int_8 * int_6;
	int_2 = int_4;
	double_5 = double_4 + double_3;
	int_7 = int_9 + int_10;
	double_5 = double_8 * double_6;
	return double_2;
}
int v_rasqal_query_build_variables_use( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	long long_2 = 1;
	int int_7 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		double double_3 = 1;
		int_2 = int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		short_3 = short_1 * short_2;
		v_rasqal_log_error_simple(short_3,short_1,unsigned_int_4,char_1,double_1);

		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short_3 = short_3 + short_3;
			if(1)
			{
				int int_3 = 1;
				double_2 = v_rasqal_variables_table_get(short_4,int_2);

				int_2 = int_3 + int_2;
			}
			if(1)
			{
				int int_4 = 1;
				int int_5 = 1;
				int int_6 = 1;
				int_6 = int_4 + int_5;
			}
			if(1)
			{
				double_3 = double_2 + double_2;
			}
			if(1)
			{
				long long_3 = 1;
				long long_4 = 1;
				double_2 = v_rasqal_query_build_variables_use_map(long_1,long_1);

				unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
				v_rasqal_log_warning_simple(char_1,double_1,unsigned_int_5,short_5,long_2);

				long_4 = long_2 + long_3;
			}
		}
		double_3 = double_3 * double_1;
		if(1)
		{
		}
	}
	return int_7;
	short_4 = v_rasqal_query_build_variable_agg_use(short_4);

}
char v_rasqal_query_prepare_count_graph_pattern( double parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	double_1 = double_1 * double_2;
	return char_1;
}
unsigned int v_rasqal_query_enumerate_graph_patterns( char parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_rasqal_query_graph_pattern_visit2(float_1,short_1);

	char_1 = v_rasqal_query_prepare_count_graph_pattern(double_1,short_2);

	short_2 = short_1 * short_2;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_2 = double_3;
	}
	char_1 = char_2 + char_1;
	if(1)
	{
	}
	return unsigned_int_1;
}
int v_rasqal_query_merge_graph_patterns( unsigned int parameter_1,long parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	int int_2 = 1;
	float_1 = float_1 + float_1;
	int_1 = v_rasqal_graph_pattern_print(short_1,short_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_rasqal_graph_patterns_join(short_3,char_1);

	long_1 = long_1;
	char_1 = v_rasqal_graph_pattern_operator_as_string(short_3);

	unsigned_int_3 = unsigned_int_3;
	float_2 = float_1 * float_2;
	return int_1;
	v_rasqal_free_graph_pattern(int_2);

}
double v_rasqal_query_remove_empty_group_graph_patterns( long parameter_1,double parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	int_1 = v_rasqal_graph_pattern_print(short_1,short_2);

	int_2 = int_1 + int_2;
	short_3 = short_1 * short_1;
	float_3 = float_1 * float_2;
	float_4 = float_4 + float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
		}
		v_rasqal_free_graph_pattern(int_3);

		long_2 = long_1 + long_2;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_4 = v_rasqal_graph_pattern_move_constraints(int_1,int_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
	}
	return double_1;
}
void v_rasqal_new_2op_expression( float parameter_1,long parameter_2,unsigned int parameter_3,float parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "NR") > 0)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	short_1 = short_1 * short_2;
	if(1)
	{
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		double double_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		v_rasqal_free_expression(unsigned_int_1);

		double_1 = double_2 * double_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		int_2 = int_1 + int_1;
		double_3 = double_1 * double_1;
		int_4 = int_2 * int_3;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_5;
	}
	if(1)
	{
		int_3 = int_3 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_1;
	}
}
unsigned int v_rasqal_new_expression_from_expression()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	return unsigned_int_1;
}
int v_rasqal_graph_pattern_move_constraints( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int_1 = int_1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = v_rasqal_new_expression_from_expression();

	short_1 = short_1 + short_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	v_rasqal_new_2op_expression(float_1,long_1,unsigned_int_1,float_1);

	int_1 = int_2;
	return int_2;
}
int v_rasqal_graph_patterns_join( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_3 + int_3;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	char_1 = char_1 + char_2;
	float_2 = float_1 * float_1;
	char_3 = v_rasqal_graph_pattern_operator_as_string(short_1);

	float_4 = float_1 * float_3;
	long_2 = long_1 + long_1;
	if(1)
	{
		if(1)
		{
			short short_2 = 1;
			short_1 = short_2 * short_3;
			if(1)
			{
			}
		}
		double_1 = double_1 + double_1;
		if(1)
		{
		}
	}
	if(1)
	{
		double_2 = double_2;
		char_1 = char_1 * char_2;
		double_4 = double_3 * double_1;
		int_3 = v_rasqal_graph_pattern_move_constraints(int_2,int_4);

		int_2 = int_1 * int_3;
		if(1)
		{
			double_2 = double_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			v_rasqal_free_graph_pattern(int_3);

			int_1 = int_5 + int_5;
		}
		long_2 = long_1;
	}
	double_3 = double_2 + double_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		double_5 = double_4 + double_2;
	}
	if(1)
	{
		char_2 = char_4 * char_1;
		int_1 = int_4 * int_5;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 + long_3;
		int_5 = int_4 * int_4;
	}
	if(1)
	{
		float float_5 = 1;
		unsigned int unsigned_int_4 = 1;
		float_5 = float_4 + float_1;
		unsigned_int_4 = unsigned_int_3;
	}
	if(1)
	{
		int_3 = int_2 * int_5;
		char_4 = char_2 + char_1;
	}
	double_7 = double_3 * double_6;
	if(1)
	{
		double double_8 = 1;
		int_3 = v_rasqal_graph_pattern_print(short_3,short_3);

		double_6 = double_8;
	}
	double_7 = double_3;
	long_2 = long_1;
	return int_3;
}
void v_rasqal_query_merge_triple_patterns( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_5 = 1;
	int int_5 = 1;
	double_2 = double_1 * double_1;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_4 = 1;
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		char_1 = v_rasqal_graph_pattern_operator_as_string(short_1);

		int_2 = int_1 + int_1;
		if(1)
		{
			short_1 = short_1 + short_2;
		}
		if(1)
		{
		}
		double_2 = double_3 * double_3;
		if(1)
		{
		}
		long_1 = long_1 + long_3;
		double_3 = double_2 + double_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		char_3 = char_2 * char_2;
		double_3 = double_3;
		char_4 = char_1;
		int_3 = v_rasqal_graph_pattern_print(short_1,short_1);

		int_1 = int_3;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		short_2 = short_2 + short_2;
		double_4 = double_2 + double_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		int_1 = int_4 + int_1;
		float_3 = float_1 + float_2;
		double_4 = double_3 + double_4;
		float_1 = float_1 * float_2;
		short_1 = short_1 + short_1;
		long_1 = long_4 * long_5;
		int_2 = v_rasqal_graph_patterns_join(short_1,char_5);

		short_1 = short_2;
		int_1 = int_1 + int_1;
	}
	v_rasqal_free_graph_pattern(int_5);

}
int v_rasqal_graph_pattern_get_sub_graph_pattern( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	return int_1;
}
short v_rasqal_graph_pattern_get_sub_graph_pattern_sequence( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	return short_1;
}
int v_rasqal_graph_pattern_visit( short parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	int int_7 = 1;
	short_1 = short_1 + short_2;
	int_1 = int_1 + int_1;
	char_1 = char_1 + char_1;
	short_3 = short_2 * short_2;
	long_1 = long_1 * long_1;
	char_1 = char_1;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2;
	short_4 = short_1 * short_4;
	int_4 = int_1 * int_3;
	short_5 = v_rasqal_graph_pattern_get_sub_graph_pattern_sequence(double_1);

	int_5 = int_4 * int_2;
	int_6 = int_6 + int_5;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_5;
	int_3 = v_rasqal_graph_pattern_get_sub_graph_pattern(short_2,int_2);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	short_1 = short_1 * short_2;
	float_2 = float_3 * float_1;
	return int_7;
}
long v_rasqal_query_get_query_graph_pattern( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long_3 = long_1 * long_2;
	return long_3;
}
int v_rasqal_query_graph_pattern_visit2( float parameter_1,short parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = v_rasqal_query_get_query_graph_pattern(long_1);

	double_2 = double_1 * double_1;
	short_1 = short_1 * short_1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	return int_1;
	int_1 = v_rasqal_graph_pattern_visit(short_3,unsigned_int_1);

}
int v_rasqal_row_write( long parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	double double_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	unsigned_int_1 = v_rasqal_rowsource_get_variable_by_offset(long_1,int_1);

	float_1 = float_2;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = int_2 + int_1;
	unsigned_int_2 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_2 = 1;
		float float_3 = 1;
		double double_4 = 1;
		int_2 = int_2;
		char_1 = char_2;
		if(1)
		{
			int int_4 = 1;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
			int_4 = int_1 * int_3;
			if(1)
			{
				char_1 = char_2 + char_1;
			}
		}
		float_3 = float_1 + float_3;
		if(1)
		{
			v_rasqal_literal_write(short_1,char_3);

			long_1 = long_1 * long_1;
		}
		if(1)
		{
			short short_2 = 1;
			short_2 = short_2 + short_1;
			double_1 = double_3 + double_4;
		}
		double_3 = double_4 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short_1 = short_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_3 = 1;
			long long_2 = 1;
			short_1 = short_3;
			if(1)
			{
				double_2 = double_2 * double_2;
			}
			long_2 = long_1;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		double_3 = double_2 * double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_3 = int_1 * int_3;
	char_4 = char_4 * char_1;
	int_1 = int_3 + int_5;
	return int_5;
}
unsigned int v_rasqal_bindings_get_row( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_1 * short_2;
		}
	}
	return unsigned_int_1;
	char_1 = v_rasqal_new_row_from_row(float_1);

}
int v_rasqal_variables_write( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float_1 = float_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		int_2 = int_2 * int_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_2;
		}
		v_rasqal_variable_write(short_1,int_2);

		double_1 = double_2;
	}
	return int_3;
}
short v_rasqal_projection_get_variables_sequence( float parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	return short_1;
}
void v_rasqal_triple_write( short parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_2 = short_1 * short_1;
	v_rasqal_literal_write(short_2,char_1);

	int_1 = int_1;
	int_2 = int_1 * int_1;
	long_2 = long_1 + long_2;
	double_1 = double_1;
	char_2 = char_1 * char_2;
	double_2 = double_2 + double_1;
	double_2 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		char_2 = char_3 * char_4;
		long_3 = long_4;
	}
}
short v_rasqal_graph_pattern_write_plurals( float parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	char_1 = char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	return short_1;
}
int v_rasqal_graph_pattern_write_indent( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	if(1)
	{
	}
	return int_1;
}
char v_rasqal_graph_pattern_operator_as_string( short parameter_1)
{
	char char_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	return char_1;
}
float v_rasqal_graph_pattern_write_internal( int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	short short_4 = 1;
	double double_6 = 1;
	char char_3 = 1;
	short short_5 = 1;
	int int_5 = 1;
	long long_1 = 1;
	int int_6 = 1;
	double double_7 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	int int_7 = 1;
	double double_8 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_6 = 1;
	long long_4 = 1;
	short short_7 = 1;
	double double_9 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_8 = 1;
	int int_8 = 1;
	char char_5 = 1;
	int int_9 = 1;
	int int_10 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_9 = 1;
	int_2 = int_1 + int_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		short_1 = v_rasqal_projection_get_variables_sequence(float_1);

		int_1 = int_3 * int_2;
		double_1 = double_3 * double_1;
	}
	short_3 = short_2 + short_3;
	float_2 = float_2 + float_2;
	double_3 = double_3 * double_4;
	if(1)
	{
		int_1 = int_2 + int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
		double_1 = double_4 + double_5;
	}
	if(1)
	{
		float_3 = float_2 * float_3;
		char_1 = char_1;
		if(1)
		{
			double_5 = double_3 + double_4;
			if(1)
			{
				int_4 = int_1 * int_1;
				unsigned_int_2 = unsigned_int_3;
			}
		}
		char_1 = char_1 * char_2;
		unsigned_int_2 = unsigned_int_2;
		char_2 = v_rasqal_graph_pattern_operator_as_string(short_4);

		int_2 = int_4 * int_4;
		if(1)
		{
			float_1 = float_1 * float_3;
			double_1 = double_6 * double_3;
			char_3 = char_3;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short_4 = short_5;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
				if(1)
				{
					int_5 = int_3 * int_5;
					long_1 = long_1 * long_1;
				}
			}
			int_1 = int_3 + int_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			int_1 = int_3 * int_2;
			long_1 = long_1 * long_1;
		}
		char_3 = char_3 + char_3;
		double_4 = double_3;
	}
	if(1)
	{
		if(1)
		{
			int_4 = int_2;
			if(1)
			{
				int_5 = int_3 * int_5;
				int_5 = int_6 * int_3;
			}
		}
		int_1 = int_1 * int_5;
		double_7 = double_7 + double_3;
		float_3 = float_4 + float_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		int_5 = int_6 * int_3;
		if(1)
		{
			double_5 = double_6 * double_2;
			if(1)
			{
				double_3 = double_7 * double_1;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
			}
		}
		char_4 = char_3 * char_4;
		int_6 = int_5 + int_4;
		int_7 = int_6 + int_5;
		if(1)
		{
			double_4 = double_6 + double_8;
			float_2 = float_2 * float_4;
			double_5 = double_1;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_3 = long_2 * long_1;
			short_5 = short_6;
			if(1)
			{
				long_2 = long_4;
				if(1)
				{
					short_3 = short_1;
					short_7 = short_3 * short_6;
				}
			}
			if(1)
			{
				short_1 = short_1 + short_5;
			}
			if(1)
			{
				v_rasqal_expression_write(float_1,unsigned_int_3);

				int_1 = int_2;
			}
		}
		if(1)
		{
			v_rasqal_triple_write(short_2,short_6);

			short_1 = short_2 + short_5;
			double_5 = double_6 * double_5;
			int_4 = int_2 * int_2;
		}
		float_3 = float_3 + float_2;
		double_9 = double_7 + double_8;
	}
	if(1)
	{
		long_3 = long_3 * long_4;
		float_1 = float_5 * float_5;
		int_3 = int_1 * int_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
			if(1)
			{
				char_3 = char_2 * char_2;
				v_rasqal_variable_write(short_5,int_2);

				unsigned_int_2 = unsigned_int_4 + unsigned_int_6;
			}
		}
		if(1)
		{
			short_8 = short_3;
		}
		if(1)
		{
			double_4 = double_2;
			int_8 = int_4;
			char_5 = char_5;
		}
		short_2 = short_6;
		if(1)
		{
			float_3 = float_3 + float_4;
		}
		int_9 = int_4 * int_6;
	}
	if(1)
	{
		short short_9 = 1;
		int_1 = int_4 + int_7;
		if(1)
		{
			short_7 = v_rasqal_graph_pattern_write_plurals(float_5,char_5,int_5);

			int_1 = int_7 * int_4;
			if(1)
			{
				char_4 = char_4 + char_1;
				short_5 = short_9 * short_5;
			}
		}
		if(1)
		{
			double_1 = double_2 + double_4;
			double_8 = double_9 * double_6;
			int_6 = v_rasqal_graph_pattern_write_indent(long_1,int_10);

			short_1 = short_9 * short_8;
		}
		long_2 = long_2 + long_4;
		int_6 = int_2 + int_5;
		if(1)
		{
			short_5 = short_2 * short_2;
		}
		if(1)
		{
			int_10 = int_10 * int_6;
		}
		double_9 = double_5 + double_6;
		if(1)
		{
			int_9 = int_3 * int_9;
		}
		double_6 = double_2 + double_8;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		char char_6 = 1;
		char char_7 = 1;
		short short_10 = 1;
		long long_6 = 1;
		short short_11 = 1;
		int int_12 = 1;
		unsigned_int_7 = unsigned_int_3 + unsigned_int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_7;
			if(1)
			{
				long_3 = long_4;
				long_1 = long_4 + long_4;
			}
		}
		int_8 = int_8 * int_4;
		if(1)
		{
			int_6 = v_rasqal_row_write(long_5,unsigned_int_8);

			int_9 = int_8;
			char_1 = char_6 * char_7;
			double_6 = double_8 * double_6;
		}
		short_3 = short_6 * short_10;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_8;
		long_4 = long_6 * long_3;
		short_3 = short_11 + short_11;
		char_7 = char_6 * char_7;
		float_5 = float_4 + float_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_11 = 1;
			double_5 = double_6 + double_5;
			if(1)
			{
				int_3 = int_11 * int_7;
			}
			v_rasqal_literal_write(short_4,char_2);

			int_11 = int_11;
			float_6 = float_5 * float_2;
			double_9 = double_2 * double_9;
		}
		unsigned_int_8 = unsigned_int_2 * unsigned_int_6;
		int_7 = int_7 + int_9;
		int_6 = v_rasqal_variables_write(char_5,long_5);

		unsigned_int_8 = unsigned_int_5 * unsigned_int_1;
		int_12 = int_1 * int_1;
		if(1)
		{
			char_2 = char_2;
		}
		short_8 = short_10 + short_8;
	}
	if(1)
	{
		if(1)
		{
			long long_7 = 1;
			if(1)
			{
				double_9 = double_1 * double_8;
				if(1)
				{
					int_9 = int_5;
					unsigned_int_6 = unsigned_int_9 * unsigned_int_4;
				}
			}
			if(1)
			{
				int int_13 = 1;
				int_13 = int_9 * int_6;
				long_3 = long_5;
				double_5 = double_5;
			}
			unsigned_int_8 = v_rasqal_bindings_get_row(short_4,int_7);

			long_5 = long_4 + long_7;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			}
			double_1 = double_3 + double_7;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_6 * unsigned_int_9;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_8 = 1;
			long_8 = long_1 * long_8;
			unsigned_int_3 = unsigned_int_6 + unsigned_int_9;
		}
	}
	float_4 = float_3;
	return float_6;
}
int v_rasqal_graph_pattern_print( short parameter_1,short parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	float_1 = v_rasqal_graph_pattern_write_internal(int_1,int_2,int_3);

	float_3 = float_1 + float_2;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_3 + int_1;
	double_1 = double_1 + double_1;
	int_3 = int_4 + int_4;
	return int_1;
}
void v_rasqal_expression_convert_to_literal( double parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_2 + short_3;
	char_3 = char_3 + char_1;
	v_rasqal_expression_clear(short_1);

}
void v_rasqal_expression_evaluate_struuid( char parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = v_rasqal_expression_evaluate_uuid(double_1,unsigned_int_2,int_1,int_2);

}
unsigned int v_rasqal_expression_evaluate_uuid( double parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 * double_2;
	short_3 = short_1 + short_2;
	double_2 = v_rasqal_new_uri_literal(short_1,double_3);

	float_2 = float_1 * float_1;
	if(1)
	{
		double_4 = v_rasqal_new_string_literal(int_1,char_1,int_1,char_1,long_1,-1 );

		float_2 = float_2 + float_2;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	float_1 = float_1 + float_2;
	double_5 = double_2 * double_4;
	if(1)
	{
		int_1 = int_2;
	}
	char_2 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_3;
	float_4 = float_3 + float_4;
	char_3 = char_3;
	return unsigned_int_1;
}
unsigned int v_rasqal_expression_evaluate_uriuuid( double parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	return unsigned_int_1;
	unsigned_int_1 = v_rasqal_expression_evaluate_uuid(double_1,unsigned_int_2,int_1,int_1);

}
float v_rasqal_expression_evaluate_digest( double parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	int int_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double_2 = double_1 * double_1;
	char_2 = char_1 * char_1;
	float_1 = float_1;
	int_1 = int_1 * int_1;
	short_2 = short_1 * short_2;
	double_2 = double_1;
	int_2 = int_2;
	int_3 = int_1 * int_1;
	float_3 = float_1 * float_2;
	double_1 = double_2 * double_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_4;
	if(1)
	{
		int_4 = int_4 + int_4;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	if(1)
	{
		char_2 = char_3 + char_1;
	}
	long_1 = long_1 + long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4;
	}
	long_3 = long_2 + long_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	}
	unsigned_int_6 = unsigned_int_6;
	if(1)
	{
		unsigned_int_5 = unsigned_int_2;
	}
	float_1 = float_3 * float_3;
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1;
	}
	double_1 = double_4 + double_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_3 = v_rasqal_expression_evaluate2(short_1,short_3,int_1,-1 );

		double_2 = double_5;
		int_3 = int_5 + int_4;
		double_5 = v_rasqal_new_string_literal(int_4,char_3,int_1,char_4,long_2,-1 );

		float_3 = float_2 * float_3;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_5;
		int_4 = v_rasqal_literal_as_counted_string(int_3,unsigned_int_7,int_4,int_5);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_7;
		short_2 = short_3 + short_2;
	}
	unsigned_int_3 = unsigned_int_7 * unsigned_int_5;
	float_5 = float_4 + float_4;
	long_3 = long_1 * long_2;
	if(1)
	{
		float float_6 = 1;
		float_3 = float_5 * float_6;
	}
	if(1)
	{
		v_rasqal_free_literal();

		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	return float_4;
}
int v_rasqal_xsd_decimal_floor( short parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_rasqal_xsd_decimal_clear_string(float_1);

	float_2 = float_1 + float_1;
	char_1 = char_2;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_2 * float_3;
	}
	long_1 = long_2;
	int_3 = int_1 + int_2;
	return int_3;
}
float v_rasqal_literal_floor( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = v_rasqal_literal_as_double(long_1,int_1);

	int_1 = int_1 + int_1;
	short_1 = short_1 + short_1;
	v_rasqal_free_xsd_decimal(long_2);

	double_1 = v_rasqal_new_decimal_literal_from_decimal(long_1,char_1,float_1);

	int_4 = int_2 * int_3;
	short_3 = short_2 + short_1;
	if(1)
	{
	}
	int_5 = int_3 * int_5;
	long_1 = long_3;
	int_3 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 * double_2;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_3 = v_rasqal_xsd_decimal_floor(short_3,long_4);

	char_2 = char_3;
	v_rasqal_new_numeric_literal(long_3,unsigned_int_3,double_3);

	short_4 = short_3 * short_1;
	char_3 = char_3 + char_4;
	if(1)
	{
		int_1 = int_4 + int_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		short_4 = short_4;
	}
	int_5 = v_rasqal_literal_is_numeric(char_4);

	short_3 = short_5;
	short_1 = v_rasqal_new_literal_from_literal(long_2);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_4;
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			int_5 = v_rasqal_new_xsd_decimal(float_1);

			double_4 = double_3 + double_1;
		}
	}
	return float_1;
}
float v_rasqal_expression_evaluate_floor( short parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_4 = 1;
	long long_3 = 1;
	int_1 = v_rasqal_literal_is_numeric(char_1);

	double_1 = double_1 + double_1;
	double_3 = double_2 + double_1;
	float_2 = float_1 + float_1;
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		v_rasqal_free_literal();

		int_1 = int_1;
	}
	int_3 = int_1 + int_2;
	short_1 = v_rasqal_expression_evaluate2(short_1,short_1,int_4,-1 );

	double_1 = double_4;
	long_2 = long_3 + long_2;
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4 * long_1;
	}
	if(1)
	{
		int_3 = int_4;
	}
	if(1)
	{
		float_2 = v_rasqal_literal_floor(char_1,int_1);

		float_2 = float_2;
	}
	return float_1;
}
int v_rasqal_xsd_decimal_ceil( float parameter_1,long parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	short_1 = short_1 * short_1;
	v_rasqal_xsd_decimal_clear_string(float_1);

	int_1 = int_1 * int_1;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	char_1 = char_1 + char_2;
	double_2 = double_1 * double_2;
	return int_2;
}
short v_rasqal_literal_ceil( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_2 = 1;
	long long_4 = 1;
	int int_4 = 1;
	double double_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	int int_6 = 1;
	char char_6 = 1;
	short short_1 = 1;
	char_1 = char_1 + char_1;
	double_1 = v_rasqal_new_decimal_literal_from_decimal(long_1,char_2,float_1);

	int_3 = int_1 * int_2;
	int_3 = v_rasqal_xsd_decimal_ceil(float_1,long_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1 * int_1;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	int_2 = int_1 * int_3;
	v_rasqal_free_xsd_decimal(long_3);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	char_3 = char_2 * char_1;
	if(1)
	{
		char_5 = char_3 * char_4;
	}
	int_2 = int_3;
	v_rasqal_new_numeric_literal(long_1,unsigned_int_1,double_2);

	char_3 = char_2 * char_4;
	long_4 = long_2 * long_3;
	int_4 = int_3 * int_3;
	if(1)
	{
		double_1 = double_1 * double_2;
		double_3 = double_2;
	}
	if(1)
	{
		int_5 = v_rasqal_new_xsd_decimal(float_1);

		int_4 = int_1 * int_1;
	}
	double_4 = double_1 * double_4;
	char_5 = char_3;
	int_6 = v_rasqal_literal_is_numeric(char_3);

	char_3 = char_6;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			double_3 = v_rasqal_literal_as_double(long_1,int_6);

			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
	}
	return short_1;
	short_1 = v_rasqal_new_literal_from_literal(long_1);

}
double v_rasqal_expression_evaluate_ceil( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	char_1 = char_1 + char_1;
	double_1 = double_1 + double_2;
	v_rasqal_free_literal();

	double_1 = double_3;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_2;
	}
	if(1)
	{
		double_2 = double_3;
	}
	double_3 = double_1 + double_2;
	int_3 = v_rasqal_literal_is_numeric(char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_rasqal_expression_evaluate2(short_2,short_1,int_2,-1 );

	double_4 = double_4 + double_4;
	if(1)
	{
		short_2 = short_3 + short_1;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return double_2;
	short_3 = v_rasqal_literal_ceil(char_1,int_3);

}
int v_rasqal_xsd_decimal_round( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int_1 = int_1 * int_1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_rasqal_xsd_decimal_clear_string(float_1);

	int_3 = int_2 * int_2;
	if(1)
	{
		double_3 = double_3;
	}
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	double_5 = double_4 * double_3;
	int_3 = int_2 + int_3;
	long_2 = long_2 * long_2;
	float_2 = float_2 + float_3;
	float_2 = float_1 * float_4;
	unsigned_int_2 = unsigned_int_2;
	return int_2;
}
unsigned int v_rasqal_literal_round( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = v_rasqal_literal_is_numeric(char_1);

	v_rasqal_new_numeric_literal(long_1,unsigned_int_1,double_1);

	char_1 = char_1 * char_1;
	double_1 = v_rasqal_literal_as_double(long_1,int_2);

	double_2 = double_3;
	double_1 = double_3 * double_2;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	short_1 = v_rasqal_new_literal_from_literal(long_1);

	char_2 = char_3;
	int_1 = int_3 * int_3;
	double_3 = double_2;
	double_1 = v_rasqal_new_decimal_literal_from_decimal(long_1,char_3,float_1);

	float_1 = float_1 * float_1;
	if(1)
	{
		int_3 = int_1;
	}
	int_4 = int_3 + int_2;
	int_2 = int_5 * int_6;
	double_3 = double_2 * double_1;
	int_3 = int_5;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		int_7 = v_rasqal_new_xsd_decimal(float_2);

		int_4 = v_rasqal_xsd_decimal_round(float_3,char_1);

		char_3 = char_4 + char_3;
		v_rasqal_free_xsd_decimal(long_2);

		char_2 = char_5 * char_4;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	double_1 = double_2;
	double_2 = double_1 * double_3;
	double_1 = double_1 * double_1;
	if(1)
	{
		if(1)
		{
			int_6 = int_4 + int_1;
		}
	}
	return unsigned_int_3;
}
long v_rasqal_expression_evaluate_round( int parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	double_2 = double_1 * double_1;
	int_1 = v_rasqal_literal_is_numeric(char_1);

	unsigned_int_1 = unsigned_int_2;
	short_1 = v_rasqal_expression_evaluate2(short_1,short_1,int_2,-1 );

	long_1 = long_1 * long_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_2 * double_3;
	}
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	v_rasqal_free_literal();

	double_5 = double_5 + double_6;
	short_2 = short_1 + short_1;
	double_2 = double_5 * double_6;
	if(1)
	{
		short_3 = short_4;
	}
	if(1)
	{
		short_4 = short_3 * short_3;
	}
	if(1)
	{
		int int_4 = 1;
		unsigned_int_2 = v_rasqal_literal_round(unsigned_int_1,int_3);

		int_2 = int_3 * int_4;
	}
	return long_2;
}
int v_rasqal_xsd_decimal_abs( double parameter_1,char parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float_1 = float_1;
	double_1 = double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		v_rasqal_xsd_decimal_clear_string(float_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_2 = int_1 + int_1;
	float_2 = float_3 + float_1;
	return int_1;
}
float v_rasqal_literal_abs( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	double double_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	char_1 = char_1;
	char_1 = char_2 * char_3;
	char_3 = char_2 * char_1;
	int_2 = int_1 * int_2;
	v_rasqal_free_xsd_decimal(long_1);

	short_2 = short_1 * short_1;
	if(1)
	{
	}
	v_rasqal_new_numeric_literal(long_1,unsigned_int_1,double_1);

	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int_1 = v_rasqal_literal_is_numeric(char_4);

		int_2 = int_2;
	}
	int_1 = int_3 * int_1;
	float_2 = float_1 * float_2;
	int_1 = v_rasqal_literal_as_integer(int_3,int_1);

	int_3 = int_2 * int_1;
	short_4 = short_3 + short_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double_2 = v_rasqal_literal_as_double(long_1,int_4);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	int_3 = int_2 * int_4;
	int_6 = int_5 + int_2;
	double_3 = double_3 * double_2;
	float_3 = float_2 * float_1;
	if(1)
	{
		double_1 = v_rasqal_new_decimal_literal_from_decimal(long_1,char_1,float_1);

		char_2 = char_2 * char_1;
		int_6 = v_rasqal_new_xsd_decimal(float_4);

		int_3 = int_6 + int_2;
	}
	if(1)
	{
		char_1 = v_rasqal_new_integer_literal(int_1,char_5,int_5);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	float_4 = float_2;
	float_5 = float_2 * float_1;
	int_4 = v_rasqal_xsd_decimal_abs(double_4,char_1);

	char_2 = char_6 + char_7;
	if(1)
	{
		if(1)
		{
			double double_5 = 1;
			double_5 = double_3 + double_3;
		}
	}
	return float_2;
}
int v_rasqal_expression_evaluate_abs( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	char char_6 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = v_rasqal_literal_abs(short_1,int_1);

	char_3 = char_1 + char_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		v_rasqal_free_literal();

		short_1 = short_1 + short_1;
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		char_5 = char_4 + char_2;
	}
	double_1 = double_1 + double_2;
	double_3 = double_3 * double_4;
	double_5 = double_5 + double_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		int_2 = v_rasqal_literal_is_numeric(char_6);

		float_3 = float_2 + float_1;
	}
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	return int_3;
	short_3 = v_rasqal_expression_evaluate2(short_2,short_2,int_1,-1 );

}
short v_rasqal_regex_replace( short parameter_1,double parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5,int parameter_6,int parameter_7,char parameter_8,float parameter_9)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	float float_4 = 1;
	double double_5 = 1;
	float float_6 = 1;
	double double_6 = 1;
	int int_4 = 1;
	float_2 = float_1 + float_2;
	v_rasqal_log_error_simple(short_1,short_1,unsigned_int_1,char_1,double_1);

	double_2 = double_2 * double_3;
	int_1 = int_1 * int_1;
	int_3 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	float_3 = float_2 * float_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	long_2 = long_1 + long_1;
	int_2 = int_1 + int_2;
	double_2 = double_2 * double_4;
	short_1 = short_2 + short_1;
	char_2 = char_2;
	int_3 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_4 = long_1 * long_3;
		}
	}
	short_1 = short_1 * short_2;
	if(1)
	{
		double_1 = double_3 * double_4;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	}
	v_rasqal_log_warning_simple(char_2,double_2,unsigned_int_5,short_1,long_1);

	char_2 = char_1 * char_1;
	long_2 = long_5 + long_5;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	int_2 = int_3;
	long_3 = long_1 + long_4;
	float_3 = float_4 + float_3;
	double_5 = double_2 + double_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			float float_5 = 1;
			float_6 = float_1 + float_5;
		}
	}
	double_5 = double_2 * double_3;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		float_1 = float_1;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_2 + short_3;
		float_6 = float_6 * float_1;
	}
	double_6 = double_5 * double_2;
	int_4 = int_1 + int_1;
	return short_1;
}
float v_rasqal_expression_evaluate_replace( char parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_6 = 1;
	char char_7 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_8 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	float float_6 = 1;
	int_1 = int_1 + int_2;
	short_3 = short_1 * short_2;
	char_2 = char_1 * char_1;
	double_1 = double_1 * double_1;
	long_1 = long_1 + long_1;
	short_2 = short_3 + short_1;
	double_2 = double_1 * double_2;
	double_3 = double_3 * double_3;
	double_3 = double_4;
	int_3 = v_rasqal_literal_as_counted_string(int_1,unsigned_int_1,int_1,int_4);

	int_3 = int_1 + int_4;
	short_3 = short_1 * short_2;
	long_2 = long_1 + long_2;
	double_3 = v_rasqal_new_string_literal(int_3,char_1,int_3,char_3,long_2,-1 );

	int_1 = int_3;
	char_3 = char_3 + char_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		double_2 = double_5 * double_1;
	}
	char_6 = char_3 + char_5;
	int_4 = int_4 + int_3;
	if(1)
	{
		int_3 = int_2 * int_4;
	}
	short_4 = v_rasqal_regex_replace(short_5,double_6,unsigned_int_2,char_7,int_2,int_4,int_2,char_3,float_1);

	int_5 = int_6;
	if(1)
	{
		long_1 = long_2;
	}
	char_1 = char_5 * char_4;
	double_2 = double_7 + double_7;
	if(1)
	{
		double_6 = double_8 * double_9;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_2 * long_3;
	}
	float_3 = float_1 * float_2;
	double_4 = double_5 * double_9;
	if(1)
	{
		int int_7 = 1;
		int_6 = int_5 + int_7;
	}
	if(1)
	{
		float_4 = float_3 * float_3;
		if(1)
		{
			int int_9 = 1;
			int_5 = int_8 * int_9;
		}
		short_3 = short_5 + short_1;
	}
	char_5 = char_6 + char_6;
	float_4 = float_1 + float_5;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	short_2 = short_5 + short_6;
	int_2 = int_8 * int_2;
	short_6 = v_rasqal_expression_evaluate2(short_5,short_1,int_5,-1 );

	float_4 = float_5 * float_4;
	short_2 = short_7 * short_7;
	float_3 = float_6 * float_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		double_3 = double_9;
	}
	if(1)
	{
		short_3 = short_3 + short_6;
	}
	if(1)
	{
		double double_10 = 1;
		double_10 = double_5 * double_4;
	}
	if(1)
	{
		double_8 = double_7;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_5;
	}
	return float_4;
	v_rasqal_free_literal();

}
void v_rasqal_expression_evaluate_strafter( short parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	int int_7 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_2;
	double_1 = double_2;
	int_4 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	int_2 = int_1;
	short_1 = short_1 * short_2;
	int_3 = int_3 + int_2;
	short_3 = short_1 + short_2;
	short_4 = short_2 * short_4;
	int_1 = v_rasqal_literal_print(unsigned_int_4,unsigned_int_1);

	int_5 = int_6;
	if(1)
	{
		unsigned_int_5 = unsigned_int_1 * unsigned_int_3;
	}
	int_5 = v_rasqal_literal_is_string(double_2);

	char_3 = char_1 * char_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	}
	if(1)
	{
		if(1)
		{
			short_2 = v_rasqal_expression_evaluate2(short_4,short_4,int_3,-1 );

			float_1 = float_1 + float_1;
		}
		int_3 = int_7;
		float_1 = float_2;
		float_3 = float_2;
		short_1 = short_5 + short_5;
		v_rasqal_free_literal();

		double_1 = double_1 * double_2;
	}
	if(1)
	{
		long long_4 = 1;
		double double_3 = 1;
		if(1)
		{
			long_3 = long_1 + long_2;
		}
		long_4 = long_3;
		unsigned_int_1 = unsigned_int_5;
		int_6 = int_2;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
		double_3 = double_2 * double_1;
	}
	int_2 = int_4 + int_8;
	char controller_7[2];
	fgets(controller_7 ,2 ,stdin);
	if( strcmp( controller_7, "-") > 0)
	{
		long long_5 = 1;
		int_1 = v_rasqal_literal_string_languages_compare(char_2,unsigned_int_6);

		long_2 = long_5;
	}
	int_2 = int_3 + int_1;
	if(1)
	{
		float_4 = float_2 + float_1;
	}
	char_1 = char_1 + char_2;
	if(1)
	{
		long long_6 = 1;
		long_6 = long_2 * long_3;
		int_7 = v_rasqal_literal_as_counted_string(int_3,unsigned_int_2,int_3,int_4);

		short_4 = short_3;
		if(1)
		{
			short short_6 = 1;
			short_6 = short_6 * short_5;
			int_5 = int_8 + int_1;
			if(1)
			{
				long long_7 = 1;
				double_1 = v_rasqal_new_string_literal(int_6,char_2,int_7,char_2,long_2,-1 );

				long_1 = long_1 + long_7;
			}
			float_3 = float_1 * float_2;
		}
	}
	if(1)
	{
		int_1 = int_5 * int_5;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	}
	float_6 = float_5 * float_2;
	unsigned_int_3 = unsigned_int_7 + unsigned_int_8;
	unsigned_int_4 = unsigned_int_9 + unsigned_int_4;
	char_3 = char_2 + char_2;
	float_2 = float_4 + float_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_7 * unsigned_int_7;
	}
	if(1)
	{
		float_4 = float_4 + float_4;
	}
	double_4 = double_2 + double_1;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_2 * char_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double_4 = double_1 + double_4;
	}
	if(1)
	{
		float_6 = float_1 + float_1;
	}
}
int v_rasqal_literal_is_string( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_1;
	return int_2;
}
float v_rasqal_expression_evaluate_strbefore( short parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_3 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	int int_10 = 1;
	float float_6 = 1;
	double_3 = double_1 * double_2;
	short_1 = v_rasqal_expression_evaluate2(short_1,short_1,int_1,-1 );

	long_2 = long_1 * long_1;
	short_3 = short_2 + short_1;
	int_1 = int_2;
	char_2 = char_1 * char_2;
	int_5 = int_3 * int_4;
	long_2 = long_2 * long_2;
	int_4 = int_6;
	double_2 = double_2 * double_4;
	float_1 = float_1 + float_1;
	float_3 = float_2 * float_1;
	double_4 = double_2 * double_1;
	if(1)
	{
		int_4 = v_rasqal_literal_string_languages_compare(char_1,unsigned_int_1);

		int_3 = int_6 * int_5;
	}
	char_3 = char_3 * char_3;
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	if(1)
	{
		float float_4 = 1;
		if(1)
		{
			int_2 = int_1 * int_5;
		}
		float_4 = float_1 + float_3;
		short_1 = short_4 + short_4;
		double_4 = double_3 * double_4;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		int_5 = int_5 + int_6;
	}
	if(1)
	{
		if(1)
		{
			short_4 = short_4 + short_2;
		}
		int_7 = int_1 * int_2;
		float_1 = float_1 + float_2;
		int_6 = int_8 * int_7;
		double_3 = v_rasqal_new_string_literal(int_8,char_3,int_8,char_3,long_3,-1 );

		unsigned_int_2 = unsigned_int_2;
		double_2 = double_2;
	}
	int_6 = int_3;
	if(1)
	{
		int_7 = v_rasqal_literal_is_string(double_3);

		int_8 = int_1 + int_5;
	}
	int_7 = int_9 * int_5;
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	int_7 = v_rasqal_literal_as_counted_string(int_6,unsigned_int_3,int_4,int_2);

	float_2 = float_5 + float_2;
	if(1)
	{
		char char_4 = 1;
		int_7 = v_rasqal_literal_print(unsigned_int_3,unsigned_int_1);

		v_rasqal_free_literal();

		char_2 = char_2 + char_4;
		if(1)
		{
			long_3 = long_2 * long_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
			if(1)
			{
				double_1 = double_5 * double_6;
			}
			int_4 = int_7 + int_4;
		}
	}
	if(1)
	{
		double_2 = double_2 * double_5;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	double_5 = double_4 * double_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	int_7 = int_4 * int_1;
	long_1 = long_3 + long_4;
	int_5 = int_3 + int_3;
	if(1)
	{
		double_5 = double_6 + double_2;
	}
	if(1)
	{
		double_4 = double_6 * double_6;
	}
	int_5 = int_7;
	if(1)
	{
		int_2 = int_2 * int_4;
	}
	if(1)
	{
		int_10 = int_7 * int_8;
	}
	if(1)
	{
		int_9 = int_10 + int_4;
	}
	if(1)
	{
		int int_11 = 1;
		int_5 = int_11;
	}
	return float_6;
}
float v_rasqal_expression_evaluate_substr( char parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_7 = 1;
	float_2 = float_1 * float_2;
	double_3 = double_1 + double_2;
	double_4 = double_1 * double_2;
	int_2 = int_1 + int_2;
	float_1 = float_2 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_1 * short_2;
	double_5 = double_2 * double_5;
	double_5 = double_5 * double_6;
	float_2 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
		double_1 = double_4 * double_6;
	}
	float_1 = float_3;
	if(1)
	{
		short_1 = short_1 + short_3;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		short_3 = short_4 + short_5;
	}
	int_2 = v_rasqal_literal_as_integer(int_3,int_1);

	int_2 = int_2 + int_4;
	if(1)
	{
		v_rasqal_free_literal();

		unsigned_int_4 = unsigned_int_2;
	}
	if(1)
	{
		int_6 = int_4 + int_5;
		if(1)
		{
			float_3 = float_1 + float_3;
		}
		double_3 = double_4 * double_4;
		if(1)
		{
			int_2 = v_rasqal_literal_as_counted_string(int_5,unsigned_int_4,int_5,int_6);

			int_6 = int_5 + int_1;
		}
	}
	double_6 = double_7 + double_7;
	if(1)
	{
		short_5 = v_rasqal_expression_evaluate2(short_3,short_5,int_1,-1 );

		unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
	}
	if(1)
	{
		double_2 = double_6;
	}
	if(1)
	{
		short short_6 = 1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
		float_2 = float_3 + float_1;
		if(1)
		{
			short_2 = short_3 * short_4;
		}
		double_2 = v_rasqal_new_string_literal(int_4,char_1,int_3,char_2,long_1,-1 );

		short_4 = short_6 + short_5;
	}
	int_2 = int_1 * int_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	unsigned_int_4 = unsigned_int_6;
	int_7 = int_7 * int_5;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	if(1)
	{
		double double_8 = 1;
		double_7 = double_8 * double_2;
	}
	if(1)
	{
		double double_9 = 1;
		double_3 = double_9;
	}
	if(1)
	{
		int_4 = int_4;
	}
	return float_1;
}
float v_rasqal_expression_evaluate_encode_for_uri( short parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_7 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = v_rasqal_new_string_literal(int_1,char_1,int_1,char_2,long_1,-1 );

	int_2 = int_1 + int_2;
	int_1 = int_3 + int_2;
	int_5 = int_3 + int_4;
	short_1 = v_rasqal_xsd_datatype_type_to_uri(int_2,long_2);

	char_1 = char_2 + char_1;
	double_1 = double_2 + double_1;
	v_rasqal_free_literal();

	char_3 = char_2;
	double_2 = double_1;
	int_5 = v_rasqal_literal_as_counted_string(int_2,unsigned_int_1,int_4,int_3);

	double_3 = double_2 + double_3;
	int_1 = int_3 + int_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	char_5 = char_4 + char_2;
	int_1 = int_3 * int_6;
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	float_1 = float_1 * float_2;
	if(1)
	{
		int_5 = int_7 * int_3;
	}
	int_1 = int_7 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		float_3 = float_1;
		if(1)
		{
			int_5 = int_4 + int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_8 = 1;
			double_3 = double_2 + double_1;
			char_3 = char_4;
			unsigned_int_6 = unsigned_int_2 + unsigned_int_1;
			unsigned_int_1 = unsigned_int_4 + unsigned_int_7;
			short_2 = v_rasqal_expression_evaluate2(short_3,short_3,int_6,-1 );

			int_4 = int_2 * int_8;
			char_2 = char_2 + char_3;
		}
	}
	char_7 = char_6 * char_6;
	int_4 = int_6 * int_4;
	if(1)
	{
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		long long_4 = 1;
		long_2 = long_4;
	}
	return float_2;
}
int v_rasqal_xsd_datetime_get_tz_as_counted_string( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_2;
	char_1 = v_rasqal_xsd_timezone_format(int_1,char_1,char_1,short_1);

	char_2 = char_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_2 * int_1;
	}
	unsigned_int_1 = unsigned_int_1;
	return int_2;
}
short v_rasqal_expression_evaluate_datetime_tz( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double_3 = double_1 * double_2;
	short_1 = v_rasqal_expression_evaluate2(short_1,short_2,int_1,-1 );

	double_3 = v_rasqal_new_string_literal(int_2,char_1,int_1,char_1,long_1,-1 );

	int_4 = int_3 + int_3;
	int_3 = int_5 + int_6;
	int_7 = v_rasqal_xsd_datetime_get_tz_as_counted_string(long_2,double_1);

	short_1 = short_2 * short_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double_4 = double_4 + double_2;
	}
	double_3 = double_2 * double_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		v_rasqal_free_literal();

		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	int_6 = int_4;
	if(1)
	{
		int int_8 = 1;
		int_8 = int_2 + int_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2;
	}
	return short_2;
}
char v_rasqal_xsd_datetime_get_timezone_as_counted_string( float parameter_1,long parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return char_2;
}
unsigned int v_rasqal_expression_evaluate_datetime_timezone( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	long long_5 = 1;
	char char_4 = 1;
	float float_1 = 1;
	short_1 = short_2;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	long_2 = long_1 * long_1;
	if(1)
	{
		long_2 = long_2 * long_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	short_2 = v_rasqal_expression_evaluate2(short_3,short_3,int_1,-1 );

	double_3 = double_2 * double_3;
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	double_1 = v_rasqal_new_string_literal(int_2,char_1,int_1,char_2,long_3,-1 );

	long_1 = long_4 * long_1;
	if(1)
	{
		char_2 = char_3 * char_2;
	}
	char_3 = char_1;
	if(1)
	{
		long_2 = long_5 + long_5;
	}
	if(1)
	{
		short short_4 = 1;
		short_2 = short_4 * short_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		char_4 = v_rasqal_xsd_datetime_get_timezone_as_counted_string(float_1,long_5);

		v_rasqal_free_literal();

		int_4 = int_3 + int_3;
	}
	return unsigned_int_2;
}
short v_rasqal_literals_sparql11_compatible( short parameter_1,float parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short_1 = v_rasqal_xsd_datatype_type_to_uri(int_1,long_1);

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	long_3 = long_2 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	double_2 = double_4 + double_1;
	long_4 = long_4 * long_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	short_2 = short_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
	}
	double_1 = double_2;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2 * int_2;
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
	return short_3;
}
short v_rasqal_expression_evaluate_str_prefix_suffix( double parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_1 = v_rasqal_expression_evaluate2(short_2,short_1,int_1,-1 );

	short_2 = v_rasqal_literals_sparql11_compatible(short_3,float_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	int_1 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	short_4 = short_4;
	short_2 = short_3 * short_4;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	double_1 = double_1 * double_1;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	int_1 = int_3 + int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		int_5 = int_1 + int_4;
	}
	int_7 = int_6 + int_5;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		unsigned_int_2 = v_rasqal_new_boolean_literal(unsigned_int_3,int_8);

		float_3 = float_2 + float_1;
	}
	int_9 = v_rasqal_literal_as_counted_string(int_8,unsigned_int_1,int_7,int_6);

	int_4 = int_1;
	if(1)
	{
		int_9 = int_4;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_1 * double_3;
	}
	if(1)
	{
		if(1)
		{
			double double_5 = 1;
			double_1 = double_5;
		}
		if(1)
		{
			double_1 = double_1 + double_2;
		}
		if(1)
		{
			v_rasqal_free_literal();

			int_1 = int_6;
		}
	}
	int_10 = int_5 * int_4;
	short_3 = short_2 * short_2;
	if(1)
	{
		double double_6 = 1;
		double double_7 = 1;
		double_7 = double_6 * double_6;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	}
	return short_2;
}
unsigned int v_rasqal_expression_evaluate_set_case( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_7 = 1;
	int int_8 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	v_rasqal_free_literal();

	double_2 = double_1 * double_2;
	int_1 = int_1;
	int_4 = int_2 * int_3;
	float_2 = float_1 * float_1;
	int_4 = int_3 * int_1;
	int_5 = int_6;
	int_2 = int_1 * int_6;
	double_3 = double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_5 = double_4 * double_2;
	if(1)
	{
		int_3 = int_4 + int_7;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_5 = int_5 + int_6;
			if(1)
			{
				float_2 = float_2 + float_1;
			}
			int_5 = int_7 + int_6;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_2 = v_rasqal_new_string_literal(int_3,char_2,int_2,char_3,long_1,-1 );

			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			if(1)
			{
				short_2 = short_1 * short_1;
			}
			int_5 = int_7;
		}
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		double double_6 = 1;
		unsigned int unsigned_int_4 = 1;
		double_6 = double_4 * double_5;
		double_5 = double_6 * double_7;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
		unsigned_int_4 = unsigned_int_4;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		char char_4 = 1;
		char_3 = char_2 + char_4;
	}
	double_7 = double_2 * double_1;
	if(1)
	{
		int_8 = v_rasqal_literal_as_counted_string(int_5,unsigned_int_2,int_2,int_5);

		int_2 = int_4 * int_6;
	}
	if(1)
	{
		double_4 = double_1;
	}
	if(1)
	{
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		double double_8 = 1;
		short_2 = v_rasqal_expression_evaluate2(short_3,short_2,int_2,-1 );

		double_3 = double_8;
	}
	return unsigned_int_5;
}
float v_rasqal_expression_evaluate_strlen( double parameter_1,short parameter_2,int parameter_3)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	float float_1 = 1;
	long_1 = v_rasqal_literal_as_string_flags(char_1,int_1,int_2);

	int_3 = int_1 + int_1;
	v_rasqal_new_numeric_literal_from_long(double_1,int_2,long_1);

	long_1 = long_1;
	v_rasqal_free_literal();

	double_2 = double_2 + double_2;
	int_2 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		int_4 = int_4 * int_3;
	}
	short_1 = short_1 * short_2;
	if(1)
	{
		int_4 = int_3 * int_3;
	}
	if(1)
	{
		int_1 = int_3 * int_4;
	}
	if(1)
	{
		int int_5 = 1;
		int_5 = int_2 * int_5;
	}
	int_4 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short_3 = v_rasqal_expression_evaluate2(short_1,short_1,int_4,-1 );

		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	}
	return float_1;
}
int v_rasqal_random_irand( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_1;
	float_2 = float_1 + float_1;
	long_2 = long_1 + long_1;
	int_2 = int_1 + int_2;
	short_2 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	short_3 = short_3 * short_4;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_4;
	float_2 = float_1 + float_2;
	int_2 = int_3 + int_1;
	float_2 = float_3 + float_4;
	double_1 = double_2 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	double_4 = double_3 + double_3;
	return int_1;
}
double v_rasqal_random_drand( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
	int_1 = v_rasqal_random_irand(short_1);

}
unsigned int v_rasqal_expression_evaluate_rand( double parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = v_rasqal_new_double_literal(int_1,double_1);

	int_2 = int_2 * int_1;
	return unsigned_int_3;
	double_1 = v_rasqal_random_drand(short_1);

}
int v_rasqal_xsd_datetime_set_from_unixtime( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = v_rasqal_xsd_datetime_set_from_timeval(long_1,long_1);

	double_2 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_4;
	return int_1;
}
char v_rasqal_new_xsd_datetime_from_unixtime( int parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long_1 = long_2;
	long_1 = long_1 * long_1;
	v_rasqal_free_xsd_datetime(char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "#") == 0)
	{
	}
	short_2 = short_1 * short_2;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_3 = int_1 * int_2;
		int_4 = v_rasqal_xsd_datetime_set_from_unixtime(long_3,int_1);

		double_3 = double_1 + double_2;
	}
	return char_1;
}
void v_rasqal_expression_evaluate_from_unixtime( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	double double_4 = 1;
	int int_6 = 1;
	char_2 = char_1 + char_1;
	int_1 = int_1;
	char_3 = char_1 * char_3;
	int_1 = int_2 * int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		short short_3 = 1;
		short_1 = v_rasqal_expression_evaluate2(short_1,short_1,int_2,-1 );

		char_3 = v_rasqal_new_xsd_datetime_from_unixtime(int_1,short_2);

		short_2 = short_3 * short_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 * int_3;
	int_4 = v_rasqal_literal_as_integer(int_2,int_5);

	double_1 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	char_2 = char_4 + char_2;
	if(1)
	{
		double double_3 = 1;
		double_4 = double_2 + double_3;
	}
	if(1)
	{
		char_4 = char_4;
	}
	if(1)
	{
		double_4 = double_4 + double_2;
	}
	v_rasqal_free_literal();

	v_rasqal_new_datetime_literal_from_datetime(int_6,short_2);

}
void v_rasqal_new_numeric_literal_from_long( double parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	short short_3 = 1;
	int_1 = v_rasqal_new_xsd_decimal(float_1);

	int_2 = v_rasqal_xsd_decimal_set_long(float_2,long_1);

	double_1 = double_1;
	char_3 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
	}
	long_2 = long_2 + long_2;
	char_1 = v_rasqal_new_integer_literal(int_2,char_2,int_3);

	double_1 = v_rasqal_new_decimal_literal_from_decimal(long_3,char_4,float_3);

	int_3 = int_3 * int_3;
	unsigned_int_2 = v_rasqal_xsd_decimal_as_counted_string(short_3,short_2);

	float_1 = float_1;
}
int v_rasqal_expression_evaluate_to_unixtime( long parameter_1,double parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_5 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long_2 = long_1 + long_2;
	long_4 = long_2 * long_3;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 * double_2;
	}
	short_1 = v_rasqal_expression_evaluate2(short_2,short_2,int_1,-1 );

	v_rasqal_new_numeric_literal_from_long(double_1,int_2,long_5);

	double_4 = double_1 + double_1;
	float_2 = float_1 * float_1;
	long_1 = long_2 + long_5;
	if(1)
	{
		v_rasqal_free_literal();

		int_2 = int_2 * int_2;
	}
	if(1)
	{
		long_5 = long_5 * long_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = float_3;
	}
	return int_2;
	char_1 = v_rasqal_xsd_datetime_get_as_unixtime(long_4,-1 );

}
int v_rasqal_xsd_datetime_set_from_timeval( long parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	int int_1 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
		short_1 = short_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double_3 = double_1 * double_2;
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short_3 = short_3 + short_2;
			float_1 = float_1 + float_1;
			if(1)
			{
			}
			short_1 = short_3 + short_4;
			double_5 = double_4 * double_2;
		}
		long_3 = long_3 * long_1;
		if(1)
		{
			if(1)
			{
			}
			unsigned_int_1 = unsigned_int_1;
		}
		float_1 = float_2;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	long_4 = long_1;
	return int_1;
}
short v_rasqal_new_xsd_datetime_from_timeval( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	v_rasqal_free_xsd_datetime(char_1);

	double_2 = double_1 * double_1;
	int_1 = v_rasqal_xsd_datetime_set_from_timeval(long_1,long_1);

	float_1 = float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		short_1 = short_2;
		float_5 = float_3 * float_4;
	}
	return short_2;
}
long v_rasqal_world_get_now_timeval( int parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return long_1;
}
unsigned int v_rasqal_expression_evaluate_now( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 * double_2;
	double_2 = double_4 + double_5;
	if(1)
	{
		short_1 = v_rasqal_new_xsd_datetime_from_timeval(float_1,float_1);

		short_1 = short_1 + short_1;
	}
	long_1 = v_rasqal_world_get_now_timeval(int_2);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		v_rasqal_new_datetime_literal_from_datetime(int_3,short_1);

		char_3 = char_1 * char_2;
	}
	if(1)
	{
		char_1 = char_1;
	}
	return unsigned_int_2;
}
int v_rasqal_xsd_decimal_set_long( float parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short_1 = short_2;
	int_1 = int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	v_rasqal_xsd_decimal_clear_string(float_1);

	int_2 = int_1 + int_1;
	short_1 = short_1 * short_1;
	return int_1;
}
double v_rasqal_xsd_datetime_get_seconds_as_decimal( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_1 = v_rasqal_xsd_decimal_set_long(float_1,long_1);

		short_3 = short_1 * short_2;
		double_3 = double_4;
		int_1 = v_rasqal_new_xsd_decimal(float_2);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	}
	return double_1;
	int_1 = v_rasqal_xsd_decimal_set_string(short_3,long_1);

}
long v_rasqal_expression_evaluate_datetime_part( long parameter_1,double parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_4 = 1;
	short_1 = short_2;
	long_2 = long_1 * long_1;
	short_1 = v_rasqal_expression_evaluate2(short_2,short_2,int_1,-1 );

	float_1 = float_2;
	double_1 = v_rasqal_new_decimal_literal_from_decimal(long_3,char_1,float_1);

	int_3 = int_1 + int_2;
	if(1)
	{
		v_rasqal_free_xsd_decimal(long_2);

		char_2 = v_rasqal_new_integer_literal(int_4,char_3,int_2);

		char_1 = char_3 * char_3;
	}
	if(1)
	{
		char_3 = char_4 * char_1;
	}
	if(1)
	{
		double double_2 = 1;
		float float_3 = 1;
		int_5 = int_5 + int_5;
		double_3 = double_2 + double_1;
		float_3 = float_3 * float_1;
		double_3 = v_rasqal_xsd_datetime_get_seconds_as_decimal(int_1,int_2);

		short_2 = short_1;
		if(1)
		{
			long_3 = long_3;
			if(1)
			{
				float_2 = float_2 + float_3;
			}
		}
		if(1)
		{
			long_4 = long_2 * long_3;
		}
	}
	if(1)
	{
		int_3 = int_4 * int_5;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_3 = short_3 + short_4;
	}
	if(1)
	{
		long long_5 = 1;
		long_1 = long_5 + long_4;
	}
	if(1)
	{
		double_3 = double_1 * double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_3 * int_6;
	}
	char controller_13[3];
	fgets(controller_13 ,3 ,stdin);
	if( strcmp( controller_13, "dj") < 0)
	{
		v_rasqal_free_literal();

		char_2 = char_4 + char_1;
	}
	long_3 = long_4;
	if(1)
	{
		long long_6 = 1;
		long_6 = long_3 + long_3;
	}
	return long_3;
}
void v_rasqal_expression_evaluate_in_set( float parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int_2 = int_1 * int_1;
	long_2 = long_1 * long_2;
	double_3 = double_1 + double_2;
	double_2 = double_4;
	long_1 = long_1 * long_1;
	float_2 = float_1 + float_1;
	char controller4vul_1755[3];
	fgets(controller4vul_1755 ,3 ,stdin);
	if( strcmp( controller4vul_1755, "+]") > 0)
	{
		int_1 = v_rasqal_literal_equals_flags(int_1,float_1,int_1,int_1,uni_para);

		unsigned_int_1 = unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int_3 = int_2 * int_1;
		char_3 = char_1 * char_2;
		float_3 = float_2 + float_1;
		short_2 = short_1 * short_1;
		if(1)
		{
			int int_4 = 1;
			int_4 = int_2 + int_4;
		}
		float_2 = float_2;
		if(1)
		{
			int int_5 = 1;
			int_5 = int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		}
		unsigned_int_1 = unsigned_int_4;
		if(1)
		{
			long long_3 = 1;
			long_1 = long_2 + long_3;
		}
		if(1)
		{
			short_1 = short_2 * short_1;
		}
	}
	double_5 = double_3 + double_4;
	if(1)
	{
		double_2 = double_3;
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_5 = float_2 * float_4;
	}
	if(1)
	{
		int_2 = int_1 * int_3;
	}
}
float v_rasqal_world_default_generate_bnodeid_handler(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_2 = int_1 + int_1;
	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	}
	int_4 = int_3 * int_2;
	if(1)
	{
		int int_5 = 1;
		int_1 = int_5 + int_4;
	}
	double_2 = double_1 * double_2;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "UQ") > 0)
	{
		float_2 = float_2 + float_1;
	}
	if(1)
	{
		long_2 = long_1 + long_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	if(1)
	{
		long_2 = long_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_3 * float_3;
	}
	return float_2;
}
void v_rasqal_world_generate_bnodeid( short parameter_1,short parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = v_rasqal_world_default_generate_bnodeid_handler(short_1);

}
unsigned int v_rasqal_expression_evaluate_bnode_constructor( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	short_2 = short_1 * short_1;
	int_3 = int_1 + int_2;
	v_rasqal_world_generate_bnodeid(short_2,short_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_2 = int_4 + int_5;
		float_2 = float_1 * float_1;
		long_3 = long_1 * long_2;
		if(1)
		{
			double_1 = double_1 * double_1;
		}
		long_4 = long_4 * long_4;
		if(1)
		{
			int_4 = v_rasqal_literal_as_counted_string(int_5,unsigned_int_4,int_3,int_4);

			short_1 = short_3 + short_3;
		}
		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		if(1)
		{
			float float_3 = 1;
			unsigned_int_5 = v_rasqal_new_simple_literal(unsigned_int_5,long_1,long_3);

			float_3 = float_2 + float_1;
		}
		char_2 = char_1 + char_1;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
	}
	if(1)
	{
		short_1 = short_1;
		if(1)
		{
			double double_2 = 1;
			double_1 = double_2 * double_2;
		}
	}
	if(1)
	{
		v_rasqal_free_literal();

		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	}
	return unsigned_int_6;
	short_1 = v_rasqal_expression_evaluate2(short_3,short_4,int_1,-1 );

}
unsigned int v_rasqal_literal_as_uri()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
float v_rasqal_expression_evaluate_strdt( char parameter_1,unsigned int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	int int_6 = 1;
	char char_3 = 1;
	long long_4 = 1;
	int int_8 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_5 = 1;
	float float_3 = 1;
	char_2 = char_1 + char_1;
	int_1 = v_rasqal_literal_as_counted_string(int_1,unsigned_int_1,int_1,int_1);

	long_3 = long_1 + long_2;
	int_1 = int_2 * int_3;
	int_3 = int_4 * int_5;
	long_2 = long_3 + long_2;
	short_3 = short_1 + short_2;
	short_3 = v_rasqal_expression_evaluate2(short_1,short_1,int_1,-1 );

	float_2 = float_1 * float_2;
	short_4 = short_1 * short_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		short_1 = short_5 + short_1;
	}
	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	char_2 = char_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	int_3 = int_3 + int_6;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
	}
	if(1)
	{
		int int_7 = 1;
		double_1 = v_rasqal_new_string_literal(int_2,char_1,int_5,char_3,long_4,-1 );

		float_2 = float_1 + float_1;
		int_8 = int_7 * int_2;
		if(1)
		{
			short_4 = short_5 * short_3;
		}
		short_5 = short_1;
		if(1)
		{
			int_5 = int_7 + int_2;
		}
	}
	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned_int_2 = v_rasqal_literal_as_uri();

		unsigned_int_1 = unsigned_int_7 + unsigned_int_3;
	}
	double_1 = double_1 + double_2;
	v_rasqal_free_literal();

	char_2 = char_2 * char_1;
	int_2 = int_5;
	if(1)
	{
		unsigned_int_7 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		int int_9 = 1;
		long_5 = v_rasqal_literal_as_string_flags(char_1,int_6,int_5);

		int_9 = int_8 + int_8;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_2 + double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_3 = unsigned_int_8 + unsigned_int_8;
	}
	return float_3;
}
float v_rasqal_expression_evaluate_strlang( short parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_9 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_5 = 1;
	long long_2 = 1;
	int int_10 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	float_2 = float_1 + float_1;
	int_4 = int_2 + int_3;
	int_4 = int_4 + int_5;
	double_2 = double_1 * double_1;
	char_3 = char_3 * char_2;
	float_4 = float_2 * float_3;
	if(1)
	{
		int_6 = int_6;
	}
	if(1)
	{
		char char_4 = 1;
		char_1 = char_3 * char_4;
	}
	int_7 = int_4;
	if(1)
	{
		int_7 = int_5 * int_8;
	}
	short_1 = short_1 * short_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	double_2 = v_rasqal_new_string_literal(int_5,char_1,int_3,char_3,long_1,-1 );

	float_1 = float_5 * float_5;
	if(1)
	{
		short_2 = v_rasqal_expression_evaluate2(short_3,short_4,int_9,-1 );

		int_8 = int_8 + int_8;
	}
	double_3 = double_3 * double_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
	}
	double_4 = double_1 * double_1;
	v_rasqal_free_literal();

	char_5 = char_3;
	if(1)
	{
		long_2 = long_2 * long_2;
	}
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	int_1 = int_4 + int_10;
	float_1 = float_3 * float_3;
	if(1)
	{
		short_3 = short_3 + short_1;
	}
	if(1)
	{
		short_3 = short_4 + short_4;
	}
	if(1)
	{
		int_6 = v_rasqal_literal_as_counted_string(int_8,unsigned_int_1,int_3,int_10);

		long_2 = long_1 + long_2;
	}
	if(1)
	{
		int_3 = int_7 * int_4;
	}
	return float_4;
}
unsigned int v_rasqal_expression_evaluate_uri_constructor( float parameter_1,float parameter_2,int parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	v_rasqal_free_literal();

	long_1 = long_1 * long_1;
	short_1 = v_rasqal_expression_evaluate2(short_2,short_3,int_1,-1 );

	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_3;
	int_2 = int_2;
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		long_2 = v_rasqal_literal_as_string_flags(char_1,int_2,int_2);

		short_5 = short_4 + short_2;
	}
	float_2 = float_1 * float_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 + int_4;
	}
	double_3 = v_rasqal_new_uri_literal(short_3,double_3);

	double_5 = double_2 * double_4;
	double_5 = double_2 + double_6;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		long_2 = long_2 * long_2;
	}
	return unsigned_int_1;
}
long v_rasqal_expression_evaluate_if( float parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		v_rasqal_free_literal();

		short_1 = short_1;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	short_3 = short_1 + short_2;
	if(1)
	{
		short short_5 = 1;
		short_5 = short_3 * short_4;
	}
	int_1 = v_rasqal_literal_as_boolean(unsigned_int_1,int_2);

	float_3 = float_1 + float_2;
	if(1)
	{
		short_4 = v_rasqal_expression_evaluate2(short_4,short_2,int_3,-1 );

		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	return long_1;
}
short v_rasqal_expression_evaluate_coalesce( char parameter_1,long parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
		double_1 = double_2;
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			double double_3 = 1;
			int_2 = int_2 * int_1;
			long_4 = long_3 + long_4;
			short_1 = v_rasqal_expression_evaluate2(short_2,short_2,int_3,-1 );

			double_3 = double_1;
			if(1)
			{
			}
		}
	}
	return short_1;
}
double v_rasqal_expression_evaluate_concat( long parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_3 = 1;
	long long_5 = 1;
	short short_4 = 1;
	int int_6 = 1;
	double double_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_7 = 1;
	int int_9 = 1;
	short_2 = short_1 * short_2;
	int_3 = int_1 + int_2;
	int_2 = v_rasqal_literal_print(unsigned_int_1,unsigned_int_2);

	int_4 = int_4;
	double_2 = double_1 + double_1;
	long_3 = long_1 + long_2;
	double_3 = double_1 + double_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	unsigned_int_2 = unsigned_int_1;
	short_1 = v_rasqal_xsd_datatype_type_to_uri(int_3,long_4);

	int_1 = int_2 * int_1;
	char_2 = char_1 + char_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_5 = 1;
		double double_5 = 1;
		int_1 = int_3 + int_1;
		float_2 = float_2;
		float_1 = float_2 + float_1;
		char_1 = char_1 + char_1;
		if(1)
		{
			double_1 = double_3 + double_3;
		}
		short_1 = short_2 * short_2;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					float_4 = float_1 * float_3;
				}
			}
			v_rasqal_free_literal();

			unsigned_int_7 = unsigned_int_6 + unsigned_int_4;
			int_3 = int_3 + int_4;
		}
		if(1)
		{
			int_2 = int_3 + int_3;
		}
		if(1)
		{
			char_1 = char_1 + char_3;
		}
		int_2 = int_1 * int_2;
		int_2 = int_4;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					double_2 = double_1 * double_2;
				}
				if(1)
				{
					if(1)
					{
						int_3 = int_4 + int_5;
						long_4 = long_3 + long_2;
					}
					double_3 = double_3 * double_4;
				}
				if(1)
				{
					short_3 = short_2 * short_3;
				}
			}
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					double_3 = double_4 + double_1;
					unsigned_int_3 = unsigned_int_6;
					if(1)
					{
						long_5 = long_1 + long_4;
					}
					short_1 = short_4 * short_3;
					int_5 = int_2 + int_6;
				}
				if(1)
				{
					if(1)
					{
						double_2 = double_2 + double_3;
					}
					if(1)
					{
						double_1 = double_1 * double_1;
						unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
						char_3 = char_1 * char_2;
					}
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
				}
			}
			if(1)
			{
				if(1)
				{
					float_2 = float_5;
					double_4 = double_2 * double_5;
				}
				float_5 = float_4 * float_1;
			}
		}
		short_2 = short_4 + short_3;
		double_3 = double_3 * double_5;
		if(1)
		{
			double_6 = v_rasqal_new_string_literal(int_2,char_4,int_5,char_1,long_1,-1 );

			char_1 = char_2 + char_2;
		}
		float_3 = float_2 + float_5;
	}
	char_3 = char_5 + char_5;
	char_1 = char_3 * char_1;
	if(1)
	{
		long_1 = long_5 * long_5;
	}
	if(1)
	{
		int int_7 = 1;
		int int_8 = 1;
		int_4 = int_7 + int_8;
	}
	int_5 = int_4 * int_6;
	if(1)
	{
		double double_8 = 1;
		double_8 = double_7 + double_2;
	}
	int_1 = int_6;
	if(1)
	{
		int_2 = int_6 + int_9;
	}
	double_1 = double_7;
	double_6 = double_2 * double_3;
	if(1)
	{
		long_5 = v_rasqal_literal_as_string_flags(char_2,int_5,int_4);

		unsigned_int_7 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_4 = int_3 + int_3;
	}
	if(1)
	{
		short_3 = v_rasqal_expression_evaluate2(short_3,short_4,int_9,-1 );

		int_1 = int_5 + int_6;
	}
	if(1)
	{
		int int_10 = 1;
		int_10 = int_9 * int_4;
	}
	return double_4;
}
int v_rasqal_literal_same_term( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = v_rasqal_literal_get_rdf_term_type(float_1);

	char_1 = v_rasqal_literal_uri_equals(short_1,long_2);

	char_1 = v_rasqal_literal_blank_equals(float_2,float_3);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	long_1 = long_3;
	int_1 = int_2;
	int_1 = v_rasqal_literal_string_equals_flags(double_1,int_2,int_3,int_2);

	char_1 = char_1 + char_2;
	int_3 = int_1 + int_1;
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
	return int_1;
}
void v_rasqal_expression_evaluate_sameterm( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float_1 = float_1;
	int_1 = int_1 * int_1;
	int_2 = v_rasqal_literal_same_term(unsigned_int_1,float_1);

	unsigned_int_1 = v_rasqal_new_boolean_literal(unsigned_int_2,int_3);

	char_2 = char_1 * char_2;
	short_1 = v_rasqal_expression_evaluate2(short_2,short_3,int_4,-1 );

	int_5 = int_2 + int_1;
	short_1 = short_1 + short_1;
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	long_3 = long_1 * long_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "3Z") < 0)
	{
		double_2 = double_3 * double_1;
	}
	long_2 = long_4 * long_2;
	float_1 = float_2 * float_3;
	v_rasqal_free_literal();

	float_5 = float_4 * float_4;
	char_1 = char_1 * char_1;
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4;
	}
	if(1)
	{
		int_2 = int_5 * int_5;
	}
}
int v_rasqal_literal_cast( float parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	int int_5 = 1;
	short short_2 = 1;
	float float_4 = 1;
	short short_5 = 1;
	double double_4 = 1;
	short short_6 = 1;
	long long_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long_2 = long_1 + long_2;
	double_1 = double_1;
	double_1 = double_2 + double_1;
	int_1 = int_2;
	long_3 = long_3 + long_1;
	float_1 = float_1 * float_2;
	float_1 = float_2;
	double_1 = v_rasqal_new_string_literal(int_1,char_1,int_1,char_2,long_2,-1 );

	char_1 = char_2 + char_3;
	double_1 = double_3 * double_2;
	if(1)
	{
	}
	float_3 = float_3;
	long_3 = long_3 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		int int_3 = 1;
		short short_3 = 1;
		long_3 = long_4 + long_3;
		short_1 = v_rasqal_new_literal_from_literal(long_4);

		float_2 = float_3 * float_1;
		int_2 = int_2 * int_3;
		long_1 = long_1 * long_4;
		if(1)
		{
			int int_4 = 1;
			int_1 = int_4 * int_5;
			if(1)
			{
				short short_4 = 1;
				short_4 = short_2 * short_3;
			}
			float_3 = float_2 + float_4;
		}
		int_2 = int_2;
		short_5 = short_3 * short_2;
		int_2 = int_3 * int_1;
		int_1 = int_5 * int_1;
		long_4 = long_1 * long_3;
		double_4 = double_4 * double_3;
		short_2 = short_6 + short_3;
		short_5 = short_3 + short_5;
		char_2 = char_3;
		if(1)
		{
			long_5 = long_3 + long_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
			int_6 = int_5 + int_2;
		}
		double_3 = double_3 + double_4;
		if(1)
		{
			double_4 = double_4 * double_3;
			if(1)
			{
				char char_4 = 1;
				char_4 = char_4 * char_3;
			}
		}
		unsigned_int_3 = unsigned_int_1;
		double_3 = double_3 + double_3;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
		if(1)
		{
			if(1)
			{
				int_8 = int_7 * int_1;
				if(1)
				{
					unsigned_int_5 = unsigned_int_6;
				}
			}
		}
		if(1)
		{
		}
	}
	float_5 = v_rasqal_xsd_datatype_uri_to_type(float_3,unsigned_int_3);

	int_1 = int_5 * int_8;
	if(1)
	{
		if(1)
		{
			short_6 = v_rasqal_literal_value();

			double_3 = v_rasqal_xsd_datatype_label(int_2);

			unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
		}
		int_7 = v_rasqal_xsd_datatype_check(float_2,long_5,int_6);

		double_1 = double_2 * double_2;
	}
	int_5 = int_7 + int_6;
	if(1)
	{
		if(1)
		{
			double double_5 = 1;
			double_1 = double_2 + double_5;
		}
	}
	short_5 = short_2;
	float_6 = float_6 + float_4;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
	if(1)
	{
		if(1)
		{
			double double_6 = 1;
			double_3 = double_6 * double_4;
		}
	}
	return int_5;
}
int v_rasqal_regex_match( int parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5,float parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_7 = 1;
	char_2 = char_1 + char_1;
	char_3 = char_2 * char_2;
	float_3 = float_1 * float_2;
	float_4 = float_4 * float_5;
	short_1 = short_1 + short_2;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_1;
	int_1 = int_2 + int_1;
	int_1 = int_1;
	long_2 = long_1 + long_1;
	double_1 = double_2 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float_5 = float_5 + float_2;
		}
	}
	if(1)
	{
		long_2 = long_2;
	}
	int_4 = int_3 * int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		v_rasqal_log_error_simple(short_1,short_3,unsigned_int_2,char_1,double_1);

		char_2 = char_2 + char_3;
	}
	if(1)
	{
		int_1 = int_4;
		if(1)
		{
			float_2 = float_5 + float_2;
		}
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			short_5 = short_4 * short_4;
			int_4 = int_3 * int_5;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
	}
	double_2 = double_2 * double_3;
	if(1)
	{
		v_rasqal_log_warning_simple(char_2,double_3,unsigned_int_1,short_1,long_3);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	if(1)
	{
		long long_4 = 1;
		long_2 = long_2 * long_4;
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		long long_6 = 1;
		long_6 = long_5 * long_3;
		if(1)
		{
			int_2 = int_2 * int_6;
		}
		if(1)
		{
			int int_7 = 1;
			int_2 = int_5 + int_5;
			int_7 = int_4 * int_4;
		}
		if(1)
		{
			char_1 = char_2 * char_2;
		}
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	long_5 = long_7;
	float_1 = float_1 * float_4;
	return int_6;
}
unsigned int v_rasqal_expression_evaluate_strmatch( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double_1 = double_2;
	double_2 = double_1;
	short_1 = short_1;
	double_2 = double_3 * double_3;
	int_1 = int_1 * int_1;
	char_1 = char_1 + char_1;
	double_2 = double_2 * double_1;
	int_2 = int_2 * int_2;
	double_1 = double_1 + double_1;
	short_1 = short_2;
	if(1)
	{
		float_2 = float_1 * float_1;
	}
	char_1 = char_2;
	float_3 = float_3 + float_2;
	if(1)
	{
		v_rasqal_free_literal();

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_5 = int_3 + int_4;
	}
	float_2 = float_1;
	short_2 = v_rasqal_expression_evaluate2(short_1,short_2,int_1,-1 );

	int_1 = int_5;
	if(1)
	{
		char_1 = char_1 + char_2;
		if(1)
		{
			unsigned_int_3 = v_rasqal_new_boolean_literal(unsigned_int_2,int_6);

			unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
			int_3 = int_2 * int_4;
		}
		if(1)
		{
			float_4 = float_1 + float_2;
			if(1)
			{
				char char_3 = 1;
				char char_4 = 1;
				char_3 = char_3 + char_4;
				unsigned_int_2 = unsigned_int_2;
				unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
			}
			long_1 = long_1 + long_1;
		}
	}
	if(1)
	{
		int_3 = int_7 * int_6;
		int_7 = v_rasqal_regex_match(int_5,long_1,int_4,unsigned_int_1,int_6,float_3);

		unsigned_int_4 = unsigned_int_6;
	}
	long_2 = long_3;
	float_3 = float_4 + float_4;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		int int_8 = 1;
		int_4 = int_8 + int_8;
	}
	long_3 = long_2;
	if(1)
	{
		double_3 = double_2;
		if(1)
		{
			long_3 = long_3 + long_2;
		}
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_3 * unsigned_int_7;
	}
	long_1 = long_3 * long_3;
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_2 + unsigned_int_7;
	}
	return unsigned_int_8;
	int_5 = v_rasqal_literal_as_counted_string(int_5,unsigned_int_8,int_1,int_6);

}
int v_rasqal_xsd_decimal_is_zero( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float_3 = float_1 + float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	int_1 = int_1 + int_1;
	double_1 = double_1 * double_1;
	return int_1;
}
int v_rasqal_xsd_decimal_divide( double parameter_1,short parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	int_2 = v_rasqal_xsd_decimal_is_zero(double_1);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	return int_3;
	v_rasqal_xsd_decimal_clear_string(float_1);

}
unsigned int v_rasqal_literal_divide( long parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	double double_5 = 1;
	long long_3 = 1;
	double double_6 = 1;
	long long_4 = 1;
	char char_3 = 1;
	float float_2 = 1;
	int int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_7 = 1;
	double_1 = double_1 * double_2;
	v_rasqal_new_numeric_literal(long_1,unsigned_int_1,double_2);

	float_1 = float_1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_2 + int_3;
	double_2 = double_2 * double_3;
	char_2 = char_1 + char_1;
	double_1 = double_1 * double_3;
	double_1 = v_rasqal_new_literal_from_promotion(double_2,double_4,int_5,-1 );

	long_2 = long_2 * long_2;
	int_2 = v_rasqal_new_xsd_decimal(float_1);

	double_5 = v_rasqal_new_decimal_literal_from_decimal(long_3,char_2,float_1);

	double_6 = double_3 * double_5;
	double_6 = v_rasqal_literal_as_double(long_4,int_2);

	char_3 = char_1 * char_3;
	float_1 = float_1 * float_2;
	if(1)
	{
		v_rasqal_free_xsd_decimal(long_1);

		long_3 = long_2 * long_1;
	}
	if(1)
	{
		int_5 = v_rasqal_literal_promote_numerics(float_1,double_3,int_2);

		double_1 = double_4 + double_2;
	}
	int_1 = int_6 * int_1;
	if(1)
	{
		int_1 = int_4 + int_2;
	}
	char_2 = char_3;
	double_1 = double_3 * double_3;
	v_rasqal_free_literal();

	double_8 = double_1 + double_7;
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		char_1 = char_4 + char_1;
		if(1)
		{
			float float_3 = 1;
			long_1 = long_2 + long_4;
			float_3 = float_2 + float_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		}
	}
	int_5 = v_rasqal_xsd_decimal_divide(double_7,short_1,double_4);

	short_2 = short_2 * short_2;
	char_4 = char_1;
	int_7 = int_5 + int_2;
	if(1)
	{
		if(1)
		{
			long_3 = long_3 * long_4;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	}
	return unsigned_int_3;
}
int v_rasqal_xsd_decimal_multiply( int parameter_1,short parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		v_rasqal_xsd_decimal_clear_string(float_1);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	double_1 = double_1 + double_2;
	double_3 = double_4;
	return int_1;
}
void v_rasqal_literal_multiply( double parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	char char_5 = 1;
	float float_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_1 = double_1 * double_1;
	char_2 = char_1 * char_2;
	char_2 = v_rasqal_new_integer_literal(int_1,char_2,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 * double_2;
	int_1 = int_2 + int_3;
	double_3 = double_2 * double_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	float_1 = float_1 + float_1;
	double_1 = v_rasqal_literal_as_double(long_1,int_2);

	int_4 = int_2 + int_2;
	double_4 = double_2 + double_4;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	double_5 = double_5 * double_5;
	double_5 = double_6 + double_4;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	char_4 = char_1 * char_3;
	if(1)
	{
		int_1 = int_1;
	}
	v_rasqal_free_literal();

	int_4 = int_3;
	v_rasqal_free_xsd_decimal(long_2);

	short_3 = short_1 + short_2;
	int_5 = int_1 * int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	if(1)
	{
		int_4 = v_rasqal_literal_as_integer(int_2,int_4);

		int_2 = v_rasqal_xsd_decimal_multiply(int_1,short_1,float_2);

		int_1 = int_2 + int_1;
	}
	int_3 = int_1 * int_1;
	int_3 = int_2 * int_2;
	double_2 = v_rasqal_new_decimal_literal_from_decimal(long_1,char_5,float_3);

	int_6 = int_1 * int_6;
	if(1)
	{
		unsigned_int_5 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
		if(1)
		{
			int_7 = v_rasqal_literal_promote_numerics(float_2,double_6,int_1);

			v_rasqal_new_numeric_literal(long_2,unsigned_int_2,double_3);

			double_3 = double_6 + double_5;
			float_1 = float_2;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			double_3 = v_rasqal_new_literal_from_promotion(double_5,double_4,int_1,-1 );

			unsigned_int_3 = unsigned_int_2 + unsigned_int_6;
		}
	}
	long_4 = long_2 + long_3;
	long_4 = long_1 + long_4;
	int_3 = int_2 * int_5;
	if(1)
	{
		if(1)
		{
			double_2 = double_3 * double_6;
		}
	}
	if(1)
	{
		double double_7 = 1;
		int_3 = v_rasqal_new_xsd_decimal(float_2);

		double_6 = double_3 + double_7;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
}
int v_rasqal_xsd_decimal_subtract( float parameter_1,char parameter_2,short parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_2;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_2 * int_1;
	}
	double_4 = double_3 + double_2;
	short_2 = short_1 + short_2;
	return int_3;
	v_rasqal_xsd_decimal_clear_string(float_1);

}
void v_rasqal_literal_subtract( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_5 = 1;
	short short_2 = 1;
	long long_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_7 = 1;
	long_2 = long_1 * long_1;
	int_1 = int_1;
	float_2 = float_1 + float_1;
	char_1 = v_rasqal_new_integer_literal(int_2,char_2,int_1);

	double_1 = double_1 + double_1;
	double_1 = v_rasqal_new_literal_from_promotion(double_1,double_1,int_3,-1 );

	float_3 = float_1 + float_1;
	int_3 = v_rasqal_literal_as_integer(int_1,int_1);

	int_2 = int_3 * int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_3 * float_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_2 = long_1 + long_1;
	double_1 = double_2 + double_3;
	v_rasqal_free_xsd_decimal(long_2);

	char_1 = char_3;
	if(1)
	{
		int_1 = v_rasqal_new_xsd_decimal(float_2);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	int_1 = int_4;
	float_4 = float_4 * float_4;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	unsigned_int_2 = unsigned_int_6 * unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
	}
	int_1 = v_rasqal_literal_promote_numerics(float_1,double_1,int_3);

	long_1 = long_3 + long_2;
	long_2 = long_4;
	float_5 = float_4 * float_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	}
	if(1)
	{
		int_3 = v_rasqal_xsd_decimal_subtract(float_1,char_2,short_2);

		double_2 = v_rasqal_new_decimal_literal_from_decimal(long_4,char_3,float_2);

		long_2 = long_2 * long_5;
		if(1)
		{
			short short_3 = 1;
			v_rasqal_free_literal();

			short_1 = short_2 * short_3;
			v_rasqal_new_numeric_literal(long_1,unsigned_int_4,double_2);

			double_2 = double_4 * double_1;
		}
		if(1)
		{
			double double_6 = 1;
			double_6 = double_5 + double_1;
		}
	}
	double_5 = double_1;
	int_1 = int_2;
	double_5 = double_4 + double_2;
	if(1)
	{
		if(1)
		{
			long long_6 = 1;
			long_6 = long_1 + long_3;
		}
	}
	if(1)
	{
		double double_8 = 1;
		double_7 = v_rasqal_literal_as_double(long_5,int_3);

		double_7 = double_4 + double_8;
	}
	if(1)
	{
		int int_5 = 1;
		int_2 = int_1 + int_5;
	}
}
int v_rasqal_xsd_decimal_add( char parameter_1,float parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	v_rasqal_xsd_decimal_clear_string(float_1);

	short_1 = short_2;
	float_1 = float_2 * float_2;
	return int_1;
}
double v_rasqal_literal_add( long parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	float float_2 = 1;
	double double_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_6 = 1;
	int int_5 = 1;
	long long_4 = 1;
	char char_3 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double_1 = v_rasqal_new_literal_from_promotion(double_1,double_2,int_1,-1 );

	int_4 = int_2 * int_3;
	int_1 = v_rasqal_xsd_decimal_add(char_1,float_1,long_1);

	double_2 = double_3 + double_2;
	long_2 = long_1;
	char_2 = char_1 * char_1;
	char_2 = char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_4 + double_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	int_1 = int_1 * int_4;
	long_2 = long_1 + long_3;
	float_2 = float_1 + float_2;
	double_5 = double_3;
	v_rasqal_free_xsd_decimal(long_1);

	float_4 = float_3 + float_4;
	if(1)
	{
		int_1 = v_rasqal_literal_promote_numerics(float_1,double_3,int_2);

		double_2 = double_6 * double_2;
	}
	int_5 = v_rasqal_new_xsd_decimal(float_3);

	double_6 = v_rasqal_new_decimal_literal_from_decimal(long_4,char_3,float_5);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		char char_4 = 1;
		char_4 = char_1 + char_1;
	}
	short_2 = short_1 * short_1;
	int_4 = int_4 + int_2;
	short_4 = short_3 * short_1;
	if(1)
	{
		float_6 = float_2 * float_1;
	}
	unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
	if(1)
	{
		float_2 = float_3;
	}
	short_2 = short_1;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_3;
	v_rasqal_new_numeric_literal(long_5,unsigned_int_7,double_5);

	unsigned_int_5 = unsigned_int_5;
	if(1)
	{
		long_5 = long_5 + long_2;
	}
	if(1)
	{
		int_2 = int_1 + int_3;
		if(1)
		{
			char_2 = v_rasqal_new_integer_literal(int_4,char_3,int_2);

			double_2 = double_5;
			unsigned_int_3 = unsigned_int_7 + unsigned_int_7;
		}
		if(1)
		{
			int int_6 = 1;
			int_4 = v_rasqal_literal_as_integer(int_3,int_5);

			int_6 = int_1 + int_4;
		}
	}
	v_rasqal_free_literal();

	unsigned_int_4 = unsigned_int_8;
	float_2 = float_2 * float_6;
	double_4 = v_rasqal_literal_as_double(long_4,int_2);

	double_2 = double_6 + double_4;
	if(1)
	{
		if(1)
		{
			float_2 = float_6;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_3 = unsigned_int_9 + unsigned_int_6;
	}
	if(1)
	{
		double double_7 = 1;
		double_1 = double_7 * double_4;
	}
	return double_4;
}
int v_rasqal_literal_is_numeric( char parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = v_rasqal_xsd_datatype_is_numeric(long_1);

	int_1 = int_1 + int_1;
	int_1 = int_1 * int_1;
	v_rasqal_xsd_datatype_parent_type(unsigned_int_1);

	int_1 = int_1 * int_2;
	return int_3;
}
unsigned int v_rasqal_expression_evaluate_istype( double parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	short short_4 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float float_4 = 1;
	short_2 = short_1 + short_1;
	v_rasqal_free_literal();

	long_1 = long_1 + long_1;
	int_3 = int_1 * int_2;
	float_1 = v_rasqal_literal_as_variable(int_3);

	double_1 = double_1;
	short_3 = short_2;
	short_3 = short_2 + short_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int_3 = int_4 * int_1;
	if(1)
	{
		short short_5 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_3 = v_rasqal_expression_evaluate2(short_1,short_4,int_3,-1 );

		short_2 = short_5;
		double_3 = double_2 * double_3;
		char_2 = char_1 + char_1;
		if(1)
		{
			float float_2 = 1;
			float float_3 = 1;
			int_4 = v_rasqal_literal_is_numeric(char_3);

			float_3 = float_2 * float_1;
		}
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		int_5 = int_5 * int_1;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_5 + int_4;
	}
	if(1)
	{
		int_4 = int_1 * int_1;
	}
	if(1)
	{
		double double_4 = 1;
		unsigned_int_2 = v_rasqal_new_boolean_literal(unsigned_int_3,int_5);

		double_4 = double_4 * double_2;
	}
	if(1)
	{
		short short_6 = 1;
		short_6 = short_6;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		long_2 = v_rasqal_literal_get_rdf_term_type(float_4);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	return unsigned_int_3;
}
char v_rasqal_expression_evaluate_datatype( float parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	char char_3 = 1;
	short_1 = v_rasqal_xsd_datatype_type_to_uri(int_1,long_1);

	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	short_3 = short_2 * short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	char_1 = char_1 * char_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	float_3 = v_rasqal_literal_as_variable(int_4);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		short_3 = short_3 * short_3;
		long_1 = v_rasqal_literal_get_rdf_term_type(float_4);

		short_2 = short_3 + short_4;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "7S") > 0)
		{
			short_4 = v_rasqal_expression_evaluate2(short_4,short_5,int_5,-1 );

			v_rasqal_free_literal();

			double_2 = double_1 + double_2;
		}
	}
	if(1)
	{
		long long_2 = 1;
		double_1 = v_rasqal_new_uri_literal(short_6,double_2);

		long_1 = long_1 + long_2;
	}
	if(1)
	{
		int_5 = int_2;
	}
	short_3 = short_2 + short_7;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_5;
	}
	if(1)
	{
		int int_6 = 1;
		int_5 = int_3 + int_6;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		float_4 = float_3;
	}
	return char_3;
}
int v_rasqal_language_matches( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1 + int_1;
		}
		if(1)
		{
		}
	}
	return int_1;
}
char v_rasqal_expression_evaluate_langmatches( char parameter_1,long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	long long_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_rasqal_free_literal();

	float_1 = float_2;
	int_2 = int_1 * int_2;
	float_3 = float_1 * float_3;
	long_1 = long_1;
	double_2 = double_1 * double_1;
	char_3 = char_1 + char_2;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	char_2 = char_1 + char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	short_1 = v_rasqal_expression_evaluate2(short_3,short_4,int_2,-1 );

	short_1 = short_1 + short_5;
	if(1)
	{
		long_2 = v_rasqal_literal_as_string_flags(char_2,int_3,int_2);

		double_2 = double_2 * double_2;
	}
	char_2 = char_1 + char_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	long_3 = long_1 + long_3;
	double_1 = double_1;
	char_5 = char_5 + char_3;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_4 = v_rasqal_new_boolean_literal(unsigned_int_4,int_4);

		double_4 = double_1 + double_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	}
	if(1)
	{
		char char_6 = 1;
		int_5 = v_rasqal_language_matches(char_1,char_1);

		char_1 = char_2 * char_6;
	}
	return char_1;
}
long v_rasqal_expression_evaluate_lang( double parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_6 = 1;
	long long_3 = 1;
	int int_9 = 1;
	float_1 = float_1 + float_1;
	double_2 = double_1 * double_2;
	int_2 = int_1 + int_1;
	short_1 = v_rasqal_expression_evaluate2(short_2,short_1,int_1,-1 );

	short_1 = short_3 * short_2;
	int_3 = int_3;
	char_1 = char_1 + char_1;
	if(1)
	{
		double_3 = double_3 * double_1;
	}
	v_rasqal_free_literal();

	int_4 = int_2 * int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int_4 = int_2 + int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		float_1 = v_rasqal_literal_as_variable(int_5);

		double_1 = double_4 * double_3;
		if(1)
		{
			short short_4 = 1;
			short_4 = short_2;
		}
	}
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_5 = int_5;
		long_1 = v_rasqal_literal_get_rdf_term_type(float_1);

		int_1 = int_4 + int_1;
		if(1)
		{
			int_2 = int_5 + int_6;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		int int_7 = 1;
		int_2 = int_7 + int_3;
		if(1)
		{
			double_3 = double_2 * double_4;
		}
		double_3 = double_1 * double_3;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 * char_1;
	}
	if(1)
	{
		int int_8 = 1;
		int_3 = int_8 * int_4;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2 + long_3;
	}
	return long_1;
	double_4 = v_rasqal_new_string_literal(int_6,char_2,int_9,char_1,long_3,-1 );

}
short v_rasqal_expression_evaluate_str( double parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short_1 = v_rasqal_expression_evaluate2(short_1,short_2,int_1,-1 );

	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_2;
	long_1 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_2 = v_rasqal_literal_as_counted_string(int_1,unsigned_int_2,int_1,int_3);

		int_1 = int_4 + int_5;
	}
	double_1 = v_rasqal_new_string_literal(int_3,char_1,int_2,char_1,long_1,-1 );

	float_2 = float_3;
	if(1)
	{
		double_1 = double_1;
	}
	int_3 = int_3 + int_2;
	if(1)
	{
		v_rasqal_free_literal();

		char_2 = char_1 + char_2;
	}
	double_1 = double_1 * double_1;
	char_2 = char_3 + char_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_2 = double_3;
	}
	if(1)
	{
		char_3 = char_1 + char_4;
	}
	return short_1;
}
int v_rasqal_expression_evaluate_bound( double parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	int int_5 = 1;
	short_3 = short_1 + short_2;
	long_1 = long_2;
	double_1 = double_1 + double_1;
	if(1)
	{
		short short_4 = 1;
		short short_5 = 1;
		unsigned_int_1 = v_rasqal_new_boolean_literal(unsigned_int_1,int_1);

		short_5 = short_4 + short_2;
	}
	long_1 = long_3 + long_1;
	if(1)
	{
		int int_3 = 1;
		int_2 = int_2 * int_3;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		int int_4 = 1;
		float_1 = v_rasqal_literal_as_variable(int_2);

		int_5 = int_4 * int_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	}
	return int_5;
}
int v_rasqal_xsd_decimal_negate( long parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		v_rasqal_xsd_decimal_clear_string(float_1);

		unsigned_int_1 = unsigned_int_1;
	}
	char_1 = char_2;
	short_1 = short_2;
	return int_3;
}
long v_rasqal_new_decimal_literal( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = v_rasqal_new_decimal_literal_from_decimal(long_1,char_1,float_1);

	long_1 = long_2 * long_3;
	float_1 = float_1;
	return long_3;
}
void v_rasqal_new_numeric_literal( long parameter_1,unsigned int parameter_2,double parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_rasqal_new_floating_literal(double_1,int_1,double_1);

	char_1 = v_rasqal_new_integer_literal(int_1,char_1,int_2);

	int_3 = int_3 + int_1;
	int_2 = int_3 * int_2;
	if(1)
	{
	}
	long_1 = v_rasqal_new_decimal_literal(unsigned_int_1,double_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
}
double v_rasqal_literal_negate( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_4 = 1;
	int int_5 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float_3 = float_1 * float_2;
	int_1 = v_rasqal_new_xsd_decimal(float_4);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = v_rasqal_literal_as_integer(int_2,int_2);

	char_1 = char_1 * char_1;
	long_3 = long_1 + long_2;
	long_3 = long_1 * long_4;
	int_2 = int_2;
	double_2 = double_1 * double_2;
	if(1)
	{
		double_3 = v_rasqal_new_decimal_literal_from_decimal(long_1,char_1,float_3);

		char_2 = char_1 + char_1;
	}
	double_1 = double_2 + double_1;
	short_2 = short_1 + short_1;
	double_5 = double_4 + double_2;
	long_2 = long_4 * long_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	char_1 = v_rasqal_new_integer_literal(int_3,char_3,int_3);

	long_4 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_3 + short_1;
	double_2 = v_rasqal_literal_as_double(long_3,int_4);

	char_3 = char_3 + char_3;
	if(1)
	{
		float float_5 = 1;
		float_5 = float_1 + float_2;
		double_6 = double_3 + double_4;
	}
	if(1)
	{
		v_rasqal_new_numeric_literal(long_1,unsigned_int_3,double_1);

		short_1 = short_3 * short_2;
	}
	double_2 = double_7 + double_1;
	char_2 = char_1 + char_4;
	v_rasqal_free_xsd_decimal(long_2);

	double_2 = double_2 + double_6;
	if(1)
	{
		if(1)
		{
			int_5 = v_rasqal_xsd_decimal_negate(long_5,long_6);

			long_1 = long_2 + long_1;
		}
	}
	return double_7;
}
int v_rasqal_xsd_decimal_compare( double parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long_3 = long_1 + long_2;
	if(1)
	{
		int int_1 = 1;
		int_3 = int_1 * int_2;
	}
	int_5 = int_4 * int_4;
	int_3 = v_rasqal_double_approximately_compare(double_1,double_1);

	char_1 = char_1 * char_1;
	return int_2;
}
int v_rasqal_literal_string_datatypes_compare( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	return int_1;
}
short v_rasqal_literal_string_compare( double parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_1 = v_rasqal_strcasecmp(long_1,short_1);

		double_2 = double_1 + double_1;
	}
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	if(1)
	{
	}
	int_2 = v_rasqal_literal_string_languages_compare(char_1,unsigned_int_3);

	int_1 = v_rasqal_literal_string_datatypes_compare(char_1,float_1);

	char_3 = char_2 * char_3;
	if(1)
	{
	}
	return short_2;
}
short v_rasqal_literal_rdql_promote_calculate( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_2;
	int_3 = int_1 * int_2;
	double_1 = double_1 * double_2;
	double_2 = double_1 * double_1;
	long_2 = long_1 + long_2;
	char_3 = char_2 * char_2;
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char char_5 = 1;
		int_1 = int_3 + int_4;
		float_1 = float_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		float_3 = float_4;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		double_3 = double_2 + double_2;
		char_4 = char_1 + char_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		char_2 = char_3 * char_1;
		char_2 = char_5 * char_2;
	}
	if(1)
	{
		int_4 = int_2 * int_2;
		if(1)
		{
			char char_6 = 1;
			char_6 = char_4 * char_1;
		}
		if(1)
		{
			int_1 = int_4 + int_3;
		}
	}
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 * double_4;
	}
	return short_2;
}
short v_rasqal_literal_value()
{
	short short_1 = 1;
	return short_1;
}
int v_rasqal_literal_compare( float parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	float float_4 = 1;
	double double_3 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	char char_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_5 = 1;
	double double_7 = 1;
	int int_7 = 1;
	char char_4 = 1;
	int int_8 = 1;
	long long_6 = 1;
	long long_7 = 1;
	float float_6 = 1;
	double double_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_9 = 1;
	int int_10 = 1;
	double double_10 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	short_2 = short_1 + short_2;
	double_2 = double_1 * double_2;
	int_1 = v_rasqal_xsd_datetime_compare2(short_3,long_1,int_2);

	long_1 = long_1 + long_1;
	short_2 = v_rasqal_literal_value();

	int_1 = int_1 + int_1;
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		if(1)
		{
			float_3 = float_3;
		}
	}
	long_2 = long_2 * long_1;
	short_2 = short_3 * short_3;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				float_3 = float_4 + float_1;
			}
		}
	}
	double_2 = double_2 * double_3;
	long_3 = v_rasqal_literal_get_rdf_term_type(float_4);

	char_1 = char_1 + char_2;
	if(1)
	{
		int_1 = v_rasqal_xsd_date_compare(unsigned_int_1,char_2,int_1);

		double_1 = double_3 * double_4;
	}
	if(1)
	{
		float_1 = float_3 + float_4;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
		short_4 = short_2 * short_2;
		if(1)
		{
		}
		double_5 = double_4;
		if(1)
		{
			if(1)
			{
				int_2 = int_3 + int_2;
			}
		}
		double_4 = double_1 * double_4;
	}
	if(1)
	{
		short short_5 = 1;
		int_1 = int_1 * int_3;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
		if(1)
		{
			int_2 = int_1;
		}
		if(1)
		{
			if(1)
			{
				int_4 = int_1 * int_1;
			}
		}
		int_5 = int_6;
		if(1)
		{
			long_1 = long_1 * long_3;
			long_2 = long_3 * long_3;
			double_3 = double_3;
			if(1)
			{
			}
			double_4 = double_1 * double_2;
			if(1)
			{
				if(1)
				{
					double_2 = double_4 * double_6;
				}
			}
			if(1)
			{
				short_2 = v_rasqal_literal_rdql_promote_calculate(char_3,long_4);

				long_5 = long_1 + long_2;
			}
		}
		short_3 = short_5 * short_4;
	}
	if(1)
	{
		float_5 = float_2 + float_1;
		double_2 = double_7;
	}
	if(1)
	{
		if(1)
		{
			char_2 = char_1 * char_1;
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_1 = int_3;
			if(1)
			{
				if(1)
				{
					int_2 = int_7 + int_2;
				}
				float_5 = float_3 + float_3;
			}
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
		}
	}
	if(1)
	{
		short_3 = short_4 + short_4;
	}
	if(1)
	{
		if(1)
		{
			float_1 = v_rasqal_literal_type_label(double_6);

			double_7 = double_2;
		}
		double_5 = double_2 * double_3;
		short_3 = v_rasqal_literal_string_compare(double_7,char_4,int_2);

		int_5 = int_6 + int_8;
	}
	int_8 = int_8 + int_1;
	long_5 = long_6 * long_7;
	int_8 = v_rasqal_xsd_decimal_compare(double_5,long_3);

	long_1 = long_2 * long_5;
	if(1)
	{
		float float_7 = 1;
		int_4 = v_rasqal_literal_promote_numerics(float_6,double_8,int_7);

		float_6 = float_7 + float_3;
	}
	if(1)
	{
		int_1 = int_8 * int_3;
	}
	int_3 = int_9;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_6;
	unsigned_int_4 = unsigned_int_6 + unsigned_int_3;
	double_9 = double_8 * double_7;
	int_2 = int_3 + int_10;
	double_10 = v_rasqal_new_literal_from_promotion(double_11,double_4,int_7,-1 );

	int_3 = v_rasqal_strcasecmp(long_7,short_3);

	short_2 = short_2 + short_2;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_7 + unsigned_int_7;
	int_7 = int_7;
	double_7 = double_5 + double_10;
	char_6 = char_4 * char_5;
	v_rasqal_free_literal();

	int_1 = int_6;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
	char_7 = char_2 + char_1;
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				char_3 = char_4;
			}
		}
	}
	return int_7;
}
int v_rasqal_literal_not_equals_flags( int parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	return int_1;
	int_1 = v_rasqal_literal_equals_flags(int_2,float_1,int_1,int_2,-1 );

}
unsigned int v_rasqal_new_boolean_literal( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 + float_2;
	short_1 = v_rasqal_xsd_datatype_type_to_uri(int_1,long_1);

	int_1 = int_2 + int_3;
	int_5 = int_3 * int_4;
	float_4 = float_3 + float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		float float_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_6 = 1;
		double double_3 = 1;
		double_2 = double_1 * double_2;
		unsigned_int_1 = unsigned_int_2;
		short_2 = short_1 + short_1;
		int_5 = int_3 + int_1;
		float_3 = float_2 + float_5;
		int_5 = int_2 + int_4;
		char_2 = char_1 + char_1;
		float_5 = float_5 + float_6;
		if(1)
		{
			v_rasqal_free_literal();

			double_2 = double_1 + double_1;
		}
		double_1 = double_2 + double_3;
	}
	return unsigned_int_1;
}
short v_rasqal_expression_evaluate2( short parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_3 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_8 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_12 = 1;
	short short_6 = 1;
	double double_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double double_9 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_13 = 1;
	unsigned int unsigned_int_14 = 1;
	char char_6 = 1;
	double double_10 = 1;
	float float_8 = 1;
	float float_9 = 1;
	double double_11 = 1;
	char char_7 = 1;
	double double_12 = 1;
	float float_10 = 1;
	double double_13 = 1;
	double double_14 = 1;
	long long_6 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_15 = 1;
	int int_11 = 1;
	float float_11 = 1;
	float float_12 = 1;
	int int_12 = 1;
	double double_15 = 1;
	double double_16 = 1;
	long long_7 = 1;
	int int_13 = 1;
	long long_8 = 1;
	double double_17 = 1;
	double double_18 = 1;
	double double_19 = 1;
	unsigned int unsigned_int_16 = 1;
	short short_7 = 1;
	double double_20 = 1;
	long long_9 = 1;
	unsigned int unsigned_int_17 = 1;
	long long_10 = 1;
	int int_14 = 1;
	unsigned int unsigned_int_18 = 1;
	long long_11 = 1;
	double double_22 = 1;
	float float_13 = 1;
	char char_9 = 1;
	short short_9 = 1;
	long long_12 = 1;
	float float_14 = 1;
	int int_15 = 1;
	short short_10 = 1;
	double double_23 = 1;
	int int_16 = 1;
	unsigned int unsigned_int_19 = 1;
	char char_10 = 1;
	long long_13 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	short_1 = short_2;
	char_1 = char_1;
	int_1 = int_1 * int_1;
	long_1 = long_1 * long_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
	float_1 = float_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_6;
	double_2 = double_2;
	int_2 = int_1 * int_1;
	int_2 = int_2;
	int_3 = int_3;
	int_4 = int_2 + int_2;
	float_3 = float_1 + float_2;
	double_2 = double_1 * double_2;
	double_1 = double_2 + double_1;
	short_3 = short_2 * short_2;
	double_2 = double_2 + double_2;
	int_2 = int_2;
	int_1 = int_5 + int_6;
	int_7 = int_7 + int_6;
	double_3 = double_2 * double_3;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_2 = unsigned_int_6;
	double_1 = double_2 * double_1;
	double_1 = double_2 * double_3;
	int_6 = int_6 + int_2;
	int_1 = int_2 * int_5;
	long_3 = long_2 * long_3;
	int_1 = int_7 + int_2;
	short_3 = short_4 + short_3;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_1;
	long_4 = long_1 * long_1;
	int_4 = int_2 * int_2;
	double_4 = double_2 + double_3;
	double_4 = double_2 * double_5;
	if(1)
	{
		int_2 = int_5 + int_2;
	}
	if(1)
	{
		int_1 = int_8 * int_1;
		double_7 = double_4 + double_6;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_1;
	if(1)
	{
		short_3 = short_2 * short_5;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_8;
		float_3 = float_1 + float_4;
	}
	if(1)
	{
		double_2 = double_5 * double_5;
	}
	char controller4vul_1753[2];
	fgets(controller4vul_1753 ,2 ,stdin);
	if( strcmp( controller4vul_1753, "H") < 0)
	{
		char controller4vul_1754[2];
		fgets(controller4vul_1754 ,2 ,stdin);
		if( strcmp( controller4vul_1754, "=") < 0)
		{
			v_rasqal_expression_evaluate_in_set(float_2,double_2,int_2,uni_para);

			char_2 = char_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_9 + unsigned_int_10;
		}
	}
	char_4 = char_1 + char_1;
	float_4 = float_1;
	double_5 = double_7 * double_7;
	unsigned_int_4 = unsigned_int_10 * unsigned_int_4;
	if(1)
	{
		unsigned_int_6 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		float_4 = float_3 + float_3;
		char_3 = char_5 * char_1;
	}
	float_5 = float_2 + float_2;
	int_4 = int_4 + int_5;
	if(1)
	{
		double_2 = double_2 * double_7;
	}
	if(1)
	{
		float_3 = float_4 * float_6;
		char_1 = char_2;
	}
	if(1)
	{
		short_2 = short_5 + short_3;
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_1 + int_4;
		}
		if(1)
		{
			float_1 = float_2;
		}
	}
	unsigned_int_5 = unsigned_int_11;
	long_4 = long_5;
	unsigned_int_4 = unsigned_int_12 + unsigned_int_8;
	if(1)
	{
		double_6 = double_4 + double_7;
	}
	double_6 = double_2 * double_7;
	if(1)
	{
		float_3 = float_6;
		int_7 = int_5 * int_6;
	}
	if(1)
	{
		double_6 = double_2 + double_1;
		float_1 = float_4;
	}
	double_3 = double_7 + double_2;
	if(1)
	{
		long_1 = long_2;
	}
	if(1)
	{
		float_4 = float_3 * float_1;
	}
	short_1 = short_5 + short_6;
	long_4 = long_3 + long_4;
	if(1)
	{
		double_1 = double_8 + double_8;
	}
	double_1 = double_2 * double_6;
	int_4 = int_7 + int_2;
	unsigned_int_9 = unsigned_int_4 + unsigned_int_11;
	if(1)
	{
		short_2 = short_3 + short_2;
	}
	int_10 = int_3 + int_9;
	if(1)
	{
		unsigned_int_12 = unsigned_int_1 + unsigned_int_9;
		double_7 = double_4 * double_9;
	}
	double_4 = double_4 + double_4;
	if(1)
	{
		int_2 = int_4 * int_8;
	}
	if(1)
	{
		unsigned_int_10 = unsigned_int_3 * unsigned_int_4;
	}
	char_2 = char_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		float_5 = float_1 + float_7;
	}
	unsigned_int_14 = unsigned_int_13 + unsigned_int_2;
	int_4 = int_6 + int_8;
	char_6 = char_6;
	if(1)
	{
		int_8 = int_1 * int_5;
	}
	double_3 = double_4 * double_5;
	if(1)
	{
		unsigned_int_10 = unsigned_int_7 + unsigned_int_9;
		long_4 = long_3;
	}
	int_10 = int_2 * int_9;
	double_10 = double_3 * double_1;
	int_5 = int_6 + int_3;
	if(1)
	{
		double_5 = double_8;
	}
	int_10 = int_5;
	double_4 = double_3 + double_6;
	int_9 = int_7;
	if(1)
	{
		long_2 = long_1;
	}
	float_3 = float_8 + float_2;
	if(1)
	{
		unsigned_int_8 = unsigned_int_11 * unsigned_int_9;
		double_2 = double_5;
	}
	float_8 = float_2 + float_9;
	float_5 = float_4 + float_4;
	char_3 = char_6 * char_4;
	if(1)
	{
		int_10 = int_4;
	}
	int_8 = int_2 + int_9;
	short_1 = short_4 * short_6;
	float_5 = float_4 * float_5;
	if(1)
	{
		int_3 = int_1 * int_8;
	}
	char_6 = char_6 + char_1;
	if(1)
	{
		int_9 = int_5;
		double_4 = double_8 + double_4;
	}
	int_2 = int_4 * int_6;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_11;
	unsigned_int_14 = unsigned_int_1 * unsigned_int_8;
	if(1)
	{
		long_2 = long_3 + long_2;
	}
	double_1 = double_8 * double_10;
	double_2 = double_7 + double_1;
	double_10 = double_11;
	if(1)
	{
		char_1 = char_6 + char_6;
	}
	int_3 = int_8 + int_4;
	if(1)
	{
		char_4 = char_6 + char_1;
		short_5 = short_6 + short_3;
	}
	char_1 = char_1 + char_2;
	long_5 = long_4 * long_4;
	double_8 = double_1 + double_5;
	if(1)
	{
		long_1 = long_5 * long_1;
	}
	float_5 = float_3 + float_1;
	int_1 = int_6 * int_9;
	char_2 = char_1 + char_7;
	if(1)
	{
		int_4 = int_3 + int_7;
	}
	int_9 = int_8 * int_4;
	double_2 = double_9 * double_7;
	if(1)
	{
		unsigned_int_6 = unsigned_int_3 * unsigned_int_14;
	}
	unsigned_int_13 = unsigned_int_11 + unsigned_int_9;
	char_4 = char_6 + char_7;
	unsigned_int_3 = unsigned_int_8 * unsigned_int_10;
	double_12 = double_12;
	double_3 = double_5;
	unsigned_int_10 = unsigned_int_13 + unsigned_int_11;
	int_10 = int_4;
	float_7 = float_10 + float_4;
	double_7 = double_1 * double_13;
	double_8 = double_14 + double_7;
	unsigned_int_1 = unsigned_int_9 * unsigned_int_13;
	double_1 = double_11 + double_8;
	double_8 = double_3 * double_12;
	long_6 = long_2 * long_2;
	if(1)
	{
		int_8 = int_3 * int_4;
	}
	int_2 = int_4 + int_4;
	if(1)
	{
		char_5 = char_1;
		short_3 = short_1 * short_4;
	}
	unsigned_int_14 = unsigned_int_11 + unsigned_int_3;
	unsigned_int_13 = unsigned_int_10 + unsigned_int_2;
	double_11 = double_1 + double_5;
	if(1)
	{
		double_6 = double_13 + double_14;
	}
	float_7 = float_10;
	int_8 = int_6 * int_8;
	if(1)
	{
		char_6 = char_5 + char_1;
	}
	char_7 = char_4 + char_8;
	if(1)
	{
		long_3 = long_2 + long_4;
		double_1 = double_13;
	}
	int_9 = int_4 + int_4;
	short_2 = short_2;
	unsigned_int_9 = unsigned_int_8 + unsigned_int_15;
	if(1)
	{
		int_4 = int_2;
	}
	unsigned_int_12 = unsigned_int_4 + unsigned_int_13;
	int_11 = int_2 + int_8;
	if(1)
	{
		float_1 = float_4;
	}
	float_10 = float_11 + float_12;
	if(1)
	{
		double_3 = double_14 + double_2;
		unsigned_int_3 = unsigned_int_13;
	}
	long_4 = long_5 * long_5;
	int_11 = int_12 + int_7;
	char_7 = char_8;
	if(1)
	{
		double_4 = double_10 * double_10;
	}
	int_12 = int_12;
	unsigned_int_3 = unsigned_int_14 + unsigned_int_7;
	if(1)
	{
		int_12 = int_10 + int_4;
	}
	double_8 = double_3 * double_15;
	if(1)
	{
		double_7 = double_13 + double_16;
		long_5 = long_7 + long_7;
	}
	double_4 = double_5 + double_16;
	double_8 = double_2 * double_6;
	unsigned_int_13 = unsigned_int_14 * unsigned_int_11;
	if(1)
	{
		unsigned_int_5 = unsigned_int_8 + unsigned_int_5;
	}
	int_6 = int_1 * int_9;
	unsigned_int_9 = unsigned_int_1 + unsigned_int_7;
	if(1)
	{
		char_1 = char_8 * char_3;
	}
	int_11 = int_10 * int_12;
	if(1)
	{
		long_3 = long_2 + long_2;
		int_13 = int_7;
	}
	long_3 = long_4 * long_4;
	if(1)
	{
		unsigned_int_11 = unsigned_int_7 * unsigned_int_7;
	}
	if(1)
	{
		double_6 = double_13 + double_14;
	}
	char_4 = char_8 * char_6;
	long_8 = long_7 + long_4;
	if(1)
	{
		double_18 = double_17 * double_3;
	}
	int_9 = int_4 * int_6;
	int_8 = int_9 * int_7;
	char_7 = char_5 + char_1;
	if(1)
	{
		char_8 = char_3 * char_3;
	}
	double_4 = double_18 * double_18;
	if(1)
	{
		int_4 = int_10 * int_13;
		unsigned_int_13 = unsigned_int_5 + unsigned_int_11;
	}
	double_16 = double_19;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_16;
	short_1 = short_7;
	if(1)
	{
		unsigned_int_2 = unsigned_int_16 + unsigned_int_14;
	}
	double_16 = double_6 * double_4;
	double_8 = double_9 * double_8;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_6;
	if(1)
	{
		double_10 = double_5 * double_6;
	}
	char_8 = char_8;
	if(1)
	{
		short_4 = short_1 * short_4;
		float_1 = float_2 + float_8;
	}
	unsigned_int_4 = unsigned_int_13;
	unsigned_int_5 = unsigned_int_16 + unsigned_int_15;
	int_2 = int_8;
	if(1)
	{
		double_15 = double_14 + double_1;
	}
	double_5 = double_18 + double_1;
	double_19 = double_19 + double_12;
	unsigned_int_6 = unsigned_int_8 + unsigned_int_15;
	if(1)
	{
		int_11 = int_13 * int_4;
	}
	double_6 = double_5 + double_8;
	double_1 = double_1 * double_8;
	if(1)
	{
		long_5 = long_8 * long_5;
	}
	double_20 = double_5 + double_18;
	double_4 = double_5 + double_13;
	double_17 = double_16 + double_16;
	if(1)
	{
		char_5 = char_2 * char_7;
	}
	double_18 = double_20;
	double_3 = double_9 + double_8;
	if(1)
	{
		long_9 = long_5 * long_1;
	}
	int_1 = int_6;
	float_4 = float_7 * float_7;
	unsigned_int_17 = unsigned_int_4 * unsigned_int_3;
	double_5 = double_2 * double_2;
	short_2 = short_7 * short_6;
	long_6 = long_5 * long_1;
	double_16 = double_16 + double_9;
	unsigned_int_3 = unsigned_int_15 * unsigned_int_3;
	long_8 = long_10 + long_7;
	char_3 = char_7 + char_6;
	if(1)
	{
		short short_8 = 1;
		short_4 = short_5 * short_8;
	}
	double_13 = double_13 + double_6;
	int_12 = int_6 + int_6;
	if(1)
	{
		double double_21 = 1;
		double_21 = double_2 * double_2;
	}
	int_7 = int_6 + int_10;
	int_14 = int_8;
	double_14 = double_4 + double_5;
	long_6 = long_4 * long_10;
	char_5 = char_8 + char_7;
	unsigned_int_2 = unsigned_int_16 + unsigned_int_11;
	long_5 = long_10 * long_6;
	double_9 = double_3 + double_2;
	long_10 = long_6 + long_9;
	unsigned_int_17 = unsigned_int_2 + unsigned_int_18;
	int_9 = int_8 * int_4;
	long_7 = long_3 + long_11;
	short_6 = short_3 + short_1;
	short_2 = short_7;
	double_2 = double_22 + double_19;
	float_2 = float_7;
	float_8 = float_12 * float_13;
	int_8 = int_8 * int_9;
	long_5 = long_4;
	long_11 = long_2 + long_10;
	char_7 = char_6 * char_5;
	char_9 = char_9;
	short_9 = short_1;
	float_10 = float_7 * float_3;
	long_5 = long_2;
	float_3 = float_3 * float_7;
	long_4 = long_3 * long_12;
	char_3 = char_7 * char_7;
	long_6 = long_7 + long_2;
	char_1 = char_6 + char_1;
	float_2 = float_6 + float_14;
	long_7 = long_1 + long_7;
	int_7 = int_15;
	char_8 = char_7 * char_9;
	unsigned_int_12 = unsigned_int_11 + unsigned_int_5;
	char_9 = char_4 + char_4;
	unsigned_int_11 = unsigned_int_2 + unsigned_int_8;
	short_2 = short_5 * short_4;
	float_9 = float_8 + float_11;
	long_4 = long_11 * long_12;
	char_1 = char_3 + char_3;
	float_12 = float_4;
	double_10 = double_9;
	int_5 = int_6 + int_10;
	short_10 = short_9 + short_10;
	double_6 = double_23 + double_16;
	unsigned_int_10 = unsigned_int_16 * unsigned_int_1;
	short_7 = short_4;
	char_5 = char_4;
	int_6 = int_6 + int_5;
	char_7 = char_6 + char_1;
	double_13 = double_23 + double_16;
	long_12 = long_10 + long_4;
	int_7 = int_2;
	char_8 = char_1 + char_2;
	int_7 = int_8 * int_8;
	int_9 = int_7;
	int_9 = int_3;
	int_10 = int_16 + int_15;
	float_3 = float_7 * float_3;
	long_3 = long_2 + long_7;
	long_2 = long_4 * long_1;
	unsigned_int_12 = unsigned_int_7 * unsigned_int_8;
	float_12 = float_14 + float_14;
	double_17 = double_4 * double_10;
	double_3 = double_2 + double_7;
	int_15 = int_3 * int_6;
	unsigned_int_1 = unsigned_int_19 * unsigned_int_19;
	char_3 = char_6 + char_5;
	char_6 = char_10 + char_4;
	unsigned_int_8 = unsigned_int_11 + unsigned_int_1;
	short_9 = short_10 + short_3;
	char_9 = char_6 + char_2;
	long_10 = long_7 * long_13;
	int_2 = int_3 + int_11;
	if(1)
	{
		unsigned_int_6 = unsigned_int_9 + unsigned_int_5;
	}
	if(1)
	{
		float_7 = float_12 * float_14;
	}
	unsigned_int_15 = unsigned_int_9 + unsigned_int_4;
	double_17 = double_17 * double_1;
	if(1)
	{
		char_6 = char_9 * char_5;
		double_10 = double_8 * double_9;
	}
	int_13 = int_4 + int_8;
	return short_5;
}
int v_rasqal_literal_is_constant( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short_3 = short_1 * short_2;
	long_2 = long_1 + long_1;
	return int_1;
}
int v_rasqal_expression_is_constant( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_5 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short_2 = short_1 + short_2;
	int_2 = int_1 + int_2;
	int_3 = v_rasqal_literal_is_constant(double_1);

	int_3 = int_3 * int_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	int_1 = int_2;
	int_3 = int_2 * int_5;
	double_3 = double_2 * double_2;
	long_2 = long_2 * long_3;
	long_2 = long_1 * long_2;
	int_1 = int_5 * int_3;
	long_3 = long_2 + long_4;
	char_2 = char_1 + char_1;
	double_1 = double_1 + double_2;
	float_1 = float_1 * float_2;
	char_3 = char_3 + char_3;
	char_4 = char_2 * char_4;
	float_2 = float_1 * float_3;
	float_4 = float_4 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		char_3 = char_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			double_4 = double_4 * double_4;
			int_4 = int_3;
		}
	}
	short_4 = short_1 + short_3;
	char_3 = char_4 + char_1;
	float_5 = float_3 + float_5;
	short_1 = short_2 + short_1;
	short_4 = short_2 * short_5;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		double_4 = double_1 * double_3;
	}
	double_1 = double_3 + double_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_5 = 1;
		long_3 = long_1 * long_5;
		double_4 = double_2 + double_4;
		if(1)
		{
			short short_6 = 1;
			double_4 = double_2 * double_3;
			short_6 = short_2;
		}
	}
	float_1 = float_4 * float_2;
	double_2 = double_1;
	if(1)
	{
		int_2 = v_rasqal_expression_print(char_1,char_5);

		int_6 = int_5 * int_4;
	}
	short_5 = short_4;
	int_7 = int_6;
	return int_1;
}
void v_rasqal_expression_foreach_fold(float parameter_2,int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_1;
	char controller4vul_1752[3];
	fgets(controller4vul_1752 ,3 ,stdin);
	if( strcmp( controller4vul_1752, "Gv") > 0)
	{
		short_1 = v_rasqal_expression_evaluate2(short_1,short_1,int_1,uni_para);

	}
	int_2 = int_1 + int_1;
	int_2 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 + double_1;
	char_1 = char_3 * char_3;
	if(1)
	{
		int_2 = int_1;
	}
	int_2 = int_1 + int_2;
	long_1 = long_1 + long_1;
	int_1 = int_3;
	float_1 = float_1 + float_1;
	double_3 = double_1 * double_2;
}
int v_rasqal_expression_visit( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	char char_2 = 1;
	double double_5 = 1;
	char char_3 = 1;
	long long_4 = 1;
	int_3 = int_1 * int_2;
	char_1 = char_1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_4;
	double_3 = double_2 * double_3;
	float_1 = float_1;
	double_4 = double_2 + double_1;
	double_3 = double_3;
	double_4 = double_4;
	double_2 = double_3 * double_4;
	double_1 = double_3;
	int_1 = int_3 * int_3;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	float_2 = float_2 + float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		int_2 = int_4;
		float_4 = float_2 * float_4;
		unsigned_int_4 = unsigned_int_6;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_2;
		}
	}
	char_2 = char_1 * char_1;
	double_4 = double_1 + double_2;
	float_4 = float_4 * float_2;
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_1 = 1;
			long long_3 = 1;
			short_1 = short_1 + short_1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
			long_3 = long_2;
			if(1)
			{
				double_5 = double_1 + double_1;
			}
		}
	}
	char_3 = char_1 + char_2;
	long_2 = long_4 * long_2;
	double_3 = double_3;
	double_5 = double_2 + double_3;
	return int_1;
}
short v_rasqal_query_expression_fold( unsigned int parameter_1,unsigned int parameter_2,int uni_para)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	v_rasqal_expression_foreach_fold(float_1,uni_para);

	long_2 = long_1 + long_2;
	char_1 = char_2;
	short_3 = short_1 * short_2;
	long_2 = long_2;
	float_3 = float_2 * float_3;
	short_4 = short_1 + short_3;
	int_3 = int_1 * int_2;
	float_4 = float_1 * float_3;
	float_5 = float_3 * float_2;
	long_1 = long_3;
	float_2 = float_3 + float_3;
	int_1 = int_1 * int_3;
	short_1 = short_3 + short_4;
	int_3 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	long_4 = long_4 * long_3;
	unsigned_int_2 = unsigned_int_1;
	return short_2;
}
char v_rasqal_graph_pattern_fold_expressions( long parameter_1,char parameter_2,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char controller4vul_1751[2];
	fgets(controller4vul_1751 ,2 ,stdin);
	if( strcmp( controller4vul_1751, "A") < 0)
	{
		short_1 = v_rasqal_query_expression_fold(unsigned_int_1,unsigned_int_2,uni_para);

	}
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			int_1 = int_1 + int_1;
			char_2 = char_1 + char_2;
			if(1)
			{
			}
		}
	}
	if(1)
	{
	}
	return char_2;
}
double v_rasqal_query_get_order_conditions_sequence( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
}
double v_rasqal_query_fold_expressions( long parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_3 = short_1 + short_2;
	long_1 = long_1 * long_2;
	int_2 = int_1 + int_2;
	char controller4vul_1750[3];
	fgets(controller4vul_1750 ,3 ,stdin);
	if( strcmp( controller4vul_1750, "#>") > 0)
	{
		char_1 = v_rasqal_graph_pattern_fold_expressions(long_3,char_1,uni_para);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	if(1)
	{
		int_1 = int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_3 = 1;
			short short_4 = 1;
			int_1 = int_2 * int_3;
			short_3 = short_4 * short_2;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		}
	}
	return double_2;
}
void v_rasqal_log_warning_simple( char parameter_1,double parameter_2,unsigned int parameter_3,short parameter_4,long parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	int_2 = int_3;
	v_rasqal_log_error_varargs(double_1,char_1,double_3,char_1,float_1);

}
int v_rasqal_query_remove_duplicate_select_vars( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_1 * float_2;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_2 * int_1;
	if(1)
	{
	}
	double_5 = double_2 + double_4;
	if(1)
	{
	}
	double_6 = double_5 * double_5;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
		double double_8 = 1;
		int_1 = v_rasqal_variable_print(long_3,long_3);

		double_8 = double_7 + double_8;
	}
	char_1 = char_2;
	int_1 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		v_rasqal_log_warning_simple(char_1,double_7,unsigned_int_1,short_1,long_3);

		long_2 = long_1 * long_3;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		long_4 = long_3 * long_3;
		short_3 = short_1 + short_2;
		if(1)
		{
			short short_4 = 1;
			short_2 = short_3 + short_4;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			v_rasqal_free_variable(int_1);

			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
			int_2 = int_3 * int_4;
			if(1)
			{
				if(1)
				{
					long long_5 = 1;
					unsigned_int_3 = v_rasqal_new_variable_from_variable();

					long_3 = long_2 * long_4;
					long_2 = long_2 + long_5;
				}
			}
		}
		if(1)
		{
			int_4 = int_3 + int_4;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
			int_1 = int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			int_4 = int_3 * int_3;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		char_2 = char_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		double_3 = double_4 + double_6;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_2 + float_3;
	}
	return int_1;
}
double v_rasqal_query_get_projection( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
int v_rasqal_query_prepare_common(int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char controller4vul_1749[2];
	fgets(controller4vul_1749 ,2 ,stdin);
	if( strcmp( controller4vul_1749, "X") > 0)
	{
		double_1 = v_rasqal_query_fold_expressions(long_1,uni_para);

	}
	char_2 = char_1 + char_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	short_1 = short_1 + short_1;
	return int_3;
}
int v_rasqal_evaluation_context_set_rand_seed( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int_1 = v_rasqal_random_seed(unsigned_int_1,short_1);

	int_1 = int_1 + int_1;
	return int_2;
}
int v_rasqal_evaluation_context_set_base_uri( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_4;
}
void v_rasqal_query_set_base_uri( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int_3 = int_1 * int_2;
	double_2 = double_1 + double_2;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 * double_1;
	}
	float_1 = float_1 + float_1;
	int_3 = int_1 + int_2;
}
int v_rasqal_query_prepare( short parameter_1,long parameter_2,unsigned int parameter_3,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	double double_6 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char controller4vul_1747[2];
	fgets(controller4vul_1747 ,2 ,stdin);
	if( strcmp( controller4vul_1747, "0") > 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_3 = 1;
		long_1 = long_1 + long_1;
		char_1 = char_2;
		char controller4vul_1748[3];
		fgets(controller4vul_1748 ,3 ,stdin);
		if( strcmp( controller4vul_1748, "JJ") > 0)
		{
			int_2 = v_rasqal_query_prepare_common(uni_para);

			long_1 = long_1 + long_2;
		}
		long_3 = long_2;
		long_3 = long_2;
		char_3 = char_2 + char_2;
		int_2 = int_3 + int_4;
		double_3 = double_3;
	}
	if(1)
	{
		double_1 = double_3;
	}
	if(1)
	{
		double_3 = double_2 * double_4;
		double_1 = double_3 + double_4;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
	}
	double_5 = double_2 + double_4;
	unsigned_int_2 = unsigned_int_2;
	long_1 = long_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		long_1 = long_2 + long_3;
		if(1)
		{
			float_2 = float_3 + float_4;
		}
		if(1)
		{
			int_4 = int_1 + int_1;
		}
		double_1 = double_6 + double_1;
	}
	double_5 = double_2;
	if(1)
	{
		double double_7 = 1;
		float float_5 = 1;
		double_3 = double_7 * double_7;
		float_5 = float_4;
	}
	if(1)
	{
		int int_5 = 1;
		double_2 = double_6 + double_1;
		int_4 = int_4 * int_5;
	}
	return int_2;
}
int v_file_read_string( short parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_1 + int_2;
	short_2 = short_1 * short_2;
	short_3 = short_3 + short_2;
	int_2 = int_4 * int_3;
	int_1 = int_2 * int_3;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	float_2 = float_1 + float_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	short_3 = short_4 * short_3;
	int_5 = int_4 * int_3;
	int_4 = int_5 * int_5;
	int_3 = int_2 + int_2;
	double_1 = double_1;
	int_6 = int_5;
	long_2 = long_1 * long_2;
	int_4 = int_3 + int_7;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	return int_1;
}
unsigned int v_rasqal_random_get_system_seed( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_1 = 1;
	int int_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	double double_6 = 1;
	short_2 = short_1 + short_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		double_2 = double_4;
		int_2 = int_1 * int_2;
	}
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
		short short_3 = 1;
		long_1 = long_2 + long_1;
		short_3 = short_3 * short_2;
		int_1 = int_1 + int_2;
	}
	double_3 = double_1 + double_3;
	double_1 = double_5 + double_1;
	double_1 = double_1 + double_3;
	int_1 = int_1 * int_1;
	if(1)
	{
		long_3 = long_3 * long_4;
		unsigned_int_4 = unsigned_int_3;
		int_1 = int_2;
	}
	int_3 = int_4;
	double_2 = double_2;
	float_3 = float_1 * float_2;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_6;
	if(1)
	{
		double_5 = double_3 * double_4;
		char_1 = char_1 + char_1;
		int_5 = int_3 * int_5;
	}
	double_3 = double_1;
	float_4 = float_4 + float_1;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_1;
	long_2 = long_3 * long_4;
	double_2 = double_3 + double_5;
	double_2 = double_2 * double_1;
	float_5 = float_2 * float_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
	int_3 = int_6 + int_1;
	char_1 = char_2;
	long_1 = long_4 * long_4;
	int_6 = int_2 * int_1;
	double_1 = double_6;
	int_6 = int_5 + int_5;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	return unsigned_int_6;
}
int v_rasqal_random_seed( unsigned int parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	int_2 = int_1 + int_2;
	double_2 = double_1 * double_2;
	short_1 = short_1;
	return int_2;
}
double v_rasqal_new_random( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	float_3 = float_1 * float_3;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	unsigned_int_1 = unsigned_int_4;
	int_3 = int_1 * int_2;
	int_4 = int_2;
	if(1)
	{
		int_1 = v_rasqal_random_seed(unsigned_int_5,short_3);

		unsigned_int_1 = v_rasqal_random_get_system_seed(double_1);

		int_4 = int_1 * int_3;
	}
	return double_2;
}
short v_rasqal_new_evaluation_context( short parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	double_2 = v_rasqal_new_random(double_1);

	int_2 = int_2 + int_3;
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int_4 = int_4;
		int_6 = int_5 + int_5;
	}
	return short_2;
}
void v_rasqal_free_bindings( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_1 * int_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	double_1 = double_2;
}
void v_rasqal_free_solution_modifier( double parameter_1)
{
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_2 = short_3 * short_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	float_2 = float_1 + float_2;
}
void v_rasqal_free_projection( float parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	char_1 = char_1;
}
void v_rasqal_free_graph_pattern( int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		v_rasqal_free_solution_modifier(double_1);

		short_1 = short_1 + short_2;
	}
	if(1)
	{
		long long_1 = 1;
		v_rasqal_free_projection(float_1);

		long_1 = long_1 * long_1;
	}
	if(1)
	{
		v_rasqal_free_literal();

		double_1 = double_1 + double_2;
	}
	if(1)
	{
		v_rasqal_free_expression(unsigned_int_1);

		int_3 = int_1 * int_2;
	}
	if(1)
	{
		int_3 = int_2 * int_1;
	}
	if(1)
	{
		v_rasqal_free_variable(int_2);

		short_1 = short_2 + short_1;
	}
	if(1)
	{
		short_1 = short_2;
	}
	if(1)
	{
		short short_3 = 1;
		v_rasqal_free_bindings(float_1);

		short_1 = short_3 + short_3;
	}
	double_2 = double_2 * double_2;
}
void v_rasqal_free_random( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	int_3 = int_1 + int_2;
	short_2 = short_1 * short_1;
}
void v_rasqal_free_evaluation_context( double parameter_1)
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
		v_rasqal_free_random(unsigned_int_1);

		int_1 = int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void v_rasqal_free_query( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		double_3 = double_1 * double_4;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		double_1 = double_2 * double_2;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		int_3 = int_2 + int_2;
	}
	if(1)
	{
		v_rasqal_free_projection(float_1);

		long_1 = long_1 + long_1;
	}
	if(1)
	{
		int_2 = int_3 * int_2;
	}
	if(1)
	{
		v_rasqal_free_bindings(float_3);

		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		float float_4 = 1;
		float_4 = float_1 * float_3;
	}
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		float_6 = float_5 + float_3;
	}
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_5 = int_4 * int_3;
	}
	if(1)
	{
		v_rasqal_free_variables_table(double_1);

		char_3 = char_1;
	}
	if(1)
	{
		double_6 = double_5 * double_3;
	}
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		short short_1 = 1;
		v_rasqal_free_evaluation_context(double_5);

		short_1 = short_1 + short_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double_6 = double_4 * double_2;
	}
	if(1)
	{
		double_6 = double_5 + double_6;
	}
	if(1)
	{
		int int_6 = 1;
		v_rasqal_free_graph_pattern(int_3);

		int_1 = int_5 * int_6;
	}
	char_3 = char_3;
	v_rasqal_free_solution_modifier(double_7);

}
void v_rasqal_query_results_remove_query_reference()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	int_2 = int_1 * int_2;
	double_2 = double_1 + double_1;
	int_2 = int_2;
	v_rasqal_free_query(long_1);

}
int v_rasqal_data_graph_print( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short_1 = short_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			short_2 = short_1;
		}
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
			short short_3 = 1;
			short short_4 = 1;
			short_4 = short_3 * short_3;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_1 * int_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			char_2 = char_2;
		}
		char controller_11[3];
		fgets(controller_11 ,3 ,stdin);
		if( strcmp( controller_11, "K ") < 0)
		{
			char char_3 = 1;
			char_2 = char_3 + char_1;
		}
	}
	unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
	return int_1;
}
void v_rasqal_free_data_graph( short parameter_1)
{
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		int int_1 = 1;
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int_3 = int_2 * int_2;
}
int v_rasqal_prefix_print( short parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_2;
	long_1 = long_1 * long_1;
	short_2 = short_3 * short_3;
	return int_1;
}
void v_rasqal_free_prefix( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	double_2 = double_1 * double_2;
}
unsigned int v_rasqal_new_variables_table( char parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	v_rasqal_free_variables_table(double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2 + double_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	double_1 = double_2 * double_1;
	short_2 = short_1 + short_2;
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3 + short_3;
	}
	v_rasqal_free_variable(int_2);

	int_2 = v_rasqal_variable_print(long_1,long_2);

	unsigned_int_3 = unsigned_int_2;
	short_1 = short_1 + short_2;
	long_1 = long_3;
	return unsigned_int_1;
}
float v_rasqal_get_query_language_factory( int parameter_1,long parameter_2,short parameter_3)
{
	int int_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int_1 = int_1;
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 + float_1;
		if(1)
		{
			char char_2 = 1;
			char_1 = char_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_2 = 1;
			char char_3 = 1;
			int_1 = int_2 + int_1;
			char_1 = char_1 + char_3;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					short short_1 = 1;
					short short_2 = 1;
					short_2 = short_1 * short_1;
				}
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double_1 = double_1 + double_2;
			}
		}
	}
	return float_2;
}
void v_rasqal_new_query( int parameter_1,unsigned int parameter_2,float parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	float float_3 = 1;
	double double_5 = 1;
	int_1 = v_rasqal_world_open(double_1);

	short_1 = short_1 * short_1;
	long_1 = long_1 * long_1;
	int_1 = int_2 * int_3;
	double_1 = double_1;
	int_3 = v_rasqal_triple_print(int_3,int_1);

	v_rasqal_query_results_remove_query_reference();

	char_1 = char_1 * char_1;
	if(1)
	{
	}
	int_2 = int_4 + int_5;
	if(1)
	{
	}
	float_1 = v_rasqal_get_query_language_factory(int_1,long_2,short_2);

	char_2 = char_2 + char_1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_rasqal_free_triple();

	float_2 = float_2;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	int_3 = int_5 * int_5;
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	unsigned_int_2 = v_rasqal_new_variables_table(char_2);

	int_6 = int_7;
	if(1)
	{
		int_7 = v_rasqal_data_graph_print(double_2,double_1);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	int_2 = v_rasqal_prefix_print(short_2,long_2);

	v_rasqal_free_data_graph(short_3);

	long_2 = long_1 + long_1;
	if(1)
	{
		double_4 = double_2 + double_3;
	}
	v_rasqal_free_prefix(double_3);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_5;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1;
	}
	long_3 = long_3 * long_1;
	if(1)
	{
		int_6 = int_1 * int_4;
	}
	short_1 = v_rasqal_new_evaluation_context(short_1,float_3,int_1);

	double_5 = double_2 * double_4;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_2 = char_3 + char_4;
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		double_1 = double_4;
	}
	if(1)
	{
		int_4 = int_4 + int_4;
	}
	v_rasqal_free_query(long_3);

	long_3 = long_2 + long_2;
}
float v_rasqal_query_results_rdfxml_recognise_syntax( unsigned int parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5,double parameter_6)
{
	float float_1 = 1;
	if(1)
	{
	}
	return float_1;
}
double v_rasqal_query_results_rdfxml_register_factory()
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = v_rasqal_query_results_rdf_init(unsigned_int_1,long_2);

	float_1 = float_1 + float_1;
	short_1 = v_rasqal_query_results_rdf_finish(unsigned_int_2);

	float_1 = v_rasqal_query_results_rdfxml_recognise_syntax(unsigned_int_2,double_1,double_1,double_2,char_1,double_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	char_2 = v_rasqal_query_results_rdf_write(float_2,float_2,float_3,double_1);

	short_1 = short_2 + short_3;
	short_2 = short_2 * short_3;
	unsigned_int_4 = unsigned_int_3;
	short_2 = v_rasqal_query_results_rdf_get_rowsource(double_3,int_1,long_2,unsigned_int_4,float_1,unsigned_int_5);

	float_4 = float_4 + float_1;
	float_2 = float_2 * float_2;
	long_1 = long_2 * long_1;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
	int_1 = int_1;
	unsigned_int_5 = v_rasqal_query_results_format_rdf_copy_syntax_description_from_parser(unsigned_int_5,double_4);

	int_3 = int_1 * int_2;
	char_2 = char_2 + char_1;
	double_1 = double_4 * double_4;
	return double_1;
}
int v_rasqal_init_result_format_rdf()
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	return int_1;
	float_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_1);

	double_1 = v_rasqal_query_results_rdfxml_register_factory();

}
short v_rasqal_query_results_turtle_recognise_syntax( double parameter_1,double parameter_2,unsigned int parameter_3,double parameter_4,double parameter_5,short parameter_6)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
short v_rasqal_query_results_rdf_get_rowsource( double parameter_1,int parameter_2,long parameter_3,unsigned int parameter_4,float parameter_5,unsigned int parameter_6)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	v_rasqal_new_variables_table_from_variables_table(double_1);

	char_1 = char_1 + char_2;
	float_1 = float_1 * float_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ";") > 0)
	{
	}
	float_1 = float_2 + float_2;
	v_rasqal_free_row(unsigned_int_1);

	unsigned_int_2 = v_rasqal_new_rowsource_from_handler(float_3,long_1,unsigned_int_2,short_1,int_1);

	short_2 = short_3;
	char_1 = char_3;
	unsigned_int_2 = unsigned_int_1;
	int_1 = v_rasqal_row_print(int_1,double_1);

	short_1 = short_2;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	return short_3;
}
char v_rasqal_query_results_rdf_write( float parameter_1,float parameter_2,float parameter_3,double parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	short short_4 = 1;
	char char_3 = 1;
	char_1 = v_rasqal_query_results_get_binding_value(int_1,int_1);

	long_2 = long_1 + long_2;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	char_2 = v_rasqal_query_results_get_world(long_1);

	unsigned_int_1 = unsigned_int_1;
	float_3 = float_3 + float_4;
	unsigned_int_1 = unsigned_int_1;
	int_2 = v_rasqal_query_results_is_bindings(float_1);

	float_1 = float_2 * float_3;
	if(1)
	{
		int_3 = int_1 * int_3;
	}
	v_rasqal_log_error_simple(short_1,short_1,unsigned_int_2,char_1,double_1);

	long_4 = long_2 + long_3;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		int_2 = int_4 * int_2;
	}
	long_2 = long_3 * long_4;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	short_1 = short_2 + short_3;
	float_4 = float_5;
	if(1)
	{
		double double_2 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_6 = 1;
		float float_7 = 1;
		unsigned int unsigned_int_7 = 1;
		v_rasqal_query_results_get_binding_name(float_4,int_1);

		int_2 = v_rasqal_query_results_get_bindings_count(short_1);

		int_4 = int_3 * int_1;
		int_4 = v_rasqal_query_results_next(char_2);

		double_2 = double_1 + double_2;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
		float_7 = float_6 + float_2;
		int_5 = v_rasqal_query_results_finished(unsigned_int_6);

		unsigned_int_5 = unsigned_int_7 + unsigned_int_2;
		long_1 = long_2 * long_1;
		int_3 = int_5 + int_5;
	}
	short_4 = short_1 * short_3;
	return char_3;
}
int v_rasqal_literal_write_turtle( int parameter_1,long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double_1 = double_1 + double_1;
	int_2 = int_1 * int_1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	double_2 = double_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_2 + int_3;
	}
	v_rasqal_log_error_simple(short_1,short_1,unsigned_int_1,char_4,double_2);

	double_4 = double_3 * double_2;
	int_6 = int_5 + int_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_5 = double_2 + double_5;
	double_1 = double_2 + double_6;
	int_2 = int_1 * int_5;
	char_5 = char_3 * char_1;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		float_5 = float_3 + float_4;
	}
	if(1)
	{
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_7 = double_4;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		long_2 = long_1 + long_1;
	}
	int_5 = int_6;
	int_5 = int_1;
	char_6 = char_2 + char_2;
	return int_5;
}
char v_rasqal_query_results_turtle_write( char parameter_1,short parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	return char_1;
	char_2 = v_rasqal_query_results_get_world(long_1);

	int_1 = v_rasqal_query_results_is_bindings(float_1);

	v_rasqal_log_error_simple(short_1,short_1,unsigned_int_1,char_3,double_1);

	v_rasqal_query_results_get_binding_name(float_2,int_2);

	int_1 = v_rasqal_query_results_get_bindings_count(short_1);

	int_1 = v_rasqal_query_results_finished(unsigned_int_2);

	char_2 = v_rasqal_query_results_get_binding_value(int_2,int_2);

	int_3 = v_rasqal_literal_write_turtle(int_1,long_1);

	int_3 = v_rasqal_query_results_next(char_1);

}
short v_rasqal_query_results_rdf_finish( unsigned int parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_4 * double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	return short_1;
}
long v_rasqal_query_results_rdf_init( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
		double_2 = double_1 * double_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "L") < 0)
	{
		double_2 = double_2 + double_1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	}
	if(1)
	{
		int_2 = int_2 + int_2;
		double_2 = double_3 * double_3;
	}
	short_1 = short_2;
	double_4 = double_4 + double_3;
	unsigned_int_4 = unsigned_int_4;
	int_2 = int_3 + int_2;
	double_4 = double_4 + double_5;
	short_1 = short_1 * short_3;
	int_2 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_4 = int_2 + int_4;
	return long_1;
}
unsigned int v_rasqal_query_results_format_rdf_copy_syntax_description_from_parser( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				float float_1 = 1;
				float_1 = float_1 * float_1;
			}
		}
	}
	return unsigned_int_2;
}
void v_rasqal_query_results_turtle_register_factory()
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_5 = 1;
	if(1)
	{
		char char_1 = 1;
		if(1)
		{
			double_1 = double_1 * double_1;
		}
		short_1 = short_1 * short_2;
		float_2 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_3 = unsigned_int_3;
		double_3 = double_2 * double_2;
		float_2 = float_2 + float_2;
		char_2 = char_1 * char_1;
		short_1 = short_1;
	}
	if(1)
	{
		int int_2 = 1;
		float float_4 = 1;
		int_1 = int_2;
		if(1)
		{
			int int_3 = 1;
			if(1)
			{
				long_1 = long_1 + long_2;
			}
			char_2 = v_rasqal_query_results_turtle_write(char_3,short_2,unsigned_int_2,unsigned_int_3);

			int_3 = int_2 + int_2;
		}
		short_3 = v_rasqal_query_results_turtle_recognise_syntax(double_1,double_2,unsigned_int_1,double_2,double_4,short_4);

		float_4 = float_3 + float_3;
		if(1)
		{
		}
		if(1)
		{
			float_4 = float_4 + float_2;
		}
	}
	if(1)
	{
		double double_5 = 1;
		int int_6 = 1;
		if(1)
		{
			short short_5 = 1;
			short short_6 = 1;
			short_2 = v_rasqal_query_results_rdf_finish(unsigned_int_2);

			int_1 = int_4;
			if(1)
			{
				double_3 = double_2 * double_2;
			}
			short_2 = short_3 + short_4;
			short_6 = short_3 + short_5;
			unsigned_int_2 = unsigned_int_4;
			double_4 = double_4 * double_5;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		}
		double_4 = double_6 * double_3;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
			unsigned_int_6 = unsigned_int_6 * unsigned_int_5;
		}
		if(1)
		{
			char char_4 = 1;
			double_1 = double_5 * double_6;
			long_1 = long_2;
			unsigned_int_2 = v_rasqal_query_results_format_rdf_copy_syntax_description_from_parser(unsigned_int_4,double_6);

			int_5 = int_5;
			short_1 = v_rasqal_query_results_rdf_get_rowsource(double_6,int_1,long_2,unsigned_int_4,float_3,unsigned_int_2);

			char_3 = char_4 * char_4;
		}
		int_5 = int_5 * int_6;
		float_2 = float_2 * float_1;
		double_3 = double_5;
		long_3 = v_rasqal_query_results_rdf_init(unsigned_int_7,long_3);

		float_1 = float_3 * float_3;
	}
	unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		int_4 = int_5 * int_5;
	}
	char_3 = v_rasqal_query_results_rdf_write(float_5,float_2,float_3,double_4);

}
int v_rasqal_init_result_format_turtle( char parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	return int_1;
	float_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_2);

	v_rasqal_query_results_turtle_register_factory();

}
int v_rasqal_query_results_get_count( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_rasqal_query_results_is_bindings(float_1);

	int_1 = v_rasqal_query_get_offset(long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = short_1;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
float v_rasqal_iostream_write_html_literal( char parameter_1,unsigned int parameter_2,double parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_6 = 1;
	if(1)
	{
		short_2 = short_1 + short_2;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		long long_3 = 1;
		int int_3 = 1;
		long long_4 = 1;
		char char_3 = 1;
		int int_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_2 = double_1 + double_1;
		float_1 = float_1 + float_1;
		short_1 = short_1 + short_2;
		short_5 = short_3 * short_4;
		double_3 = double_2 * double_3;
		v_rasqal_log_error_simple(short_1,short_1,unsigned_int_1,char_1,double_2);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_2;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		long_1 = long_1 + long_2;
		short_2 = short_3;
		float_2 = float_1;
		short_5 = short_3 * short_5;
		float_4 = float_3 + float_1;
		float_5 = float_3 * float_1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_6;
		if(1)
		{
			long_1 = long_2 + long_3;
			long_3 = long_2 * long_1;
			int_1 = int_2 + int_3;
			long_2 = long_2 * long_4;
		}
		long_1 = long_4 * long_3;
		char_1 = char_2 + char_3;
		int_1 = int_4 + int_1;
		if(1)
		{
			int int_5 = 1;
			unsigned int unsigned_int_7 = 1;
			short_3 = short_3 + short_3;
			short_5 = short_3 + short_4;
			int_3 = int_2 * int_5;
			unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
		}
		double_5 = double_4 + double_3;
		double_2 = double_6 * double_4;
	}
	unsigned_int_8 = unsigned_int_6 + unsigned_int_1;
	return float_6;
}
void v_rasqal_query_results_write_html_bindings( double parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		v_rasqal_query_results_get_binding_name(float_1,int_1);

		float_2 = float_1 + float_2;
	}
	char_1 = v_rasqal_query_results_get_binding_value(int_2,int_1);

	int_1 = v_rasqal_query_results_next(char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = v_rasqal_query_results_get_world(long_1);

	float_2 = v_rasqal_iostream_write_html_literal(char_1,unsigned_int_2,double_1);

	int_2 = int_3 + int_3;
	int_3 = v_rasqal_query_results_finished(unsigned_int_2);

	int_3 = v_rasqal_query_results_get_bindings_count(short_1);

	int_1 = v_rasqal_query_results_get_count(unsigned_int_3);

}
void v_rasqal_query_results_write_html_boolean( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	int_1 = v_rasqal_query_results_get_boolean(char_1);

	double_1 = double_2;
}
unsigned int v_rasqal_query_results_write_html( double parameter_1,unsigned int parameter_2,long parameter_3,long parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	v_rasqal_log_error_simple(short_1,short_2,unsigned_int_1,char_1,double_1);

	char_1 = char_1 + char_1;
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_1 = v_rasqal_query_results_is_boolean(double_1);

		short_2 = short_3;
	}
	short_1 = short_3 + short_1;
	char_1 = v_rasqal_query_results_get_type(unsigned_int_4);

	long_1 = long_1 + long_1;
	int_3 = int_2 * int_3;
	double_1 = double_2 + double_2;
	v_rasqal_query_results_write_html_boolean(double_2,short_3);

	long_2 = long_2 * long_3;
	double_4 = double_3 * double_2;
	int_3 = int_2 * int_2;
	if(1)
	{
		v_rasqal_query_results_write_html_bindings(double_2,unsigned_int_3);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	v_rasqal_query_results_get_query();

	int_3 = v_rasqal_query_results_is_bindings(float_1);

	float_3 = float_1 * float_2;
	double_5 = v_rasqal_query_results_type_label();

	float_1 = float_3 * float_3;
	return unsigned_int_4;
}
void v_rasqal_query_results_html_register_factory( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	int_1 = int_1 * int_1;
	unsigned_int_4 = v_rasqal_query_results_write_html(double_2,unsigned_int_4,long_1,long_1);

	char_1 = char_2;
	float_3 = float_1 * float_2;
	int_2 = int_2 + int_2;
}
int v_rasqal_init_result_format_html()
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	return int_1;
	float_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_2);

	v_rasqal_query_results_html_register_factory(double_1);

}
short v_rasqal_query_results_tsv_recognise_syntax( char parameter_1,float parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5,float parameter_6)
{
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	v_rasqal_query_results_sv_score_first_line(float_1,long_1,double_1,short_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	return short_1;
}
short v_rasqal_query_results_get_rowsource_tsv( char parameter_1,char parameter_2,char parameter_3,short parameter_4,int parameter_5,double parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	v_rasqal_free_row(unsigned_int_2);

	float_2 = float_1 * float_2;
	if(1)
	{
	}
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_3 = v_rasqal_new_rowsource_from_handler(float_1,long_1,unsigned_int_1,short_3,int_1);

	long_2 = long_1 * long_1;
	int_1 = v_rasqal_row_print(int_1,double_1);

	double_3 = double_2 * double_3;
	double_4 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	short_1 = short_3;
	long_2 = long_2 + long_1;
	v_rasqal_new_variables_table_from_variables_table(double_3);

	long_3 = long_1 + long_3;
	return short_2;
}
unsigned int v_rasqal_query_results_write_tsv( short parameter_1,char parameter_2,float parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	return unsigned_int_1;
	v_rasqal_query_results_write_sv(unsigned_int_1,unsigned_int_1,char_1,short_1,int_1,int_1,char_1,double_1,int_1);

}
short v_rasqal_query_results_tsv_register_factory( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long_2 = long_1 * long_2;
	float_1 = float_2;
	long_2 = long_2 + long_2;
	double_1 = double_1;
	unsigned_int_1 = v_rasqal_query_results_write_tsv(short_1,char_1,float_3,unsigned_int_2);

	long_2 = long_3 + long_2;
	double_2 = double_2;
	short_1 = v_rasqal_query_results_tsv_recognise_syntax(char_2,float_3,unsigned_int_2,char_3,int_1,float_3);

	double_2 = double_3 + double_3;
	long_1 = long_2 * long_3;
	short_1 = v_rasqal_query_results_get_rowsource_tsv(char_4,char_3,char_3,short_1,int_2,double_4);

	short_1 = short_1 + short_1;
	return short_1;
}
void v_rasqal_query_results_mkr_recognise_syntax( int parameter_1,char parameter_2,double parameter_3,double parameter_4,char parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	v_rasqal_query_results_sv_score_first_line(float_1,long_1,double_1,short_1,unsigned_int_4);

}
float v_rasqal_query_results_get_rowsource_mkr( unsigned int parameter_1,short parameter_2,float parameter_3,short parameter_4,long parameter_5,char parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	short_1 = short_1 + short_2;
	unsigned_int_1 = v_rasqal_new_rowsource_from_handler(float_1,long_1,unsigned_int_1,short_1,int_1);

	short_2 = short_2 * short_3;
	if(1)
	{
	}
	int_2 = v_rasqal_row_print(int_2,double_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_2 * double_1;
	v_rasqal_free_row(unsigned_int_4);

	unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
	double_2 = double_1 + double_2;
	double_1 = double_3 * double_4;
	float_2 = float_2 * float_3;
	double_2 = double_1 + double_2;
	float_2 = float_2;
	short_4 = short_4;
	return float_1;
	v_rasqal_new_variables_table_from_variables_table(double_2);

}
double v_rasqal_query_results_write_mkr( float parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	return double_1;
	v_rasqal_query_results_write_sv(unsigned_int_1,unsigned_int_1,char_1,short_1,int_1,int_2,char_2,double_2,int_3);

}
float v_rasqal_query_results_mkr_register_factory( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	float float_3 = 1;
	short_2 = short_1 * short_2;
	int_1 = int_1 + int_2;
	v_rasqal_query_results_mkr_recognise_syntax(int_2,char_1,double_1,double_1,char_2,char_3);

	long_2 = long_1 + long_1;
	int_2 = int_3 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = v_rasqal_query_results_write_mkr(float_1,unsigned_int_1,int_2,unsigned_int_2);

	double_3 = double_2 + double_1;
	char_2 = char_2 + char_4;
	float_1 = v_rasqal_query_results_get_rowsource_mkr(unsigned_int_2,short_1,float_2,short_1,long_2,char_3);

	double_5 = double_1 * double_4;
	long_3 = long_2 * long_3;
	return float_3;
}
void v_rasqal_query_results_sv_score_first_line( float parameter_1,long parameter_2,double parameter_3,short parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				double_2 = double_2;
				if(1)
				{
					long long_1 = 1;
					long long_2 = 1;
					unsigned int unsigned_int_3 = 1;
					long_1 = long_2;
					unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
				}
			}
		}
	}
}
float v_rasqal_query_results_csv_recognise_syntax( long parameter_1,unsigned int parameter_2,unsigned int parameter_3,char parameter_4,int parameter_5,float parameter_6)
{
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	v_rasqal_query_results_sv_score_first_line(float_1,long_1,double_1,short_1,unsigned_int_1);

	double_2 = double_2 + double_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return float_2;
}
char v_rasqal_query_results_get_rowsource_csv( short parameter_1,float parameter_2,unsigned int parameter_3,short parameter_4,long parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	short_1 = short_1 + short_2;
	double_3 = double_3 + double_3;
	short_1 = short_1 * short_1;
	int_1 = v_rasqal_row_print(int_2,double_4);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	v_rasqal_free_row(unsigned_int_1);

	float_2 = float_1 * float_1;
	float_4 = float_3 * float_4;
	double_2 = double_3 + double_3;
	v_rasqal_new_variables_table_from_variables_table(double_4);

	int_4 = int_2 * int_3;
	long_3 = long_1 + long_2;
	return char_1;
	unsigned_int_3 = v_rasqal_new_rowsource_from_handler(float_1,long_3,unsigned_int_1,short_3,int_2);

}
float v_rasqal_iostream_write_csv_string( short parameter_1,char parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 + float_2;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = float_3 * float_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			short short_2 = 1;
			long_2 = long_1 * long_1;
			short_1 = short_1 * short_2;
		}
	}
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_3 = char_2 * char_1;
		if(1)
		{
			char char_4 = 1;
			char_4 = char_4;
		}
		double_1 = double_1 + double_2;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	return float_3;
}
void v_rasqal_query_results_write_sv( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4,int parameter_5,int parameter_6,char parameter_7,double parameter_8,int parameter_9)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	if(1)
	{
		int_1 = v_rasqal_query_results_next(char_1);

		double_2 = double_1 + double_2;
	}
	int_2 = int_1 * int_1;
	float_2 = float_1 + float_2;
	float_3 = float_3 + float_2;
	float_1 = v_rasqal_iostream_write_csv_string(short_1,char_2,unsigned_int_1);

	short_1 = short_2 * short_3;
	char_2 = char_2;
	short_5 = short_2 + short_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		v_rasqal_query_results_get_query();

		float_2 = v_rasqal_xsd_datatype_uri_to_type(float_3,unsigned_int_2);

		long_1 = long_1;
		double_3 = double_2 + double_1;
		if(1)
		{
			int_3 = v_rasqal_query_results_is_bindings(float_2);

			int_4 = int_4;
			double_4 = double_1 * double_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float_3 = float_1 + float_1;
			}
			float_1 = float_2 * float_3;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				v_rasqal_log_error_simple(short_2,short_2,unsigned_int_4,char_3,double_4);

				int_1 = v_rasqal_query_results_get_bindings_count(short_6);

				unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
			}
			short_5 = short_3 * short_3;
		}
		int_6 = int_5 * int_2;
		v_rasqal_query_results_get_binding_name(float_1,int_3);

		double_4 = double_5 + double_1;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			short_5 = short_6 * short_3;
			int_3 = v_rasqal_query_results_finished(unsigned_int_5);

			unsigned_int_7 = unsigned_int_6 + unsigned_int_3;
		}
		if(1)
		{
			short_2 = short_4;
		}
	}
	if(1)
	{
		int int_7 = 1;
		char_2 = v_rasqal_query_results_get_binding_value(int_5,int_5);

		double_4 = double_4;
		int_7 = int_4 * int_5;
		int_3 = int_4 * int_6;
	}
	if(1)
	{
		int_5 = int_2;
		int_5 = int_5;
		int_2 = int_1 * int_5;
	}
}
short v_rasqal_query_results_write_csv( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,float parameter_4)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	return short_1;
	v_rasqal_query_results_write_sv(unsigned_int_1,unsigned_int_2,char_1,short_2,int_1,int_2,char_2,double_1,int_3);

}
float v_rasqal_query_results_csv_register_factory( int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	char_1 = v_rasqal_query_results_get_rowsource_csv(short_1,float_1,unsigned_int_1,short_2,long_1,char_1);

	int_1 = int_1;
	short_2 = v_rasqal_query_results_write_csv(unsigned_int_2,unsigned_int_3,double_1,float_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_2 + long_3;
	long_5 = long_4 + long_4;
	short_2 = short_3 + short_4;
	float_2 = float_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_3 = int_2 * int_3;
	float_2 = v_rasqal_query_results_csv_recognise_syntax(long_1,unsigned_int_1,unsigned_int_4,char_1,int_2,float_3);

	int_3 = int_2;
	return float_1;
}
int v_rasqal_init_result_format_sv( long parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	float_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_1);

	float_2 = v_rasqal_query_results_csv_register_factory(int_1);

	float_1 = v_rasqal_query_results_mkr_register_factory(double_1);

	short_1 = v_rasqal_query_results_tsv_register_factory(long_1);

}
int v_rasqal_query_results_write_table_boolean( char parameter_1,short parameter_2,long parameter_3)
{
	int int_2 = 1;
	char char_1 = 1;
	if(1)
	{
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_2 = int_1 * int_1;
		int_2 = v_rasqal_query_results_get_boolean(char_1);

		float_1 = float_2;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_2 = int_2 + int_2;
		short_2 = short_1 * short_1;
		long_1 = long_2;
	}
	return int_2;
}
short v_rasqal_iostream_write_counted_string_padded( int parameter_1,short parameter_2,int parameter_3,double parameter_4,float parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_1 * int_2;
		}
	}
	return short_1;
}
unsigned int v_rasqal_alloc_memory( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long v_rasqal_free_chararray()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_3 = double_1 * double_2;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2 + int_1;
		}
	}
	float_2 = float_1 + float_1;
	return long_1;
}
int v_rasqal_query_results_write_table_bindings( long parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	float float_1 = 1;
	int int_4 = 1;
	short short_5 = 1;
	char char_2 = 1;
	int int_5 = 1;
	double double_4 = 1;
	int_1 = v_rasqal_query_results_next(char_1);

	short_3 = short_1 + short_2;
	int_1 = v_rasqal_query_results_get_bindings_count(short_3);

	int_1 = int_1 + int_2;
	int_1 = int_1 + int_3;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	v_rasqal_literal_write(short_1,char_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = v_rasqal_query_results_finished(unsigned_int_3);

	int_3 = int_1 + int_1;
	char_1 = v_rasqal_query_results_get_world(long_1);

	long_2 = v_rasqal_free_chararray();

	double_3 = double_2 * double_3;
	unsigned_int_4 = v_rasqal_alloc_memory(char_1);

	short_2 = short_4 + short_3;
	v_rasqal_query_results_get_binding_name(float_1,int_4);

	short_3 = short_5;
	return int_3;
	char_2 = v_rasqal_query_results_get_binding_value(int_2,int_2);

	short_4 = v_rasqal_iostream_write_counted_string_padded(int_3,short_3,int_5,double_4,float_1);

}
short v_rasqal_query_results_write_table( float parameter_1,long parameter_2,short parameter_3,char parameter_4)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	short short_2 = 1;
	v_rasqal_log_error_simple(short_1,short_1,unsigned_int_1,char_1,double_1);

	double_1 = double_1 * double_1;
	int_1 = v_rasqal_query_results_write_table_bindings(long_1,int_2,long_2);

	char_1 = char_1 * char_2;
	char_2 = v_rasqal_query_results_get_type(unsigned_int_1);

	double_1 = v_rasqal_query_results_type_label();

	int_4 = int_1 + int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int int_5 = 1;
		int_2 = v_rasqal_query_results_write_table_boolean(char_3,short_2,long_2);

		int_5 = int_4 + int_1;
	}
	return short_2;
	v_rasqal_query_results_get_query();

}
int v_rasqal_query_results_table_register_factory( char parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_4 = 1;
	double_1 = double_1;
	short_1 = short_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 + long_2;
	char_2 = char_1 + char_1;
	double_1 = double_1 + double_1;
	short_2 = v_rasqal_query_results_write_table(float_1,long_4,short_2,char_2);

	char_1 = char_2 + char_2;
	return int_2;
}
int v_rasqal_init_result_format_table( float parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	return int_1;
	float_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_1);

	int_2 = v_rasqal_query_results_table_register_factory(char_1);

}
int v_rasqal_query_get_distinct( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	return int_2;
}
float v_rasqal_query_get_order_condition( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	return float_1;
}
double v_rasqal_iostream_write_json_boolean( int parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double_3 = double_1 * double_2;
	char_1 = char_1;
	short_3 = short_1 * short_2;
	if(1)
	{
		double double_4 = 1;
		double_4 = double_3 * double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	return double_5;
}
void v_rasqal_query_results_get_query()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
long v_rasqal_query_results_write_json1( double parameter_1,char parameter_2,char parameter_3,double parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	v_rasqal_query_results_get_query();

	int_1 = v_rasqal_query_get_distinct(unsigned_int_1);

	char_2 = char_1 + char_1;
	if(1)
	{
		char_1 = v_rasqal_query_results_get_binding_value(int_2,int_3);

		int_3 = v_rasqal_query_results_next(char_2);

		double_2 = double_1 * double_2;
	}
	if(1)
	{
		char_1 = v_rasqal_query_results_get_type(unsigned_int_1);

		float_1 = v_rasqal_query_get_order_condition(float_2,int_4);

		double_3 = double_2;
	}
	v_rasqal_log_error_simple(short_1,short_2,unsigned_int_1,char_3,double_2);

	double_1 = v_rasqal_iostream_write_json_boolean(int_3,double_3,int_5);

	char_1 = char_3 * char_1;
	double_3 = v_rasqal_query_results_type_label();

	int_4 = v_rasqal_query_results_is_bindings(float_3);

	v_rasqal_query_results_get_binding_name(float_1,int_3);

	int_3 = v_rasqal_query_results_get_boolean(char_3);

	int_5 = v_rasqal_query_results_finished(unsigned_int_2);

	double_3 = double_1;
	return long_1;
	char_3 = v_rasqal_query_results_get_world(long_1);

	int_1 = v_rasqal_query_results_is_boolean(double_1);

	int_2 = v_rasqal_query_results_get_bindings_count(short_3);

}
char v_rasqal_query_results_json_register_factory()
{
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = v_rasqal_query_results_write_json1(double_1,char_1,char_1,double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_1;
	char_1 = char_1 * char_1;
	char_1 = char_2 + char_1;
	double_2 = double_2;
	char_4 = char_2 + char_3;
	short_1 = short_1 * short_2;
	double_1 = double_2 + double_1;
	return char_4;
}
int v_rasqal_init_result_format_json( double parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	return int_1;
	float_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_1);

	char_1 = v_rasqal_query_results_json_register_factory();

}
int v_rasqal_sparql_xml_free_context( double parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		double_2 = double_1 * double_2;
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
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		v_rasqal_free_variables_table(double_3);

		long_3 = long_1 * long_2;
	}
	double_1 = double_4 + double_2;
	return int_1;
}
int v_rasqal_sparql_xml_start( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2;
	float_1 = float_1 * float_1;
	int_3 = int_1 * int_2;
	return int_2;
}
short v_rasqal_rowsource_sparql_xml_get_boolean( float parameter_1,int parameter_2,double parameter_3,long parameter_4,long parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char_1 = char_1 * char_2;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	int_3 = v_rasqal_sparql_xml_start(int_4);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = v_rasqal_sparql_xml_init_context(float_1,unsigned_int_2,char_2,long_1);

	int_3 = v_rasqal_sparql_xml_free_context(double_1);

	short_2 = short_1 + short_1;
	if(1)
	{
		int_2 = int_3 + int_4;
	}
	return short_3;
}
short v_rasqal_query_results_xml_recognise_syntax( long parameter_1,long parameter_2,double parameter_3,char parameter_4,unsigned int parameter_5,long parameter_6)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
void v_rasqal_expression_print_op( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int_1 = int_2;
	int_3 = int_3 + int_3;
	double_1 = v_rasqal_expression_op_label(double_1);

	int_3 = int_3;
}
int v_rasqal_expression_print( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_8 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_9 = 1;
	float float_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_10 = 1;
	double double_11 = 1;
	int int_7 = 1;
	double double_12 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_4 = 1;
	char char_6 = 1;
	double_1 = double_1;
	short_3 = short_1 + short_2;
	char_1 = char_1 + char_1;
	double_3 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	double_4 = double_3 * double_3;
	double_2 = double_3 + double_5;
	double_7 = double_6 * double_7;
	if(1)
	{
		double_5 = double_4 * double_3;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		int_1 = int_2 * int_2;
		double_6 = double_6;
	}
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	int_2 = int_2 * int_2;
	v_rasqal_expression_print_op(char_2,long_2);

	double_8 = double_1;
	long_3 = long_2 + long_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 * int_3;
	short_4 = short_2 * short_1;
	int_4 = int_4 * int_1;
	float_1 = float_1 * float_1;
	double_3 = double_5 * double_3;
	float_1 = float_2 * float_3;
	if(1)
	{
		long_2 = long_1 + long_3;
	}
	unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
	double_9 = double_2 + double_9;
	float_4 = float_4 * float_1;
	short_1 = short_3 * short_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	float_1 = float_1 + float_2;
	int_4 = int_4 * int_4;
	int_1 = int_4 * int_4;
	int_1 = int_1 * int_5;
	double_8 = double_4 + double_6;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	int_4 = int_5;
	char_2 = char_3 * char_4;
	char_4 = char_5 + char_2;
	int_5 = int_2 + int_6;
	unsigned_int_3 = unsigned_int_6 * unsigned_int_1;
	long_1 = long_3 * long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_1;
	float_2 = float_2 * float_4;
	double_4 = double_10 * double_10;
	long_2 = long_1;
	float_3 = float_3 + float_1;
	double_7 = double_3 * double_11;
	if(1)
	{
		long_3 = long_2 + long_3;
	}
	float_3 = float_2 + float_2;
	float_3 = float_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		short_2 = short_1 * short_4;
	}
	short_3 = short_2 * short_4;
	int_7 = int_4 + int_2;
	char_4 = char_4 + char_1;
	double_12 = double_5 * double_6;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	short_1 = short_5 * short_1;
	int_3 = int_6 + int_6;
	int_2 = v_rasqal_literal_print(unsigned_int_2,unsigned_int_4);

	unsigned_int_7 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
	unsigned_int_6 = unsigned_int_8 + unsigned_int_8;
	long_3 = long_4 + long_3;
	char_1 = char_6 + char_3;
	return int_4;
}
int v_rasqal_variable_print( long parameter_1,long parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	if(1)
	{
		int_1 = v_rasqal_literal_print(unsigned_int_1,unsigned_int_2);

		double_3 = double_1 + double_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1;
		int_1 = v_rasqal_expression_print(char_1,char_2);

		int_3 = int_2 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		double_3 = double_3 + double_2;
		unsigned_int_1 = unsigned_int_3;
	}
	short_1 = short_2;
	double_4 = double_1 * double_1;
	return int_3;
}
unsigned int v_rasqal_new_rowsource_from_handler( float parameter_1,long parameter_2,unsigned int parameter_4,short parameter_5,int parameter_6)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_6 = 1;
	long long_2 = 1;
	v_rasqal_new_variables_table_from_variables_table(double_1);

	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	v_rasqal_free_variable(int_1);

	int_2 = int_3 + int_4;
	if(1)
	{
		if(1)
		{
			int_4 = int_3 + int_2;
		}
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_4;
	double_2 = double_2 + double_1;
	int_4 = int_5 + int_3;
	double_1 = double_3;
	v_rasqal_free_rowsource(long_1);

	int_1 = int_4 + int_2;
	double_1 = double_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_3 + double_4;
	}
	double_6 = double_2 + double_4;
	if(1)
	{
		short short_3 = 1;
		short_1 = short_1 * short_3;
	}
	if(1)
	{
		int_3 = v_rasqal_variable_print(long_1,long_2);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		int_2 = int_5 * int_4;
	}
	return unsigned_int_2;
}
void v_rasqal_new_variables_table_from_variables_table( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_2;
}
int v_rasqal_row_print( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	int_1 = v_rasqal_literal_print(unsigned_int_1,unsigned_int_1);

	int_2 = int_1 + int_1;
	char_1 = char_1 * char_2;
	short_2 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_1 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			if(1)
			{
				char char_3 = 1;
				char_2 = char_1 * char_3;
			}
		}
		double_2 = double_1 * double_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		}
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		short short_3 = 1;
		double_2 = double_2 * double_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short_1 = short_2;
			if(1)
			{
				double double_3 = 1;
				double_1 = double_3;
			}
			unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		}
		short_3 = short_2 + short_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	long_1 = long_1;
	return int_1;
	unsigned_int_1 = v_rasqal_rowsource_get_variable_by_offset(long_1,int_2);

}
int v_rasqal_row_set_value_at( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	v_rasqal_free_literal();

	int_3 = int_1 + int_2;
	return int_3;
	short_1 = v_rasqal_new_literal_from_literal(long_1);

}
void v_rasqal_sparql_xml_sax2_end_element_handler(int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_4 = 1;
	long long_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	long long_5 = 1;
	double double_8 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_10 = 1;
	long long_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_6 = 1;
	char char_7 = 1;
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1;
	v_rasqal_free_literal();

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	double_1 = double_2 * double_2;
	int_1 = int_1 + int_1;
	char_1 = char_1 * char_1;
	if(1)
	{
		double_2 = double_3;
		double_1 = v_rasqal_new_string_literal_node(long_1,short_2,unsigned_int_5,float_1);

		int_1 = int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_5 = double_4 * double_1;
			int_2 = int_1;
		}
	}
	if(1)
	{
		char char_3 = 1;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_4;
		char_3 = char_1 * char_2;
	}
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		double_4 = double_5 + double_1;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		float_3 = float_2 + float_2;
	}
	int_3 = int_2 + int_1;
	if(1)
	{
		unsigned_int_5 = unsigned_int_6 + unsigned_int_7;
		if(1)
		{
			int_2 = v_rasqal_row_set_value_at(unsigned_int_4,int_2,int_3);

			int_3 = int_4 * int_3;
		}
		if(1)
		{
			long_2 = long_1 + long_1;
		}
		double_4 = double_2 + double_1;
	}
	short_1 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		int int_5 = 1;
		float_4 = float_5;
		double_3 = double_4 * double_4;
		double_6 = v_rasqal_new_uri_literal(short_2,double_2);

		unsigned_int_8 = unsigned_int_4 * unsigned_int_7;
		long_2 = long_2 * long_2;
		unsigned_int_6 = unsigned_int_7 + unsigned_int_4;
		if(1)
		{
			unsigned_int_3 = unsigned_int_6 + unsigned_int_8;
		}
		if(1)
		{
			int_4 = int_1;
		}
		if(1)
		{
			double_2 = double_2 * double_7;
		}
		if(1)
		{
			long_4 = long_1 * long_3;
			unsigned_int_2 = unsigned_int_7 + unsigned_int_1;
			int_2 = int_3 * int_2;
		}
		unsigned_int_8 = unsigned_int_6 * unsigned_int_4;
		char_4 = char_2 * char_4;
		long_5 = long_5 * long_3;
		int_5 = int_5 + int_4;
	}
	unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
	if(1)
	{
		float float_6 = 1;
		float_6 = float_1 * float_4;
		char_1 = char_4 + char_1;
		long_1 = long_1 * long_2;
		double_5 = double_7 * double_4;
		double_1 = double_8 * double_1;
		long_3 = long_1;
		int_3 = int_2 * int_4;
		int_1 = int_2 + int_2;
	}
	double_8 = double_2;
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		int int_6 = 1;
		short short_3 = 1;
		unsigned_int_2 = unsigned_int_9 + unsigned_int_4;
		int_6 = int_3;
		char_4 = char_4 * char_5;
		long_1 = long_4 * long_2;
		short_3 = short_3 + short_1;
		unsigned_int_6 = unsigned_int_7 * unsigned_int_3;
		float_3 = float_5 * float_5;
	}
	unsigned_int_4 = unsigned_int_10;
	if(1)
	{
		unsigned int unsigned_int_11 = 1;
		char_2 = char_4 * char_4;
		short_1 = short_2;
		unsigned_int_3 = v_rasqal_new_simple_literal(unsigned_int_6,long_5,long_6);

		unsigned_int_7 = unsigned_int_2 + unsigned_int_11;
	}
	short_5 = short_4 + short_2;
	int_8 = int_7 + int_4;
	char_5 = char_6 * char_7;
	if(1)
	{
		char_5 = char_7 + char_1;
		float_4 = float_2 * float_1;
	}
}
unsigned int v_rasqal_sparql_xml_sax2_characters_handler(int parameter_2,short parameter_3,int parameter_4)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		char_2 = char_1 + char_1;
		char_3 = char_2 + char_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
	return unsigned_int_2;
}
float v_rasqal_new_row_common( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long_1 = long_1 + long_2;
	double_1 = double_2;
	if(1)
	{
	}
	char_1 = char_1;
	v_rasqal_free_row(unsigned_int_1);

	int_1 = int_1 + int_1;
	char_2 = char_2 * char_1;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3;
		if(1)
		{
			char_2 = char_2 + char_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	int_3 = int_2 * int_2;
	return float_1;
}
int v_rasqal_rowsource_get_size( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return int_1;
	int_1 = v_rasqal_rowsource_ensure_variables(long_1);

}
int v_rasqal_new_rowsource_from_rowsource( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	return int_1;
}
char v_rasqal_new_row( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long_1 = long_1 * long_2;
	float_1 = v_rasqal_new_row_common(unsigned_int_1,int_1,int_1);

	int_3 = int_1 + int_2;
	float_1 = float_2 + float_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	short_1 = short_1 * short_1;
	if(1)
	{
		float float_4 = 1;
		int_3 = v_rasqal_rowsource_get_size(char_1);

		float_4 = float_1 + float_1;
	}
	return char_1;
	int_2 = v_rasqal_new_rowsource_from_rowsource(double_2);

}
int v_rasqal_rowsource_get_variable_offset_by_name( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		short short_1 = 1;
		int_3 = int_3 + int_4;
		short_1 = short_1 * short_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double_1 = double_1 * double_2;
			int_2 = v_rasqal_rowsource_ensure_variables(long_1);

			unsigned_int_4 = unsigned_int_3;
		}
	}
	return int_2;
}
int v_rasqal_rowsource_add_variable( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	unsigned_int_2 = v_rasqal_new_variable_from_variable();

	short_3 = short_3 + short_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	return int_1;
	int_2 = v_rasqal_rowsource_get_variable_offset_by_name(unsigned_int_4,char_1);

}
float v_rasqal_sparql_xml_sax2_start_element_handler(char parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_8 = 1;
	short short_3 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_6 = 1;
	float float_5 = 1;
	long long_4 = 1;
	int int_10 = 1;
	char char_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float_1 = float_1 * float_1;
	int_3 = int_1 * int_2;
	char_2 = char_1 * char_2;
	long_1 = v_rasqal_variables_table_add2(int_4,double_1,int_4,long_1,long_1);

	v_rasqal_free_variable(int_4);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_5 = int_2;
	int_4 = int_6 + int_6;
	double_1 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_2 = long_2;
			short_1 = short_2;
		}
	}
	if(1)
	{
		double_2 = double_3 + double_4;
		int_1 = int_2 + int_4;
	}
	if(1)
	{
		char_1 = char_2;
		double_4 = double_3 + double_2;
	}
	char_4 = char_3 + char_3;
	long_1 = long_2 * long_2;
	float_1 = float_1 + float_2;
	int_2 = int_7;
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_2 = double_4 + double_3;
			if(1)
			{
				char_4 = v_rasqal_new_row(int_8);

				int_4 = int_3 + int_4;
				long_2 = long_2 * long_1;
			}
			if(1)
			{
				short short_4 = 1;
				short_4 = short_3 + short_3;
			}
			if(1)
			{
				int_3 = int_4;
			}
		}
	}
	if(1)
	{
		int_9 = v_rasqal_rowsource_add_variable(double_3,long_2);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
		if(1)
		{
			long long_3 = 1;
			int_4 = int_7 + int_3;
			long_2 = long_3 * long_3;
		}
	}
	if(1)
	{
		short_3 = short_1;
		float_3 = float_4;
		if(1)
		{
			double double_5 = 1;
			float_2 = float_1 * float_2;
			double_2 = double_5 + double_6;
		}
	}
	char_3 = char_4 * char_1;
	if(1)
	{
		float_4 = float_5 * float_1;
		double_6 = double_2 + double_6;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	}
	long_1 = long_1 * long_4;
	int_1 = int_7 + int_10;
	short_1 = short_2 + short_1;
	int_10 = v_rasqal_rowsource_get_variable_offset_by_name(unsigned_int_5,char_5);

	float_5 = float_3 * float_6;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_1;
	return float_4;
}
int v_rasqal_sparql_xml_init_context( float parameter_1,unsigned int parameter_2,char parameter_3,long parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = char_1 * char_1;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	float_1 = v_rasqal_sparql_xml_sax2_start_element_handler(char_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_rasqal_sparql_xml_sax2_end_element_handler(int_1);

	float_1 = float_1 * float_1;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_4 = int_3 + int_4;
	if(1)
	{
	}
	double_1 = double_2 + double_3;
	unsigned_int_4 = v_rasqal_sparql_xml_sax2_characters_handler(int_3,short_1,int_2);

	short_1 = short_2;
	float_2 = float_1 + float_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	return int_1;
}
char v_rasqal_query_results_get_rowsource_sparql_xml( short parameter_1,long parameter_2,short parameter_3,int parameter_4,double parameter_5,double parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 + int_2;
	int_2 = int_2 + int_1;
	if(1)
	{
	}
	v_rasqal_free_row(unsigned_int_1);

	short_1 = short_1 * short_1;
	int_3 = v_rasqal_row_print(int_4,double_1);

	unsigned_int_2 = v_rasqal_new_rowsource_from_handler(float_1,long_1,unsigned_int_2,short_1,int_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return char_1;
	int_1 = v_rasqal_sparql_xml_init_context(float_1,unsigned_int_3,char_1,long_1);

	v_rasqal_new_variables_table_from_variables_table(double_1);

}
double v_rasqal_query_results_next_internal( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "K") < 0)
	{
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		v_rasqal_free_row(unsigned_int_1);

		long_1 = long_1 * long_2;
		float_1 = float_1 + float_2;
	}
	return double_1;
	long_2 = v_rasqal_query_results_ensure_have_row_internal(short_1);

}
int v_rasqal_query_results_next( char parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double_1 = v_rasqal_query_results_next_internal(short_1);

	char_1 = char_2;
	if(1)
	{
	}
	return int_1;
	int_2 = v_rasqal_query_results_is_bindings(float_1);

}
char v_rasqal_query_results_get_binding_value( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long_2 = long_1 + long_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = v_rasqal_query_results_is_bindings(float_1);

	unsigned_int_1 = v_rasqal_query_results_get_current_row(int_1);

	char_1 = char_1;
	if(1)
	{
	}
	long_1 = long_3;
	return char_1;
}
int v_rasqal_query_results_get_bindings_count( short parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = v_rasqal_query_results_is_bindings(float_1);

	long_1 = v_rasqal_query_results_ensure_have_row_internal(short_1);

	int_2 = int_2 + int_3;
	return int_3;
}
int v_rasqal_query_results_finished( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_1 = v_rasqal_query_results_ensure_have_row_internal(short_1);

		long_2 = long_2 + long_3;
	}
	return int_1;
	int_2 = v_rasqal_query_results_is_bindings(float_1);

}
int v_rasqal_query_results_get_boolean( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int_1 = int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	short_1 = short_1 * short_2;
	short_3 = short_3 + short_1;
	int_1 = v_rasqal_query_results_is_boolean(double_1);

	int_3 = int_3 + int_1;
	return int_1;
	long_1 = v_rasqal_query_results_ensure_have_row_internal(short_2);

}
int v_rasqal_query_results_is_boolean( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_2;
	return int_1;
}
int v_rasqal_variables_table_contains( double parameter_1,char parameter_2,long parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	return int_1;
	double_1 = v_rasqal_variables_table_get_by_name(unsigned_int_1,float_1,char_1);

}
int v_rasqal_variables_table_add_variable( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 + double_1;
	long_2 = long_1 * long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ".]") > 0)
	{
	}
	long_1 = long_3 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_2 = float_1 + float_1;
	double_4 = double_2 * double_3;
	long_2 = long_4;
	int_1 = int_1;
	double_3 = double_4 + double_5;
	if(1)
	{
	}
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	long_2 = long_2;
	double_1 = double_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_2 = v_rasqal_variables_table_contains(double_5,char_1,long_5);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	if(1)
	{
		long_2 = long_5 + long_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_2 = 1;
			float_1 = float_1 * float_1;
			char_2 = char_2;
			double_2 = double_5 + double_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = v_rasqal_new_variable_from_variable();

		long_5 = long_4 * long_4;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
	}
	return int_2;
}
unsigned int v_rasqal_new_variable_from_variable()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	double_1 = double_1 * double_2;
	return unsigned_int_1;
}
long v_rasqal_variables_table_add2( int parameter_1,double parameter_2,int parameter_3,long parameter_4,long parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_6 = 1;
	float float_5 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
		unsigned_int_1 = v_rasqal_new_variable_from_variable();

		int_1 = int_1 * int_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "E") < 0)
	{
		double double_1 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		char_1 = char_1;
	}
	char_1 = char_2;
	if(1)
	{
	}
	double_3 = v_rasqal_variables_table_get_by_name(unsigned_int_2,float_2,char_2);

	short_1 = v_rasqal_new_literal_from_literal(long_1);

	int_2 = int_1 + int_1;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_3 + float_2;
	}
	long_3 = long_2 * long_2;
	double_3 = double_3 * double_2;
	int_3 = int_1 + int_3;
	char_4 = char_2 + char_3;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	long_5 = long_4 * long_5;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_5 = unsigned_int_7 * unsigned_int_5;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		int_2 = v_rasqal_variables_table_add_variable(long_6,float_5);

		short_1 = short_2 + short_3;
	}
	return long_3;
}
char v_rasqal_rowsource_print_header( long parameter_1,short parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short_1 = short_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		unsigned_int_5 = unsigned_int_4;
		if(1)
		{
			char char_1 = 1;
			char_1 = char_2;
		}
		if(1)
		{
			float float_1 = 1;
			float_3 = float_1 + float_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_3 = int_1 * int_2;
		}
		if(1)
		{
			double double_1 = 1;
			double_1 = double_1 * double_1;
		}
	}
	float_3 = float_4 * float_2;
	return char_2;
	unsigned_int_3 = v_rasqal_rowsource_get_variable_by_offset(long_2,int_3);

}
int v_rasqal_rowsource_ensure_variables( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char_1 = v_rasqal_rowsource_print_header(long_1,short_1);

		double_4 = double_3 * double_4;
		int_2 = int_1 * int_1;
	}
	return int_2;
}
unsigned int v_rasqal_rowsource_get_variable_by_offset( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	return unsigned_int_1;
	int_1 = v_rasqal_rowsource_ensure_variables(long_1);

}
long v_rasqal_row_get_variable_by_offset( unsigned int parameter_1,int parameter_2)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	return long_1;
	unsigned_int_1 = v_rasqal_rowsource_get_variable_by_offset(long_1,int_1);

}
void v_rasqal_free_variables_table( double parameter_1)
{
	double double_1 = 1;
	double double_3 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	double_3 = double_3 + double_1;
}
void v_rasqal_free_rowsource( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "d!") < 0)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		v_rasqal_free_variables_table(double_1);

		float_1 = float_1 + float_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	int_3 = int_3 * int_4;
}
void v_rasqal_free_row( unsigned int parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
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
		int_2 = int_1 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				int int_3 = 1;
				v_rasqal_free_rowsource(long_1);

				int_1 = int_2 + int_3;
			}
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				long long_2 = 1;
				long_2 = long_2 + long_2;
			}
		}
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	v_rasqal_free_literal();

	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
}
double v_rasqal_variables_table_get_by_name( unsigned int parameter_1,float parameter_2,char parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double_1 = v_rasqal_variables_table_get(short_1,int_1);

	int_2 = int_1 + int_1;
	int_3 = int_3 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return double_2;
}
double v_rasqal_variables_table_get( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_3 + int_2;
	}
	if(1)
	{
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_4 = int_3 * int_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	return double_1;
}
int v_rasqal_variables_table_get_named_variables_count( float parameter_1)
{
	int int_1 = 1;
	return int_1;
}
double v_rasqal_query_results_update_query_bindings( int parameter_1,float parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double_1 = v_rasqal_variables_table_get_by_name(unsigned_int_1,float_1,char_1);

	v_rasqal_variable_set_value(unsigned_int_1,int_1);

	short_2 = short_1 + short_1;
	char_2 = char_1 + char_1;
	long_2 = long_1 * long_2;
	int_2 = int_1 * int_2;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		int_1 = v_rasqal_variables_table_get_named_variables_count(float_2);

		long_2 = long_1 * long_1;
	}
	short_3 = v_rasqal_new_literal_from_literal(long_2);

	long_2 = long_3 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = int_1;
		long_3 = v_rasqal_query_results_ensure_have_row_internal(short_3);

		double_2 = v_rasqal_variables_table_get(short_1,int_1);

		double_2 = double_1 * double_1;
		int_2 = int_1 + int_3;
		unsigned_int_3 = unsigned_int_2;
		float_1 = float_1 + float_1;
		if(1)
		{
			int_3 = int_1 + int_3;
		}
		if(1)
		{
			char char_3 = 1;
			char_1 = char_3;
		}
	}
	return double_2;
}
float v_rasqal_literal_as_node( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	int_1 = int_1 * int_1;
	int_2 = int_1 + int_1;
	double_3 = double_2 + double_2;
	int_4 = int_3 + int_3;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1;
	long_1 = long_1;
	if(1)
	{
		float float_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_6 = 1;
		float_1 = float_1 * float_1;
		float_2 = float_1 + float_1;
		double_3 = double_3 + double_1;
		short_1 = short_1 + short_1;
		short_2 = v_rasqal_new_literal_from_literal(long_2);

		unsigned_int_3 = unsigned_int_4;
		long_4 = long_1 + long_3;
		if(1)
		{
			short_3 = v_rasqal_xsd_datatype_type_to_uri(int_2,long_4);

			double_3 = double_2;
		}
		v_rasqal_free_literal();

		float_2 = float_1 + float_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
			if(1)
			{
				short short_4 = 1;
				short short_5 = 1;
				short_5 = short_4 * short_5;
			}
		}
		if(1)
		{
			short short_6 = 1;
			short_3 = short_6;
		}
		unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_6;
	}
	int_1 = int_3 * int_4;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
	return float_1;
}
int v_rasqal_row_to_nodes()
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char_1 = char_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "p") > 0)
		{
			double double_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_1 = double_1;
			int_2 = int_1 + int_1;
			if(1)
			{
			}
			v_rasqal_free_literal();

			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			float_1 = v_rasqal_literal_as_node(long_1);

			double_2 = double_2 + double_3;
		}
	}
	return int_1;
}
char v_rasqal_new_row_from_row( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	return char_1;
}
int v_rasqal_query_check_limit_offset_core( int parameter_1,int parameter_2,int parameter_3)
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
		if(1)
		{
			char controller_5[2];
			fgets(controller_5 ,2 ,stdin);
			if( strcmp( controller_5, "@") == 0)
			{
			}
		}
	}
	if(1)
	{
		if(1)
		{
		}
	}
	return int_1;
}
int v_rasqal_query_get_offset( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_rasqal_query_get_limit( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_rasqal_query_check_limit_offset( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_2;
	int_1 = v_rasqal_query_get_limit(long_1);

	float_2 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = v_rasqal_query_check_limit_offset_core(int_1,int_3,int_1);

	int_1 = int_3 * int_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3 * short_3;
	}
	double_3 = double_1 * double_2;
	return int_4;
	int_1 = v_rasqal_query_get_offset(long_1);

}
char v_rasqal_query_results_get_row_from_saved( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	double_1 = v_rasqal_query_results_update_query_bindings(int_1,float_1);

	double_2 = double_1 + double_1;
	long_1 = long_1;
	int_3 = int_2 * int_2;
	int_2 = v_rasqal_row_to_nodes();

	double_3 = double_3 * double_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_1;
	float_1 = float_1;
	char_1 = v_rasqal_new_row_from_row(float_1);

	double_1 = double_5;
	double_7 = double_6 * double_7;
	float_3 = float_1 + float_2;
	int_4 = int_4 + int_1;
	int_1 = int_2 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	return char_1;
	int_4 = v_rasqal_query_check_limit_offset(short_2,int_2);

}
long v_rasqal_query_results_ensure_have_row_internal( short parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = v_rasqal_query_results_get_row_from_saved(long_1);

	int_1 = v_rasqal_row_to_nodes();

	double_2 = double_1 * double_1;
	v_rasqal_free_row(unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	int_2 = v_rasqal_query_check_limit_offset(short_1,int_3);

	long_2 = v_rasqal_variables_table_add2(int_4,double_2,int_2,long_1,long_2);

	v_rasqal_free_variable(int_5);

	float_1 = float_2;
	return long_1;
	long_1 = v_rasqal_row_get_variable_by_offset(unsigned_int_2,int_2);

}
unsigned int v_rasqal_query_results_get_current_row( int parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	long_1 = v_rasqal_query_results_ensure_have_row_internal(short_1);

	double_1 = double_1 + double_2;
	return unsigned_int_1;
	int_1 = v_rasqal_query_results_is_bindings(float_1);

}
void v_rasqal_query_results_get_binding_name( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	int_1 = v_rasqal_query_results_is_bindings(float_1);

	unsigned_int_1 = v_rasqal_query_results_get_current_row(int_2);

	double_1 = double_1 * double_2;
	double_2 = double_2 + double_3;
	if(1)
	{
	}
	double_3 = v_rasqal_variables_table_get(short_1,int_3);

	int_1 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
}
int v_rasqal_query_results_is_bindings( float parameter_1)
{
	int int_1 = 1;
	int_1 = int_1;
	return int_1;
}
double v_rasqal_query_results_type_label()
{
	double double_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	return double_1;
}
char v_rasqal_query_results_get_type( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_3 = char_1 * char_2;
	return char_3;
}
char v_rasqal_query_results_get_world( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double_3 = double_1 + double_2;
	return char_1;
}
double v_rasqal_query_results_write_sparql_xml( int parameter_1,char parameter_2,unsigned int parameter_3,long parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = v_rasqal_query_results_get_type(unsigned_int_1);

	long_2 = long_1 * long_1;
	int_1 = v_rasqal_query_results_get_bindings_count(short_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_2 = v_rasqal_query_results_is_bindings(float_1);

	int_2 = v_rasqal_query_results_next(char_1);

	double_1 = double_1 + double_2;
	v_rasqal_log_error_simple(short_1,short_1,unsigned_int_1,char_2,double_3);

	int_1 = v_rasqal_query_results_is_boolean(double_3);

	int_2 = v_rasqal_query_results_get_boolean(char_2);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	char_3 = v_rasqal_query_results_get_world(long_2);

	char_4 = v_rasqal_query_results_get_binding_value(int_3,int_4);

	char_1 = char_2 * char_4;
	v_rasqal_query_results_get_binding_name(float_1,int_3);

	int_1 = v_rasqal_query_results_finished(unsigned_int_5);

	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_6;
	}
	return double_1;
	double_3 = v_rasqal_query_results_type_label();

}
float v_rasqal_query_results_sparql_xml_register_factory( char parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short_1 = v_rasqal_query_results_xml_recognise_syntax(long_1,long_1,double_1,char_1,unsigned_int_1,long_2);

	int_2 = int_1 * int_2;
	float_2 = float_1 + float_1;
	char_2 = v_rasqal_query_results_get_rowsource_sparql_xml(short_1,long_2,short_2,int_1,double_1,double_2);

	short_1 = short_2 + short_1;
	unsigned_int_2 = unsigned_int_1;
	double_2 = v_rasqal_query_results_write_sparql_xml(int_3,char_2,unsigned_int_1,long_1);

	double_1 = double_2 + double_2;
	char_4 = char_3 + char_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	double_1 = double_1 * double_2;
	short_2 = short_2;
	short_2 = v_rasqal_rowsource_sparql_xml_get_boolean(float_2,int_3,double_1,long_3,long_4);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	return float_1;
}
float v_rasqal_world_register_query_results_format_factory( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short_1 = short_1 + short_2;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	v_rasqal_free_query_results_format_factory(char_2);

	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	v_rasqal_log_error_simple(short_3,short_4,unsigned_int_1,char_1,double_1);

	long_2 = long_1 + long_1;
	if(1)
	{
		short short_5 = 1;
		short_5 = short_1;
	}
	if(1)
	{
		double_2 = double_2;
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1;
		int_2 = int_2 + int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	double_1 = double_1 + double_2;
	return float_1;
}
int v_rasqal_init_result_format_sparql_xml()
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	return int_1;
	float_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_1);

	float_2 = v_rasqal_query_results_sparql_xml_register_factory(char_1);

}
void v_rasqal_free_query_results_format_factory( char parameter_1)
{
	double double_1 = 1;
	if(1)
	{
	}
	double_1 = double_1;
}
int v_rasqal_init_result_formats( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_1 = v_rasqal_init_result_format_turtle(char_1);

	short_2 = short_1 + short_1;
	double_1 = double_1 * double_2;
	int_1 = v_rasqal_init_result_format_table(float_1);

	double_1 = double_2 * double_1;
	v_rasqal_free_query_results_format_factory(char_2);

	int_1 = v_rasqal_init_result_format_sparql_xml();

	int_1 = v_rasqal_init_result_format_json(double_2);

	int_3 = int_1 + int_2;
	int_4 = v_rasqal_init_result_format_html();

	double_1 = double_2 + double_2;
	double_1 = double_1 * double_1;
	int_5 = v_rasqal_init_result_format_sv(long_1);

	int_1 = int_4 + int_4;
	return int_2;
	int_5 = v_rasqal_init_result_format_rdf();

}
int v_rasqal_init_query_results()
{
	int int_1 = 1;
	return int_1;
}
int v_rasqal_raptor_init_triples_source2( char parameter_1,float parameter_2,float parameter_5,unsigned int parameter_6,char parameter_7)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	return int_1;
	double_1 = v_rasqal_raptor_init_triples_source_common(char_1,short_1,char_1,float_1,short_1,float_2,long_1);

}
void v_rasqal_raptor_init_triples_source( double parameter_1,int parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int_1 = int_2;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_1 = v_rasqal_raptor_init_triples_source_common(char_1,short_1,char_2,float_1,short_2,float_2,long_1);

		double_3 = double_1 * double_2;
	}
}
void v_rasqal_triples_source_error_handler2( char parameter_1,long parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	v_rasqal_log_error_simple(short_1,short_2,unsigned_int_1,char_1,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
int v_rasqal_raptor_generate_id_handler(char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int_1 = int_2;
	int_3 = int_2 + int_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_2 = double_1 * double_1;
		long_2 = long_1 * long_1;
		float_1 = float_1 * float_1;
		double_1 = v_rasqal_raptor_get_genid(unsigned_int_1,double_2,int_3);

		long_1 = long_1;
		double_1 = double_2 + double_2;
		short_1 = short_1 + short_1;
		char_3 = char_1 + char_2;
	}
	return int_4;
}
int v_rasqal_new_triple( char parameter_1,short parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_rasqal_free_literal();

	int_1 = int_1 + int_1;
	if(1)
	{
		int int_2 = 1;
		float_2 = float_1 * float_1;
		long_1 = long_1 + long_1;
		int_2 = int_3;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 * double_2;
		}
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			float float_3 = 1;
			float_3 = float_1 + float_2;
		}
	}
	return int_3;
}
unsigned int v_rasqal_new_simple_literal( unsigned int parameter_1,long parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_3 = int_1 + int_2;
	short_1 = short_1 * short_1;
	double_1 = double_1 * double_1;
	double_2 = double_3;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		int int_4 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_5 = double_4 * double_2;
		int_4 = int_4 * int_4;
		float_1 = float_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		int_1 = int_3 + int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	}
	return unsigned_int_4;
}
short v_rasqal_new_literal_from_term( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int int_5 = 1;
	short short_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	double_1 = v_rasqal_new_string_literal(int_1,char_1,int_2,char_2,long_1,-1 );

	int_2 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		double_1 = double_2 + double_2;
		double_3 = double_1;
		double_2 = double_1 * double_1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		if(1)
		{
			long_1 = long_2 + long_1;
		}
		int_2 = int_4;
		if(1)
		{
			double_2 = v_rasqal_new_uri_literal(short_1,double_2);

			int_1 = int_3 * int_5;
			unsigned_int_4 = unsigned_int_3;
			if(1)
			{
				short_2 = short_2 + short_2;
			}
			double_2 = double_2;
		}
		if(1)
		{
			double_2 = double_1 + double_2;
		}
		double_3 = double_3 + double_3;
	}
	if(1)
	{
		int int_6 = 1;
		double double_4 = 1;
		int_1 = int_4 * int_6;
		double_3 = double_4;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
		}
		double_3 = double_4 + double_1;
		long_2 = long_1 + long_3;
	}
	if(1)
	{
		int_5 = int_4 * int_3;
		double_5 = double_1 * double_1;
		unsigned_int_7 = v_rasqal_new_simple_literal(unsigned_int_3,long_3,long_2);

		short_1 = short_1;
	}
	if(1)
	{
		short_3 = short_2;
	}
	if(1)
	{
		double_1 = double_5 + double_2;
	}
	return short_3;
}
void v_raptor_statement_as_rasqal_triple( float parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_3 = v_rasqal_new_literal_from_term(unsigned_int_2,int_1);

	int_2 = v_rasqal_new_triple(char_1,short_3,unsigned_int_3);

	short_3 = short_2 * short_1;
}
long v_rasqal_raptor_statement_handler(float parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = float_1 + float_1;
	v_rasqal_triple_set_origin(char_1,long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 + double_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	v_raptor_statement_as_rasqal_triple(float_1,short_1);

	float_3 = float_1 + float_2;
	double_1 = double_2 + double_3;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	return long_1;
}
double v_rasqal_raptor_get_genid( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
double v_rasqal_new_uri_literal( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 * short_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_1 = long_2;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		int_2 = int_1 * int_1;
		char_1 = char_1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	}
	return double_1;
}
int v_rasqal_raptor_support_feature(int parameter_2)
{
	int int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_2;
		}
	}
	return int_1;
}
void v_rasqal_free_triple()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_2 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	v_rasqal_free_literal();

	unsigned_int_1 = unsigned_int_3;
}
void v_rasqal_triple_set_origin( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
}
char v_rasqal_raptor_free_triples_source()
{
	char char_1 = 1;
	long long_1 = 1;
	return char_1;
	v_rasqal_triple_set_origin(char_1,long_1);

	v_rasqal_free_triple();

	v_rasqal_free_literal();

}
float v_rasqal_raptor_triple_present( float parameter_1,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_1 * double_1;
	int_1 = v_rasqal_raptor_triple_match(double_2,int_1,long_2,short_1);

	long_3 = long_2 * long_1;
	short_1 = short_2 + short_1;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return float_1;
}
void v_rasqal_raptor_finish_triples_match( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_2;
	int_4 = int_1 * int_3;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		char char_3 = 1;
		v_rasqal_free_literal();

		char_3 = char_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	float_1 = float_2;
}
unsigned int v_rasqal_raptor_is_end( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_1;
	char_3 = char_3 * char_4;
	return unsigned_int_1;
}
int v_rasqal_raptor_triple_match( double parameter_1,int parameter_2,long parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
		char char_2 = 1;
		int_1 = v_rasqal_literal_equals_flags(int_2,float_1,int_1,int_1,-1 );

		char_3 = char_1 * char_2;
	}
	long_1 = long_1 + long_1;
	short_2 = short_1 + short_2;
	int_3 = v_rasqal_triple_print(int_2,int_1);

	float_1 = float_1;
	float_1 = float_1 + float_2;
	if(1)
	{
		if(1)
		{
			short short_3 = 1;
			short_1 = short_1 * short_3;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long_1 = long_2;
		}
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_3 + int_1;
		}
	}
	if(1)
	{
		int int_4 = 1;
		if(1)
		{
			int_4 = int_3 * int_4;
		}
		if(1)
		{
			if(1)
			{
				long long_3 = 1;
				long long_4 = 1;
				unsigned_int_1 = unsigned_int_1;
				long_1 = long_3 + long_4;
				if(1)
				{
					int_2 = int_2 + int_4;
				}
			}
		}
	}
	if(1)
	{
		char controller_14[3];
		fgets(controller_14 ,3 ,stdin);
		if( strcmp( controller_14, "*d") < 0)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
	}
	short_4 = short_1 + short_2;
	if(1)
	{
		char_3 = char_1 * char_1;
	}
	return int_5;
}
float v_rasqal_literal_as_variable( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_1 * double_1;
	return float_1;
}
long v_rasqal_raptor_next_match( long parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_6 = 1;
	double double_3 = 1;
	short short_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		int int_5 = 1;
		double double_1 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_3 = 1;
		long_1 = long_1 + long_2;
		int_1 = int_1 * int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char char_2 = 1;
				char_3 = char_1 + char_2;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
				long_2 = long_2 * long_1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				long_1 = long_3 + long_2;
				if(1)
				{
					unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
				}
				int_1 = int_1 + int_2;
				if(1)
				{
					float_1 = float_2;
					if(1)
					{
						float_1 = v_rasqal_literal_as_variable(int_3);

						unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
					}
					if(1)
					{
						int_1 = int_4 * int_2;
					}
					v_rasqal_variable_set_value(unsigned_int_1,int_2);

					float_2 = float_2;
					if(1)
					{
						int_5 = int_4 + int_2;
					}
					float_1 = float_2;
				}
				if(1)
				{
					double_1 = double_1;
					char_1 = char_4 + char_1;
					int_6 = v_rasqal_triple_print(int_6,int_1);

					unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
				}
				if(1)
				{
					int_3 = int_2 * int_2;
				}
			}
		}
		double_4 = double_2 + double_3;
		int_6 = int_5 + int_4;
		int_5 = int_6 * int_1;
		short_1 = short_1;
		short_1 = short_1;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
		double_2 = double_2 * double_1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		float_3 = float_2 + float_3;
		int_2 = v_rasqal_raptor_triple_match(double_3,int_1,long_3,short_1);

		char_3 = char_4 * char_1;
		long_3 = long_3 + long_1;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_5 = unsigned_int_6 * unsigned_int_6;
			unsigned_int_6 = unsigned_int_6 * unsigned_int_7;
		}
		if(1)
		{
			char_3 = char_1;
		}
	}
	int_3 = int_1 + int_4;
	return long_3;
}
int v_rasqal_literal_equals( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	return int_1;
	int_1 = v_rasqal_literal_equals_flags(int_2,float_1,int_3,int_2,-1 );

}
int v_rasqal_xsd_decimal_equals( double parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_5 = 1;
	long_1 = long_1 * long_2;
	char_1 = char_1 * char_2;
	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 + double_2;
	double_3 = double_2 + double_1;
	int_2 = int_1 + int_1;
	double_1 = double_2 * double_4;
	long_1 = long_3 * long_4;
	int_3 = int_3 * int_3;
	int_4 = v_rasqal_double_approximately_equal(double_5,double_5);

	float_2 = float_4 * float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "`!") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		long_4 = long_2 * long_3;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	float_5 = float_6;
	return int_5;
}
int v_rasqal_double_approximately_compare( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1;
	char_3 = char_1 * char_2;
	long_1 = long_1 + long_1;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_rasqal_double_approximately_equal( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	return int_1;
	int_2 = v_rasqal_double_approximately_compare(double_1,double_1);

}
int v_rasqal_xsd_datetime_compare2( short parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	if(1)
	{
		long long_3 = 1;
		double_1 = v_rasqal_xsd_timeline_compare(char_1,short_1,long_1,long_2,long_2,double_2,int_1);

		long_1 = long_3;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		if(1)
		{
		}
		int_3 = int_2 + int_1;
	}
	return int_1;
}
int v_rasqal_xsd_datetime_equals2( char parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_rasqal_xsd_datetime_compare2(short_1,long_1,int_2);

	double_2 = double_1 + double_2;
	return int_1;
}
double v_rasqal_xsd_timeline_compare( char parameter_1,short parameter_2,long parameter_3,long parameter_4,long parameter_5,double parameter_6,int parameter_7)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_2 = 1;
	short_3 = short_1 + short_2;
	double_1 = double_1 * double_1;
	int_3 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
			int_3 = int_1 * int_2;
		}
		if(1)
		{
			double_1 = double_2 * double_1;
		}
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		if(1)
		{
			float_1 = float_1 + float_1;
		}
		if(1)
		{
			int int_4 = 1;
			int_3 = int_4 + int_1;
		}
		if(1)
		{
			if(1)
			{
				short_3 = short_1 * short_3;
			}
			float_2 = float_2 + float_1;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long long_3 = 1;
			long_2 = long_2 + long_3;
		}
		if(1)
		{
			float float_3 = 1;
			float_2 = float_3;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			}
			unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		}
	}
	return double_2;
}
int v_rasqal_xsd_date_compare( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		if(1)
		{
		}
		short_3 = short_1 + short_2;
	}
	return int_3;
	double_1 = v_rasqal_xsd_timeline_compare(char_1,short_1,long_1,long_2,long_3,double_2,int_1);

}
int v_rasqal_xsd_date_equals( long parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return int_1;
	int_2 = v_rasqal_xsd_date_compare(unsigned_int_2,char_1,int_2);

}
char v_rasqal_literal_blank_equals( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
int v_rasqal_strcasecmp( long parameter_1,short parameter_2)
{
	int int_3 = 1;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
	}
	return int_3;
}
int v_rasqal_literal_string_languages_compare( char parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1;
	int_1 = v_rasqal_strcasecmp(long_1,short_1);

	int_2 = int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	return int_1;
}
int v_rasqal_literal_string_equals_flags( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	int int_5 = 1;
	short_3 = short_1 * short_2;
	char_2 = char_1 * char_2;
	int_1 = int_2;
	char_3 = char_2 + char_2;
	char_3 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	}
	int_2 = v_rasqal_literal_string_languages_compare(char_1,unsigned_int_2);

	double_1 = double_1 * double_2;
	unsigned_int_4 = unsigned_int_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	char_3 = char_4 * char_1;
	double_1 = double_3 * double_4;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_5 * double_2;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			float float_1 = 1;
			int_1 = int_1 + int_2;
			float_3 = float_1 * float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			if(1)
			{
				double double_6 = 1;
				double_6 = double_1 + double_4;
			}
			long_1 = long_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			if(1)
			{
				int int_4 = 1;
				int_4 = int_3 + int_4;
			}
			float_4 = float_2;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		float_2 = float_3 + float_4;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_1;
	}
	short_3 = short_4 * short_1;
	if(1)
	{
		if(1)
		{
			short_2 = v_rasqal_xsd_datatype_type_to_uri(int_5,long_1);

			int_3 = int_2;
		}
	}
	if(1)
	{
		double_2 = double_5 * double_2;
	}
	if(1)
	{
		short short_5 = 1;
		short_2 = short_5;
	}
	return int_5;
}
char v_rasqal_literal_uri_equals( short parameter_1,long parameter_2)
{
	char char_1 = 1;
	return char_1;
}
long v_rasqal_literal_as_string_flags( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	if(1)
	{
		int_1 = v_rasqal_literal_as_counted_string(int_2,unsigned_int_1,int_3,int_4);

		int_3 = int_1 * int_3;
	}
	return long_1;
}
long v_rasqal_literal_as_string( int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long_1 = v_rasqal_literal_as_string_flags(char_1,int_1,int_2);

	char_1 = char_2;
	return long_1;
}
double v_rasqal_new_string_literal( int parameter_1,char parameter_2,int parameter_3,char parameter_4,long parameter_5,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int_1 = v_rasqal_new_string_literal_common(float_1,int_2,int_3,long_1,int_1,int_2,uni_para);

	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return double_1;
}
int v_rasqal_literal_as_boolean( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
			int_2 = int_1 * int_1;
		}
	}
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
	}
	short_1 = v_rasqal_xsd_datatype_type_to_uri(int_2,long_1);

	int_2 = int_1 + int_1;
	return int_2;
}
double v_rasqal_xsd_format_integer( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	return double_2;
}
char v_rasqal_new_integer_literal( int parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double_3 = double_1 * double_2;
	int_1 = int_2;
	long_1 = long_2;
	double_5 = double_1 * double_4;
	if(1)
	{
		char char_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char_2 = char_1 + char_2;
		v_rasqal_free_literal();

		long_4 = long_3 + long_4;
		double_2 = v_rasqal_xsd_format_integer(int_2,int_2);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_1 = int_3;
		int_1 = int_3 * int_3;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			short_1 = v_rasqal_xsd_datatype_type_to_uri(int_2,long_2);

			unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
			v_rasqal_xsd_datatype_parent_type(unsigned_int_2);

			double_2 = double_2 + double_2;
		}
		if(1)
		{
			int int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_5 = 1;
			int_5 = int_4 + int_4;
			float_1 = float_1 + float_2;
			unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
			if(1)
			{
				int_1 = int_5 * int_2;
			}
		}
		int_2 = int_1 * int_5;
		if(1)
		{
			double double_6 = 1;
			double_4 = double_6 + double_1;
		}
		unsigned_int_8 = unsigned_int_6 * unsigned_int_7;
		short_3 = short_1 * short_2;
	}
	return char_1;
}
long v_rasqal_xsd_decimal_get_long( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_2;
		}
	}
	if(1)
	{
		int_1 = int_1 * int_3;
	}
	return long_1;
}
int v_rasqal_literal_as_integer( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	unsigned_int_2 = unsigned_int_1;
	float_1 = float_2;
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long_3 = long_1 + long_2;
		}
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_1 + int_2;
	float_2 = float_1 * float_3;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
	long_3 = v_rasqal_xsd_decimal_get_long(unsigned_int_3,int_1);

	double_1 = double_2 * double_1;
	long_4 = long_1;
	if(1)
	{
	}
	float_5 = float_1 * float_4;
	char_2 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 * double_3;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	double_3 = double_4;
	return int_3;
}
short v_rasqal_new_floating_literal( double parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_2;
	short_1 = v_rasqal_xsd_datatype_type_to_uri(int_1,long_1);

	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
	}
	float_2 = float_1 + float_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_3 = 1;
		char char_5 = 1;
		char char_6 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_4 = 1;
		int_1 = int_1;
		long_4 = long_2 + long_3;
		double_2 = double_1 * double_1;
		char_2 = char_1 + char_1;
		char_3 = char_3 + char_4;
		double_4 = double_3 * double_4;
		v_rasqal_free_literal();

		char_5 = char_2 + char_3;
		char_4 = char_6 + char_7;
		if(1)
		{
			int_2 = int_2 + int_1;
		}
		long_1 = v_rasqal_xsd_format_double(double_4,short_1);

		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
			double_3 = double_4 * double_2;
		}
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	}
	return short_1;
}
long v_rasqal_new_double_literal( int parameter_1,double parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	return long_1;
	short_1 = v_rasqal_new_floating_literal(double_1,int_1,double_2);

}
double v_rasqal_new_decimal_literal_from_decimal( long parameter_1,char parameter_2,float parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	short short_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	short_3 = short_1 + short_2;
	char_3 = char_1 + char_2;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	int_2 = v_rasqal_xsd_datatype_check(float_1,long_1,int_3);

	double_3 = double_2 + double_2;
	if(1)
	{
		if(1)
		{
			char_4 = char_1 * char_1;
		}
		if(1)
		{
			double_3 = double_3 + double_2;
			unsigned_int_3 = v_rasqal_xsd_decimal_as_counted_string(short_3,short_3);

			float_1 = float_1 + float_1;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
		if(1)
		{
			char_4 = char_3 + char_1;
			char_4 = char_4 * char_5;
		}
		if(1)
		{
			float float_3 = 1;
			double double_4 = 1;
			unsigned_int_4 = v_rasqal_literal_set_typed_value(float_2,unsigned_int_2,short_4,int_4,-1 );

			float_1 = float_2 + float_3;
			char_1 = char_4 * char_1;
			char_5 = char_4 * char_4;
			v_rasqal_free_literal();

			double_1 = double_3 * double_4;
			int_1 = int_2 + int_4;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_6 = 1;
				unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
				double_6 = double_4 * double_5;
			}
		}
	}
	if(1)
	{
		char char_6 = 1;
		int int_5 = 1;
		short_3 = v_rasqal_xsd_datatype_type_to_uri(int_4,long_2);

		char_6 = char_5 + char_3;
		int_4 = int_3 * int_5;
	}
	return double_5;
}
int v_rasqal_xsd_decimal_set_double( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	int_4 = int_1 + int_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	double_2 = double_1 * double_1;
	double_3 = double_1;
	return int_3;
	v_rasqal_xsd_decimal_clear_string(float_1);

}
double v_rasqal_xsd_decimal_get_double( short parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char_1 = char_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2;
	return double_1;
}
double v_rasqal_literal_as_double( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double_1 = v_rasqal_xsd_decimal_get_double(short_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_2 * double_3;
	}
	int_3 = int_2 * int_3;
	return double_3;
}
int v_rasqal_new_string_literal_common( float parameter_1,int parameter_2,int parameter_3,long parameter_4,int parameter_5,int parameter_6,int uni_para)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	long_1 = long_1;
	int_1 = int_1 * int_1;
	float_2 = float_1 + float_1;
	int_2 = int_2 * int_3;
	char controller4vul_1764[2];
	fgets(controller4vul_1764 ,2 ,stdin);
	if( strcmp( controller4vul_1764, "p") > 0)
	{
		int int_4 = 1;
		int int_5 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		char char_1 = 1;
		short short_4 = 1;
		int int_7 = 1;
		int_5 = int_1 + int_4;
		long_2 = long_2 + long_3;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			double_1 = double_2;
		}
		float_3 = float_1 + float_3;
		short_2 = short_1 * short_1;
		long_2 = long_4 + long_4;
		char controller4vul_1765[3];
		fgets(controller4vul_1765 ,3 ,stdin);
		if( strcmp( controller4vul_1765, "?>") < 0)
		{
			float float_4 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float_1 = float_1 * float_4;
			short_3 = short_2;
			char_1 = char_1 + char_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int_4 = int_4;
				char controller4vul_1766[3];
				fgets(controller4vul_1766 ,3 ,stdin);
				if( strcmp( controller4vul_1766, "wI") < 0)
				{
					int_1 = v_rasqal_literal_string_to_native(double_2,int_3,uni_para);

					short_1 = short_3 + short_2;
				}
				short_1 = short_2 * short_3;
			}
			double_2 = double_3;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		}
		double_1 = double_3 + double_3;
		short_4 = short_1 + short_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
		}
		int_7 = int_4 + int_6;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			char_1 = char_2 + char_3;
		}
	}
	if(1)
	{
		if(1)
		{
			long_2 = long_2 * long_4;
		}
		if(1)
		{
			double_3 = double_3 + double_1;
		}
		if(1)
		{
			short_1 = short_2;
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_5;
	}
	return int_6;
}
double v_rasqal_new_string_literal_node( long parameter_1,short parameter_2,unsigned int parameter_3,float parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	float_2 = float_1 + float_2;
	int_1 = int_1 * int_2;
	return double_1;
	int_3 = v_rasqal_new_string_literal_common(float_3,int_2,int_2,long_1,int_3,int_2,-1 );

}
int v_rasqal_literal_as_counted_string( int parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_1;
		}
	}
	double_2 = double_1 + double_1;
	return int_1;
}
int v_rasqal_xsd_datatype_is_numeric( long parameter_1)
{
	int int_1 = 1;
	return int_1;
}
void v_rasqal_new_datetime_literal_from_datetime( int parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_5 = 1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_2;
	long_2 = long_1 + long_1;
	if(1)
	{
		v_rasqal_free_literal();

		short_1 = short_2;
	}
	v_rasqal_free_xsd_datetime(char_3);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	double_3 = double_2 + double_3;
	int_2 = int_1 + int_1;
	short_2 = v_rasqal_xsd_datatype_type_to_uri(int_2,long_1);

	v_rasqal_xsd_datetime_to_counted_string(int_1,float_1);

	short_3 = short_3 * short_2;
	double_3 = double_3 * double_3;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_3 + int_2;
	}
	int_2 = int_2 + int_2;
	short_2 = short_1;
	int_2 = int_5 + int_5;
	int_3 = int_3 * int_1;
	if(1)
	{
		short_2 = short_1;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_2 + short_2;
	}
	if(1)
	{
		char char_4 = 1;
		char_1 = char_4 + char_2;
	}
}
int v_rasqal_new_xsd_datetime_from_xsd_date( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_2;
	if(1)
	{
	}
	double_2 = double_1 * double_2;
	int_2 = int_1 * int_1;
	char_2 = char_1 + char_2;
	int_1 = int_2;
	int_2 = int_1;
	short_2 = short_1 * short_1;
	return int_1;
}
double v_rasqal_new_literal_from_promotion( double parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	long long_4 = 1;
	int int_6 = 1;
	float float_5 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	long long_5 = 1;
	double double_7 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_7 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_11 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_2;
	int_2 = int_1 * int_1;
	short_1 = short_1 + short_1;
	int_4 = int_1 + int_3;
	unsigned_int_1 = unsigned_int_3;
	int_5 = int_3 + int_4;
	short_1 = short_2 * short_2;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	long_1 = long_2;
	if(1)
	{
		long_3 = long_3 + long_1;
		float_2 = float_3 + float_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		}
	}
	char controller4vul_1760[3];
	fgets(controller4vul_1760 ,3 ,stdin);
	if( strcmp( controller4vul_1760, "dS") < 0)
	{
		double_1 = double_3 + double_3;
		char controller4vul_1761[2];
		fgets(controller4vul_1761 ,2 ,stdin);
		if( strcmp( controller4vul_1761, "w") > 0)
		{
			long_4 = long_4;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
			char controller4vul_1762[3];
			fgets(controller4vul_1762 ,3 ,stdin);
			if( strcmp( controller4vul_1762, "&K") > 0)
			{
				float float_4 = 1;
				int_2 = int_6 + int_1;
				float_5 = float_4 * float_1;
				char controller4vul_1763[2];
				fgets(controller4vul_1763 ,2 ,stdin);
				if( strcmp( controller4vul_1763, ";") > 0)
				{
					double_4 = v_rasqal_new_string_literal(int_3,char_1,int_3,char_2,long_4,uni_para);

					int_1 = int_5 + int_2;
				}
			}
			if(1)
			{
			}
		}
	}
	short_1 = short_2 * short_3;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_6;
		if(1)
		{
			unsigned_int_7 = unsigned_int_2 + unsigned_int_4;
			char_1 = char_3 + char_3;
		}
		if(1)
		{
			char_3 = char_2 * char_4;
			char_5 = char_1;
		}
	}
	char_4 = char_6 * char_4;
	double_5 = double_3 * double_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_6 + unsigned_int_1;
	}
	if(1)
	{
		int_3 = int_5 * int_1;
	}
	double_5 = double_2 + double_6;
	int_6 = int_2 * int_4;
	if(1)
	{
		short_4 = short_3 * short_1;
	}
	if(1)
	{
		long_5 = long_4 * long_1;
	}
	if(1)
	{
		double_7 = double_4 + double_5;
	}
	unsigned_int_6 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_2 + short_5;
	if(1)
	{
		double_4 = double_7;
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_9 = unsigned_int_8 + unsigned_int_1;
	}
	long_5 = long_5 + long_5;
	if(1)
	{
		float_5 = float_2 * float_3;
	}
	if(1)
	{
		int_4 = int_2 + int_3;
	}
	if(1)
	{
		double_3 = double_7 * double_6;
	}
	if(1)
	{
		int_3 = int_4;
	}
	int_7 = int_5 * int_3;
	double_1 = double_3 * double_6;
	double_3 = double_6 * double_7;
	if(1)
	{
		short_1 = short_4;
		long_5 = long_1 + long_5;
	}
	char_4 = char_2 * char_5;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_8;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_4;
	if(1)
	{
		int int_8 = 1;
		unsigned int unsigned_int_10 = 1;
		double double_8 = 1;
		float float_6 = 1;
		int_8 = int_2 + int_5;
		unsigned_int_6 = unsigned_int_10 * unsigned_int_6;
		double_8 = double_2 + double_2;
		long_2 = long_3 * long_2;
		float_6 = float_5 + float_5;
	}
	int_3 = int_3 + int_4;
	short_6 = short_6 * short_2;
	unsigned_int_8 = unsigned_int_11;
	if(1)
	{
		if(1)
		{
			char_6 = char_3 + char_4;
		}
	}
	if(1)
	{
		long_1 = long_1 + long_3;
	}
	return double_7;
}
int v_rasqal_literal_promote_numerics( float parameter_1,double parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_5 = 1;
	float float_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	char_2 = char_1 * char_2;
	char_1 = char_2 * char_2;
	char_1 = char_3 * char_4;
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		v_rasqal_xsd_datatype_parent_type(unsigned_int_2);

		double_2 = double_1 + double_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_1 = v_rasqal_literal_type_label(double_3);

		char_2 = char_5 + char_5;
		float_2 = float_2 * float_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		double double_4 = 1;
		short_1 = short_1 * short_1;
		double_3 = double_4 + double_4;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
			int_2 = int_2 + int_2;
		}
		if(1)
		{
			char char_6 = 1;
			char char_7 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			char_7 = char_5 + char_6;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
		}
		if(1)
		{
			char char_8 = 1;
			float float_4 = 1;
			char_1 = char_8 + char_4;
			float_4 = float_2 * float_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
		if(1)
		{
			float float_5 = 1;
			float_1 = float_5;
		}
	}
	double_5 = double_1 + double_2;
	return int_3;
}
short v_rasqal_xsd_format_microseconds( char parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	short short_3 = 1;
	char_1 = char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	long_1 = long_1;
	int_2 = int_2 + int_2;
	short_1 = short_1 * short_2;
	double_1 = double_1 + double_1;
	short_2 = short_1 + short_1;
	long_2 = long_1;
	float_1 = float_1 * float_2;
	long_3 = long_2 * long_1;
	float_1 = float_2;
	if(1)
	{
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_1 = double_1 * double_2;
		char_3 = char_2 + char_3;
	}
	long_2 = long_4;
	float_1 = float_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	long_3 = long_5 + long_2;
	float_1 = float_1;
	return short_3;
}
void v_rasqal_xsd_datetime_to_counted_string( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_1 = long_2;
	char_1 = v_rasqal_xsd_timezone_format(int_1,char_1,char_1,short_1);

	double_1 = double_1 + double_1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_rasqal_xsd_format_microseconds(char_2,unsigned_int_3,unsigned_int_2);

	double_1 = double_1 * double_1;
	float_1 = float_1 + float_1;
	int_1 = int_3 * int_1;
	if(1)
	{
	}
	double_2 = double_2 + double_3;
	if(1)
	{
	}
	long_2 = long_3 + long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		double_2 = double_1 * double_2;
		int_4 = v_rasqal_format_integer(char_1,char_1,int_3,int_3,char_3);

		char_1 = char_4 * char_5;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_5;
	}
	long_2 = long_2 + long_4;
	if(1)
	{
	}
	short_1 = short_1;
	long_3 = long_1 + long_3;
	short_3 = short_2 + short_3;
	long_3 = long_3 + long_4;
	long_4 = long_5;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_3;
	long_4 = long_5;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
	double_4 = double_4 * double_2;
	double_1 = double_1 * double_4;
	double_3 = double_5 * double_1;
	double_2 = double_4 + double_4;
	if(1)
	{
		unsigned_int_5 = unsigned_int_6;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
	}
	if(1)
	{
		long long_6 = 1;
		long_4 = long_5 + long_6;
		long_3 = long_3 * long_3;
	}
	float_1 = float_2 * float_3;
}
int v_rasqal_new_xsd_datetime( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_1;
	if(1)
	{
		int int_5 = 1;
		float_1 = v_rasqal_xsd_datetime_parse(double_2,unsigned_int_1,int_3);

		float_2 = v_rasqal_xsd_datetime_normalize(float_2,-1 );

		int_4 = int_3 + int_2;
		v_rasqal_free_xsd_datetime(char_1);

		int_5 = int_1 * int_4;
		int_3 = int_2 + int_2;
		if(1)
		{
			float_2 = float_1;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		double_5 = double_3 * double_4;
		long_1 = long_1 * long_1;
	}
	return int_4;
}
int v_rasqal_format_integer( char parameter_1,char parameter_2,int parameter_3,int parameter_4,char parameter_5)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_3 = 1;
			int_1 = int_1 + int_2;
			char_3 = char_1 * char_3;
		}
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1;
			unsigned_int_1 = unsigned_int_3;
		}
	}
	int_2 = int_1 + int_1;
	return int_2;
}
char v_rasqal_xsd_timezone_format( int parameter_1,char parameter_2,char parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
		int_3 = int_4 * int_2;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		float float_1 = 1;
		int int_5 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		float_1 = float_1 + float_1;
		int_5 = int_4 * int_2;
		short_1 = short_1 + short_1;
		if(1)
		{
		}
		short_1 = short_1;
		double_2 = double_1 * double_2;
		double_2 = double_1 + double_1;
		long_2 = long_1 * long_1;
		int_5 = int_1 + int_3;
		double_3 = double_2 + double_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
		double_2 = double_1 * double_4;
		int_1 = int_5;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
		int_4 = int_2 * int_6;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	}
	return char_1;
}
long v_rasqal_xsd_date_to_counted_string( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_6 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 + int_1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_3 + double_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	int_1 = int_3;
	if(1)
	{
	}
	float_1 = float_1;
	if(1)
	{
	}
	char_1 = v_rasqal_xsd_timezone_format(int_4,char_1,char_1,short_1);

	double_3 = double_1 * double_1;
	int_2 = int_1 * int_3;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_3 * float_2;
	}
	double_4 = double_4;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	short_1 = short_1 + short_2;
	long_1 = long_1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_3 + int_4;
	long_1 = long_2;
	short_1 = short_1 + short_2;
	double_2 = double_3 + double_2;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
	double_4 = double_3;
	double_3 = double_2 + double_3;
	short_3 = short_3 * short_1;
	short_1 = short_2 * short_4;
	if(1)
	{
		int int_5 = 1;
		short short_5 = 1;
		short short_6 = 1;
		int_5 = int_2 * int_1;
		short_5 = short_6;
	}
	int_2 = v_rasqal_format_integer(char_1,char_2,int_6,int_3,char_2);

	int_6 = int_4 * int_2;
	return long_1;
}
int v_rasqal_timegm( long parameter_1,int uni_para)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	char * vul_var;
	float_1 = float_1;
	short_1 = short_1 + short_2;
	char_1 = char_1 + char_1;
	char controller4vul_1774[3];
	fgets(controller4vul_1774 ,3 ,stdin);
	if( strcmp( controller4vul_1774, "3X") > 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_4 = char_2 + char_3;
		float_1 = float_1 * float_2;
		char controller4vul_1775[3];
		fgets(controller4vul_1775 ,3 ,stdin);
		if( strcmp( controller4vul_1775, "_H") < 0)
		{
			vul_var=(char*)malloc(20*sizeof(char));
			strcpy(vul_var, "CWE-761");
			if(uni_para == 273)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
		}
		char_1 = char_3 + char_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	float_2 = float_1 + float_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	double_2 = double_1 * double_1;
	if(1)
	{
		char_4 = char_4 * char_4;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3;
	}
	double_4 = double_4 * double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	unsigned_int_2 = unsigned_int_1;
}
char v_rasqal_xsd_datetime_get_as_unixtime( long parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	char char_4 = 1;
	double_1 = double_1 * double_2;
	char controller4vul_1773[3];
	fgets(controller4vul_1773 ,3 ,stdin);
	if( strcmp( controller4vul_1773, ",$") > 0)
	{
		int_1 = v_rasqal_timegm(long_1,uni_para);

	}
	int_1 = int_1 * int_1;
	int_1 = int_1 * int_2;
	short_1 = short_1 * short_1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	float_1 = float_2 * float_3;
	double_1 = double_2;
	short_1 = short_1 * short_1;
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float_4 = float_4 * float_5;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	return char_4;
}
float v_rasqal_xsd_datetime_normalize( float parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char controller4vul_1771[3];
	fgets(controller4vul_1771 ,3 ,stdin);
	if( strcmp( controller4vul_1771, ":?") > 0)
	{
		char controller4vul_1772[3];
		fgets(controller4vul_1772 ,3 ,stdin);
		if( strcmp( controller4vul_1772, "S2") > 0)
		{
			char char_2 = 1;
			char_1 = v_rasqal_xsd_datetime_get_as_unixtime(long_1,uni_para);

			char_1 = char_2 * char_2;
			int_2 = int_1 + int_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		}
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		long_4 = long_3 * long_2;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		long long_5 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		long_5 = long_5 + long_4;
	}
	if(1)
	{
		float float_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		double_2 = double_1 + double_1;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
		if(1)
		{
			int_3 = int_1 + int_3;
			int_3 = int_1 + int_1;
		}
		if(1)
		{
			short short_1 = 1;
			short_2 = short_1 + short_2;
		}
		int_3 = int_2 + int_4;
	}
	if(1)
	{
		double double_3 = 1;
		double_4 = double_3 * double_2;
		if(1)
		{
			long long_6 = 1;
			long long_7 = 1;
			long_6 = long_3 * long_1;
			long_4 = long_7 + long_6;
		}
	}
	if(1)
	{
		double double_5 = 1;
		int_4 = int_4 * int_5;
		double_5 = double_2 + double_1;
		if(1)
		{
			int_6 = int_6 + int_2;
		}
	}
	if(1)
	{
		double double_6 = 1;
		double_6 = double_4;
		int_1 = int_5;
		if(1)
		{
			int_6 = int_2 * int_3;
		}
	}
	short_2 = short_2 * short_3;
	return float_2;
}
char v_days_per_month( int parameter_1,int parameter_2)
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
float v_rasqal_xsd_datetime_parse( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	char_1 = v_days_per_month(int_1,int_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
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
void v_rasqal_new_xsd_date( double parameter_1,char parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 + float_1;
	int_1 = int_1 + int_1;
	int_1 = int_1;
	long_1 = long_1;
	char controller4vul_1770[3];
	fgets(controller4vul_1770 ,3 ,stdin);
	if( strcmp( controller4vul_1770, "0j") > 0)
	{
		float_1 = v_rasqal_xsd_datetime_normalize(float_3,uni_para);

	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_2 = 1;
		float float_4 = 1;
		double_2 = double_1 * double_2;
		unsigned_int_2 = unsigned_int_3;
		char_2 = char_1 * char_1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_6;
		double_2 = double_1 + double_2;
		float_2 = float_1 + float_2;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_7;
		int_1 = int_2 + int_2;
		float_4 = float_1 * float_4;
		long_1 = long_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int_4 = int_1 + int_3;
		long_3 = long_2 * long_3;
	}
}
int v_rasqal_xsd_boolean_value_from_string( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_1 = char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return int_1;
}
char v_rasqal_xsd_decimal_as_string( short parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long_1 = long_1;
	int_2 = int_1 + int_2;
	int_2 = int_3;
	int_3 = int_2 + int_2;
	float_1 = float_1;
	return char_1;
}
unsigned int v_rasqal_xsd_decimal_as_counted_string( short parameter_1,short parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	return unsigned_int_3;
	char_1 = v_rasqal_xsd_decimal_as_string(short_1);

}
int v_rasqal_xsd_decimal_set_string( short parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_2 = char_1 * char_2;
	char_1 = char_3 + char_4;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	double_1 = double_1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	int_1 = int_1;
	v_rasqal_xsd_decimal_clear_string(float_2);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 * short_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	float_1 = float_3 * float_4;
	if(1)
	{
		char_3 = char_1 * char_3;
	}
	double_1 = double_3 + double_4;
	return int_1;
}
unsigned int v_rasqal_xsd_decimal_init( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		double_3 = double_1 * double_3;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3;
	}
	if(1)
	{
		char_2 = char_2 + char_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_2 = char_2 * char_3;
	}
	if(1)
	{
		double double_4 = 1;
		int_2 = int_1 + int_1;
		double_5 = double_4 * double_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		double_5 = double_6;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		float_1 = float_3 * float_2;
	}
	if(1)
	{
		double double_7 = 1;
		float float_4 = 1;
		long long_2 = 1;
		int_1 = int_1 * int_2;
		char_1 = char_2 * char_2;
		double_7 = double_6 * double_5;
		float_4 = float_3 + float_3;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_1 + long_3;
	}
	return unsigned_int_3;
}
int v_rasqal_new_xsd_decimal( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double_2 = double_1 * double_2;
	long_3 = long_1 * long_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	return int_1;
	unsigned_int_1 = v_rasqal_xsd_decimal_init(char_1);

}
long v_rasqal_xsd_format_double( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1;
	float_3 = float_1 * float_2;
	long_1 = long_1 * long_1;
	return long_2;
}
void v_rasqal_xsd_datatype_parent_type( unsigned int parameter_1)
{
	if(1)
	{
	}
	if(1)
	{
	}
}
short v_rasqal_xsd_datatype_type_to_uri( int parameter_1,long parameter_2)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
double v_rasqal_xsd_datatype_label( int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
int v_rasqal_xsd_datatype_check( float parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	if(1)
	{
	}
	return int_2;
}
unsigned int v_rasqal_literal_set_typed_value( float parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_7 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_6 = 1;
	short short_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double_1 = double_1 + double_1;
	char_2 = char_1 * char_1;
	short_3 = short_1 + short_2;
	char_4 = char_3 + char_3;
	int_1 = int_1 + int_1;
	double_2 = double_3;
	double_1 = double_4 + double_3;
	if(1)
	{
		double_2 = double_4;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		long_1 = long_1;
		double_6 = double_5 + double_2;
	}
	char_5 = char_5;
	char controller4vul_1768[2];
	fgets(controller4vul_1768 ,2 ,stdin);
	if( strcmp( controller4vul_1768, "e") > 0)
	{
		char controller4vul_1769[3];
		fgets(controller4vul_1769 ,3 ,stdin);
		if( strcmp( controller4vul_1769, "eH") > 0)
		{
			v_rasqal_new_xsd_date(double_6,char_2,uni_para);

			int_3 = int_2 + int_2;
		}
		unsigned_int_2 = unsigned_int_1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
		}
		double_1 = double_2;
	}
	if(1)
	{
		float_2 = float_1 + float_1;
		if(1)
		{
		}
		if(1)
		{
			double_6 = double_7 + double_6;
		}
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		char_4 = char_5 * char_3;
		float_3 = float_3 * float_1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		long_2 = long_1 * long_2;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			char_5 = char_1 * char_3;
			long_1 = long_1 * long_3;
		}
	}
	short_4 = short_4 * short_5;
	double_7 = double_6;
	if(1)
	{
		unsigned_int_5 = unsigned_int_5;
		char_2 = char_2 + char_2;
		float_2 = float_4;
		int_3 = int_2 * int_4;
		if(1)
		{
			int_5 = int_3 * int_5;
			double_2 = double_3 * double_7;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
		}
	}
	short_1 = short_1 * short_3;
	if(1)
	{
		long long_5 = 1;
		char char_6 = 1;
		float_4 = float_3;
		int_5 = int_5 + int_1;
		unsigned_int_5 = unsigned_int_6 + unsigned_int_4;
		if(1)
		{
		}
		if(1)
		{
			char_5 = char_4;
		}
		if(1)
		{
			unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
		}
		if(1)
		{
			short_3 = short_4 * short_1;
		}
		long_5 = long_4 * long_3;
		if(1)
		{
			int_3 = int_1 * int_4;
		}
		char_3 = char_6;
		short_4 = short_3;
		if(1)
		{
		}
	}
	double_7 = double_6 + double_5;
	double_5 = double_3 + double_1;
	unsigned_int_8 = unsigned_int_4 * unsigned_int_8;
	if(1)
	{
		double_3 = double_2 + double_3;
	}
	int_6 = int_5 * int_2;
	short_6 = short_6;
	double_1 = double_2 + double_5;
	int_5 = int_1 * int_1;
	double_3 = double_4 * double_5;
	if(1)
	{
		double double_8 = 1;
		long long_6 = 1;
		double double_11 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_6;
		if(1)
		{
			double_4 = double_5 + double_8;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		if(1)
		{
			double double_9 = 1;
			double double_10 = 1;
			double_9 = double_9 * double_10;
		}
		long_6 = long_4 + long_3;
		double_8 = double_6 * double_11;
		float_4 = float_1;
		if(1)
		{
		}
	}
	int_6 = int_2;
	if(1)
	{
		float float_5 = 1;
		char char_7 = 1;
		int_1 = int_4 * int_2;
		if(1)
		{
			long_3 = long_4 * long_2;
		}
		int_5 = int_2 * int_2;
		if(1)
		{
			int_5 = int_3 * int_6;
		}
		float_1 = float_5 * float_1;
		unsigned_int_8 = unsigned_int_6 + unsigned_int_2;
		char_7 = char_5 + char_2;
		if(1)
		{
		}
	}
	unsigned_int_5 = unsigned_int_5 * unsigned_int_8;
	unsigned_int_8 = unsigned_int_7 * unsigned_int_7;
	int_2 = int_4 + int_4;
	int_2 = int_7 + int_8;
	return unsigned_int_5;
}
float v_rasqal_xsd_datatype_uri_to_type( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double_1 = double_1 + double_2;
	double_4 = double_2 + double_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			if(1)
			{
				double double_5 = 1;
				double_5 = double_5;
			}
			if(1)
			{
				double double_6 = 1;
				double_6 = double_2 * double_2;
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
	}
	return float_1;
}
int v_rasqal_literal_string_to_native( double parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_2;
	char_2 = char_1 * char_1;
	char_1 = char_1 + char_3;
	char controller4vul_1767[2];
	fgets(controller4vul_1767 ,2 ,stdin);
	if( strcmp( controller4vul_1767, "x") < 0)
	{
		unsigned_int_1 = v_rasqal_literal_set_typed_value(float_1,unsigned_int_1,short_1,int_2,uni_para);

	}
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_2 * int_2;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 + double_2;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	return int_1;
}
long v_rasqal_literal_get_rdf_term_type( float parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	long_3 = long_1 + long_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_3 = int_3 + int_4;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	return long_3;
}
int v_rasqal_literal_equals_flags( int parameter_1,float parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	float float_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	float float_2 = 1;
	long long_6 = 1;
	long long_7 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	long long_8 = 1;
	char_2 = char_1 * char_1;
	long_1 = long_1 + long_2;
	double_1 = double_1 + double_2;
	short_3 = short_1 * short_2;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_2 + double_3;
	}
	long_5 = long_3 + long_4;
	long_3 = long_2 * long_3;
	long_2 = long_3 + long_1;
	double_1 = double_1 + double_3;
	if(1)
	{
		short_3 = short_2 * short_2;
		char_2 = char_3 * char_3;
		if(1)
		{
			int_1 = int_1 * int_2;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	char controller4vul_1756[2];
	fgets(controller4vul_1756 ,2 ,stdin);
	if( strcmp( controller4vul_1756, "o") < 0)
	{
		double_3 = double_1 * double_1;
		double_2 = double_3 * double_2;
		if(1)
		{
			double_3 = double_3 * double_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
		char controller4vul_1757[3];
		fgets(controller4vul_1757 ,3 ,stdin);
		if( strcmp( controller4vul_1757, "EH") > 0)
		{
			int_2 = int_1 * int_1;
			char controller4vul_1758[2];
			fgets(controller4vul_1758 ,2 ,stdin);
			if( strcmp( controller4vul_1758, "s") < 0)
			{
				short short_4 = 1;
				short_2 = short_3 * short_4;
				double_2 = double_4 * double_5;
				char controller4vul_1759[2];
				fgets(controller4vul_1759 ,2 ,stdin);
				if( strcmp( controller4vul_1759, "1") > 0)
				{
					double_3 = v_rasqal_new_literal_from_promotion(double_3,double_4,int_2,uni_para);

					double_3 = double_6 + double_6;
				}
				short_3 = short_5 * short_1;
			}
			if(1)
			{
				int_4 = int_3 * int_1;
			}
			if(1)
			{
				double_6 = double_3 * double_1;
			}
		}
		if(1)
		{
			double_5 = double_7;
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double double_8 = 1;
				double_6 = double_5 * double_8;
			}
			long_5 = long_4;
		}
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		char_4 = char_4 * char_5;
		if(1)
		{
			int_2 = int_2 * int_4;
		}
		if(1)
		{
			int int_5 = 1;
			int_3 = int_5 + int_1;
			short_3 = short_3 + short_5;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		int_2 = int_1 + int_1;
	}
	char_3 = char_1 * char_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_6 = int_4;
	float_1 = float_2 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_4 = long_6;
	long_7 = long_2 * long_2;
	double_2 = double_1 + double_6;
	double_9 = double_9 + double_1;
	double_6 = double_7;
	unsigned_int_1 = unsigned_int_2;
	double_9 = double_7 * double_4;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	long_2 = long_6;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_7;
	char_1 = char_3 * char_4;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	}
	long_8 = long_8 * long_3;
	if(1)
	{
		if(1)
		{
			long_8 = long_2 * long_7;
		}
		if(1)
		{
			long_5 = long_1 * long_3;
		}
	}
	if(1)
	{
		char char_6 = 1;
		char_6 = char_4 + char_5;
	}
	return int_1;
}
short v_rasqal_new_literal_from_literal( long parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	return short_1;
}
void v_rasqal_expression_clear( short parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_3 = 1;
	double double_7 = 1;
	char_1 = char_1 + char_1;
	short_2 = short_1 * short_2;
	int_1 = int_1 * int_1;
	long_1 = long_1;
	int_1 = int_2 * int_3;
	int_5 = int_4 + int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		double_3 = double_2 * double_2;
	}
	int_2 = int_6 * int_7;
	if(1)
	{
		float float_1 = 1;
		v_rasqal_free_expression(unsigned_int_3);

		float_1 = float_1 * float_2;
	}
	int_6 = int_2 * int_4;
	char_1 = char_2;
	double_2 = double_2;
	v_rasqal_free_literal();

	double_3 = double_2;
	int_9 = int_8 * int_9;
	double_5 = double_1 + double_4;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_2 + double_1;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
	}
	unsigned_int_6 = unsigned_int_4 + unsigned_int_4;
	int_6 = int_4 + int_6;
	float_4 = float_2 * float_3;
	int_1 = int_4 * int_4;
	short_2 = short_1 + short_2;
	char_3 = char_1 + char_3;
	double_5 = double_7 * double_4;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_4;
	float_3 = float_3 * float_3;
	float_4 = float_4 + float_3;
}
void v_rasqal_free_expression( unsigned int parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	v_rasqal_expression_clear(short_1);

	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
void v_rasqal_free_variable( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_1;
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
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		v_rasqal_free_expression(unsigned_int_2);

		double_2 = double_1 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	}
	int_1 = int_1;
	v_rasqal_free_literal();

}
void v_rasqal_xsd_decimal_clear_string( float parameter_1)
{
	int int_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double_2 = double_1 + double_1;
		int_1 = int_1 + int_2;
	}
	int_2 = int_2;
}
short v_rasqal_xsd_decimal_clear( int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	v_rasqal_xsd_decimal_clear_string(float_1);

	int_1 = int_1;
	double_1 = double_1 + double_2;
	float_2 = float_3;
	char_1 = char_2;
	return short_1;
}
void v_rasqal_free_xsd_decimal( long parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	short_1 = v_rasqal_xsd_decimal_clear(int_1);

	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 * float_2;
}
void v_rasqal_free_xsd_datetime( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
}
void v_rasqal_free_xsd_date( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void v_rasqal_free_literal()
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_2 = 1;
	int int_5 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		v_rasqal_free_xsd_date(char_1);

		int_1 = int_1 * int_2;
	}
	int_1 = int_2 * int_2;
	if(1)
	{
		long long_2 = 1;
		v_rasqal_free_variable(int_3);

		long_2 = long_1 * long_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			int_1 = int_4;
		}
	}
	v_rasqal_free_xsd_datetime(char_2);

	int_3 = int_3 + int_3;
	if(1)
	{
		int_3 = int_5;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	char_4 = char_3 * char_1;
	if(1)
	{
		int_6 = int_2 * int_5;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	v_rasqal_free_xsd_decimal(long_3);

	int_1 = int_3 + int_6;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	}
	if(1)
	{
		long long_4 = 1;
		long_4 = long_1 * long_3;
	}
	short_1 = short_1 * short_2;
	if(1)
	{
		int_5 = int_6 * int_4;
	}
	unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		double_2 = double_3;
	}
	char_1 = char_4;
	int_2 = int_6 * int_3;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_8;
}
void v_rasqal_variable_set_value( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	int_1 = v_rasqal_literal_print(unsigned_int_1,unsigned_int_1);

	double_2 = double_1 * double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		v_rasqal_free_literal();

		char_2 = char_1 + char_1;
	}
	double_4 = double_2 + double_3;
	short_3 = short_1 + short_2;
	double_1 = double_5;
}
double v_rasqal_expression_op_label( double parameter_1)
{
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	return double_1;
}
void v_rasqal_expression_write_op( short parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 + short_2;
	int_2 = int_1 * int_2;
	double_1 = v_rasqal_expression_op_label(double_2);

}
void v_rasqal_expression_write( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	long long_2 = 1;
	char char_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_10 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_11 = 1;
	float float_4 = 1;
	double_1 = double_1 * double_1;
	double_4 = double_2 + double_3;
	short_1 = short_1 + short_2;
	double_5 = double_1;
	double_5 = double_5 * double_2;
	int_1 = int_1 + int_1;
	char_1 = char_1 + char_1;
	int_2 = int_1;
	short_3 = short_3 * short_2;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1;
	char_4 = char_2 * char_3;
	double_2 = double_4 * double_5;
	double_3 = double_1 * double_2;
	if(1)
	{
		char char_5 = 1;
		long_1 = long_1 + long_1;
		char_5 = char_2 + char_3;
	}
	if(1)
	{
		float_3 = float_3;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	double_3 = double_4 + double_5;
	int_1 = int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	float_1 = float_1;
	int_3 = int_1 * int_2;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
	long_1 = long_1 + long_1;
	int_3 = int_1;
	int_4 = int_1;
	int_5 = int_6;
	int_5 = int_2 * int_5;
	double_6 = double_4;
	if(1)
	{
		float_3 = float_2 + float_1;
	}
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
	char_6 = char_6;
	int_6 = int_3 * int_7;
	double_5 = double_4 + double_6;
	int_9 = int_8 * int_6;
	int_7 = int_4 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_6 = unsigned_int_2 * unsigned_int_6;
		if(1)
		{
			unsigned_int_7 = unsigned_int_6 + unsigned_int_6;
		}
		unsigned_int_2 = unsigned_int_8 + unsigned_int_8;
		v_rasqal_literal_write(short_4,char_6);

		long_2 = long_1 * long_2;
	}
	int_5 = int_1 * int_5;
	short_2 = short_3 * short_3;
	short_1 = short_4;
	char_3 = char_1 + char_6;
	long_1 = long_1;
	int_1 = int_9 + int_2;
	float_1 = float_1;
	int_5 = int_6 * int_9;
	short_1 = short_3;
	unsigned_int_9 = unsigned_int_3 + unsigned_int_2;
	double_1 = double_4;
	double_4 = double_6 + double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_3 = double_5;
		if(1)
		{
			double_7 = double_7 + double_8;
		}
		unsigned_int_3 = unsigned_int_6;
		int_8 = int_3 * int_6;
	}
	double_10 = double_7 + double_9;
	int_3 = int_4 * int_8;
	v_rasqal_expression_write_op(short_2,char_2);

	int_8 = int_7 + int_10;
	if(1)
	{
		unsigned_int_9 = unsigned_int_1 + unsigned_int_4;
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_9;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			int_1 = int_2 * int_8;
		}
		double_10 = double_1;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		double_10 = double_11 * double_1;
		int_3 = int_5 + int_2;
	}
	double_10 = double_2 + double_10;
	double_6 = double_8 * double_3;
	unsigned_int_10 = unsigned_int_8 + unsigned_int_1;
	double_5 = double_11 + double_10;
	double_9 = double_5 * double_12;
	unsigned_int_7 = unsigned_int_9 + unsigned_int_11;
	double_9 = double_11 * double_4;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_10 = double_4 * double_2;
		if(1)
		{
			char_6 = char_4;
		}
		long_2 = long_1 + long_1;
		int_4 = int_8 + int_10;
	}
	double_7 = double_2 * double_2;
	float_4 = float_2 + float_3;
	unsigned_int_10 = unsigned_int_6 + unsigned_int_10;
	long_2 = long_2 + long_1;
}
void v_rasqal_variable_write( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		v_rasqal_expression_write(float_1,unsigned_int_2);

		v_rasqal_literal_write(short_1,char_1);

		long_3 = long_1 * long_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		short_3 = short_2 + short_1;
		float_2 = float_1;
	}
	double_2 = double_1 + double_1;
	double_4 = double_1 * double_3;
	double_4 = double_2 + double_2;
	long_2 = long_1 + long_2;
}
float v_rasqal_literal_type_label( double parameter_1)
{
	float float_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	return float_1;
}
void v_rasqal_literal_write_type( int parameter_1,float parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		float_1 = v_rasqal_literal_type_label(double_1);

		double_1 = double_1 + double_1;
	}
	char_2 = char_1 + char_2;
}
void v_rasqal_literal_write( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_8 = 1;
	long long_4 = 1;
	double double_9 = 1;
	v_rasqal_literal_write_type(int_1,float_1);

	int_2 = int_2 + int_2;
	double_1 = double_1;
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_2;
	}
	double_5 = double_3 + double_4;
	short_4 = short_2 + short_3;
	double_2 = double_6 * double_2;
	int_1 = int_4 * int_5;
	float_1 = float_1 + float_1;
	float_3 = float_1 + float_2;
	double_2 = double_1 * double_6;
	long_3 = long_1 + long_2;
	int_7 = int_6 + int_2;
	float_3 = float_2 * float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char_3 = char_1 * char_2;
	}
	unsigned_int_4 = unsigned_int_4;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	float_3 = float_1 + float_2;
	double_7 = double_5 * double_1;
	if(1)
	{
		int int_8 = 1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
		int_4 = int_2 * int_8;
	}
	if(1)
	{
		char_1 = char_3 * char_3;
		float_2 = float_4;
		char_1 = char_2 + char_4;
		char_4 = char_4 * char_1;
	}
	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	short_1 = short_3 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_4 = float_3;
	v_rasqal_variable_write(short_2,int_5);

	char_2 = char_5 + char_4;
	double_6 = double_3 + double_4;
	double_8 = double_6 * double_1;
	long_3 = long_4 + long_1;
	double_9 = double_4 * double_5;
}
int v_rasqal_literal_print( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	v_rasqal_literal_write(short_1,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	unsigned_int_3 = unsigned_int_4;
	char_2 = char_2;
	short_3 = short_2 + short_1;
	return int_1;
}
int v_rasqal_triple_print( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_2;
	char_1 = char_1 + char_1;
	double_1 = double_3 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	short_1 = short_1;
	float_2 = float_1 + float_1;
	double_1 = double_2 * double_3;
	int_1 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		int int_3 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		float_4 = float_1 * float_3;
		int_2 = v_rasqal_literal_print(unsigned_int_2,unsigned_int_1);

		int_1 = int_2 + int_3;
	}
	return int_1;
}
void v_rasqal_raptor_bind_match( unsigned int parameter_1,float parameter_3,unsigned int parameter_4)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_6 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	float float_3 = 1;
	char_1 = char_1;
	int_3 = int_1 * int_2;
	v_rasqal_variable_set_value(unsigned_int_1,int_4);

	int_2 = int_2 + int_2;
	char_1 = char_1 * char_1;
	if(1)
	{
		int_5 = int_3 + int_1;
		double_1 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		int_3 = int_4 * int_1;
	}
	if(1)
	{
		long long_2 = 1;
		int_5 = v_rasqal_triple_print(int_2,int_2);

		unsigned_int_1 = unsigned_int_2;
		float_1 = float_2;
		long_1 = long_1 * long_2;
		float_2 = float_1;
	}
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
			int_3 = int_3 + int_2;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			int_6 = int_5 * int_4;
			double_1 = double_1 + double_1;
			short_1 = short_1 * short_1;
			long_3 = long_3 * long_4;
		}
	}
	if(1)
	{
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		double_3 = double_2 + double_3;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
			}
			unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
			short_1 = short_2 * short_1;
		}
		if(1)
		{
			short short_4 = 1;
			if(1)
			{
			}
			if(1)
			{
			}
			double_1 = double_3 + double_2;
			short_3 = v_rasqal_new_literal_from_literal(long_1);

			short_4 = short_3 * short_4;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			char_2 = char_2 * char_3;
			short_3 = short_2 * short_1;
			float_5 = float_3 + float_4;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		short short_5 = 1;
		short short_6 = 1;
		int int_7 = 1;
		unsigned_int_3 = unsigned_int_5;
		float_2 = float_3 * float_1;
		short_6 = short_1 * short_5;
		double_1 = double_3 * double_3;
		int_2 = v_rasqal_literal_equals_flags(int_4,float_3,int_3,int_3,-1 );

		int_1 = int_7 * int_6;
	}
}
short v_rasqal_raptor_init_triples_match( int parameter_1,short parameter_2,float parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_4 = v_rasqal_raptor_is_end(int_1);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	double_2 = double_1 * double_2;
	v_rasqal_raptor_finish_triples_match(double_2);

	unsigned_int_6 = unsigned_int_2 + unsigned_int_3;
	float_1 = v_rasqal_literal_as_variable(int_2);

	int_3 = int_2;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		float float_2 = 1;
		char char_2 = 1;
		int int_4 = 1;
		double double_4 = 1;
		double double_6 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					for(int looper_5=0; looper_5<1;looper_5++)
					{
						char_1 = char_1 + char_1;
					}
					long_1 = long_1;
				}
			}
		}
		long_2 = long_1 * long_2;
		float_2 = float_1 + float_2;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int_3 = v_rasqal_raptor_triple_match(double_3,int_3,long_2,short_1);

			char_1 = char_2 * char_1;
			float_1 = float_2 + float_2;
			int_4 = int_2 + int_3;
		}
		double_3 = double_1 + double_4;
		unsigned_int_2 = unsigned_int_4;
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				long long_3 = 1;
				char char_3 = 1;
				double_2 = double_1 * double_3;
				if(1)
				{
					v_rasqal_variable_set_value(unsigned_int_6,int_1);

					double_1 = double_3;
					int_2 = int_3;
				}
				for(int looper_9=0; looper_9<1;looper_9++)
				{
					long long_4 = 1;
					double_1 = double_3 * double_2;
					double_3 = double_2 + double_2;
					unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
					for(int looper_10=0; looper_10<1;looper_10++)
					{
						for(int looper_11=0; looper_11<1;looper_11++)
						{
							long_2 = long_3 * long_1;
						}
					}
					for(int looper_12=0; looper_12<1;looper_12++)
					{
						double double_5 = 1;
						unsigned int unsigned_int_7 = 1;
						double_4 = double_5 * double_1;
						unsigned_int_2 = unsigned_int_5 * unsigned_int_7;
					}
					long_1 = long_4 + long_1;
					if(1)
					{
						for(int looper_13=0; looper_13<1;looper_13++)
						{
							int int_5 = 1;
							short_2 = v_rasqal_new_literal_from_literal(long_2);

							int_5 = int_2;
						}
						char_3 = char_1 * char_2;
					}
				}
				if(1)
				{
					long_3 = long_3 * long_2;
					for(int looper_14=0; looper_14<1;looper_14++)
					{
						for(int looper_15=0; looper_15<1;looper_15++)
						{
							for(int looper_16=0; looper_16<1;looper_16++)
							{
								char char_4 = 1;
								short short_3 = 1;
								short short_4 = 1;
								long_2 = v_rasqal_raptor_next_match(long_1);

								char_3 = char_4;
								double_6 = double_1 + double_4;
								short_4 = short_3 + short_2;
							}
						}
					}
					int_2 = int_4 * int_2;
				}
			}
		}
		for(int looper_17=0; looper_17<1;looper_17++)
		{
			unsigned int unsigned_int_8 = 1;
			long long_5 = 1;
			double_2 = double_1 * double_6;
			unsigned_int_8 = unsigned_int_3 * unsigned_int_5;
			long_5 = long_1 * long_2;
			double_1 = double_6 * double_4;
		}
	}
	return short_1;
	v_rasqal_raptor_bind_match(unsigned_int_6,float_1,unsigned_int_5);

}
double v_rasqal_raptor_init_triples_source_common( char parameter_1,short parameter_2,char parameter_3,float parameter_6,short parameter_7,float parameter_8,long parameter_9)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_5 = 1;
	float float_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	char char_3 = 1;
	double double_7 = 1;
	char char_4 = 1;
	short_1 = short_1 + short_1;
	long_3 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_1;
	short_2 = short_1;
	long_3 = long_4 + long_2;
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_1;
	int_1 = v_rasqal_raptor_support_feature(int_2);

	int_2 = int_1 + int_1;
	double_1 = double_3 + double_1;
	double_3 = double_3 * double_3;
	if(1)
	{
		double_3 = double_2 * double_1;
	}
	if(1)
	{
		short_3 = short_2 + short_1;
	}
	if(1)
	{
		char_2 = v_rasqal_raptor_free_triples_source();

		double_2 = v_rasqal_raptor_get_genid(unsigned_int_3,double_1,int_3);

		float_1 = float_1;
		if(1)
		{
		}
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int_1 = int_1 * int_2;
		short_1 = short_2;
		long_3 = long_4 * long_2;
		short_4 = short_4 + short_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		short_1 = v_rasqal_raptor_init_triples_match(int_2,short_5,float_2,float_1);

		short_5 = short_3 * short_3;
		int_4 = int_2 + int_1;
		float_2 = float_1 * float_1;
		double_4 = double_4 * double_3;
		unsigned_int_2 = unsigned_int_3;
		float_3 = float_3 + float_1;
		if(1)
		{
			long_2 = v_rasqal_raptor_statement_handler(float_3);

			char_3 = char_1 + char_2;
		}
		if(1)
		{
			double_5 = double_2 * double_4;
		}
		if(1)
		{
			short short_6 = 1;
			short_6 = short_2 + short_6;
			int_3 = int_4;
		}
		double_3 = double_6 + double_5;
		float_3 = float_3 * float_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			if(1)
			{
				short short_7 = 1;
				short short_8 = 1;
				if(1)
				{
					long_1 = long_4 + long_3;
				}
				if(1)
				{
					double_7 = double_1 + double_3;
				}
				float_3 = v_rasqal_raptor_triple_present(float_2,char_4);

				short_1 = short_7 + short_8;
			}
		}
		if(1)
		{
			double_3 = double_6 * double_5;
		}
		int_4 = v_rasqal_raptor_generate_id_handler(char_3);

		int_6 = int_5 + int_6;
		int_4 = int_1;
		int_3 = int_5 + int_4;
		if(1)
		{
			double_3 = double_6 * double_2;
		}
		if(1)
		{
			double_7 = v_rasqal_new_uri_literal(short_1,double_1);

			int_6 = int_3 * int_7;
		}
		if(1)
		{
			int int_8 = 1;
			int_4 = int_8;
		}
		long_3 = long_3 + long_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			char_3 = char_4 + char_4;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		int_4 = int_3 * int_2;
		if(1)
		{
			int_7 = int_5 * int_6;
		}
	}
	return double_3;
}
int v_rasqal_raptor_new_triples_source( short parameter_1,char parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	return int_1;
	double_1 = v_rasqal_raptor_init_triples_source_common(char_1,short_1,char_1,float_1,short_1,float_2,long_1);

	v_rasqal_triples_source_error_handler2(char_1,long_2,unsigned_int_1);

}
char v_rasqal_raptor_register_triples_source_factory( short parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_1;
	int_1 = v_rasqal_raptor_new_triples_source(short_1,char_1);

	v_rasqal_raptor_init_triples_source(double_1,int_2,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_1;
	int_1 = v_rasqal_raptor_init_triples_source2(char_1,float_1,float_2,unsigned_int_1,char_2);

	double_3 = double_1 + double_2;
	float_2 = float_1 * float_2;
	return char_2;
}
float v_rasqal_set_triples_source_factory( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	float float_2 = 1;
	int_1 = v_rasqal_world_open(double_1);

	long_1 = long_1 + long_2;
	v_rasqal_log_error_simple(short_1,short_2,unsigned_int_1,char_1,double_2);

	char_2 = char_1;
	if(1)
	{
	}
	double_3 = double_2 + double_3;
	int_1 = int_1 + int_1;
	long_2 = long_2 * long_1;
	short_3 = short_1 * short_1;
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 + float_1;
		long_2 = long_2 * long_2;
	}
	return float_2;
}
int v_rasqal_raptor_init( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float_1 = v_rasqal_set_triples_source_factory(float_2,char_1);

	short_1 = short_2;
	return int_1;
	char_1 = v_rasqal_raptor_register_triples_source_factory(short_2);

}
long v_rasqal_free_query_language_factory( short parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	double_1 = double_1 * double_1;
	return long_1;
}
int v_rasqal_xsd_init( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_3 = 1;
		long_2 = long_1 * long_1;
		short_3 = short_2 + short_3;
		if(1)
		{
		}
	}
	return int_1;
}
void v_rasqal_log_error_varargs( double parameter_1,char parameter_2,double parameter_3,char parameter_4,float parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_2;
	double_4 = double_3 + double_3;
	double_4 = double_5;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		double double_6 = 1;
		if(1)
		{
			double_4 = double_5 * double_1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
		double_1 = double_6 + double_6;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		double_3 = double_5 * double_2;
		double_6 = double_6;
	}
	unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		float float_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_7 = 1;
		short_2 = short_1 * short_1;
		char_2 = char_1 + char_2;
		float_2 = float_2;
		long_3 = long_1 + long_2;
		unsigned_int_7 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		if(1)
		{
			unsigned_int_6 = unsigned_int_4 + unsigned_int_1;
			int_1 = int_2;
		}
		char_1 = char_2 + char_2;
		int_2 = int_3 + int_4;
		double_3 = double_4 * double_5;
		int_5 = int_2 * int_1;
		short_2 = short_1;
	}
	unsigned_int_6 = unsigned_int_3;
}
void v_rasqal_log_error_simple( short parameter_1,short parameter_2,unsigned int parameter_3,char parameter_4,double parameter_5)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short_1 = short_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	v_rasqal_log_error_varargs(double_1,char_1,double_2,char_1,float_1);

	char_1 = char_1 * char_1;
	double_2 = double_1 * double_1;
}
int v_rasqal_uri_init( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	double_1 = double_1 + double_1;
	long_1 = long_2;
	int_1 = int_2;
	if(1)
	{
		v_rasqal_log_error_simple(short_3,short_1,unsigned_int_3,char_1,double_2);

		int_1 = int_1;
	}
	long_1 = long_3 + long_3;
	return int_1;
}
int v_rasqal_world_open( double parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_1 = long_2;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		long_3 = long_3;
		if(1)
		{
		}
	}
	float_2 = float_2 * float_1;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	char_1 = char_1;
	if(1)
	{
	}
	int_1 = v_rasqal_xsd_init(float_2);

	int_2 = v_rasqal_init_query_results();

	float_3 = float_2 * float_2;
	if(1)
	{
	}
	char_3 = char_2 + char_1;
	if(1)
	{
	}
	int_1 = v_rasqal_uri_init(double_1);

	double_2 = double_2 * double_3;
	if(1)
	{
	}
	int_3 = v_rasqal_init_result_formats(long_1);

	double_2 = double_2;
	if(1)
	{
	}
	long_3 = v_rasqal_free_query_language_factory(short_2);

	long_3 = long_1 * long_3;
	if(1)
	{
	}
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	return int_4;
	int_4 = v_rasqal_raptor_init(short_2);

}
short v_rasqal_new_world()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float_3 = float_1 * float_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	float_4 = float_4 * float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return short_1;
}
double v_rasqal_basename( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "HQ") < 0)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return double_1;
}
int main()
{
	int uni_para =273;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1746[3];
	fgets(controller4vul_1746 ,3 ,stdin);
	if( strcmp( controller4vul_1746, "hr") > 0)
	{
		int_1 = v_rasqal_query_prepare(short_1,long_1,unsigned_int_3,uni_para);

	}
	long_3 = long_2 * long_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return int_1;
}

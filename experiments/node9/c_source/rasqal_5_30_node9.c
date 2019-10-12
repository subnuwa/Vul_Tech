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

void v_rasqal_uri_finish( short parameter_1);
void v_rasqal_xsd_finish( short parameter_1);
short v_rasqal_delete_query_language_factories( char parameter_1);
void v_rasqal_finish_query_results();
void v_rasqal_finish_result_formats( unsigned int parameter_1);
void v_rasqal_free_world( double parameter_1);
void v_rasqal_free_memory();
char v_rasqal_algebra_get_variables_mentioned_in( short parameter_1,int parameter_2);
short v_rasqal_algebra_query_add_construct_projection( int parameter_1,float parameter_2);
int v_rasqal_algebra_node_is_empty( int parameter_1);
char v_rasqal_algebra_remove_znodes( int parameter_1,double parameter_2);
int v_rasqal_algebra_node_visit( long parameter_1,float parameter_2);
void v_rasqal_new_service_algebra_node( short parameter_1,double parameter_2,float parameter_3,unsigned int parameter_4,int parameter_5);
int v_rasqal_graph_pattern_get_filter_expression( double parameter_1);
long v_rasqal_query_write_sparql_triple( short parameter_1,double parameter_2,short parameter_3);
char v_rasqal_graph_pattern_get_triple( char parameter_1,int parameter_2);
long v_rasqal_query_write_sparql_row( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
float v_rasqal_query_write_sparql_values( char parameter_1,double parameter_2,long parameter_3,double parameter_4);
short v_rasqal_query_write_sparql_expression_sequence( short parameter_1,char parameter_2,long parameter_3);
void v_rasqal_query_write_sparql_modifiers( long parameter_1,long parameter_2,long parameter_3);
double v_rasqal_query_write_indent( short parameter_1,float parameter_2);
void v_rasqal_query_write_sparql_uri( int parameter_1,long parameter_2,double parameter_3);
int v_rasqal_query_write_sparql_literal( float parameter_1,unsigned int parameter_2,double parameter_3);
void v_rasqal_query_write_sparql_expression_op( short parameter_1,unsigned int parameter_2,float parameter_3);
unsigned int v_rasqal_query_write_sparql_expression( long parameter_1,short parameter_2,int parameter_3);
long v_rasqal_query_write_sparql_variable( long parameter_1,int parameter_2,float parameter_3);
short v_rasqal_query_write_sparql_variables_sequence( int parameter_1,long parameter_2,double parameter_3);
short v_rasqal_graph_pattern_get_operator( char parameter_1);
unsigned int v_rasqal_query_write_sparql_graph_pattern( char parameter_1,long parameter_2,long parameter_3,int parameter_4,char parameter_5);
int v_rasqal_query_write_sparql_20060406_graph_pattern( unsigned int parameter_1,float parameter_2,long parameter_3);
void v_rasqal_algebra_service_graph_pattern_to_algebra( long parameter_1,char parameter_2);
int v_rasqal_algebra_values_graph_pattern_to_algebra( int parameter_1,long parameter_2);
long v_rasqal_algebra_filter_graph_pattern_to_algebra( char parameter_1,unsigned int parameter_2);
int v_rasqal_new_values_algebra_node( float parameter_1,unsigned int parameter_2);
unsigned int v_rasqal_new_bindings_from_bindings( short parameter_1);
void v_rasqal_algebra_bindings_to_algebra( int parameter_1,long parameter_2);
short v_rasqal_new_slice_algebra_node( unsigned int parameter_1,char parameter_2,int parameter_3,int parameter_4);
long v_rasqal_algebra_query_add_slice( int parameter_1,double parameter_2,char parameter_3);
char v_rasqal_new_distinct_algebra_node( double parameter_1,double parameter_2);
long v_rasqal_algebra_query_add_distinct( char parameter_1,char parameter_2,char parameter_3);
char v_rasqal_new_orderby_algebra_node( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4);
long v_rasqal_algebra_query_add_orderby( int parameter_1,short parameter_2,long parameter_3,long parameter_4);
int v_rasqal_new_project_algebra_node( float parameter_1,float parameter_2,char parameter_3);
int v_rasqal_algebra_query_add_projection( int parameter_1,double parameter_2,float parameter_3);
float v_rasqal_new_having_algebra_node( long parameter_1,double parameter_2,float parameter_3);
char v_rasqal_algebra_query_add_having( long parameter_1,double parameter_2,unsigned int parameter_3);
char v_rasqal_new_aggregation_algebra_node( int parameter_1,int parameter_2,double parameter_3,long parameter_4);
unsigned int v_rasqal_algebra_query_add_aggregation( int parameter_1,unsigned int parameter_2,float parameter_3);
void v_rasqal_algebra_replace_aggregate_expressions( char parameter_1,long parameter_2,float parameter_3);
double v_rasqal_free_map_node( double parameter_1,unsigned int parameter_2);
void v_rasqal_free_map( char parameter_1);
void v_rasqal_free_algebra_aggregate();
int v_rasqal_map_node_write_indent( unsigned int parameter_1,int parameter_2);
unsigned int v_rasqal_map_node_print_visit();
short v_rasqal_map_node_visit( char parameter_1,double parameter_2);
void v_rasqal_map_visit( long parameter_1);
int v_rasqal_map_print( float parameter_1,double parameter_2);
int v_rasqal_map_node_add_kv( unsigned int parameter_1);
unsigned int v_rasqal_new_map_node( short parameter_1);
int v_rasqal_map_add_kv( char parameter_1);
char v_rasqal_new_variable_literal( short parameter_1,short parameter_2);
int v_rasqal_expression_convert_aggregate_to_variable( int parameter_1,int parameter_2,char parameter_3);
char v_rasqal_map_search_internal( char parameter_1,float parameter_2,int parameter_3);
unsigned int v_rasqal_map_search( unsigned int parameter_1,int parameter_2);
int v_rasqal_expression_is_aggregate( float parameter_1);
double v_rasqal_algebra_extract_aggregate_expression_visit(float parameter_2);
int v_rasqal_expression_compare( char parameter_1,long parameter_2,int parameter_3,int parameter_4);
short v_rasqal_agg_expr_var_compare(int parameter_2,float parameter_3);
void v_rasqal_new_map( short parameter_1,double parameter_3,char parameter_4,float parameter_5,int parameter_6,float parameter_7,int parameter_8);
double v_rasqal_algebra_extract_aggregate_expressions( float parameter_1,unsigned int parameter_2,unsigned int parameter_3,double parameter_4);
long v_rasqal_algebra_query_prepare_aggregates( int parameter_1,float parameter_2,float parameter_3,double parameter_4);
unsigned int v_rasqal_algebra_write_indent( long parameter_1,char parameter_2);
long v_rasqal_algebra_node_operator_as_counted_string( short parameter_1,int parameter_2);
float v_rasqal_algebra_algebra_node_write_internal( float parameter_1,long parameter_2,unsigned int parameter_3);
int v_rasqal_algebra_algebra_node_write( float parameter_1,char parameter_2);
int v_rasqal_algebra_node_print( short parameter_1,short parameter_2);
double v_rasqal_new_groupby_algebra_node( unsigned int parameter_1,int parameter_2,int parameter_3);
short v_rasqal_expression_copy_expression_sequence( unsigned int parameter_1);
int v_rasqal_algebra_query_add_group_by( long parameter_1,long parameter_2,char parameter_3);
float v_rasqal_algebra_select_graph_pattern_to_algebra( float parameter_1,double parameter_2);
long v_rasqal_new_assignment_algebra_node( long parameter_1,float parameter_2,long parameter_3);
int v_rasqal_algebra_let_graph_pattern_to_algebra( unsigned int parameter_1,char parameter_2);
long v_rasqal_new_graph_algebra_node( long parameter_1,char parameter_2,unsigned int parameter_3);
short v_rasqal_algebra_graph_graph_pattern_to_algebra( char parameter_1,int parameter_2);
int v_rasqal_new_literal_expression( long parameter_1,short parameter_2);
char v_rasqal_algebra_new_boolean_constant_expr( short parameter_1,int parameter_2);
int v_rasqal_new_leftjoin_algebra_node( char parameter_1,double parameter_2,int parameter_3,short parameter_4);
unsigned int v_rasqal_new_empty_algebra_node( int parameter_1);
long v_rasqal_algebra_group_graph_pattern_to_algebra( unsigned int parameter_1,unsigned int parameter_2);
unsigned int v_rasqal_new_2op_algebra_node( short parameter_1,int parameter_2,float parameter_3,float parameter_4);
short v_rasqal_algebra_union_graph_pattern_to_algebra( int parameter_1,float parameter_2);
void v_rasqal_free_algebra_node( unsigned int parameter_1);
int v_rasqal_new_filter_algebra_node( int parameter_1,int parameter_2,float parameter_3);
void v_rasqal_query_get_triple_sequence( short parameter_1);
short v_rasqal_new_algebra_node( float parameter_1,long parameter_2);
float v_rasqal_new_triples_algebra_node( char parameter_1,long parameter_2,int parameter_3,int parameter_4);
char v_rasqal_algebra_basic_graph_pattern_to_algebra( char parameter_1,float parameter_2);
short v_rasqal_algebra_graph_pattern_to_algebra( char parameter_1,double parameter_2);
int v_rasqal_algebra_query_to_algebra( int parameter_1);
int v_rasqal_query_variable_is_bound( char parameter_1,char parameter_2);
float v_rasqal_query_check_unused_variables( double parameter_1);
int v_rasqal_graph_pattern_variable_bound_in( unsigned int parameter_1,float parameter_2);
int v_rasqal_graph_pattern_variable_bound_below( short parameter_1,long parameter_2);
float v_rasqal_graph_pattern_find_parent( int parameter_1,unsigned int parameter_2);
double v_rasqal_graph_pattern_get_parent( float parameter_1,int parameter_2,char parameter_3);
char v_rasqal_expression_has_variable(long parameter_2);
int v_rasqal_expression_mentions_variable( char parameter_1,double parameter_2);
long v_rasqal_query_filter_variable_scope( unsigned int parameter_1,double parameter_2);
float v_rasqal_query_build_variable_agg_use( char parameter_1);
char v_rasqal_query_values_build_variables_use_map_binds( char parameter_1,short parameter_2,int parameter_3,char parameter_4,short parameter_5);
long v_rasqal_query_union_build_variables_use_map_binds( long parameter_1,double parameter_2,int parameter_3,float parameter_4,short parameter_5);
char v_rasqal_query_select_build_variables_use_map_binds( int parameter_1,short parameter_2,int parameter_3,float parameter_4,unsigned int parameter_5);
char v_rasqal_query_let_build_variables_use_map_binds( int parameter_1,short parameter_2);
int v_rasqal_query_graph_build_variables_use_map_binds( double parameter_1,short parameter_2);
short v_rasqal_graph_pattern_promote_variable_mention_to_bind( char parameter_1,double parameter_2,unsigned int parameter_3);
long v_rasqal_query_triples_build_variables_use_map_binds( float parameter_1,int parameter_2,int parameter_3,short parameter_4,unsigned int parameter_5);
char v_rasqal_query_graph_pattern_build_variables_use_map_binds( unsigned int parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5);
float v_rasqal_query_build_variables_use_map_binds( double parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4);
long v_rasqal_graph_pattern_mentions_variable( float parameter_1,long parameter_2);
long v_rasqal_graph_pattern_tree_mentions_variable( int parameter_1,short parameter_2);
short v_rasqal_query_select_build_variables_use_map( float parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4);
int v_rasqal_query_let_build_variables_use_map( int parameter_1,float parameter_2,float parameter_3);
float v_rasqal_query_graph_build_variables_use_map( char parameter_1,short parameter_2);
double v_rasqal_query_graph_pattern_build_variables_use_map( char parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4);
void v_rasqal_query_get_having_conditions_sequence( long parameter_1);
int v_rasqal_query_build_expressions_sequence_use_map_row( int parameter_1,float parameter_2);
short v_rasqal_query_get_group_conditions_sequence( long parameter_1);
void v_rasqal_query_triples_build_variables_use_map_row( unsigned int parameter_1,long parameter_2,int parameter_3,int parameter_4);
long v_rasqal_query_build_literals_sequence_use_map_row( int parameter_1,char parameter_2);
long v_rasqal_query_expression_build_variables_use_map_row( short parameter_1,double parameter_2);
char v_rasqal_query_expression_build_variables_use_map( int parameter_1,long parameter_2);
unsigned int v_rasqal_query_build_variables_sequence_use_map_row( float parameter_1,unsigned int parameter_2,int parameter_3);
int v_rasqal_variables_table_get_total_variables_count( short parameter_1);
double v_rasqal_query_build_variables_use_map( double parameter_1,short parameter_2);
int v_rasqal_query_build_variables_use( unsigned int parameter_1,long parameter_2);
void v_rasqal_query_prepare_count_graph_pattern( char parameter_1,long parameter_2);
float v_rasqal_query_enumerate_graph_patterns( short parameter_1);
int v_rasqal_query_merge_graph_patterns( int parameter_1,unsigned int parameter_2);
short v_rasqal_query_remove_empty_group_graph_patterns( long parameter_1,short parameter_2);
char v_rasqal_new_2op_expression( unsigned int parameter_1,long parameter_2,long parameter_3,unsigned int parameter_4);
unsigned int v_rasqal_new_expression_from_expression( short parameter_1);
int v_rasqal_graph_pattern_move_constraints( unsigned int parameter_1,float parameter_2);
int v_rasqal_graph_patterns_join( short parameter_1,double parameter_2);
short v_rasqal_query_merge_triple_patterns( char parameter_1,unsigned int parameter_2);
double v_rasqal_graph_pattern_get_sub_graph_pattern( unsigned int parameter_1,int parameter_2);
float v_rasqal_graph_pattern_get_sub_graph_pattern_sequence( long parameter_1);
int v_rasqal_graph_pattern_visit( unsigned int parameter_1,int parameter_2);
void v_rasqal_query_get_query_graph_pattern( short parameter_1);
int v_rasqal_query_graph_pattern_visit2( float parameter_1,long parameter_2);
int v_rasqal_row_write( long parameter_1,unsigned int parameter_2);
int v_rasqal_bindings_get_row( int parameter_1,int parameter_2);
int v_rasqal_variables_write( double parameter_1,double parameter_2);
int v_rasqal_projection_get_variables_sequence( short parameter_1);
void v_rasqal_triple_write( char parameter_1,int parameter_2);
long v_rasqal_graph_pattern_write_plurals( int parameter_1,int parameter_2,int parameter_3);
short v_rasqal_graph_pattern_write_indent( long parameter_1,int parameter_2);
unsigned int v_rasqal_graph_pattern_operator_as_string( double parameter_1);
double v_rasqal_graph_pattern_write_internal( short parameter_1,float parameter_2,int parameter_3);
int v_rasqal_graph_pattern_print( double parameter_1,long parameter_2);
void v_rasqal_expression_convert_to_literal( float parameter_1,char parameter_2);
void v_rasqal_expression_evaluate_struuid( int parameter_1,double parameter_2,int parameter_3);
double v_rasqal_expression_evaluate_uuid( short parameter_1,short parameter_2,int parameter_3,int parameter_4);
long v_rasqal_expression_evaluate_uriuuid( double parameter_1,int parameter_2,int parameter_3);
short v_rasqal_expression_evaluate_digest( unsigned int parameter_1,long parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_floor( float parameter_1,long parameter_2);
float v_rasqal_literal_floor( int parameter_1,int parameter_2);
char v_rasqal_expression_evaluate_floor( double parameter_1,char parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_ceil( short parameter_1,char parameter_2);
void v_rasqal_literal_ceil( short parameter_1,int parameter_2);
long v_rasqal_expression_evaluate_ceil( long parameter_1,int parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_round( unsigned int parameter_1,short parameter_2);
int v_rasqal_literal_round( char parameter_1,int parameter_2);
int v_rasqal_expression_evaluate_round( long parameter_1,int parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_abs( long parameter_1,float parameter_2);
double v_rasqal_literal_abs( float parameter_1,int parameter_2);
double v_rasqal_expression_evaluate_abs( int parameter_1,double parameter_2,int parameter_3);
int v_rasqal_regex_replace( int parameter_1,unsigned int parameter_2,char parameter_3,long parameter_4,unsigned int parameter_5,char parameter_6,short parameter_7,short parameter_8,int parameter_9);
long v_rasqal_expression_evaluate_replace( unsigned int parameter_1,double parameter_2,int parameter_3);
int v_rasqal_expression_evaluate_strafter( double parameter_1,short parameter_2,int parameter_3);
int v_rasqal_literal_is_string( char parameter_1);
double v_rasqal_expression_evaluate_strbefore( char parameter_1,double parameter_2,int parameter_3);
int v_rasqal_expression_evaluate_substr( char parameter_1,long parameter_2,int parameter_3);
void v_rasqal_expression_evaluate_encode_for_uri( unsigned int parameter_1,long parameter_2,int parameter_3);
short v_rasqal_xsd_datetime_get_tz_as_counted_string( float parameter_1,double parameter_2);
float v_rasqal_expression_evaluate_datetime_tz( short parameter_1,short parameter_2,int parameter_3);
short v_rasqal_xsd_datetime_get_timezone_as_counted_string( char parameter_1,unsigned int parameter_2);
void v_rasqal_expression_evaluate_datetime_timezone( short parameter_1,long parameter_2,int parameter_3);
void v_rasqal_literals_sparql11_compatible( int parameter_1,long parameter_2);
float v_rasqal_expression_evaluate_str_prefix_suffix( float parameter_1,char parameter_2,int parameter_3);
short v_rasqal_expression_evaluate_set_case( int parameter_1,int parameter_2,int parameter_3);
short v_rasqal_expression_evaluate_strlen( long parameter_1,long parameter_2,int parameter_3);
int v_rasqal_random_irand( float parameter_1);
double v_rasqal_random_drand( double parameter_1);
int v_rasqal_expression_evaluate_rand( char parameter_1,short parameter_2,int parameter_3);
int v_rasqal_xsd_datetime_set_from_unixtime( long parameter_1,long parameter_2);
int v_rasqal_new_xsd_datetime_from_unixtime( int parameter_1,float parameter_2);
long v_rasqal_expression_evaluate_from_unixtime( float parameter_1,short parameter_2,int parameter_3);
float v_rasqal_new_numeric_literal_from_long( double parameter_1,short parameter_2,long parameter_3);
double v_rasqal_expression_evaluate_to_unixtime( unsigned int parameter_1,float parameter_2,int parameter_3);
int v_rasqal_xsd_datetime_set_from_timeval( float parameter_1,float parameter_2);
int v_rasqal_new_xsd_datetime_from_timeval( double parameter_1,double parameter_2);
void v_rasqal_world_get_now_timeval( double parameter_1);
short v_rasqal_expression_evaluate_now( float parameter_1,long parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_set_long( float parameter_1,long parameter_2);
char v_rasqal_xsd_datetime_get_seconds_as_decimal( float parameter_1,char parameter_2);
long v_rasqal_expression_evaluate_datetime_part( double parameter_1,float parameter_2,int parameter_3);
unsigned int v_rasqal_expression_evaluate_in_set( char parameter_1,double parameter_2,int parameter_3);
float v_rasqal_world_default_generate_bnodeid_handler(short parameter_2);
short v_rasqal_world_generate_bnodeid( float parameter_1,float parameter_2);
short v_rasqal_expression_evaluate_bnode_constructor( int parameter_1,char parameter_2,int parameter_3);
unsigned int v_rasqal_literal_as_uri( unsigned int parameter_1);
int v_rasqal_expression_evaluate_strdt( short parameter_1,int parameter_2,int parameter_3);
float v_rasqal_expression_evaluate_strlang( double parameter_1,unsigned int parameter_2,int parameter_3);
char v_rasqal_expression_evaluate_uri_constructor( unsigned int parameter_1,double parameter_2,int parameter_3);
char v_rasqal_expression_evaluate_if( float parameter_1,double parameter_2,int parameter_3);
char v_rasqal_expression_evaluate_coalesce( int parameter_1,long parameter_2,int parameter_3);
char v_rasqal_expression_evaluate_concat( double parameter_1,long parameter_2,int parameter_3);
int v_rasqal_literal_same_term( long parameter_1,char parameter_2);
unsigned int v_rasqal_expression_evaluate_sameterm( int parameter_1,long parameter_2,int parameter_3);
int v_rasqal_literal_cast( long parameter_1,int parameter_2,int parameter_3,int parameter_4);
int v_rasqal_regex_match( double parameter_1,int parameter_2,int parameter_3,int parameter_4,float parameter_5,long parameter_6);
short v_rasqal_expression_evaluate_strmatch( int parameter_1,short parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_is_zero( long parameter_1);
int v_rasqal_xsd_decimal_divide( short parameter_1,float parameter_2,char parameter_3);
long v_rasqal_literal_divide( float parameter_1,int parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_multiply( long parameter_1,char parameter_2,long parameter_3);
unsigned int v_rasqal_literal_multiply( long parameter_1,float parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_subtract( char parameter_1,short parameter_2,float parameter_3);
long v_rasqal_literal_subtract( int parameter_1,float parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_add( unsigned int parameter_1,unsigned int parameter_2,short parameter_3);
void v_rasqal_literal_add( long parameter_1,int parameter_2,int parameter_3);
int v_rasqal_literal_is_numeric( float parameter_1);
double v_rasqal_expression_evaluate_istype( unsigned int parameter_1,int parameter_2,int parameter_3);
char v_rasqal_expression_evaluate_datatype( double parameter_1,short parameter_2,int parameter_3);
int v_rasqal_language_matches( float parameter_1,long parameter_2);
float v_rasqal_expression_evaluate_langmatches( double parameter_1,char parameter_2,int parameter_3);
float v_rasqal_expression_evaluate_lang( unsigned int parameter_1,float parameter_2,int parameter_3);
int v_rasqal_expression_evaluate_str( unsigned int parameter_1,long parameter_2,int parameter_3);
char v_rasqal_expression_evaluate_bound( float parameter_1,int parameter_2,int parameter_3);
int v_rasqal_xsd_decimal_negate( double parameter_1,int parameter_2);
int v_rasqal_new_decimal_literal( unsigned int parameter_1,short parameter_2);
int v_rasqal_new_numeric_literal( double parameter_1,double parameter_2,double parameter_3);
double v_rasqal_literal_negate( float parameter_1,int parameter_2);
int v_rasqal_xsd_decimal_compare( int parameter_1,int parameter_2);
int v_rasqal_literal_string_datatypes_compare( short parameter_1,char parameter_2);
void v_rasqal_literal_string_compare( float parameter_1,long parameter_2,int parameter_3);
void v_rasqal_literal_rdql_promote_calculate( unsigned int parameter_1,unsigned int parameter_2);
double v_rasqal_literal_value( int parameter_1);
int v_rasqal_literal_compare( float parameter_1,short parameter_2,int parameter_3,int parameter_4);
int v_rasqal_literal_not_equals_flags( int parameter_1,double parameter_2,int parameter_3,int parameter_4);
char v_rasqal_new_boolean_literal( short parameter_1,int parameter_2);
char v_rasqal_expression_evaluate2( short parameter_1,char parameter_2,int parameter_3,int uni_para);
int v_rasqal_literal_is_constant( long parameter_1);
int v_rasqal_expression_is_constant( long parameter_1);
int v_rasqal_expression_foreach_fold(unsigned int parameter_2,int uni_para);
int v_rasqal_expression_visit( long parameter_1);
float v_rasqal_query_expression_fold( unsigned int parameter_1,short parameter_2,int uni_para);
char v_rasqal_graph_pattern_fold_expressions( char parameter_1,long parameter_2,int uni_para);
double v_rasqal_query_get_order_conditions_sequence( float parameter_1);
unsigned int v_rasqal_query_fold_expressions(int uni_para);
void v_rasqal_log_warning_simple( char parameter_1,double parameter_2,char parameter_3,long parameter_4,int parameter_5);
int v_rasqal_query_remove_duplicate_select_vars( unsigned int parameter_1,short parameter_2);
double v_rasqal_query_get_projection( char parameter_1);
int v_rasqal_query_prepare_common( long parameter_1,int uni_para);
int v_rasqal_evaluation_context_set_rand_seed( double parameter_1,long parameter_2);
int v_rasqal_evaluation_context_set_base_uri( char parameter_1,float parameter_2);
void v_rasqal_query_set_base_uri( long parameter_1,double parameter_2);
int v_rasqal_query_prepare( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int uni_para);
float v_file_read_string( unsigned int parameter_1,unsigned int parameter_2,short parameter_3);
unsigned int v_rasqal_random_get_system_seed( int parameter_1);
int v_rasqal_random_seed( int parameter_1,char parameter_2);
unsigned int v_rasqal_new_random( short parameter_1);
void v_rasqal_new_evaluation_context( float parameter_1,int parameter_2,int parameter_3);
void v_rasqal_free_bindings( double parameter_1);
void v_rasqal_free_solution_modifier( unsigned int parameter_1);
void v_rasqal_free_projection( long parameter_1);
void v_rasqal_free_graph_pattern( float parameter_1);
void v_rasqal_free_random( float parameter_1);
void v_rasqal_free_evaluation_context( short parameter_1);
void v_rasqal_free_query( float parameter_1);
void v_rasqal_query_results_remove_query_reference();
int v_rasqal_data_graph_print( short parameter_1,double parameter_2);
void v_rasqal_free_data_graph( float parameter_1);
int v_rasqal_prefix_print( float parameter_1,unsigned int parameter_2);
void v_rasqal_free_prefix( long parameter_1);
double v_rasqal_new_variables_table();
short v_rasqal_get_query_language_factory( double parameter_1,int parameter_2,char parameter_3);
void v_rasqal_new_query( int parameter_1,double parameter_2,int parameter_3);
char v_rasqal_query_results_rdfxml_recognise_syntax( long parameter_1,char parameter_2,long parameter_3,float parameter_4,float parameter_5,char parameter_6);
void v_rasqal_query_results_rdfxml_register_factory( float parameter_1);
int v_rasqal_init_result_format_rdf( double parameter_1);
long v_rasqal_query_results_turtle_recognise_syntax( char parameter_1,long parameter_2,double parameter_3,float parameter_4,double parameter_5,char parameter_6);
short v_rasqal_query_results_rdf_get_rowsource( long parameter_1,double parameter_2,long parameter_3,char parameter_4,unsigned int parameter_5,int parameter_6);
char v_rasqal_query_results_rdf_write( double parameter_1,long parameter_2,short parameter_3,float parameter_4);
int v_rasqal_literal_write_turtle( char parameter_1,char parameter_2);
float v_rasqal_query_results_turtle_write( float parameter_1,char parameter_2,long parameter_3,float parameter_4);
void v_rasqal_query_results_rdf_finish( long parameter_1);
unsigned int v_rasqal_query_results_rdf_init( double parameter_1,float parameter_2);
int v_rasqal_query_results_format_rdf_copy_syntax_description_from_parser( int parameter_1,float parameter_2);
double v_rasqal_query_results_turtle_register_factory();
int v_rasqal_init_result_format_turtle( double parameter_1);
int v_rasqal_query_results_get_count( char parameter_1);
void v_rasqal_iostream_write_html_literal( long parameter_1,double parameter_2,float parameter_3);
float v_rasqal_query_results_write_html_bindings( unsigned int parameter_1,double parameter_2);
double v_rasqal_query_results_write_html_boolean( int parameter_1,int parameter_2);
int v_rasqal_query_results_write_html( char parameter_1,double parameter_2,char parameter_3,double parameter_4);
double v_rasqal_query_results_html_register_factory( double parameter_1);
int v_rasqal_init_result_format_html( long parameter_1);
float v_rasqal_query_results_tsv_recognise_syntax( unsigned int parameter_1,int parameter_2,int parameter_3,short parameter_4,unsigned int parameter_5,int parameter_6);
void v_rasqal_query_results_get_rowsource_tsv( double parameter_1,unsigned int parameter_2,double parameter_3,float parameter_4,float parameter_5,double parameter_6);
unsigned int v_rasqal_query_results_write_tsv( float parameter_1,char parameter_2,double parameter_3,unsigned int parameter_4);
short v_rasqal_query_results_tsv_register_factory( double parameter_1);
double v_rasqal_query_results_mkr_recognise_syntax( long parameter_1,char parameter_2,short parameter_3,long parameter_4,int parameter_5,float parameter_6);
double v_rasqal_query_results_get_rowsource_mkr( int parameter_1,char parameter_2,long parameter_3,float parameter_4,float parameter_5,int parameter_6);
short v_rasqal_query_results_write_mkr( int parameter_1,long parameter_2,char parameter_3,char parameter_4);
char v_rasqal_query_results_mkr_register_factory( char parameter_1);
long v_rasqal_query_results_sv_score_first_line( unsigned int parameter_1,char parameter_2,short parameter_3,float parameter_4,short parameter_5);
double v_rasqal_query_results_csv_recognise_syntax( char parameter_1,long parameter_2,int parameter_3,int parameter_4,long parameter_5,long parameter_6);
void v_rasqal_query_results_get_rowsource_csv( char parameter_1,char parameter_2,double parameter_3,short parameter_4,char parameter_5,int parameter_6);
long v_rasqal_iostream_write_csv_string( char parameter_1,short parameter_2,float parameter_3);
short v_rasqal_query_results_write_sv( char parameter_1,long parameter_2,short parameter_3,short parameter_4,unsigned int parameter_5,int parameter_6,char parameter_7,unsigned int parameter_8,double parameter_9);
short v_rasqal_query_results_write_csv( long parameter_1,double parameter_2,float parameter_3,short parameter_4);
void v_rasqal_query_results_csv_register_factory( short parameter_1);
int v_rasqal_init_result_format_sv( int parameter_1);
double v_rasqal_query_results_write_table_boolean( float parameter_1,float parameter_2,short parameter_3);
double v_rasqal_iostream_write_counted_string_padded( long parameter_1,char parameter_2,int parameter_3,float parameter_4,unsigned int parameter_5);
unsigned int v_rasqal_alloc_memory( short parameter_1);
char v_rasqal_free_chararray();
char v_rasqal_query_results_write_table_bindings( long parameter_1,char parameter_2,char parameter_3);
int v_rasqal_query_results_write_table( int parameter_1,char parameter_2,double parameter_3,char parameter_4);
void v_rasqal_query_results_table_register_factory( unsigned int parameter_1);
int v_rasqal_init_result_format_table( unsigned int parameter_1);
int v_rasqal_query_get_distinct( int parameter_1);
char v_rasqal_query_get_order_condition( short parameter_1,int parameter_2);
char v_rasqal_iostream_write_json_boolean( long parameter_1,unsigned int parameter_2,int parameter_3);
long v_rasqal_query_results_get_query( char parameter_1);
char v_rasqal_query_results_write_json1( unsigned int parameter_1,double parameter_2,int parameter_3,int parameter_4);
short v_rasqal_query_results_json_register_factory( unsigned int parameter_1);
int v_rasqal_init_result_format_json( short parameter_1);
unsigned int v_rasqal_sparql_xml_free_context( char parameter_1);
double v_rasqal_sparql_xml_start( float parameter_1);
double v_rasqal_rowsource_sparql_xml_get_boolean( int parameter_1,int parameter_2,short parameter_3,char parameter_4,int parameter_5);
double v_rasqal_query_results_xml_recognise_syntax( char parameter_1,short parameter_2,char parameter_3,float parameter_4,double parameter_5,float parameter_6);
void v_rasqal_expression_print_op( long parameter_1,int parameter_2);
int v_rasqal_expression_print( float parameter_1,short parameter_2);
int v_rasqal_variable_print( unsigned int parameter_1,unsigned int parameter_2);
int v_rasqal_new_rowsource_from_handler( short parameter_1,unsigned int parameter_2,unsigned int parameter_4,double parameter_5,int parameter_6);
char v_rasqal_new_variables_table_from_variables_table( int parameter_1);
int v_rasqal_row_print( unsigned int parameter_1,short parameter_2);
int v_rasqal_row_set_value_at( short parameter_1,int parameter_2,float parameter_3);
short v_rasqal_sparql_xml_sax2_end_element_handler(long parameter_2);
int v_rasqal_sparql_xml_sax2_characters_handler(float parameter_2,unsigned int parameter_3,int parameter_4);
long v_rasqal_new_row_common( short parameter_1,int parameter_2,int parameter_3);
int v_rasqal_rowsource_get_size( double parameter_1);
char v_rasqal_new_rowsource_from_rowsource( unsigned int parameter_1);
double v_rasqal_new_row();
int v_rasqal_rowsource_get_variable_offset_by_name( float parameter_1,short parameter_2);
int v_rasqal_rowsource_add_variable( short parameter_1,long parameter_2);
double v_rasqal_sparql_xml_sax2_start_element_handler(int parameter_2);
char v_rasqal_sparql_xml_init_context( char parameter_1,char parameter_2,int parameter_3,char parameter_4);
short v_rasqal_query_results_get_rowsource_sparql_xml( double parameter_1,long parameter_2,float parameter_3,short parameter_4,short parameter_5,int parameter_6);
int v_rasqal_query_results_next_internal( unsigned int parameter_1);
int v_rasqal_query_results_next( long parameter_1);
short v_rasqal_query_results_get_binding_value( char parameter_1,int parameter_2);
int v_rasqal_query_results_get_bindings_count( short parameter_1);
int v_rasqal_query_results_finished( short parameter_1);
int v_rasqal_query_results_get_boolean( unsigned int parameter_1);
int v_rasqal_query_results_is_boolean( int parameter_1);
int v_rasqal_variables_table_contains( double parameter_1,double parameter_2,char parameter_3);
int v_rasqal_variables_table_add_variable( unsigned int parameter_1,long parameter_2);
float v_rasqal_new_variable_from_variable( short parameter_1);
float v_rasqal_variables_table_add2( short parameter_1,char parameter_2,int parameter_3,double parameter_4,float parameter_5);
char v_rasqal_rowsource_print_header( int parameter_1,int parameter_2);
int v_rasqal_rowsource_ensure_variables( double parameter_1);
unsigned int v_rasqal_rowsource_get_variable_by_offset( float parameter_1,int parameter_2);
char v_rasqal_row_get_variable_by_offset( short parameter_1,int parameter_2);
void v_rasqal_free_variables_table( int parameter_1);
void v_rasqal_free_rowsource( unsigned int parameter_1);
void v_rasqal_free_row( unsigned int parameter_1);
long v_rasqal_variables_table_get_by_name( short parameter_1,float parameter_2,unsigned int parameter_3);
long v_rasqal_variables_table_get( long parameter_1,int parameter_2);
int v_rasqal_variables_table_get_named_variables_count( int parameter_1);
unsigned int v_rasqal_query_results_update_query_bindings( long parameter_1,char parameter_2);
int v_rasqal_literal_as_node( unsigned int parameter_1);
int v_rasqal_row_to_nodes( int parameter_1);
char v_rasqal_new_row_from_row( float parameter_1);
int v_rasqal_query_check_limit_offset_core( int parameter_1,int parameter_2,int parameter_3);
int v_rasqal_query_get_offset( long parameter_1);
int v_rasqal_query_get_limit( double parameter_1);
int v_rasqal_query_check_limit_offset( double parameter_1,int parameter_2);
int v_rasqal_query_results_get_row_from_saved( char parameter_1);
char v_rasqal_query_results_ensure_have_row_internal( short parameter_1);
unsigned int v_rasqal_query_results_get_current_row( int parameter_1);
float v_rasqal_query_results_get_binding_name( double parameter_1,int parameter_2);
int v_rasqal_query_results_is_bindings( int parameter_1);
int v_rasqal_query_results_type_label( double parameter_1);
short v_rasqal_query_results_get_type( unsigned int parameter_1);
float v_rasqal_query_results_get_world( unsigned int parameter_1);
unsigned int v_rasqal_query_results_write_sparql_xml( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4);
short v_rasqal_query_results_sparql_xml_register_factory( float parameter_1);
char v_rasqal_world_register_query_results_format_factory( unsigned int parameter_1,int parameter_2);
int v_rasqal_init_result_format_sparql_xml( double parameter_1);
void v_rasqal_free_query_results_format_factory( unsigned int parameter_1);
int v_rasqal_init_result_formats( short parameter_1);
int v_rasqal_init_query_results();
double v_rasqal_raptor_init_triples_source2( short parameter_1,unsigned int parameter_2,float parameter_5,char parameter_6,long parameter_7);
int v_rasqal_raptor_init_triples_source( float parameter_1,float parameter_4,unsigned int parameter_5);
void v_rasqal_triples_source_error_handler2( char parameter_1,char parameter_2,unsigned int parameter_3);
float v_rasqal_raptor_generate_id_handler(float parameter_2);
double v_rasqal_new_triple( int parameter_1,long parameter_2,float parameter_3);
void v_rasqal_new_simple_literal( short parameter_1,unsigned int parameter_2,char parameter_3);
long v_rasqal_new_literal_from_term( short parameter_1,long parameter_2);
short v_raptor_statement_as_rasqal_triple( short parameter_1,double parameter_2);
void v_rasqal_raptor_statement_handler(long parameter_2);
unsigned int v_rasqal_raptor_get_genid( double parameter_1,double parameter_2,int parameter_3);
void v_rasqal_new_uri_literal( unsigned int parameter_1,unsigned int parameter_2);
double v_rasqal_raptor_support_feature(int parameter_2);
void v_rasqal_free_triple( float parameter_1);
void v_rasqal_triple_set_origin( double parameter_1,long parameter_2);
long v_rasqal_raptor_free_triples_source();
void v_rasqal_raptor_triple_present( double parameter_1,double parameter_3);
void v_rasqal_raptor_finish_triples_match( double parameter_1);
long v_rasqal_raptor_is_end( short parameter_1);
int v_rasqal_raptor_triple_match( float parameter_1,int parameter_2,short parameter_3,float parameter_4);
unsigned int v_rasqal_literal_as_variable( long parameter_1);
void v_rasqal_raptor_next_match( int parameter_1);
int v_rasqal_literal_equals( double parameter_1,short parameter_2);
int v_rasqal_xsd_decimal_equals( unsigned int parameter_1,int parameter_2);
int v_rasqal_double_approximately_compare( double parameter_1,double parameter_2);
int v_rasqal_double_approximately_equal( double parameter_1,double parameter_2);
int v_rasqal_xsd_datetime_compare2( long parameter_1,unsigned int parameter_2,int parameter_3);
int v_rasqal_xsd_datetime_equals2( float parameter_1,short parameter_2,int parameter_3);
float v_rasqal_xsd_timeline_compare( short parameter_1,float parameter_2,double parameter_3,long parameter_4,short parameter_5,int parameter_6,int parameter_7);
int v_rasqal_xsd_date_compare( float parameter_1,float parameter_2,int parameter_3);
int v_rasqal_xsd_date_equals( long parameter_1,unsigned int parameter_2,int parameter_3);
void v_rasqal_literal_blank_equals( unsigned int parameter_1,double parameter_2);
int v_rasqal_strcasecmp( long parameter_1,float parameter_2);
int v_rasqal_literal_string_languages_compare( long parameter_1,unsigned int parameter_2);
double v_rasqal_literal_string_equals_flags( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
void v_rasqal_literal_uri_equals( float parameter_1,char parameter_2);
long v_rasqal_literal_as_string_flags( int parameter_1,int parameter_2,int parameter_3);
long v_rasqal_literal_as_string( double parameter_1);
double v_rasqal_new_string_literal( short parameter_1,double parameter_2,float parameter_3,int parameter_4,short parameter_5);
int v_rasqal_literal_as_boolean( long parameter_1,int parameter_2);
unsigned int v_rasqal_xsd_format_integer( int parameter_1,int parameter_2);
double v_rasqal_new_integer_literal( long parameter_1,float parameter_2,int parameter_3);
long v_rasqal_xsd_decimal_get_long( int parameter_1,int parameter_2);
int v_rasqal_literal_as_integer( double parameter_1,int parameter_2);
char v_rasqal_new_floating_literal( int parameter_1,float parameter_2,double parameter_3);
float v_rasqal_new_double_literal( short parameter_1,double parameter_2);
long v_rasqal_new_decimal_literal_from_decimal( float parameter_1,unsigned int parameter_2,double parameter_3);
int v_rasqal_xsd_decimal_set_double( float parameter_1,double parameter_2);
double v_rasqal_xsd_decimal_get_double();
double v_rasqal_literal_as_double( char parameter_1,int parameter_2);
unsigned int v_rasqal_new_string_literal_common( float parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,long parameter_5,int parameter_6,int uni_para);
long v_rasqal_new_string_literal_node( float parameter_1,long parameter_2,short parameter_3,unsigned int parameter_4,int uni_para);
long v_rasqal_literal_as_counted_string( long parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
int v_rasqal_xsd_datatype_is_numeric( short parameter_1);
char v_rasqal_new_datetime_literal_from_datetime( short parameter_1,unsigned int parameter_2);
double v_rasqal_new_xsd_datetime_from_xsd_date( short parameter_1,short parameter_2);
float v_rasqal_new_literal_from_promotion( unsigned int parameter_1,double parameter_2,int parameter_3,int uni_para);
void v_rasqal_literal_promote_numerics( double parameter_1,int parameter_2,int parameter_3);
short v_rasqal_xsd_format_microseconds( char parameter_1,double parameter_2,short parameter_3);
void v_rasqal_xsd_datetime_to_counted_string( float parameter_1,float parameter_2);
int v_rasqal_new_xsd_datetime( float parameter_1,int parameter_2,int uni_para);
long v_rasqal_format_integer( char parameter_1,double parameter_2,int parameter_3,int parameter_4,char parameter_5);
short v_rasqal_xsd_timezone_format( long parameter_1,char parameter_2,char parameter_3,unsigned int parameter_4);
char v_rasqal_xsd_date_to_counted_string( double parameter_1,float parameter_2);
float v_rasqal_timegm( int parameter_1,int uni_para);
float v_rasqal_xsd_datetime_get_as_unixtime(int uni_para);
unsigned int v_rasqal_xsd_datetime_normalize( unsigned int parameter_1,int uni_para);
unsigned int v_days_per_month( int parameter_1,int parameter_2);
void v_rasqal_xsd_datetime_parse( short parameter_1,unsigned int parameter_2,int parameter_3);
long v_rasqal_new_xsd_date( unsigned int parameter_1,float parameter_2);
int v_rasqal_xsd_boolean_value_from_string();
float v_rasqal_xsd_decimal_as_string( int parameter_1);
char v_rasqal_xsd_decimal_as_counted_string( float parameter_1,char parameter_2);
int v_rasqal_xsd_decimal_set_string( unsigned int parameter_1,long parameter_2);
double v_rasqal_xsd_decimal_init( short parameter_1);
float v_rasqal_new_xsd_decimal( double parameter_1);
double v_rasqal_xsd_format_double( double parameter_1,char parameter_2);
short v_rasqal_xsd_datatype_parent_type( double parameter_1);
long v_rasqal_xsd_datatype_type_to_uri( unsigned int parameter_1,float parameter_2);
unsigned int v_rasqal_xsd_datatype_label( int parameter_1);
int v_rasqal_xsd_datatype_check( short parameter_1,char parameter_2,int parameter_3);
long v_rasqal_literal_set_typed_value( int parameter_1,long parameter_2,double parameter_3,int parameter_4,int uni_para);
short v_rasqal_xsd_datatype_uri_to_type( double parameter_1,unsigned int parameter_2);
int v_rasqal_literal_string_to_native( unsigned int parameter_1,int parameter_2,int uni_para);
void v_rasqal_literal_get_rdf_term_type();
int v_rasqal_literal_equals_flags( int parameter_1,short parameter_2,int parameter_3,int parameter_4,int uni_para);
void v_rasqal_new_literal_from_literal( float parameter_1);
void v_rasqal_expression_clear( unsigned int parameter_1);
void v_rasqal_free_expression( int parameter_1);
void v_rasqal_free_variable();
void v_rasqal_xsd_decimal_clear_string( unsigned int parameter_1);
void v_rasqal_xsd_decimal_clear( short parameter_1);
void v_rasqal_free_xsd_decimal( char parameter_1);
void v_rasqal_free_xsd_datetime( float parameter_1);
void v_rasqal_free_xsd_date( long parameter_1);
void v_rasqal_free_literal( long parameter_1);
void v_rasqal_variable_set_value( double parameter_1,short parameter_2);
long v_rasqal_expression_op_label();
void v_rasqal_expression_write_op( long parameter_1,short parameter_2);
void v_rasqal_expression_write( long parameter_1,float parameter_2);
void v_rasqal_variable_write( short parameter_1,float parameter_2);
char v_rasqal_literal_type_label( long parameter_1);
void v_rasqal_literal_write_type( short parameter_1,long parameter_2);
void v_rasqal_literal_write( unsigned int parameter_1,int parameter_2);
int v_rasqal_literal_print( short parameter_1,unsigned int parameter_2);
int v_rasqal_triple_print( short parameter_1,float parameter_2);
char v_rasqal_raptor_bind_match( short parameter_1,char parameter_3,int parameter_4);
double v_rasqal_raptor_init_triples_match( long parameter_1,unsigned int parameter_2,unsigned int parameter_4,char parameter_5);
double v_rasqal_raptor_init_triples_source_common( double parameter_1,long parameter_2,int parameter_3,short parameter_6,double parameter_7,float parameter_8,float parameter_9);
double v_rasqal_raptor_new_triples_source( short parameter_1,float parameter_4);
double v_rasqal_raptor_register_triples_source_factory( unsigned int parameter_1);
int v_rasqal_set_triples_source_factory( unsigned int parameter_1,float parameter_2);
int v_rasqal_raptor_init( unsigned int parameter_1);
char v_rasqal_free_query_language_factory( long parameter_1);
int v_rasqal_xsd_init( long parameter_1);
void v_rasqal_log_error_varargs( long parameter_1,short parameter_2,short parameter_3,char parameter_4,char parameter_5);
void v_rasqal_log_error_simple( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,unsigned int parameter_4,short parameter_5);
int v_rasqal_uri_init( char parameter_1);
int v_rasqal_world_open( double parameter_1);
unsigned int v_rasqal_new_world();
short v_rasqal_basename( short parameter_1);
void v_rasqal_uri_finish( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float_2 = float_1 * float_2;
		int_1 = int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 * char_1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float_3 = float_1 * float_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_3 = 1;
		short_3 = short_1 * short_2;
		char_2 = char_2 + char_3;
	}
}
void v_rasqal_xsd_finish( short parameter_1)
{
	int int_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double_2 = double_1 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				double_2 = double_2 * double_2;
			}
		}
		long_1 = long_1;
		int_1 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned_int_1 = unsigned_int_2;
		int_4 = int_2 + int_3;
	}
}
short v_rasqal_delete_query_language_factories( char parameter_1)
{
	short short_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return short_1;
}
void v_rasqal_finish_query_results()
{
}
void v_rasqal_finish_result_formats( unsigned int parameter_1)
{
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		char_1 = char_1 * char_2;
		double_1 = double_1 + double_1;
	}
}
void v_rasqal_free_world( double parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	v_rasqal_xsd_finish(short_1);

	v_rasqal_uri_finish(short_1);

	double_2 = double_1 * double_2;
	v_rasqal_finish_query_results();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v_rasqal_delete_query_language_factories(char_1);

	unsigned_int_2 = unsigned_int_2;
	int_1 = int_2;
	int_3 = int_2 + int_2;
	double_1 = double_2 + double_3;
	if(1)
	{
		int int_4 = 1;
		v_rasqal_finish_result_formats(unsigned_int_3);

		int_2 = int_4;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
}
void v_rasqal_free_memory()
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
}
char v_rasqal_algebra_get_variables_mentioned_in( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int_1 = v_rasqal_variables_table_get_total_variables_count(short_1);

	short_3 = short_2 + short_3;
	v_rasqal_free_variable();

	float_2 = float_1 + float_1;
	double_1 = double_1;
	int_1 = v_rasqal_variable_print(unsigned_int_1,unsigned_int_1);

	double_1 = double_2 + double_2;
	float_3 = v_rasqal_new_variable_from_variable(short_2);

	double_3 = double_1 + double_1;
	if(1)
	{
	}
	short_1 = short_4 * short_3;
	long_1 = v_rasqal_variables_table_get(long_2,int_1);

	double_2 = double_2 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_5 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		long_4 = long_3 * long_1;
		double_2 = double_1 * double_5;
	}
	return char_1;
}
short v_rasqal_algebra_query_add_construct_projection( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	short short_3 = 1;
	int int_7 = 1;
	int_1 = int_1 + int_1;
	char_1 = v_rasqal_algebra_get_variables_mentioned_in(short_1,int_2);

	char_4 = char_2 + char_3;
	short_1 = short_1 + short_1;
	v_rasqal_free_variable();

	long_1 = long_1 * long_1;
	int_2 = int_3 * int_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	double_1 = double_2;
	double_3 = double_3 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		int_3 = v_rasqal_variable_print(unsigned_int_2,unsigned_int_3);

		int_2 = int_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
		v_rasqal_free_algebra_node(unsigned_int_3);

		int_5 = int_4 + int_2;
		float_2 = v_rasqal_new_variable_from_variable(short_2);

		int_6 = v_rasqal_new_project_algebra_node(float_2,float_2,char_3);

		double_4 = double_4 + double_5;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double_4 = double_3 + double_5;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	double_6 = double_1 + double_3;
	int_2 = v_rasqal_algebra_node_print(short_3,short_3);

	int_7 = int_4 + int_3;
	return short_2;
}
int v_rasqal_algebra_node_is_empty( int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
char v_rasqal_algebra_remove_znodes( int parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	long_2 = long_1 * long_1;
	int_1 = int_1 * int_2;
	char_3 = char_1 + char_2;
	long_3 = long_3 + long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int_3 = int_3 + int_1;
		v_rasqal_free_literal(long_1);

		int_3 = v_rasqal_algebra_node_print(short_1,short_1);

		int_1 = int_1;
		double_1 = double_1 * double_1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
		float_1 = float_1;
		short_2 = short_2 + short_1;
		if(1)
		{
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
	}
	short_2 = short_3;
	int_3 = int_1 * int_4;
	if(1)
	{
		double_3 = double_2 * double_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	long_1 = v_rasqal_algebra_node_operator_as_counted_string(short_2,int_4);

	int_5 = int_1 + int_4;
	if(1)
	{
		short short_4 = 1;
		int_3 = v_rasqal_literal_as_boolean(long_1,int_6);

		int_4 = v_rasqal_algebra_node_is_empty(int_6);

		unsigned_int_4 = unsigned_int_4;
		double_2 = double_1;
		int_6 = v_rasqal_expression_is_constant(long_2);

		unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		short_4 = short_1;
		int_3 = int_6 * int_2;
	}
	if(1)
	{
		long long_4 = 1;
		int int_7 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_5 = 1;
		long_3 = long_4 + long_4;
		int_7 = int_5;
		double_1 = double_4;
		char_1 = v_rasqal_expression_evaluate2(short_2,char_3,int_8,-1 );

		v_rasqal_free_expression(int_9);

		double_5 = double_3;
		long_5 = long_5;
	}
	return char_1;
}
int v_rasqal_algebra_node_visit( long parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1 + int_1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
		}
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
		if(1)
		{
		}
	}
	return int_3;
}
void v_rasqal_new_service_algebra_node( short parameter_1,double parameter_2,float parameter_3,unsigned int parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char_1 = char_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	long_2 = long_1 + long_2;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		int_4 = int_3 * int_4;
		double_2 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_1 = short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short_2 = v_rasqal_new_algebra_node(float_1,long_2);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_1 = long_2 + long_3;
	}
}
int v_rasqal_graph_pattern_get_filter_expression( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	return int_1;
}
long v_rasqal_query_write_sparql_triple( short parameter_1,double parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_3 = long_1 * long_2;
	float_3 = float_1 + float_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_3 + float_1;
	return long_2;
	int_1 = v_rasqal_query_write_sparql_literal(float_2,unsigned_int_2,double_1);

}
char v_rasqal_graph_pattern_get_triple( char parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "+=") < 0)
	{
	}
	return char_3;
}
long v_rasqal_query_write_sparql_row( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = v_rasqal_query_write_sparql_literal(float_1,unsigned_int_1,double_1);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_2 = int_2 + int_3;
	}
	return long_2;
}
float v_rasqal_query_write_sparql_values( char parameter_1,double parameter_2,long parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	float float_5 = 1;
	int int_3 = 1;
	long long_6 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double_2 = double_1 * double_1;
	double_2 = v_rasqal_query_write_indent(short_1,float_1);

	long_1 = v_rasqal_query_write_sparql_row(short_2,unsigned_int_1,int_1,int_1);

	short_3 = short_2 * short_1;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		short_2 = short_4 + short_3;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	float_3 = float_1 + float_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
	}
	long_2 = long_2;
	if(1)
	{
		short_3 = short_4 * short_2;
	}
	if(1)
	{
		long long_5 = 1;
		long long_7 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_5 = long_3 * long_4;
		}
		int_1 = int_2 + int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float float_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float_5 = float_3 + float_4;
			char_2 = char_1 + char_1;
			if(1)
			{
				short_1 = short_4 + short_1;
				short_1 = v_rasqal_query_write_sparql_variables_sequence(int_3,long_6,double_3);

				double_3 = double_3 * double_2;
				double_2 = double_1 * double_3;
			}
			if(1)
			{
				int int_4 = 1;
				int_2 = int_4 + int_3;
			}
		}
		long_5 = long_1 * long_7;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_6;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
	}
	double_3 = double_2 + double_3;
	return float_5;
}
short v_rasqal_query_write_sparql_expression_sequence( short parameter_1,char parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = v_rasqal_query_write_sparql_expression(long_1,short_1,int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_2 + int_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 * double_2;
		}
		int_2 = int_1 * int_4;
	}
	return short_1;
}
void v_rasqal_query_write_sparql_modifiers( long parameter_1,long parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	short short_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_1 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_1 + float_2;
	int_2 = int_1 + int_2;
	if(1)
	{
		double double_1 = 1;
		long_2 = long_1 + long_2;
		double_1 = double_1 + double_2;
		double_4 = double_1 + double_3;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int_1 = int_2 * int_3;
		double_3 = double_5;
		short_3 = short_1 * short_2;
	}
	int_4 = int_2 + int_2;
	if(1)
	{
		long_3 = long_2 + long_3;
		double_5 = double_5 * double_4;
		float_3 = float_3 + float_1;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	int_3 = int_1 + int_4;
	if(1)
	{
		if(1)
		{
			short_4 = v_rasqal_query_write_sparql_expression_sequence(short_5,char_1,long_4);

			long_1 = long_2 * long_3;
			double_5 = double_2 * double_2;
		}
		if(1)
		{
			long long_5 = 1;
			if(1)
			{
				short_4 = short_3 + short_5;
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
			long_2 = long_5;
		}
		long_2 = long_2 * long_3;
	}
}
double v_rasqal_query_write_indent( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	return double_1;
}
void v_rasqal_query_write_sparql_uri( int parameter_1,long parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double_1 = double_2;
	short_1 = short_1 + short_2;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		char_1 = char_1 * char_2;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_1 = int_3 * int_4;
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		long_1 = long_1;
	}
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	double_1 = double_1 + double_1;
	char_2 = char_3 + char_1;
	double_2 = double_3 * double_2;
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "!-") > 0)
	{
		double double_4 = 1;
		double_4 = double_4 + double_4;
	}
}
int v_rasqal_query_write_sparql_literal( float parameter_1,unsigned int parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_7 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	double_2 = double_1 + double_2;
	int_2 = int_1 + int_2;
	float_2 = float_2;
	double_2 = double_3;
	double_4 = double_4 + double_3;
	long_3 = long_1 * long_2;
	v_rasqal_query_write_sparql_uri(int_3,long_3,double_2);

	long_2 = v_rasqal_query_write_sparql_variable(long_2,int_1,float_2);

	long_2 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_1,float_3);

	float_2 = float_1 + float_2;
	int_2 = int_2 * int_3;
	if(1)
	{
		float_3 = float_3;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		float_5 = float_4 * float_1;
		float_4 = float_6 + float_6;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1;
	unsigned_int_1 = unsigned_int_1;
	double_5 = double_3 + double_2;
	long_1 = long_1 + long_4;
	unsigned_int_3 = unsigned_int_2;
	short_1 = short_1 + short_2;
	int_3 = int_2 * int_3;
	float_7 = float_1 * float_3;
	double_6 = double_4 * double_4;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		int int_4 = 1;
		float_1 = float_7 + float_7;
		double_1 = double_2;
		int_2 = int_4;
		double_2 = double_1 * double_2;
		if(1)
		{
			short_1 = short_2 + short_3;
		}
		if(1)
		{
			short_1 = short_2;
		}
		long_3 = long_2;
	}
	double_2 = double_2 + double_4;
	short_3 = short_1 + short_2;
	return int_2;
}
void v_rasqal_query_write_sparql_expression_op( short parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 * int_3;
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
}
unsigned int v_rasqal_query_write_sparql_expression( long parameter_1,short parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	short short_3 = 1;
	char char_4 = 1;
	int int_7 = 1;
	short short_4 = 1;
	double double_5 = 1;
	float float_7 = 1;
	float float_8 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_3 = 1;
	double double_9 = 1;
	int int_8 = 1;
	double double_10 = 1;
	double double_11 = 1;
	int int_9 = 1;
	char char_5 = 1;
	float float_9 = 1;
	long long_4 = 1;
	long_1 = long_1 + long_2;
	double_2 = double_1 + double_2;
	double_1 = double_1 * double_2;
	char_3 = char_1 * char_2;
	v_rasqal_query_write_sparql_expression_op(short_1,unsigned_int_1,float_1);

	double_2 = double_1 * double_3;
	float_1 = float_2 * float_3;
	float_1 = float_1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	float_2 = float_2 + float_2;
	double_2 = double_2 * double_1;
	double_4 = double_2 + double_4;
	float_1 = float_2 + float_1;
	char_2 = char_2;
	float_5 = float_1 + float_4;
	long_1 = long_1;
	float_2 = float_6 + float_3;
	int_4 = int_1 + int_3;
	int_2 = int_4 * int_1;
	float_3 = float_4 + float_2;
	long_2 = long_1 * long_1;
	short_1 = short_2 + short_2;
	int_2 = int_1 * int_5;
	if(1)
	{
		int_3 = int_1;
		double_1 = double_1;
	}
	int_3 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_6;
	int_1 = int_4 + int_1;
	float_1 = float_4 * float_4;
	int_2 = int_6;
	short_3 = short_1;
	int_5 = int_2 * int_3;
	char_2 = char_1 + char_4;
	int_3 = int_7 * int_5;
	if(1)
	{
		char_2 = char_2 * char_1;
	}
	char_3 = char_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
		short_4 = short_1 + short_4;
		if(1)
		{
			long_2 = long_1 * long_2;
		}
		double_4 = double_1 * double_3;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	short_4 = short_2 * short_3;
	float_6 = float_6 * float_4;
	double_5 = double_1 * double_2;
	int_7 = int_6 * int_7;
	double_4 = double_5 + double_1;
	float_6 = float_7 * float_4;
	short_1 = short_4 + short_2;
	double_1 = double_4 + double_4;
	int_2 = v_rasqal_query_write_sparql_literal(float_1,unsigned_int_4,double_2);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_5 = unsigned_int_1;
	float_1 = float_8 * float_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_5 = double_1 + double_6;
		double_4 = double_5 * double_1;
		if(1)
		{
			double_7 = double_8;
		}
		int_3 = int_5 + int_7;
	}
	double_6 = double_3 + double_7;
	long_3 = long_2 + long_2;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_4;
	if(1)
	{
		float_5 = float_2 * float_2;
	}
	unsigned_int_6 = unsigned_int_3 * unsigned_int_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_7 = double_2 + double_9;
		long_3 = long_3 * long_1;
		if(1)
		{
			short_4 = short_3 + short_3;
		}
		double_5 = double_7;
	}
	if(1)
	{
		double_7 = double_2 + double_9;
		double_8 = double_8 + double_1;
	}
	int_4 = int_2 * int_8;
	double_9 = double_10 + double_11;
	int_9 = int_5;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	char_5 = char_2 + char_4;
	float_6 = float_2 + float_9;
	int_2 = int_3 + int_6;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short short_5 = 1;
		long long_5 = 1;
		short_5 = short_5 + short_1;
		double_7 = double_10;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_7;
		}
		long_5 = long_4 * long_2;
	}
	double_5 = double_4 + double_7;
	double_10 = double_11 * double_1;
	long_3 = long_2 + long_4;
	return unsigned_int_1;
}
long v_rasqal_query_write_sparql_variable( long parameter_1,int parameter_2,float parameter_3)
{
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		int_1 = int_2;
		float_2 = float_1 * float_1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_1 + int_3;
	}
	double_3 = double_3 * double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	return long_3;
	unsigned_int_1 = v_rasqal_query_write_sparql_expression(long_3,short_1,int_1);

}
short v_rasqal_query_write_sparql_variables_sequence( int parameter_1,long parameter_2,double parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long_1 = v_rasqal_query_write_sparql_variable(long_1,int_1,float_1);

	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int int_2 = 1;
			int_1 = int_2;
		}
		char_2 = char_1 * char_1;
	}
	return short_1;
}
short v_rasqal_graph_pattern_get_operator( char parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	double_1 = double_1 + double_1;
	return short_1;
}
unsigned int v_rasqal_query_write_sparql_graph_pattern( char parameter_1,long parameter_2,long parameter_3,int parameter_4,char parameter_5)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	float float_5 = 1;
	double double_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	long long_5 = 1;
	short_1 = v_rasqal_graph_pattern_get_operator(char_1);

	long_1 = long_1 + long_2;
	unsigned_int_1 = v_rasqal_query_write_sparql_expression(long_1,short_2,int_1);

	short_3 = short_1;
	float_1 = v_rasqal_query_write_sparql_values(char_2,double_1,long_1,double_1);

	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
		char char_3 = 1;
		char_1 = v_rasqal_graph_pattern_get_triple(char_1,int_3);

		long_1 = v_rasqal_query_write_sparql_triple(short_4,double_2,short_2);

		char_3 = char_1 * char_3;
		float_2 = v_rasqal_graph_pattern_get_sub_graph_pattern_sequence(long_2);

		double_2 = double_1 + double_2;
		int_3 = v_rasqal_projection_get_variables_sequence(short_4);

		v_rasqal_query_write_sparql_modifiers(long_3,long_1,long_4);

		float_4 = float_3 * float_1;
		short_4 = v_rasqal_query_write_sparql_variables_sequence(int_1,long_1,double_3);

		int_1 = v_rasqal_query_write_sparql_literal(float_5,unsigned_int_1,double_4);

		int_4 = int_1 * int_1;
		if(1)
		{
			double_3 = v_rasqal_graph_pattern_get_sub_graph_pattern(unsigned_int_2,int_2);

			double_1 = double_2 * double_2;
		}
		double_5 = double_2 + double_5;
	}
	if(1)
	{
		double_5 = v_rasqal_query_write_indent(short_1,float_3);

		long_3 = v_rasqal_query_write_sparql_variable(long_5,int_4,float_4);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			int_1 = v_rasqal_graph_pattern_get_filter_expression(double_3);

			unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_4;
	}
	return unsigned_int_1;
}
int v_rasqal_query_write_sparql_20060406_graph_pattern( unsigned int parameter_1,float parameter_2,long parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1 + double_1;
	double_2 = double_2 * double_1;
	short_1 = short_1 * short_1;
	double_3 = double_3 * double_3;
	short_2 = short_2 * short_3;
	float_2 = float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 + long_2;
	}
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		unsigned_int_3 = v_rasqal_query_write_sparql_graph_pattern(char_1,long_3,long_4,int_1,char_4);

		double_1 = double_1 + double_2;
	}
	int_1 = int_1;
	return int_2;
}
void v_rasqal_algebra_service_graph_pattern_to_algebra( long parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_1;
	int_1 = int_2;
	char_2 = char_1 + char_2;
	unsigned_int_1 = v_rasqal_alloc_memory(short_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_3 * int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_3 * char_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	v_rasqal_new_service_algebra_node(short_2,double_1,float_3,unsigned_int_1,int_2);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		double_2 = v_rasqal_graph_pattern_get_sub_graph_pattern(unsigned_int_3,int_2);

		short_1 = short_2 * short_1;
	}
	int_4 = int_1 + int_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_5;
	}
	double_3 = double_2 * double_1;
	double_4 = double_3 * double_1;
	int_3 = int_5 + int_4;
	double_2 = double_1;
	double_3 = double_3;
	char_4 = char_5;
	if(1)
	{
		unsigned_int_6 = v_rasqal_literal_as_uri(unsigned_int_3);

		int_3 = int_2 * int_1;
		int_3 = int_5 + int_6;
	}
	if(1)
	{
		int int_7 = 1;
		int_6 = v_rasqal_query_write_sparql_20060406_graph_pattern(unsigned_int_2,float_2,long_1);

		int_7 = int_2 + int_2;
	}
}
int v_rasqal_algebra_values_graph_pattern_to_algebra( int parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	v_rasqal_algebra_bindings_to_algebra(int_2,long_1);

	int_1 = int_2 * int_3;
	return int_1;
}
long v_rasqal_algebra_filter_graph_pattern_to_algebra( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int_1 = int_1 + int_1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = v_rasqal_new_expression_from_expression(short_1);

	long_2 = long_1 + long_2;
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	double_1 = double_3;
	int_2 = v_rasqal_new_filter_algebra_node(int_2,int_3,float_1);

	long_2 = long_3 + long_4;
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	return long_1;
}
int v_rasqal_new_values_algebra_node( float parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	short_2 = v_rasqal_new_algebra_node(float_1,long_1);

	int_1 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		v_rasqal_free_bindings(double_1);

		short_4 = short_2 * short_3;
	}
	return int_2;
}
unsigned int v_rasqal_new_bindings_from_bindings( short parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	return unsigned_int_1;
}
void v_rasqal_algebra_bindings_to_algebra( int parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 * char_2;
	double_3 = double_1 * double_2;
	unsigned_int_1 = v_rasqal_new_bindings_from_bindings(short_1);

	char_3 = char_3 * char_2;
	int_1 = v_rasqal_new_values_algebra_node(float_1,unsigned_int_2);

}
short v_rasqal_new_slice_algebra_node( unsigned int parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_1;
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 * char_2;
	}
	int_1 = int_1 * int_2;
	if(1)
	{
		char char_3 = 1;
		double double_3 = 1;
		short_1 = v_rasqal_new_algebra_node(float_1,long_1);

		char_2 = char_3;
		v_rasqal_free_algebra_node(unsigned_int_1);

		float_1 = float_1 + float_1;
		double_1 = double_2 + double_3;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	return short_2;
}
long v_rasqal_algebra_query_add_slice( int parameter_1,double parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		short_1 = short_2;
		if(1)
		{
			int_1 = v_rasqal_algebra_node_print(short_1,short_2);

			char_1 = char_1;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_2 = v_rasqal_new_slice_algebra_node(unsigned_int_3,char_1,int_2,int_1);

		int_3 = int_3 * int_1;
	}
	return long_1;
}
char v_rasqal_new_distinct_algebra_node( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	v_rasqal_free_algebra_node(unsigned_int_3);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_2;
	}
	return char_1;
	short_1 = v_rasqal_new_algebra_node(float_1,long_2);

}
long v_rasqal_algebra_query_add_distinct( char parameter_1,char parameter_2,char parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		short short_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char_1 = v_rasqal_new_distinct_algebra_node(double_1,double_2);

		float_1 = float_1 + float_1;
		if(1)
		{
			double double_3 = 1;
			int_1 = v_rasqal_algebra_node_print(short_1,short_2);

			double_3 = double_1 + double_3;
		}
		short_1 = short_2 + short_3;
		long_2 = long_1 * long_1;
	}
	return long_3;
}
char v_rasqal_new_orderby_algebra_node( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	short_1 = v_rasqal_new_algebra_node(float_1,long_1);

	int_1 = int_1 + int_2;
	if(1)
	{
		int_2 = int_1;
		int_3 = int_1 + int_2;
		v_rasqal_free_algebra_node(unsigned_int_2);

		int_2 = int_3 + int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int_3 = int_4 * int_2;
	}
	return char_1;
}
long v_rasqal_algebra_query_add_orderby( int parameter_1,short parameter_2,long parameter_3,long parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long_2 = long_1 * long_1;
	v_rasqal_free_algebra_node(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_3 = 1;
		long_2 = long_1;
		short_3 = short_1 + short_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			short_4 = v_rasqal_expression_copy_expression_sequence(unsigned_int_2);

			char_1 = v_rasqal_new_orderby_algebra_node(unsigned_int_1,unsigned_int_1,short_1,int_1);

			float_2 = float_1 * float_1;
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_3 = float_3 * float_4;
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			int int_2 = 1;
			int_3 = int_1 * int_2;
		}
		double_2 = double_1 + double_1;
		long_3 = long_1 * long_3;
	}
	return long_2;
	int_3 = v_rasqal_algebra_node_print(short_1,short_2);

}
int v_rasqal_new_project_algebra_node( float parameter_1,float parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	short_3 = v_rasqal_new_algebra_node(float_1,long_1);

	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		v_rasqal_free_algebra_node(unsigned_int_1);

		short_3 = short_1 + short_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "b") > 0)
	{
		char char_3 = 1;
		char_3 = char_2 + char_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_3 = int_1 + int_2;
	}
	return int_3;
}
int v_rasqal_algebra_query_add_projection( int parameter_1,double parameter_2,float parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	int_1 = v_rasqal_algebra_node_print(short_1,short_1);

	double_2 = double_1 * double_2;
	int_1 = v_rasqal_new_project_algebra_node(float_1,float_1,char_1);

	double_2 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_3 * double_3;
	if(1)
	{
	}
	char_2 = char_2 + char_3;
	if(1)
	{
		float_1 = float_2 * float_1;
	}
	long_2 = long_1 + long_2;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_3 + long_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		double double_4 = 1;
		int_2 = v_rasqal_variable_print(unsigned_int_1,unsigned_int_2);

		float_2 = float_3 * float_2;
		char_2 = char_3 * char_3;
		short_2 = short_3;
		double_5 = double_1 + double_4;
	}
	v_rasqal_free_algebra_node(unsigned_int_1);

	float_1 = float_3 * float_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	double_6 = double_5 * double_5;
	v_rasqal_free_variable();

	float_3 = v_rasqal_new_variable_from_variable(short_4);

	short_4 = short_3 * short_3;
	return int_1;
}
float v_rasqal_new_having_algebra_node( long parameter_1,double parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		int int_3 = 1;
		short_1 = v_rasqal_new_algebra_node(float_1,long_1);

		int_3 = int_3 + int_3;
	}
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double_4 = double_1 * double_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double_2 = double_4 * double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		v_rasqal_free_algebra_node(unsigned_int_3);

		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	return float_1;
}
char v_rasqal_algebra_query_add_having( long parameter_1,double parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	v_rasqal_free_algebra_node(unsigned_int_1);

	float_1 = float_1;
	if(1)
	{
		int int_2 = 1;
		char char_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		int_1 = int_2;
		char_2 = char_1 + char_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		int_1 = v_rasqal_algebra_node_print(short_1,short_2);

		short_3 = short_1 + short_2;
		if(1)
		{
			int int_3 = 1;
			float_1 = v_rasqal_new_having_algebra_node(long_1,double_1,float_2);

			int_1 = int_3 * int_3;
		}
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		short_2 = v_rasqal_expression_copy_expression_sequence(unsigned_int_3);

		long_3 = long_1;
	}
	return char_1;
}
char v_rasqal_new_aggregation_algebra_node( int parameter_1,int parameter_2,double parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_2;
	}
	double_3 = double_2 + double_3;
	if(1)
	{
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		v_rasqal_free_algebra_node(unsigned_int_1);

		short_1 = short_1 * short_2;
		float_3 = float_1 + float_2;
		float_2 = float_2;
	}
	if(1)
	{
		short_3 = short_3 * short_1;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_3 + double_4;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short_3 = v_rasqal_new_algebra_node(float_4,long_1);

		int_2 = int_1 * int_2;
	}
	return char_1;
}
unsigned int v_rasqal_algebra_query_add_aggregation( int parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		int_3 = int_1 * int_1;
	}
	long_2 = long_2 * long_1;
	long_3 = long_1 * long_2;
	short_2 = short_1 * short_1;
	int_1 = v_rasqal_algebra_node_print(short_3,short_2);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	char_2 = char_1 + char_2;
	double_2 = double_1 * double_2;
	double_2 = double_2 * double_2;
	int_4 = int_3 * int_3;
	double_1 = double_1 * double_1;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 + char_1;
		short_2 = short_3 * short_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	long_1 = long_1;
	v_rasqal_free_algebra_aggregate();

	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		v_rasqal_free_algebra_node(unsigned_int_2);

		int_2 = int_4 * int_4;
	}
	return unsigned_int_3;
	char_2 = v_rasqal_new_aggregation_algebra_node(int_3,int_2,double_2,long_2);

}
void v_rasqal_algebra_replace_aggregate_expressions( char parameter_1,long parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_rasqal_algebra_extract_aggregate_expression_visit(float_1);

	unsigned_int_2 = unsigned_int_2;
	short_1 = short_2;
	int_1 = v_rasqal_expression_visit(long_1);

	double_2 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
}
double v_rasqal_free_map_node( double parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	long_1 = long_1 + long_2;
	return double_1;
}
void v_rasqal_free_map( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = v_rasqal_free_map_node(double_2,unsigned_int_1);

		int_1 = int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_1 + int_3;
	}
	int_2 = int_1 * int_4;
}
void v_rasqal_free_algebra_aggregate()
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "0:") > 0)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		v_rasqal_free_map(char_1);

		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	int_2 = int_1 + int_1;
}
int v_rasqal_map_node_write_indent( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	short_1 = short_2;
	short_1 = short_2 * short_2;
	float_1 = float_1 + float_1;
	long_1 = long_1 + long_1;
	long_1 = long_2 * long_1;
	int_3 = int_1 + int_2;
	char_1 = char_1;
	long_3 = long_3 + long_2;
	long_4 = long_4 * long_2;
	float_3 = float_2 * float_1;
	double_2 = double_1 * double_1;
	return int_4;
}
unsigned int v_rasqal_map_node_print_visit()
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_2;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_2;
	double_1 = double_2;
	char_3 = char_1 * char_2;
	int_2 = v_rasqal_map_node_write_indent(unsigned_int_2,int_2);

	char_1 = char_2 + char_4;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_3 + double_4;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		char_2 = char_3 + char_2;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	return unsigned_int_1;
}
short v_rasqal_map_node_visit( char parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	if(1)
	{
		long_1 = long_1 * long_2;
	}
	long_1 = long_2 * long_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	return short_1;
}
void v_rasqal_map_visit( long parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	short_1 = v_rasqal_map_node_visit(char_1,double_1);

}
int v_rasqal_map_print( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	v_rasqal_map_visit(long_1);

	long_3 = long_2 + long_2;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_1 = v_rasqal_map_node_print_visit();

		unsigned_int_1 = unsigned_int_1;
		double_1 = double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		int_1 = int_1;
		double_3 = double_2 * double_1;
	}
	float_3 = float_1 + float_2;
	return int_1;
}
int v_rasqal_map_node_add_kv( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double_2 = double_1 * double_1;
	double_2 = double_3 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
		}
		unsigned_int_2 = v_rasqal_new_map_node(short_1);

		char_2 = char_1 * char_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
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
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	long_1 = long_1 + long_1;
	return int_1;
}
unsigned int v_rasqal_new_map_node( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int_1 = int_2;
	int_3 = int_1 * int_3;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_2;
	int_4 = int_3 + int_2;
	return unsigned_int_4;
}
int v_rasqal_map_add_kv( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = v_rasqal_new_map_node(short_1);

		long_1 = long_1 + long_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return int_1;
	int_1 = v_rasqal_map_node_add_kv(unsigned_int_4);

}
char v_rasqal_new_variable_literal( short parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		int int_2 = 1;
		v_rasqal_free_variable();

		int_1 = int_1;
		double_2 = double_1 * double_1;
		char_1 = char_1;
		int_2 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5;
	}
	return char_2;
}
int v_rasqal_expression_convert_aggregate_to_variable( int parameter_1,int parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char_2 = char_1 * char_2;
	long_2 = long_1 + long_2;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_2;
	}
	char_1 = char_2 + char_1;
	if(1)
	{
		float_2 = float_1 + float_1;
		if(1)
		{
			short short_4 = 1;
			char_1 = v_rasqal_new_variable_literal(short_3,short_2);

			v_rasqal_expression_clear(unsigned_int_1);

			short_2 = short_2 * short_4;
		}
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		int int_3 = 1;
		double_2 = double_1;
		int_1 = int_2 + int_3;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3 * char_1;
	}
	long_4 = long_1 + long_3;
	float_3 = float_3 * float_1;
	double_2 = double_3 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float_2 = float_3 + float_1;
		long_3 = long_4 * long_3;
	}
	return int_2;
}
char v_rasqal_map_search_internal( char parameter_1,float parameter_2,int parameter_3)
{
	char char_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return char_1;
}
unsigned int v_rasqal_map_search( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double_1 = double_1 * double_2;
	char_1 = char_1 * char_2;
	int_2 = int_1 + int_1;
	return unsigned_int_1;
	char_2 = v_rasqal_map_search_internal(char_1,float_1,int_3);

}
int v_rasqal_expression_is_aggregate( float parameter_1)
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
double v_rasqal_algebra_extract_aggregate_expression_visit(float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	double_1 = double_1 + double_2;
	int_1 = v_rasqal_expression_convert_aggregate_to_variable(int_1,int_2,char_1);

	int_3 = int_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	float_1 = v_rasqal_variables_table_add2(short_1,char_1,int_2,double_2,float_1);

	int_3 = v_rasqal_map_add_kv(char_2);

	double_2 = double_1 * double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		int_1 = int_3 + int_3;
		if(1)
		{
			int_1 = v_rasqal_expression_is_aggregate(float_2);

			int_5 = int_4 + int_4;
		}
	}
	if(1)
	{
		char char_3 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_4 = 1;
		char_2 = char_3 + char_1;
		int_4 = int_5;
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_2 + short_1;
			double_3 = double_3 * double_3;
		}
		unsigned_int_3 = unsigned_int_1;
		long_2 = long_1 * long_1;
		if(1)
		{
			char char_4 = 1;
			char char_5 = 1;
			char_1 = char_4 * char_5;
		}
		if(1)
		{
			int int_6 = 1;
			int_1 = int_6 * int_6;
		}
		float_3 = float_2;
		if(1)
		{
			unsigned_int_2 = v_rasqal_new_expression_from_expression(short_1);

			int_3 = int_3 + int_2;
		}
		long_3 = long_3 + long_1;
		double_1 = double_2 * double_3;
		int_3 = v_rasqal_map_print(float_1,double_4);

		float_4 = float_3 * float_4;
		v_rasqal_log_error_simple(unsigned_int_2,unsigned_int_3,double_4,unsigned_int_1,short_4);

		double_2 = double_1 * double_3;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			float_3 = v_rasqal_new_variable_from_variable(short_4);

			unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
		}
		long_3 = long_3 * long_1;
		if(1)
		{
			unsigned_int_2 = v_rasqal_map_search(unsigned_int_5,int_2);

			float_4 = float_1 + float_4;
		}
	}
	return double_5;
}
int v_rasqal_expression_compare( char parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_3 = 1;
	double double_5 = 1;
	float float_6 = 1;
	int int_4 = 1;
	char char_3 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	double double_7 = 1;
	int int_5 = 1;
	float float_8 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_1 + float_1;
	double_1 = double_1;
	if(1)
	{
		int_1 = int_1 * int_2;
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
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	short_2 = short_1 * short_1;
	double_1 = double_2 + double_3;
	if(1)
	{
	}
	double_3 = double_1;
	if(1)
	{
	}
	short_1 = short_3 + short_2;
	if(1)
	{
	}
	short_5 = short_4 + short_2;
	int_2 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	if(1)
	{
	}
	double_4 = double_3 + double_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	long_2 = long_4;
	float_1 = float_3 + float_4;
	short_5 = short_4 * short_4;
	int_1 = int_2 + int_1;
	float_1 = float_5 + float_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_6 = 1;
		int_3 = int_3 * int_3;
		short_4 = short_6;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
		long_4 = long_1 + long_1;
		if(1)
		{
			double_4 = double_1 + double_5;
		}
	}
	double_5 = double_2 + double_5;
	double_2 = double_3 + double_2;
	if(1)
	{
		float_1 = float_6 + float_5;
	}
	int_2 = int_4;
	float_3 = float_6 + float_2;
	char_3 = char_3 + char_1;
	float_4 = float_7;
	unsigned_int_5 = unsigned_int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_5;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_4 * double_3;
	}
	double_2 = double_2 * double_1;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_6 = 1;
		char_3 = char_1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
		unsigned_int_6 = unsigned_int_5;
		int_4 = int_4;
		int_4 = int_2;
		if(1)
		{
			long_4 = long_1 * long_1;
		}
	}
	if(1)
	{
		char char_4 = 1;
		char_3 = char_4;
	}
	long_4 = long_3 + long_4;
	double_7 = double_5 + double_4;
	int_5 = int_4;
	if(1)
	{
	}
	float_5 = float_4 + float_8;
	if(1)
	{
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float float_9 = 1;
		int_6 = v_rasqal_literal_compare(float_2,short_5,int_6,int_7);

		float_6 = float_3 + float_5;
		float_8 = float_2 + float_4;
		float_2 = float_3;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
		float_1 = float_9 * float_5;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
		}
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_7 = int_3 + int_8;
	return int_3;
}
short v_rasqal_agg_expr_var_compare(int parameter_2,float parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_2;
	long_2 = long_1 * long_1;
	short_1 = short_1 * short_1;
	return short_2;
	int_1 = v_rasqal_expression_compare(char_3,long_1,int_1,int_1);

}
void v_rasqal_new_map( short parameter_1,double parameter_3,char parameter_4,float parameter_5,int parameter_6,float parameter_7,int parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
	}
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 * long_2;
	int_2 = int_1 * int_1;
	int_2 = int_1 * int_2;
	float_3 = float_2;
	float_2 = float_2 * float_3;
	char_3 = char_1 * char_2;
}
double v_rasqal_algebra_extract_aggregate_expressions( float parameter_1,unsigned int parameter_2,unsigned int parameter_3,double parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_7 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_8 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	v_rasqal_free_expression(int_1);

	double_2 = double_1 * double_1;
	int_2 = int_1 + int_1;
	double_4 = double_3 * double_3;
	double_5 = v_rasqal_algebra_extract_aggregate_expression_visit(float_1);

	char_1 = char_1 * char_2;
	if(1)
	{
	}
	double_6 = double_5 * double_3;
	float_1 = float_1 + float_2;
	short_1 = v_rasqal_agg_expr_var_compare(int_1,float_1);

	double_2 = double_7 * double_3;
	double_6 = double_7 + double_2;
	double_1 = double_1 + double_2;
	double_2 = double_6 + double_1;
	int_1 = v_rasqal_expression_print(float_3,short_1);

	int_2 = v_rasqal_expression_visit(long_1);

	int_2 = int_3 + int_4;
	int_1 = int_1 + int_5;
	v_rasqal_new_map(short_1,double_8,char_3,float_2,int_3,float_3,int_5);

	double_5 = double_2 + double_4;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_9 = 1;
			double double_10 = 1;
			int_2 = v_rasqal_variable_print(unsigned_int_1,unsigned_int_1);

			double_10 = double_1 + double_9;
			if(1)
			{
				float float_4 = 1;
				float float_5 = 1;
				float_5 = float_2 + float_4;
			}
			if(1)
			{
				int int_6 = 1;
				long long_2 = 1;
				int_6 = int_5;
				long_2 = long_1 + long_1;
			}
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return double_1;
	v_rasqal_free_variable();

}
long v_rasqal_algebra_query_prepare_aggregates( int parameter_1,float parameter_2,float parameter_3,double parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_2 = 1;
	short_1 = short_1 + short_2;
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		short short_3 = 1;
		int_1 = int_1 * int_1;
		v_rasqal_free_algebra_node(unsigned_int_1);

		short_2 = short_3;
		double_4 = double_3 * double_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_2;
	}
	if(1)
	{
		char char_1 = 1;
		int_4 = v_rasqal_query_build_variables_use(unsigned_int_2,long_1);

		char_2 = char_1 * char_1;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			double_4 = v_rasqal_algebra_extract_aggregate_expressions(float_1,unsigned_int_6,unsigned_int_2,double_4);

			double_4 = double_1 + double_3;
			v_rasqal_free_algebra_aggregate();

			double_1 = double_4 + double_4;
			unsigned_int_7 = unsigned_int_4 + unsigned_int_1;
			int_4 = int_4 * int_2;
			double_2 = double_1 + double_1;
		}
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_3;
			v_rasqal_algebra_replace_aggregate_expressions(char_2,long_2,float_1);

			short_2 = short_1 * short_2;
			double_3 = double_2;
		}
	}
	return long_2;
}
unsigned int v_rasqal_algebra_write_indent( long parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long_2 = long_1 * long_1;
		double_1 = double_1;
		int_2 = int_1 + int_2;
	}
	return unsigned_int_1;
}
long v_rasqal_algebra_node_operator_as_counted_string( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	return long_1;
}
float v_rasqal_algebra_algebra_node_write_internal( float parameter_1,long parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	char char_2 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_6 = 1;
	char char_6 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_2;
	float_1 = float_3 * float_3;
	v_rasqal_literal_write(unsigned_int_2,int_1);

	double_2 = double_1 * double_1;
	int_3 = int_2 + int_2;
	if(1)
	{
		long_1 = long_1;
	}
	float_2 = float_1 + float_2;
	long_2 = v_rasqal_algebra_node_operator_as_counted_string(short_1,int_2);

	long_4 = long_1 + long_3;
	int_3 = int_1 + int_3;
	int_2 = int_3;
	short_2 = short_1 + short_1;
	if(1)
	{
		int_3 = int_2 * int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_3 = int_4 * int_4;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
			if(1)
			{
				double_3 = double_3 + double_1;
				double_1 = double_2 + double_2;
			}
			int_3 = int_2;
			int_2 = int_1 * int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
			long_3 = long_2 * long_1;
		}
		float_3 = float_3 + float_1;
		v_rasqal_triple_write(char_1,int_4);

		int_4 = int_4 + int_4;
		if(1)
		{
			if(1)
			{
				int_2 = int_5 * int_6;
				double_4 = double_4 * double_1;
			}
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		}
	}
	if(1)
	{
		if(1)
		{
			float_6 = float_4 * float_5;
			v_rasqal_variable_write(short_2,float_5);

			int_5 = int_6 * int_3;
		}
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
		int_4 = int_2 * int_4;
	}
	if(1)
	{
		if(1)
		{
			int_3 = int_2;
			double_3 = double_4 * double_5;
		}
		short_4 = short_3 * short_2;
		int_5 = v_rasqal_variables_write(double_6,double_1);

		double_2 = double_5 * double_6;
	}
	if(1)
	{
		char_2 = char_1 * char_2;
		if(1)
		{
			double_2 = double_6 + double_4;
			if(1)
			{
				int_3 = int_6 + int_1;
				int_1 = int_6 * int_7;
			}
			int_4 = int_3 + int_7;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float_5 = float_5 + float_6;
				int_2 = int_5 + int_3;
				if(1)
				{
					float float_7 = 1;
					float_7 = float_4;
				}
				int_3 = int_4 * int_8;
				v_rasqal_expression_write(long_4,float_6);

				long_1 = long_1 * long_3;
			}
			int_2 = int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			short_1 = short_3 * short_4;
			long_1 = long_2 * long_2;
		}
		double_5 = double_5 * double_1;
		char_4 = char_2 * char_3;
		unsigned_int_6 = unsigned_int_6 + unsigned_int_2;
		short_5 = short_2 * short_1;
	}
	if(1)
	{
		long long_5 = 1;
		char char_5 = 1;
		if(1)
		{
			short_4 = short_4;
			int_6 = int_4 * int_8;
		}
		unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
		double_2 = double_3 + double_5;
		long_5 = long_2 + long_3;
		unsigned_int_7 = unsigned_int_5 + unsigned_int_3;
		double_1 = double_4 + double_2;
		unsigned_int_7 = v_rasqal_algebra_write_indent(long_2,char_3);

		char_1 = char_4 * char_5;
	}
	if(1)
	{
		short short_7 = 1;
		if(1)
		{
			int_8 = int_7 + int_8;
			int_6 = int_6 * int_1;
		}
		short_7 = short_3 * short_6;
		unsigned_int_4 = unsigned_int_7;
		char_4 = char_6 + char_2;
	}
	int_2 = int_6;
	int_1 = int_8 * int_7;
	short_6 = short_5;
	char_6 = char_3;
	return float_1;
}
int v_rasqal_algebra_algebra_node_write( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return int_1;
	float_1 = v_rasqal_algebra_algebra_node_write_internal(float_2,long_1,unsigned_int_1);

}
int v_rasqal_algebra_node_print( short parameter_1,short parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float_2 = float_1 * float_1;
	char_1 = char_1 + char_1;
	int_2 = int_1 * int_2;
	int_1 = v_rasqal_algebra_algebra_node_write(float_2,char_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return int_3;
}
double v_rasqal_new_groupby_algebra_node( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_2 = long_1 + long_2;
	if(1)
	{
		v_rasqal_free_algebra_node(unsigned_int_1);

		double_1 = double_1;
	}
	int_1 = int_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 * short_2;
		short_1 = v_rasqal_new_algebra_node(float_1,long_3);

		double_2 = double_2;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		short short_4 = 1;
		short_4 = short_1 * short_2;
	}
	return double_3;
}
short v_rasqal_expression_copy_expression_sequence( unsigned int parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_rasqal_expression_print(float_1,short_1);

	int_2 = int_2;
	int_2 = int_3;
	v_rasqal_free_expression(int_4);

	long_1 = long_1 + long_1;
	if(1)
	{
	}
	unsigned_int_1 = v_rasqal_new_expression_from_expression(short_1);

	float_3 = float_2 * float_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		int_5 = int_1 * int_2;
		long_1 = long_1 * long_1;
		if(1)
		{
			float float_4 = 1;
			float_2 = float_2 * float_4;
			if(1)
			{
				int int_6 = 1;
				int_4 = int_6 + int_4;
			}
		}
	}
	return short_1;
}
int v_rasqal_algebra_query_add_group_by( long parameter_1,long parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	v_rasqal_free_algebra_node(unsigned_int_1);

	double_2 = double_1 * double_2;
	if(1)
	{
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_1 = v_rasqal_new_groupby_algebra_node(unsigned_int_1,int_1,int_2);

		double_1 = double_1 * double_2;
		int_1 = int_1 + int_3;
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_1 = v_rasqal_expression_copy_expression_sequence(unsigned_int_2);

			int_2 = v_rasqal_algebra_node_print(short_2,short_1);

			short_4 = short_1 * short_3;
		}
		double_4 = double_1 + double_3;
		if(1)
		{
			double_4 = double_2 + double_5;
		}
		double_5 = double_1 + double_3;
		double_4 = double_6;
	}
	return int_4;
}
float v_rasqal_algebra_select_graph_pattern_to_algebra( float parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	char char_4 = 1;
	double double_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_6 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	float float_7 = 1;
	double_2 = double_1 + double_1;
	int_1 = v_rasqal_algebra_query_add_group_by(long_1,long_2,char_1);

	double_2 = double_3;
	int_3 = int_2 * int_1;
	char_2 = char_3;
	short_2 = short_1 + short_1;
	int_4 = int_3 + int_3;
	long_2 = v_rasqal_algebra_query_add_slice(int_1,double_3,char_2);

	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 + double_3;
	float_2 = float_1 + float_1;
	double_4 = double_4 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short_3 = short_4;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_4 = int_1 + int_4;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1;
	}
	char_1 = v_rasqal_algebra_query_add_having(long_2,double_1,unsigned_int_2);

	int_5 = int_3 * int_2;
	if(1)
	{
		long_3 = v_rasqal_algebra_query_add_orderby(int_2,short_3,long_4,long_5);

		unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
	}
	if(1)
	{
		double_4 = v_rasqal_graph_pattern_get_sub_graph_pattern(unsigned_int_1,int_5);

		float_2 = float_2;
		short_2 = short_4 * short_1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
		}
	}
	v_rasqal_algebra_bindings_to_algebra(int_3,long_4);

	int_6 = int_1 + int_6;
	if(1)
	{
		char_2 = char_3 + char_1;
	}
	double_3 = double_4;
	if(1)
	{
		long_5 = v_rasqal_algebra_query_add_distinct(char_4,char_2,char_3);

		double_3 = double_2 + double_5;
	}
	long_1 = v_rasqal_algebra_query_prepare_aggregates(int_3,float_4,float_5,double_3);

	long_6 = long_2 + long_6;
	if(1)
	{
		unsigned_int_3 = v_rasqal_algebra_query_add_aggregation(int_5,unsigned_int_2,float_4);

		unsigned_int_4 = v_rasqal_new_2op_algebra_node(short_3,int_3,float_2,float_6);

		float_6 = float_4 * float_4;
	}
	v_rasqal_free_algebra_node(unsigned_int_5);

	unsigned_int_7 = unsigned_int_4 * unsigned_int_7;
	if(1)
	{
		int_7 = int_5 + int_5;
	}
	unsigned_int_6 = unsigned_int_6;
	if(1)
	{
		int_8 = int_7;
	}
	if(1)
	{
		int_8 = int_4 + int_7;
		short_3 = v_rasqal_algebra_graph_pattern_to_algebra(char_1,double_3);

		double_5 = double_3 * double_5;
		if(1)
		{
			float_6 = float_2 * float_1;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_6;
		}
		int_3 = v_rasqal_algebra_query_add_projection(int_4,double_5,float_7);

		unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	}
	return float_2;
}
long v_rasqal_new_assignment_algebra_node( long parameter_1,float parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_4 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	float_3 = float_1 * float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int_1 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short_1 = v_rasqal_new_algebra_node(float_4,long_1);

		char_2 = char_1 + char_1;
	}
	return long_1;
	v_rasqal_free_expression(int_1);

}
int v_rasqal_algebra_let_graph_pattern_to_algebra( unsigned int parameter_1,char parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = v_rasqal_new_expression_from_expression(short_1);

	long_1 = v_rasqal_new_assignment_algebra_node(long_1,float_1,long_1);

	int_3 = int_1 + int_2;
	if(1)
	{
	}
	return int_1;
}
long v_rasqal_new_graph_algebra_node( long parameter_1,char parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	v_rasqal_free_literal(long_3);

	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_1 = v_rasqal_new_algebra_node(float_1,long_2);

		double_1 = double_2 + double_3;
	}
	if(1)
	{
		double double_4 = 1;
		double_1 = double_4;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		v_rasqal_free_algebra_node(unsigned_int_3);

		float_3 = float_2 + float_2;
	}
	return long_2;
}
short v_rasqal_algebra_graph_graph_pattern_to_algebra( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	long long_3 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_3 = 1;
		long_1 = v_rasqal_new_graph_algebra_node(long_2,char_1,unsigned_int_3);

		int_3 = int_1;
	}
	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		v_rasqal_new_literal_from_literal(float_1);

		unsigned_int_1 = unsigned_int_6 * unsigned_int_6;
	}
	double_1 = v_rasqal_graph_pattern_get_sub_graph_pattern(unsigned_int_7,int_2);

	long_1 = long_2 * long_1;
	if(1)
	{
		short_1 = short_1;
		v_rasqal_free_literal(long_3);

		double_1 = double_1 + double_2;
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_1 = v_rasqal_algebra_graph_pattern_to_algebra(char_1,double_2);

		short_2 = short_3;
	}
	return short_1;
}
int v_rasqal_new_literal_expression( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_1 = double_1 + double_1;
		short_1 = short_1;
		short_2 = short_1 + short_1;
		v_rasqal_free_literal(long_1);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	return int_3;
}
char v_rasqal_algebra_new_boolean_constant_expr( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_rasqal_new_boolean_literal(short_1,int_1);

	int_2 = v_rasqal_new_literal_expression(long_1,short_1);

	double_1 = double_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	return char_2;
}
int v_rasqal_new_leftjoin_algebra_node( char parameter_1,double parameter_2,int parameter_3,short parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char_3 = char_1 * char_2;
	if(1)
	{
		int int_1 = 1;
		short_1 = v_rasqal_new_algebra_node(float_1,long_1);

		int_2 = int_1 + int_1;
	}
	v_rasqal_free_algebra_node(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		v_rasqal_free_expression(int_3);

		int_2 = int_4 * int_4;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		long long_2 = 1;
		long_1 = long_2 + long_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	return int_4;
}
unsigned int v_rasqal_new_empty_algebra_node( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	int_1 = int_2 * int_1;
	int_1 = int_1;
	short_1 = v_rasqal_new_algebra_node(float_1,long_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	return unsigned_int_3;
}
long v_rasqal_algebra_group_graph_pattern_to_algebra( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_7 = 1;
	int int_6 = 1;
	long long_9 = 1;
	char char_3 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_8 = 1;
	short short_4 = 1;
	short short_7 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int_2 = int_1 + int_2;
	float_2 = float_1 * float_1;
	double_1 = v_rasqal_graph_pattern_get_sub_graph_pattern(unsigned_int_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		float_1 = float_1 + float_1;
		float_3 = float_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_6 = 1;
		char char_2 = 1;
		double_3 = double_2 + double_1;
		long_3 = long_1 * long_2;
		if(1)
		{
			int_3 = int_1 * int_1;
		}
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			int_5 = int_3 * int_4;
			long_1 = long_1 * long_4;
			if(1)
			{
				float float_4 = 1;
				float float_5 = 1;
				char_1 = v_rasqal_algebra_new_boolean_constant_expr(short_1,int_4);

				v_rasqal_free_expression(int_5);

				unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
				float_5 = float_3 + float_4;
			}
			long_5 = long_4 + long_2;
			if(1)
			{
				long_2 = long_6 + long_7;
			}
		}
		if(1)
		{
			long long_8 = 1;
			char_1 = char_2;
			long_8 = long_8 * long_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short short_2 = 1;
				short short_3 = 1;
				short short_5 = 1;
				int_6 = int_4;
				short_2 = short_2 * short_1;
				short_2 = short_3 * short_1;
				long_6 = long_9;
				if(1)
				{
					unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
					char_1 = char_1;
				}
				if(1)
				{
					char_3 = v_rasqal_new_2op_expression(unsigned_int_3,long_3,long_7,unsigned_int_1);

					int_2 = int_6 * int_7;
					unsigned_int_6 = unsigned_int_1 + unsigned_int_6;
					unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
					unsigned_int_7 = unsigned_int_1;
					int_8 = int_7 + int_2;
					short_4 = short_1;
					if(1)
					{
						short short_6 = 1;
						double double_4 = 1;
						short_7 = short_5 * short_6;
						double_4 = double_1 * double_4;
					}
				}
				if(1)
				{
					double double_5 = 1;
					double_5 = double_5;
					char_5 = char_1 + char_4;
					if(1)
					{
						unsigned_int_2 = unsigned_int_4 * unsigned_int_6;
						float_1 = float_2;
					}
					int_7 = v_rasqal_new_filter_algebra_node(int_7,int_7,float_2);

					short_5 = short_5;
					if(1)
					{
						int_3 = int_7 * int_6;
						double_1 = double_1 * double_2;
					}
					int_2 = int_8 + int_4;
				}
			}
		}
		if(1)
		{
			int_1 = int_2 + int_6;
			int_5 = int_3 * int_5;
			if(1)
			{
				unsigned_int_7 = v_rasqal_new_expression_from_expression(short_7);

				int_4 = int_2 * int_2;
				int_7 = int_5 + int_2;
			}
			unsigned_int_7 = v_rasqal_new_empty_algebra_node(int_6);

			int_5 = v_rasqal_new_leftjoin_algebra_node(char_5,double_1,int_2,short_1);

			int_8 = int_4;
			if(1)
			{
				char_4 = char_2 * char_4;
				unsigned_int_7 = unsigned_int_3 * unsigned_int_4;
			}
		}
	}
	if(1)
	{
		short short_8 = 1;
		v_rasqal_free_algebra_node(unsigned_int_6);

		short_8 = short_1;
		unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
		if(1)
		{
			char_5 = char_3 * char_1;
			short_4 = v_rasqal_algebra_graph_pattern_to_algebra(char_4,double_3);

			int_6 = int_8 + int_4;
		}
	}
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
	}
	if(1)
	{
		int_3 = int_3;
	}
	return long_9;
	unsigned_int_3 = v_rasqal_new_2op_algebra_node(short_7,int_4,float_3,float_3);

}
unsigned int v_rasqal_new_2op_algebra_node( short parameter_1,int parameter_2,float parameter_3,float parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	v_rasqal_free_algebra_node(unsigned_int_3);

	double_1 = double_1 * double_1;
	if(1)
	{
		double_3 = double_1 * double_2;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		double double_4 = 1;
		short_1 = v_rasqal_new_algebra_node(float_1,long_1);

		double_2 = double_4 * double_3;
	}
	if(1)
	{
		double_3 = double_2;
	}
	return unsigned_int_1;
}
short v_rasqal_algebra_union_graph_pattern_to_algebra( int parameter_1,float parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	long long_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_rasqal_algebra_graph_pattern_to_algebra(char_1,double_1);

	int_2 = int_1 + int_1;
	int_4 = int_1 + int_3;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = v_rasqal_graph_pattern_get_sub_graph_pattern(unsigned_int_1,int_5);

	long_1 = long_1;
	return short_2;
	unsigned_int_1 = v_rasqal_new_2op_algebra_node(short_2,int_5,float_1,float_1);

	v_rasqal_free_algebra_node(unsigned_int_2);

}
void v_rasqal_free_algebra_node( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		v_rasqal_free_variable();

		float_1 = float_1 * float_2;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_2 * int_3;
	}
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	if(1)
	{
		long long_3 = 1;
		v_rasqal_free_literal(long_1);

		long_3 = long_2 + long_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	v_rasqal_free_expression(int_2);

	long_2 = long_1 * long_2;
	v_rasqal_free_bindings(double_1);

}
int v_rasqal_new_filter_algebra_node( int parameter_1,int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		v_rasqal_free_algebra_node(unsigned_int_3);

		int_2 = int_1 * int_2;
	}
	int_4 = int_3 * int_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		short_1 = v_rasqal_new_algebra_node(float_1,long_1);

		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		v_rasqal_free_expression(int_4);

		float_3 = float_2 * float_3;
	}
	if(1)
	{
		int_4 = int_3 + int_1;
	}
	return int_1;
}
void v_rasqal_query_get_triple_sequence( short parameter_1)
{
	float float_1 = 1;
	float_1 = float_1 + float_1;
}
short v_rasqal_new_algebra_node( float parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1;
	return short_1;
}
float v_rasqal_new_triples_algebra_node( char parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char_2 = char_1 + char_2;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	short_1 = short_2;
	return float_1;
	short_3 = v_rasqal_new_algebra_node(float_2,long_1);

}
char v_rasqal_algebra_basic_graph_pattern_to_algebra( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_6 = 1;
	char char_2 = 1;
	unsigned_int_1 = v_rasqal_new_expression_from_expression(short_1);

	int_3 = int_1 * int_2;
	short_1 = short_2 * short_1;
	int_3 = int_1 * int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		short short_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_3 = 1;
		short_1 = short_1 * short_2;
		if(1)
		{
			int_1 = int_2 + int_3;
			v_rasqal_free_algebra_node(unsigned_int_2);

			short_3 = short_2 * short_1;
		}
		int_2 = int_4 * int_5;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			int_2 = v_rasqal_new_filter_algebra_node(int_4,int_4,float_1);

			double_4 = double_3 * double_4;
			float_2 = v_rasqal_new_triples_algebra_node(char_1,long_1,int_2,int_6);

			short_2 = short_3;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		v_rasqal_query_get_triple_sequence(short_1);

		float_1 = float_3 * float_4;
	}
	return char_2;
}
short v_rasqal_algebra_graph_pattern_to_algebra( char parameter_1,double parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	short short_4 = 1;
	long long_5 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_4 = 1;
	float float_4 = 1;
	double double_5 = 1;
	float float_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = v_rasqal_algebra_union_graph_pattern_to_algebra(int_1,float_1);

	unsigned_int_1 = unsigned_int_1;
	short_1 = v_rasqal_algebra_graph_graph_pattern_to_algebra(char_1,int_2);

	char_2 = char_1;
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1;
	short_2 = short_2 + short_3;
	v_rasqal_algebra_service_graph_pattern_to_algebra(long_3,char_1);

	int_2 = v_rasqal_graph_pattern_print(double_3,long_4);

	int_3 = v_rasqal_algebra_node_print(short_4,short_2);

	long_5 = long_1 + long_4;
	char_2 = v_rasqal_algebra_basic_graph_pattern_to_algebra(char_3,float_2);

	float_3 = v_rasqal_algebra_select_graph_pattern_to_algebra(float_2,double_1);

	char_1 = char_2;
	long_6 = long_6 * long_4;
	char_2 = char_4 + char_5;
	double_3 = double_4;
	unsigned_int_1 = v_rasqal_graph_pattern_operator_as_string(double_1);

	int_3 = int_1;
	int_3 = v_rasqal_algebra_let_graph_pattern_to_algebra(unsigned_int_3,char_2);

	float_4 = float_3 + float_3;
	double_5 = double_5 * double_2;
	float_5 = float_1 * float_3;
	double_1 = double_5 + double_4;
	long_3 = long_4 * long_4;
	int_4 = int_4 + int_4;
	int_5 = int_3 + int_2;
	double_1 = double_4 * double_4;
	if(1)
	{
		if(1)
		{
			char char_6 = 1;
			double double_6 = 1;
			char_5 = char_6 + char_4;
			double_6 = double_4 + double_3;
			int_1 = int_2 + int_5;
		}
		if(1)
		{
			long_6 = v_rasqal_algebra_filter_graph_pattern_to_algebra(char_1,unsigned_int_1);

			int_4 = v_rasqal_algebra_values_graph_pattern_to_algebra(int_1,long_2);

			float_5 = float_5 + float_3;
			long_4 = long_6 * long_2;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		}
	}
	return short_3;
	long_4 = v_rasqal_algebra_group_graph_pattern_to_algebra(unsigned_int_4,unsigned_int_3);

}
int v_rasqal_algebra_query_to_algebra( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	long_1 = long_1 * long_2;
	int_1 = int_1 + int_2;
	v_rasqal_algebra_bindings_to_algebra(int_1,long_2);

	double_1 = double_1;
	long_1 = long_2;
	if(1)
	{
	}
	int_1 = v_rasqal_algebra_node_print(short_1,short_2);

	int_3 = int_2 + int_3;
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_2 * int_1;
		int_4 = int_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		int_5 = v_rasqal_algebra_node_visit(long_1,float_1);

		int_3 = int_1 + int_3;
	}
	long_1 = long_2 + long_2;
	if(1)
	{
		v_rasqal_free_algebra_node(unsigned_int_2);

		double_2 = double_1 + double_1;
	}
	double_4 = double_2 * double_3;
	short_2 = v_rasqal_algebra_graph_pattern_to_algebra(char_1,double_5);

	short_1 = short_3 * short_3;
	return int_2;
	v_rasqal_query_get_query_graph_pattern(short_2);

	unsigned_int_3 = v_rasqal_new_2op_algebra_node(short_4,int_4,float_2,float_3);

	char_1 = v_rasqal_algebra_remove_znodes(int_2,double_6);

}
int v_rasqal_query_variable_is_bound( char parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = v_rasqal_variables_table_get_total_variables_count(short_1);

	char_2 = char_4;
	int_1 = int_1 + int_1;
	int_1 = int_2 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 * float_2;
		if(1)
		{
		}
	}
	return int_3;
}
float v_rasqal_query_check_unused_variables( double parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	char_1 = char_1;
	long_2 = long_1 + long_1;
	v_rasqal_log_warning_simple(char_1,double_1,char_1,long_2,int_1);

	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short_2 = short_1 * short_2;
		long_2 = v_rasqal_variables_table_get(long_1,int_1);

		int_2 = v_rasqal_query_variable_is_bound(char_1,char_1);

		float_3 = float_1 * float_2;
		if(1)
		{
			double double_2 = 1;
			double_2 = double_2 * double_2;
		}
	}
	return float_3;
	int_3 = v_rasqal_variables_table_get_named_variables_count(int_3);

}
int v_rasqal_graph_pattern_variable_bound_in( unsigned int parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_1 * float_1;
	float_2 = float_1 + float_2;
	int_1 = v_rasqal_variables_table_get_total_variables_count(short_1);

	char_1 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	char_1 = char_2 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_2;
	return int_1;
}
int v_rasqal_graph_pattern_variable_bound_below( short parameter_1,long parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int_1 = v_rasqal_graph_pattern_variable_bound_in(unsigned_int_1,float_1);

	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1;
	float_3 = float_2 * float_3;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_1 + int_2;
		short_2 = short_3 * short_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 + long_2;
			long_2 = long_1;
			float_1 = float_2 * float_3;
			if(1)
			{
				int int_3 = 1;
				int_3 = int_2 + int_1;
			}
		}
	}
	return int_1;
}
float v_rasqal_graph_pattern_find_parent( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_2 = int_1 * int_2;
	float_1 = float_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			long long_2 = 1;
			double_1 = double_1 * double_1;
			long_2 = long_1 * long_2;
			if(1)
			{
				long long_3 = 1;
				long_2 = long_3;
			}
		}
	}
	return float_1;
}
double v_rasqal_graph_pattern_get_parent( float parameter_1,int parameter_2,char parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long_1 = long_1 * long_1;
	double_2 = double_1 + double_1;
	int_1 = v_rasqal_graph_pattern_visit(unsigned_int_1,int_2);

	float_1 = v_rasqal_graph_pattern_find_parent(int_2,unsigned_int_2);

	double_3 = double_2 * double_3;
	if(1)
	{
	}
	int_1 = int_3 + int_3;
	return double_2;
}
char v_rasqal_expression_has_variable(long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double_1 = double_2;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
	unsigned_int_1 = v_rasqal_literal_as_variable(long_1);

}
int v_rasqal_expression_mentions_variable( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	return int_1;
	int_2 = v_rasqal_expression_visit(long_1);

	char_1 = v_rasqal_expression_has_variable(long_2);

}
long v_rasqal_query_filter_variable_scope( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	float float_4 = 1;
	double_1 = v_rasqal_graph_pattern_get_parent(float_1,int_1,char_1);

	char_2 = char_1 + char_2;
	int_1 = v_rasqal_graph_pattern_variable_bound_below(short_1,long_1);

	float_3 = float_2 + float_2;
	int_1 = int_1;
	if(1)
	{
		int_1 = v_rasqal_graph_pattern_print(double_2,long_1);

		v_rasqal_query_get_query_graph_pattern(short_2);

		int_1 = int_2;
		if(1)
		{
			int_3 = v_rasqal_variables_table_get_named_variables_count(int_2);

			long_1 = v_rasqal_variables_table_get(long_1,int_4);

			unsigned_int_1 = unsigned_int_1;
			char_1 = v_rasqal_new_boolean_literal(short_3,int_4);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			char_2 = char_1;
		}
	}
	if(1)
	{
		long long_3 = 1;
		if(1)
		{
			int_1 = v_rasqal_expression_mentions_variable(char_3,double_1);

			unsigned_int_2 = v_rasqal_graph_pattern_operator_as_string(double_2);

			int_1 = int_1 * int_3;
			if(1)
			{
				int int_5 = 1;
				char_3 = char_3;
				int_5 = int_1 * int_4;
			}
		}
		long_3 = long_2 * long_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_2 = double_1;
		v_rasqal_expression_convert_to_literal(float_4,char_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	return long_2;
}
float v_rasqal_query_build_variable_agg_use( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	float float_4 = 1;
	float_2 = float_1 + float_2;
	long_1 = long_1 * long_1;
	int_1 = int_1 * int_1;
	int_1 = int_1 * int_2;
	double_1 = double_1 + double_2;
	int_2 = v_rasqal_variables_table_get_total_variables_count(short_1);

	char_3 = char_1 + char_2;
	int_3 = int_2 * int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_4 = 1;
		float float_3 = 1;
		char_4 = char_2;
		float_2 = float_3 + float_4;
		int_2 = int_3 + int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_3 = 1;
			double double_4 = 1;
			double_4 = double_2 + double_3;
		}
	}
	return float_4;
}
char v_rasqal_query_values_build_variables_use_map_binds( char parameter_1,short parameter_2,int parameter_3,char parameter_4,short parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
	char_1 = char_1;
	short_2 = v_rasqal_graph_pattern_promote_variable_mention_to_bind(char_1,double_1,unsigned_int_2);

	int_3 = int_1 + int_2;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_4 = int_1 + int_4;
		int_3 = int_4;
		double_2 = double_3;
	}
	return char_1;
}
long v_rasqal_query_union_build_variables_use_map_binds( long parameter_1,double parameter_2,int parameter_3,float parameter_4,short parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_4 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	long long_4 = 1;
	int_1 = int_1 + int_1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 * long_1;
	int_2 = int_2 * int_1;
	short_2 = short_1 * short_1;
	float_1 = float_1 + float_2;
	char_2 = char_1 + char_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "(") > 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_3 = 1;
		double_3 = double_4 * double_2;
		float_2 = float_1 + float_1;
		long_3 = long_2 * long_2;
		char_3 = char_2;
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		}
	}
	char_4 = v_rasqal_query_graph_pattern_build_variables_use_map_binds(unsigned_int_2,float_3,int_3,unsigned_int_2,char_1);

	short_3 = short_2 * short_2;
	return long_4;
}
char v_rasqal_query_select_build_variables_use_map_binds( int parameter_1,short parameter_2,int parameter_3,float parameter_4,unsigned int parameter_5)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short_1 = v_rasqal_graph_pattern_promote_variable_mention_to_bind(char_1,double_1,unsigned_int_1);

	double_3 = double_2 * double_2;
	double_1 = double_2 + double_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_2 = double_1 + double_4;
	float_1 = float_2;
	if(1)
	{
	}
	double_3 = double_3 + double_2;
	double_2 = double_3 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		short_1 = short_1 + short_1;
		int_3 = int_1 + int_2;
		int_3 = v_rasqal_projection_get_variables_sequence(short_2);

		double_2 = double_2;
	}
	long_1 = long_1 * long_2;
	double_5 = double_2 + double_1;
	short_1 = short_3 * short_1;
	unsigned_int_2 = unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_6 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double_4 = double_4 * double_6;
		float_2 = float_2 + float_3;
		float_1 = float_4 + float_3;
	}
	return char_2;
	char_1 = v_rasqal_query_graph_pattern_build_variables_use_map_binds(unsigned_int_4,float_2,int_3,unsigned_int_5,char_2);

}
char v_rasqal_query_let_build_variables_use_map_binds( int parameter_1,short parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_rasqal_graph_pattern_promote_variable_mention_to_bind(char_1,double_1,unsigned_int_1);

	double_3 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
int v_rasqal_query_graph_build_variables_use_map_binds( double parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_1 + short_2;
	int_1 = int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_1 = v_rasqal_literal_as_variable(long_1);

		float_2 = float_1 * float_2;
	}
	return int_2;
	short_2 = v_rasqal_graph_pattern_promote_variable_mention_to_bind(char_1,double_1,unsigned_int_2);

}
short v_rasqal_graph_pattern_promote_variable_mention_to_bind( char parameter_1,double parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 + char_1;
	short_2 = short_1 + short_2;
	if(1)
	{
	}
	char_3 = char_2 * char_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	double_2 = double_1 * double_2;
	double_1 = double_1 * double_1;
	int_3 = v_rasqal_variables_table_get_total_variables_count(short_3);

	double_3 = double_3;
	return short_2;
}
long v_rasqal_query_triples_build_variables_use_map_binds( float parameter_1,int parameter_2,int parameter_3,short parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	short_1 = v_rasqal_graph_pattern_promote_variable_mention_to_bind(char_1,double_1,unsigned_int_4);

	long_2 = long_1 + long_2;
	int_2 = int_1 * int_2;
	double_3 = double_2 * double_1;
	int_4 = int_2 * int_3;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		int int_5 = 1;
		long_1 = long_1 + long_1;
		long_3 = long_2 + long_1;
		unsigned_int_6 = v_rasqal_literal_as_variable(long_1);

		double_3 = double_4 + double_2;
		unsigned_int_4 = unsigned_int_7 + unsigned_int_4;
		if(1)
		{
			if(1)
			{
				int_1 = int_2 + int_3;
			}
			if(1)
			{
				char char_2 = 1;
				char_2 = char_2 + char_1;
			}
		}
		if(1)
		{
			if(1)
			{
				int_5 = int_4 + int_2;
			}
			if(1)
			{
				double double_5 = 1;
				double_2 = double_5 + double_1;
			}
		}
		if(1)
		{
			if(1)
			{
				short_1 = short_1 * short_1;
			}
			if(1)
			{
				double_6 = double_2 + double_2;
			}
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					int_1 = int_4 * int_1;
				}
				if(1)
				{
					unsigned_int_7 = unsigned_int_6;
				}
			}
		}
		if(1)
		{
			int int_6 = 1;
			int_5 = int_6;
		}
		if(1)
		{
			int_4 = int_2;
		}
		if(1)
		{
			double_4 = double_3 + double_2;
		}
		if(1)
		{
			if(1)
			{
				int_3 = int_4 + int_5;
			}
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_6 = double_4 + double_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_4 = 1;
			long_1 = long_1 * long_4;
			if(1)
			{
				int int_7 = 1;
				unsigned_int_5 = unsigned_int_6 + unsigned_int_7;
				int_7 = int_2 + int_1;
			}
		}
		if(1)
		{
			double_2 = double_6 * double_6;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
		}
	}
	return long_1;
}
char v_rasqal_query_graph_pattern_build_variables_use_map_binds( unsigned int parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	int int_6 = 1;
	short short_4 = 1;
	char char_4 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_5 = int_3 * int_4;
	int_5 = int_2 * int_1;
	char_2 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_4;
	char_1 = v_rasqal_query_let_build_variables_use_map_binds(int_5,short_3);

	unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	long_2 = long_1 * long_1;
	double_1 = double_1 * double_1;
	long_2 = v_rasqal_query_union_build_variables_use_map_binds(long_3,double_1,int_2,float_1,short_1);

	float_1 = float_1;
	char_2 = v_rasqal_query_select_build_variables_use_map_binds(int_5,short_2,int_2,float_1,unsigned_int_5);

	unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
	double_2 = double_1 + double_1;
	double_2 = double_2;
	long_3 = long_2 + long_4;
	if(1)
	{
		float float_2 = 1;
		unsigned_int_6 = v_rasqal_graph_pattern_operator_as_string(double_1);

		unsigned_int_5 = unsigned_int_6 * unsigned_int_1;
		float_2 = float_1 + float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			double double_5 = 1;
			double_1 = double_1 + double_2;
			char_1 = char_2 + char_1;
			long_1 = v_rasqal_query_triples_build_variables_use_map_binds(float_1,int_1,int_3,short_3,unsigned_int_1);

			int_3 = int_5;
			char_3 = v_rasqal_query_values_build_variables_use_map_binds(char_1,short_2,int_2,char_2,short_2);

			double_1 = double_2 * double_1;
			if(1)
			{
				double double_3 = 1;
				double_3 = double_3;
			}
			int_1 = int_3 * int_1;
			int_6 = v_rasqal_query_graph_build_variables_use_map_binds(double_2,short_4);

			double_5 = double_4 * double_4;
		}
	}
	return char_4;
}
float v_rasqal_query_build_variables_use_map_binds( double parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	float float_4 = 1;
	char_1 = v_rasqal_query_graph_pattern_build_variables_use_map_binds(unsigned_int_1,float_1,int_1,unsigned_int_1,char_1);

	int_2 = int_2 + int_2;
	int_1 = int_3 * int_2;
	short_1 = short_1 * short_1;
	short_1 = v_rasqal_query_get_group_conditions_sequence(long_1);

	double_3 = double_1 * double_2;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	double_2 = double_3 * double_3;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_2;
		char_1 = char_1 * char_1;
		double_5 = double_1 * double_4;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			long long_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			char_2 = char_1 + char_1;
			long_2 = long_2 + long_2;
			float_3 = float_1 * float_2;
			if(1)
			{
				double_3 = double_5;
				if(1)
				{
					double_2 = double_1 * double_3;
					long_2 = long_1;
				}
			}
		}
	}
	short_1 = short_1 + short_1;
	return float_4;
}
long v_rasqal_graph_pattern_mentions_variable( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int_1 = v_rasqal_variables_table_get_total_variables_count(short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1;
	short_3 = short_1 + short_2;
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	char_1 = char_1 + char_1;
	return long_1;
}
long v_rasqal_graph_pattern_tree_mentions_variable( int parameter_1,short parameter_2)
{
	long long_3 = 1;
	float float_1 = 1;
	long long_4 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long_1 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_2 = 1;
			long_2 = long_1;
			long_3 = v_rasqal_graph_pattern_mentions_variable(float_1,long_4);

			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
			if(1)
			{
			}
		}
	}
	return long_3;
}
short v_rasqal_query_select_build_variables_use_map( float parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double_1 = double_2;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		float float_5 = 1;
		float float_6 = 1;
		float_3 = float_1 + float_2;
		long_1 = v_rasqal_graph_pattern_tree_mentions_variable(int_1,short_1);

		char_1 = char_1 + char_2;
		short_2 = short_2 * short_1;
		unsigned_int_3 = v_rasqal_query_build_variables_sequence_use_map_row(float_4,unsigned_int_3,int_2);

		float_6 = float_5 + float_6;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_2 = v_rasqal_new_variable_from_variable(short_1);

			int_2 = int_1 + int_1;
			int_1 = v_rasqal_projection_get_variables_sequence(short_1);

			float_3 = float_2 * float_2;
			long_2 = long_2 + long_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_7 = 1;
				float_2 = float_4 * float_7;
				unsigned_int_2 = unsigned_int_2;
				if(1)
				{
					int int_3 = 1;
					double_2 = double_1 * double_1;
					int_1 = int_3;
				}
			}
		}
		unsigned_int_4 = unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_1 + double_3;
		if(1)
		{
		}
	}
	return short_3;
	v_rasqal_free_variable();

	int_1 = v_rasqal_variable_print(unsigned_int_3,unsigned_int_4);

	long_2 = v_rasqal_variables_table_get(long_3,int_4);

}
int v_rasqal_query_let_build_variables_use_map( int parameter_1,float parameter_2,float parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long_1 = v_rasqal_query_expression_build_variables_use_map_row(short_1,double_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_1;
	int_1 = v_rasqal_expression_visit(long_2);

}
float v_rasqal_query_graph_build_variables_use_map( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	return float_1;
	unsigned_int_1 = v_rasqal_literal_as_variable(long_1);

}
double v_rasqal_query_graph_pattern_build_variables_use_map( char parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4)
{
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_2 = 1;
	float float_5 = 1;
	short_1 = v_rasqal_query_select_build_variables_use_map(float_1,long_1,int_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = v_rasqal_query_let_build_variables_use_map(int_2,float_1,float_2);

		int_3 = int_3 + int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			v_rasqal_query_triples_build_variables_use_map_row(unsigned_int_2,long_1,int_3,int_2);

			double_2 = double_1 + double_1;
			if(1)
			{
			}
		}
	}
	int_4 = int_2 + int_1;
	int_5 = int_5 + int_5;
	short_1 = short_2 + short_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	float_4 = float_3 + float_3;
	int_6 = int_2 + int_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	float_3 = float_2 * float_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	float_3 = v_rasqal_query_graph_build_variables_use_map(char_1,short_4);

	unsigned_int_4 = unsigned_int_3;
	short_2 = short_5;
	char_1 = v_rasqal_query_expression_build_variables_use_map(int_5,long_2);

	float_3 = float_5;
	return double_1;
}
void v_rasqal_query_get_having_conditions_sequence( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
}
int v_rasqal_query_build_expressions_sequence_use_map_row( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long_1 = long_1 + long_1;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		short_2 = short_1 * short_2;
		char_1 = v_rasqal_query_expression_build_variables_use_map(int_1,long_2);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "V") > 0)
		{
			int int_2 = 1;
			int_2 = int_1 + int_1;
		}
		char_1 = char_2;
	}
	return int_1;
}
short v_rasqal_query_get_group_conditions_sequence( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
}
void v_rasqal_query_triples_build_variables_use_map_row( unsigned int parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float_2 = float_1 + float_2;
	unsigned_int_1 = v_rasqal_literal_as_variable(long_1);

	float_3 = float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_2 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		int_2 = int_1 * int_2;
		long_1 = long_1 * long_2;
		if(1)
		{
			int int_3 = 1;
			int_1 = int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_2 = unsigned_int_4;
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_2 + float_1;
		}
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				double_1 = double_1 + double_1;
			}
		}
	}
}
long v_rasqal_query_build_literals_sequence_use_map_row( int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_1;
		long_1 = long_3 * long_3;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
		unsigned_int_2 = v_rasqal_literal_as_variable(long_3);

		char_3 = char_1 + char_2;
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_2 * double_2;
		}
	}
	return long_4;
}
long v_rasqal_query_expression_build_variables_use_map_row( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double_1 = double_1 * double_2;
		int_3 = int_1 * int_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = v_rasqal_literal_as_variable(long_1);

			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
	}
	return long_1;
}
char v_rasqal_query_expression_build_variables_use_map( int parameter_1,long parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long_1 = v_rasqal_query_expression_build_variables_use_map_row(short_1,double_1);

	long_1 = long_1 + long_1;
	return char_1;
	int_1 = v_rasqal_expression_visit(long_1);

}
unsigned int v_rasqal_query_build_variables_sequence_use_map_row( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = v_rasqal_query_expression_build_variables_use_map(int_1,long_1);

	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short_2 = short_1 * short_1;
		double_3 = double_1 * double_2;
		double_2 = double_3 * double_4;
		if(1)
		{
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_2 = char_2 + char_3;
			double_4 = double_1 * double_4;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				int_1 = int_1 + int_1;
				unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
			}
		}
		float_2 = float_1 + float_1;
	}
	return unsigned_int_1;
}
int v_rasqal_variables_table_get_total_variables_count( short parameter_1)
{
	int int_1 = 1;
	return int_1;
}
double v_rasqal_query_build_variables_use_map( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_5 = 1;
	short short_5 = 1;
	float float_4 = 1;
	int int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	float float_5 = 1;
	double double_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_8 = 1;
	long long_6 = 1;
	char char_8 = 1;
	int int_7 = 1;
	long long_7 = 1;
	long long_8 = 1;
	v_rasqal_query_triples_build_variables_use_map_row(unsigned_int_1,long_1,int_1,int_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	int_1 = v_rasqal_query_build_expressions_sequence_use_map_row(int_2,float_1);

	int_2 = int_1;
	double_1 = double_1 * double_1;
	v_rasqal_query_get_having_conditions_sequence(long_1);

	double_1 = double_2 + double_1;
	int_1 = int_3 * int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	int_4 = int_3 + int_2;
	char_3 = char_1 * char_2;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
		float_3 = float_2 * float_1;
	}
	short_4 = short_2 * short_3;
	char_1 = char_3 * char_4;
	int_3 = int_2 * int_2;
	if(1)
	{
		char_6 = char_3 + char_5;
		double_1 = double_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_1 + double_3;
	}
	double_1 = double_1 + double_2;
	int_5 = v_rasqal_variables_table_get_total_variables_count(short_5);

	int_1 = int_5;
	float_4 = float_2 * float_4;
	if(1)
	{
		int_4 = int_6 + int_2;
	}
	int_6 = int_2 + int_3;
	long_2 = long_2 + long_3;
	double_2 = double_4 * double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		double_4 = v_rasqal_query_get_order_conditions_sequence(float_5);

		double_5 = double_1;
	}
	long_1 = long_2 + long_2;
	short_6 = short_1 + short_4;
	char_2 = char_5 + char_4;
	if(1)
	{
		float_3 = v_rasqal_query_build_variables_use_map_binds(double_4,unsigned_int_4,int_3,char_6);

		long_5 = long_4 + long_5;
	}
	long_3 = long_2 * long_5;
	if(1)
	{
		short_5 = short_1 * short_5;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		if(1)
		{
			double_1 = double_2;
		}
	}
	float_1 = float_3 * float_6;
	if(1)
	{
		char char_7 = 1;
		double double_7 = 1;
		char_2 = char_1 + char_7;
		double_7 = double_5 * double_6;
		if(1)
		{
			short_4 = short_4 + short_3;
		}
	}
	long_2 = v_rasqal_query_build_literals_sequence_use_map_row(int_1,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
	if(1)
	{
		short_6 = short_1;
		int_3 = int_5 + int_6;
		if(1)
		{
			unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
		}
	}
	if(1)
	{
		int_1 = int_5 * int_2;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			float_2 = float_1;
		}
	}
	double_2 = double_8 * double_5;
	if(1)
	{
		long_3 = long_2 + long_3;
	}
	short_2 = v_rasqal_query_get_group_conditions_sequence(long_6);

	float_1 = float_6 * float_2;
	char_5 = char_5 * char_8;
	int_5 = int_5 * int_3;
	unsigned_int_1 = v_rasqal_query_build_variables_sequence_use_map_row(float_3,unsigned_int_5,int_2);

	int_7 = int_2 * int_7;
	if(1)
	{
		long_1 = long_2 + long_1;
	}
	double_6 = double_6 * double_4;
	double_5 = v_rasqal_query_graph_pattern_build_variables_use_map(char_1,unsigned_int_6,int_4,short_5);

	long_3 = long_4 * long_7;
	long_8 = long_2 + long_5;
	char_1 = char_2 + char_6;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
	char_1 = char_8 * char_8;
	return double_5;
}
int v_rasqal_query_build_variables_use( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		char_1 = char_2;
		char_3 = char_2;
		v_rasqal_log_warning_simple(char_4,double_2,char_3,long_1,int_1);

		int_3 = int_1 + int_2;
		float_1 = v_rasqal_query_build_variable_agg_use(char_5);

		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long_1 = long_2 + long_2;
			if(1)
			{
				long_2 = v_rasqal_variables_table_get(long_3,int_3);

				unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
			if(1)
			{
				int_3 = int_2 * int_1;
			}
			if(1)
			{
				int int_5 = 1;
				long_2 = long_3 * long_2;
				int_4 = int_5;
			}
		}
		double_2 = v_rasqal_query_build_variables_use_map(double_1,short_1);

		v_rasqal_log_error_simple(unsigned_int_2,unsigned_int_1,double_1,unsigned_int_2,short_2);

		double_2 = double_3 + double_1;
		if(1)
		{
		}
	}
	return int_4;
}
void v_rasqal_query_prepare_count_graph_pattern( char parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_2 = char_3 + char_4;
	}
	float_2 = float_1 * float_2;
}
float v_rasqal_query_enumerate_graph_patterns( short parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double_1 = double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "G") < 0)
	{
		double double_2 = 1;
		v_rasqal_query_prepare_count_graph_pattern(char_1,long_1);

		double_1 = double_2 + double_1;
	}
	int_1 = v_rasqal_query_graph_pattern_visit2(float_1,long_1);

	long_2 = long_1 * long_1;
	if(1)
	{
	}
	return float_2;
}
int v_rasqal_query_merge_graph_patterns( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int_1 = int_2;
	v_rasqal_free_graph_pattern(float_1);

	int_1 = int_1 * int_1;
	int_3 = v_rasqal_graph_pattern_print(double_1,long_1);

	unsigned_int_1 = v_rasqal_graph_pattern_operator_as_string(double_1);

	int_4 = v_rasqal_graph_patterns_join(short_1,double_2);

	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_1 + double_2;
	return int_1;
}
short v_rasqal_query_remove_empty_group_graph_patterns( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_rasqal_graph_pattern_print(double_1,long_1);

	int_1 = v_rasqal_graph_pattern_move_constraints(unsigned_int_4,float_1);

	double_2 = double_1 * double_1;
	char_1 = char_1 * char_1;
	char_1 = char_2;
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
		}
		short_2 = short_1 + short_1;
		if(1)
		{
		}
		short_1 = short_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 * double_1;
	}
	if(1)
	{
	}
	return short_2;
	v_rasqal_free_graph_pattern(float_1);

}
char v_rasqal_new_2op_expression( unsigned int parameter_1,long parameter_2,long parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	char_1 = char_1 * char_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		int_3 = int_2 * int_2;
		long_2 = long_1 * long_2;
		int_3 = int_1 * int_1;
		v_rasqal_free_expression(int_1);

		unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
		float_2 = float_1 + float_1;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_3 + long_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	return char_2;
}
unsigned int v_rasqal_new_expression_from_expression( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	return unsigned_int_1;
}
int v_rasqal_graph_pattern_move_constraints( unsigned int parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short_3 = short_1 + short_2;
	char_1 = v_rasqal_new_2op_expression(unsigned_int_1,long_1,long_2,unsigned_int_2);

	unsigned_int_1 = unsigned_int_3;
	long_3 = long_2 * long_2;
	if(1)
	{
	}
	int_1 = int_1;
	short_2 = short_2 + short_1;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if(remainder_check(controller_2,100,2))
	{
		char char_2 = 1;
		unsigned_int_3 = v_rasqal_new_expression_from_expression(short_1);

		char_2 = char_2 * char_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
int v_rasqal_graph_patterns_join( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	int int_4 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = v_rasqal_graph_pattern_print(double_1,long_1);

		double_1 = double_2 + double_2;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	int_2 = int_3;
	int_1 = int_2;
	int_3 = int_3 + int_3;
	double_4 = double_3 + double_3;
	if(1)
	{
		short short_1 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
			}
		}
		short_1 = short_1;
		if(1)
		{
		}
	}
	if(1)
	{
		long long_2 = 1;
		double_2 = double_3 * double_4;
		long_2 = long_2 + long_2;
		int_2 = v_rasqal_graph_pattern_move_constraints(unsigned_int_2,float_1);

		int_1 = int_1;
		double_3 = double_5 * double_3;
		if(1)
		{
			char_1 = char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			short_2 = short_2 * short_2;
		}
		unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
	}
	float_3 = float_2 + float_1;
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_3 = char_4;
		double_1 = double_2;
	}
	if(1)
	{
		double_5 = double_1 + double_3;
		double_2 = double_2 * double_4;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_3 * long_1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		short short_3 = 1;
		int_2 = int_1 * int_3;
		short_3 = short_2 * short_3;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_7 = unsigned_int_1 * unsigned_int_6;
		double_2 = double_4;
	}
	unsigned_int_3 = v_rasqal_graph_pattern_operator_as_string(double_1);

	float_4 = float_3 + float_3;
	if(1)
	{
		double_4 = double_5 * double_5;
	}
	double_2 = double_5;
	unsigned_int_2 = unsigned_int_7 + unsigned_int_5;
	return int_4;
	v_rasqal_free_graph_pattern(float_3);

}
short v_rasqal_query_merge_triple_patterns( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int_1 = v_rasqal_graph_pattern_print(double_1,long_1);

	int_3 = int_2 + int_1;
	double_3 = double_2 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_5 = 1;
		int int_6 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = v_rasqal_graph_pattern_operator_as_string(double_3);

		int_1 = int_1 * int_3;
		char_2 = char_1 * char_1;
		int_3 = int_4 * int_3;
		if(1)
		{
			long_1 = long_1;
		}
		if(1)
		{
		}
		short_1 = short_2;
		if(1)
		{
		}
		v_rasqal_free_graph_pattern(float_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_3 = double_2;
		char_1 = char_3;
		char_1 = char_1 + char_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		int_2 = v_rasqal_graph_patterns_join(short_1,double_3);

		int_5 = int_1 * int_2;
		long_1 = long_1;
		double_1 = double_1 * double_2;
		int_6 = int_1 + int_5;
		long_3 = long_2 + long_3;
		double_4 = double_1 + double_4;
		short_1 = short_2 + short_2;
		double_2 = double_4 + double_4;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_3;
		long_5 = long_4 * long_4;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
		long_5 = long_4;
		char_2 = char_2 * char_1;
	}
	return short_2;
}
double v_rasqal_graph_pattern_get_sub_graph_pattern( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	return double_1;
}
float v_rasqal_graph_pattern_get_sub_graph_pattern_sequence( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	char_3 = char_1 + char_2;
	return float_1;
}
int v_rasqal_graph_pattern_visit( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_2 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = v_rasqal_graph_pattern_get_sub_graph_pattern(unsigned_int_2,int_1);

	float_2 = float_1 + float_2;
	char_2 = char_1 + char_1;
	float_1 = v_rasqal_graph_pattern_get_sub_graph_pattern_sequence(long_1);

	double_1 = double_1 * double_1;
	char_1 = char_1;
	short_1 = short_1 + short_2;
	long_1 = long_1 + long_2;
	char_2 = char_3 + char_2;
	float_3 = float_2 * float_3;
	char_3 = char_3 * char_4;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	short_1 = short_3;
	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	long_2 = long_1;
	char_5 = char_2 * char_1;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	double_1 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	return int_2;
}
void v_rasqal_query_get_query_graph_pattern( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 * int_2;
}
int v_rasqal_query_graph_pattern_visit2( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_1;
	double_1 = double_2 + double_3;
	v_rasqal_query_get_query_graph_pattern(short_1);

	int_1 = v_rasqal_graph_pattern_visit(unsigned_int_1,int_2);

	char_2 = char_1 + char_1;
	if(1)
	{
	}
	return int_1;
}
int v_rasqal_row_write( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short_2 = short_1 + short_1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	short_3 = short_1;
	short_3 = short_3 + short_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			long_1 = long_1 + long_1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
			if(1)
			{
				int_2 = int_3;
			}
		}
		long_3 = long_2 * long_3;
		if(1)
		{
			short_2 = short_2 + short_1;
		}
		if(1)
		{
			float float_1 = 1;
			double_1 = double_2;
			float_1 = float_1 + float_2;
		}
		long_5 = long_4 * long_1;
	}
	if(1)
	{
		unsigned_int_1 = v_rasqal_rowsource_get_variable_by_offset(float_3,int_2);

		double_2 = double_3 + double_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_4 = 1;
			unsigned_int_3 = unsigned_int_1;
			if(1)
			{
				double double_4 = 1;
				double_3 = double_4;
			}
			float_4 = float_2 + float_3;
		}
		int_1 = int_3 + int_3;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
		short_1 = short_4 * short_3;
	}
	int_5 = int_4 * int_2;
	v_rasqal_literal_write(unsigned_int_2,int_1);

	double_3 = double_1;
	int_2 = int_3;
	return int_1;
}
int v_rasqal_bindings_get_row( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
		if(1)
		{
			long long_2 = 1;
			char_1 = v_rasqal_new_row_from_row(float_1);

			long_1 = long_2;
		}
	}
	return int_1;
}
int v_rasqal_variables_write( double parameter_1,double parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	v_rasqal_variable_write(short_1,float_1);

	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_2 = double_2 * double_1;
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 * int_2;
		}
		short_1 = short_2 * short_2;
	}
	return int_1;
}
int v_rasqal_projection_get_variables_sequence( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
void v_rasqal_triple_write( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	v_rasqal_literal_write(unsigned_int_1,int_1);

	float_1 = float_1;
	short_2 = short_1 * short_1;
	long_1 = long_2 * long_1;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	long_2 = long_3 * long_4;
	char_1 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned_int_6 = unsigned_int_6 * unsigned_int_7;
		short_3 = short_1 + short_2;
		float_3 = float_2 + float_2;
	}
}
long v_rasqal_graph_pattern_write_plurals( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_2;
	double_2 = double_3;
	int_2 = int_1 + int_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_3 + int_4;
	}
	return long_1;
}
short v_rasqal_graph_pattern_write_indent( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
unsigned int v_rasqal_graph_pattern_operator_as_string( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	return unsigned_int_1;
}
double v_rasqal_graph_pattern_write_internal( short parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	double double_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_6 = 1;
	long long_6 = 1;
	float float_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_5 = 1;
	double double_10 = 1;
	double double_11 = 1;
	int int_8 = 1;
	long long_8 = 1;
	long long_9 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_6 = 1;
	int int_9 = 1;
	int int_10 = 1;
	short short_7 = 1;
	v_rasqal_literal_write(unsigned_int_1,int_1);

	int_2 = int_1 * int_1;
	float_2 = float_1 * float_2;
	if(1)
	{
		int_2 = int_3 + int_4;
		double_1 = double_1 + double_2;
		short_3 = short_1 + short_2;
	}
	double_4 = double_1 * double_3;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_3 = int_4 + int_1;
	}
	if(1)
	{
		long_4 = long_3 + long_2;
		int_4 = int_5;
	}
	if(1)
	{
		short_4 = short_3 + short_4;
		double_3 = double_2 + double_4;
		if(1)
		{
			char_3 = char_1 * char_2;
			if(1)
			{
				short_4 = short_1;
				v_rasqal_expression_write(long_4,float_1);

				short_1 = short_1;
			}
		}
		float_1 = float_3 + float_3;
		float_2 = float_2;
		int_4 = int_2 * int_3;
		if(1)
		{
			int_2 = int_5 * int_5;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
			short_2 = short_1 + short_5;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			if(1)
			{
				short_4 = short_5 + short_3;
				if(1)
				{
					unsigned_int_4 = unsigned_int_4;
					long_5 = v_rasqal_graph_pattern_write_plurals(int_2,int_5,int_5);

					int_2 = int_1 + int_4;
				}
			}
			unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			short_5 = short_5;
			unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
			char_2 = char_1 + char_4;
		}
		unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
		double_5 = double_2;
	}
	if(1)
	{
		if(1)
		{
			int_5 = int_2 + int_6;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
				double_6 = double_1 * double_5;
			}
		}
		double_2 = double_3 * double_5;
		long_1 = long_2 + long_2;
		double_4 = double_5 + double_7;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_3;
		int_4 = int_3 * int_1;
		if(1)
		{
			double_7 = double_5 * double_2;
			if(1)
			{
				char_4 = char_5 + char_5;
				int_2 = int_3 * int_7;
			}
		}
		unsigned_int_4 = v_rasqal_graph_pattern_operator_as_string(double_6);

		int_6 = int_4 * int_3;
		unsigned_int_5 = unsigned_int_7 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_5;
		if(1)
		{
			short_6 = short_5 * short_5;
			int_4 = int_2;
			int_6 = int_2 * int_3;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short_1 = short_5 * short_1;
			float_2 = float_2 + float_3;
			if(1)
			{
				double_4 = double_5 + double_3;
				if(1)
				{
					long_1 = long_5 * long_6;
					short_2 = short_2 + short_6;
				}
			}
			if(1)
			{
				long_1 = long_4 * long_5;
			}
			if(1)
			{
				double_3 = double_6 * double_4;
			}
		}
		if(1)
		{
			long long_7 = 1;
			long_5 = long_2 * long_3;
			float_2 = float_2 * float_3;
			long_3 = long_7 + long_6;
		}
		double_3 = double_6 + double_7;
		float_1 = float_2 + float_4;
	}
	if(1)
	{
		double_6 = double_3;
		short_6 = short_2 * short_2;
		int_1 = v_rasqal_variables_write(double_3,double_1);

		double_3 = double_8 + double_9;
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_4 * double_9;
			if(1)
			{
				float_4 = float_1 + float_5;
				double_8 = double_9;
			}
		}
		if(1)
		{
			short_4 = short_2 * short_5;
		}
		if(1)
		{
			double_6 = double_9 * double_2;
			double_5 = double_4 * double_2;
			unsigned_int_3 = unsigned_int_6;
		}
		double_9 = double_10 * double_3;
		if(1)
		{
			float_2 = float_2 + float_3;
		}
		float_1 = float_5 * float_2;
	}
	if(1)
	{
		int_6 = int_4 + int_4;
		if(1)
		{
			unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
			if(1)
			{
				int_5 = int_1 + int_5;
				unsigned_int_5 = unsigned_int_6 + unsigned_int_2;
			}
		}
		if(1)
		{
			double_1 = double_7 * double_1;
			char_2 = char_2 * char_2;
			char_5 = char_3 * char_1;
		}
		int_1 = int_2 * int_5;
		int_2 = int_4 + int_4;
		if(1)
		{
			double_2 = double_10 + double_8;
		}
		if(1)
		{
			double_6 = double_5 * double_7;
		}
		double_11 = double_2 + double_4;
		if(1)
		{
			long_4 = long_3 + long_2;
		}
		unsigned_int_4 = unsigned_int_2;
	}
	if(1)
	{
		long long_10 = 1;
		unsigned int unsigned_int_8 = 1;
		long long_12 = 1;
		long long_13 = 1;
		char char_6 = 1;
		float float_7 = 1;
		int_8 = int_3 + int_8;
		if(1)
		{
			long_10 = long_8 + long_9;
			if(1)
			{
				unsigned_int_8 = unsigned_int_6 + unsigned_int_3;
				unsigned_int_7 = unsigned_int_7 * unsigned_int_7;
			}
		}
		int_3 = v_rasqal_row_write(long_6,unsigned_int_9);

		unsigned_int_6 = unsigned_int_1;
		if(1)
		{
			long long_11 = 1;
			long_5 = long_11;
			double_1 = double_8;
			int_8 = int_3 + int_7;
		}
		char_3 = char_1 + char_3;
		long_13 = long_10 + long_12;
		int_7 = int_2 * int_7;
		unsigned_int_6 = unsigned_int_3 + unsigned_int_1;
		v_rasqal_triple_write(char_4,int_6);

		short_6 = short_2 + short_1;
		double_7 = double_5 * double_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double_11 = double_5 + double_1;
			if(1)
			{
				int_1 = int_8 + int_2;
			}
			unsigned_int_7 = unsigned_int_2 * unsigned_int_4;
			double_10 = double_10 * double_9;
			int_8 = int_8 * int_3;
		}
		char_6 = char_3 + char_2;
		float_5 = float_5 + float_6;
		v_rasqal_variable_write(short_1,float_6);

		float_4 = float_4 * float_1;
		float_6 = float_3 * float_7;
		if(1)
		{
			int_3 = v_rasqal_projection_get_variables_sequence(short_1);

			unsigned_int_2 = unsigned_int_9 * unsigned_int_5;
		}
		unsigned_int_3 = unsigned_int_8 + unsigned_int_5;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_10 = 1;
			if(1)
			{
				int_9 = v_rasqal_bindings_get_row(int_8,int_1);

				double_6 = double_2 * double_8;
				if(1)
				{
					double_4 = double_9 * double_5;
					int_7 = int_8 * int_9;
				}
			}
			if(1)
			{
				double double_12 = 1;
				int_3 = int_10;
				long_9 = long_5 + long_8;
				double_12 = double_10 * double_10;
			}
			unsigned_int_1 = unsigned_int_7 + unsigned_int_10;
			if(1)
			{
				float_6 = float_1 * float_5;
			}
			int_1 = int_4;
		}
		if(1)
		{
			double_6 = double_6 + double_5;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_11 = 1;
			int_6 = int_2 + int_11;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_7;
		}
	}
	short_7 = v_rasqal_graph_pattern_write_indent(long_1,int_10);

	double_3 = double_7 + double_5;
	return double_10;
}
int v_rasqal_graph_pattern_print( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_2;
	double_3 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 + short_2;
	long_2 = long_1 * long_1;
	double_3 = double_4;
	return int_1;
	double_4 = v_rasqal_graph_pattern_write_internal(short_2,float_1,int_2);

}
void v_rasqal_expression_convert_to_literal( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_2;
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_2 + short_1;
	double_2 = double_1 * double_1;
	float_2 = float_1 + float_1;
	v_rasqal_expression_clear(unsigned_int_1);

}
void v_rasqal_expression_evaluate_struuid( int parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double_1 = v_rasqal_expression_evaluate_uuid(short_1,short_2,int_1,int_1);

}
double v_rasqal_expression_evaluate_uuid( short parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_5 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_2;
	int_2 = int_1 + int_3;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		float float_1 = 1;
		v_rasqal_new_uri_literal(unsigned_int_2,unsigned_int_2);

		float_2 = float_1 + float_2;
	}
	float_4 = float_3 * float_2;
	double_3 = v_rasqal_new_string_literal(short_1,double_3,float_4,int_2,short_2);

	float_5 = float_4 + float_5;
	if(1)
	{
		double_2 = double_3 * double_1;
	}
	char_3 = char_2 * char_1;
	int_2 = int_3 + int_2;
	short_4 = short_3 + short_3;
	double_4 = double_3 + double_3;
	return double_2;
}
long v_rasqal_expression_evaluate_uriuuid( double parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	return long_1;
	double_1 = v_rasqal_expression_evaluate_uuid(short_1,short_1,int_1,int_2);

}
short v_rasqal_expression_evaluate_digest( unsigned int parameter_1,long parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	int int_6 = 1;
	long long_5 = 1;
	int int_7 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	char char_4 = 1;
	short short_5 = 1;
	long long_6 = 1;
	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_rasqal_new_string_literal(short_1,double_1,float_1,int_1,short_1);

	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 * char_1;
	int_2 = int_2 + int_2;
	char_3 = v_rasqal_expression_evaluate2(short_2,char_3,int_3,-1 );

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_4 = int_4 * int_5;
	int_3 = int_2 + int_1;
	int_4 = int_4;
	if(1)
	{
		int_3 = int_5 + int_4;
	}
	if(1)
	{
		long_4 = long_2;
	}
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		int_5 = int_5 + int_5;
	}
	short_3 = short_1;
	if(1)
	{
		unsigned_int_6 = unsigned_int_3 + unsigned_int_3;
	}
	int_1 = int_5 + int_1;
	if(1)
	{
		double_2 = double_3;
	}
	long_1 = v_rasqal_literal_as_counted_string(long_4,unsigned_int_6,int_6,int_1);

	long_3 = long_3 * long_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	long_1 = long_2 + long_5;
	if(1)
	{
		int_6 = int_6;
	}
	int_7 = int_1 + int_6;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_3 * short_1;
	}
	float_3 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_5 = 1;
		unsigned_int_2 = unsigned_int_5;
		double_4 = double_4 * double_5;
		double_2 = double_6 * double_2;
		double_1 = double_4 + double_6;
		double_3 = double_6;
		double_5 = double_7;
	}
	long_3 = long_2;
	double_8 = double_7 + double_1;
	char_2 = char_4 + char_2;
	if(1)
	{
		double_4 = double_8 * double_4;
	}
	if(1)
	{
		int_3 = int_2 * int_4;
	}
	if(1)
	{
		double_6 = double_3;
	}
	return short_5;
	v_rasqal_free_literal(long_6);

}
int v_rasqal_xsd_decimal_floor( float parameter_1,long parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short_1 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	v_rasqal_xsd_decimal_clear_string(unsigned_int_1);

	short_1 = short_1 * short_1;
	char_1 = char_2;
	return int_1;
}
float v_rasqal_literal_floor( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	int int_5 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	long long_2 = 1;
	float_1 = v_rasqal_new_xsd_decimal(double_1);

	v_rasqal_free_xsd_decimal(char_1);

	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1;
	if(1)
	{
	}
	int_1 = int_2;
	double_3 = double_3 + double_2;
	int_3 = int_2 * int_1;
	int_1 = v_rasqal_new_numeric_literal(double_2,double_1,double_2);

	long_1 = v_rasqal_new_decimal_literal_from_decimal(float_2,unsigned_int_4,double_2);

	int_3 = int_4 + int_2;
	if(1)
	{
		float_2 = float_2;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	v_rasqal_new_literal_from_literal(float_2);

	float_1 = float_2 * float_2;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
	double_5 = double_4 * double_3;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		double_5 = v_rasqal_literal_as_double(char_2,int_5);

		double_2 = double_5;
		int_1 = v_rasqal_literal_is_numeric(float_3);

		unsigned_int_3 = unsigned_int_6 * unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_3 = unsigned_int_7 * unsigned_int_2;
	}
	char_1 = char_3 * char_4;
	int_4 = int_1;
	int_4 = int_3 * int_1;
	if(1)
	{
		if(1)
		{
			int_4 = int_5 + int_2;
		}
	}
	return float_2;
	int_2 = v_rasqal_xsd_decimal_floor(float_4,long_2);

}
char v_rasqal_expression_evaluate_floor( double parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_1;
	float_1 = float_1 * float_1;
	char_1 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		float_1 = v_rasqal_literal_floor(int_1,int_2);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		v_rasqal_free_literal(long_1);

		double_2 = double_1 + double_2;
	}
	int_1 = v_rasqal_literal_is_numeric(float_1);

	double_3 = double_3 + double_4;
	int_1 = int_1;
	int_5 = int_3 * int_4;
	if(1)
	{
		double double_5 = 1;
		char_2 = v_rasqal_expression_evaluate2(short_1,char_2,int_5,-1 );

		double_5 = double_2 * double_5;
	}
	if(1)
	{
		int_3 = int_5 + int_4;
	}
	if(1)
	{
		double double_6 = 1;
		double_1 = double_6 + double_2;
	}
	return char_3;
}
int v_rasqal_xsd_decimal_ceil( short parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char_1 = char_1 + char_2;
	double_1 = double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		v_rasqal_xsd_decimal_clear_string(unsigned_int_1);

		int_2 = int_1 * int_2;
	}
	double_2 = double_3;
	short_2 = short_1 + short_2;
	return int_3;
}
void v_rasqal_literal_ceil( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_1 = v_rasqal_new_numeric_literal(double_1,double_1,double_2);

	float_2 = float_1 * float_2;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	short_2 = short_1 + short_2;
	float_2 = v_rasqal_new_xsd_decimal(double_1);

	long_2 = long_1 * long_1;
	v_rasqal_free_xsd_decimal(char_1);

	double_1 = double_3;
	if(1)
	{
		int_1 = int_3 + int_3;
	}
	int_1 = int_2 * int_3;
	double_1 = v_rasqal_literal_as_double(char_1,int_2);

	double_1 = double_2 + double_4;
	int_2 = int_3 + int_4;
	double_2 = double_2 * double_5;
	if(1)
	{
		int int_5 = 1;
		double_3 = double_3 * double_3;
		int_2 = v_rasqal_literal_is_numeric(float_3);

		int_2 = v_rasqal_xsd_decimal_ceil(short_3,char_2);

		int_4 = int_2 * int_5;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		v_rasqal_new_literal_from_literal(float_3);

		unsigned_int_6 = unsigned_int_2 + unsigned_int_5;
	}
	double_7 = double_6 * double_5;
	unsigned_int_3 = unsigned_int_7 + unsigned_int_6;
	double_4 = double_7 + double_4;
	if(1)
	{
		if(1)
		{
			long_3 = v_rasqal_new_decimal_literal_from_decimal(float_2,unsigned_int_4,double_1);

			int_3 = int_4 * int_1;
		}
	}
}
long v_rasqal_expression_evaluate_ceil( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		v_rasqal_free_literal(long_1);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	int_4 = v_rasqal_literal_is_numeric(float_1);

	v_rasqal_literal_ceil(short_2,int_3);

	double_1 = double_1 * double_2;
	float_2 = float_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		int_6 = int_1 * int_5;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		char_1 = v_rasqal_expression_evaluate2(short_1,char_1,int_2,-1 );

		double_2 = double_1;
	}
	return long_1;
}
int v_rasqal_xsd_decimal_round( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_1;
	short_2 = short_1 * short_2;
	char_1 = char_1;
	if(1)
	{
		char_2 = char_3;
	}
	char_1 = char_3 * char_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	short_2 = short_2;
	v_rasqal_xsd_decimal_clear_string(unsigned_int_4);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	long_1 = long_2;
	short_1 = short_1 * short_2;
	char_1 = char_2 + char_3;
	return int_2;
}
int v_rasqal_literal_round( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	long_1 = v_rasqal_new_decimal_literal_from_decimal(float_1,unsigned_int_1,double_1);

	char_2 = char_1 * char_1;
	double_2 = v_rasqal_literal_as_double(char_2,int_1);

	short_2 = short_1 + short_1;
	short_3 = short_3 * short_1;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	double_3 = double_2 + double_3;
	short_3 = short_4;
	int_1 = int_2 * int_1;
	if(1)
	{
		float_1 = v_rasqal_new_xsd_decimal(double_3);

		short_1 = short_3 + short_2;
	}
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_2 * int_2;
	long_4 = long_2 + long_4;
	if(1)
	{
		v_rasqal_free_xsd_decimal(char_3);

		float_4 = float_2 + float_3;
		int_4 = int_3 * int_2;
	}
	if(1)
	{
		v_rasqal_new_literal_from_literal(float_3);

		unsigned_int_2 = unsigned_int_2;
	}
	int_5 = v_rasqal_literal_is_numeric(float_2);

	int_2 = v_rasqal_new_numeric_literal(double_1,double_2,double_3);

	int_3 = int_4;
	int_6 = v_rasqal_xsd_decimal_round(unsigned_int_3,short_4);

	int_2 = int_1 * int_1;
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		if(1)
		{
			float float_5 = 1;
			float_4 = float_3 * float_5;
		}
	}
	return int_7;
}
int v_rasqal_expression_evaluate_round( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	int int_6 = 1;
	int_1 = int_1 + int_1;
	int_1 = v_rasqal_literal_is_numeric(float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = v_rasqal_expression_evaluate2(short_1,char_2,int_1,-1 );

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int_2 = v_rasqal_literal_round(char_3,int_3);

		int_4 = int_4 + int_1;
	}
	if(1)
	{
		int_2 = int_4 * int_3;
	}
	int_2 = int_2 + int_4;
	int_5 = int_4 * int_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		long long_2 = 1;
		v_rasqal_free_literal(long_1);

		long_2 = long_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		int_5 = int_3 + int_3;
	}
	return int_6;
}
int v_rasqal_xsd_decimal_abs( long parameter_1,float parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float_1 = float_1;
	v_rasqal_xsd_decimal_clear_string(unsigned_int_1);

	double_1 = double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	long_2 = long_1 * long_2;
	double_3 = double_1 + double_1;
	return int_4;
}
double v_rasqal_literal_abs( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	short_1 = short_1 + short_2;
	int_1 = v_rasqal_literal_as_integer(double_1,int_2);

	int_1 = int_3 * int_3;
	int_2 = int_2;
	float_2 = float_1 * float_2;
	float_1 = float_2 * float_3;
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	short_4 = short_2 * short_3;
	if(1)
	{
		double_2 = double_2 + double_1;
	}
	int_1 = v_rasqal_literal_is_numeric(float_3);

	int_3 = int_4 * int_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_3 = v_rasqal_new_numeric_literal(double_2,double_3,double_3);

	v_rasqal_free_xsd_decimal(char_4);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_6 = char_3 * char_5;
	if(1)
	{
		int_2 = int_5 * int_1;
	}
	float_2 = float_3;
	double_1 = v_rasqal_literal_as_double(char_5,int_6);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	int_5 = int_2 * int_6;
	long_1 = v_rasqal_new_decimal_literal_from_decimal(float_3,unsigned_int_2,double_1);

	long_1 = long_2;
	if(1)
	{
		float_2 = float_1 * float_4;
		int_2 = int_3 + int_6;
	}
	if(1)
	{
		int int_7 = 1;
		int int_8 = 1;
		int_3 = v_rasqal_xsd_decimal_abs(long_2,float_3);

		int_8 = int_1 * int_7;
	}
	double_3 = v_rasqal_new_integer_literal(long_3,float_4,int_3);

	float_3 = v_rasqal_new_xsd_decimal(double_1);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_5;
	float_5 = float_4 * float_1;
	if(1)
	{
		if(1)
		{
			int_3 = int_3;
		}
	}
	return double_2;
}
double v_rasqal_expression_evaluate_abs( int parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
	}
	if(1)
	{
		char_1 = v_rasqal_expression_evaluate2(short_1,char_2,int_1,-1 );

		double_2 = double_1 * double_2;
	}
	int_2 = v_rasqal_literal_is_numeric(float_1);

	double_2 = v_rasqal_literal_abs(float_2,int_3);

	float_2 = float_3 + float_2;
	int_5 = int_2 + int_4;
	int_2 = int_5 + int_1;
	if(1)
	{
		int_1 = int_3 + int_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		int int_6 = 1;
		int_4 = int_5 * int_6;
	}
	return double_3;
	v_rasqal_free_literal(long_3);

}
int v_rasqal_regex_replace( int parameter_1,unsigned int parameter_2,char parameter_3,long parameter_4,unsigned int parameter_5,char parameter_6,short parameter_7,short parameter_8,int parameter_9)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_4 = 1;
	char char_3 = 1;
	double double_2 = 1;
	long long_5 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	float float_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 + long_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	char_2 = char_1 + char_1;
	int_2 = int_1 + int_1;
	float_2 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	short_1 = short_1;
	v_rasqal_log_error_simple(unsigned_int_3,unsigned_int_4,double_1,unsigned_int_1,short_1);

	long_1 = long_2 + long_1;
	long_4 = long_1 + long_3;
	v_rasqal_log_warning_simple(char_3,double_2,char_1,long_5,int_3);

	short_1 = short_1;
	double_3 = double_3 + double_4;
	float_2 = float_3 * float_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short_2 = short_2 + short_1;
		}
	}
	char_4 = char_5;
	if(1)
	{
		unsigned_int_1 = unsigned_int_5;
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_4;
	}
	double_4 = double_5 + double_4;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_1;
	short_3 = short_2;
	if(1)
	{
	}
	float_3 = float_5 + float_3;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	double_3 = double_4 * double_6;
	long_2 = long_5 * long_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double double_7 = 1;
			double_7 = double_7 + double_3;
		}
	}
	unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
	if(1)
	{
		double_6 = double_1 * double_6;
		double_2 = double_4 + double_6;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		float_3 = float_5 + float_3;
		unsigned_int_6 = unsigned_int_7 + unsigned_int_2;
	}
	short_4 = short_2 + short_2;
	int_1 = int_3 + int_1;
	return int_3;
}
long v_rasqal_expression_evaluate_replace( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	double double_5 = 1;
	long long_4 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_8 = 1;
	int int_6 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_9 = 1;
	int int_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_8 = 1;
	short_1 = short_1 * short_2;
	int_1 = int_1 + int_2;
	float_3 = float_1 * float_2;
	char_1 = v_rasqal_expression_evaluate2(short_2,char_2,int_3,-1 );

	int_3 = int_2 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_2;
	double_2 = double_1 * double_1;
	short_2 = short_1 * short_2;
	long_3 = long_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	double_4 = double_3 * double_3;
	short_1 = short_3 * short_3;
	double_4 = double_2 + double_2;
	char_1 = char_1 + char_2;
	double_4 = double_3 + double_5;
	double_5 = double_4 * double_4;
	if(1)
	{
		long_1 = long_3 * long_3;
	}
	long_4 = long_4;
	short_3 = short_1;
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	char_2 = char_3 + char_1;
	if(1)
	{
		int_5 = int_4 * int_4;
	}
	double_2 = double_3 * double_2;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		int_1 = int_3 + int_2;
	}
	if(1)
	{
		short_1 = short_2 + short_2;
	}
	double_3 = double_6 + double_4;
	double_6 = double_5 + double_4;
	if(1)
	{
		double_7 = double_4 + double_4;
	}
	if(1)
	{
		double_1 = double_1;
		if(1)
		{
			unsigned_int_6 = unsigned_int_7;
		}
		double_8 = double_7 + double_3;
	}
	long_1 = v_rasqal_literal_as_counted_string(long_2,unsigned_int_5,int_3,int_4);

	float_2 = float_3;
	long_1 = long_4 + long_2;
	if(1)
	{
		long_1 = long_1 * long_4;
	}
	float_2 = float_2;
	float_3 = float_1 + float_3;
	long_3 = long_1 * long_4;
	int_2 = int_6;
	long_2 = long_5 + long_6;
	int_5 = int_2 * int_3;
	if(1)
	{
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		double_4 = v_rasqal_new_string_literal(short_3,double_9,float_2,int_7,short_4);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_8 + unsigned_int_7;
	}
	if(1)
	{
		double double_10 = 1;
		int_8 = v_rasqal_regex_replace(int_2,unsigned_int_7,char_3,long_5,unsigned_int_1,char_2,short_1,short_1,int_4);

		double_8 = double_2 * double_10;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_6 + unsigned_int_2;
	}
	if(1)
	{
		v_rasqal_free_literal(long_4);

		unsigned_int_8 = unsigned_int_3;
	}
	return long_6;
}
int v_rasqal_expression_evaluate_strafter( double parameter_1,short parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_10 = 1;
	long long_4 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_11 = 1;
	int int_12 = 1;
	short_2 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_3 + short_1;
	short_2 = short_1 + short_2;
	double_1 = double_1 * double_1;
	float_1 = float_1 * float_2;
	long_1 = long_1;
	int_2 = int_1 * int_1;
	double_1 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_rasqal_literal_is_string(char_1);

	int_2 = int_1 + int_1;
	char_2 = char_1;
	if(1)
	{
		int_2 = int_3;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		int_2 = v_rasqal_literal_string_languages_compare(long_1,unsigned_int_3);

		int_1 = int_4 * int_5;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int int_6 = 1;
		if(1)
		{
			char_3 = char_1 * char_1;
		}
		char_3 = char_4 * char_5;
		short_4 = short_4 * short_2;
		float_3 = float_3 + float_2;
		double_4 = double_3 + double_4;
		int_2 = int_2 * int_6;
	}
	if(1)
	{
		short short_5 = 1;
		int int_7 = 1;
		double double_6 = 1;
		if(1)
		{
			long_1 = long_1 + long_2;
		}
		short_5 = short_5 * short_3;
		double_5 = double_4 * double_3;
		short_3 = short_1 * short_3;
		int_7 = int_1;
		double_4 = double_6 * double_7;
	}
	int_9 = int_8 + int_2;
	if(1)
	{
		double_5 = double_5 * double_7;
	}
	char_2 = v_rasqal_expression_evaluate2(short_2,char_1,int_4,-1 );

	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	int_4 = v_rasqal_literal_print(short_2,unsigned_int_3);

	int_3 = int_5 + int_2;
	if(1)
	{
		double_8 = v_rasqal_new_string_literal(short_2,double_9,float_3,int_2,short_2);

		unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
		short_4 = short_3 + short_1;
		if(1)
		{
			long_3 = long_2 * long_1;
			unsigned_int_6 = unsigned_int_1 * unsigned_int_4;
			if(1)
			{
				double_3 = double_2 + double_4;
			}
			double_10 = double_7 * double_5;
		}
	}
	if(1)
	{
		long_4 = v_rasqal_literal_as_counted_string(long_1,unsigned_int_2,int_10,int_5);

		unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
		int_3 = int_8 * int_3;
	}
	unsigned_int_3 = unsigned_int_7;
	float_5 = float_3 + float_4;
	v_rasqal_free_literal(long_3);

	int_3 = int_4 + int_11;
	int_11 = int_5;
	double_7 = double_3 * double_5;
	if(1)
	{
		float float_6 = 1;
		float_6 = float_1 * float_1;
	}
	if(1)
	{
		int_1 = int_12 * int_9;
	}
	double_7 = double_3 + double_3;
	if(1)
	{
		int_12 = int_8 + int_9;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_7 + unsigned_int_1;
	}
	if(1)
	{
		double_4 = double_7 + double_10;
	}
	if(1)
	{
		int_12 = int_3 + int_1;
	}
	return int_5;
}
int v_rasqal_literal_is_string( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
double v_rasqal_expression_evaluate_strbefore( char parameter_1,double parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	float float_5 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_6 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_7 = 1;
	short short_4 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_7 = 1;
	char_2 = char_1 + char_1;
	double_3 = double_1 + double_2;
	int_1 = v_rasqal_literal_print(short_1,unsigned_int_1);

	float_3 = float_1 * float_2;
	v_rasqal_free_literal(long_1);

	double_4 = double_4 * double_3;
	int_2 = v_rasqal_literal_string_languages_compare(long_2,unsigned_int_1);

	char_1 = char_3 + char_4;
	float_4 = float_2 * float_4;
	int_3 = int_1;
	int_3 = v_rasqal_literal_is_string(char_4);

	unsigned_int_2 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_4 = double_2 + double_2;
	double_2 = v_rasqal_new_string_literal(short_2,double_3,float_3,int_3,short_3);

	double_2 = double_3;
	int_3 = int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	char_6 = char_5 * char_3;
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		if(1)
		{
			float_5 = float_4 * float_2;
		}
		long_3 = v_rasqal_literal_as_counted_string(long_1,unsigned_int_1,int_4,int_5);

		char_3 = char_7;
		unsigned_int_3 = unsigned_int_4;
		char_3 = char_3;
		long_3 = long_2;
		float_4 = float_6 + float_6;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_5 * double_5;
		}
		int_4 = int_3 + int_3;
		unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
		double_2 = double_2 + double_2;
		int_4 = int_5 * int_2;
		double_3 = double_3 * double_2;
	}
	char_7 = char_5 * char_3;
	if(1)
	{
		char_2 = char_6 + char_1;
	}
	int_4 = int_4 * int_2;
	if(1)
	{
		double_6 = double_6 * double_4;
	}
	int_5 = int_1 * int_5;
	if(1)
	{
		double_7 = double_4 * double_5;
		if(1)
		{
			int int_6 = 1;
			int_7 = int_1 + int_6;
			short_1 = short_1 + short_2;
			if(1)
			{
				unsigned_int_6 = unsigned_int_4 + unsigned_int_4;
			}
			unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		short_3 = short_4 * short_1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_7;
	}
	float_6 = float_4 * float_5;
	char_8 = v_rasqal_expression_evaluate2(short_4,char_8,int_7,-1 );

	unsigned_int_6 = unsigned_int_3 + unsigned_int_8;
	short_4 = short_1 + short_2;
	float_7 = float_6 * float_1;
	char_3 = char_4;
	if(1)
	{
		long long_4 = 1;
		long_1 = long_4 * long_2;
	}
	if(1)
	{
		short short_5 = 1;
		short_3 = short_5 * short_1;
	}
	double_7 = double_3 * double_6;
	if(1)
	{
		char_2 = char_8 + char_6;
	}
	if(1)
	{
		int int_8 = 1;
		int_5 = int_8 * int_8;
	}
	if(1)
	{
		char_3 = char_3;
	}
	if(1)
	{
		char_7 = char_4 * char_1;
	}
	return double_3;
}
int v_rasqal_expression_evaluate_substr( char parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	float float_1 = 1;
	int int_5 = 1;
	double double_6 = 1;
	int int_7 = 1;
	double_1 = double_2;
	long_1 = long_2;
	short_1 = short_1 + short_1;
	double_2 = double_3;
	int_1 = v_rasqal_literal_as_integer(double_2,int_1);

	char_2 = char_1 + char_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	long_1 = long_3 * long_1;
	char_2 = v_rasqal_expression_evaluate2(short_1,char_1,int_2,-1 );

	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	double_3 = double_4 * double_5;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	char_2 = char_2 + char_2;
	if(1)
	{
		double_5 = double_2 * double_3;
	}
	int_2 = int_3 * int_4;
	if(1)
	{
		long_1 = v_rasqal_literal_as_counted_string(long_2,unsigned_int_1,int_4,int_4);

		double_5 = double_2 + double_1;
	}
	short_1 = short_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
	}
	if(1)
	{
		long long_4 = 1;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
		long_4 = long_1 * long_3;
		if(1)
		{
			double_3 = v_rasqal_new_string_literal(short_3,double_2,float_1,int_1,short_3);

			int_3 = int_5 * int_5;
		}
	}
	double_5 = double_6 + double_1;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_3 + int_6;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
		unsigned_int_1 = unsigned_int_5;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_1 * unsigned_int_1;
		}
		double_2 = double_5;
	}
	short_3 = short_3 * short_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	double_6 = double_2 * double_2;
	int_1 = int_4;
	if(1)
	{
		int_5 = int_5 + int_7;
	}
	if(1)
	{
		int_1 = int_1 + int_4;
	}
	if(1)
	{
		char char_3 = 1;
		v_rasqal_free_literal(long_1);

		char_3 = char_2 * char_1;
	}
	if(1)
	{
		int_7 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		unsigned_int_1 = unsigned_int_8 * unsigned_int_9;
	}
	return int_5;
}
void v_rasqal_expression_evaluate_encode_for_uri( unsigned int parameter_1,long parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short_3 = short_1 + short_2;
	double_2 = double_1 * double_1;
	double_3 = double_1 * double_2;
	int_2 = int_1 * int_1;
	double_5 = double_4 * double_4;
	float_1 = float_1 * float_1;
	char_1 = v_rasqal_expression_evaluate2(short_3,char_2,int_2,-1 );

	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 * long_1;
	long_2 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_1,float_1);

	float_2 = float_2;
	double_5 = v_rasqal_new_string_literal(short_1,double_2,float_1,int_3,short_3);

	char_1 = char_1;
	if(1)
	{
		char_2 = char_3;
	}
	long_1 = v_rasqal_literal_as_counted_string(long_1,unsigned_int_2,int_4,int_4);

	double_2 = double_2 + double_1;
	int_1 = int_4 + int_5;
	if(1)
	{
		short_1 = short_3;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		int_3 = int_1 * int_1;
	}
	double_4 = double_6 + double_1;
	if(1)
	{
		char_4 = char_4 + char_3;
	}
	double_3 = double_3 + double_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_1;
		if(1)
		{
			double_1 = double_6 + double_6;
		}
		if(1)
		{
			char_3 = char_3;
			v_rasqal_free_literal(long_1);

			int_1 = int_2 * int_3;
			float_1 = float_1;
			unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
			float_1 = float_2 + float_3;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
		}
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
	char_1 = char_3 + char_4;
	if(1)
	{
		char_1 = char_3 + char_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		float float_4 = 1;
		float_1 = float_3 + float_4;
	}
}
short v_rasqal_xsd_datetime_get_tz_as_counted_string( float parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		double double_2 = 1;
		short_1 = v_rasqal_xsd_timezone_format(long_1,char_1,char_1,unsigned_int_2);

		double_1 = double_2 * double_1;
	}
	long_3 = long_2 + long_3;
	return short_1;
}
float v_rasqal_expression_evaluate_datetime_tz( short parameter_1,short parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_6 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	char_3 = char_1 + char_2;
	v_rasqal_free_literal(long_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_1;
	char_5 = char_4 + char_5;
	if(1)
	{
		double_2 = v_rasqal_new_string_literal(short_1,double_2,float_1,int_1,short_2);

		double_2 = double_1 * double_2;
	}
	if(1)
	{
		int int_2 = 1;
		int_4 = int_2 * int_3;
	}
	short_3 = short_2 * short_2;
	if(1)
	{
		short_3 = v_rasqal_xsd_datetime_get_tz_as_counted_string(float_1,double_1);

		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	int_1 = int_4 + int_4;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		char_6 = v_rasqal_expression_evaluate2(short_4,char_4,int_3,-1 );

		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	}
	return float_2;
}
short v_rasqal_xsd_datetime_get_timezone_as_counted_string( char parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 * short_1;
	int_1 = int_1 * int_2;
	return short_1;
}
void v_rasqal_expression_evaluate_datetime_timezone( short parameter_1,long parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	float_2 = float_1 + float_2;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2;
	short_2 = short_1 * short_1;
	if(1)
	{
		short_1 = short_3;
	}
	if(1)
	{
		long long_3 = 1;
		double_1 = v_rasqal_new_string_literal(short_1,double_2,float_3,int_2,short_3);

		long_2 = long_3 * long_3;
	}
	float_1 = float_4 + float_2;
	if(1)
	{
		float float_5 = 1;
		float_5 = float_1 + float_2;
	}
	char_1 = v_rasqal_expression_evaluate2(short_2,char_2,int_2,-1 );

	double_4 = double_2 * double_3;
	if(1)
	{
		float float_6 = 1;
		float float_7 = 1;
		float_7 = float_2 + float_6;
	}
	short_1 = v_rasqal_xsd_datetime_get_timezone_as_counted_string(char_2,unsigned_int_1);

	int_4 = int_3 * int_1;
	if(1)
	{
		v_rasqal_free_literal(long_4);

		long_1 = long_1 * long_4;
	}
	if(1)
	{
		int_3 = int_1;
	}
	if(1)
	{
		char_1 = char_2;
	}
}
void v_rasqal_literals_sparql11_compatible( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	long long_3 = 1;
	float float_2 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	double_3 = double_1 + double_2;
	short_3 = short_1 * short_2;
	short_1 = short_3;
	double_1 = double_2 + double_1;
	float_1 = float_1 + float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		long_3 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_4,float_2);

		double_3 = double_3 + double_3;
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
}
float v_rasqal_expression_evaluate_str_prefix_suffix( float parameter_1,char parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	double double_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	float float_2 = 1;
	long_2 = long_1 * long_1;
	v_rasqal_literals_sparql11_compatible(int_1,long_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2 + int_3;
	char_1 = v_rasqal_new_boolean_literal(short_1,int_1);

	short_1 = short_1 * short_2;
	int_3 = int_4 + int_3;
	int_1 = int_5 + int_2;
	short_2 = short_3 + short_4;
	float_1 = float_1 + float_1;
	v_rasqal_free_literal(long_3);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char_1 = char_2 + char_3;
	}
	double_1 = double_1 * double_2;
	if(1)
	{
		char_1 = char_3 * char_3;
	}
	if(1)
	{
		long_4 = long_4;
	}
	double_3 = double_2 * double_2;
	if(1)
	{
		short_3 = short_1 * short_1;
	}
	int_2 = int_6 * int_3;
	if(1)
	{
		char char_4 = 1;
		char_2 = v_rasqal_expression_evaluate2(short_4,char_2,int_7,-1 );

		char_1 = char_4 * char_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			long_4 = v_rasqal_literal_as_counted_string(long_2,unsigned_int_1,int_8,int_9);

			float_1 = float_1 + float_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
	}
	double_2 = double_2 * double_3;
	int_4 = int_10;
	if(1)
	{
		int_3 = int_8;
	}
	if(1)
	{
		int_9 = int_10 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return float_2;
}
short v_rasqal_expression_evaluate_set_case( int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_6 = 1;
	short short_3 = 1;
	double double_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_7 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_3 = 1;
	int_2 = int_1 * int_1;
	long_3 = long_1 + long_2;
	char_1 = char_1 + char_1;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_2;
	long_3 = long_1 + long_3;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int_4 = int_3 + int_3;
	}
	long_1 = v_rasqal_literal_as_counted_string(long_3,unsigned_int_1,int_2,int_1);

	int_3 = int_3 * int_4;
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	double_3 = double_1 + double_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	if(1)
	{
		int_1 = int_4 * int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_5 = 1;
			int_3 = int_4 + int_5;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_2;
			}
			int_5 = int_4 * int_6;
		}
	}
	if(1)
	{
		int_4 = int_1 + int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_4 = 1;
			short_3 = short_1;
			if(1)
			{
				char_2 = char_2;
			}
			double_3 = double_4 * double_5;
		}
	}
	char_4 = char_1 + char_3;
	if(1)
	{
		int_1 = int_3 * int_7;
		double_2 = double_5 + double_6;
		if(1)
		{
			double_2 = double_5 * double_1;
		}
		int_3 = int_2 + int_6;
	}
	short_1 = short_3;
	if(1)
	{
		v_rasqal_free_literal(long_2);

		int_4 = int_4 * int_1;
	}
	double_7 = v_rasqal_new_string_literal(short_1,double_6,float_3,int_1,short_2);

	int_2 = int_7 + int_7;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_4;
	}
	if(1)
	{
		long long_4 = 1;
		long_4 = long_4 * long_3;
	}
	if(1)
	{
		char char_5 = 1;
		char_5 = char_4 + char_4;
	}
	if(1)
	{
		char_2 = v_rasqal_expression_evaluate2(short_2,char_4,int_3,-1 );

		double_7 = double_2 + double_3;
	}
	return short_1;
}
short v_rasqal_expression_evaluate_strlen( long parameter_1,long parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_3 = 1;
	short short_3 = 1;
	float_2 = float_1 + float_2;
	double_2 = double_1 * double_1;
	long_1 = v_rasqal_literal_as_string_flags(int_1,int_2,int_3);

	int_3 = int_2 * int_4;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_rasqal_expression_evaluate2(short_1,char_2,int_4,-1 );

	float_1 = v_rasqal_new_numeric_literal_from_long(double_2,short_2,long_1);

	long_2 = long_1;
	if(1)
	{
		int_1 = int_3 * int_5;
	}
	int_6 = int_7;
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		float_1 = float_2 + float_1;
	}
	if(1)
	{
		long_3 = long_1 + long_3;
	}
	double_1 = double_2 * double_1;
	v_rasqal_free_literal(long_3);

	long_3 = long_1 * long_2;
	if(1)
	{
		int_2 = int_5 * int_4;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2 + char_3;
	}
	return short_3;
}
int v_rasqal_random_irand( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_4 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short_2 = short_1 * short_1;
	float_2 = float_1 + float_2;
	long_1 = long_1 * long_2;
	double_2 = double_1 + double_1;
	char_1 = char_2;
	double_1 = double_1 * double_1;
	char_2 = char_1 * char_2;
	char_3 = char_2 * char_3;
	int_1 = int_1 + int_1;
	short_2 = short_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_2 + float_2;
	long_2 = long_2 * long_1;
	short_1 = short_2 * short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2 * int_1;
	char_4 = char_4;
	double_3 = double_1 + double_3;
	float_1 = float_1 + float_2;
	int_4 = int_3 + int_1;
	return int_5;
}
double v_rasqal_random_drand( double parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int_1 = v_rasqal_random_irand(float_1);

	long_1 = long_1 * long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
}
int v_rasqal_expression_evaluate_rand( char parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = v_rasqal_random_drand(double_2);

	double_3 = double_1;
	short_1 = short_1;
	float_1 = v_rasqal_new_double_literal(short_2,double_3);

	int_3 = int_1 * int_2;
	return int_1;
}
int v_rasqal_xsd_datetime_set_from_unixtime( long parameter_1,long parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_rasqal_xsd_datetime_set_from_timeval(float_1,float_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_1 + int_1;
	double_2 = double_1 * double_1;
	return int_1;
}
int v_rasqal_new_xsd_datetime_from_unixtime( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_2;
	int_1 = int_2;
	if(1)
	{
	}
	int_2 = v_rasqal_xsd_datetime_set_from_unixtime(long_1,long_2);

	double_1 = double_1;
	if(1)
	{
		short short_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short_1 = short_1 + short_1;
		int_3 = int_4;
	}
	return int_2;
	v_rasqal_free_xsd_datetime(float_1);

}
long v_rasqal_expression_evaluate_from_unixtime( float parameter_1,short parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_6 = 1;
	long_2 = long_1 + long_2;
	int_1 = v_rasqal_new_xsd_datetime_from_unixtime(int_1,float_1);

	double_1 = double_1;
	short_1 = short_1 + short_1;
	int_1 = int_2 + int_2;
	v_rasqal_free_literal(long_2);

	char_1 = char_1 * char_2;
	if(1)
	{
		short_1 = short_1 + short_2;
	}
	char_2 = v_rasqal_expression_evaluate2(short_2,char_3,int_1,-1 );

	int_3 = v_rasqal_literal_as_integer(double_2,int_3);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_4 = char_2 + char_2;
	char_1 = v_rasqal_new_datetime_literal_from_datetime(short_3,unsigned_int_1);

	long_2 = long_2 + long_3;
	if(1)
	{
		float_1 = float_1 * float_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 + double_2;
	}
	if(1)
	{
		int_1 = int_3 * int_2;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		long_5 = long_4 * long_5;
	}
	return long_6;
}
float v_rasqal_new_numeric_literal_from_long( double parameter_1,short parameter_2,long parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	float float_4 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = v_rasqal_xsd_decimal_set_long(float_1,long_1);

	int_2 = int_1 * int_1;
	double_1 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "E") < 0)
	{
	}
	int_2 = int_1 + int_1;
	float_3 = v_rasqal_new_xsd_decimal(double_2);

	long_1 = long_1;
	double_1 = v_rasqal_new_integer_literal(long_1,float_4,int_1);

	long_2 = v_rasqal_new_decimal_literal_from_decimal(float_3,unsigned_int_1,double_1);

	short_1 = short_1 + short_2;
	return float_2;
	char_1 = v_rasqal_xsd_decimal_as_counted_string(float_3,char_2);

}
double v_rasqal_expression_evaluate_to_unixtime( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	double_1 = double_1;
	double_3 = double_2 * double_3;
	float_1 = float_1 + float_1;
	int_1 = int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		float_1 = v_rasqal_new_numeric_literal_from_long(double_1,short_1,long_1);

		int_3 = int_3 + int_1;
	}
	int_2 = int_1 + int_3;
	float_1 = v_rasqal_xsd_datetime_get_as_unixtime(-1 );

	short_1 = short_1 + short_1;
	double_3 = double_2 + double_2;
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		double double_4 = 1;
		double_2 = double_4 + double_3;
	}
	if(1)
	{
		char_1 = v_rasqal_expression_evaluate2(short_2,char_1,int_1,-1 );

		v_rasqal_free_literal(long_1);

		int_3 = int_2 + int_1;
	}
	return double_1;
}
int v_rasqal_xsd_datetime_set_from_timeval( float parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_3 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		int_4 = int_3 * int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		short short_1 = 1;
		int_5 = int_5 + int_4;
		if(1)
		{
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_3 = 1;
			double_2 = double_1 * double_1;
			char_2 = char_1 * char_2;
			if(1)
			{
			}
			int_5 = int_1;
			long_1 = long_3 + long_1;
		}
		int_4 = int_3;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			if(1)
			{
			}
			float_3 = float_1 * float_2;
		}
		short_1 = short_1 * short_1;
		int_1 = int_1;
		if(1)
		{
			short_1 = short_1 + short_1;
		}
	}
	double_3 = double_1;
	return int_4;
}
int v_rasqal_new_xsd_datetime_from_timeval( double parameter_1,double parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int_1 = v_rasqal_xsd_datetime_set_from_timeval(float_1,float_1);

	char_1 = char_1 + char_1;
	double_1 = double_2;
	int_1 = int_2;
	if(1)
	{
	}
	double_3 = double_3 + double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		v_rasqal_free_xsd_datetime(float_1);

		double_3 = double_2;
	}
	return int_3;
}
void v_rasqal_world_get_now_timeval( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 + short_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
		}
		float_3 = float_1 + float_2;
	}
}
short v_rasqal_expression_evaluate_now( float parameter_1,long parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char_1 = char_1 * char_2;
	char_2 = char_3 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_rasqal_world_get_now_timeval(double_1);

	char_2 = v_rasqal_new_datetime_literal_from_datetime(short_1,unsigned_int_1);

	int_1 = int_1 * int_2;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_2 * short_3;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		float float_1 = 1;
		int_3 = v_rasqal_new_xsd_datetime_from_timeval(double_1,double_2);

		float_1 = float_1 + float_1;
	}
	return short_1;
}
int v_rasqal_xsd_decimal_set_long( float parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 + char_2;
	v_rasqal_xsd_decimal_clear_string(unsigned_int_1);

	float_1 = float_1 * float_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	short_1 = short_1 + short_2;
	int_1 = int_1 + int_2;
	return int_1;
}
char v_rasqal_xsd_datetime_get_seconds_as_decimal( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double_1 = double_2;
	int_1 = v_rasqal_xsd_decimal_set_long(float_1,long_1);

	long_2 = long_2 * long_3;
	if(1)
	{
	}
	if(1)
	{
		int_2 = v_rasqal_xsd_decimal_set_string(unsigned_int_1,long_2);

		double_3 = double_3 * double_3;
	}
	if(1)
	{
		float float_2 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		float_1 = float_2;
		float_1 = v_rasqal_new_xsd_decimal(double_4);

		double_3 = double_4 * double_5;
	}
	return char_1;
}
long v_rasqal_expression_evaluate_datetime_part( double parameter_1,float parameter_2,int parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	long long_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_6 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_2;
	float_3 = float_1 * float_2;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_2 * float_4;
	}
	if(1)
	{
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
		int_3 = int_3 * int_3;
		char_2 = v_rasqal_expression_evaluate2(short_1,char_1,int_4,-1 );

		long_4 = long_3 + long_3;
		v_rasqal_free_literal(long_3);

		long_3 = long_1;
		if(1)
		{
			int_3 = int_3 * int_4;
			if(1)
			{
				int int_5 = 1;
				int_5 = int_4 + int_4;
			}
		}
		if(1)
		{
			double_1 = v_rasqal_new_integer_literal(long_1,float_2,int_3);

			long_3 = long_5;
		}
	}
	if(1)
	{
		float_5 = float_3 + float_1;
	}
	if(1)
	{
		float_5 = float_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		long_4 = long_1 * long_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4;
	}
	if(1)
	{
		long_4 = long_4;
	}
	if(1)
	{
		long_3 = v_rasqal_new_decimal_literal_from_decimal(float_1,unsigned_int_4,double_1);

		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	}
	char_1 = v_rasqal_xsd_datetime_get_seconds_as_decimal(float_2,char_3);

	double_1 = double_2 * double_3;
	if(1)
	{
		v_rasqal_free_xsd_decimal(char_2);

		long_1 = long_5 + long_5;
	}
	return long_6;
}
unsigned int v_rasqal_expression_evaluate_in_set( char parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = v_rasqal_expression_evaluate2(short_1,char_2,int_1,-1 );

	double_1 = double_1 + double_1;
	char_5 = char_3 * char_4;
	int_1 = v_rasqal_literal_equals_flags(int_2,short_1,int_1,int_1,-1 );

	long_1 = long_1;
	int_2 = int_1 + int_1;
	long_2 = long_2 * long_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_3 = 1;
		long long_4 = 1;
		int int_3 = 1;
		double double_2 = 1;
		float float_1 = 1;
		int int_4 = 1;
		v_rasqal_free_literal(long_1);

		long_4 = long_3 * long_3;
		short_2 = short_2 + short_1;
		int_3 = int_1;
		double_2 = double_1 + double_2;
		if(1)
		{
			double_3 = double_3 + double_1;
		}
		float_1 = float_1;
		if(1)
		{
			int_1 = int_4 + int_2;
		}
		if(1)
		{
			int_5 = int_5 * int_4;
		}
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
			int_1 = int_4 + int_2;
		}
		if(1)
		{
			long_3 = long_3 + long_2;
		}
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		double_3 = double_3 * double_3;
	}
	if(1)
	{
		int_5 = int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	}
	return unsigned_int_1;
	char_5 = v_rasqal_new_boolean_literal(short_2,int_1);

}
float v_rasqal_world_default_generate_bnodeid_handler(short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_2;
	short_1 = short_1;
	char_3 = char_1 + char_2;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	char_1 = char_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_2 = double_2 + double_1;
	if(1)
	{
		char char_4 = 1;
		char_1 = char_4 * char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_3 * int_1;
	}
	if(1)
	{
		int_1 = int_3 * int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	}
	return float_1;
}
short v_rasqal_world_generate_bnodeid( float parameter_1,float parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	float_1 = v_rasqal_world_default_generate_bnodeid_handler(short_2);

}
short v_rasqal_expression_evaluate_bnode_constructor( int parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	short short_3 = 1;
	char_1 = v_rasqal_expression_evaluate2(short_1,char_1,int_1,-1 );

	double_2 = double_1 * double_1;
	short_2 = v_rasqal_world_generate_bnodeid(float_1,float_1);

	float_2 = float_2;
	double_3 = double_2 + double_3;
	if(1)
	{
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		v_rasqal_free_literal(long_1);

		long_3 = long_2 + long_2;
		long_2 = v_rasqal_literal_as_counted_string(long_4,unsigned_int_1,int_1,int_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		long_3 = long_4;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3;
		}
		long_4 = long_3 * long_1;
		if(1)
		{
			float float_3 = 1;
			float_4 = float_1 * float_3;
		}
		long_3 = long_4 * long_3;
		if(1)
		{
			char char_2 = 1;
			char_3 = char_1 * char_2;
		}
		v_rasqal_new_simple_literal(short_2,unsigned_int_2,char_3);

		double_1 = double_1 * double_1;
		float_5 = float_1 + float_4;
	}
	if(1)
	{
		int_2 = int_2 * int_2;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_1 * double_2;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_2 = int_1 * int_3;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_4 * int_5;
	}
	return short_3;
}
unsigned int v_rasqal_literal_as_uri( unsigned int parameter_1)
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
	}
	return unsigned_int_2;
}
int v_rasqal_expression_evaluate_strdt( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_2 = 1;
	char char_6 = 1;
	double_1 = double_1 * double_2;
	v_rasqal_free_literal(long_1);

	char_1 = char_1;
	short_1 = short_1 + short_2;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		long_2 = v_rasqal_literal_as_string_flags(int_2,int_1,int_1);

		int_2 = int_2 + int_1;
	}
	if(1)
	{
		int_1 = int_2;
	}
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
		double_3 = double_1;
	}
	int_5 = int_3 + int_4;
	if(1)
	{
		int_3 = int_5 * int_4;
	}
	char_2 = char_2 * char_3;
	if(1)
	{
		unsigned_int_5 = unsigned_int_1;
	}
	if(1)
	{
		int_1 = int_6 * int_5;
		short_2 = short_1 * short_2;
		if(1)
		{
			char_2 = char_2;
		}
		double_1 = double_3 * double_4;
		if(1)
		{
			int int_7 = 1;
			int_7 = int_2 + int_1;
		}
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_6;
	if(1)
	{
		long_3 = long_2;
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	int_3 = int_1;
	unsigned_int_1 = v_rasqal_literal_as_uri(unsigned_int_5);

	double_4 = v_rasqal_new_string_literal(short_1,double_3,float_1,int_1,short_2);

	char_4 = char_5;
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		long_3 = v_rasqal_literal_as_counted_string(long_2,unsigned_int_2,int_6,int_6);

		short_4 = short_3 * short_3;
	}
	if(1)
	{
		double double_5 = 1;
		char_2 = v_rasqal_expression_evaluate2(short_1,char_6,int_6,-1 );

		double_4 = double_5;
	}
	if(1)
	{
		float_1 = float_2 + float_1;
	}
	return int_2;
}
float v_rasqal_expression_evaluate_strlang( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_4 = 1;
	int int_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	long_1 = long_1 * long_1;
	int_2 = int_1 * int_2;
	long_2 = long_1;
	double_1 = v_rasqal_new_string_literal(short_1,double_2,float_1,int_2,short_2);

	int_2 = int_1;
	long_2 = v_rasqal_literal_as_counted_string(long_2,unsigned_int_1,int_3,int_1);

	char_2 = char_1 + char_2;
	double_3 = double_2 + double_1;
	long_3 = long_1 * long_2;
	double_6 = double_4 + double_5;
	long_1 = long_1 * long_4;
	int_3 = int_4 + int_3;
	if(1)
	{
		double_7 = double_6 * double_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		v_rasqal_free_literal(long_4);

		long_3 = long_2;
	}
	float_2 = float_3;
	if(1)
	{
		double_3 = double_2 * double_4;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		double_6 = double_2 * double_2;
	}
	unsigned_int_3 = unsigned_int_5 + unsigned_int_3;
	if(1)
	{
		long_3 = long_2 + long_5;
	}
	int_3 = int_3;
	long_3 = long_5 * long_5;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	int_4 = int_2 + int_4;
	char_2 = char_1;
	double_3 = double_5;
	if(1)
	{
		double_1 = double_5 * double_1;
	}
	if(1)
	{
		double double_8 = 1;
		double_6 = double_8 + double_4;
	}
	if(1)
	{
		short_2 = short_2;
	}
	if(1)
	{
		double double_9 = 1;
		double_9 = double_7 * double_3;
	}
	return float_3;
	char_2 = v_rasqal_expression_evaluate2(short_1,char_2,int_2,-1 );

}
char v_rasqal_expression_evaluate_uri_constructor( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	int int_2 = 1;
	char char_4 = 1;
	double_3 = double_1 + double_2;
	char_1 = v_rasqal_expression_evaluate2(short_1,char_1,int_1,-1 );

	float_2 = float_1 * float_1;
	double_3 = double_3 + double_3;
	char_3 = char_2 * char_2;
	char_3 = char_1 * char_2;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_4 = 1;
		double_5 = double_3 * double_4;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	v_rasqal_free_literal(long_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_3 = double_5;
	if(1)
	{
		char_2 = char_2 * char_2;
	}
	if(1)
	{
		long long_2 = 1;
		long_2 = long_2 + long_1;
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		long_3 = v_rasqal_literal_as_string_flags(int_2,int_1,int_1);

		float_1 = float_3 + float_4;
	}
	return char_4;
	v_rasqal_new_uri_literal(unsigned_int_3,unsigned_int_1);

}
char v_rasqal_expression_evaluate_if( float parameter_1,double parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		double_3 = double_2 + double_2;
	}
	int_1 = v_rasqal_literal_as_boolean(long_1,int_1);

	double_3 = double_3 * double_1;
	char_3 = v_rasqal_expression_evaluate2(short_1,char_3,int_1,-1 );

	char_3 = char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		v_rasqal_free_literal(long_2);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	double_2 = double_4 + double_1;
	if(1)
	{
		long long_3 = 1;
		long_2 = long_1 * long_3;
	}
	return char_3;
}
char v_rasqal_expression_evaluate_coalesce( int parameter_1,long parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	float_2 = float_1 + float_1;
	char_1 = v_rasqal_expression_evaluate2(short_1,char_2,int_1,-1 );

	int_3 = int_2 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
		double_1 = double_1 * double_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			unsigned_int_1 = unsigned_int_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			double_1 = double_3 * double_3;
			if(1)
			{
			}
		}
	}
	return char_3;
}
char v_rasqal_expression_evaluate_concat( double parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_9 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_7 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_11 = 1;
	short short_5 = 1;
	int_1 = int_1;
	int_1 = int_1 * int_1;
	int_2 = v_rasqal_literal_print(short_1,unsigned_int_1);

	long_1 = long_1 + long_2;
	double_1 = double_1 * double_1;
	int_2 = int_1 * int_2;
	double_1 = double_2 * double_1;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	int_3 = int_3 * int_2;
	int_2 = int_4;
	short_1 = short_1;
	char_1 = char_1 * char_1;
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		int int_8 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_10 = 1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
		double_2 = double_1 * double_1;
		float_4 = float_1 + float_2;
		char_2 = char_2 * char_3;
		if(1)
		{
			char_3 = char_2 + char_3;
		}
		char_2 = char_1 + char_1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					int_5 = int_5 + int_2;
				}
			}
			int_5 = int_6;
			long_1 = long_1 + long_1;
		}
		if(1)
		{
			int int_7 = 1;
			int_8 = int_7 + int_7;
		}
		if(1)
		{
			int_3 = int_2 + int_2;
		}
		double_1 = double_1 + double_1;
		short_1 = short_1 + short_1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					float_1 = float_2 * float_3;
				}
				if(1)
				{
					if(1)
					{
						long_2 = v_rasqal_literal_as_string_flags(int_9,int_6,int_5);

						short_1 = short_2 + short_1;
						int_9 = int_5;
					}
					unsigned_int_4 = unsigned_int_1;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
				}
			}
		}
		if(1)
		{
			if(1)
			{
				double double_4 = 1;
				if(1)
				{
					long_2 = long_2 + long_2;
					unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
					if(1)
					{
						short_2 = short_3;
					}
					long_1 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_5,float_4);

					int_8 = int_4 + int_3;
					double_4 = double_2 + double_3;
				}
				if(1)
				{
					char controller_19[2];
					fgets(controller_19 ,2 ,stdin);
					if( strcmp( controller_19, "J") > 0)
					{
						unsigned_int_7 = unsigned_int_2 + unsigned_int_3;
					}
					if(1)
					{
						double_6 = double_5 * double_3;
						unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
						double_3 = double_4 * double_5;
					}
				}
				if(1)
				{
					long_2 = long_3 + long_2;
				}
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_4 = unsigned_int_5;
					int_8 = int_3 * int_9;
				}
				short_3 = short_2 * short_2;
			}
		}
		long_3 = long_3 * long_4;
		int_9 = int_8 * int_10;
		if(1)
		{
			char_2 = char_2 * char_1;
		}
		v_rasqal_free_literal(long_1);

		short_1 = short_4 + short_3;
	}
	double_3 = double_2;
	char_1 = char_1 + char_3;
	if(1)
	{
		unsigned_int_8 = unsigned_int_5 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_9;
	}
	long_5 = long_6;
	if(1)
	{
		unsigned_int_8 = unsigned_int_7 + unsigned_int_9;
	}
	double_7 = double_5;
	if(1)
	{
		double_6 = double_5 * double_1;
	}
	char_2 = char_4 + char_2;
	unsigned_int_3 = unsigned_int_6 + unsigned_int_6;
	if(1)
	{
		short_4 = short_2 * short_3;
	}
	if(1)
	{
		double double_8 = 1;
		double_3 = double_8 + double_7;
	}
	if(1)
	{
		double_6 = double_7;
	}
	if(1)
	{
		unsigned int unsigned_int_10 = 1;
		unsigned_int_10 = unsigned_int_10 * unsigned_int_9;
	}
	return char_5;
	char_1 = v_rasqal_expression_evaluate2(short_2,char_1,int_11,-1 );

	double_5 = v_rasqal_new_string_literal(short_5,double_1,float_4,int_9,short_1);

}
int v_rasqal_literal_same_term( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double_1 = double_1;
	v_rasqal_literal_uri_equals(float_1,char_1);

	short_1 = short_2;
	double_1 = v_rasqal_literal_string_equals_flags(short_1,unsigned_int_1,int_1,int_2);

	short_4 = short_3 * short_2;
	int_3 = int_1 + int_2;
	v_rasqal_literal_get_rdf_term_type();

	double_2 = double_1 + double_1;
	v_rasqal_literal_blank_equals(unsigned_int_2,double_2);

	int_1 = int_2 * int_3;
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
	return int_4;
}
unsigned int v_rasqal_expression_evaluate_sameterm( int parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_5 = 1;
	long long_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	char_1 = v_rasqal_new_boolean_literal(short_1,int_1);

	short_3 = short_2 * short_2;
	double_1 = double_1 * double_2;
	int_4 = int_3 + int_2;
	char_3 = char_1 * char_2;
	if(1)
	{
		v_rasqal_free_literal(long_1);

		char_2 = char_3 + char_3;
	}
	int_5 = int_1 * int_3;
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 * double_1;
	}
	int_1 = int_1 + int_2;
	long_1 = long_2;
	short_3 = short_1 + short_1;
	double_1 = double_1 * double_1;
	if(1)
	{
		int int_6 = 1;
		int_6 = int_2 * int_5;
	}
	if(1)
	{
		int_3 = v_rasqal_literal_same_term(long_1,char_4);

		short_3 = short_2 + short_2;
	}
	return unsigned_int_1;
	char_4 = v_rasqal_expression_evaluate2(short_2,char_2,int_3,-1 );

}
int v_rasqal_literal_cast( long parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	long long_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_2 = double_1 + double_2;
	double_1 = double_2 * double_2;
	int_1 = v_rasqal_xsd_datatype_check(short_1,char_1,int_1);

	short_1 = short_1 + short_1;
	double_3 = double_1 * double_1;
	double_2 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = v_rasqal_xsd_datatype_uri_to_type(double_1,unsigned_int_1);

	int_2 = int_1 * int_1;
	double_4 = v_rasqal_literal_value(int_2);

	int_2 = int_2;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	short_1 = short_1;
	float_1 = float_2 * float_1;
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		double double_6 = 1;
		char char_4 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_4 = 1;
		int int_4 = 1;
		char_1 = char_2;
		double_1 = v_rasqal_new_string_literal(short_1,double_1,float_3,int_3,short_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		char_1 = char_1 + char_3;
		if(1)
		{
			short_1 = short_2;
			if(1)
			{
				int_2 = int_2 + int_1;
			}
			double_4 = double_3;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_5 = double_2 + double_2;
		double_4 = double_1 * double_6;
		double_4 = double_6 + double_3;
		char_4 = char_4;
		double_4 = double_5 + double_7;
		double_6 = double_8 * double_8;
		double_4 = double_9 + double_8;
		long_2 = long_1 + long_2;
		if(1)
		{
			char char_5 = 1;
			char_5 = char_3 + char_1;
			if(1)
			{
				double_6 = double_5 + double_9;
			}
			long_1 = long_3 * long_4;
		}
		double_2 = double_3 + double_6;
		if(1)
		{
			int_4 = int_4 + int_1;
			if(1)
			{
				unsigned_int_3 = v_rasqal_xsd_datatype_label(int_5);

				int_5 = int_4;
			}
		}
		long_5 = long_2 + long_2;
		long_3 = long_1 * long_4;
		int_5 = int_5 * int_6;
		if(1)
		{
			if(1)
			{
				int_4 = int_1 + int_4;
				if(1)
				{
					int_1 = int_3 * int_2;
				}
			}
		}
		if(1)
		{
		}
	}
	v_rasqal_new_literal_from_literal(float_3);

	int_3 = int_2;
	if(1)
	{
		if(1)
		{
			double_3 = double_2 * double_5;
		}
		int_2 = int_3 + int_6;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			long long_6 = 1;
			long_6 = long_5;
		}
	}
	float_2 = float_3 * float_3;
	long_5 = long_3 + long_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	if(1)
	{
		if(1)
		{
			short_2 = short_2 + short_2;
		}
	}
	return int_1;
}
int v_rasqal_regex_match( double parameter_1,int parameter_2,int parameter_3,int parameter_4,float parameter_5,long parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_4 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_1 * double_1;
	short_1 = short_1 + short_1;
	short_1 = short_2 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_2;
	double_1 = double_2 + double_2;
	unsigned_int_3 = unsigned_int_2;
	int_1 = int_3 * int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_4 = short_3 + short_2;
		}
	}
	if(1)
	{
		v_rasqal_log_error_simple(unsigned_int_1,unsigned_int_2,double_1,unsigned_int_4,short_2);

		int_4 = int_5 + int_5;
	}
	v_rasqal_log_warning_simple(char_1,double_1,char_2,long_1,int_1);

	long_1 = long_1;
	if(1)
	{
		char char_3 = 1;
		long_3 = long_1 * long_2;
		char_3 = char_1 + char_1;
	}
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "d") > 0)
	{
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		if(1)
		{
			char_1 = char_2 * char_1;
		}
		if(1)
		{
			double_1 = double_2;
			long_1 = long_2 * long_2;
		}
		if(1)
		{
			int_2 = int_2;
		}
	}
	int_5 = int_4 * int_2;
	if(1)
	{
		double_2 = double_3 + double_2;
	}
	unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1;
		double_4 = double_3 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_8 = 1;
		unsigned_int_7 = unsigned_int_5 * unsigned_int_8;
		if(1)
		{
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
		if(1)
		{
			int_2 = int_5 + int_5;
			unsigned_int_7 = unsigned_int_1 + unsigned_int_6;
		}
		if(1)
		{
			double_1 = double_4 * double_3;
		}
	}
	int_3 = int_2 * int_3;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_9;
	long_3 = long_3 * long_4;
	return int_2;
}
short v_rasqal_expression_evaluate_strmatch( int parameter_1,short parameter_2,int parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_6 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double double_4 = 1;
	long long_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	float float_3 = 1;
	int int_8 = 1;
	short short_2 = 1;
	long_1 = long_1 * long_1;
	double_1 = double_1 * double_2;
	long_2 = long_1 * long_2;
	char_1 = v_rasqal_expression_evaluate2(short_1,char_2,int_1,-1 );

	int_3 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = v_rasqal_regex_match(double_1,int_4,int_5,int_3,float_1,long_1);

	double_2 = double_1 + double_3;
	unsigned_int_2 = unsigned_int_2;
	int_5 = int_4 + int_6;
	long_4 = long_2 + long_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		int int_7 = 1;
		int_4 = int_4 * int_7;
	}
	v_rasqal_free_literal(long_2);

	int_6 = int_4 + int_3;
	int_2 = int_6 + int_6;
	if(1)
	{
		char_1 = char_1;
		float_2 = float_2;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	double_4 = double_2 * double_4;
	if(1)
	{
		long_5 = long_5 * long_2;
		if(1)
		{
			long_2 = long_2;
			char_3 = char_2 * char_2;
		}
		if(1)
		{
			float_1 = float_1 + float_2;
			if(1)
			{
				long long_6 = 1;
				char char_5 = 1;
				long_6 = long_2 + long_2;
				char_5 = char_4 * char_5;
				float_1 = float_2 * float_1;
			}
			unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
	}
	double_1 = double_3 * double_3;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
		double double_5 = 1;
		double_4 = double_3 * double_5;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	long_5 = v_rasqal_literal_as_counted_string(long_4,unsigned_int_1,int_6,int_1);

	char_4 = char_4 * char_3;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned_int_8 = unsigned_int_4 * unsigned_int_7;
		if(1)
		{
			double double_7 = 1;
			double double_8 = 1;
			double_8 = double_6 * double_7;
		}
	}
	if(1)
	{
		double double_9 = 1;
		double_9 = double_6 + double_4;
	}
	float_3 = float_2 * float_2;
	if(1)
	{
		float float_4 = 1;
		char_3 = v_rasqal_new_boolean_literal(short_1,int_8);

		float_4 = float_1 + float_4;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	return short_2;
}
int v_rasqal_xsd_decimal_is_zero( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "T") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	return int_1;
}
int v_rasqal_xsd_decimal_divide( short parameter_1,float parameter_2,char parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int_1 = v_rasqal_xsd_decimal_is_zero(long_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		int int_2 = 1;
		int_1 = int_2;
	}
	unsigned_int_1 = unsigned_int_3;
	double_2 = double_1 + double_1;
	return int_3;
	v_rasqal_xsd_decimal_clear_string(unsigned_int_3);

}
long v_rasqal_literal_divide( float parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	float float_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	v_rasqal_literal_promote_numerics(double_1,int_1,int_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_3 * int_1;
	v_rasqal_free_xsd_decimal(char_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	short_1 = short_1 * short_1;
	int_4 = v_rasqal_new_numeric_literal(double_2,double_2,double_2);

	char_2 = char_3;
	short_3 = short_2 * short_2;
	float_1 = float_1 + float_1;
	short_1 = short_2 * short_2;
	short_3 = short_4 * short_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	short_5 = short_4 + short_2;
	if(1)
	{
		float_1 = float_2 * float_2;
	}
	if(1)
	{
		float_1 = v_rasqal_new_literal_from_promotion(unsigned_int_3,double_3,int_4,-1 );

		unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	}
	char_4 = char_4;
	if(1)
	{
		long_1 = v_rasqal_new_decimal_literal_from_decimal(float_2,unsigned_int_6,double_4);

		double_3 = double_2 + double_2;
	}
	int_5 = int_5 + int_1;
	double_3 = double_1 + double_3;
	double_5 = double_2 + double_3;
	float_2 = float_2 * float_3;
	double_1 = double_1 * double_2;
	if(1)
	{
		long_3 = long_1 + long_2;
	}
	if(1)
	{
		int int_6 = 1;
		double_3 = double_5 + double_1;
		if(1)
		{
			long long_4 = 1;
			int int_7 = 1;
			long_1 = long_4 + long_2;
			float_3 = v_rasqal_new_xsd_decimal(double_6);

			int_3 = int_6 * int_7;
		}
		if(1)
		{
			int_6 = int_5;
		}
	}
	double_7 = v_rasqal_literal_as_double(char_1,int_5);

	unsigned_int_5 = unsigned_int_2;
	short_6 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned_int_1 = unsigned_int_4 * unsigned_int_7;
		}
	}
	if(1)
	{
		double_5 = double_5;
	}
	if(1)
	{
		int_5 = v_rasqal_xsd_decimal_divide(short_1,float_1,char_1);

		char_1 = char_4;
	}
	return long_3;
	v_rasqal_free_literal(long_3);

}
int v_rasqal_xsd_decimal_multiply( long parameter_1,char parameter_2,long parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long_1 = long_1;
	double_1 = double_1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_2 = long_3;
	}
	char_2 = char_1 + char_2;
	v_rasqal_xsd_decimal_clear_string(unsigned_int_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
unsigned int v_rasqal_literal_multiply( long parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	double double_4 = 1;
	long long_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	double double_7 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	double_1 = double_2;
	char_2 = char_1 * char_1;
	long_3 = long_1 * long_2;
	long_3 = v_rasqal_new_decimal_literal_from_decimal(float_1,unsigned_int_1,double_1);

	double_3 = double_1 + double_1;
	int_2 = int_1 + int_2;
	float_3 = float_1 + float_2;
	int_3 = int_2;
	char_3 = char_2 + char_2;
	double_3 = v_rasqal_new_integer_literal(long_1,float_4,int_1);

	float_2 = v_rasqal_new_xsd_decimal(double_2);

	char_1 = char_3 + char_2;
	float_2 = float_1 + float_1;
	v_rasqal_free_xsd_decimal(char_3);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	float_1 = float_2 + float_1;
	char_1 = char_1;
	if(1)
	{
		double_2 = double_2 + double_2;
	}
	char_1 = char_1 + char_4;
	if(1)
	{
		double_2 = double_4 * double_4;
	}
	long_1 = long_3 * long_4;
	int_3 = int_4 * int_3;
	v_rasqal_literal_promote_numerics(double_4,int_2,int_1);

	short_2 = short_1 + short_1;
	if(1)
	{
		float float_5 = 1;
		float_3 = float_5;
	}
	int_1 = v_rasqal_literal_as_integer(double_5,int_2);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		double_6 = v_rasqal_literal_as_double(char_5,int_4);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	}
	int_4 = v_rasqal_xsd_decimal_multiply(long_4,char_2,long_2);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_4 = int_2 + int_2;
	double_3 = double_6 * double_7;
	if(1)
	{
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		char_6 = char_5 + char_2;
		if(1)
		{
			int_4 = int_1 + int_4;
			double_3 = double_1 * double_1;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
		}
	}
	float_3 = v_rasqal_new_literal_from_promotion(unsigned_int_6,double_1,int_5,-1 );

	unsigned_int_4 = unsigned_int_6 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_3;
	double_3 = double_5 + double_1;
	if(1)
	{
		char controller_10[2];
		fgets(controller_10 ,2 ,stdin);
		if( strcmp( controller_10, "f") > 0)
		{
			int_4 = v_rasqal_new_numeric_literal(double_3,double_7,double_3);

			char_6 = char_6 * char_1;
		}
	}
	if(1)
	{
		char_2 = char_4 + char_6;
	}
	if(1)
	{
		int int_6 = 1;
		v_rasqal_free_literal(long_2);

		int_6 = int_1 + int_2;
	}
	return unsigned_int_1;
}
int v_rasqal_xsd_decimal_subtract( char parameter_1,short parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_3 = float_1 * float_2;
	char_3 = char_1 * char_2;
	if(1)
	{
		int int_2 = 1;
		v_rasqal_xsd_decimal_clear_string(unsigned_int_1);

		int_2 = int_1 * int_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_1 * double_2;
	return int_1;
}
long v_rasqal_literal_subtract( int parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_5 = 1;
	short short_5 = 1;
	float float_3 = 1;
	double double_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_6 = 1;
	long long_6 = 1;
	double_1 = v_rasqal_literal_as_double(char_1,int_1);

	float_2 = float_1 + float_1;
	int_3 = int_1 * int_2;
	short_2 = short_1 * short_1;
	short_2 = short_1 * short_3;
	int_4 = int_3 * int_2;
	short_1 = short_3 + short_4;
	long_3 = long_1 + long_2;
	float_2 = float_2 * float_2;
	long_3 = v_rasqal_new_decimal_literal_from_decimal(float_1,unsigned_int_1,double_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = v_rasqal_new_literal_from_promotion(unsigned_int_1,double_1,int_2,-1 );

	double_2 = double_1 + double_1;
	int_3 = int_3 * int_4;
	double_4 = double_3 * double_3;
	int_1 = v_rasqal_xsd_decimal_subtract(char_1,short_3,float_1);

	v_rasqal_free_literal(long_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	long_3 = long_4 * long_1;
	if(1)
	{
		long_5 = long_1;
	}
	long_3 = long_1 + long_4;
	int_2 = v_rasqal_literal_as_integer(double_1,int_1);

	int_5 = int_1 + int_2;
	float_1 = v_rasqal_new_xsd_decimal(double_1);

	short_5 = short_5 + short_2;
	if(1)
	{
		int_4 = int_2;
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		float_2 = float_3 * float_2;
	}
	double_2 = double_1 * double_4;
	v_rasqal_literal_promote_numerics(double_2,int_2,int_3);

	float_3 = float_3 + float_1;
	double_3 = double_2 * double_5;
	if(1)
	{
		float_3 = float_2 * float_1;
	}
	if(1)
	{
		float_4 = float_2 + float_4;
		if(1)
		{
			float_3 = float_4 * float_5;
			double_4 = double_5 + double_1;
		}
		if(1)
		{
			v_rasqal_free_xsd_decimal(char_2);

			char_4 = char_1 * char_3;
		}
	}
	int_5 = v_rasqal_new_numeric_literal(double_5,double_2,double_3);

	char_4 = char_5 * char_3;
	double_4 = double_6 * double_3;
	char_3 = char_2;
	if(1)
	{
		if(1)
		{
			int_3 = int_1 * int_2;
		}
	}
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		float_2 = float_4 + float_4;
	}
	return long_6;
	double_5 = v_rasqal_new_integer_literal(long_5,float_5,int_2);

}
int v_rasqal_xsd_decimal_add( unsigned int parameter_1,unsigned int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	float_2 = float_1 + float_2;
	float_1 = float_2 * float_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	v_rasqal_xsd_decimal_clear_string(unsigned_int_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_4 = double_5;
	return int_1;
}
void v_rasqal_literal_add( long parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_4 = 1;
	long long_7 = 1;
	char char_5 = 1;
	float float_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_10 = 1;
	char char_7 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = v_rasqal_literal_as_double(char_1,int_1);

	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	int_2 = v_rasqal_literal_as_integer(double_1,int_2);

	int_2 = int_1;
	double_3 = v_rasqal_new_integer_literal(long_1,float_1,int_1);

	double_4 = double_4;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	long_2 = long_2 + long_2;
	long_3 = long_3 + long_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	double_5 = double_2;
	int_2 = int_2;
	int_2 = v_rasqal_xsd_decimal_add(unsigned_int_6,unsigned_int_4,short_1);

	long_2 = v_rasqal_new_decimal_literal_from_decimal(float_1,unsigned_int_3,double_4);

	long_2 = long_3 + long_1;
	if(1)
	{
		char_3 = char_2 + char_2;
	}
	double_5 = double_4 * double_3;
	if(1)
	{
		long_5 = long_1 * long_4;
	}
	long_1 = long_6 + long_4;
	unsigned_int_2 = unsigned_int_6 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_7;
	if(1)
	{
		int_1 = int_3 * int_4;
	}
	long_5 = long_5 + long_4;
	if(1)
	{
		int_4 = int_1 * int_3;
	}
	int_4 = v_rasqal_new_numeric_literal(double_2,double_4,double_5);

	char_4 = char_3 + char_1;
	long_7 = long_1 * long_3;
	unsigned_int_2 = unsigned_int_7 * unsigned_int_2;
	if(1)
	{
		char_5 = char_4 + char_2;
	}
	if(1)
	{
		v_rasqal_free_literal(long_7);

		int_2 = int_1 * int_2;
		if(1)
		{
			float_2 = v_rasqal_new_xsd_decimal(double_2);

			double_4 = double_3 * double_5;
			v_rasqal_literal_promote_numerics(double_3,int_5,int_6);

			long_6 = long_2 * long_7;
		}
		if(1)
		{
			char_6 = char_5 + char_4;
		}
	}
	unsigned_int_1 = unsigned_int_7 + unsigned_int_8;
	unsigned_int_8 = unsigned_int_9;
	float_3 = v_rasqal_new_literal_from_promotion(unsigned_int_7,double_6,int_5,-1 );

	unsigned_int_2 = unsigned_int_7 + unsigned_int_10;
	if(1)
	{
		if(1)
		{
			char_6 = char_1 + char_6;
		}
	}
	if(1)
	{
		float_3 = float_1;
	}
	if(1)
	{
		int int_7 = 1;
		v_rasqal_free_xsd_decimal(char_7);

		int_6 = int_1 * int_7;
	}
}
int v_rasqal_literal_is_numeric( float parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	int_1 = v_rasqal_xsd_datatype_is_numeric(short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1;
	short_1 = v_rasqal_xsd_datatype_parent_type(double_1);

	float_1 = float_2;
	return int_3;
}
double v_rasqal_expression_evaluate_istype( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_5 = 1;
	int_1 = v_rasqal_literal_is_numeric(float_1);

	double_1 = double_2;
	v_rasqal_free_literal(long_1);

	double_1 = double_2 * double_1;
	float_2 = float_2 * float_1;
	double_2 = double_1 * double_3;
	double_4 = double_5;
	int_2 = int_2 * int_2;
	if(1)
	{
		double_5 = double_6 * double_6;
	}
	short_2 = short_1 + short_2;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 * char_1;
		int_1 = int_1 * int_2;
		char_3 = v_rasqal_expression_evaluate2(short_1,char_1,int_1,-1 );

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			unsigned_int_1 = v_rasqal_literal_as_variable(long_2);

			int_2 = int_1 + int_3;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		char char_4 = 1;
		char_3 = char_4 + char_4;
	}
	if(1)
	{
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		v_rasqal_literal_get_rdf_term_type();

		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_2 = int_4;
	}
	if(1)
	{
		char_5 = v_rasqal_new_boolean_literal(short_2,int_3);

		double_5 = double_6 + double_5;
	}
	if(1)
	{
		short_1 = short_2;
	}
	return double_1;
}
char v_rasqal_expression_evaluate_datatype( double parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_4 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int_1 = int_1 + int_1;
	v_rasqal_free_literal(long_1);

	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_1;
	v_rasqal_new_uri_literal(unsigned_int_2,unsigned_int_1);

	char_2 = char_1 * char_2;
	char_3 = char_3;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_3;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		double double_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		double_4 = double_2 * double_3;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_6;
		long_1 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_1,float_1);

		double_2 = double_4 * double_5;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
		}
	}
	if(1)
	{
		double double_6 = 1;
		double_1 = double_2 * double_6;
	}
	if(1)
	{
		char char_4 = 1;
		char_6 = char_4 + char_5;
	}
	long_4 = long_1 * long_4;
	if(1)
	{
		v_rasqal_literal_get_rdf_term_type();

		double_1 = double_4 * double_2;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	int_2 = int_2 * int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_6;
	}
	if(1)
	{
		long long_5 = 1;
		char_6 = v_rasqal_expression_evaluate2(short_1,char_5,int_1,-1 );

		long_1 = long_5 + long_4;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_1 = v_rasqal_literal_as_variable(long_3);

		unsigned_int_1 = unsigned_int_6 * unsigned_int_7;
	}
	return char_1;
}
int v_rasqal_language_matches( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	double_2 = double_2 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 * short_1;
		}
		if(1)
		{
		}
	}
	return int_1;
}
float v_rasqal_expression_evaluate_langmatches( double parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short_1 = short_1 * short_1;
	float_1 = float_1;
	double_1 = double_1 * double_1;
	float_1 = float_2 + float_3;
	v_rasqal_free_literal(long_1);

	int_2 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		char_2 = char_1 * char_1;
	}
	short_1 = short_1 + short_2;
	if(1)
	{
		long long_3 = 1;
		char_1 = v_rasqal_new_boolean_literal(short_2,int_1);

		long_3 = long_1 * long_2;
	}
	short_2 = short_2 + short_2;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		int_3 = int_2;
	}
	float_3 = float_1 * float_3;
	double_2 = double_2 + double_1;
	char_2 = v_rasqal_expression_evaluate2(short_2,char_2,int_3,-1 );

	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		short short_3 = 1;
		short_2 = short_3;
	}
	if(1)
	{
		long long_4 = 1;
		long_2 = v_rasqal_literal_as_string_flags(int_2,int_1,int_1);

		int_2 = v_rasqal_language_matches(float_1,long_1);

		long_1 = long_1 + long_4;
	}
	if(1)
	{
		float float_4 = 1;
		float_3 = float_1 + float_4;
	}
	return float_1;
}
float v_rasqal_expression_evaluate_lang( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	float float_2 = 1;
	int_1 = int_2;
	char_1 = v_rasqal_expression_evaluate2(short_1,char_2,int_2,-1 );

	long_1 = long_1 + long_1;
	float_1 = float_1 * float_1;
	long_3 = long_1 + long_2;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long_1 = long_3 * long_3;
	}
	double_1 = v_rasqal_new_string_literal(short_1,double_1,float_1,int_3,short_1);

	double_3 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		v_rasqal_literal_get_rdf_term_type();

		int_4 = int_2 + int_3;
		double_1 = double_3;
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
		}
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 + unsigned_int_6;
	}
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		short short_2 = 1;
		unsigned_int_4 = v_rasqal_literal_as_variable(long_3);

		long_5 = long_4 * long_4;
		short_2 = short_2 * short_2;
		if(1)
		{
			double double_4 = 1;
			double_4 = double_2;
		}
		double_1 = double_5 + double_2;
	}
	if(1)
	{
		char char_4 = 1;
		double_5 = double_3 + double_5;
		if(1)
		{
			short short_3 = 1;
			short short_4 = 1;
			short_4 = short_3 + short_3;
		}
		char_4 = char_1;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		v_rasqal_free_literal(long_1);

		unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
	}
	return float_2;
}
int v_rasqal_expression_evaluate_str( unsigned int parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	double double_4 = 1;
	short short_4 = 1;
	char char_2 = 1;
	short short_5 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_2;
	char_1 = char_1;
	v_rasqal_free_literal(long_1);

	long_2 = long_1 * long_1;
	int_3 = int_4;
	double_1 = double_1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	float_2 = float_2 + float_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		double double_3 = 1;
		long_3 = v_rasqal_literal_as_counted_string(long_4,unsigned_int_4,int_5,int_3);

		double_3 = double_2 * double_3;
	}
	long_4 = long_4;
	int_1 = int_3 + int_2;
	if(1)
	{
		double double_5 = 1;
		double double_6 = 1;
		double_4 = v_rasqal_new_string_literal(short_4,double_2,float_1,int_3,short_4);

		double_6 = double_5 + double_5;
	}
	if(1)
	{
		char_2 = v_rasqal_expression_evaluate2(short_5,char_3,int_2,-1 );

		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		int int_6 = 1;
		int_1 = int_4 + int_6;
	}
	return int_1;
}
char v_rasqal_expression_evaluate_bound( float parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_1;
	char_2 = char_1 * char_2;
	short_3 = short_1 + short_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char_2 = v_rasqal_new_boolean_literal(short_3,int_1);

		double_1 = double_1 + double_2;
	}
	int_3 = int_2 * int_1;
	if(1)
	{
		long long_3 = 1;
		long_2 = long_3 * long_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		float float_3 = 1;
		unsigned_int_3 = v_rasqal_literal_as_variable(long_2);

		float_3 = float_1 + float_3;
	}
	return char_2;
}
int v_rasqal_xsd_decimal_negate( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_rasqal_xsd_decimal_clear_string(unsigned_int_2);

	short_1 = short_1;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_1;
	return int_2;
}
int v_rasqal_new_decimal_literal( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	int_2 = int_1 * int_1;
	return int_3;
	long_1 = v_rasqal_new_decimal_literal_from_decimal(float_1,unsigned_int_1,double_1);

}
int v_rasqal_new_numeric_literal( double parameter_1,double parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	double_1 = v_rasqal_new_integer_literal(long_1,float_1,int_1);

	int_2 = v_rasqal_new_decimal_literal(unsigned_int_2,short_1);

	double_3 = double_2 * double_3;
	char_1 = v_rasqal_new_floating_literal(int_2,float_1,double_4);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	return int_3;
}
double v_rasqal_literal_negate( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	long long_4 = 1;
	int int_4 = 1;
	long long_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double_1 = v_rasqal_new_integer_literal(long_1,float_1,int_1);

	float_1 = v_rasqal_new_xsd_decimal(double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_2;
	int_2 = int_1 + int_1;
	int_3 = v_rasqal_xsd_decimal_negate(double_2,int_2);

	long_2 = long_1;
	int_1 = v_rasqal_new_numeric_literal(double_3,double_4,double_2);

	long_1 = long_1 * long_3;
	long_3 = long_3 + long_3;
	float_3 = float_1 * float_2;
	if(1)
	{
		v_rasqal_free_xsd_decimal(char_2);

		short_1 = short_1 + short_1;
	}
	int_2 = int_3;
	double_4 = v_rasqal_literal_as_double(char_3,int_3);

	short_1 = short_1 + short_2;
	double_2 = double_1 + double_4;
	int_3 = int_1 + int_3;
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	unsigned_int_1 = unsigned_int_2;
	int_1 = v_rasqal_literal_as_integer(double_1,int_1);

	double_2 = double_5 + double_4;
	long_1 = long_2 + long_4;
	int_4 = int_2 + int_3;
	if(1)
	{
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		long_5 = v_rasqal_new_decimal_literal_from_decimal(float_3,unsigned_int_1,double_6);

		double_7 = double_6 * double_5;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		int_3 = int_3 + int_2;
	}
	short_4 = short_2 + short_3;
	short_2 = short_5 + short_4;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	if(1)
	{
		if(1)
		{
			double_2 = double_3 + double_3;
		}
	}
	return double_1;
}
int v_rasqal_xsd_decimal_compare( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int_1 = v_rasqal_double_approximately_compare(double_1,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return int_2;
}
int v_rasqal_literal_string_datatypes_compare( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		int_1 = int_2 * int_1;
	}
	return int_2;
}
void v_rasqal_literal_string_compare( float parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_rasqal_strcasecmp(long_1,float_1);

	short_1 = short_1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		int_2 = v_rasqal_literal_string_datatypes_compare(short_2,char_1);

		long_3 = long_1 * long_2;
	}
	if(1)
	{
		int_2 = v_rasqal_literal_string_languages_compare(long_4,unsigned_int_1);

		int_2 = int_1 + int_1;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "[2") == 0)
	{
	}
	double_1 = double_1 + double_2;
	if(1)
	{
	}
}
void v_rasqal_literal_rdql_promote_calculate( unsigned int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 + double_2;
	float_2 = float_1 * float_1;
	float_3 = float_3 + float_4;
	unsigned_int_2 = unsigned_int_1;
	float_5 = float_5 + float_4;
	long_1 = long_2 * long_2;
	double_2 = double_3 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_7 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char_2 = char_1 + char_1;
		float_6 = float_7;
		double_3 = double_1;
		double_2 = double_2 * double_3;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_1 = char_2 + char_2;
		double_4 = double_2;
		short_1 = short_1 * short_2;
		double_6 = double_5 + double_3;
		int_1 = int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_1 + int_3;
		if(1)
		{
			float_2 = float_6;
		}
		if(1)
		{
			int_2 = int_4 + int_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
}
double v_rasqal_literal_value( int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
int v_rasqal_literal_compare( float parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	char char_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	int int_6 = 1;
	double double_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_4 = 1;
	long long_5 = 1;
	int int_7 = 1;
	float float_5 = 1;
	int int_8 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_10 = 1;
	double_2 = double_1 + double_1;
	int_1 = v_rasqal_strcasecmp(long_1,float_1);

	float_3 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_2;
	int_1 = int_2 + int_1;
	int_2 = int_3 + int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		v_rasqal_free_literal(long_2);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			int_2 = int_3;
		}
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	char_2 = char_1 * char_2;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				int_1 = int_3 * int_4;
			}
		}
	}
	v_rasqal_literal_rdql_promote_calculate(unsigned_int_3,unsigned_int_3);

	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_4;
	if(1)
	{
		v_rasqal_literal_get_rdf_term_type();

		float_2 = v_rasqal_new_literal_from_promotion(unsigned_int_3,double_3,int_2,-1 );

		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_4 * int_2;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_3;
		if(1)
		{
		}
		long_4 = long_3 * long_2;
		if(1)
		{
			if(1)
			{
				short_1 = short_1 + short_3;
			}
		}
		char_3 = char_3 + char_3;
	}
	if(1)
	{
		short_3 = short_4 * short_1;
		v_rasqal_literal_string_compare(float_1,long_3,int_5);

		float_2 = float_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
		}
		if(1)
		{
			if(1)
			{
				double_1 = double_3 + double_2;
			}
		}
		double_4 = double_4 + double_3;
		if(1)
		{
			double double_5 = 1;
			int_3 = int_6 * int_1;
			double_6 = double_4 * double_5;
			char_2 = char_3 * char_1;
			if(1)
			{
			}
			float_4 = float_2;
			if(1)
			{
				if(1)
				{
					unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
				}
			}
			if(1)
			{
				char_2 = char_2 + char_3;
			}
		}
		char_3 = v_rasqal_literal_type_label(long_1);

		unsigned_int_7 = unsigned_int_2 + unsigned_int_6;
	}
	if(1)
	{
		int_6 = int_3 + int_3;
		double_1 = v_rasqal_literal_value(int_3);

		unsigned_int_6 = unsigned_int_7 * unsigned_int_5;
	}
	if(1)
	{
		if(1)
		{
			char_4 = char_1;
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_5 = long_5 + long_5;
			if(1)
			{
				short short_5 = 1;
				if(1)
				{
					unsigned_int_4 = unsigned_int_3;
				}
				short_4 = short_2 + short_5;
			}
		}
		if(1)
		{
			int_1 = int_3 * int_4;
		}
	}
	if(1)
	{
		long_5 = long_3;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_6 * unsigned_int_3;
		}
		long_2 = long_5 + long_4;
		int_1 = v_rasqal_xsd_date_compare(float_1,float_3,int_7);

		int_1 = int_3;
	}
	unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
	short_3 = short_2 + short_4;
	double_3 = double_3 * double_1;
	if(1)
	{
		float_5 = float_3;
	}
	if(1)
	{
		v_rasqal_literal_promote_numerics(double_4,int_4,int_8);

		char_2 = char_2 + char_4;
	}
	int_1 = v_rasqal_xsd_decimal_compare(int_5,int_5);

	double_8 = double_7 * double_7;
	int_3 = int_4;
	int_8 = int_7;
	int_6 = v_rasqal_xsd_datetime_compare2(long_3,unsigned_int_7,int_1);

	double_9 = double_2 + double_6;
	int_1 = int_7;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
	int_6 = int_9 + int_6;
	unsigned_int_7 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_8;
	double_2 = double_3 * double_9;
	double_7 = double_4 + double_10;
	float_5 = float_4 + float_5;
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int_5 = int_8 + int_4;
			}
		}
	}
	return int_4;
}
int v_rasqal_literal_not_equals_flags( int parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	return int_1;
	int_2 = v_rasqal_literal_equals_flags(int_2,short_1,int_1,int_2,-1 );

}
char v_rasqal_new_boolean_literal( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_2;
	long_1 = long_1 * long_2;
	long_2 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_1,float_1);

	short_1 = short_1 + short_1;
	v_rasqal_free_literal(long_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int int_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		int_1 = int_3 + int_2;
		long_1 = long_3 * long_4;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		double_1 = double_1 + double_2;
		double_1 = double_2 + double_2;
		short_1 = short_1 * short_1;
		int_4 = int_1 * int_3;
		if(1)
		{
			long_1 = long_3 * long_4;
		}
		int_2 = int_1 + int_5;
	}
	return char_1;
}
char v_rasqal_expression_evaluate2( short parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	short short_4 = 1;
	float float_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	int int_11 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_12 = 1;
	double double_13 = 1;
	int int_12 = 1;
	long long_6 = 1;
	long long_7 = 1;
	int int_13 = 1;
	short short_7 = 1;
	long long_8 = 1;
	int int_14 = 1;
	int int_15 = 1;
	short short_8 = 1;
	int int_16 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_9 = 1;
	short short_10 = 1;
	int int_17 = 1;
	double double_14 = 1;
	int int_18 = 1;
	float float_6 = 1;
	int int_19 = 1;
	int int_20 = 1;
	short short_11 = 1;
	long long_9 = 1;
	short short_12 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	char char_7 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	long long_10 = 1;
	long long_11 = 1;
	int int_21 = 1;
	unsigned int unsigned_int_14 = 1;
	double double_15 = 1;
	short short_13 = 1;
	double double_16 = 1;
	double double_17 = 1;
	short short_14 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_15 = 1;
	double double_18 = 1;
	float float_8 = 1;
	float float_9 = 1;
	double double_19 = 1;
	double double_20 = 1;
	char char_9 = 1;
	char char_10 = 1;
	double double_21 = 1;
	unsigned int unsigned_int_16 = 1;
	char char_11 = 1;
	float float_10 = 1;
	unsigned int unsigned_int_17 = 1;
	long long_12 = 1;
	char char_12 = 1;
	char char_13 = 1;
	char char_14 = 1;
	float float_11 = 1;
	unsigned int unsigned_int_18 = 1;
	int int_22 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	int_2 = int_1 + int_2;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	float_3 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	int_1 = int_3 + int_1;
	short_1 = short_1;
	char_3 = char_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	double_4 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	int_1 = int_3 * int_4;
	long_2 = long_1 * long_1;
	long_4 = long_2 + long_3;
	double_2 = double_3 * double_4;
	short_2 = short_1 + short_1;
	long_4 = long_3 * long_3;
	unsigned_int_1 = unsigned_int_5 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1;
	long_5 = long_1;
	double_1 = double_4 + double_4;
	float_3 = float_1 + float_4;
	unsigned_int_2 = unsigned_int_4;
	short_2 = short_2 * short_1;
	double_2 = double_5;
	double_5 = double_2 + double_6;
	short_1 = short_2;
	double_5 = double_7 * double_2;
	short_2 = short_1 + short_3;
	int_2 = int_5 + int_4;
	double_1 = double_2;
	int_3 = int_1 * int_6;
	int_5 = int_3 + int_7;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 + unsigned_int_6;
	}
	if(1)
	{
		char_4 = char_4;
		char_2 = char_4;
	}
	long_2 = long_1 * long_2;
	long_5 = long_3 * long_3;
	if(1)
	{
		short_4 = short_3 + short_4;
	}
	if(1)
	{
		float_2 = float_5 * float_3;
		char_3 = char_2;
	}
	if(1)
	{
		double_5 = double_3 * double_4;
	}
	char controller4vul_2333[2];
	fgets(controller4vul_2333 ,2 ,stdin);
	if( strcmp( controller4vul_2333, "`") > 0)
	{
		char controller4vul_2334[3];
		fgets(controller4vul_2334 ,3 ,stdin);
		if( strcmp( controller4vul_2334, ":4") > 0)
		{
			int_6 = v_rasqal_literal_equals_flags(int_6,short_1,int_2,int_1,uni_para);

			int_3 = int_5 + int_3;
		}
		if(1)
		{
			short_3 = short_5;
		}
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	short_3 = short_6 + short_1;
	int_8 = int_7;
	unsigned_int_6 = unsigned_int_1;
	if(1)
	{
		int_9 = int_10;
	}
	if(1)
	{
		char_4 = char_3;
		double_8 = double_1 + double_5;
	}
	long_1 = long_4 * long_2;
	double_9 = double_7 * double_1;
	if(1)
	{
		double_3 = double_9 + double_9;
	}
	if(1)
	{
		double_10 = double_4 + double_8;
		double_11 = double_11;
	}
	if(1)
	{
		int_9 = int_5 * int_11;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_7 + unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
	}
	double_10 = double_7 + double_12;
	int_6 = int_3 + int_6;
	double_1 = double_13;
	if(1)
	{
		float_3 = float_4 * float_2;
	}
	double_3 = double_12;
	if(1)
	{
		double_6 = double_4 * double_6;
		float_4 = float_1 + float_3;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_1;
		int_12 = int_12;
	}
	double_11 = double_8 * double_4;
	if(1)
	{
		int_2 = int_4;
	}
	if(1)
	{
		short_3 = short_2 + short_5;
	}
	long_5 = long_6 * long_5;
	double_2 = double_13;
	if(1)
	{
		long_6 = long_7 * long_2;
	}
	int_13 = int_5 * int_1;
	short_2 = short_2 * short_5;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_7;
	if(1)
	{
		short_5 = short_5;
	}
	long_7 = long_7 * long_3;
	if(1)
	{
		short_5 = short_7 * short_4;
		int_2 = int_10 * int_11;
	}
	int_12 = int_13 + int_9;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
	}
	if(1)
	{
		double_12 = double_2;
	}
	double_4 = double_4;
	int_6 = int_4 * int_4;
	if(1)
	{
		char_1 = char_2 + char_2;
	}
	long_6 = long_3 * long_5;
	float_2 = float_3 + float_3;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_2;
	if(1)
	{
		long_4 = long_1 * long_8;
	}
	int_4 = int_2 * int_14;
	if(1)
	{
		int_5 = int_2 + int_14;
		int_15 = int_15;
	}
	int_9 = int_1 * int_10;
	double_4 = double_7 * double_4;
	long_2 = long_7 * long_1;
	if(1)
	{
		unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
	}
	unsigned_int_7 = unsigned_int_5 * unsigned_int_3;
	short_8 = short_4 + short_3;
	short_6 = short_6;
	if(1)
	{
		int_12 = int_10 * int_3;
	}
	int_2 = int_15 * int_16;
	if(1)
	{
		double_6 = double_8;
		double_11 = double_9 + double_12;
	}
	double_4 = double_3 + double_11;
	double_2 = double_2 + double_12;
	unsigned_int_1 = unsigned_int_5;
	if(1)
	{
		int_14 = int_9 * int_7;
	}
	float_3 = float_4 + float_1;
	char_5 = char_3 + char_4;
	char_4 = char_2 + char_6;
	if(1)
	{
		char_4 = char_1 + char_1;
	}
	unsigned_int_7 = unsigned_int_8 + unsigned_int_6;
	if(1)
	{
		int_12 = int_9 + int_6;
		int_2 = int_13 + int_12;
	}
	double_4 = double_8 * double_3;
	float_5 = float_2 + float_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
		char_4 = char_4;
	}
	int_14 = int_13 + int_13;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_5;
	int_13 = int_14 + int_8;
	if(1)
	{
		unsigned_int_2 = unsigned_int_8 * unsigned_int_8;
	}
	long_1 = long_2 * long_5;
	if(1)
	{
		long_5 = long_4;
		unsigned_int_6 = unsigned_int_6 + unsigned_int_6;
	}
	char_1 = char_1 * char_6;
	int_8 = int_4 * int_7;
	double_10 = double_13 * double_10;
	if(1)
	{
		char_6 = char_1 + char_2;
	}
	short_5 = short_9 + short_2;
	float_5 = float_1;
	short_9 = short_3 * short_10;
	if(1)
	{
		short_7 = short_7 * short_4;
	}
	unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
	if(1)
	{
		short_6 = short_5;
	}
	double_7 = double_10 * double_2;
	unsigned_int_3 = unsigned_int_6;
	int_5 = int_9;
	int_17 = int_15;
	char_1 = char_6 * char_5;
	double_14 = double_13 * double_13;
	int_13 = int_18 + int_12;
	int_11 = int_11 + int_12;
	float_6 = float_4 * float_5;
	unsigned_int_8 = unsigned_int_8;
	long_2 = long_6 * long_5;
	float_2 = float_4 * float_4;
	char_3 = char_2 + char_1;
	int_14 = int_17;
	if(1)
	{
		unsigned_int_8 = unsigned_int_2;
	}
	unsigned_int_7 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
		int_20 = int_15 * int_19;
	}
	float_3 = float_5;
	int_7 = int_14 * int_5;
	double_1 = double_10 + double_3;
	if(1)
	{
		long_2 = long_8 + long_8;
	}
	short_1 = short_11 * short_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
	if(1)
	{
		double_6 = double_10 + double_13;
	}
	int_19 = int_2 + int_20;
	if(1)
	{
		short_2 = short_9 * short_11;
		int_16 = int_8 * int_16;
	}
	double_8 = double_1 * double_4;
	char_6 = char_3 + char_2;
	double_2 = double_7 * double_12;
	if(1)
	{
		char_5 = char_1 * char_6;
	}
	unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
	long_6 = long_9 + long_4;
	if(1)
	{
		int_13 = int_18 + int_10;
	}
	short_9 = short_12;
	if(1)
	{
		unsigned_int_1 = unsigned_int_9 + unsigned_int_5;
		unsigned_int_11 = unsigned_int_10 * unsigned_int_4;
	}
	short_4 = short_6;
	unsigned_int_2 = unsigned_int_10 * unsigned_int_2;
	long_1 = long_9;
	if(1)
	{
		char_2 = char_2 + char_7;
	}
	double_13 = double_7 + double_4;
	float_4 = float_4;
	if(1)
	{
		double_12 = double_14;
	}
	double_12 = double_13 * double_13;
	if(1)
	{
		unsigned_int_7 = unsigned_int_7 * unsigned_int_11;
		double_4 = double_1 + double_6;
	}
	long_8 = long_3 * long_6;
	int_13 = int_10 + int_20;
	int_11 = int_18 * int_6;
	if(1)
	{
		short_12 = short_8;
	}
	short_11 = short_3 * short_3;
	long_2 = long_8 * long_2;
	if(1)
	{
		char_4 = char_3 * char_8;
	}
	double_7 = double_7 * double_10;
	if(1)
	{
		int_13 = int_19 * int_1;
		unsigned_int_12 = unsigned_int_8;
	}
	char_8 = char_7 + char_4;
	if(1)
	{
		long_6 = long_5 + long_2;
	}
	if(1)
	{
		unsigned_int_13 = unsigned_int_3 * unsigned_int_4;
	}
	long_11 = long_8 + long_10;
	float_2 = float_3 * float_6;
	if(1)
	{
		double_13 = double_9 + double_9;
	}
	int_17 = int_21 * int_16;
	char_5 = char_3 + char_6;
	long_10 = long_7 + long_7;
	if(1)
	{
		double_2 = double_4 + double_14;
	}
	short_9 = short_8;
	if(1)
	{
		short_11 = short_1 * short_6;
		int_12 = int_9 * int_20;
	}
	long_3 = long_3 + long_2;
	int_17 = int_11 + int_4;
	int_6 = int_20 * int_20;
	if(1)
	{
		float_6 = float_4 * float_1;
	}
	long_5 = long_9 + long_5;
	unsigned_int_14 = unsigned_int_9 + unsigned_int_3;
	float_6 = float_1 * float_1;
	if(1)
	{
		int_13 = int_6;
	}
	double_6 = double_15;
	if(1)
	{
		double_11 = double_15;
		double_8 = double_13 + double_7;
	}
	short_6 = short_13 + short_6;
	unsigned_int_9 = unsigned_int_3 * unsigned_int_1;
	short_2 = short_1 * short_5;
	if(1)
	{
		int_3 = int_13 + int_4;
	}
	double_17 = double_12 * double_16;
	unsigned_int_11 = unsigned_int_5 * unsigned_int_5;
	float_3 = float_5 * float_1;
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	short_3 = short_11 * short_14;
	float_1 = float_4 + float_6;
	if(1)
	{
		float_7 = float_5 + float_3;
	}
	unsigned_int_6 = unsigned_int_6 * unsigned_int_3;
	unsigned_int_15 = unsigned_int_2 + unsigned_int_12;
	double_3 = double_10 * double_10;
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
	}
	int_16 = int_10;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_9;
	if(1)
	{
		unsigned_int_11 = unsigned_int_10 + unsigned_int_4;
	}
	unsigned_int_6 = unsigned_int_11 + unsigned_int_3;
	double_8 = double_14 * double_6;
	unsigned_int_13 = unsigned_int_7 * unsigned_int_13;
	double_10 = double_14 + double_18;
	short_9 = short_9;
	int_20 = int_16 + int_3;
	double_15 = double_3 + double_4;
	unsigned_int_12 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_7 = unsigned_int_7 * unsigned_int_4;
	long_10 = long_6 + long_6;
	if(1)
	{
		unsigned_int_13 = unsigned_int_2 * unsigned_int_6;
	}
	unsigned_int_2 = unsigned_int_15 + unsigned_int_10;
	unsigned_int_3 = unsigned_int_13;
	if(1)
	{
		short_9 = short_12 * short_3;
	}
	float_9 = float_8 * float_6;
	long_10 = long_11 * long_10;
	int_15 = int_8;
	int_21 = int_16 + int_21;
	double_5 = double_19 * double_7;
	float_3 = float_9 * float_2;
	char_2 = char_3 + char_5;
	double_14 = double_20;
	int_13 = int_5 + int_14;
	double_9 = double_4 + double_14;
	int_2 = int_18 * int_5;
	char_5 = char_7 * char_8;
	int_17 = int_9 * int_13;
	char_3 = char_1 * char_9;
	char_10 = char_5 + char_7;
	unsigned_int_2 = unsigned_int_6;
	short_14 = short_13 + short_12;
	int_3 = int_7;
	long_8 = long_2 + long_3;
	double_21 = double_15 + double_17;
	long_2 = long_2 * long_3;
	double_17 = double_7;
	double_3 = double_11 * double_16;
	unsigned_int_8 = unsigned_int_14 + unsigned_int_13;
	unsigned_int_6 = unsigned_int_16 * unsigned_int_10;
	char_8 = char_2 + char_2;
	unsigned_int_2 = unsigned_int_9 + unsigned_int_3;
	char_10 = char_2 * char_6;
	unsigned_int_12 = unsigned_int_13;
	float_3 = float_3 * float_7;
	char_11 = char_6 * char_11;
	float_10 = float_1;
	float_9 = float_10 + float_9;
	float_5 = float_7 * float_2;
	float_4 = float_10 + float_10;
	short_11 = short_9 + short_8;
	double_12 = double_7 + double_19;
	unsigned_int_17 = unsigned_int_7 * unsigned_int_4;
	char_6 = char_2 * char_1;
	long_2 = long_8 + long_9;
	unsigned_int_8 = unsigned_int_10 * unsigned_int_4;
	short_2 = short_4 * short_12;
	double_21 = double_8;
	double_13 = double_18 * double_9;
	unsigned_int_2 = unsigned_int_16 + unsigned_int_12;
	long_3 = long_6 * long_7;
	long_3 = long_7 + long_4;
	unsigned_int_10 = unsigned_int_12 + unsigned_int_15;
	int_9 = int_17 + int_3;
	double_11 = double_20;
	short_12 = short_14 + short_3;
	long_12 = long_11 * long_1;
	unsigned_int_11 = unsigned_int_15 * unsigned_int_11;
	float_9 = float_3 + float_10;
	double_17 = double_7 * double_10;
	char_7 = char_9 + char_12;
	float_7 = float_8 + float_9;
	unsigned_int_14 = unsigned_int_8 * unsigned_int_3;
	double_2 = double_18 * double_19;
	short_2 = short_13 * short_8;
	char_3 = char_7 + char_11;
	int_17 = int_21;
	char_13 = char_9 * char_8;
	int_5 = int_21 * int_3;
	double_9 = double_7;
	char_12 = char_12 + char_10;
	float_10 = float_7 * float_3;
	long_10 = long_3;
	char_3 = char_14 + char_13;
	int_15 = int_11 * int_16;
	unsigned_int_7 = unsigned_int_9 + unsigned_int_6;
	char_4 = char_4 + char_14;
	float_11 = float_7 + float_9;
	unsigned_int_2 = unsigned_int_18 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_11 + unsigned_int_2;
	if(1)
	{
		unsigned_int_10 = unsigned_int_4 * unsigned_int_2;
	}
	if(1)
	{
		double_14 = double_14 * double_12;
	}
	short_10 = short_7;
	double_17 = double_18 + double_19;
	if(1)
	{
		int_10 = int_18;
		short_5 = short_4;
	}
	int_17 = int_22 * int_5;
	return char_14;
}
int v_rasqal_literal_is_constant( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_2;
	short_1 = short_1 * short_2;
	return int_1;
}
int v_rasqal_expression_is_constant( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	char char_3 = 1;
	long long_3 = 1;
	char char_4 = 1;
	double double_7 = 1;
	char char_5 = 1;
	double double_8 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 + double_1;
	int_1 = int_2;
	short_2 = short_1 + short_1;
	int_2 = int_1 + int_2;
	float_1 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	int_3 = int_2 + int_2;
	unsigned_int_3 = unsigned_int_2;
	int_3 = int_1 * int_1;
	int_2 = v_rasqal_expression_print(float_2,short_1);

	unsigned_int_4 = unsigned_int_2;
	short_3 = short_2 + short_3;
	double_1 = double_2;
	double_4 = double_2 * double_3;
	short_4 = short_1;
	double_5 = double_2 * double_5;
	float_3 = float_2 + float_2;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_5 = 1;
		int_4 = int_4 + int_5;
		long_2 = long_1 + long_1;
		if(1)
		{
			float float_4 = 1;
			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
			float_4 = float_4 * float_5;
		}
	}
	double_3 = double_3 + double_6;
	float_2 = float_5;
	int_6 = v_rasqal_literal_is_constant(long_2);

	char_2 = char_3 + char_1;
	double_5 = double_1 + double_2;
	long_2 = long_3 + long_2;
	char_2 = char_1 * char_2;
	if(1)
	{
		char_4 = char_4 + char_4;
	}
	long_1 = long_2 * long_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_4 = int_2;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			double_3 = double_2 + double_7;
			double_4 = double_4 * double_1;
		}
	}
	short_1 = short_2 * short_1;
	char_3 = char_4 + char_1;
	if(1)
	{
		float_1 = float_1 + float_2;
	}
	char_5 = char_1;
	double_8 = double_6 * double_7;
	return int_2;
}
int v_rasqal_expression_foreach_fold(unsigned int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	char char_5 = 1;
	float_2 = float_1 + float_1;
	double_1 = double_1;
	char_2 = char_1 * char_1;
	long_1 = long_1 + long_2;
	char controller4vul_2332[2];
	fgets(controller4vul_2332 ,2 ,stdin);
	if( strcmp( controller4vul_2332, "J") > 0)
	{
		char_3 = v_rasqal_expression_evaluate2(short_1,char_2,int_1,uni_para);

	}
	float_3 = float_1 + float_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_3 + char_3;
	double_4 = double_2 * double_3;
	int_1 = int_2 + int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	int_2 = int_2 + int_1;
	char_4 = char_4 + char_1;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	short_2 = short_2 * short_1;
	char_1 = char_5 + char_1;
	return int_1;
}
int v_rasqal_expression_visit( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_8 = 1;
	float float_4 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1 + int_2;
	double_3 = double_2 * double_2;
	long_2 = long_1 * long_1;
	double_2 = double_1;
	if(1)
	{
	}
	long_4 = long_2 * long_3;
	double_3 = double_1 * double_1;
	double_4 = double_4 * double_5;
	double_1 = double_6 * double_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_2;
	long_3 = long_1 + long_3;
	double_5 = double_2 + double_1;
	long_3 = long_2 + long_3;
	float_1 = float_1 * float_2;
	float_1 = float_3 + float_2;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short short_4 = 1;
		char char_1 = 1;
		float_2 = float_1 + float_1;
		short_4 = short_3 * short_3;
		char_1 = char_1 * char_1;
		if(1)
		{
			char_1 = char_1;
		}
	}
	short_1 = short_2 * short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_4 * double_3;
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_2 = long_3 + long_4;
			double_7 = double_2 * double_5;
			double_6 = double_7 * double_5;
			if(1)
			{
				long long_5 = 1;
				long_4 = long_5 + long_5;
			}
		}
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_5 = double_8 * double_7;
	float_3 = float_1 * float_4;
	int_2 = int_1 * int_3;
	return int_1;
}
float v_rasqal_query_expression_fold( unsigned int parameter_1,short parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int_1 = v_rasqal_expression_foreach_fold(unsigned_int_1,uni_para);

	float_1 = float_1 + float_2;
	double_3 = double_1 + double_2;
	int_1 = int_1;
	short_2 = short_1 * short_1;
	float_2 = float_2 * float_2;
	int_1 = int_1 * int_1;
	int_2 = int_1 * int_2;
	float_2 = float_1 * float_1;
	double_2 = double_3;
	char_2 = char_1 * char_2;
	char_1 = char_3;
	int_1 = int_1 * int_1;
	short_1 = short_3 * short_2;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_2 = long_1 + long_2;
	double_4 = double_3 + double_3;
	char_2 = char_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	return float_3;
}
char v_rasqal_graph_pattern_fold_expressions( char parameter_1,long parameter_2,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	char controller4vul_2330[3];
	fgets(controller4vul_2330 ,3 ,stdin);
	if( strcmp( controller4vul_2330, "a;") > 0)
	{
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 * short_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_2 = 1;
			char_1 = char_1;
			double_2 = double_1 + double_1;
			char controller4vul_2331[3];
			fgets(controller4vul_2331 ,3 ,stdin);
			if( strcmp( controller4vul_2331, "MW") > 0)
			{
				float_1 = v_rasqal_query_expression_fold(unsigned_int_1,short_1,uni_para);

			}
		}
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "O") > 0)
	{
	}
	return char_1;
}
double v_rasqal_query_get_order_conditions_sequence( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "s&") > 0)
	{
	}
	if(1)
	{
	}
	return double_1;
}
unsigned int v_rasqal_query_fold_expressions(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char controller4vul_2329[3];
	fgets(controller4vul_2329 ,3 ,stdin);
	if( strcmp( controller4vul_2329, ";L") < 0)
	{
		char_1 = v_rasqal_graph_pattern_fold_expressions(char_2,long_1,uni_para);

		long_1 = long_1;
	}
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "w") > 0)
	{
		float_3 = float_3 * float_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_5 = 1;
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned_int_5 = unsigned_int_4;
			double_1 = double_1 + double_1;
			int_2 = int_1 + int_1;
		}
	}
	return unsigned_int_3;
}
void v_rasqal_log_warning_simple( char parameter_1,double parameter_2,char parameter_3,long parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	v_rasqal_log_error_varargs(long_1,short_1,short_1,char_1,char_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
}
int v_rasqal_query_remove_duplicate_select_vars( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_2;
	int_5 = int_3 + int_4;
	short_2 = short_1 + short_2;
	long_2 = long_1 + long_1;
	int_2 = int_2 * int_3;
	if(1)
	{
	}
	int_6 = v_rasqal_variable_print(unsigned_int_1,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
	}
	if(1)
	{
		short_3 = short_2 * short_1;
	}
	int_6 = int_4;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float_3 = float_1 + float_2;
		double_3 = double_1 * double_2;
		double_4 = double_3 * double_2;
		float_1 = float_4 * float_4;
		if(1)
		{
			short_1 = short_3 * short_3;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_5 = 1;
			double double_6 = 1;
			int_2 = int_6 + int_3;
			double_6 = double_3 * double_5;
			if(1)
			{
				if(1)
				{
					v_rasqal_free_variable();

					char_2 = char_1 * char_1;
					v_rasqal_log_warning_simple(char_1,double_7,char_3,long_2,int_2);

					int_4 = int_3 + int_4;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
			unsigned_int_1 = unsigned_int_6 * unsigned_int_5;
			unsigned_int_3 = unsigned_int_7;
		}
	}
	if(1)
	{
		int int_7 = 1;
		int int_8 = 1;
		if(1)
		{
			float float_5 = 1;
			float_1 = v_rasqal_new_variable_from_variable(short_1);

			float_5 = float_4 * float_2;
		}
		int_8 = int_7 + int_6;
		char_2 = char_2 + char_2;
		char_3 = char_2 + char_2;
		unsigned_int_7 = unsigned_int_7 + unsigned_int_4;
	}
	if(1)
	{
		float_2 = float_3 * float_4;
	}
	return int_2;
}
double v_rasqal_query_get_projection( char parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	float_1 = float_1;
	return double_1;
}
int v_rasqal_query_prepare_common( long parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char controller4vul_2328[3];
	fgets(controller4vul_2328 ,3 ,stdin);
	if( strcmp( controller4vul_2328, "h/") > 0)
	{
		unsigned_int_1 = v_rasqal_query_fold_expressions(uni_para);

	}
	short_2 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	double_1 = double_1 + double_1;
	return int_1;
}
int v_rasqal_evaluation_context_set_rand_seed( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_2;
	return int_1;
	int_2 = v_rasqal_random_seed(int_1,char_1);

}
int v_rasqal_evaluation_context_set_base_uri( char parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char_2 = char_1 * char_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	int_3 = int_1 * int_2;
	return int_4;
}
void v_rasqal_query_set_base_uri( long parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	char_3 = char_1 + char_2;
	float_2 = float_1 + float_1;
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	double_4 = double_1 + double_3;
	char_4 = char_3 * char_1;
}
int v_rasqal_query_prepare( short parameter_1,unsigned int parameter_2,unsigned int parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = int_2;
	unsigned_int_1 = unsigned_int_2;
	char controller4vul_2326[3];
	fgets(controller4vul_2326 ,3 ,stdin);
	if( strcmp( controller4vul_2326, "8<") < 0)
	{
		long long_2 = 1;
		long long_3 = 1;
		double_1 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		char controller4vul_2327[3];
		fgets(controller4vul_2327 ,3 ,stdin);
		if( strcmp( controller4vul_2327, "aD") > 0)
		{
			int_2 = v_rasqal_query_prepare_common(long_1,uni_para);

			short_2 = short_1 + short_2;
		}
		double_2 = double_1;
		char_2 = char_1 + char_1;
		short_2 = short_3 + short_4;
		double_1 = double_2;
		long_2 = long_2 + long_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		short_2 = short_4 + short_4;
		char_1 = char_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		}
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	double_2 = double_1 * double_2;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_4;
	if(1)
	{
		int_2 = int_2;
		if(1)
		{
			unsigned_int_6 = unsigned_int_4;
		}
		if(1)
		{
			double_1 = double_3 * double_2;
		}
		short_4 = short_4 * short_3;
	}
	short_4 = short_3;
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		double double_4 = 1;
		float_3 = float_2 * float_1;
		double_3 = double_3 + double_4;
	}
	return int_3;
}
float v_file_read_string( unsigned int parameter_1,unsigned int parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1 + short_2;
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_1;
	short_3 = short_1 + short_1;
	short_3 = short_2 + short_4;
	double_1 = double_1 * double_2;
	int_1 = int_2;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_2;
	float_3 = float_2 * float_2;
	short_3 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_2 * int_1;
	double_3 = double_2 * double_2;
	long_3 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_2 = int_1 + int_2;
	return float_1;
}
unsigned int v_rasqal_random_get_system_seed( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	char char_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 * int_2;
	int_1 = int_2 + int_1;
	if(1)
	{
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		short_2 = short_1 + short_1;
		char_2 = char_1 * char_1;
	}
	short_1 = short_1 * short_1;
	if(1)
	{
		long long_1 = 1;
		double_1 = double_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		long_1 = long_1 * long_2;
	}
	int_1 = int_1 + int_1;
	long_5 = long_3 * long_4;
	int_3 = int_3 + int_3;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		double double_3 = 1;
		short_1 = short_3 * short_4;
		double_2 = double_1 * double_3;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	}
	float_3 = float_1 + float_2;
	char_2 = char_1;
	int_2 = int_3 * int_3;
	double_5 = double_4 * double_2;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "Dq") > 0)
	{
		int_4 = int_4;
		char_1 = char_3 * char_1;
		short_1 = short_1 + short_3;
	}
	double_6 = double_6 * double_6;
	char_3 = char_1 * char_1;
	int_3 = int_3;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_2 * float_2;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_6;
	double_2 = double_7 + double_8;
	double_8 = double_8;
	int_4 = int_4 * int_4;
	double_1 = double_8;
	unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	long_3 = long_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_7;
	short_5 = short_4 + short_3;
	return unsigned_int_8;
}
int v_rasqal_random_seed( int parameter_1,char parameter_2)
{
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
	int_1 = int_2;
	double_3 = double_1 * double_2;
	double_1 = double_4 + double_1;
	double_2 = double_1 * double_5;
	double_6 = double_4;
	int_3 = int_1 + int_3;
	double_5 = double_4 + double_4;
	return int_4;
}
unsigned int v_rasqal_new_random( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
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
	char char_3 = 1;
	long_3 = long_1 + long_2;
	long_4 = long_3 * long_2;
	if(1)
	{
	}
	unsigned_int_1 = v_rasqal_random_get_system_seed(int_1);

	double_2 = double_1 * double_1;
	int_2 = int_1 + int_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	char_1 = char_2;
	float_2 = float_1 + float_2;
	float_1 = float_3 * float_3;
	if(1)
	{
		int_1 = int_1;
	}
	return unsigned_int_1;
	int_3 = v_rasqal_random_seed(int_1,char_3);

}
void v_rasqal_new_evaluation_context( float parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned_int_1 = v_rasqal_new_random(short_1);

	double_1 = double_1 + double_2;
	int_1 = int_2;
	short_1 = short_1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1;
	double_4 = double_1 * double_3;
	long_1 = long_1 + long_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_1 = double_4 * double_1;
		char_3 = char_1 * char_2;
	}
}
void v_rasqal_free_bindings( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3;
	}
	int_1 = int_1 + int_2;
}
void v_rasqal_free_solution_modifier( unsigned int parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
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
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3 * short_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void v_rasqal_free_projection( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	char_1 = char_1 * char_2;
}
void v_rasqal_free_graph_pattern( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		v_rasqal_free_expression(int_1);

		v_rasqal_free_projection(long_1);

		char_2 = char_1 + char_2;
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
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		double double_2 = 1;
		v_rasqal_free_bindings(double_1);

		double_2 = double_1;
	}
	if(1)
	{
		v_rasqal_free_solution_modifier(unsigned_int_1);

		float_2 = float_2 * float_1;
	}
	if(1)
	{
		double_1 = double_1 * double_3;
	}
	double_4 = double_4 + double_3;
	v_rasqal_free_literal(long_2);

	v_rasqal_free_variable();

}
void v_rasqal_free_random( float parameter_1)
{
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_1;
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
		double_4 = double_2 * double_3;
	}
	int_1 = int_1 * int_2;
	double_4 = double_3;
}
void v_rasqal_free_evaluation_context( short parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double double_2 = 1;
		v_rasqal_free_random(float_1);

		double_2 = double_1 + double_2;
	}
	long_1 = long_2;
}
void v_rasqal_free_query( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	char char_4 = 1;
	long long_4 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		double double_2 = 1;
		v_rasqal_free_bindings(double_1);

		double_2 = double_1 * double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		v_rasqal_free_evaluation_context(short_1);

		long_1 = long_1 * long_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		double double_4 = 1;
		v_rasqal_free_graph_pattern(float_3);

		v_rasqal_free_solution_modifier(unsigned_int_3);

		double_3 = double_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		v_rasqal_free_variables_table(int_2);

		double_3 = double_3 * double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		char char_3 = 1;
		v_rasqal_free_projection(long_2);

		char_4 = char_3 * char_2;
	}
	if(1)
	{
		long long_3 = 1;
		long_3 = long_4;
	}
	if(1)
	{
		int_1 = int_1 + int_3;
	}
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 * int_2;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		long_2 = long_1 + long_4;
	}
	if(1)
	{
		short short_2 = 1;
		short_2 = short_1;
	}
	char_1 = char_1 * char_4;
}
void v_rasqal_query_results_remove_query_reference()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	char_3 = char_1 + char_2;
	v_rasqal_free_query(float_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_4 * char_4;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
}
int v_rasqal_data_graph_print( short parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char_3 = char_1 * char_2;
		}
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_3 * int_4;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double_2 = double_2 * double_2;
		if(1)
		{
			long_2 = long_1 + long_2;
		}
		if(1)
		{
			char_2 = char_3;
		}
		if(1)
		{
			long_2 = long_1;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	return int_5;
}
void v_rasqal_free_data_graph( float parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
int v_rasqal_prefix_print( float parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1 * char_2;
	return int_1;
}
void v_rasqal_free_prefix( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3 + int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
double v_rasqal_new_variables_table()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	int_3 = int_1 + int_2;
	char_1 = char_1 * char_2;
	if(1)
	{
	}
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_rasqal_free_variable();

	long_3 = long_2;
	if(1)
	{
		short_1 = short_1;
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int_3 = v_rasqal_variable_print(unsigned_int_2,unsigned_int_1);

		int_2 = int_3 + int_2;
	}
	short_1 = short_1 * short_2;
	v_rasqal_free_variables_table(int_3);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	int_5 = int_4 + int_3;
	return double_1;
}
short v_rasqal_get_query_language_factory( double parameter_1,int parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 * short_2;
	if(1)
	{
		short_1 = short_2;
		if(1)
		{
			short short_3 = 1;
			short_2 = short_3 * short_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			unsigned_int_1 = unsigned_int_2;
			double_1 = double_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned_int_3 = unsigned_int_1;
				}
			}
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				double_3 = double_1 * double_2;
			}
		}
	}
	return short_2;
}
void v_rasqal_new_query( int parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int_2 = int_1 + int_1;
	long_1 = long_1 + long_1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_3 = long_3 + long_3;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	int_1 = v_rasqal_data_graph_print(short_1,double_1);

	short_2 = short_2 * short_2;
	double_1 = v_rasqal_new_variables_table();

	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	int_2 = v_rasqal_world_open(double_1);

	v_rasqal_new_evaluation_context(float_1,int_3,int_3);

	char_2 = char_3 * char_4;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2 * double_3;
	}
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		v_rasqal_query_results_remove_query_reference();

		int_1 = int_1 + int_3;
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	}
	int_5 = int_4 * int_1;
	if(1)
	{
		float_2 = float_1 + float_1;
	}
	int_1 = v_rasqal_triple_print(short_1,float_1);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		float_4 = float_3 + float_1;
	}
	short_3 = v_rasqal_get_query_language_factory(double_1,int_1,char_1);

	v_rasqal_free_triple(float_4);

	int_1 = v_rasqal_prefix_print(float_2,unsigned_int_3);

	double_4 = double_5;
	if(1)
	{
		int_4 = int_4 * int_3;
	}
	v_rasqal_free_prefix(long_1);

	float_3 = float_3 * float_4;
	if(1)
	{
		float float_5 = 1;
		v_rasqal_free_data_graph(float_4);

		float_3 = float_3 + float_5;
	}
	double_1 = double_3 * double_1;
	if(1)
	{
		char char_5 = 1;
		v_rasqal_free_query(float_1);

		char_1 = char_5;
	}
	if(1)
	{
		short_2 = short_3 + short_3;
	}
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
}
char v_rasqal_query_results_rdfxml_recognise_syntax( long parameter_1,char parameter_2,long parameter_3,float parameter_4,float parameter_5,char parameter_6)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
void v_rasqal_query_results_rdfxml_register_factory( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int_2 = int_1 + int_1;
	short_3 = short_1 + short_2;
	char_1 = v_rasqal_query_results_rdf_write(double_1,long_1,short_3,float_1);

	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_2 + double_3;
	short_4 = v_rasqal_query_results_rdf_get_rowsource(long_1,double_1,long_1,char_1,unsigned_int_2,int_3);

	float_1 = float_1 * float_2;
	unsigned_int_2 = v_rasqal_query_results_rdf_init(double_4,float_1);

	double_4 = double_5 * double_3;
	int_1 = v_rasqal_query_results_format_rdf_copy_syntax_description_from_parser(int_4,float_1);

	char_1 = char_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3;
	char_1 = v_rasqal_query_results_rdfxml_recognise_syntax(long_1,char_2,long_2,float_2,float_2,char_1);

	short_2 = short_5 * short_6;
	v_rasqal_query_results_rdf_finish(long_1);

	float_1 = float_2 + float_2;
}
int v_rasqal_init_result_format_rdf( double parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	return int_1;
	char_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_2);

	v_rasqal_query_results_rdfxml_register_factory(float_1);

}
long v_rasqal_query_results_turtle_recognise_syntax( char parameter_1,long parameter_2,double parameter_3,float parameter_4,double parameter_5,char parameter_6)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
short v_rasqal_query_results_rdf_get_rowsource( long parameter_1,double parameter_2,long parameter_3,char parameter_4,unsigned int parameter_5,int parameter_6)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_5 = 1;
	float_1 = float_1;
	int_1 = int_2;
	if(1)
	{
	}
	v_rasqal_free_row(unsigned_int_1);

	int_3 = int_3;
	int_4 = v_rasqal_new_rowsource_from_handler(short_1,unsigned_int_1,unsigned_int_2,double_1,int_2);

	float_3 = float_2 + float_1;
	double_1 = double_1 + double_2;
	short_3 = short_2 * short_2;
	int_3 = int_3 + int_3;
	double_1 = double_1 + double_2;
	char_1 = v_rasqal_new_variables_table_from_variables_table(int_3);

	double_1 = double_3 * double_2;
	return short_1;
	int_5 = v_rasqal_row_print(unsigned_int_2,short_1);

}
char v_rasqal_query_results_rdf_write( double parameter_1,long parameter_2,short parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	char char_1 = 1;
	long long_5 = 1;
	short short_5 = 1;
	char char_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	double_1 = double_2;
	short_3 = short_2 * short_3;
	int_1 = v_rasqal_query_results_get_bindings_count(short_3);

	double_4 = double_2 + double_3;
	long_2 = long_1 * long_2;
	if(1)
	{
		float_1 = v_rasqal_query_results_get_binding_name(double_1,int_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	double_2 = double_1 + double_5;
	if(1)
	{
		long long_4 = 1;
		short_1 = short_2 + short_1;
		int_2 = v_rasqal_query_results_is_bindings(int_2);

		v_rasqal_log_error_simple(unsigned_int_1,unsigned_int_1,double_3,unsigned_int_1,short_3);

		long_4 = long_2 + long_3;
	}
	double_4 = double_3 * double_6;
	double_4 = double_3 + double_3;
	float_2 = v_rasqal_query_results_get_world(unsigned_int_2);

	double_8 = double_7 + double_4;
	short_2 = v_rasqal_query_results_get_binding_value(char_1,int_2);

	long_1 = long_5 * long_3;
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		short short_4 = 1;
		float float_6 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char_1 = char_1 + char_1;
		int_2 = v_rasqal_query_results_next(long_5);

		unsigned_int_1 = unsigned_int_1;
		float_5 = float_3 + float_4;
		short_4 = short_3 * short_2;
		float_6 = float_3;
		int_4 = int_3 + int_4;
		int_1 = v_rasqal_query_results_finished(short_5);

		int_5 = int_3 * int_1;
	}
	long_5 = long_2;
	return char_2;
}
int v_rasqal_literal_write_turtle( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	double double_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_1 = float_2;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	float_2 = float_3 * float_1;
	if(1)
	{
		float_2 = float_2 * float_3;
	}
	int_2 = int_3 * int_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	long_1 = long_1;
	long_3 = long_1 * long_2;
	double_1 = double_1 + double_1;
	short_3 = short_1 + short_2;
	int_1 = int_4;
	double_2 = double_1 + double_1;
	if(1)
	{
		float_1 = float_2 * float_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	}
	if(1)
	{
		int_2 = int_2 + int_1;
		double_1 = double_1 + double_1;
		long_1 = long_3 * long_4;
		v_rasqal_log_error_simple(unsigned_int_5,unsigned_int_2,double_1,unsigned_int_6,short_4);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	long_3 = long_4;
	double_3 = double_3 * double_1;
	int_3 = int_1 + int_4;
	return int_2;
}
float v_rasqal_query_results_turtle_write( float parameter_1,char parameter_2,long parameter_3,float parameter_4)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	return float_1;
	float_1 = v_rasqal_query_results_get_world(unsigned_int_1);

	int_1 = v_rasqal_query_results_is_bindings(int_2);

	v_rasqal_log_error_simple(unsigned_int_1,unsigned_int_2,double_1,unsigned_int_1,short_1);

	float_2 = v_rasqal_query_results_get_binding_name(double_2,int_2);

	int_1 = v_rasqal_query_results_get_bindings_count(short_2);

	int_1 = v_rasqal_query_results_finished(short_2);

	short_1 = v_rasqal_query_results_get_binding_value(char_1,int_1);

	int_3 = v_rasqal_literal_write_turtle(char_1,char_1);

	int_1 = v_rasqal_query_results_next(long_1);

}
void v_rasqal_query_results_rdf_finish( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_2 = 1;
	double_1 = double_2;
	double_1 = double_2;
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		long_2 = long_1 + long_3;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		int_1 = int_3 * int_1;
	}
	if(1)
	{
		long long_4 = 1;
		long_3 = long_4 * long_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 + double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		char_2 = char_3 * char_4;
	}
}
unsigned int v_rasqal_query_results_rdf_init( double parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	int_3 = int_1 * int_2;
	int_3 = int_3 + int_2;
	long_1 = long_2;
	if(1)
	{
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long_3 = long_3;
		short_1 = short_2;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_4 = int_4 * int_5;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	int_4 = int_5 + int_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 + int_1;
	double_1 = double_2;
	char_2 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_1;
	float_3 = float_1 * float_2;
	char_3 = char_3 + char_2;
	double_1 = double_1 + double_1;
	return unsigned_int_2;
}
int v_rasqal_query_results_format_rdf_copy_syntax_description_from_parser( int parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	long_2 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_3 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float_2 = float_1 * float_1;
			}
		}
	}
	return int_1;
}
double v_rasqal_query_results_turtle_register_factory()
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	float float_3 = 1;
	char char_4 = 1;
	if(1)
	{
		char char_2 = 1;
		if(1)
		{
			short_2 = short_1 * short_1;
		}
		int_3 = int_1 * int_2;
		int_3 = int_3 * int_2;
		char_1 = char_1 + char_1;
		char_1 = char_1 + char_2;
		long_2 = long_1 + long_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_1 * double_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		double_2 = double_3 + double_1;
		if(1)
		{
			if(1)
			{
				long_2 = long_2 * long_1;
			}
			double_5 = double_1 + double_4;
		}
		long_2 = v_rasqal_query_results_turtle_recognise_syntax(char_1,long_2,double_4,float_1,double_1,char_1);

		long_1 = long_1 * long_1;
		if(1)
		{
		}
		if(1)
		{
			long long_3 = 1;
			long_5 = long_3 + long_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		if(1)
		{
			double_4 = double_5;
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
			}
			unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
			int_2 = int_4 + int_1;
			float_1 = v_rasqal_query_results_turtle_write(float_1,char_3,long_2,float_2);

			unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
			unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
			v_rasqal_query_results_rdf_finish(long_2);

			unsigned_int_4 = unsigned_int_1 * unsigned_int_6;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_6;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			short_1 = v_rasqal_query_results_rdf_get_rowsource(long_5,double_5,long_1,char_3,unsigned_int_6,int_3);

			unsigned_int_6 = unsigned_int_7 + unsigned_int_7;
			unsigned_int_2 = v_rasqal_query_results_rdf_init(double_3,float_1);

			long_1 = long_4 * long_2;
		}
		if(1)
		{
			float_2 = float_2 + float_1;
			unsigned_int_6 = unsigned_int_6 * unsigned_int_4;
			unsigned_int_4 = unsigned_int_8 + unsigned_int_2;
			int_4 = int_4 * int_1;
		}
		int_1 = v_rasqal_query_results_format_rdf_copy_syntax_description_from_parser(int_5,float_3);

		short_1 = short_2;
		int_2 = int_3;
		char_4 = v_rasqal_query_results_rdf_write(double_3,long_5,short_1,float_1);

		double_4 = double_6 * double_5;
		short_4 = short_1 * short_3;
	}
	unsigned_int_2 = unsigned_int_8 * unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_8 + unsigned_int_8;
	}
	return double_5;
}
int v_rasqal_init_result_format_turtle( double parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	return int_1;
	char_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_2);

	double_1 = v_rasqal_query_results_turtle_register_factory();

}
int v_rasqal_query_results_get_count( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = v_rasqal_query_results_is_bindings(int_2);

	int_4 = int_3 + int_3;
	int_1 = int_1 + int_4;
	int_4 = v_rasqal_query_get_offset(long_1);

	int_5 = int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_2 + long_2;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_3;
}
void v_rasqal_iostream_write_html_literal( long parameter_1,double parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		float float_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		double double_3 = 1;
		long_2 = long_1 * long_2;
		double_1 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		float_1 = float_1 * float_1;
		char_1 = char_1;
		int_1 = int_1 + int_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char_3 = char_1 + char_2;
		double_1 = double_1;
		v_rasqal_log_error_simple(unsigned_int_3,unsigned_int_3,double_1,unsigned_int_2,short_1);

		long_2 = long_1 + long_2;
		double_1 = double_2 * double_1;
		int_1 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
		int_3 = int_2 + int_2;
		if(1)
		{
			short short_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			short_1 = short_2 * short_2;
			float_2 = float_2 * float_3;
			long_3 = long_2;
			int_2 = int_3;
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		float_6 = float_4 + float_5;
		long_3 = long_3;
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			double_2 = double_2;
			int_5 = int_2 + int_4;
			int_2 = int_2 + int_1;
			float_6 = float_4 * float_1;
		}
		double_4 = double_2 * double_3;
		long_3 = long_2 + long_1;
	}
	double_1 = double_4 + double_2;
}
float v_rasqal_query_results_write_html_bindings( unsigned int parameter_1,double parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	if(1)
	{
		float float_1 = 1;
		int_1 = v_rasqal_query_results_get_bindings_count(short_1);

		int_2 = v_rasqal_query_results_next(long_1);

		float_1 = float_1 + float_1;
	}
	short_1 = v_rasqal_query_results_get_binding_value(char_1,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = v_rasqal_query_results_finished(short_1);

	v_rasqal_iostream_write_html_literal(long_2,double_1,float_2);

	char_3 = char_2 * char_2;
	return float_2;
	float_2 = v_rasqal_query_results_get_world(unsigned_int_1);

	float_3 = v_rasqal_query_results_get_binding_name(double_1,int_2);

	int_2 = v_rasqal_query_results_get_count(char_2);

}
double v_rasqal_query_results_write_html_boolean( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int_1 = v_rasqal_query_results_get_boolean(unsigned_int_2);

		double_1 = double_1 * double_2;
	}
	if(1)
	{
		int_1 = int_1;
	}
	short_1 = short_1 + short_1;
	return double_3;
}
int v_rasqal_query_results_write_html( char parameter_1,double parameter_2,char parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	long long_4 = 1;
	int_1 = int_1;
	int_2 = v_rasqal_query_results_is_bindings(int_2);

	double_3 = double_1 * double_2;
	int_2 = int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	float_1 = v_rasqal_query_results_write_html_bindings(unsigned_int_1,double_1);

	int_3 = int_3 * int_3;
	int_2 = v_rasqal_query_results_type_label(double_2);

	double_1 = double_3 + double_2;
	char_3 = char_1 * char_2;
	double_3 = double_2;
	v_rasqal_log_error_simple(unsigned_int_1,unsigned_int_2,double_2,unsigned_int_2,short_1);

	int_1 = v_rasqal_query_results_is_boolean(int_2);

	int_3 = int_2 * int_4;
	short_2 = short_2 * short_2;
	short_2 = v_rasqal_query_results_get_type(unsigned_int_1);

	float_1 = float_1 * float_1;
	if(1)
	{
		double_1 = v_rasqal_query_results_write_html_boolean(int_5,int_3);

		double_3 = double_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	char_3 = char_1 + char_2;
	short_3 = short_2 * short_3;
	return int_5;
	long_4 = v_rasqal_query_results_get_query(char_1);

}
double v_rasqal_query_results_html_register_factory( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_5 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_rasqal_query_results_write_html(char_1,double_1,char_2,double_2);

	long_1 = long_1 * long_1;
	double_3 = double_3 * double_4;
	double_4 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_5 = char_3 + char_4;
	double_5 = double_3 + double_4;
	int_1 = int_2 * int_2;
	return double_2;
}
int v_rasqal_init_result_format_html( long parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	return int_1;
	char_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_2);

	double_1 = v_rasqal_query_results_html_register_factory(double_2);

}
float v_rasqal_query_results_tsv_recognise_syntax( unsigned int parameter_1,int parameter_2,int parameter_3,short parameter_4,unsigned int parameter_5,int parameter_6)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = v_rasqal_query_results_sv_score_first_line(unsigned_int_1,char_1,short_1,float_1,short_1);

	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 + double_2;
	}
	return float_1;
}
void v_rasqal_query_results_get_rowsource_tsv( double parameter_1,unsigned int parameter_2,double parameter_3,float parameter_4,float parameter_5,double parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	long long_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_1;
	v_rasqal_free_row(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	int_2 = v_rasqal_row_print(unsigned_int_1,short_1);

	long_2 = long_1 * long_2;
	char_3 = char_1 + char_2;
	short_3 = short_2 + short_2;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_2 * int_1;
	char_4 = v_rasqal_new_variables_table_from_variables_table(int_1);

	long_3 = long_1 * long_1;
	double_1 = double_1 * double_2;
	char_4 = char_2 * char_5;
	int_1 = v_rasqal_new_rowsource_from_handler(short_1,unsigned_int_2,unsigned_int_3,double_3,int_1);

	int_3 = int_4;
}
unsigned int v_rasqal_query_results_write_tsv( float parameter_1,char parameter_2,double parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	return unsigned_int_1;
	short_1 = v_rasqal_query_results_write_sv(char_1,long_1,short_2,short_1,unsigned_int_1,int_1,char_2,unsigned_int_2,double_1);

}
short v_rasqal_query_results_tsv_register_factory( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_1;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_2;
	v_rasqal_query_results_get_rowsource_tsv(double_2,unsigned_int_1,double_2,float_1,float_2,double_3);

	double_4 = double_2 * double_1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = v_rasqal_query_results_write_tsv(float_2,char_1,double_1,unsigned_int_1);

	float_1 = float_2 * float_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_2;
	float_3 = v_rasqal_query_results_tsv_recognise_syntax(unsigned_int_2,int_2,int_3,short_1,unsigned_int_3,int_2);

	double_3 = double_1;
	return short_1;
}
double v_rasqal_query_results_mkr_recognise_syntax( long parameter_1,char parameter_2,short parameter_3,long parameter_4,int parameter_5,float parameter_6)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	long_1 = v_rasqal_query_results_sv_score_first_line(unsigned_int_1,char_1,short_1,float_1,short_2);

	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	return double_1;
}
double v_rasqal_query_results_get_rowsource_mkr( int parameter_1,char parameter_2,long parameter_3,float parameter_4,float parameter_5,int parameter_6)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = v_rasqal_new_rowsource_from_handler(short_1,unsigned_int_1,unsigned_int_1,double_1,int_2);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	v_rasqal_free_row(unsigned_int_2);

	char_3 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_3 = v_rasqal_row_print(unsigned_int_4,short_1);

	char_1 = char_4;
	char_2 = v_rasqal_new_variables_table_from_variables_table(int_1);

	short_1 = short_2 * short_2;
	double_2 = double_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	short_3 = short_1 + short_3;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_6;
	short_3 = short_1 * short_1;
	return double_2;
}
short v_rasqal_query_results_write_mkr( int parameter_1,long parameter_2,char parameter_3,char parameter_4)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	return short_1;
	short_1 = v_rasqal_query_results_write_sv(char_1,long_1,short_1,short_2,unsigned_int_1,int_1,char_1,unsigned_int_2,double_1);

}
char v_rasqal_query_results_mkr_register_factory( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double_1 = v_rasqal_query_results_get_rowsource_mkr(int_1,char_1,long_1,float_1,float_1,int_2);

	float_2 = float_1 * float_1;
	short_1 = v_rasqal_query_results_write_mkr(int_2,long_1,char_1,char_2);

	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 * int_1;
	float_1 = float_3 * float_3;
	int_1 = int_2;
	double_2 = v_rasqal_query_results_mkr_recognise_syntax(long_1,char_2,short_1,long_1,int_2,float_3);

	char_4 = char_2 * char_3;
	double_2 = double_1 + double_1;
	double_3 = double_1;
	return char_3;
}
long v_rasqal_query_results_sv_score_first_line( unsigned int parameter_1,char parameter_2,short parameter_3,float parameter_4,short parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
			if(1)
			{
				long long_2 = 1;
				long_2 = long_1 * long_1;
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					unsigned int unsigned_int_4 = 1;
					double_2 = double_1 + double_1;
					unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
				}
			}
		}
	}
	return long_1;
}
double v_rasqal_query_results_csv_recognise_syntax( char parameter_1,long parameter_2,int parameter_3,int parameter_4,long parameter_5,long parameter_6)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long_1 = v_rasqal_query_results_sv_score_first_line(unsigned_int_1,char_1,short_1,float_1,short_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2 + char_2;
	}
	return double_1;
}
void v_rasqal_query_results_get_rowsource_csv( char parameter_1,char parameter_2,double parameter_3,short parameter_4,char parameter_5,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short short_3 = 1;
	double_3 = double_1 + double_2;
	double_3 = double_3 * double_1;
	if(1)
	{
	}
	char_1 = v_rasqal_new_variables_table_from_variables_table(int_1);

	double_3 = double_3 + double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_rasqal_row_print(unsigned_int_3,short_1);

	int_1 = int_1 * int_2;
	double_1 = double_2 + double_1;
	double_2 = double_3;
	int_2 = int_1 * int_1;
	short_2 = short_1;
	int_1 = int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	v_rasqal_free_row(unsigned_int_1);

	int_4 = v_rasqal_new_rowsource_from_handler(short_3,unsigned_int_2,unsigned_int_2,double_1,int_4);

}
long v_rasqal_iostream_write_csv_string( char parameter_1,short parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_3 = double_3 * double_1;
			double_1 = double_4 * double_5;
		}
	}
	if(1)
	{
	}
	int_1 = int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		int int_3 = 1;
		long_1 = long_2;
		if(1)
		{
			int_2 = int_2 * int_3;
		}
		int_4 = int_3 * int_4;
	}
	int_4 = int_2;
	return long_2;
}
short v_rasqal_query_results_write_sv( char parameter_1,long parameter_2,short parameter_3,short parameter_4,unsigned int parameter_5,int parameter_6,char parameter_7,unsigned int parameter_8,double parameter_9)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_5 = 1;
	int int_5 = 1;
	long long_4 = 1;
	short short_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_6 = 1;
	short short_4 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = v_rasqal_query_results_is_bindings(int_2);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	char_2 = char_1 + char_1;
	int_1 = v_rasqal_query_results_get_bindings_count(short_1);

	char_1 = char_1 * char_2;
	int_1 = v_rasqal_query_results_finished(short_1);

	long_2 = long_1 + long_1;
	short_1 = v_rasqal_xsd_datatype_uri_to_type(double_1,unsigned_int_1);

	double_2 = double_2 * double_1;
	v_rasqal_log_error_simple(unsigned_int_4,unsigned_int_1,double_3,unsigned_int_5,short_1);

	int_4 = int_1 * int_3;
	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_3 = v_rasqal_query_results_get_query(char_1);

		double_2 = double_3;
		float_1 = v_rasqal_query_results_get_binding_name(double_3,int_4);

		int_3 = int_1 + int_3;
		if(1)
		{
			char char_3 = 1;
			char char_4 = 1;
			float_1 = float_1;
			char_3 = char_4;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short_2 = v_rasqal_query_results_get_binding_value(char_5,int_4);

				long_1 = long_1 + long_2;
			}
			double_2 = double_2;
			float_1 = float_1 + float_1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				float float_2 = 1;
				float_2 = float_1 * float_2;
			}
			long_1 = long_1;
		}
		int_1 = int_5 + int_5;
		int_4 = int_5;
		if(1)
		{
			long_4 = v_rasqal_iostream_write_csv_string(char_1,short_3,float_3);

			unsigned_int_6 = unsigned_int_4 + unsigned_int_1;
			double_5 = double_4 * double_4;
		}
		if(1)
		{
			int_6 = v_rasqal_query_results_next(long_1);

			unsigned_int_4 = unsigned_int_5;
		}
	}
	if(1)
	{
		int int_7 = 1;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_4;
		double_2 = double_2 + double_5;
		int_4 = int_5 * int_7;
	}
	if(1)
	{
		double double_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		double_4 = double_5 + double_6;
		unsigned_int_7 = unsigned_int_8;
		double_3 = double_1 + double_6;
	}
	return short_4;
}
short v_rasqal_query_results_write_csv( long parameter_1,double parameter_2,float parameter_3,short parameter_4)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	return short_1;
	short_1 = v_rasqal_query_results_write_sv(char_1,long_1,short_1,short_2,unsigned_int_1,int_1,char_1,unsigned_int_2,double_1);

}
void v_rasqal_query_results_csv_register_factory( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	v_rasqal_query_results_get_rowsource_csv(char_1,char_2,double_1,short_1,char_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_2;
	short_1 = v_rasqal_query_results_write_csv(long_1,double_2,float_3,short_2);

	char_2 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = v_rasqal_query_results_csv_recognise_syntax(char_3,long_2,int_1,int_1,long_3,long_2);

	int_3 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1;
	double_2 = double_1 * double_3;
}
int v_rasqal_init_result_format_sv( int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
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
	return int_1;
	char_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_1);

	v_rasqal_query_results_csv_register_factory(short_1);

	char_2 = v_rasqal_query_results_mkr_register_factory(char_1);

	short_2 = v_rasqal_query_results_tsv_register_factory(double_1);

}
double v_rasqal_query_results_write_table_boolean( float parameter_1,float parameter_2,short parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		double_1 = double_1;
		double_1 = double_1 * double_1;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		int_2 = int_1 * int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		short_1 = short_1;
	}
	return double_1;
	int_2 = v_rasqal_query_results_get_boolean(unsigned_int_2);

}
double v_rasqal_iostream_write_counted_string_padded( long parameter_1,char parameter_2,int parameter_3,float parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double_1 = double_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
		}
	}
	return double_1;
}
unsigned int v_rasqal_alloc_memory( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
char v_rasqal_free_chararray()
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	float_1 = float_1 * float_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 + int_1;
		}
	}
	short_1 = short_2;
	return char_3;
}
char v_rasqal_query_results_write_table_bindings( long parameter_1,char parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_2;
	float_1 = v_rasqal_query_results_get_world(unsigned_int_1);

	unsigned_int_2 = v_rasqal_alloc_memory(short_1);

	double_2 = double_1 + double_2;
	int_1 = v_rasqal_query_results_get_bindings_count(short_2);

	long_2 = long_1 + long_1;
	int_3 = v_rasqal_query_results_finished(short_2);

	short_1 = v_rasqal_query_results_get_binding_value(char_1,int_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = v_rasqal_query_results_next(long_2);

	double_3 = double_3 * double_4;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	long_4 = long_3 + long_4;
	v_rasqal_literal_write(unsigned_int_2,int_2);

	unsigned_int_1 = unsigned_int_5 * unsigned_int_4;
	double_4 = v_rasqal_iostream_write_counted_string_padded(long_4,char_1,int_1,float_1,unsigned_int_1);

	short_3 = short_3 + short_1;
	float_1 = v_rasqal_query_results_get_binding_name(double_5,int_3);

	char_2 = v_rasqal_free_chararray();

	int_1 = int_1;
	return char_1;
}
int v_rasqal_query_results_write_table( int parameter_1,char parameter_2,double parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	v_rasqal_log_error_simple(unsigned_int_1,unsigned_int_1,double_1,unsigned_int_1,short_1);

	int_1 = v_rasqal_query_results_type_label(double_2);

	int_3 = int_2 * int_2;
	long_1 = v_rasqal_query_results_get_query(char_1);

	double_2 = v_rasqal_query_results_write_table_boolean(float_1,float_1,short_1);

	char_1 = char_2 + char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int int_4 = 1;
		char_1 = v_rasqal_query_results_write_table_bindings(long_2,char_3,char_3);

		int_2 = int_4 * int_1;
	}
	return int_2;
	short_1 = v_rasqal_query_results_get_type(unsigned_int_3);

}
void v_rasqal_query_results_table_register_factory( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	double_3 = double_1 * double_2;
	double_4 = double_4 * double_4;
	int_1 = v_rasqal_query_results_write_table(int_1,char_1,double_1,char_2);

	char_4 = char_3 + char_4;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_4 + double_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_1;
	char_5 = char_2 + char_1;
}
int v_rasqal_init_result_format_table( unsigned int parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	return int_1;
	char_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_2);

	v_rasqal_query_results_table_register_factory(unsigned_int_2);

}
int v_rasqal_query_get_distinct( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	return int_1;
}
char v_rasqal_query_get_order_condition( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	return char_1;
}
char v_rasqal_iostream_write_json_boolean( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_2 + int_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	return char_1;
}
long v_rasqal_query_results_get_query( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return long_1;
}
char v_rasqal_query_results_write_json1( unsigned int parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = v_rasqal_iostream_write_json_boolean(long_1,unsigned_int_1,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float_1 = v_rasqal_query_results_get_binding_name(double_1,int_2);

		int_3 = v_rasqal_query_get_distinct(int_4);

		int_3 = v_rasqal_query_results_finished(short_1);

		short_3 = short_2 + short_3;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		long_1 = v_rasqal_query_results_get_query(char_2);

		short_3 = v_rasqal_query_results_get_type(unsigned_int_1);

		int_3 = v_rasqal_query_results_type_label(double_2);

		char_3 = v_rasqal_query_get_order_condition(short_1,int_2);

		int_2 = v_rasqal_query_results_get_bindings_count(short_3);

		float_4 = float_2 + float_3;
	}
	int_2 = v_rasqal_query_results_is_bindings(int_5);

	short_1 = v_rasqal_query_results_get_binding_value(char_4,int_3);

	int_6 = int_6 + int_5;
	v_rasqal_log_error_simple(unsigned_int_1,unsigned_int_3,double_3,unsigned_int_4,short_2);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	return char_3;
	float_4 = v_rasqal_query_results_get_world(unsigned_int_3);

	int_4 = v_rasqal_query_results_is_boolean(int_5);

	int_4 = v_rasqal_query_results_get_boolean(unsigned_int_5);

	int_6 = v_rasqal_query_results_next(long_1);

}
short v_rasqal_query_results_json_register_factory( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char_3 = char_1 + char_2;
	char_2 = v_rasqal_query_results_write_json1(unsigned_int_1,double_1,int_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1;
	int_1 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_2;
	double_2 = double_1 * double_1;
	int_2 = int_2 * int_3;
	return short_1;
}
int v_rasqal_init_result_format_json( short parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	return int_1;
	char_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_1);

	short_1 = v_rasqal_query_results_json_register_factory(unsigned_int_2);

}
unsigned int v_rasqal_sparql_xml_free_context( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
	if(1)
	{
		v_rasqal_free_variables_table(int_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
	}
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	double_1 = double_1 * double_2;
	return unsigned_int_2;
}
double v_rasqal_sparql_xml_start( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	char_2 = char_1 + char_1;
	long_1 = long_1 * long_1;
	int_2 = int_2 * int_2;
	return double_1;
}
double v_rasqal_rowsource_sparql_xml_get_boolean( int parameter_1,int parameter_2,short parameter_3,char parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	double_2 = double_1 * double_1;
	short_1 = short_2;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	unsigned_int_1 = v_rasqal_sparql_xml_free_context(char_2);

	int_1 = int_1 + int_1;
	if(1)
	{
		double_3 = v_rasqal_sparql_xml_start(float_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return double_2;
	char_1 = v_rasqal_sparql_xml_init_context(char_2,char_2,int_2,char_3);

}
double v_rasqal_query_results_xml_recognise_syntax( char parameter_1,short parameter_2,char parameter_3,float parameter_4,double parameter_5,float parameter_6)
{
	double double_1 = 1;
	if(1)
	{
	}
	return double_1;
}
void v_rasqal_expression_print_op( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float_3 = float_1 * float_2;
	int_2 = int_1 * int_2;
	char_1 = char_1 + char_1;
	long_1 = v_rasqal_expression_op_label();

}
int v_rasqal_expression_print( float parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	long long_6 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_7 = 1;
	long long_7 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_9 = 1;
	short short_5 = 1;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_5 = long_3 + long_4;
	char_1 = char_1;
	int_1 = int_2;
	int_2 = v_rasqal_literal_print(short_1,unsigned_int_1);

	int_3 = int_1 * int_2;
	short_1 = short_2 + short_3;
	short_1 = short_4;
	int_1 = int_2;
	if(1)
	{
		int_3 = int_4 * int_3;
		int_2 = int_4;
	}
	if(1)
	{
		char_2 = char_1 + char_2;
		float_2 = float_1 * float_1;
	}
	char_2 = char_2;
	double_1 = double_1 + double_2;
	float_2 = float_2 + float_3;
	short_4 = short_1 + short_4;
	float_5 = float_4 + float_3;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	char_4 = char_1 + char_3;
	short_4 = short_3 + short_1;
	int_4 = int_5;
	float_4 = float_2;
	double_2 = double_2 * double_3;
	char_1 = char_1 * char_5;
	int_2 = int_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	}
	int_4 = int_5 * int_5;
	double_4 = double_3 * double_1;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	short_4 = short_1 * short_1;
	double_5 = double_4;
	int_5 = int_4 + int_3;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
	int_3 = int_1;
	double_3 = double_6 + double_1;
	long_6 = long_1 + long_6;
	int_2 = int_5;
	v_rasqal_expression_print_op(long_1,int_3);

	int_2 = int_2 + int_4;
	int_1 = int_1 * int_1;
	double_2 = double_4 + double_2;
	int_6 = int_4 * int_1;
	unsigned_int_2 = unsigned_int_3;
	int_1 = int_4 + int_1;
	float_1 = float_2 + float_5;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
	int_7 = int_8;
	char_4 = char_2;
	int_6 = int_8 + int_1;
	unsigned_int_8 = unsigned_int_7 * unsigned_int_5;
	double_3 = double_1 + double_2;
	if(1)
	{
		long_2 = long_1;
	}
	unsigned_int_4 = unsigned_int_6 * unsigned_int_4;
	double_2 = double_7 + double_3;
	if(1)
	{
		long_1 = long_5 + long_6;
		long_5 = long_7 * long_1;
	}
	short_4 = short_1 + short_2;
	double_4 = double_6 + double_3;
	char_6 = char_2 * char_5;
	unsigned_int_2 = unsigned_int_9 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
	int_9 = int_7 * int_7;
	unsigned_int_9 = unsigned_int_5 * unsigned_int_2;
	short_1 = short_5 * short_3;
	long_3 = long_7;
	short_5 = short_1 + short_1;
	int_2 = int_9 + int_7;
	unsigned_int_5 = unsigned_int_8 * unsigned_int_3;
	return int_8;
}
int v_rasqal_variable_print( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_2 * double_1;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		long_2 = long_1 + long_2;
		int_1 = v_rasqal_literal_print(short_1,unsigned_int_1);

		float_3 = float_1 + float_2;
	}
	if(1)
	{
		long long_3 = 1;
		int_1 = v_rasqal_expression_print(float_1,short_1);

		long_3 = long_2 * long_1;
		double_2 = double_2 * double_2;
	}
	double_5 = double_4 * double_1;
	char_1 = char_1;
	return int_1;
}
int v_rasqal_new_rowsource_from_handler( short parameter_1,unsigned int parameter_2,unsigned int parameter_4,double parameter_5,int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_2 = float_1 * float_1;
	if(1)
	{
		if(1)
		{
			double_1 = double_1 * double_1;
		}
	}
	int_1 = int_1 + int_1;
	float_4 = float_2 * float_3;
	double_2 = double_2 * double_3;
	double_3 = double_2 * double_1;
	long_1 = long_1;
	int_1 = v_rasqal_variable_print(unsigned_int_1,unsigned_int_1);

	double_3 = double_2 * double_4;
	float_4 = float_3;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		char_1 = v_rasqal_new_variables_table_from_variables_table(int_1);

		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
	}
	v_rasqal_free_variable();

	char_1 = char_1 + char_2;
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2 * char_2;
	}
	if(1)
	{
		int int_2 = 1;
		v_rasqal_free_rowsource(unsigned_int_1);

		long_1 = long_1 * long_1;
		int_2 = int_1 * int_1;
	}
	return int_1;
}
char v_rasqal_new_variables_table_from_variables_table( int parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	return char_1;
}
int v_rasqal_row_print( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned_int_1 = v_rasqal_rowsource_get_variable_by_offset(float_1,int_1);

	double_1 = double_1 * double_1;
	int_1 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_3 = 1;
		int_3 = int_1 * int_2;
		int_2 = v_rasqal_literal_print(short_1,unsigned_int_3);

		long_1 = long_1 + long_1;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_2 + long_3;
			double_2 = double_2 + double_1;
			if(1)
			{
				double_2 = double_3 * double_2;
			}
		}
		long_3 = long_3;
		if(1)
		{
			double_3 = double_2 * double_2;
		}
		if(1)
		{
			char_1 = char_2;
		}
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_2 = 1;
			char_1 = char_2;
			if(1)
			{
				double double_5 = 1;
				double_5 = double_4 + double_2;
			}
			float_2 = float_1 + float_2;
		}
		double_4 = double_1 + double_3;
	}
	if(1)
	{
		int_2 = int_2 * int_3;
	}
	int_4 = int_1 + int_3;
	return int_3;
}
int v_rasqal_row_set_value_at( short parameter_1,int parameter_2,float parameter_3)
{
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		v_rasqal_new_literal_from_literal(float_1);

		int_2 = int_1 + int_1;
	}
	short_1 = short_2;
	return int_2;
	v_rasqal_free_literal(long_1);

}
short v_rasqal_sparql_xml_sax2_end_element_handler(long parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_3 = 1;
	int int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_9 = 1;
	int int_7 = 1;
	long long_5 = 1;
	int int_10 = 1;
	short short_6 = 1;
	int int_12 = 1;
	short short_7 = 1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_1 * int_1;
	int_1 = int_1 + int_2;
	int_2 = int_1 * int_2;
	int_1 = int_3 * int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		char_2 = char_1 + char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			v_rasqal_new_uri_literal(unsigned_int_3,unsigned_int_1);

			int_1 = int_2;
			short_2 = short_2 + short_1;
		}
	}
	if(1)
	{
		int_3 = int_2 * int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
		long_1 = v_rasqal_new_string_literal_node(float_1,long_1,short_2,unsigned_int_4,-1 );

		double_1 = double_1 * double_2;
	}
	if(1)
	{
		double_1 = double_3 * double_2;
	}
	char_2 = char_3 * char_3;
	if(1)
	{
		double_2 = double_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
		}
		if(1)
		{
			int_5 = int_4 * int_1;
		}
		double_3 = double_4 + double_3;
	}
	short_2 = short_3 + short_3;
	char controller_9[3];
	fgets(controller_9 ,3 ,stdin);
	if( strcmp( controller_9, "{6") > 0)
	{
		double double_7 = 1;
		short short_5 = 1;
		double double_8 = 1;
		int_6 = int_6 * int_1;
		float_3 = float_2 * float_1;
		char_2 = char_2 * char_2;
		unsigned_int_7 = unsigned_int_6 * unsigned_int_5;
		v_rasqal_new_simple_literal(short_3,unsigned_int_8,char_3);

		unsigned_int_7 = unsigned_int_8 * unsigned_int_3;
		if(1)
		{
			short_3 = short_2 * short_2;
		}
		if(1)
		{
			double_3 = double_4 * double_3;
		}
		if(1)
		{
			short short_4 = 1;
			short_4 = short_1;
		}
		if(1)
		{
			char_2 = char_4;
			long_2 = long_1 + long_2;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_9;
		}
		double_1 = double_1 * double_5;
		double_6 = double_6 * double_7;
		short_1 = short_1 * short_5;
		double_6 = double_8 * double_9;
	}
	long_1 = long_2;
	if(1)
	{
		int int_8 = 1;
		int int_9 = 1;
		long long_3 = 1;
		char_1 = char_2 + char_4;
		int_7 = int_4 * int_4;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
		char_1 = char_3;
		int_2 = int_5;
		int_9 = int_3 + int_8;
		unsigned_int_4 = unsigned_int_9;
		long_3 = long_2 + long_3;
	}
	float_3 = float_1 + float_2;
	if(1)
	{
		long long_4 = 1;
		long_1 = long_1 + long_4;
		int_6 = int_7;
		int_6 = int_1 + int_5;
		long_5 = long_1 * long_4;
		double_6 = double_9;
		int_6 = int_2 * int_7;
		int_3 = int_7 * int_1;
	}
	unsigned_int_4 = unsigned_int_6;
	if(1)
	{
		int int_11 = 1;
		int_10 = v_rasqal_row_set_value_at(short_6,int_2,float_3);

		int_11 = int_11 + int_11;
		char_2 = char_3;
		v_rasqal_free_literal(long_5);

		unsigned_int_6 = unsigned_int_7 * unsigned_int_3;
	}
	double_2 = double_5;
	char_4 = char_4 * char_2;
	int_10 = int_5 + int_12;
	if(1)
	{
		char char_5 = 1;
		char char_6 = 1;
		char_6 = char_5 + char_4;
		unsigned_int_5 = unsigned_int_3;
	}
	return short_7;
}
int v_rasqal_sparql_xml_sax2_characters_handler(float parameter_2,unsigned int parameter_3,int parameter_4)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char_1 = char_1 + char_1;
	short_1 = short_1;
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char_3 = char_1 * char_2;
		float_2 = float_1 * float_2;
		int_2 = int_1 * int_1;
		short_3 = short_1 * short_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	return int_2;
}
long v_rasqal_new_row_common( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	int_1 = int_1;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	char_1 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
		if(1)
		{
			int int_3 = 1;
			int_3 = int_3;
		}
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_3 + double_1;
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1;
		}
	}
	v_rasqal_free_row(unsigned_int_3);

	short_1 = short_2;
	return long_1;
}
int v_rasqal_rowsource_get_size( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	char_1 = char_2;
	return int_1;
	int_1 = v_rasqal_rowsource_ensure_variables(double_1);

}
char v_rasqal_new_rowsource_from_rowsource( unsigned int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	short_1 = short_1;
	return char_1;
}
double v_rasqal_new_row()
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	float_1 = float_1 + float_1;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	int_1 = v_rasqal_rowsource_get_size(double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = v_rasqal_new_row_common(short_1,int_2,int_1);

	long_2 = long_1 * long_1;
	float_2 = float_1 + float_1;
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2;
	}
	return double_2;
	char_1 = v_rasqal_new_rowsource_from_rowsource(unsigned_int_1);

}
int v_rasqal_rowsource_get_variable_offset_by_name( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_1;
	int_1 = int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_3 = int_2 + int_2;
		int_3 = v_rasqal_rowsource_ensure_variables(double_2);

		double_3 = double_4;
		if(1)
		{
			double double_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double_1 = double_5;
			float_2 = float_1 * float_1;
		}
	}
	return int_1;
}
int v_rasqal_rowsource_add_variable( short parameter_1,long parameter_2)
{
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	float_1 = v_rasqal_new_variable_from_variable(short_1);

	char_1 = char_1 + char_2;
	if(1)
	{
	}
	char_4 = char_3 * char_2;
	if(1)
	{
	}
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_rasqal_rowsource_get_variable_offset_by_name(float_1,short_2);

	int_1 = int_1 + int_2;
	return int_1;
}
double v_rasqal_sparql_xml_sax2_start_element_handler(int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_7 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_4 = 1;
	double double_8 = 1;
	long long_5 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 + char_1;
	double_1 = double_1 + double_2;
	int_1 = int_1 * int_1;
	double_4 = double_1 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_4 = double_5 + double_3;
			float_1 = v_rasqal_variables_table_add2(short_1,char_1,int_2,double_6,float_2);

			float_3 = float_3 * float_3;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_2 * char_3;
		int_2 = v_rasqal_rowsource_get_variable_offset_by_name(float_3,short_2);

		double_7 = double_6 * double_1;
	}
	if(1)
	{
		int_2 = int_1 + int_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	double_6 = double_7 * double_4;
	long_1 = long_1 * long_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
	float_2 = float_3;
	if(1)
	{
		short_4 = short_3 + short_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_2 = 1;
			long_2 = long_2 * long_3;
			if(1)
			{
				float_5 = float_4 * float_3;
				int_2 = int_1 + int_1;
			}
			if(1)
			{
				long_4 = long_3;
			}
			if(1)
			{
				char_2 = char_2;
			}
		}
	}
	if(1)
	{
		double_8 = double_6;
		if(1)
		{
			double_5 = double_8 * double_6;
			double_7 = v_rasqal_new_row();

			long_5 = long_3 + long_4;
		}
	}
	char controller_10[2];
	fgets(controller_10 ,2 ,stdin);
	if( strcmp( controller_10, "v") < 0)
	{
		double_8 = double_2 + double_4;
		short_4 = short_3;
		if(1)
		{
			float_4 = float_2 + float_2;
			long_4 = long_1;
		}
	}
	short_6 = short_5 * short_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		int_4 = v_rasqal_rowsource_add_variable(short_6,long_5);

		double_7 = double_2;
		unsigned_int_3 = unsigned_int_5;
		long_1 = long_1 + long_3;
	}
	int_2 = int_5 + int_2;
	int_3 = int_1 + int_6;
	float_4 = float_5;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_1;
	int_1 = int_5 * int_1;
	return double_2;
	v_rasqal_free_variable();

}
char v_rasqal_sparql_xml_init_context( char parameter_1,char parameter_2,int parameter_3,char parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_2 + int_1;
	long_3 = long_1 + long_2;
	double_1 = double_2;
	double_2 = double_3 + double_4;
	int_4 = int_3 + int_4;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 * float_2;
	int_2 = v_rasqal_sparql_xml_sax2_characters_handler(float_1,unsigned_int_1,int_3);

	short_2 = short_1 * short_2;
	short_1 = v_rasqal_sparql_xml_sax2_end_element_handler(long_2);

	short_1 = short_3 * short_2;
	return char_1;
	double_2 = v_rasqal_sparql_xml_sax2_start_element_handler(int_4);

}
short v_rasqal_query_results_get_rowsource_sparql_xml( double parameter_1,long parameter_2,float parameter_3,short parameter_4,short parameter_5,int parameter_6)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	short short_3 = 1;
	int_1 = v_rasqal_new_rowsource_from_handler(short_1,unsigned_int_1,unsigned_int_2,double_1,int_1);

	int_2 = int_2 + int_2;
	char_1 = v_rasqal_sparql_xml_init_context(char_1,char_1,int_2,char_2);

	int_2 = v_rasqal_row_print(unsigned_int_1,short_2);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_4;
	v_rasqal_free_row(unsigned_int_4);

	int_3 = int_1 + int_3;
	return short_3;
	char_1 = v_rasqal_new_variables_table_from_variables_table(int_3);

}
int v_rasqal_query_results_next_internal( unsigned int parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		char_1 = v_rasqal_query_results_ensure_have_row_internal(short_1);

		short_1 = short_1;
		char_2 = char_1 + char_1;
	}
	return int_1;
	v_rasqal_free_row(unsigned_int_1);

}
int v_rasqal_query_results_next( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	return int_1;
	int_2 = v_rasqal_query_results_is_bindings(int_3);

	int_2 = v_rasqal_query_results_next_internal(unsigned_int_1);

}
short v_rasqal_query_results_get_binding_value( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = v_rasqal_query_results_get_current_row(int_1);

	char_2 = char_1 * char_2;
	int_1 = v_rasqal_query_results_is_bindings(int_2);

	short_2 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_3 = int_1 * int_3;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	return short_1;
}
int v_rasqal_query_results_get_bindings_count( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = v_rasqal_query_results_is_bindings(int_2);

	char_1 = v_rasqal_query_results_ensure_have_row_internal(short_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
int v_rasqal_query_results_finished( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double double_3 = 1;
		char_1 = v_rasqal_query_results_ensure_have_row_internal(short_1);

		double_2 = double_3;
	}
	return int_1;
	int_2 = v_rasqal_query_results_is_bindings(int_3);

}
int v_rasqal_query_results_get_boolean( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	int_2 = v_rasqal_query_results_is_boolean(int_2);

	double_1 = double_1 + double_2;
	double_3 = double_3 + double_3;
	float_2 = float_1 * float_1;
	return int_2;
	char_1 = v_rasqal_query_results_ensure_have_row_internal(short_1);

}
int v_rasqal_query_results_is_boolean( int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	return int_1;
}
int v_rasqal_variables_table_contains( double parameter_1,double parameter_2,char parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return int_1;
	long_1 = v_rasqal_variables_table_get_by_name(short_1,float_1,unsigned_int_1);

}
int v_rasqal_variables_table_add_variable( unsigned int parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_5 = 1;
	float float_5 = 1;
	long_1 = long_1 * long_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	float_1 = v_rasqal_new_variable_from_variable(short_1);

	short_2 = short_2 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	float_2 = float_2 + float_2;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	int_3 = int_1 + int_3;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	int_3 = int_3;
	if(1)
	{
		float float_4 = 1;
		float_4 = float_3 + float_4;
	}
	if(1)
	{
		int_4 = v_rasqal_variables_table_contains(double_3,double_4,char_3);

		int_1 = int_1 + int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_3 = 1;
			char char_4 = 1;
			long_3 = long_1 * long_2;
			char_3 = char_4 * char_5;
			float_5 = float_3 * float_1;
		}
	}
	if(1)
	{
		float_1 = float_5 * float_5;
		char_5 = char_1;
	}
	return int_4;
}
float v_rasqal_new_variable_from_variable( short parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	long_1 = long_1 + long_1;
	int_2 = int_1 + int_1;
	return float_1;
}
float v_rasqal_variables_table_add2( short parameter_1,char parameter_2,int parameter_3,double parameter_4,float parameter_5)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int_1 = v_rasqal_variables_table_add_variable(unsigned_int_1,long_1);

	int_3 = int_1 + int_2;
	if(1)
	{
		long long_3 = 1;
		long_3 = long_2 * long_3;
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		double_1 = double_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_1 = int_2 * int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	long_4 = long_2 * long_1;
	short_1 = short_2;
	float_1 = float_1 + float_2;
	double_1 = double_2 + double_3;
	double_3 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_3;
	short_1 = short_2 * short_1;
	if(1)
	{
		float_1 = v_rasqal_new_variable_from_variable(short_1);

		v_rasqal_new_literal_from_literal(float_3);

		float_1 = float_1 + float_1;
	}
	if(1)
	{
		long_4 = v_rasqal_variables_table_get_by_name(short_2,float_4,unsigned_int_2);

		short_2 = short_2 + short_1;
	}
	return float_5;
}
char v_rasqal_rowsource_print_header( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	int_2 = int_1 * int_2;
	short_1 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		double double_3 = 1;
		float float_3 = 1;
		unsigned_int_1 = v_rasqal_rowsource_get_variable_by_offset(float_1,int_3);

		double_1 = double_1 + double_2;
		int_4 = int_1 + int_3;
		double_3 = double_3 * double_2;
		if(1)
		{
			float float_2 = 1;
			float_1 = float_2 * float_3;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_2;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
		if(1)
		{
			float float_4 = 1;
			float_4 = float_4 + float_3;
		}
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	return char_3;
}
int v_rasqal_rowsource_ensure_variables( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_5 = 1;
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_4 = int_3 * int_2;
		float_2 = float_1 * float_2;
	}
	return int_2;
	char_1 = v_rasqal_rowsource_print_header(int_5,int_5);

}
unsigned int v_rasqal_rowsource_get_variable_by_offset( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	if(1)
	{
	}
	return unsigned_int_1;
	int_1 = v_rasqal_rowsource_ensure_variables(double_1);

}
char v_rasqal_row_get_variable_by_offset( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	return char_1;
	unsigned_int_1 = v_rasqal_rowsource_get_variable_by_offset(float_1,int_1);

}
void v_rasqal_free_variables_table( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
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
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		float_1 = float_2 + float_2;
	}
	double_1 = double_3;
}
void v_rasqal_free_rowsource( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		v_rasqal_free_variables_table(int_3);

		char_2 = char_1 * char_2;
	}
	if(1)
	{
		int_1 = int_3;
	}
	if(1)
	{
		int_1 = int_3 + int_2;
	}
	double_1 = double_1 + double_1;
}
void v_rasqal_free_row( unsigned int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_1 + int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
		}
		long_1 = long_1 * long_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int_1 = int_2 * int_2;
			}
		}
		long_1 = long_2 * long_2;
	}
	if(1)
	{
		v_rasqal_free_rowsource(unsigned_int_1);

		unsigned_int_2 = unsigned_int_1;
	}
	long_3 = long_1 * long_2;
	v_rasqal_free_literal(long_3);

}
long v_rasqal_variables_table_get_by_name( short parameter_1,float parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	char_1 = char_1 * char_1;
	double_3 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return long_1;
	long_2 = v_rasqal_variables_table_get(long_3,int_1);

}
long v_rasqal_variables_table_get( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_2 = float_2 * float_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_2 = int_1 + int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	return long_1;
}
int v_rasqal_variables_table_get_named_variables_count( int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
unsigned int v_rasqal_query_results_update_query_bindings( long parameter_1,char parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = v_rasqal_variables_table_get_by_name(short_1,float_1,unsigned_int_1);

	double_2 = double_1 + double_1;
	long_2 = v_rasqal_variables_table_get(long_3,int_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	int_2 = int_2 + int_1;
	v_rasqal_variable_set_value(double_1,short_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	short_2 = short_1 + short_2;
	char_1 = v_rasqal_query_results_ensure_have_row_internal(short_1);

	int_2 = int_1 + int_1;
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	v_rasqal_new_literal_from_literal(float_1);

	float_1 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		long long_4 = 1;
		int_3 = v_rasqal_variables_table_get_named_variables_count(int_1);

		char_1 = char_1 * char_1;
		int_3 = int_4 * int_1;
		int_3 = int_2 * int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		long_1 = long_4 * long_2;
		if(1)
		{
			int_3 = int_4 * int_4;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_2 + char_1;
		}
	}
	return unsigned_int_4;
}
int v_rasqal_literal_as_node( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_1 * float_2;
	int_1 = int_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	double_1 = double_3 * double_3;
	if(1)
	{
	}
	double_1 = double_3 * double_4;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		v_rasqal_new_literal_from_literal(float_2);

		long_1 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_5,float_3);

		short_1 = short_2;
		short_1 = short_1 + short_1;
		short_1 = short_3 * short_3;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		if(1)
		{
			int int_2 = 1;
			int_2 = int_2 + int_2;
		}
		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		if(1)
		{
			long long_2 = 1;
			long long_4 = 1;
			long_4 = long_2 * long_3;
			if(1)
			{
				double double_5 = 1;
				double_3 = double_5 + double_5;
			}
		}
		if(1)
		{
			v_rasqal_free_literal(long_3);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		}
		char_2 = char_1 + char_1;
		short_3 = short_1 + short_3;
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_7 = unsigned_int_6 * unsigned_int_4;
	return int_3;
}
int v_rasqal_row_to_nodes( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			double_2 = double_1 * double_2;
			char_2 = char_1 + char_2;
			if(1)
			{
			}
			int_2 = v_rasqal_literal_as_node(unsigned_int_1);

			v_rasqal_free_literal(long_1);

			int_3 = int_2 * int_2;
			short_1 = short_1 + short_1;
		}
	}
	return int_3;
}
char v_rasqal_new_row_from_row( float parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	int_1 = int_1;
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
			if(1)
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
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_rasqal_query_get_limit( double parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_rasqal_query_check_limit_offset( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	int int_5 = 1;
	int_1 = v_rasqal_query_get_limit(double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = v_rasqal_query_check_limit_offset_core(int_3,int_2,int_3);

	short_3 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	short_4 = short_3;
	if(1)
	{
		int int_4 = 1;
		int_2 = v_rasqal_query_get_offset(long_1);

		int_4 = int_3 * int_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return int_5;
}
int v_rasqal_query_results_get_row_from_saved( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 * double_2;
	float_2 = float_1 * float_1;
	short_1 = short_2;
	float_2 = float_1 * float_3;
	double_3 = double_3 * double_2;
	unsigned_int_2 = v_rasqal_query_results_update_query_bindings(long_1,char_1);

	int_3 = int_1 + int_2;
	int_1 = int_3 + int_3;
	int_4 = v_rasqal_row_to_nodes(int_3);

	short_1 = short_2 * short_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	int_2 = v_rasqal_query_check_limit_offset(double_2,int_1);

	int_4 = int_3 * int_2;
	int_5 = int_5;
	double_1 = double_4;
	char_2 = v_rasqal_new_row_from_row(float_2);

	float_2 = float_4 * float_5;
	return int_4;
}
char v_rasqal_query_results_ensure_have_row_internal( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_rasqal_free_row(unsigned_int_2);

	int_3 = int_1 + int_2;
	float_1 = v_rasqal_variables_table_add2(short_1,char_1,int_2,double_1,float_2);

	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	return char_2;
	int_2 = v_rasqal_query_results_get_row_from_saved(char_2);

	int_1 = v_rasqal_query_check_limit_offset(double_2,int_3);

	int_4 = v_rasqal_row_to_nodes(int_4);

	char_2 = v_rasqal_row_get_variable_by_offset(short_1,int_1);

	v_rasqal_free_variable();

}
unsigned int v_rasqal_query_results_get_current_row( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	return unsigned_int_1;
	int_1 = v_rasqal_query_results_is_bindings(int_1);

	char_1 = v_rasqal_query_results_ensure_have_row_internal(short_3);

}
float v_rasqal_query_results_get_binding_name( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = v_rasqal_query_results_get_current_row(int_1);

	long_1 = v_rasqal_variables_table_get(long_2,int_2);

	int_2 = int_2 + int_1;
	double_1 = double_2;
	short_1 = short_2;
	if(1)
	{
	}
	int_3 = v_rasqal_query_results_is_bindings(int_3);

	int_1 = int_3 + int_2;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	if(1)
	{
	}
	return float_1;
}
int v_rasqal_query_results_is_bindings( int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_1;
	return int_1;
}
int v_rasqal_query_results_type_label( double parameter_1)
{
	int int_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return int_2;
}
short v_rasqal_query_results_get_type( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
float v_rasqal_query_results_get_world( unsigned int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double_1 = double_1;
	return float_1;
}
unsigned int v_rasqal_query_results_write_sparql_xml( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	int int_5 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int_1 = v_rasqal_query_results_is_boolean(int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = v_rasqal_query_results_get_bindings_count(short_1);

	double_1 = double_1 + double_1;
	short_1 = v_rasqal_query_results_get_type(unsigned_int_3);

	char_2 = char_1 + char_1;
	int_2 = v_rasqal_query_results_type_label(double_1);

	int_2 = v_rasqal_query_results_is_bindings(int_1);

	float_1 = v_rasqal_query_results_get_binding_name(double_2,int_2);

	int_3 = v_rasqal_query_results_get_boolean(unsigned_int_1);

	int_4 = v_rasqal_query_results_next(long_1);

	double_1 = double_1 + double_1;
	int_5 = v_rasqal_query_results_finished(short_2);

	double_2 = double_1 + double_1;
	double_3 = double_2 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_2 = v_rasqal_query_results_get_world(unsigned_int_2);

		v_rasqal_log_error_simple(unsigned_int_3,unsigned_int_1,double_4,unsigned_int_2,short_2);

		short_1 = v_rasqal_query_results_get_binding_value(char_2,int_1);

		double_1 = double_4 * double_2;
	}
	return unsigned_int_3;
}
short v_rasqal_query_results_sparql_xml_register_factory( float parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long_1 = long_1 * long_1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = int_1 * int_2;
	short_1 = v_rasqal_query_results_get_rowsource_sparql_xml(double_3,long_2,float_1,short_1,short_2,int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	int_4 = int_1 * int_3;
	short_1 = short_2;
	double_1 = v_rasqal_query_results_xml_recognise_syntax(char_1,short_3,char_1,float_2,double_2,float_1);

	int_4 = int_1 * int_2;
	return short_4;
	unsigned_int_1 = v_rasqal_query_results_write_sparql_xml(unsigned_int_4,unsigned_int_2,double_4,double_4);

	double_4 = v_rasqal_rowsource_sparql_xml_get_boolean(int_3,int_4,short_1,char_2,int_3);

}
char v_rasqal_world_register_query_results_format_factory( unsigned int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_3 = 1;
	float_1 = float_1;
	float_1 = float_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	v_rasqal_log_error_simple(unsigned_int_1,unsigned_int_3,double_1,unsigned_int_2,short_1);

	float_2 = float_3 * float_2;
	if(1)
	{
		short short_2 = 1;
		short_2 = short_2 * short_1;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_4 = 1;
		char_1 = char_2;
		float_3 = float_4;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_4;
	}
	v_rasqal_free_query_results_format_factory(unsigned_int_3);

	short_5 = short_3 + short_4;
	return char_3;
}
int v_rasqal_init_result_format_sparql_xml( double parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	return int_1;
	char_1 = v_rasqal_world_register_query_results_format_factory(unsigned_int_1,int_1);

	short_1 = v_rasqal_query_results_sparql_xml_register_factory(float_1);

}
void v_rasqal_free_query_results_format_factory( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	double_2 = double_1 + double_2;
}
int v_rasqal_init_result_formats( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_3 = 1;
	char char_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = v_rasqal_init_result_format_sv(int_2);

	short_2 = short_1 + short_1;
	int_2 = int_3 + int_2;
	if(1)
	{
	}
	int_2 = v_rasqal_init_result_format_html(long_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_1;
	v_rasqal_free_query_results_format_factory(unsigned_int_1);

	char_5 = char_3 + char_4;
	int_2 = v_rasqal_init_result_format_json(short_3);

	char_6 = char_6 + char_4;
	double_1 = double_2;
	int_4 = v_rasqal_init_result_format_sparql_xml(double_2);

	int_4 = v_rasqal_init_result_format_table(unsigned_int_1);

	int_4 = v_rasqal_init_result_format_turtle(double_3);

	int_2 = v_rasqal_init_result_format_rdf(double_2);

	long_2 = long_1 + long_1;
	double_5 = double_2 + double_4;
	return int_1;
}
int v_rasqal_init_query_results()
{
	int int_1 = 1;
	return int_1;
}
double v_rasqal_raptor_init_triples_source2( short parameter_1,unsigned int parameter_2,float parameter_5,char parameter_6,long parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	return double_1;
	double_2 = v_rasqal_raptor_init_triples_source_common(double_1,long_1,int_1,short_1,double_3,float_1,float_2);

}
int v_rasqal_raptor_init_triples_source( float parameter_1,float parameter_4,unsigned int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int int_2 = 1;
		int_3 = int_1 * int_2;
	}
	return int_3;
	double_1 = v_rasqal_raptor_init_triples_source_common(double_2,long_1,int_1,short_1,double_3,float_1,float_1);

}
void v_rasqal_triples_source_error_handler2( char parameter_1,char parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long_2 = long_1 * long_1;
	v_rasqal_log_error_simple(unsigned_int_1,unsigned_int_2,double_1,unsigned_int_1,short_1);

}
float v_rasqal_raptor_generate_id_handler(float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int_1 = int_1 * int_2;
	short_1 = short_1 + short_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		short_4 = short_3 + short_1;
		unsigned_int_1 = v_rasqal_raptor_get_genid(double_1,double_1,int_1);

		long_1 = long_1 * long_2;
		int_1 = int_2 + int_2;
		double_1 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_1;
	}
	return float_1;
}
double v_rasqal_new_triple( int parameter_1,long parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int_2 = int_1 * int_1;
	double_2 = double_1 + double_2;
	if(1)
	{
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_2 = double_2 * double_2;
		char_1 = char_1;
		double_2 = double_3 * double_4;
	}
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			v_rasqal_free_literal(long_1);

			int_3 = int_2 * int_1;
		}
		if(1)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return double_2;
}
void v_rasqal_new_simple_literal( short parameter_1,unsigned int parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 + short_2;
	double_1 = double_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		unsigned_int_2 = unsigned_int_1;
		double_4 = double_3 + double_3;
		double_4 = double_2 + double_1;
		float_1 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
		char char_3 = 1;
		char_1 = char_3 + char_2;
	}
}
long v_rasqal_new_literal_from_term( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 + double_1;
	int_1 = int_1;
	float_1 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		float float_3 = 1;
		short_1 = short_1;
		double_3 = double_3 * double_3;
		short_3 = short_2 * short_3;
		char_2 = char_1 * char_2;
		if(1)
		{
			double_4 = double_1 * double_4;
		}
		double_5 = double_3;
		if(1)
		{
			double_1 = v_rasqal_new_string_literal(short_4,double_3,float_1,int_1,short_1);

			unsigned_int_1 = unsigned_int_2;
			long_3 = long_1 * long_2;
			if(1)
			{
				int_2 = int_2 + int_1;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			long_5 = long_4 + long_2;
		}
		v_rasqal_new_uri_literal(unsigned_int_1,unsigned_int_3);

		float_3 = float_3 * float_1;
	}
	if(1)
	{
		long long_6 = 1;
		double double_6 = 1;
		long_3 = long_6 + long_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			float float_4 = 1;
			float_2 = float_1 + float_4;
		}
		long_6 = long_6;
		double_6 = double_5 + double_4;
	}
	if(1)
	{
		int int_3 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int_2 = int_2 * int_3;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		double_2 = double_7 + double_8;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		v_rasqal_new_simple_literal(short_4,unsigned_int_4,char_2);

		int_2 = int_1 + int_2;
	}
	return long_1;
}
short v_raptor_statement_as_rasqal_triple( short parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	float_1 = float_2;
	long_1 = v_rasqal_new_literal_from_term(short_1,long_2);

	double_1 = v_rasqal_new_triple(int_1,long_3,float_2);

	int_3 = int_1 + int_2;
	double_2 = double_2 * double_2;
	float_2 = float_3 * float_2;
	return short_2;
}
void v_rasqal_raptor_statement_handler(long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_5 = 1;
	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 + double_2;
	short_1 = short_2;
	v_rasqal_triple_set_origin(double_1,long_1);

	double_3 = double_1 * double_2;
	short_4 = short_3 * short_4;
	long_3 = long_2 + long_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "9") < 0)
	{
		double double_4 = 1;
		double_4 = double_2 + double_2;
	}
	if(1)
	{
		long_4 = long_3 * long_2;
	}
	long_2 = long_4 * long_3;
	short_1 = v_raptor_statement_as_rasqal_triple(short_5,double_1);

}
unsigned int v_rasqal_raptor_get_genid( double parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	return unsigned_int_1;
}
void v_rasqal_new_uri_literal( unsigned int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_3 = 1;
		short_3 = short_1 + short_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_3;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_6;
		int_3 = int_1;
	}
	if(1)
	{
		short short_4 = 1;
		short_1 = short_4 + short_4;
	}
}
double v_rasqal_raptor_support_feature(int parameter_2)
{
	double double_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double_1 = double_1 + double_2;
		}
	}
	return double_2;
}
void v_rasqal_free_triple( float parameter_1)
{
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		int_2 = int_2 * int_3;
	}
	if(1)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_4 * int_4;
	}
	v_rasqal_free_literal(long_1);

	double_4 = double_3 + double_2;
}
void v_rasqal_triple_set_origin( double parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char_2 = char_1 * char_2;
	short_1 = short_1 + short_1;
}
long v_rasqal_raptor_free_triples_source()
{
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	return long_1;
	v_rasqal_triple_set_origin(double_1,long_1);

	v_rasqal_free_triple(float_1);

	v_rasqal_free_literal(long_2);

}
void v_rasqal_raptor_triple_present( double parameter_1,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1 + char_2;
	int_2 = int_1 * int_2;
	int_2 = int_3 + int_2;
	int_3 = v_rasqal_raptor_triple_match(float_1,int_2,short_1,float_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int_2 = int_3 * int_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
}
void v_rasqal_raptor_finish_triples_match( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_2 = char_1 * char_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_3;
	}
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2 + char_1;
	}
	v_rasqal_free_literal(long_1);

	float_2 = float_1 * float_2;
}
long v_rasqal_raptor_is_end( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_2;
	float_3 = float_1 + float_2;
	return long_1;
}
int v_rasqal_raptor_triple_match( float parameter_1,int parameter_2,short parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_6 = 1;
	int_1 = v_rasqal_literal_equals_flags(int_2,short_1,int_1,int_2,-1 );

	double_1 = double_1 + double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_4 = int_3 * int_1;
	double_1 = double_1;
	int_5 = int_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			int_5 = int_3 + int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
	}
	if(1)
	{
		double double_3 = 1;
		if(1)
		{
			double_3 = double_1 * double_1;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
				int_1 = v_rasqal_triple_print(short_2,float_1);

				char_2 = char_1 + char_1;
				if(1)
				{
					double double_4 = 1;
					double_4 = double_3;
				}
			}
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
		}
	}
	char_2 = char_1 + char_1;
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	return int_6;
}
unsigned int v_rasqal_literal_as_variable( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	return unsigned_int_2;
}
void v_rasqal_raptor_next_match( int parameter_1)
{
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	short short_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_5 = 1;
		char char_4 = 1;
		int int_6 = 1;
		char_1 = char_1 * char_1;
		long_2 = long_1 * long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_1 = 1;
				double double_2 = 1;
				float_2 = float_1 + float_1;
				unsigned_int_1 = v_rasqal_literal_as_variable(long_3);

				float_1 = float_3;
				double_3 = double_1 * double_2;
				float_2 = float_3;
				int_1 = int_1 * int_2;
				if(1)
				{
					char_3 = char_2 + char_2;
				}
				double_3 = double_3;
				if(1)
				{
					int int_3 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_4 = 1;
					int_2 = int_2 + int_3;
					if(1)
					{
						unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
					}
					if(1)
					{
						int_2 = v_rasqal_raptor_triple_match(float_3,int_1,short_1,float_2);

						unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
					}
					char_2 = char_2 + char_3;
					if(1)
					{
						unsigned_int_4 = unsigned_int_2;
					}
					double_3 = double_1 * double_1;
				}
				if(1)
				{
					unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
					float_1 = float_3 * float_1;
					double_2 = double_2;
				}
				if(1)
				{
					long long_4 = 1;
					long_2 = long_4 + long_1;
				}
			}
		}
		short_3 = short_2 * short_1;
		short_1 = short_2;
		short_1 = short_1 + short_2;
		int_4 = int_1 + int_4;
		short_2 = short_2 + short_4;
		double_4 = double_4 * double_4;
		int_2 = v_rasqal_triple_print(short_4,float_3);

		short_2 = short_5 + short_1;
		char_2 = char_2 + char_4;
		int_6 = int_1 + int_5;
		short_5 = short_2 * short_2;
		double_3 = double_3 * double_1;
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			v_rasqal_variable_set_value(double_4,short_1);

			unsigned_int_3 = unsigned_int_5 + unsigned_int_6;
			int_1 = int_4 + int_6;
		}
		if(1)
		{
			char char_5 = 1;
			char_5 = char_3 * char_3;
		}
	}
	int_4 = int_4 * int_5;
}
int v_rasqal_literal_equals( double parameter_1,short parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	return int_1;
	int_1 = v_rasqal_literal_equals_flags(int_1,short_1,int_2,int_2,-1 );

}
int v_rasqal_xsd_decimal_equals( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_3 = long_1 + long_2;
	int_1 = v_rasqal_double_approximately_equal(double_1,double_1);

	long_3 = long_4 * long_3;
	double_1 = double_2 * double_1;
	double_3 = double_2 * double_1;
	long_1 = long_5;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	int_2 = int_2 + int_2;
	char_2 = char_1 + char_1;
	char_1 = char_2 + char_1;
	unsigned_int_1 = unsigned_int_5 * unsigned_int_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	return int_2;
}
int v_rasqal_double_approximately_compare( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 * long_1;
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_1;
	float_3 = float_1 * float_2;
	int_1 = int_1 * int_1;
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
	double double_2 = 1;
	return int_1;
	int_2 = v_rasqal_double_approximately_compare(double_1,double_2);

}
int v_rasqal_xsd_datetime_compare2( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
		float_1 = v_rasqal_xsd_timeline_compare(short_1,float_2,double_1,long_1,short_2,int_1,int_2);

		short_2 = short_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "R") > 0)
	{
		double double_2 = 1;
		if(1)
		{
		}
		double_2 = double_1 + double_1;
	}
	return int_3;
}
int v_rasqal_xsd_datetime_equals2( float parameter_1,short parameter_2,int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = v_rasqal_xsd_datetime_compare2(long_1,unsigned_int_1,int_2);

	long_3 = long_2 * long_2;
	return int_1;
}
float v_rasqal_xsd_timeline_compare( short parameter_1,float parameter_2,double parameter_3,long parameter_4,short parameter_5,int parameter_6,int parameter_7)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 * double_2;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 * int_1;
		}
		if(1)
		{
			char char_2 = 1;
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			if(1)
			{
				short_4 = short_3 * short_3;
			}
			long_2 = long_1 * long_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		}
		if(1)
		{
			short_4 = short_3 * short_3;
		}
		if(1)
		{
			float float_1 = 1;
			if(1)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_2 = double_3 * double_4;
			}
			float_1 = float_1 + float_2;
		}
	}
	return float_2;
}
int v_rasqal_xsd_date_compare( float parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		float_1 = v_rasqal_xsd_timeline_compare(short_1,float_2,double_1,long_1,short_1,int_1,int_2);

		long_2 = long_2 * long_3;
	}
	if(1)
	{
		if(1)
		{
		}
		double_1 = double_1;
	}
	return int_1;
}
int v_rasqal_xsd_date_equals( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return int_1;
	int_1 = v_rasqal_xsd_date_compare(float_1,float_2,int_1);

}
void v_rasqal_literal_blank_equals( unsigned int parameter_1,double parameter_2)
{
	if(1)
	{
	}
}
int v_rasqal_strcasecmp( long parameter_1,float parameter_2)
{
	int int_1 = 1;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 * double_2;
		}
	}
	return int_1;
}
int v_rasqal_literal_string_languages_compare( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double_1 = double_2;
	short_1 = short_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		double double_3 = 1;
		int_1 = v_rasqal_strcasecmp(long_1,float_1);

		double_3 = double_1 + double_3;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ")b") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	return int_1;
}
double v_rasqal_literal_string_equals_flags( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	int_2 = int_1 + int_2;
	long_1 = long_1 * long_2;
	int_1 = int_2;
	long_1 = long_1;
	long_3 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_1,float_1);

	short_1 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_1 = v_rasqal_literal_string_languages_compare(long_3,unsigned_int_1);

		int_1 = int_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_2;
	int_1 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 * char_1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			float float_2 = 1;
			float_2 = float_2 * float_1;
			unsigned_int_4 = unsigned_int_5;
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
			}
			int_1 = int_2 + int_1;
			unsigned_int_5 = unsigned_int_4;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			if(1)
			{
				double_1 = double_1 + double_2;
			}
			char_3 = char_2 * char_2;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		long_1 = long_2 * long_1;
		float_3 = float_4;
	}
	int_1 = int_1;
	if(1)
	{
		if(1)
		{
			double_3 = double_2 * double_3;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5;
	}
	if(1)
	{
		int int_3 = 1;
		int_2 = int_3 + int_3;
	}
	return double_3;
}
void v_rasqal_literal_uri_equals( float parameter_1,char parameter_2)
{
}
long v_rasqal_literal_as_string_flags( int parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	return long_1;
	long_2 = v_rasqal_literal_as_counted_string(long_1,unsigned_int_1,int_1,int_1);

}
long v_rasqal_literal_as_string( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int_2 = int_1 + int_2;
	return long_1;
	long_1 = v_rasqal_literal_as_string_flags(int_3,int_1,int_3);

}
double v_rasqal_new_string_literal( short parameter_1,double parameter_2,float parameter_3,int parameter_4,short parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = v_rasqal_new_string_literal_common(float_1,int_1,unsigned_int_3,int_2,long_1,int_2,-1 );

	float_3 = float_1 + float_2;
	return double_1;
}
int v_rasqal_literal_as_boolean( long parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	if(1)
	{
		if(1)
		{
			int_1 = int_1 + int_1;
		}
	}
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	if(1)
	{
	}
	long_1 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_3,float_1);

	int_2 = int_2 * int_1;
	return int_2;
}
unsigned int v_rasqal_xsd_format_integer( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	short_1 = short_2;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		double_2 = double_2 + double_1;
	}
	return unsigned_int_1;
}
double v_rasqal_new_integer_literal( long parameter_1,float parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short_3 = short_1 * short_2;
	v_rasqal_free_literal(long_1);

	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_4 = v_rasqal_xsd_datatype_parent_type(double_1);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_2 = double_1 * double_2;
		double_1 = double_1 + double_2;
		float_1 = float_1 + float_1;
		float_2 = float_1 + float_1;
		float_2 = float_3 * float_2;
		if(1)
		{
			double_2 = double_1 * double_2;
			float_1 = float_1 * float_1;
		}
		if(1)
		{
			short_2 = short_3;
			short_4 = short_3 + short_2;
			int_1 = int_3 * int_1;
			if(1)
			{
				long long_2 = 1;
				long_1 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_1,float_4);

				long_2 = long_1 + long_2;
			}
		}
		char_1 = char_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		}
		double_3 = double_3 * double_3;
		unsigned_int_3 = v_rasqal_xsd_format_integer(int_1,int_3);

		double_4 = double_2 + double_2;
	}
	return double_1;
}
long v_rasqal_xsd_decimal_get_long( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
		long long_1 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_2 = long_3 * long_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 * short_2;
		}
	}
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	return long_2;
}
int v_rasqal_literal_as_integer( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	unsigned_int_2 = unsigned_int_1;
	double_1 = double_1;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
		}
	}
	double_2 = double_1 * double_2;
	short_1 = short_2;
	int_2 = int_1 * int_2;
	unsigned_int_5 = unsigned_int_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1;
	}
	if(1)
	{
		int_1 = int_3;
	}
	int_1 = int_4 * int_1;
	return int_5;
	long_3 = v_rasqal_xsd_decimal_get_long(int_3,int_3);

}
char v_rasqal_new_floating_literal( int parameter_1,float parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_1;
	short_3 = short_1 + short_2;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	long_2 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_1,float_1);

	int_1 = int_1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_4 = 1;
		double double_5 = 1;
		double_1 = v_rasqal_xsd_format_double(double_2,char_1);

		double_1 = double_3 + double_4;
		double_2 = double_4 + double_2;
		char_3 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		int_1 = int_1 + int_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		float_1 = float_2 * float_1;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "Uv") > 0)
		{
			short_4 = short_3 * short_1;
		}
		double_3 = double_5 * double_4;
		if(1)
		{
			v_rasqal_free_literal(long_2);

			unsigned_int_4 = unsigned_int_2;
		}
		short_2 = short_4 + short_2;
	}
	return char_2;
}
float v_rasqal_new_double_literal( short parameter_1,double parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	return float_1;
	char_1 = v_rasqal_new_floating_literal(int_1,float_2,double_1);

}
long v_rasqal_new_decimal_literal_from_decimal( float parameter_1,unsigned int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	char_1 = char_1 * char_1;
	short_2 = short_1 * short_2;
	if(1)
	{
	}
	short_2 = short_2;
	long_1 = v_rasqal_literal_set_typed_value(int_2,long_2,double_1,int_2,-1 );

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	double_2 = double_2 * double_2;
	double_5 = double_3 * double_4;
	if(1)
	{
		if(1)
		{
			long long_3 = 1;
			int_1 = v_rasqal_xsd_datatype_check(short_1,char_1,int_3);

			long_1 = long_3 + long_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 + short_2;
		if(1)
		{
			short short_4 = 1;
			short_4 = short_3 + short_4;
			double_5 = double_3 * double_2;
		}
		if(1)
		{
			double double_6 = 1;
			unsigned int unsigned_int_4 = 1;
			char_1 = v_rasqal_xsd_decimal_as_counted_string(float_1,char_1);

			int_2 = int_2 * int_1;
			double_6 = double_4 * double_1;
			int_4 = int_3 * int_4;
			v_rasqal_free_literal(long_2);

			int_5 = int_2 * int_5;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
			if(1)
			{
				char char_2 = 1;
				char_2 = char_1 * char_1;
				long_4 = long_4 + long_4;
			}
		}
	}
	if(1)
	{
		short short_5 = 1;
		short_5 = short_1 + short_2;
		int_5 = int_2 + int_4;
	}
	return long_4;
	long_4 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_1,float_1);

}
int v_rasqal_xsd_decimal_set_double( float parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_rasqal_xsd_decimal_clear_string(unsigned_int_1);

	double_3 = double_1 * double_2;
	double_1 = double_4 * double_3;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 * char_1;
	}
	int_2 = int_1 + int_1;
	int_2 = int_3 * int_1;
	return int_1;
}
double v_rasqal_xsd_decimal_get_double()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	long_1 = long_1;
	int_1 = int_1 + int_2;
	return double_1;
}
double v_rasqal_literal_as_double( char parameter_1,int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	int_1 = int_1;
	double_1 = v_rasqal_xsd_decimal_get_double();

	float_2 = float_1 * float_2;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1;
	}
	int_1 = int_2 + int_2;
	return double_1;
}
unsigned int v_rasqal_new_string_literal_common( float parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,long parameter_5,int parameter_6,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char_2 = char_1 * char_1;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 * char_1;
	char controller4vul_2343[3];
	fgets(controller4vul_2343 ,3 ,stdin);
	if( strcmp( controller4vul_2343, "!8") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		char char_3 = 1;
		float float_3 = 1;
		char char_4 = 1;
		float float_4 = 1;
		float_2 = float_2;
		long_2 = long_1 + long_2;
		unsigned_int_2 = unsigned_int_2;
		short_1 = short_2;
		if(1)
		{
			int_1 = int_1 + int_2;
			int_2 = int_1 + int_2;
		}
		double_1 = double_2;
		char_3 = char_1 * char_1;
		double_2 = double_2;
		char controller4vul_2344[2];
		fgets(controller4vul_2344 ,2 ,stdin);
		if( strcmp( controller4vul_2344, "t") < 0)
		{
			double double_4 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			double_4 = double_3 + double_2;
			double_2 = double_2;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				float_3 = float_1 + float_1;
				char controller4vul_2345[2];
				fgets(controller4vul_2345 ,2 ,stdin);
				if( strcmp( controller4vul_2345, "b") > 0)
				{
					int_3 = v_rasqal_literal_string_to_native(unsigned_int_3,int_1,uni_para);

					int_1 = int_3 * int_1;
				}
				char_2 = char_3 * char_2;
			}
			unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
			int_3 = int_4 * int_3;
		}
		char_3 = char_4;
		float_3 = float_1 + float_3;
		if(1)
		{
			long long_3 = 1;
			long_2 = long_3 + long_3;
		}
		float_2 = float_4 + float_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			short_2 = short_1;
		}
	}
	if(1)
	{
		double double_5 = 1;
		if(1)
		{
			int int_5 = 1;
			int_5 = int_1 * int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
		}
		if(1)
		{
			double_5 = double_3 * double_1;
		}
		double_1 = double_5 * double_5;
	}
	return unsigned_int_1;
}
long v_rasqal_new_string_literal_node( float parameter_1,long parameter_2,short parameter_3,unsigned int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = v_rasqal_new_string_literal_common(float_1,int_1,unsigned_int_2,int_1,long_1,int_1,uni_para);

	int_2 = int_1;
	int_3 = int_2 + int_1;
	return long_1;
}
long v_rasqal_literal_as_counted_string( long parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
			int int_3 = 1;
			int_3 = int_1 * int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			int int_4 = 1;
			int_1 = int_2 + int_4;
		}
	}
	short_2 = short_1 * short_1;
	return long_1;
}
int v_rasqal_xsd_datatype_is_numeric( short parameter_1)
{
	int int_1 = 1;
	return int_1;
}
char v_rasqal_new_datetime_literal_from_datetime( short parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	char char_4 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2;
	int_2 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_3 + char_3;
	long_1 = v_rasqal_xsd_datatype_type_to_uri(unsigned_int_2,float_1);

	v_rasqal_xsd_datetime_to_counted_string(float_2,float_3);

	short_2 = short_1 * short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, " ") < 0)
	{
		short_1 = short_3 + short_4;
	}
	int_2 = int_3 * int_4;
	char_2 = char_3;
	float_2 = float_3;
	short_4 = short_1 * short_4;
	char_1 = char_3 * char_3;
	if(1)
	{
		short_2 = short_3 + short_4;
	}
	int_2 = int_3 + int_2;
	v_rasqal_free_xsd_datetime(float_4);

	char_4 = char_2 + char_4;
	long_2 = long_2 * long_2;
	v_rasqal_free_literal(long_1);

	float_4 = float_4 + float_4;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		short_3 = short_4 * short_3;
	}
	return char_4;
}
double v_rasqal_new_xsd_datetime_from_xsd_date( short parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_2;
	char_1 = char_1 * char_1;
	double_3 = double_3 + double_3;
	double_4 = double_2 + double_3;
	int_1 = int_2;
	float_1 = float_1;
	return double_2;
}
float v_rasqal_new_literal_from_promotion( unsigned int parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	short short_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	float float_2 = 1;
	short short_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	char char_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double_3 = double_1 * double_2;
	double_3 = double_2;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 + short_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_4 = int_1 + int_3;
	int_1 = int_2 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1 + char_2;
	if(1)
	{
		double_3 = double_2;
		int_3 = int_2 + int_1;
		if(1)
		{
			float_1 = float_1 + float_1;
			short_2 = short_2 + short_1;
		}
	}
	char controller4vul_2339[2];
	fgets(controller4vul_2339 ,2 ,stdin);
	if( strcmp( controller4vul_2339, "r") > 0)
	{
		int_3 = int_3 + int_2;
		char controller4vul_2340[2];
		fgets(controller4vul_2340 ,2 ,stdin);
		if( strcmp( controller4vul_2340, "t") < 0)
		{
			double_3 = double_3 + double_3;
			double_3 = double_1 * double_4;
			char controller4vul_2341[2];
			fgets(controller4vul_2341 ,2 ,stdin);
			if( strcmp( controller4vul_2341, "Z") > 0)
			{
				double_2 = double_4;
				short_4 = short_3 * short_3;
				char controller4vul_2342[2];
				fgets(controller4vul_2342 ,2 ,stdin);
				if( strcmp( controller4vul_2342, "k") > 0)
				{
					long_1 = v_rasqal_new_string_literal_node(float_1,long_1,short_3,unsigned_int_4,uni_para);

					long_1 = long_2 * long_3;
				}
			}
			if(1)
			{
			}
		}
	}
	int_5 = int_4 * int_3;
	if(1)
	{
		long_3 = long_1;
		if(1)
		{
			int int_6 = 1;
			short_3 = short_4 * short_2;
			int_3 = int_6 + int_5;
		}
		if(1)
		{
			int_2 = int_3;
			float_2 = float_1 + float_2;
		}
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	short_2 = short_5;
	if(1)
	{
		double_5 = double_3 + double_2;
	}
	if(1)
	{
		double_5 = double_4 + double_5;
	}
	int_3 = int_4 * int_4;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		double_5 = double_1 * double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_6;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_2 * unsigned_int_6;
	}
	unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
	double_4 = double_1 + double_5;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_3 + double_2;
	}
	if(1)
	{
		long_3 = long_2 * long_2;
	}
	double_3 = double_7 + double_3;
	if(1)
	{
		int int_7 = 1;
		int_4 = int_7 + int_7;
	}
	if(1)
	{
		double_1 = double_5 + double_5;
	}
	if(1)
	{
		double_1 = double_4 * double_5;
	}
	if(1)
	{
		char char_3 = 1;
		char_2 = char_1 * char_3;
	}
	long_3 = long_1 * long_1;
	float_1 = float_1 * float_1;
	double_2 = double_2 * double_8;
	if(1)
	{
		double double_9 = 1;
		double_1 = double_2 * double_4;
		double_9 = double_3 + double_5;
	}
	char_4 = char_2 + char_1;
	float_2 = float_2 * float_1;
	float_1 = float_3 + float_2;
	if(1)
	{
		double double_10 = 1;
		double double_11 = 1;
		float_4 = float_3 + float_1;
		double_4 = double_10 * double_11;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_5 * unsigned_int_5;
		int_4 = int_4 + int_3;
	}
	char_6 = char_5 + char_6;
	int_3 = int_2 + int_1;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
	if(1)
	{
		if(1)
		{
			int int_8 = 1;
			int_5 = int_3 * int_8;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	return float_4;
}
void v_rasqal_literal_promote_numerics( double parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double double_5 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_1;
	short_1 = short_1;
	int_1 = int_2 + int_3;
	if(1)
	{
		long long_1 = 1;
		double_1 = double_2;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		char_2 = char_1 + char_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		short short_4 = 1;
		double double_3 = 1;
		int int_4 = 1;
		short_2 = v_rasqal_xsd_datatype_parent_type(double_2);

		short_4 = short_3 + short_2;
		double_2 = double_1 * double_3;
		if(1)
		{
			char_2 = char_2 * char_2;
			int_3 = int_2 * int_4;
		}
		if(1)
		{
			int int_5 = 1;
			double_1 = double_3 + double_3;
			int_4 = int_5 * int_5;
		}
		if(1)
		{
			double double_4 = 1;
			double_1 = double_1;
			double_4 = double_1 + double_3;
		}
		if(1)
		{
			int int_6 = 1;
			int_6 = int_6 + int_1;
		}
		if(1)
		{
			char_1 = char_2 + char_3;
		}
	}
	char_3 = v_rasqal_literal_type_label(long_2);

	double_1 = double_5 * double_1;
}
short v_rasqal_xsd_format_microseconds( char parameter_1,double parameter_2,short parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_2;
	long_1 = long_3 * long_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_2 = double_2 * double_1;
	char_1 = char_2;
	short_2 = short_1 * short_1;
	int_2 = int_1 + int_1;
	int_3 = int_1 + int_2;
	double_4 = double_2 + double_3;
	int_3 = int_2 + int_3;
	if(1)
	{
		char char_4 = 1;
		char_2 = char_2 + char_2;
		char_3 = char_3 * char_4;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	char_6 = char_3 + char_5;
	double_4 = double_5 * double_6;
	char_6 = char_2 * char_6;
	char_1 = char_6 * char_2;
	return short_1;
}
void v_rasqal_xsd_datetime_to_counted_string( float parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	double double_4 = 1;
	short short_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	long_2 = long_1 + long_1;
	short_1 = short_1;
	short_2 = v_rasqal_xsd_format_microseconds(char_1,double_1,short_1);

	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	int_1 = int_2 + int_3;
	double_2 = double_3;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
	}
	int_1 = int_3 * int_4;
	double_2 = double_4 + double_3;
	if(1)
	{
		float float_3 = 1;
		short_3 = short_1 + short_3;
		short_2 = v_rasqal_xsd_timezone_format(long_1,char_1,char_1,unsigned_int_5);

		long_3 = v_rasqal_format_integer(char_1,double_4,int_1,int_4,char_2);

		float_3 = float_1 + float_2;
	}
	if(1)
	{
		float_1 = float_2;
	}
	short_1 = short_2 * short_3;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	long_2 = long_2 * long_1;
	long_2 = long_4 + long_4;
	float_5 = float_1 * float_4;
	int_6 = int_4 * int_5;
	int_7 = int_4 + int_5;
	float_4 = float_4;
	char_2 = char_3 * char_4;
	short_5 = short_4 * short_4;
	char_7 = char_5 * char_6;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_1;
	char_1 = char_1 * char_3;
	if(1)
	{
		long long_5 = 1;
		long_5 = long_3 + long_3;
		long_5 = long_5;
	}
	if(1)
	{
		int int_8 = 1;
		int_1 = int_8 + int_2;
		int_6 = int_7 * int_3;
	}
	long_3 = long_1 + long_1;
}
int v_rasqal_new_xsd_datetime( float parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double_1 = double_2;
	char_2 = char_1 + char_2;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	short_2 = short_1 * short_1;
	char controller4vul_2348[2];
	fgets(controller4vul_2348 ,2 ,stdin);
	if( strcmp( controller4vul_2348, "L") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
		double_2 = double_2 * double_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		char controller4vul_2349[3];
		fgets(controller4vul_2349 ,3 ,stdin);
		if( strcmp( controller4vul_2349, "|#") < 0)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = v_rasqal_xsd_datetime_normalize(unsigned_int_2,uni_para);

			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_3 = 1;
		float_2 = float_1 * float_1;
		char_2 = char_3 * char_1;
	}
	return int_4;
}
long v_rasqal_format_integer( char parameter_1,double parameter_2,int parameter_3,int parameter_4,char parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short_3 = short_1 * short_2;
	char_1 = char_1;
	double_3 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			char char_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			char_1 = char_2 * char_2;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			int_2 = int_1 * int_1;
		}
	}
	int_3 = int_2 + int_3;
	return long_1;
}
short v_rasqal_xsd_timezone_format( long parameter_1,char parameter_2,char parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_3 = 1;
	short short_3 = 1;
	int_2 = int_1 * int_2;
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		int_3 = int_1 + int_2;
		double_1 = double_1;
	}
	if(1)
	{
		float float_2 = 1;
		int_3 = int_4;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_3 = float_1 + float_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_5 = 1;
		int int_6 = 1;
		char char_1 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_5 = 1;
		short_2 = short_1 + short_1;
		int_1 = int_4 * int_2;
		int_5 = int_1 + int_3;
		int_6 = int_3;
		if(1)
		{
		}
		char_1 = char_1 * char_1;
		float_3 = float_4 * float_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
		float_5 = float_5 + float_1;
		int_2 = int_4;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
	}
	return short_3;
}
char v_rasqal_xsd_date_to_counted_string( double parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_5 = 1;
	char char_4 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_2 * int_1;
	char_3 = char_1 * char_2;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_1;
	int_1 = int_2 + int_2;
	int_1 = int_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_3 = int_3 + int_1;
	double_1 = double_3;
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	float_1 = float_2;
	if(1)
	{
	}
	long_2 = long_1 + long_2;
	long_3 = long_2 * long_1;
	int_1 = int_3 + int_3;
	short_2 = short_2 + short_2;
	int_1 = int_4 + int_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	char_3 = char_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	double_2 = double_2 + double_4;
	int_3 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
	short_2 = v_rasqal_xsd_timezone_format(long_4,char_2,char_1,unsigned_int_3);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_6;
	unsigned_int_1 = unsigned_int_6 * unsigned_int_3;
	long_5 = v_rasqal_format_integer(char_4,double_1,int_4,int_3,char_1);

	double_1 = double_2 * double_4;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_4 + unsigned_int_7;
		unsigned_int_2 = unsigned_int_6 * unsigned_int_7;
	}
	short_1 = short_1 * short_2;
	return char_1;
}
float v_rasqal_timegm( int parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char * vul_var;
	short_1 = short_1 + short_2;
	char_3 = char_1 + char_2;
	long_2 = long_1 + long_2;
	char controller4vul_2353[2];
	fgets(controller4vul_2353 ,2 ,stdin);
	if( strcmp( controller4vul_2353, "b") < 0)
	{
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double_2 = double_1 * double_1;
		float_1 = float_1 + float_1;
		char controller4vul_2354[3];
		fgets(controller4vul_2354 ,3 ,stdin);
		if( strcmp( controller4vul_2354, "VS") > 0)
		{
			vul_var=(char*)malloc(20*sizeof(char));
			strcpy(vul_var, "CWE-761");
			if(uni_para == 149)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
		}
		float_1 = float_1 + float_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	double_1 = double_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	int_2 = int_1 * int_2;
	if(1)
	{
		char char_4 = 1;
		char_3 = char_3 * char_4;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_2 + int_1;
	}
	double_3 = double_1 + double_3;
	if(1)
	{
		short_1 = short_1;
	}
	long_2 = long_3 * long_4;
}
float v_rasqal_xsd_datetime_get_as_unixtime(int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float_1 = float_1 * float_2;
	char controller4vul_2352[3];
	fgets(controller4vul_2352 ,3 ,stdin);
	if( strcmp( controller4vul_2352, "bv") < 0)
	{
		float_1 = v_rasqal_timegm(int_1,uni_para);

	}
	int_2 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_2;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_1 * short_2;
	double_2 = double_1 + double_2;
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	long_4 = long_3 + long_4;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		long_3 = long_4;
	}
	return float_3;
}
unsigned int v_rasqal_xsd_datetime_normalize( unsigned int parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	short_1 = short_2;
	char controller4vul_2350[2];
	fgets(controller4vul_2350 ,2 ,stdin);
	if( strcmp( controller4vul_2350, "e") > 0)
	{
		char controller4vul_2351[3];
		fgets(controller4vul_2351 ,3 ,stdin);
		if( strcmp( controller4vul_2351, ",:") > 0)
		{
			float float_4 = 1;
			float_1 = v_rasqal_xsd_datetime_get_as_unixtime(uni_para);

			short_1 = short_2 + short_3;
			char_2 = char_1 + char_1;
			float_4 = float_2 * float_3;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4;
		short_1 = short_3;
	}
	if(1)
	{
		long_1 = long_1 + long_1;
		unsigned_int_4 = unsigned_int_4;
	}
	if(1)
	{
		int int_1 = 1;
		double_2 = double_1 * double_1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		float_1 = float_1;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		double_4 = double_3 * double_4;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			double_2 = double_3 * double_3;
			float_3 = float_2;
		}
		if(1)
		{
			char char_3 = 1;
			char_2 = char_3;
		}
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		char char_4 = 1;
		char_4 = char_1;
		if(1)
		{
			char char_5 = 1;
			char char_6 = 1;
			char_6 = char_5 + char_6;
			double_2 = double_2 * double_4;
		}
	}
	if(1)
	{
		double double_5 = 1;
		long_2 = long_1 + long_1;
		double_3 = double_5;
		if(1)
		{
			short short_4 = 1;
			short_4 = short_2 + short_2;
		}
	}
	if(1)
	{
		double double_6 = 1;
		double_4 = double_1 + double_6;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
		}
	}
	long_1 = long_1 * long_2;
	return unsigned_int_3;
}
unsigned int v_days_per_month( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
void v_rasqal_xsd_datetime_parse( short parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = v_days_per_month(int_1,int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
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
long v_rasqal_new_xsd_date( unsigned int parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long_2 = long_1 + long_2;
	v_rasqal_free_xsd_date(long_2);

	int_3 = int_1 + int_2;
	int_2 = int_4 * int_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	if(1)
	{
		int int_5 = 1;
		int int_7 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int_7 = int_5 + int_6;
		double_1 = double_1 * double_2;
		long_1 = long_3 * long_1;
		long_3 = long_1 + long_1;
		double_1 = double_3 + double_4;
		unsigned_int_1 = unsigned_int_3;
		double_4 = double_1 + double_5;
		double_3 = double_4 + double_3;
		v_rasqal_xsd_datetime_parse(short_1,unsigned_int_1,int_6);

		unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		int_7 = int_5 + int_5;
		char_2 = char_3 * char_4;
		if(1)
		{
			unsigned_int_5 = v_rasqal_xsd_datetime_normalize(unsigned_int_6,-1 );

			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		}
	}
	if(1)
	{
		int int_8 = 1;
		double_1 = double_2 + double_5;
		int_6 = int_8 + int_3;
	}
	return long_2;
}
int v_rasqal_xsd_boolean_value_from_string()
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1;
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	return int_1;
}
float v_rasqal_xsd_decimal_as_string( int parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short_1 = short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	double_1 = double_1 * double_1;
	return float_1;
}
char v_rasqal_xsd_decimal_as_counted_string( float parameter_1,char parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float_1 = v_rasqal_xsd_decimal_as_string(int_1);

	double_1 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	return char_1;
}
int v_rasqal_xsd_decimal_set_string( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	v_rasqal_xsd_decimal_clear_string(unsigned_int_1);

	char_2 = char_1 + char_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_4 = char_2 * char_3;
	if(1)
	{
	}
	long_2 = long_2 * long_3;
	float_1 = float_1;
	if(1)
	{
		double double_4 = 1;
		double_4 = double_1;
	}
	if(1)
	{
		char_3 = char_3 + char_2;
	}
	long_1 = long_4 + long_5;
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "R") < 0)
	{
		double double_5 = 1;
		double_1 = double_5 * double_2;
	}
	double_3 = double_6;
	return int_1;
}
double v_rasqal_xsd_decimal_init( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		char char_3 = 1;
		char_2 = char_1 + char_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		short short_3 = 1;
		int_1 = int_1 + int_2;
		short_4 = short_3 * short_3;
	}
	if(1)
	{
		int_3 = int_2 + int_1;
	}
	if(1)
	{
		short_4 = short_1 + short_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	if(1)
	{
		int_2 = int_2 * int_4;
	}
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		long_3 = long_2 + long_2;
		short_1 = short_4;
		int_5 = int_3 + int_1;
		int_5 = int_2 * int_4;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
	}
	return double_2;
}
float v_rasqal_new_xsd_decimal( double parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double_1 = v_rasqal_xsd_decimal_init(short_1);

	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return float_1;
}
double v_rasqal_xsd_format_double( double parameter_1,char parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 + double_1;
	}
	long_1 = long_1 * long_1;
	int_2 = int_1 + int_1;
	short_1 = short_1 * short_1;
	int_4 = int_3 + int_2;
	return double_2;
}
short v_rasqal_xsd_datatype_parent_type( double parameter_1)
{
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
}
long v_rasqal_xsd_datatype_type_to_uri( unsigned int parameter_1,float parameter_2)
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
unsigned int v_rasqal_xsd_datatype_label( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
int v_rasqal_xsd_datatype_check( short parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
	}
	return int_1;
}
long v_rasqal_literal_set_typed_value( int parameter_1,long parameter_2,double parameter_3,int parameter_4,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_6 = 1;
	long_1 = long_1 + long_1;
	short_1 = short_1 + short_1;
	long_3 = long_1 + long_2;
	char_1 = char_1;
	float_2 = float_1 + float_1;
	short_1 = short_2 + short_3;
	short_1 = short_4 * short_4;
	char controller4vul_2347[3];
	fgets(controller4vul_2347 ,3 ,stdin);
	if( strcmp( controller4vul_2347, " _") > 0)
	{
		int_1 = v_rasqal_new_xsd_datetime(float_3,int_1,uni_para);

		int_2 = int_2;
		short_4 = short_1 + short_4;
	}
	if(1)
	{
		short_5 = short_4;
		char_1 = char_1 * char_1;
	}
	long_2 = long_2 * long_3;
	if(1)
	{
		float float_4 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		float_4 = float_1 + float_3;
		int_1 = int_2;
		if(1)
		{
		}
		float_2 = float_1 * float_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
		}
		if(1)
		{
			short_5 = short_2 + short_4;
		}
		short_2 = short_1;
		char_3 = char_1 * char_2;
	}
	char controller_8[2];
	fgets(controller_8 ,2 ,stdin);
	if( strcmp( controller_8, ".") == 0)
	{
		unsigned_int_1 = unsigned_int_2;
		short_3 = short_2;
		int_4 = int_2 + int_3;
		short_1 = short_3 + short_1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_2 = double_1 * double_2;
		}
	}
	int_2 = int_2;
	float_6 = float_1 * float_5;
	if(1)
	{
		int_1 = int_5 * int_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		int_1 = int_1 * int_1;
		short_3 = short_6 + short_3;
		if(1)
		{
			long long_4 = 1;
			char_3 = char_3 * char_1;
			long_2 = long_4 + long_5;
			double_2 = double_2 + double_2;
		}
	}
	double_2 = double_2 + double_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
			double_1 = double_2;
		}
		if(1)
		{
			double_3 = double_2 + double_1;
		}
		if(1)
		{
			double_2 = double_2 + double_2;
		}
		int_4 = int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
		}
		unsigned_int_4 = unsigned_int_4;
		double_3 = double_2 * double_3;
		if(1)
		{
		}
	}
	short_2 = short_4 * short_6;
	int_3 = int_6;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		int_3 = int_1 * int_3;
	}
	char_3 = char_3 * char_3;
	char_2 = char_1 + char_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_7 * int_2;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_4 = unsigned_int_2;
		if(1)
		{
			int_4 = int_5;
		}
		short_4 = short_4 * short_3;
		if(1)
		{
			long_5 = long_5 + long_2;
		}
		double_1 = double_3 + double_4;
		long_5 = long_2 * long_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_6;
		if(1)
		{
		}
	}
	int_4 = int_3 * int_2;
	if(1)
	{
		double double_5 = 1;
		int int_8 = 1;
		short short_7 = 1;
		double_4 = double_1 * double_5;
		if(1)
		{
			int_2 = int_3 + int_8;
		}
		short_4 = short_3 + short_7;
		if(1)
		{
			float_1 = float_5 * float_1;
		}
		double_2 = double_4;
		int_8 = int_2 * int_1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
		if(1)
		{
		}
	}
	long_1 = long_2 + long_1;
	char_3 = char_1;
	double_6 = double_3;
	double_3 = double_4;
	return long_2;
}
short v_rasqal_xsd_datatype_uri_to_type( double parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long_1 = long_1 * long_2;
	char_1 = char_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
			}
			int_1 = int_1 + int_2;
		}
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_4;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_1;
		}
	}
	return short_1;
}
int v_rasqal_literal_string_to_native( unsigned int parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_2;
	double_2 = double_1 * double_2;
	int_2 = int_1 * int_1;
	char controller4vul_2346[3];
	fgets(controller4vul_2346 ,3 ,stdin);
	if( strcmp( controller4vul_2346, "CK") > 0)
	{
		long_1 = v_rasqal_literal_set_typed_value(int_3,long_1,double_2,int_4,uni_para);

	}
	int_3 = int_2 + int_4;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	return int_2;
}
void v_rasqal_literal_get_rdf_term_type()
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_4 * double_2;
	}
}
int v_rasqal_literal_equals_flags( int parameter_1,short parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_1 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	long long_2 = 1;
	short short_3 = 1;
	double double_6 = 1;
	short short_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
		double_2 = double_1;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	int_2 = int_3;
	if(1)
	{
		double_2 = double_4 + double_3;
		double_3 = double_1 * double_3;
		if(1)
		{
			char_2 = char_1 + char_1;
		}
		int_2 = int_3 * int_4;
	}
	char controller4vul_2335[2];
	fgets(controller4vul_2335 ,2 ,stdin);
	if( strcmp( controller4vul_2335, "b") < 0)
	{
		short_1 = short_1;
		double_4 = double_1 * double_3;
		if(1)
		{
			short_2 = short_1 + short_1;
			int_5 = int_2;
		}
		char controller4vul_2336[2];
		fgets(controller4vul_2336 ,2 ,stdin);
		if( strcmp( controller4vul_2336, "(") > 0)
		{
			int_6 = int_5;
			char controller4vul_2337[3];
			fgets(controller4vul_2337 ,3 ,stdin);
			if( strcmp( controller4vul_2337, "Lp") > 0)
			{
				char_2 = char_2;
				unsigned_int_2 = unsigned_int_1;
				char controller4vul_2338[3];
				fgets(controller4vul_2338 ,3 ,stdin);
				if( strcmp( controller4vul_2338, ")=") > 0)
				{
					float_1 = v_rasqal_new_literal_from_promotion(unsigned_int_1,double_4,int_6,uni_para);

					int_1 = int_7 + int_6;
				}
				unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
			}
			if(1)
			{
				float_1 = float_1 * float_1;
			}
		}
		if(1)
		{
			double_4 = double_3 + double_1;
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double_4 = double_4;
			}
			short_1 = short_2 * short_1;
		}
		int_7 = int_6 * int_6;
	}
	if(1)
	{
		int_1 = int_3 + int_1;
		if(1)
		{
			unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
		}
		if(1)
		{
			int_5 = int_1 * int_6;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
		}
	}
	if(1)
	{
		long long_1 = 1;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_1;
		long_1 = long_1 * long_1;
	}
	double_4 = double_5 + double_3;
	double_1 = double_5 + double_1;
	long_2 = long_2 + long_2;
	int_4 = int_5;
	int_2 = int_5 * int_7;
	short_3 = short_3 * short_1;
	unsigned_int_5 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_6;
	double_1 = double_6;
	unsigned_int_6 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_5;
	int_5 = int_6 * int_5;
	short_4 = short_1 + short_2;
	double_1 = double_5 * double_4;
	long_2 = long_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_7;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 * short_3;
	if(1)
	{
		int_2 = int_1;
	}
	int_3 = int_7 * int_7;
	if(1)
	{
		if(1)
		{
			char_1 = char_2 + char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_8 = unsigned_int_5 * unsigned_int_4;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_5;
	}
	return int_4;
}
void v_rasqal_new_literal_from_literal( float parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
}
void v_rasqal_expression_clear( unsigned int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char_1 = char_1 + char_1;
	int_1 = int_1 * int_2;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char_3 = char_2 * char_1;
	}
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		double_1 = double_2 + double_3;
	}
	char_3 = char_1 * char_2;
	int_1 = int_1 + int_3;
	int_1 = int_3 + int_4;
	float_1 = float_1 + float_1;
	char_4 = char_3 * char_3;
	double_4 = double_4 + double_1;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_2 = float_3;
	}
	short_1 = short_2;
	if(1)
	{
		double_5 = double_3 * double_5;
	}
	v_rasqal_free_expression(int_2);

	double_6 = double_4 * double_6;
	double_5 = double_5 + double_1;
	v_rasqal_free_literal(long_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_5 = unsigned_int_3;
	int_3 = int_4 + int_2;
	double_3 = double_5 * double_1;
	long_3 = long_1 + long_3;
	short_1 = short_1 * short_1;
	unsigned_int_6 = unsigned_int_5;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_7 = unsigned_int_4;
}
void v_rasqal_free_expression( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_2 = double_1 + double_2;
	v_rasqal_expression_clear(unsigned_int_1);

	char_1 = char_1 * char_2;
}
void v_rasqal_free_variable()
{
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
	}
	v_rasqal_free_literal(long_1);

	v_rasqal_free_expression(int_1);

	long_1 = long_2 * long_2;
	double_1 = double_1 + double_2;
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
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		double_1 = double_2 * double_3;
	}
	double_4 = double_3 * double_1;
}
void v_rasqal_xsd_decimal_clear_string( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_1 = int_1;
		int_3 = int_1 * int_2;
	}
	short_2 = short_1 + short_1;
}
void v_rasqal_xsd_decimal_clear( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	v_rasqal_xsd_decimal_clear_string(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 * int_1;
	float_1 = float_1 * float_2;
	char_2 = char_1 + char_1;
}
void v_rasqal_free_xsd_decimal( char parameter_1)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	v_rasqal_xsd_decimal_clear(short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
void v_rasqal_free_xsd_datetime( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
}
void v_rasqal_free_xsd_date( long parameter_1)
{
	int int_1 = 1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
}
void v_rasqal_free_literal( long parameter_1)
{
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_3 = 1;
	char char_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	int_3 = int_1 + int_2;
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		int_3 = int_4 * int_2;
	}
	if(1)
	{
		if(1)
		{
			v_rasqal_free_variable();

			long_1 = long_2;
		}
	}
	char_4 = char_5;
	if(1)
	{
		short short_2 = 1;
		v_rasqal_free_xsd_date(long_2);

		short_2 = short_1 + short_1;
	}
	if(1)
	{
		double_3 = double_2 + double_1;
	}
	if(1)
	{
		char_6 = char_4 * char_2;
	}
	double_4 = double_5;
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		long_1 = long_2;
	}
	if(1)
	{
		char char_7 = 1;
		v_rasqal_free_xsd_decimal(char_2);

		char_7 = char_6 * char_2;
	}
	char_4 = char_5 * char_6;
	if(1)
	{
		int_1 = int_3 + int_3;
	}
	if(1)
	{
		int_2 = int_4 + int_2;
	}
	v_rasqal_free_xsd_datetime(float_3);

	double_1 = double_4 + double_6;
	if(1)
	{
		double_3 = double_5 + double_6;
	}
	float_4 = float_3 + float_3;
	if(1)
	{
		float_2 = float_1 * float_4;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_2 = double_2 * double_3;
}
void v_rasqal_variable_set_value( double parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	char_2 = char_1 * char_2;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int_1 = v_rasqal_literal_print(short_1,unsigned_int_2);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	v_rasqal_free_literal(long_1);

	unsigned_int_1 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
}
long v_rasqal_expression_op_label()
{
	long long_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 + char_2;
	}
	return long_1;
}
void v_rasqal_expression_write_op( long parameter_1,short parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	long_1 = v_rasqal_expression_op_label();

	int_1 = int_1 * int_1;
	long_1 = long_1 * long_1;
}
void v_rasqal_expression_write( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_7 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_6 = 1;
	short short_8 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double_1 = double_1 + double_1;
	int_2 = int_1 + int_1;
	v_rasqal_expression_write_op(long_1,short_1);

	long_1 = long_1 * long_2;
	double_1 = double_1 * double_2;
	char_1 = char_1 + char_1;
	char_1 = char_2 * char_1;
	double_2 = double_2 * double_2;
	double_4 = double_3 * double_3;
	char_3 = char_1 * char_2;
	double_3 = double_2 * double_1;
	double_6 = double_5 * double_2;
	short_3 = short_2 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_4 = char_2 + char_2;
	if(1)
	{
		double_5 = double_6 * double_5;
		short_5 = short_4 + short_2;
	}
	if(1)
	{
		float_1 = float_1 + float_1;
		short_3 = short_3 + short_3;
	}
	double_4 = double_2;
	double_4 = double_1 * double_2;
	double_5 = double_2;
	int_3 = int_1 * int_1;
	short_5 = short_2;
	int_2 = int_3;
	float_3 = float_2 * float_3;
	int_5 = int_2 + int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_6;
	unsigned_int_2 = unsigned_int_3;
	int_5 = int_4 + int_3;
	unsigned_int_2 = unsigned_int_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
	}
	unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
	float_1 = float_4 * float_1;
	short_2 = short_1 + short_2;
	int_4 = int_2 + int_5;
	unsigned_int_5 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_4 = char_2 + char_3;
		if(1)
		{
			double_4 = double_2;
		}
		float_1 = float_4;
		double_5 = double_2 + double_6;
	}
	float_5 = float_3 * float_5;
	unsigned_int_7 = unsigned_int_3;
	int_5 = int_2 * int_4;
	int_1 = int_1 + int_4;
	short_1 = short_7 * short_6;
	unsigned_int_7 = unsigned_int_2 + unsigned_int_7;
	char_1 = char_1 + char_5;
	v_rasqal_literal_write(unsigned_int_7,int_4);

	float_1 = float_3;
	short_7 = short_7 * short_2;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_4;
	unsigned_int_7 = unsigned_int_8;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_1 = double_6 + double_5;
		if(1)
		{
			int_4 = int_6;
		}
		int_4 = int_3;
		unsigned_int_4 = unsigned_int_8 * unsigned_int_2;
	}
	int_5 = int_6 * int_7;
	float_1 = float_3 * float_1;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_2;
	if(1)
	{
		double_3 = double_6 + double_1;
	}
	float_4 = float_6 * float_5;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char char_6 = 1;
		unsigned int unsigned_int_9 = 1;
		char char_7 = 1;
		double_2 = double_5 * double_4;
		if(1)
		{
			char_6 = char_5 + char_3;
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_9;
		char_6 = char_7 * char_2;
	}
	if(1)
	{
		unsigned int unsigned_int_10 = 1;
		int_1 = int_4 + int_6;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_10;
	}
	short_8 = short_3 + short_7;
	long_3 = long_4;
	short_2 = short_4 * short_6;
	long_1 = long_4;
	int_2 = int_6 * int_2;
	int_9 = int_8 + int_5;
	unsigned_int_6 = unsigned_int_2;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned_int_7 = unsigned_int_7 + unsigned_int_6;
		char controller_9[3];
		fgets(controller_9 ,3 ,stdin);
		if( strcmp( controller_9, "MY") > 0)
		{
			int int_10 = 1;
			int_10 = int_2 + int_2;
		}
		int_5 = int_2 * int_7;
		short_7 = short_3;
	}
	short_4 = short_1 + short_1;
	short_2 = short_4 * short_5;
	short_4 = short_5;
	short_2 = short_2 + short_6;
}
void v_rasqal_variable_write( short parameter_1,float parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		v_rasqal_expression_write(long_1,float_3);

		double_4 = double_3 * double_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_5;
		short_2 = short_1 * short_1;
	}
	char_1 = char_1;
	double_1 = double_1;
	v_rasqal_literal_write(unsigned_int_1,int_1);

	long_1 = long_1 + long_1;
	float_1 = float_2;
}
char v_rasqal_literal_type_label( long parameter_1)
{
	char char_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_2;
	}
	return char_1;
}
void v_rasqal_literal_write_type( short parameter_1,long parameter_2)
{
	char char_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_1;
	}
	char_3 = v_rasqal_literal_type_label(long_1);

	double_1 = double_1;
}
void v_rasqal_literal_write( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	int int_7 = 1;
	int int_8 = 1;
	long long_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_4 = 1;
	int_1 = int_1 + int_2;
	double_1 = double_1 * double_1;
	if(1)
	{
		float float_1 = 1;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		int_3 = int_1 * int_3;
	}
	if(1)
	{
		int_3 = int_4;
	}
	double_2 = double_1;
	float_2 = float_2 + float_2;
	int_4 = int_2 + int_1;
	int_3 = int_3 + int_1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	v_rasqal_variable_write(short_2,float_2);

	unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_5;
	short_4 = short_3 * short_4;
	if(1)
	{
		int_1 = int_5 + int_2;
	}
	v_rasqal_literal_write_type(short_4,long_2);

	char_2 = char_1 + char_1;
	char_3 = char_2 + char_1;
	int_5 = int_3 * int_6;
	unsigned_int_6 = unsigned_int_6;
	if(1)
	{
		double_2 = double_1 * double_3;
		int_4 = int_1;
	}
	if(1)
	{
		long long_3 = 1;
		unsigned int unsigned_int_7 = 1;
		long_3 = long_1 + long_3;
		char_2 = char_2;
		unsigned_int_7 = unsigned_int_5 + unsigned_int_5;
		long_1 = long_3 * long_1;
	}
	char_2 = char_2 + char_3;
	int_5 = int_3 * int_7;
	int_6 = int_8 * int_5;
	long_4 = long_1;
	float_3 = float_2 + float_3;
	unsigned_int_8 = unsigned_int_8 * unsigned_int_6;
	double_2 = double_1 * double_4;
	int_5 = int_2 + int_6;
	double_3 = double_4 + double_1;
}
int v_rasqal_literal_print( short parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_1 * short_2;
	if(1)
	{
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	int_1 = int_1 + int_1;
	char_1 = char_3 * char_3;
	v_rasqal_literal_write(unsigned_int_1,int_1);

	short_1 = short_1 * short_2;
	return int_1;
}
int v_rasqal_triple_print( short parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_2;
	long_1 = long_2;
	int_1 = int_2 * int_1;
	double_2 = double_1 * double_2;
	long_3 = long_2 * long_3;
	char_1 = char_2;
	int_3 = int_1 + int_1;
	char_1 = char_1 + char_3;
	long_5 = long_4 + long_4;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		long_5 = long_3 + long_5;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_4 = double_3 + double_4;
	}
	return int_1;
	int_2 = v_rasqal_literal_print(short_1,unsigned_int_1);

}
char v_rasqal_raptor_bind_match( short parameter_1,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	double double_5 = 1;
	short short_2 = 1;
	double double_6 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_3 = 1;
	int_1 = v_rasqal_literal_equals_flags(int_1,short_1,int_1,int_1,-1 );

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_4 = int_3;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 + double_2;
		int_3 = v_rasqal_triple_print(short_1,float_1);

		char_1 = char_2;
		double_4 = double_3 + double_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		int int_5 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int_3 = int_5 * int_4;
		long_2 = long_1 * long_1;
		v_rasqal_new_literal_from_literal(float_1);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		long_2 = long_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
			}
			if(1)
			{
			}
			unsigned_int_4 = unsigned_int_2;
		}
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_3 = long_4;
			double_4 = double_1 * double_3;
			v_rasqal_variable_set_value(double_5,short_2);

			long_2 = long_2 + long_2;
			double_6 = double_5 + double_5;
		}
	}
	if(1)
	{
		int int_6 = 1;
		char char_6 = 1;
		char_3 = char_3;
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
			}
			char_2 = char_4 + char_4;
			int_6 = int_1 * int_4;
		}
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
			}
			double_6 = double_6 * double_1;
			char_6 = char_5 + char_5;
		}
		if(1)
		{
			char char_7 = 1;
			short_2 = short_2 * short_3;
			char_1 = char_6 * char_7;
			int_6 = int_1;
			double_6 = double_3;
		}
	}
	if(1)
	{
		double double_7 = 1;
		double double_8 = 1;
		double_7 = double_6;
		short_2 = short_1 * short_3;
		short_1 = short_2 * short_2;
		char_4 = char_3 * char_4;
		double_4 = double_8 + double_1;
	}
	return char_5;
}
double v_rasqal_raptor_init_triples_match( long parameter_1,unsigned int parameter_2,unsigned int parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	char char_4 = 1;
	long long_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	short short_6 = 1;
	int_2 = int_1 * int_1;
	int_3 = v_rasqal_raptor_triple_match(float_1,int_4,short_1,float_1);

	short_1 = short_1 + short_2;
	v_rasqal_raptor_next_match(int_2);

	int_2 = int_1 + int_4;
	float_2 = float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_2;
	double_3 = double_1 + double_1;
	short_2 = short_3;
	char_3 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					for(int looper_5=0; looper_5<1;looper_5++)
					{
						unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
					}
					float_1 = float_2 + float_1;
				}
			}
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		char_2 = v_rasqal_raptor_bind_match(short_4,char_4,int_4);

		short_3 = short_1 * short_4;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			v_rasqal_new_literal_from_literal(float_1);

			long_2 = long_1 + long_2;
			short_5 = short_5 * short_5;
			unsigned_int_2 = v_rasqal_literal_as_variable(long_3);

			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		}
		long_3 = long_1 * long_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				unsigned int unsigned_int_6 = 1;
				v_rasqal_raptor_finish_triples_match(double_4);

				unsigned_int_2 = unsigned_int_2 + unsigned_int_6;
				if(1)
				{
					float float_3 = 1;
					int_3 = int_1 * int_1;
					float_2 = float_3;
				}
				for(int looper_9=0; looper_9<1;looper_9++)
				{
					float_1 = float_2;
					double_1 = double_1 + double_2;
					long_2 = long_1 * long_4;
					for(int looper_10=0; looper_10<1;looper_10++)
					{
						for(int looper_11=0; looper_11<1;looper_11++)
						{
							unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
						}
					}
					for(int looper_12=0; looper_12<1;looper_12++)
					{
						int int_6 = 1;
						int_5 = int_4 + int_5;
						int_6 = int_6 * int_3;
					}
					double_4 = double_4 * double_3;
					if(1)
					{
						for(int looper_13=0; looper_13<1;looper_13++)
						{
							long_4 = v_rasqal_raptor_is_end(short_1);

							unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
						}
						unsigned_int_1 = unsigned_int_1 * unsigned_int_6;
					}
				}
				if(1)
				{
					short_3 = short_5 * short_3;
					for(int looper_14=0; looper_14<1;looper_14++)
					{
						for(int looper_15=0; looper_15<1;looper_15++)
						{
							for(int looper_16=0; looper_16<1;looper_16++)
							{
								double_2 = double_3 + double_4;
								unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
								unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
							}
						}
					}
					char_1 = char_2 + char_1;
				}
			}
		}
		for(int looper_17=0; looper_17<1;looper_17++)
		{
			double double_5 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			int_5 = int_5 * int_1;
			v_rasqal_variable_set_value(double_3,short_6);

			double_3 = double_5 * double_1;
			short_3 = short_3;
			unsigned_int_8 = unsigned_int_4 * unsigned_int_7;
		}
	}
	return double_1;
}
double v_rasqal_raptor_init_triples_source_common( double parameter_1,long parameter_2,int parameter_3,short parameter_6,double parameter_7,float parameter_8,float parameter_9)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	char char_5 = 1;
	double_2 = double_1 * double_2;
	double_3 = double_3 + double_4;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	double_2 = double_2 * double_5;
	long_2 = long_1 + long_2;
	int_2 = int_2 * int_2;
	long_3 = v_rasqal_raptor_free_triples_source();

	short_3 = short_1 + short_2;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		char_3 = char_2 * char_2;
	}
	if(1)
	{
		char_1 = char_3 + char_3;
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "4") < 0)
		{
		}
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_4 = 1;
		int int_6 = 1;
		double_2 = double_1 * double_4;
		float_2 = float_1 + float_2;
		double_3 = double_2 * double_3;
		double_6 = double_2 + double_6;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		v_rasqal_raptor_statement_handler(long_1);

		double_2 = double_5 * double_3;
		char_4 = char_3 + char_3;
		double_4 = double_1 + double_2;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		double_4 = double_6 * double_2;
		int_3 = int_2 * int_1;
		if(1)
		{
			int_4 = int_3;
		}
		if(1)
		{
			unsigned_int_5 = v_rasqal_raptor_get_genid(double_3,double_3,int_4);

			float_1 = float_1 * float_1;
		}
		if(1)
		{
			float float_3 = 1;
			char_2 = char_3 * char_4;
			float_4 = float_3 + float_4;
		}
		int_4 = int_2 * int_1;
		double_2 = v_rasqal_raptor_support_feature(int_3);

		float_5 = float_4 * float_2;
		short_1 = short_3 + short_3;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					long_1 = long_3 + long_1;
				}
				if(1)
				{
					long long_4 = 1;
					long long_5 = 1;
					long_5 = long_4 * long_4;
				}
				int_3 = int_4 + int_3;
			}
		}
		if(1)
		{
			char_1 = char_2 + char_1;
		}
		v_rasqal_raptor_triple_present(double_6,double_7);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
		int_3 = int_5 * int_5;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_2;
		if(1)
		{
			double_8 = double_1 * double_5;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_6 * unsigned_int_5;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_6;
		}
		double_5 = double_4;
		double_1 = v_rasqal_raptor_init_triples_match(long_1,unsigned_int_1,unsigned_int_5,char_5);

		short_4 = short_2 * short_4;
		if(1)
		{
			float_5 = v_rasqal_raptor_generate_id_handler(float_2);

			int_5 = int_4 + int_3;
		}
		int_5 = int_2 * int_6;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
		if(1)
		{
			int int_7 = 1;
			v_rasqal_new_uri_literal(unsigned_int_2,unsigned_int_4);

			int_1 = int_6 * int_7;
		}
	}
	return double_8;
}
double v_rasqal_raptor_new_triples_source( short parameter_1,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return double_1;
	double_2 = v_rasqal_raptor_init_triples_source_common(double_3,long_1,int_1,short_1,double_4,float_1,float_1);

	v_rasqal_triples_source_error_handler2(char_1,char_1,unsigned_int_1);

}
double v_rasqal_raptor_register_triples_source_factory( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	float float_4 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_2;
	double_1 = v_rasqal_raptor_init_triples_source2(short_1,unsigned_int_1,float_3,char_1,long_1);

	double_2 = double_2 * double_3;
	double_1 = v_rasqal_raptor_new_triples_source(short_2,float_3);

	int_1 = v_rasqal_raptor_init_triples_source(float_2,float_4,unsigned_int_1);

	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_2;
	return double_2;
}
int v_rasqal_set_triples_source_factory( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double_1 = double_1;
	float_1 = float_1;
	if(1)
	{
	}
	char_1 = char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = v_rasqal_world_open(double_1);

	v_rasqal_log_error_simple(unsigned_int_1,unsigned_int_2,double_1,unsigned_int_4,short_1);

	float_1 = float_1 * float_1;
	long_1 = long_1 * long_2;
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		char_1 = char_1;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_5;
	}
	return int_2;
}
int v_rasqal_raptor_init( unsigned int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int_1 = v_rasqal_set_triples_source_factory(unsigned_int_1,float_1);

	double_1 = v_rasqal_raptor_register_triples_source_factory(unsigned_int_1);

	long_1 = long_1 + long_1;
	return int_2;
}
char v_rasqal_free_query_language_factory( long parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "]") > 0)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	float_1 = float_1 * float_1;
	return char_1;
}
int v_rasqal_xsd_init( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long_2 = long_1 * long_1;
		char_3 = char_1 + char_2;
		if(1)
		{
		}
	}
	return int_2;
}
void v_rasqal_log_error_varargs( long parameter_1,short parameter_2,short parameter_3,char parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = double_2;
	int_1 = int_1;
	int_3 = int_1 + int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_4 + int_5;
	if(1)
	{
	}
	char_1 = char_1;
	if(1)
	{
		double_2 = double_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
			long_1 = long_1 * long_1;
		}
		long_2 = long_1;
		double_2 = double_4;
		double_3 = double_5 + double_4;
		unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_1 = unsigned_int_1;
	}
	double_2 = double_6;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_6;
		char_3 = char_2 + char_2;
		double_6 = double_6 + double_3;
		char_3 = char_1;
		double_1 = double_1;
	}
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		int int_6 = 1;
		if(1)
		{
			double double_7 = 1;
			double_5 = double_3 * double_2;
			double_7 = double_2;
		}
		char_1 = char_4 + char_2;
		char_3 = char_5;
		int_4 = int_2 * int_4;
		int_1 = int_2 * int_6;
		int_1 = int_1 + int_1;
	}
	int_3 = int_2 * int_5;
}
void v_rasqal_log_error_simple( unsigned int parameter_1,unsigned int parameter_2,double parameter_3,unsigned int parameter_4,short parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1 * int_2;
	if(1)
	{
	}
	char_2 = char_1 * char_2;
	v_rasqal_log_error_varargs(long_1,short_1,short_2,char_1,char_3);

	int_1 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
}
int v_rasqal_uri_init( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double_1 = double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_5 = double_3 + double_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 + long_2;
	if(1)
	{
		int int_1 = 1;
		v_rasqal_log_error_simple(unsigned_int_1,unsigned_int_2,double_6,unsigned_int_1,short_1);

		int_1 = int_1 + int_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return int_2;
}
int v_rasqal_world_open( double parameter_1)
{
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short_1 = short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 * double_1;
		if(1)
		{
		}
		int_1 = v_rasqal_xsd_init(long_1);

		int_2 = v_rasqal_raptor_init(unsigned_int_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		int_3 = v_rasqal_init_result_formats(short_1);

		unsigned_int_1 = unsigned_int_3;
		if(1)
		{
		}
	}
	short_3 = short_2 * short_1;
	if(1)
	{
	}
	int_2 = v_rasqal_init_query_results();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
	}
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	if(1)
	{
	}
	int_3 = v_rasqal_uri_init(char_2);

	char_3 = v_rasqal_free_query_language_factory(long_2);

	int_1 = int_4 + int_3;
	if(1)
	{
	}
	double_2 = double_2;
	if(1)
	{
	}
	int_6 = int_5 * int_4;
	if(1)
	{
	}
	char_3 = char_3 * char_3;
	if(1)
	{
	}
	return int_4;
}
unsigned int v_rasqal_new_world()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	return unsigned_int_2;
}
short v_rasqal_basename( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long_2 = long_1 * long_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	return short_1;
}
int main()
{
	int uni_para =149;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_1;
	char controller4vul_2325[2];
	fgets(controller4vul_2325 ,2 ,stdin);
	if( strcmp( controller4vul_2325, "k") < 0)
	{
		int_1 = v_rasqal_query_prepare(short_1,unsigned_int_1,unsigned_int_1,uni_para);

	}
	char_1 = char_1 + char_2;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
	return int_1;
}

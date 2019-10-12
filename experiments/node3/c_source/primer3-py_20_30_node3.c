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

void v_destroy_dpal_arg_holder();
void v_destroy_dpal_thal_arg_holder();
void v_p3_destroy_global_settings( int parameter_1);
void v_destroy_thal_structures();
long v_p3_get_ol_problem_string( int parameter_1);
int v_p3_ol_has_any_problem( char parameter_1);
int v_p3_get_rv_intl();
short v_p3_get_rv_rev( float parameter_1);
double v_p3_get_rv_fwd( int parameter_1);
double v_p3_oligo_explain_string( long parameter_1);
char v_p3_get_oligo_array_explain_string( unsigned int parameter_1);
short v_print_all_explain( long parameter_1,long parameter_2,long parameter_3,int parameter_4);
void v_print_boulder( int parameter_1,int parameter_2,double parameter_3,short parameter_4,int parameter_5);
void v_destroy_pr_append_str( long parameter_1);
int v_format_oligos( char parameter_1,short parameter_2,long parameter_3,float parameter_4,short parameter_5,unsigned int parameter_6,int parameter_7);
long v_p3_get_rv_best_pairs( int parameter_1);
float v_p3_pair_explain_string( char parameter_1);
short v_p3_get_pair_array_explain_string();
unsigned int v_print_stat_line( int parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,int parameter_5,int parameter_6);
long v_print_explain( char parameter_1,int parameter_2,float parameter_3,double parameter_4,int parameter_5,int parameter_6);
char v_print_rest( char parameter_1,float parameter_2,float parameter_3,float parameter_4);
char v_print_seq_lines( int parameter_1,char parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7);
int v_print_seq( double parameter_1,float parameter_2,unsigned int parameter_3,double parameter_4,float parameter_5,long parameter_6,int parameter_7);
float v_print_2_pair_array( int parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,float parameter_5,float parameter_6,long parameter_7);
short v_print_pair_array( double parameter_1,double parameter_2,int parameter_3,long parameter_4,float parameter_5,float parameter_6);
double v_print_pair_info( short parameter_1,double parameter_2,int parameter_3);
short v_print_oligo_262( double parameter_1,long parameter_2,short parameter_3,short parameter_4,int parameter_5,short parameter_6,double parameter_7,int parameter_8);
float v_print_oligo_header( float parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4);
unsigned int v_print_summary( double parameter_1,long parameter_2,unsigned int parameter_3,float parameter_4,int parameter_5);
int v_seq_lib_warning_data( short parameter_1);
char v_p3_get_rv_and_gs_warnings( double parameter_1,int parameter_2);
void v_lib_sim_specified( float parameter_1);
unsigned int v_format_pairs( float parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4,unsigned int parameter_5,long parameter_6,float parameter_7,int parameter_8);
double v_create_pr_append_str();
void v_print_format_output( double parameter_1,int parameter_2,char parameter_3,long parameter_4,long parameter_5,long parameter_6,int parameter_7);
short v_pr_oligo_rev_c_sequence( char parameter_1,unsigned int parameter_2);
char v_pr_oligo_sequence( int parameter_1,char parameter_2);
long v_print_oligo( int parameter_1,short parameter_2,int parameter_3,int parameter_4,long parameter_5,int parameter_6,int parameter_7,int parameter_8);
long v_print_list_header( float parameter_1,float parameter_2,int parameter_3,int parameter_4,int parameter_5);
int v_p3_print_one_oligo_list( unsigned int parameter_1,int parameter_2,char parameter_3,double parameter_4,double parameter_5,int parameter_6,short parameter_7,long parameter_8);
int v_p3_print_oligo_lists( unsigned int parameter_1,short parameter_2,short parameter_3,double parameter_4,long parameter_5);
void v_add_must_use_warnings( long parameter_1,unsigned int parameter_2,double parameter_3);
int v_left_oligo_in_pair_overlaps_used_oligo( double parameter_1,int parameter_2,int parameter_3);
void v_right_oligo_in_pair_overlaps_used_oligo( char parameter_1,char parameter_2,int parameter_3);
char v_add_pair( double parameter_1,int parameter_2);
void v_obj_fn( double parameter_1,double parameter_2);
float v_choose_internal_oligo( short parameter_1,double parameter_2,double parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,double parameter_7,float parameter_8);
char v_pair_repeat_sim( short parameter_1,char parameter_2);
double v_pair_spans_target( float parameter_1,unsigned int parameter_2);
double v_characterize_pair( char parameter_1,long parameter_2,long parameter_3,int parameter_4,int parameter_5,int parameter_6,float parameter_7,short parameter_8,char parameter_9,int parameter_10);
char v_compare_primer_pair( short parameter_1,short parameter_2);
unsigned int v_choose_pair_or_triple( double parameter_1,short parameter_2,char parameter_3,long parameter_4,float parameter_5,short parameter_6,short parameter_7);
double v_primer_rec_comp( unsigned int parameter_1,char parameter_2);
int v_sort_primer_array( long parameter_1);
short v_make_internal_oligo_list( float parameter_1,float parameter_2,float parameter_3,int parameter_4,long parameter_5);
void v_add_one_primer_by_position( int parameter_1,int parameter_2,int parameter_3,double parameter_4,long parameter_5,float parameter_6,double parameter_7,int parameter_8,int parameter_9);
int v_pick_primers_by_position( char parameter_1,double parameter_2,int parameter_3,long parameter_4,unsigned int parameter_5,char parameter_6,unsigned int parameter_7,short parameter_8,unsigned int parameter_9);
unsigned int v_make_detection_primer_lists( float parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5);
char v_add_one_primer( short parameter_1,int parameter_2,unsigned int parameter_3,short parameter_4,long parameter_5,float parameter_6,unsigned int parameter_7,long parameter_8,int uni_para);
float v_add_primers_to_check( float parameter_1,int parameter_2,long parameter_3,unsigned int parameter_4,short parameter_5,long parameter_6,int uni_para);
int v_pick_only_best_primer( char parameter_1,float parameter_2,float parameter_3,unsigned int parameter_4,short parameter_5,char parameter_6,long parameter_7,short parameter_8);
short v_pick_sequencing_primer_list( char parameter_1,long parameter_2,int parameter_3,short parameter_4,double parameter_5);
char v_any_5_prime_ol_extension_has_problem( short parameter_1);
unsigned int v_free_primer_repeat_sim_score( int parameter_1);
unsigned int v_add_oligo_to_oligo_array( char parameter_1,float parameter_2);
unsigned int v_p_obj_fn( unsigned int parameter_1,float parameter_2,int parameter_3);
void v_op_set_completely_written( double parameter_1);
int v_op_set_too_short( float parameter_1);
double v_op_set_too_long();
double v_oligo_max_template_mispriming_thermod( short parameter_1);
double v_primer_mispriming_to_template_thermod( short parameter_1,int parameter_2,long parameter_3,short parameter_4,short parameter_5,int parameter_6,int parameter_7,char parameter_8,float parameter_9,unsigned int parameter_10,int uni_para);
int v__pr_need_pair_template_mispriming_thermod( long parameter_1);
int v__pr_need_template_mispriming_thermod( double parameter_1);
char v_op_set_high_similarity_to_multiple_template_sites( long parameter_1);
double v_oligo_max_template_mispriming( double parameter_1);
double v_primer_mispriming_to_template( short parameter_1,int parameter_2,float parameter_3,float parameter_4,unsigned int parameter_5,int parameter_6,int parameter_7,long parameter_8,float parameter_9,int parameter_10);
int v__pr_need_pair_template_mispriming( double parameter_1);
int v__pr_need_template_mispriming();
double v_oligo_template_mispriming( char parameter_1,double parameter_2,short parameter_3,double parameter_4,unsigned int parameter_5,char parameter_6,short parameter_7,int uni_para);
int v_op_set_high_similarity_to_non_template_seq( double parameter_1);
void v_oligo_compute_sequence_and_reverse( int parameter_1,short parameter_2,float parameter_3,int parameter_4,int parameter_5,char parameter_6,char parameter_7);
char v_oligo_repeat_library_mispriming( unsigned int parameter_1,long parameter_2,short parameter_3,unsigned int parameter_4,unsigned int parameter_5,float parameter_6);
int v_op_set_high_hairpin_th( char parameter_1);
long v_oligo_hairpin( long parameter_1,unsigned int parameter_2,float parameter_3,long parameter_4,double parameter_5);
float v_calcDimer( int parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,long parameter_8);
unsigned int v_strcatc( char parameter_1,char parameter_2);
int v_drawDimer( int parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,char parameter_8);
void v_maxTM( int parameter_1,int parameter_2);
short v_fillMatrix( int parameter_1,long parameter_2);
float v_initMatrix();
long v_calcHairpin( int parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,long parameter_6);
float v_drawHairpin( int parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,unsigned int parameter_6);
void v_push( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5);
unsigned int v_tracebacku( int parameter_1,int parameter_2,char parameter_3);
unsigned int v_max5( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5);
char v_Ststack( int parameter_1,int parameter_2);
unsigned int v_Htstack( int parameter_1,int parameter_2);
void v_END5_4( int parameter_1,int parameter_2);
long v_Sd3( int parameter_1,int parameter_2);
int v_Hd3( int parameter_1,int parameter_2);
double v_END5_3( int parameter_1,int parameter_2);
int v_Sd5( int parameter_1,int parameter_2);
int v_Hd5( int parameter_1,int parameter_2);
short v_END5_2( int parameter_1,int parameter_2);
int v_END5_1( int parameter_1,int parameter_2);
char v_calc_terminal_bp( double parameter_1);
void v_comp4loop( char parameter_1,int parameter_2);
float v_comp3loop( unsigned int parameter_1,long parameter_2);
double v_calc_hairpin( int parameter_1,int parameter_2,double parameter_3,int parameter_4);
long v_RSH( int parameter_1,int parameter_2,double parameter_3);
int v_calc_bulge_internal( int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,int parameter_7,int uni_para);
void v_equal( double parameter_1,double parameter_2);
float v_LSH( int parameter_1,int parameter_2,double parameter_3);
long v_traceback( int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int uni_para);
char v_calc_bulge_internal2( int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,int parameter_7,int uni_para);
float v_CBI( int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int uni_para);
float v_Hs( int parameter_1,int parameter_2,int parameter_3);
double v_Ss( int parameter_1,int parameter_2,int parameter_3);
float v_maxTM2( int parameter_1,int parameter_2);
long v_fillMatrix2( int parameter_1,unsigned int parameter_2,int uni_para);
long v_initMatrix2();
int v_safe_recalloc( double parameter_1,int parameter_2,int parameter_3,char parameter_4);
long v_saltCorrectS( double parameter_1,double parameter_2,double parameter_3);
int v_reverse( char parameter_1);
long v_symmetry_thermo( short parameter_1);
float v_length_unsig_char( long parameter_1);
void v_thal( float parameter_1,long parameter_2,char parameter_3,int uni_para);
char v_align_thermod( short parameter_1,char parameter_2,short parameter_3,int uni_para);
void v_oligo_compl_thermod( int parameter_1,short parameter_2,char parameter_3,float parameter_4,float parameter_5,float parameter_6);
int v_p3_ol_is_ok( short parameter_1);
int v_p3_ol_is_uninitialized( float parameter_1);
float v_op_set_high_self_end( float parameter_1);
short v_op_set_high_self_any( long parameter_1);
char v__dpal_long_nopath_maxgap1_local_end( char parameter_1,short parameter_2,char parameter_3,long parameter_4,short parameter_5,int parameter_6);
double v__dpal_long_nopath_maxgap1_global_end( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,float parameter_4,char parameter_5,short parameter_6);
double v__dpal_long_nopath_maxgap1_local( int parameter_1,char parameter_2,long parameter_3,char parameter_4,float parameter_5,long parameter_6);
short v__dpal_long_nopath_generic( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,double parameter_6);
double v_fail_action( double parameter_1,int parameter_2);
void v_print_align( short parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6);
double v__dpal_generic( unsigned int parameter_1,long parameter_2,double parameter_3,char parameter_4,char parameter_5,short parameter_6);
unsigned int v_illegal_char( char parameter_1,int parameter_2,char parameter_3);
void v_dpal( double parameter_1,double parameter_2,long parameter_3);
short v_align( float parameter_1,short parameter_2,char parameter_3);
void v_oligo_compl( int parameter_1,short parameter_2,float parameter_3,int parameter_4,short parameter_5,short parameter_6);
unsigned int v_op_set_high_end_stability( long parameter_1);
void v_op_set_high_tm( double parameter_1);
unsigned int v_op_set_low_tm();
short v_op_set_high_poly_x( short parameter_1);
float v_op_set_low_end_sequence_quality( short parameter_1);
int v_op_set_low_sequence_quality( unsigned int parameter_1);
void v_sequence_quality_is_ok( short parameter_1,double parameter_2,float parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,float parameter_7,double parameter_8);
double v_op_set_too_many_gc_at_end( char parameter_1);
char v_op_set_no_gc_glamp( char parameter_1);
char v_op_set_high_gc_content( int parameter_1);
unsigned int v_op_set_low_gc_content( unsigned int parameter_1);
int v_op_set_not_in_any_ok_region( int parameter_1);
unsigned int v_op_set_overlaps_excluded_region( char parameter_1);
int v_bf_get_overlaps_excl_region( char parameter_1);
short v_op_set_overlaps_target( long parameter_1);
long v_bf_get_overlaps_target( double parameter_1);
char v_bf_set_overlaps_excl_region( short parameter_1,int parameter_2);
int v_bf_get_infinite_pos_penalty( long parameter_1);
void v_compute_position_penalty( int parameter_1,double parameter_2,long parameter_3,unsigned int parameter_4);
float v_bf_set_overlaps_target( float parameter_1,int parameter_2);
float v_bf_set_infinite_pos_penalty( short parameter_1,int parameter_2);
long v_oligo_overlaps_interval( int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4);
char v_op_set_too_many_ns();
char v_gc_and_n_content( int parameter_1,int parameter_2,int parameter_3,float parameter_4);
double v_op_set_must_match_err( char parameter_1);
long v_compare_nucleotides( short parameter_1,float parameter_2);
short v_primer_must_match( short parameter_1,float parameter_2,int parameter_3,char parameter_4,char parameter_5,char parameter_6);
unsigned int v_op_set_overlaps_masked_sequence( short parameter_1);
unsigned int v_is_lowercase_masked( int parameter_1,char parameter_2,long parameter_3,int parameter_4);
int v_op_set_does_not_amplify_orf( long parameter_1);
void v_initialize_op( char parameter_1);
char v_calc_and_check_oligo_features( int parameter_1,float parameter_2,long parameter_3,double parameter_4,double parameter_5,float parameter_6,short parameter_7,long parameter_8,float parameter_9,int uni_para);
float v_pick_primer_range( long parameter_1,int parameter_2,int parameter_3,char parameter_4,short parameter_5,long parameter_6,float parameter_7,long parameter_8,float parameter_9);
long v_make_complete_primer_lists( unsigned int parameter_1,char parameter_2,char parameter_3,double parameter_4,unsigned int parameter_5,float parameter_6);
void v_destroy_thal_arg_holder( int parameter_1);
void v_set_thal_default_args( char parameter_1);
long v_create_thal_arg_holder( char parameter_1);
long v_xlate_ambiguity_code( char parameter_1);
int v_dpal_set_ambiguity_code_matrix( float parameter_1);
void v_set_dpal_args( double parameter_1);
void v_create_dpal_arg_holder();
void v_find_stop_codon( float parameter_1,int parameter_2,int parameter_3);
float v_set_retval_both_stop_codons( short parameter_1,int parameter_2);
int v_test_must_match_parameters( char parameter_1);
int v_seq_lib_num_seq();
long v_strstr_nocase( char parameter_1,char parameter_2);
int v__pr_data_control( int parameter_1,float parameter_2,char parameter_3,float parameter_4,float parameter_5);
char v__optimize_ok_regions_list( unsigned int parameter_1,unsigned int parameter_2);
long v__check_and_adjust_overlap_pos( short parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,double parameter_7,unsigned int parameter_8);
long v_pr_append_95();
long v__check_and_adjust_1_interval( char parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,int parameter_6,float parameter_7,int parameter_8,int parameter_9);
float v__check_and_adjust_intervals( double parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,double parameter_5);
long v_dna_to_upper( char parameter_1,int parameter_2);
void v__pr_substr( float parameter_1,int parameter_2,int parameter_3,char parameter_4);
short v_fake_a_sequence( unsigned int parameter_1,char parameter_2);
double v__adjust_seq_args( char parameter_1,char parameter_2,int parameter_3,int parameter_4);
short v_khash_t( double parameter_1);
float v_free_pair_memory( int parameter_1);
long v_pr_append_w_sep( short parameter_1,unsigned int parameter_2,long parameter_3);
double v_pr_append_new_chunk_85( short parameter_1,float parameter_2);
void v_p3_print_args( char parameter_1,float parameter_2);
short v_create_p3retval();
double v_choose_primers( unsigned int parameter_1,float parameter_2,int uni_para);
void v_p3_set_gs_primer_file_flag( float parameter_1,int parameter_2);
void v_print_boulder_warning( int parameter_1);
void v_format_warning( char parameter_1,float parameter_2,short parameter_3);
void v_free_repeat_sim_score( long parameter_1);
void v_destroy_p3retval( int parameter_1);
void v_pr_set_empty( double parameter_1);
void v_destroy_seq_args( int parameter_1);
void v_print_boulder_error( float parameter_1);
void v_format_error( double parameter_1,char parameter_2,int parameter_3);
int v_tableStartATH( double parameter_1,double parameter_2);
short v_tableStartATS( double parameter_1,double parameter_2);
float v_getTetraloop( unsigned int parameter_1,short parameter_2,int parameter_3,double parameter_4);
short v_safe_realloc(long parameter_2,short parameter_3);
short v_str2int( char parameter_1);
double v_readTLoop( char parameter_1,char parameter_2,double parameter_3,int parameter_4,float parameter_5);
double v_safe_calloc( char parameter_1,int parameter_2,unsigned int parameter_3);
int v_getTriloop( long parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4);
char v_getTstack2( double parameter_1,double parameter_2,double parameter_3);
long v_getTstack( double parameter_1,double parameter_2,char parameter_3);
void v_readLoop( long parameter_1,double parameter_2,double parameter_3,double parameter_4,float parameter_5);
double v_getLoop( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,long parameter_7);
double v_getDangle( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5);
double v_getStackint2( double parameter_1,double parameter_2,short parameter_3);
char v_readDouble( int parameter_1,double parameter_2);
void v_openParamFile( double parameter_1,int parameter_2);
short v_getStack( double parameter_1,double parameter_2,float parameter_3);
float v_safe_malloc( int parameter_1,long parameter_2);
int v_get_thermodynamic_values( short parameter_1,short parameter_2);
void v_read_thermodynamic_parameters();
void v_p3_reverse_complement( char parameter_1,char parameter_2);
void v_reverse_complement_seq_lib();
short v_p3sl_append( short parameter_1,char parameter_2);
long v_upcase_and_check_char( char parameter_1);
double v_strtod();
short v_parse_seq_name( char parameter_1);
void v_p3sl_safe_realloc(unsigned int parameter_2);
int v_add_seq_to_seq_lib( double parameter_1,char parameter_2,char parameter_3,char parameter_4);
float v_p3sl_append_new_chunk( float parameter_1,long parameter_2);
unsigned int v_p3sl_safe_malloc( double parameter_1);
void v_create_empty_seq_lib();
double v_read_and_create_seq_lib( float parameter_1,short parameter_2);
void v_destroy_seq_lib( float parameter_1);
int v_strcmp_nocase( int parameter_1,float parameter_2);
short v__rb_safe_malloc( short parameter_1);
void v_p3_set_gs_primer_internal_oligo_self_end( unsigned int parameter_1,double parameter_2);
void v_p3_set_gs_primer_self_end( double parameter_1,double parameter_2);
float v_parse_int( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
unsigned int v_parse_product_size( float parameter_1,char parameter_2,int parameter_3,float parameter_4);
void v_tag_syntax_error( unsigned int parameter_1,int parameter_2,int parameter_3);
double v_parse_int_pair( char parameter_1,long parameter_2,char parameter_3,int parameter_4,int parameter_5,long parameter_6);
int v_parse_intron_list( char parameter_1,int parameter_2,int parameter_3);
void v_p3_sa_add_to_quality_array( float parameter_1,int parameter_2);
void v_p3_set_sa_empty_quality( short parameter_1);
double v_parse_seq_quality( char parameter_1,short parameter_2);
long v__set_string( char parameter_1,double parameter_2);
int v_p3_set_sa_sequence( float parameter_1,int parameter_2);
int v_read_boulder_record( short parameter_1,float parameter_2,double parameter_3,int parameter_4,long parameter_5,char parameter_6,float parameter_7,float parameter_8,char parameter_9,char parameter_10);
unsigned int v_pr_safe_realloc(int parameter_2);
float v_pr_safe_malloc( double parameter_1);
short v_p3_read_line( int parameter_1);
unsigned int v_pr_append();
float v_out_of_memory_error();
int v_pr_append_w_sep_external( long parameter_1,double parameter_2,char parameter_3);
int v_pr_append_new_chunk_external( char parameter_1,long parameter_2);
float v_pr_append_new_chunk( float parameter_1,float parameter_2);
long v_pr_append2( unsigned int parameter_1,char parameter_2,float parameter_3);
int v_read_p3_file( unsigned int parameter_1,char parameter_2,int parameter_3,int parameter_4,float parameter_5,unsigned int parameter_6,unsigned int parameter_7,char parameter_8,double parameter_9,short parameter_10);
void v_create_seq_arg();
double v_p3_create_global_settings();
void v_pr_set_default_global_args_1();
void v_p3_create_global_settings_default_version_1();
void v_destroy_pr_append_str_data( unsigned int parameter_1);
int v_pr_append_str_chars( float parameter_1);
int v_pr_is_empty( unsigned int parameter_1);
int v_pr_append_external( short parameter_1,char parameter_2);
int v_primer3_copyright();
float v_print_usage();
void v_sig_handler( int parameter_1);
void v_p3_set_program_name( int parameter_1);
unsigned int v_libprimer3_release();
void v_init_pr_append_str();
void v_destroy_dpal_arg_holder()
{
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		long_3 = long_1 * long_2;
		long_1 = long_2 + long_4;
		short_2 = short_1 + short_1;
		short_3 = short_2 * short_2;
		short_4 = short_2 * short_2;
		unsigned_int_1 = unsigned_int_1;
		int_1 = int_1 + int_1;
	}
}
void v_destroy_dpal_thal_arg_holder()
{
	int int_1 = 1;
	if(1)
	{
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		v_destroy_thal_arg_holder(int_1);

		long_1 = long_1;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		float float_1 = 1;
		int int_2 = 1;
		v_destroy_dpal_arg_holder();

		float_1 = float_1 + float_1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_1 = short_1 * short_1;
		short_2 = short_2 * short_3;
	}
}
void v_p3_destroy_global_settings( int parameter_1)
{
	float float_1 = 1;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_3 = 1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			long_1 = long_1 * long_2;
		}
		if(1)
		{
			float float_2 = 1;
			v_destroy_seq_lib(float_1);

			float_1 = float_2 + float_1;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_1 = int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		double_1 = double_1;
		char_1 = char_2;
		double_4 = double_2 * double_3;
		char_3 = char_1 + char_3;
	}
}
void v_destroy_thal_structures()
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	if(1)
	{
		float_1 = float_1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_2 + float_3;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char_3 = char_1 * char_1;
	}
	if(1)
	{
		double_1 = double_2 + double_2;
		char_1 = char_3 + char_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_1 = int_1 * int_2;
		long_2 = long_1 * long_1;
	}
}
long v_p3_get_ol_problem_string( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_2;
	float_1 = float_1 + float_2;
	long_1 = long_1 + long_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_2 = double_1 * double_2;
		double_1 = double_2 * double_1;
		short_2 = short_1 + short_1;
	}
	return long_2;
}
int v_p3_ol_has_any_problem( char parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_p3_get_rv_intl()
{
	int int_1 = 1;
	return int_1;
}
short v_p3_get_rv_rev( float parameter_1)
{
	short short_1 = 1;
	return short_1;
}
double v_p3_get_rv_fwd( int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
double v_p3_oligo_explain_string( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long_1 = long_2;
	int_2 = int_1 * int_1;
	int_1 = int_1 + int_3;
	char_1 = char_1 * char_1;
	return double_1;
}
char v_p3_get_oligo_array_explain_string( unsigned int parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	return char_1;
	double_1 = v_p3_oligo_explain_string(long_1);

}
short v_print_all_explain( long parameter_1,long parameter_2,long parameter_3,int parameter_4)
{
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		char_1 = v_p3_get_oligo_array_explain_string(unsigned_int_2);

		double_1 = v_p3_get_rv_fwd(int_1);

		short_1 = v_p3_get_rv_rev(float_1);

		double_3 = double_2 + double_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		short_2 = v_p3_get_pair_array_explain_string();

		long_1 = v_p3_get_rv_best_pairs(int_2);

		int_3 = int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	return short_3;
	int_1 = v_p3_get_rv_intl();

}
void v_print_boulder( int parameter_1,int parameter_2,double parameter_3,short parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_4 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_8 = 1;
	float float_4 = 1;
	double double_9 = 1;
	double double_10 = 1;
	float float_5 = 1;
	char char_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_11 = 1;
	float float_8 = 1;
	long long_7 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_13 = 1;
	short short_5 = 1;
	double double_16 = 1;
	short short_6 = 1;
	short short_7 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_10 = 1;
	char char_11 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_2 * int_1;
	int_2 = v_pr_is_empty(unsigned_int_1);

	double_2 = double_1 * double_2;
	long_1 = long_2;
	long_2 = long_2;
	double_3 = double_2 + double_3;
	short_2 = short_1 * short_1;
	int_3 = int_3 + int_1;
	double_1 = double_2 * double_1;
	short_2 = short_2 * short_3;
	double_2 = double_1;
	double_2 = double_2 + double_1;
	int_1 = int_3;
	float_2 = float_1 * float_2;
	v_print_boulder_error(float_1);

	long_2 = long_3 + long_2;
	int_3 = int_4 * int_5;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_6 = double_4 + double_5;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		double_1 = double_7 + double_5;
	}
	if(1)
	{
		short_2 = short_4 * short_3;
	}
	if(1)
	{
		double_7 = double_3;
	}
	if(1)
	{
		char_1 = char_2;
		char_3 = char_2 + char_3;
	}
	long_5 = long_4 * long_1;
	short_4 = short_2 * short_3;
	char_3 = char_4 * char_4;
	float_1 = float_1 * float_2;
	long_6 = long_6;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		char_4 = char_3 + char_1;
	}
	if(1)
	{
		int_1 = int_3 * int_3;
		float_3 = float_2 * float_2;
		double_4 = double_8 * double_5;
		long_5 = long_5;
		int_3 = int_2 * int_4;
		if(1)
		{
			double_7 = double_8 + double_7;
		}
		if(1)
		{
			float_2 = float_3 * float_4;
		}
		if(1)
		{
			double_6 = double_9 * double_1;
		}
		double_10 = double_5 * double_1;
	}
	if(1)
	{
		float_4 = float_5;
		v_destroy_pr_append_str(long_6);

		char_5 = char_3 + char_5;
		int_3 = v_pr_append_new_chunk_external(char_4,long_3);

		int_5 = int_5 + int_1;
		if(1)
		{
			long_6 = long_3 * long_4;
		}
	}
	if(1)
	{
		float_4 = float_6 * float_1;
		int_2 = v_seq_lib_num_seq();

		int_5 = int_5 * int_3;
		float_4 = float_6;
		int_5 = int_5 * int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_5 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_6 = 1;
		float float_7 = 1;
		float float_9 = 1;
		int int_8 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_9 = 1;
		double double_14 = 1;
		double double_15 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_8 = 1;
		long long_9 = 1;
		char char_10 = 1;
		if(1)
		{
			double_2 = v_create_pr_append_str();

			short_2 = short_3 * short_1;
			unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
			double_12 = double_4 * double_11;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
			}
			if(1)
			{
				unsigned_int_6 = unsigned_int_3;
			}
			if(1)
			{
				unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
			}
			if(1)
			{
				char_6 = char_6;
			}
			if(1)
			{
				int_4 = int_5;
			}
			if(1)
			{
				int_1 = int_4;
			}
		}
		if(1)
		{
			float_3 = float_7 + float_7;
			float_4 = float_8 + float_8;
			short_1 = short_3 + short_3;
			long_6 = long_7 + long_3;
			double_10 = double_4 + double_10;
			if(1)
			{
				int_6 = int_1 + int_2;
			}
			if(1)
			{
				short_1 = short_2 + short_4;
			}
		}
		int_1 = v_pr_append_str_chars(float_8);

		int_7 = int_1;
		if(1)
		{
			float_7 = float_2 * float_4;
		}
		if(1)
		{
			int_4 = int_5 + int_5;
		}
		if(1)
		{
			float_8 = float_9 * float_7;
		}
		if(1)
		{
			int_7 = int_4 + int_5;
		}
		if(1)
		{
			if(1)
			{
				int_6 = int_8;
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_3 * unsigned_int_6;
			}
			if(1)
			{
				double_12 = double_13 + double_5;
			}
		}
		if(1)
		{
			short_4 = short_3 * short_1;
		}
		if(1)
		{
			short_1 = short_4 * short_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_5 * unsigned_int_7;
		}
		if(1)
		{
			int_3 = int_9;
		}
		if(1)
		{
			int_8 = int_2 * int_5;
		}
		if(1)
		{
			short_3 = short_5 * short_1;
		}
		if(1)
		{
			double_11 = double_14 + double_14;
		}
		if(1)
		{
			double_8 = double_10 * double_4;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_7;
		}
		if(1)
		{
			float_9 = float_6 + float_8;
		}
		if(1)
		{
			float_2 = float_5;
		}
		if(1)
		{
			char_2 = char_2 * char_5;
		}
		if(1)
		{
			double_15 = double_11 * double_8;
		}
		if(1)
		{
			int_6 = int_5;
		}
		if(1)
		{
			double_2 = double_15 + double_15;
		}
		if(1)
		{
			double_16 = double_10 * double_11;
		}
		if(1)
		{
			float float_10 = 1;
			float_10 = float_2 * float_1;
		}
		if(1)
		{
			short_6 = v_print_all_explain(long_2,long_3,long_7,int_7);

			int_4 = int_3;
		}
		if(1)
		{
			double_9 = double_3;
		}
		if(1)
		{
			short_7 = short_3 + short_3;
		}
		if(1)
		{
			short short_8 = 1;
			short_8 = short_4 + short_8;
		}
		if(1)
		{
			double double_17 = 1;
			double_12 = double_17;
		}
		if(1)
		{
			long_5 = long_1 * long_7;
		}
		if(1)
		{
			int_1 = int_8 + int_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
		}
		if(1)
		{
			long_7 = v_p3_get_ol_problem_string(int_6);

			unsigned_int_5 = unsigned_int_2;
		}
		if(1)
		{
			int_8 = int_8 + int_6;
		}
		if(1)
		{
			if(1)
			{
				int_5 = int_3 + int_3;
			}
			if(1)
			{
				char_7 = char_6;
			}
			if(1)
			{
				short_7 = short_3 * short_1;
			}
		}
		if(1)
		{
			unsigned_int_8 = unsigned_int_7 + unsigned_int_2;
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_8 = unsigned_int_2 * unsigned_int_8;
			}
			if(1)
			{
				long long_8 = 1;
				char_8 = v_pr_oligo_sequence(int_6,char_4);

				long_8 = long_7 + long_2;
			}
			if(1)
			{
				long_3 = long_4 * long_9;
			}
		}
		if(1)
		{
			float_6 = float_7 + float_3;
			double_11 = double_4;
		}
		if(1)
		{
			double_6 = v_oligo_max_template_mispriming_thermod(short_5);

			char_6 = char_6;
		}
		if(1)
		{
			int_4 = int_6 * int_7;
		}
		if(1)
		{
			int_9 = int_2 * int_2;
		}
		if(1)
		{
			char char_9 = 1;
			char_9 = char_2 + char_7;
		}
		if(1)
		{
			short_7 = v_pr_oligo_rev_c_sequence(char_3,unsigned_int_4);

			double_16 = double_14 * double_4;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_6 * unsigned_int_8;
			if(1)
			{
				unsigned int unsigned_int_10 = 1;
				unsigned_int_3 = unsigned_int_9 * unsigned_int_10;
			}
			char_8 = char_10 * char_7;
		}
		if(1)
		{
			int int_11 = 1;
			if(1)
			{
				int_10 = v_p3_ol_has_any_problem(char_11);

				double_9 = double_14 * double_1;
			}
			if(1)
			{
				short_5 = short_5;
			}
			if(1)
			{
				char_7 = char_10 + char_8;
			}
			if(1)
			{
				int_11 = int_4 + int_5;
			}
			if(1)
			{
				double_9 = double_9 * double_5;
			}
			float_2 = float_5;
			if(1)
			{
				float_2 = float_8 * float_6;
				double_11 = double_12 + double_8;
				char_1 = v_p3_get_rv_and_gs_warnings(double_16,int_7);

				unsigned_int_3 = unsigned_int_8;
			}
			if(1)
			{
				long long_10 = 1;
				long_4 = long_9 + long_10;
			}
			if(1)
			{
				int_11 = int_3;
			}
		}
	}
	double_13 = double_1 + double_1;
	if(1)
	{
		float float_11 = 1;
		unsigned_int_1 = unsigned_int_9 * unsigned_int_4;
		float_11 = float_5 * float_3;
	}
	double_8 = v_oligo_max_template_mispriming(double_11);

}
void v_destroy_pr_append_str( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "S") < 0)
	{
	}
	v_destroy_pr_append_str_data(unsigned_int_1);

	float_1 = float_2;
	double_1 = double_1;
	float_3 = float_2 + float_3;
}
int v_format_oligos( char parameter_1,short parameter_2,long parameter_3,float parameter_4,short parameter_5,unsigned int parameter_6,int parameter_7)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	int int_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	long long_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_6 = 1;
	float float_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_6 = 1;
	long long_7 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_7 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_8 = 1;
	float float_8 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long_1 = long_1;
	long_1 = long_2 + long_3;
	double_1 = double_1 + double_1;
	float_2 = float_1 + float_1;
	v_lib_sim_specified(float_1);

	short_1 = v_print_oligo_262(double_2,long_3,short_1,short_1,int_1,short_1,double_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_4;
	float_2 = v_print_2_pair_array(int_2,unsigned_int_2,int_2,float_2,float_1,float_3,long_2);

	unsigned_int_2 = unsigned_int_1;
	int_1 = v_pr_append_str_chars(float_2);

	short_2 = short_1 + short_1;
	short_3 = short_2 * short_1;
	float_4 = float_1 + float_4;
	short_2 = short_2 * short_4;
	int_3 = v_print_seq(double_1,float_3,unsigned_int_1,double_3,float_1,long_4,int_2);

	double_3 = double_4;
	if(1)
	{
		long_1 = v_print_explain(char_1,int_4,float_1,double_4,int_3,int_5);

		char_1 = char_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			long_5 = long_2 + long_4;
		}
		if(1)
		{
			short_1 = short_1;
		}
	}
	if(1)
	{
		if(1)
		{
			double_1 = double_1 + double_4;
		}
		if(1)
		{
			double_1 = double_3 * double_5;
		}
	}
	short_1 = v_print_pair_array(double_5,double_6,int_5,long_6,float_2,float_5);

	short_4 = short_4 * short_3;
	if(1)
	{
		if(1)
		{
			float_4 = float_2 * float_2;
		}
		if(1)
		{
			char_4 = char_1 + char_3;
		}
	}
	if(1)
	{
		if(1)
		{
			float_5 = float_6 + float_3;
		}
		if(1)
		{
			long_5 = long_3 + long_7;
		}
	}
	if(1)
	{
		if(1)
		{
			double_4 = double_2 + double_1;
		}
		if(1)
		{
			long_3 = long_7 * long_2;
		}
	}
	if(1)
	{
		short_5 = short_4;
		short_6 = short_2 * short_6;
	}
	if(1)
	{
		if(1)
		{
			int_2 = v_pr_is_empty(unsigned_int_1);

			char_4 = char_3 + char_4;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			int_2 = int_6;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
			char_4 = char_3 * char_1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		}
		if(1)
		{
			int_4 = int_6 * int_7;
			float_5 = float_7 * float_2;
			long_2 = long_3 + long_6;
		}
	}
	if(1)
	{
		short_4 = short_4 + short_5;
		int_4 = int_2 + int_5;
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_4 = double_7 + double_8;
		float_5 = float_7 * float_4;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
	}
	char_3 = v_p3_get_rv_and_gs_warnings(double_9,int_4);

	int_6 = int_6 * int_6;
	if(1)
	{
		double_6 = double_5 * double_3;
		char_4 = char_3 * char_1;
		if(1)
		{
			long long_8 = 1;
			v_format_error(double_8,char_2,int_2);

			long_6 = long_8 * long_4;
		}
		short_4 = short_1 * short_3;
		long_3 = long_2 * long_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				int_1 = int_1 * int_8;
			}
			unsigned_int_2 = unsigned_int_1;
			float_5 = float_4;
			int_2 = int_1;
		}
		if(1)
		{
			double double_10 = 1;
			double_6 = double_5 * double_10;
		}
	}
	if(1)
	{
		short short_7 = 1;
		unsigned int unsigned_int_4 = 1;
		int_3 = int_2 + int_8;
		char_2 = char_1 * char_2;
		if(1)
		{
			int int_9 = 1;
			int_2 = int_1 + int_9;
		}
		float_8 = float_4 * float_5;
		short_7 = short_4 + short_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char char_5 = 1;
			if(1)
			{
				char_1 = char_4 * char_4;
			}
			short_6 = short_4;
			unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
			char_2 = char_5 * char_4;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
		}
	}
	if(1)
	{
		int int_10 = 1;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
		int_5 = int_10;
		if(1)
		{
			unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
		}
		long_1 = long_5 * long_2;
		double_2 = double_6 * double_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_11 = 1;
			int int_12 = 1;
			if(1)
			{
				int_6 = int_6 * int_1;
			}
			int_1 = int_5;
			float_8 = v_print_oligo_header(float_2,unsigned_int_6,int_7,short_6);

			int_11 = int_2 * int_4;
			int_4 = int_7 + int_12;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	}
	double_9 = double_7;
	if(1)
	{
		unsigned_int_6 = unsigned_int_6 * unsigned_int_1;
		float_1 = float_6 + float_2;
	}
	return int_3;
}
long v_p3_get_rv_best_pairs( int parameter_1)
{
	long long_1 = 1;
	return long_1;
}
float v_p3_pair_explain_string( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
	char_1 = char_1 + char_1;
	int_3 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 * short_2;
	long_2 = long_1 * long_1;
	return float_1;
}
short v_p3_get_pair_array_explain_string()
{
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	return short_1;
	float_1 = v_p3_pair_explain_string(char_1);

}
unsigned int v_print_stat_line( int parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,int parameter_5,int parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_2;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	double_1 = double_3;
	if(1)
	{
		char_1 = char_2 * char_1;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	return unsigned_int_1;
}
long v_print_explain( char parameter_1,int parameter_2,float parameter_3,double parameter_4,int parameter_5,int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		double_1 = double_1 + double_2;
	}
	long_1 = v_p3_get_rv_best_pairs(int_1);

	long_1 = long_1 + long_1;
	if(1)
	{
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_4 = 1;
		char char_4 = 1;
		float float_5 = 1;
		if(1)
		{
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			double_4 = double_3 * double_1;
		}
		if(1)
		{
			short_2 = short_2;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
		}
		double_2 = double_1 + double_2;
		if(1)
		{
			float float_1 = 1;
			float_2 = float_1 * float_1;
		}
		char_3 = char_1 + char_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_6 + unsigned_int_7;
		}
		if(1)
		{
			float float_3 = 1;
			long long_2 = 1;
			float_2 = float_3 * float_4;
			long_1 = long_2;
		}
		if(1)
		{
			int_2 = int_2 * int_1;
		}
		char_2 = char_4;
		if(1)
		{
			char char_5 = 1;
			char char_6 = 1;
			char_6 = char_5 * char_3;
		}
		double_3 = double_4 * double_4;
		if(1)
		{
			char char_7 = 1;
			char_7 = char_4;
		}
		if(1)
		{
			double double_5 = 1;
			double double_6 = 1;
			double_6 = double_3 * double_5;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_6 * unsigned_int_4;
		}
		float_5 = float_5 + float_4;
		if(1)
		{
			int_2 = int_2;
		}
		if(1)
		{
			short short_3 = 1;
			short_1 = v_p3_get_pair_array_explain_string();

			short_3 = short_1 * short_3;
		}
		if(1)
		{
			unsigned_int_8 = unsigned_int_7 + unsigned_int_5;
		}
	}
	if(1)
	{
		unsigned_int_2 = v_print_stat_line(int_3,unsigned_int_9,long_3,int_4,int_5,int_3);

		int_2 = int_2 + int_1;
	}
	if(1)
	{
		unsigned_int_10 = unsigned_int_3 * unsigned_int_8;
	}
	if(1)
	{
		int_4 = int_2 + int_1;
	}
	if(1)
	{
		unsigned_int_10 = unsigned_int_3 + unsigned_int_1;
	}
	unsigned_int_11 = unsigned_int_4 + unsigned_int_7;
	return long_4;
}
char v_print_rest( char parameter_1,float parameter_2,float parameter_3,float parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_1;
	double_1 = v_print_pair_info(short_1,double_1,int_1);

	double_2 = double_1 + double_1;
	float_1 = v_print_oligo_header(float_2,unsigned_int_1,int_1,short_1);

	unsigned_int_2 = unsigned_int_1;
	float_3 = float_2 + float_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short_1 = v_print_oligo_262(double_1,long_1,short_2,short_1,int_1,short_1,double_1,int_2);

		double_1 = double_2 + double_1;
		double_2 = double_3 * double_1;
		float_1 = float_2;
		int_4 = int_1 * int_3;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
			v_lib_sim_specified(float_1);

			unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		}
		if(1)
		{
			double double_4 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double_4 = double_1 * double_2;
			long_3 = long_2 * long_3;
		}
	}
	return char_1;
}
char v_print_seq_lines( int parameter_1,char parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				float float_1 = 1;
				float float_4 = 1;
				float float_5 = 1;
				long long_1 = 1;
				long long_2 = 1;
				if(1)
				{
					float float_2 = 1;
					float float_3 = 1;
					float_3 = float_1 * float_2;
				}
				float_1 = float_4 * float_5;
				long_1 = long_1 + long_2;
			}
		}
	}
	return char_1;
}
int v_print_seq( double parameter_1,float parameter_2,unsigned int parameter_3,double parameter_4,float parameter_5,long parameter_6,int parameter_7)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_6 = 1;
	float float_5 = 1;
	long long_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_7 = 1;
	char_2 = char_1 * char_1;
	float_1 = float_1;
	int_3 = int_1 * int_2;
	float_1 = float_2 + float_1;
	float_1 = float_1 + float_3;
	short_1 = short_1 * short_1;
	char_2 = char_1;
	int_2 = int_1 * int_3;
	if(1)
	{
		double_1 = double_1;
	}
	short_3 = short_2 + short_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	double_2 = double_3;
	unsigned_int_2 = unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int_3 = int_4 * int_3;
		}
		if(1)
		{
			if(1)
			{
				double_2 = double_2;
			}
			if(1)
			{
				int_1 = int_4;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
		}
		if(1)
		{
			if(1)
			{
				char_3 = v_print_seq_lines(int_1,char_4,int_4,int_2,int_1,int_2,double_1);

				double_1 = double_3 * double_3;
			}
			if(1)
			{
				float_2 = float_4 + float_4;
			}
			if(1)
			{
				int_3 = int_1 * int_5;
			}
		}
		if(1)
		{
			if(1)
			{
				long_1 = long_1 * long_1;
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					if(1)
					{
						int_3 = int_5 + int_4;
					}
					int_4 = int_1 + int_4;
					if(1)
					{
						double_4 = double_3;
					}
				}
			}
			if(1)
			{
				int_5 = int_5 + int_6;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					if(1)
					{
						float_1 = float_4 + float_5;
					}
					int_6 = int_6 + int_3;
					if(1)
					{
						char_2 = char_2;
					}
				}
			}
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			short_2 = short_2 * short_3;
			if(1)
			{
				double_1 = double_4 * double_1;
			}
		}
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				int_1 = int_6 * int_3;
			}
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			long_2 = long_1 * long_1;
			if(1)
			{
				char_6 = char_5 * char_2;
			}
		}
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		short short_4 = 1;
		short short_5 = 1;
		if(1)
		{
			short_4 = short_4 + short_1;
			long_1 = long_3 * long_3;
		}
		if(1)
		{
			int_6 = int_6 * int_2;
		}
		if(1)
		{
			long_2 = long_1 + long_3;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			double_2 = double_4;
		}
		if(1)
		{
			short_5 = short_5 + short_2;
		}
		if(1)
		{
			float_1 = float_6 + float_4;
		}
		if(1)
		{
			long long_4 = 1;
			long_4 = long_2 + long_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			double_2 = double_3;
		}
		if(1)
		{
			char char_7 = 1;
			char_7 = char_3 + char_6;
		}
		if(1)
		{
			short_4 = short_1 + short_5;
		}
		if(1)
		{
			int_3 = int_7 * int_8;
		}
	}
	int_1 = int_8 * int_4;
	if(1)
	{
		int_9 = int_1 * int_8;
	}
	if(1)
	{
		float_5 = float_5 * float_6;
	}
	if(1)
	{
		int_6 = int_2 + int_6;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_4 = unsigned_int_6 + unsigned_int_1;
	}
	if(1)
	{
		float_1 = float_2 * float_3;
		double_1 = double_3;
		if(1)
		{
			long_1 = long_2 * long_3;
		}
	}
	if(1)
	{
		char char_8 = 1;
		char_1 = char_5 + char_8;
		double_2 = double_4 + double_1;
		int_6 = int_6 * int_9;
	}
	if(1)
	{
		int_3 = int_2 * int_7;
	}
	if(1)
	{
		int_9 = int_1;
	}
	if(1)
	{
		double double_5 = 1;
		double_5 = double_5;
	}
	if(1)
	{
		int_2 = int_4;
	}
	unsigned_int_2 = unsigned_int_7 * unsigned_int_1;
	int_3 = int_2 + int_4;
	return int_5;
}
float v_print_2_pair_array( int parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,float parameter_5,float parameter_6,long parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double_4 = double_2 + double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_5 = 1;
			if(1)
			{
				int int_1 = 1;
				int_1 = int_1;
			}
			if(1)
			{
				double_4 = double_1;
			}
			if(1)
			{
				double_5 = double_4 + double_1;
			}
			char controller_5[2];
			fgets(controller_5 ,2 ,stdin);
			if( strcmp( controller_5, "i") > 0)
			{
				double double_6 = 1;
				double_1 = double_5 + double_6;
			}
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return float_1;
}
short v_print_pair_array( double parameter_1,double parameter_2,int parameter_3,long parameter_4,float parameter_5,float parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		int int_2 = 1;
		char_1 = char_1 * char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			int_1 = int_1;
		}
		int_2 = int_2 + int_2;
	}
	return short_1;
}
double v_print_pair_info( short parameter_1,double parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "]") < 0)
	{
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long_1 = long_1 * long_2;
		float_3 = float_1 + float_2;
	}
	return double_1;
}
short v_print_oligo_262( double parameter_1,long parameter_2,short parameter_3,short parameter_4,int parameter_5,short parameter_6,double parameter_7,int parameter_8)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char_1 = v_pr_oligo_sequence(int_1,char_1);

	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = double_1 + double_2;
		short_1 = short_1 + short_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		double double_3 = 1;
		char_1 = char_1 * char_1;
		double_3 = double_3 + double_1;
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			short_1 = v_pr_oligo_rev_c_sequence(char_1,unsigned_int_1);

			long_2 = long_1 + long_2;
		}
		if(1)
		{
			short short_4 = 1;
			short short_5 = 1;
			short_5 = short_3 + short_4;
		}
	}
	double_4 = double_4 * double_5;
	if(1)
	{
		double_2 = double_1 + double_4;
	}
	return short_3;
}
float v_print_oligo_header( float parameter_1,unsigned int parameter_2,int parameter_3,short parameter_4)
{
	float float_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "x") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
	return float_1;
}
unsigned int v_print_summary( double parameter_1,long parameter_2,unsigned int parameter_3,float parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	long long_4 = 1;
	short short_3 = 1;
	double double_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_2;
	long_3 = long_1 + long_2;
	float_1 = v_print_oligo_header(float_1,unsigned_int_1,int_2,short_1);

	double_1 = double_2;
	v_lib_sim_specified(float_2);

	float_1 = v_print_2_pair_array(int_3,unsigned_int_1,int_3,float_3,float_2,float_2,long_3);

	double_3 = double_3;
	if(1)
	{
		double_4 = v_print_pair_info(short_2,double_1,int_3);

		long_4 = long_3;
		short_3 = v_print_pair_array(double_3,double_4,int_3,long_1,float_2,float_3);

		int_2 = int_3 * int_3;
		double_2 = double_2 + double_3;
		if(1)
		{
			short_1 = v_print_oligo_262(double_4,long_2,short_2,short_3,int_1,short_1,double_5,int_1);

			float_3 = float_3 + float_4;
		}
	}
	float_5 = float_2 * float_4;
	short_2 = short_1 + short_3;
	if(1)
	{
		long_1 = long_2 * long_4;
	}
	int_4 = int_3 * int_1;
	char_2 = char_1 + char_2;
	char_2 = char_2 * char_3;
	long_3 = long_2 + long_2;
	return unsigned_int_2;
}
int v_seq_lib_warning_data( short parameter_1)
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
char v_p3_get_rv_and_gs_warnings( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	v_init_pr_append_str();

	int_1 = v_pr_is_empty(unsigned_int_1);

	short_1 = short_1 * short_2;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_4 = 1;
		double_5 = double_3 + double_4;
	}
	if(1)
	{
		char char_2 = 1;
		long_1 = v_pr_append_95();

		char_1 = char_1 + char_2;
		double_5 = double_2 * double_2;
	}
	if(1)
	{
		double_2 = double_3 + double_1;
	}
	int_1 = v_seq_lib_warning_data(short_3);

	long_2 = long_2 * long_2;
	return char_1;
	double_1 = v_pr_append_new_chunk_85(short_2,float_1);

}
void v_lib_sim_specified( float parameter_1)
{
}
unsigned int v_format_pairs( float parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4,unsigned int parameter_5,long parameter_6,float parameter_7,int parameter_8)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_5 = 1;
	float_2 = float_1 + float_1;
	short_3 = short_1 + short_2;
	char_1 = char_1;
	double_1 = double_2;
	short_2 = short_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		v_lib_sim_specified(float_1);

		char_1 = v_p3_get_rv_and_gs_warnings(double_3,int_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		char char_2 = 1;
		char_3 = char_2 + char_2;
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		int_1 = v_pr_append_str_chars(float_2);

		unsigned_int_1 = v_print_summary(double_3,long_2,unsigned_int_3,float_3,int_1);

		long_1 = v_print_explain(char_4,int_2,float_1,double_4,int_2,int_2);

		short_3 = short_3 * short_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_4 = unsigned_int_5;
		}
		if(1)
		{
			double_4 = double_3 * double_4;
		}
	}
	long_3 = long_1 + long_2;
	if(1)
	{
		int_3 = v_print_seq(double_2,float_3,unsigned_int_4,double_1,float_1,long_2,int_2);

		short_3 = short_3 * short_1;
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		short_2 = short_5 + short_6;
		unsigned_int_3 = unsigned_int_4;
	}
	int_3 = v_pr_is_empty(unsigned_int_5);

	short_3 = short_2 + short_1;
	char_1 = v_print_rest(char_1,float_1,float_2,float_2);

	float_2 = float_3 * float_3;
	if(1)
	{
		float_1 = float_1 + float_3;
	}
	if(1)
	{
		v_format_error(double_4,char_4,int_2);

		int_3 = int_1 * int_1;
	}
	if(1)
	{
		char_3 = char_4 + char_3;
	}
	double_4 = double_4 * double_5;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
		double_4 = double_5 + double_4;
	}
	return unsigned_int_1;
}
double v_create_pr_append_str()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char_3 = char_1 * char_2;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	char_3 = char_3 * char_3;
	return double_1;
	v_init_pr_append_str();

}
void v_print_format_output( double parameter_1,int parameter_2,char parameter_3,long parameter_4,long parameter_5,long parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned_int_1 = v_format_pairs(float_1,long_1,unsigned_int_1,char_1,unsigned_int_2,long_2,float_1,int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	char_2 = char_1 + char_2;
	if(1)
	{
		int_1 = int_2 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned_int_2 = unsigned_int_5 + unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_6;
	}
	if(1)
	{
		short short_1 = 1;
		short_2 = short_1 + short_2;
	}
	double_1 = v_create_pr_append_str();

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_3 = v_pr_append_new_chunk_external(char_2,long_1);

	int_3 = v_format_oligos(char_2,short_2,long_1,float_2,short_2,unsigned_int_6,int_2);

	v_destroy_pr_append_str(long_1);

}
short v_pr_oligo_rev_c_sequence( char parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	v__pr_substr(float_1,int_1,int_2,char_1);

	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_1;
	double_1 = double_1 + double_1;
	char_3 = char_1 * char_2;
	v_p3_reverse_complement(char_1,char_1);

	char_2 = char_3 + char_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	long_1 = long_1 * long_1;
	long_1 = long_2 + long_1;
	int_2 = int_2 + int_2;
	double_1 = double_1 * double_2;
	return short_1;
}
char v_pr_oligo_sequence( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_4 = 1;
	float float_4 = 1;
	char_2 = char_1 * char_1;
	int_1 = int_1 + int_2;
	v__pr_substr(float_1,int_3,int_1,char_3);

	float_3 = float_1 + float_2;
	int_4 = int_5;
	long_1 = long_1 + long_1;
	double_1 = double_1 + double_1;
	char_4 = char_1 * char_4;
	float_2 = float_4 + float_2;
	return char_2;
}
long v_print_oligo( int parameter_1,short parameter_2,int parameter_3,int parameter_4,long parameter_5,int parameter_6,int parameter_7,int parameter_8)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_1 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2;
	char_1 = v_pr_oligo_sequence(int_1,char_2);

	short_2 = short_1 + short_1;
	if(1)
	{
	}
	if(1)
	{
		char_3 = char_2 * char_1;
		if(1)
		{
		}
	}
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		short_3 = v_pr_oligo_rev_c_sequence(char_3,unsigned_int_2);

		float_2 = float_1 + float_2;
		double_1 = double_1 * double_1;
		if(1)
		{
		}
	}
	char_4 = char_5;
	if(1)
	{
	}
	if(1)
	{
	}
	return long_1;
}
long v_print_list_header( float parameter_1,float parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	double_1 = double_2;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "j") < 0)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_1 * double_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
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
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		short_2 = short_1;
	}
	if(1)
	{
	}
	if(1)
	{
		int_2 = int_2 + int_1;
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
	}
	return long_4;
}
int v_p3_print_one_oligo_list( unsigned int parameter_1,int parameter_2,char parameter_3,double parameter_4,double parameter_5,int parameter_6,short parameter_7,long parameter_8)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	int int_5 = 1;
	long_1 = v_print_list_header(float_1,float_2,int_1,int_2,int_2);

	int_4 = int_3 * int_4;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "x") > 0)
		{
		}
	}
	return int_1;
	long_2 = v_print_oligo(int_2,short_1,int_1,int_4,long_3,int_2,int_4,int_5);

}
int v_p3_print_oligo_lists( unsigned int parameter_1,short parameter_2,short parameter_3,double parameter_4,long parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_8 = 1;
	short short_4 = 1;
	char char_5 = 1;
	long long_4 = 1;
	char_2 = char_1 * char_2;
	char_1 = char_2 + char_2;
	double_1 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
		char_1 = char_1 * char_3;
		double_4 = double_4 + double_3;
		if(1)
		{
			int int_1 = 1;
			if(1)
			{
			}
			if(1)
			{
			}
			if(1)
			{
			}
			double_3 = v_pr_append_new_chunk_85(short_1,float_1);

			int_2 = int_1 * int_1;
		}
		double_5 = double_2 + double_4;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
	}
	if(1)
	{
		int int_3 = 1;
		int_2 = int_2 * int_2;
		double_4 = double_3 + double_3;
		if(1)
		{
			char_1 = char_2 * char_3;
			float_1 = float_1 * float_1;
			double_4 = double_5 + double_2;
			int_4 = int_3 + int_4;
		}
		int_2 = int_5 * int_3;
		double_1 = double_3 * double_6;
		char controller_11[2];
		fgets(controller_11 ,2 ,stdin);
		if( strcmp( controller_11, "T") > 0)
		{
		}
	}
	if(1)
	{
		char char_4 = 1;
		long long_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double_6 = double_3 + double_2;
		int_6 = v_p3_print_one_oligo_list(unsigned_int_3,int_6,char_2,double_6,double_2,int_7,short_1,long_1);

		char_3 = char_4 * char_1;
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
			int_4 = int_6 * int_5;
		}
		long_3 = long_2 + long_3;
		int_6 = v_pr_append_new_chunk_external(char_1,long_2);

		short_3 = short_1 + short_2;
		if(1)
		{
		}
	}
	float_2 = float_1 * float_1;
	return int_8;
	int_8 = v_pr_append_external(short_4,char_5);

	long_4 = v_pr_append_95();

}
void v_add_must_use_warnings( long parameter_1,unsigned int parameter_2,double parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	short short_5 = 1;
	int int_4 = 1;
	int_1 = int_1 + int_1;
	short_2 = short_1 + short_2;
	long_1 = v_pr_append_w_sep(short_3,unsigned_int_1,long_1);

	int_2 = int_3;
	char_1 = char_1 * char_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		long_2 = v_pr_append_95();

		float_2 = float_1 + float_2;
	}
	if(1)
	{
		char char_2 = 1;
		char_2 = char_2 * char_1;
	}
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		long_3 = long_2 * long_2;
	}
	if(1)
	{
		double_1 = double_3 * double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double_2 = v_pr_append_new_chunk_85(short_3,float_1);

		double_1 = double_1 * double_2;
	}
	if(1)
	{
		double double_4 = 1;
		double_3 = double_4 * double_2;
	}
	if(1)
	{
		long_4 = long_1 * long_3;
	}
	if(1)
	{
		short short_4 = 1;
		short_5 = short_4 + short_5;
	}
	if(1)
	{
		short_3 = short_1;
	}
	if(1)
	{
		long_2 = long_3 * long_1;
	}
	if(1)
	{
		int_3 = int_2 * int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	if(1)
	{
		short_2 = short_5;
	}
	if(1)
	{
		int_3 = int_4;
	}
	if(1)
	{
		float_2 = float_2 * float_2;
	}
	if(1)
	{
		long long_5 = 1;
		int int_5 = 1;
		long_5 = long_1 + long_2;
		long_2 = long_3 * long_5;
		int_5 = int_3 * int_1;
		int_1 = int_5;
		long_5 = long_4;
	}
}
int v_left_oligo_in_pair_overlaps_used_oligo( double parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
void v_right_oligo_in_pair_overlaps_used_oligo( char parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	int_1 = int_1 + int_1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
	}
}
char v_add_pair( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	if(1)
	{
		double double_2 = 1;
		float_1 = v_pr_safe_malloc(double_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_1 = double_2 * double_1;
	}
	if(1)
	{
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "Xx") > 0)
		{
			unsigned_int_2 = unsigned_int_3;
			char_1 = char_1 * char_1;
		}
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3;
	return char_1;
	unsigned_int_4 = v_pr_safe_realloc(int_1);

}
void v_obj_fn( double parameter_1,double parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	int_3 = int_3 + int_4;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
		}
		if(1)
		{
			float_2 = float_1 * float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_1 * double_1;
		}
		if(1)
		{
			int_3 = int_3 * int_2;
		}
		if(1)
		{
			long long_2 = 1;
			long_1 = long_2 * long_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
		}
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_3 * double_4;
	}
	if(1)
	{
		float_4 = float_1 + float_3;
	}
	if(1)
	{
		float_3 = float_2 * float_4;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_5;
	}
	if(1)
	{
		double_3 = double_2 * double_6;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 * unsigned_int_6;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		char char_1 = 1;
		unsigned_int_2 = unsigned_int_7 * unsigned_int_6;
		unsigned_int_8 = unsigned_int_6 + unsigned_int_2;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		int int_5 = 1;
		int_4 = int_5 * int_3;
		short_1 = short_2;
		if(1)
		{
			short short_3 = 1;
			short_3 = short_3 + short_2;
		}
		if(1)
		{
			double_3 = double_6 * double_1;
		}
	}
	char_2 = char_2 + char_2;
}
float v_choose_internal_oligo( short parameter_1,double parameter_2,double parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,double parameter_7,float parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	float float_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_2;
	v__pr_substr(float_1,int_1,int_2,char_1);

	char_3 = char_2 + char_3;
	long_1 = long_1;
	double_1 = double_1 + double_3;
	long_1 = long_2 + long_3;
	v_oligo_compl(int_1,short_1,float_1,int_1,short_2,short_1);

	v_oligo_compl_thermod(int_3,short_3,char_3,float_2,float_1,float_1);

	char_3 = char_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		v_p3_reverse_complement(char_5,char_5);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			float float_6 = 1;
			if(1)
			{
				short short_4 = 1;
				short short_5 = 1;
				double_1 = double_1 + double_2;
				short_5 = short_4 * short_4;
				char_2 = v_oligo_repeat_library_mispriming(unsigned_int_1,long_3,short_3,unsigned_int_1,unsigned_int_2,float_2);

				unsigned_int_1 = unsigned_int_2;
				if(1)
				{
					float_4 = float_2 * float_3;
				}
			}
			if(1)
			{
				float_3 = float_2 + float_4;
				double_3 = double_1 * double_4;
				long_3 = v_oligo_hairpin(long_4,unsigned_int_2,float_1,long_3,double_4);

				int_2 = int_2;
				if(1)
				{
					double double_5 = 1;
					double_1 = double_5 * double_5;
				}
			}
			if(1)
			{
				double double_6 = 1;
				double double_7 = 1;
				float_1 = float_2 + float_2;
				double_3 = double_6 * double_7;
				if(1)
				{
					int_2 = int_2 * int_2;
				}
			}
			if(1)
			{
				int int_4 = 1;
				int_4 = int_2 * int_3;
				if(1)
				{
					float_4 = float_4 * float_4;
				}
			}
			float_4 = float_4 + float_2;
			float_6 = float_5 * float_4;
		}
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	return float_2;
}
char v_pair_repeat_sim( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 + double_1;
	double_3 = double_2 * double_1;
	double_2 = double_4 * double_4;
	int_1 = int_2;
	short_1 = short_1 + short_1;
	if(1)
	{
	}
	long_1 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "0") < 0)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_4 = long_3 * long_2;
			int_1 = v_seq_lib_num_seq();

			long_1 = long_3 + long_4;
		}
	}
	return char_1;
}
double v_pair_spans_target( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int_2 = int_1 * int_1;
	float_3 = float_1 + float_2;
	long_1 = long_1 + long_2;
	int_1 = int_3 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_4 = 1;
		int int_5 = 1;
		int_2 = int_4 + int_3;
		int_5 = int_3 + int_2;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "7?") > 0)
		{
		}
	}
	return double_1;
}
double v_characterize_pair( char parameter_1,long parameter_2,long parameter_3,int parameter_4,int parameter_5,int parameter_6,float parameter_7,short parameter_8,char parameter_9,int parameter_10)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_4 = 1;
	float float_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_8 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_9 = 1;
	double double_6 = 1;
	short short_6 = 1;
	int int_10 = 1;
	float float_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_11 = 1;
	short short_8 = 1;
	short short_9 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_6 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_10 = 1;
	long_1 = v_oligo_hairpin(long_1,unsigned_int_1,float_1,long_2,double_1);

	double_1 = double_1 * double_1;
	double_1 = double_1 * double_1;
	char_2 = char_1 * char_2;
	float_2 = float_2 + float_2;
	long_4 = long_3 * long_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	char_2 = char_1 * char_1;
	short_2 = short_1 * short_2;
	double_1 = double_2 * double_1;
	short_2 = short_1 * short_1;
	double_1 = double_2 + double_1;
	if(1)
	{
		int_4 = int_2 + int_3;
	}
	if(1)
	{
		double_2 = v_oligo_template_mispriming(char_3,double_1,short_3,double_2,unsigned_int_4,char_1,short_3,-1 );

		int_3 = int_2 * int_5;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
		}
		int_6 = int_6 * int_3;
	}
	short_3 = short_3 + short_3;
	if(1)
	{
		if(1)
		{
			int_7 = v__pr_need_pair_template_mispriming_thermod(long_3);

			unsigned_int_4 = unsigned_int_5 * unsigned_int_4;
		}
		if(1)
		{
			v_p3_reverse_complement(char_1,char_4);

			double_1 = double_2 + double_2;
			if(1)
			{
				float_3 = float_1;
			}
			if(1)
			{
			}
		}
	}
	if(1)
	{
		int_4 = int_3 * int_7;
		int_5 = int_1 + int_4;
		short_5 = short_3 * short_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				if(1)
				{
					unsigned_int_5 = unsigned_int_4 * unsigned_int_6;
					int_3 = int_5;
				}
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_4 = unsigned_int_1 + unsigned_int_5;
					v_oligo_compl(int_7,short_2,float_3,int_7,short_1,short_3);

					int_7 = int_4 + int_8;
				}
			}
			if(1)
			{
				if(1)
				{
					int_4 = int_3 * int_5;
					unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
				}
			}
		}
		if(1)
		{
			if(1)
			{
				char_3 = char_2 + char_1;
			}
			if(1)
			{
			}
		}
	}
	if(1)
	{
		double_3 = double_1 * double_3;
	}
	double_3 = double_2 + double_3;
	int_7 = int_8;
	double_4 = double_5;
	char_2 = char_4 * char_1;
	long_3 = long_4 + long_4;
	if(1)
	{
		if(1)
		{
			v__pr_substr(float_3,int_9,int_7,char_4);

			long_2 = long_1;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		if(1)
		{
			double_5 = double_4 + double_6;
		}
		if(1)
		{
		}
	}
	short_6 = short_4 + short_6;
	if(1)
	{
		if(1)
		{
			double_3 = double_4 * double_3;
		}
		if(1)
		{
		}
	}
	unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
	int_9 = int_10 + int_10;
	float_1 = float_1 * float_4;
	int_3 = int_6 + int_4;
	if(1)
	{
		int_5 = int_10 * int_4;
		if(1)
		{
			char_4 = v_oligo_repeat_library_mispriming(unsigned_int_1,long_1,short_5,unsigned_int_6,unsigned_int_3,float_1);

			short_3 = short_2 * short_5;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		char_3 = char_4;
		if(1)
		{
			char_1 = char_2 + char_4;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		char_2 = char_4 * char_5;
		if(1)
		{
			char_5 = v_pair_repeat_sim(short_3,char_5);

			double_1 = double_1;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
		if(1)
		{
			int_11 = int_1 + int_3;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		short short_7 = 1;
		short_9 = short_7 + short_8;
		if(1)
		{
			long_5 = long_3 + long_2;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		short_3 = v_align(float_4,short_5,char_4);

		long_3 = long_5 * long_5;
		if(1)
		{
			int_10 = int_11 + int_3;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_6;
		if(1)
		{
			long_5 = long_3 * long_2;
		}
		if(1)
		{
			double double_7 = 1;
			double_3 = double_7 + double_5;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			float_5 = float_4 + float_1;
		}
		if(1)
		{
			double double_8 = 1;
			double double_9 = 1;
			double_8 = double_9;
			if(1)
			{
			}
		}
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_8 + unsigned_int_5;
		if(1)
		{
			if(1)
			{
				v_oligo_compl_thermod(int_4,short_3,char_2,float_4,float_6,float_6);

				char_3 = v_align_thermod(short_4,char_3,short_4,-1 );

				double_6 = double_2;
			}
			if(1)
			{
			}
		}
		int_8 = int_7;
		if(1)
		{
			if(1)
			{
				int_7 = int_9 * int_7;
			}
			if(1)
			{
			}
		}
	}
	if(1)
	{
		int_6 = v__pr_need_pair_template_mispriming(double_6);

		float_2 = float_3 * float_6;
		if(1)
		{
			if(1)
			{
				short_2 = short_8 + short_9;
			}
			if(1)
			{
			}
		}
		int_7 = int_6 + int_4;
		unsigned_int_7 = unsigned_int_9 + unsigned_int_1;
		if(1)
		{
			short_5 = short_8 * short_4;
		}
		if(1)
		{
			if(1)
			{
				short_2 = short_6 + short_4;
			}
			if(1)
			{
			}
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				float_2 = float_5 * float_2;
			}
			if(1)
			{
			}
		}
		unsigned_int_1 = unsigned_int_8;
	}
	if(1)
	{
		if(1)
		{
			char_3 = char_2 + char_3;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				int_9 = int_10;
			}
			if(1)
			{
			}
		}
		long_3 = long_1 + long_6;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_7 = unsigned_int_3 * unsigned_int_9;
		}
		if(1)
		{
			float_2 = float_4 * float_4;
			char_7 = char_6 + char_6;
			unsigned_int_1 = unsigned_int_8 + unsigned_int_8;
			long_5 = long_4 * long_3;
			double_6 = v_pair_spans_target(float_4,unsigned_int_10);

			long_3 = long_6 + long_2;
			if(1)
			{
				int int_12 = 1;
				int_12 = int_6 * int_5;
			}
			if(1)
			{
				if(1)
				{
					char_5 = char_4 * char_4;
				}
				if(1)
				{
				}
			}
		}
	}
	if(1)
	{
		if(1)
		{
			int int_13 = 1;
			int_10 = int_4 * int_13;
		}
		if(1)
		{
			char char_8 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_9;
			double_6 = double_3;
			char_7 = char_6 + char_8;
			float_4 = float_5 + float_3;
			float_2 = float_5 + float_2;
			if(1)
			{
				long_3 = long_1;
			}
			if(1)
			{
				if(1)
				{
					int_10 = int_9 * int_8;
				}
				if(1)
				{
				}
			}
		}
	}
	return double_10;
}
char v_compare_primer_pair( short parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = long_1 * long_2;
	float_2 = float_1 + float_1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	char_3 = char_1 * char_2;
	char_2 = char_1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	float_2 = float_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_3;
}
unsigned int v_choose_pair_or_triple( double parameter_1,short parameter_2,char parameter_3,long parameter_4,float parameter_5,short parameter_6,short parameter_7)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_4 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = v_add_pair(double_1,int_1);

	long_1 = long_2;
	char_1 = char_1 + char_1;
	v_right_oligo_in_pair_overlaps_used_oligo(char_2,char_2,int_1);

	int_1 = v_left_oligo_in_pair_overlaps_used_oligo(double_1,int_1,int_1);

	float_1 = v_free_pair_memory(int_2);

	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			float float_3 = 1;
			char_3 = v_compare_primer_pair(short_1,short_2);

			v_obj_fn(double_1,double_2);

			float_4 = float_2 * float_3;
		}
		if(1)
		{
			long long_4 = 1;
			short_2 = v_khash_t(double_2);

			float_4 = v_choose_internal_oligo(short_2,double_3,double_3,int_3,int_3,unsigned_int_1,double_1,float_1);

			long_1 = long_3 + long_4;
		}
		double_4 = v_characterize_pair(char_2,long_2,long_3,int_2,int_2,int_2,float_2,short_1,char_4,int_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	double_1 = double_4 * double_2;
	float_1 = float_4 * float_2;
	return unsigned_int_2;
}
double v_primer_rec_comp( unsigned int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long_1 = long_1 + long_2;
	char_1 = char_1 * char_2;
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
	return double_1;
}
int v_sort_primer_array( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_1;
	return int_1;
	double_2 = v_primer_rec_comp(unsigned_int_1,char_1);

}
short v_make_internal_oligo_list( float parameter_1,float parameter_2,float parameter_3,int parameter_4,long parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	char char_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		float_1 = v_pick_primer_range(long_1,int_1,int_1,char_1,short_2,long_1,float_1,long_2,float_1);

		float_1 = float_1 * float_2;
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		char_2 = char_2;
		char_2 = char_3 + char_4;
		long_1 = long_3;
		char_2 = v_add_one_primer(short_1,int_1,unsigned_int_2,short_2,long_4,float_2,unsigned_int_3,long_3,-1 );

		unsigned_int_4 = unsigned_int_4;
	}
	return short_3;
}
void v_add_one_primer_by_position( int parameter_1,int parameter_2,int parameter_3,double parameter_4,long parameter_5,float parameter_6,double parameter_7,int parameter_8,int parameter_9)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_6 = 1;
	int_2 = int_1 + int_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_3 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	float_1 = float_1 + float_1;
	char_1 = char_1;
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
	}
	if(1)
	{
		if(1)
		{
		}
	}
	int_1 = int_1 + int_2;
	unsigned_int_3 = v_add_oligo_to_oligo_array(char_2,float_2);

	char_1 = char_1;
	if(1)
	{
		char_1 = char_1 * char_3;
		int_3 = int_2 + int_1;
	}
	if(1)
	{
		char_2 = char_2 + char_2;
		char_2 = char_1 + char_1;
		long_2 = long_3 * long_2;
	}
	long_4 = long_1 * long_3;
	unsigned_int_2 = v_p_obj_fn(unsigned_int_2,float_1,int_2);

	unsigned_int_2 = unsigned_int_3;
	char_1 = v_calc_and_check_oligo_features(int_4,float_3,long_3,double_2,double_3,float_4,short_1,long_1,float_5,-1 );

	double_3 = double_3 + double_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	if(1)
	{
		short short_2 = 1;
		short short_3 = 1;
		double_4 = double_2;
		short_3 = short_1 + short_2;
		v__pr_substr(float_5,int_3,int_3,char_2);

		long_2 = long_2 + long_2;
		if(1)
		{
			double_3 = double_1 * double_4;
		}
		if(1)
		{
			int int_5 = 1;
			int_2 = int_4 * int_5;
		}
	}
	if(1)
	{
		char_1 = char_2 + char_3;
	}
	double_2 = double_4 * double_1;
	unsigned_int_1 = v_free_primer_repeat_sim_score(int_6);

}
int v_pick_primers_by_position( char parameter_1,double parameter_2,int parameter_3,long parameter_4,unsigned int parameter_5,char parameter_6,unsigned int parameter_7,short parameter_8,unsigned int parameter_9)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int_1 = int_1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		if(1)
		{
			double_2 = v_pr_append_new_chunk_85(short_1,float_1);

			double_3 = double_3 * double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		int_2 = int_2;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			v_add_one_primer_by_position(int_2,int_3,int_3,double_3,long_1,float_2,double_4,int_3,int_2);

			float_1 = float_1 + float_2;
			if(1)
			{
				long long_2 = 1;
				long long_3 = 1;
				long_1 = long_2 + long_3;
			}
		}
	}
	if(1)
	{
		int int_4 = 1;
		int_3 = int_4 + int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_3 = 1;
			float float_3 = 1;
			if(1)
			{
				double_3 = double_1 + double_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			}
			float_3 = float_1 * float_1;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
			}
		}
	}
	if(1)
	{
		double_4 = double_2 + double_1;
	}
	return int_3;
}
unsigned int v_make_detection_primer_lists( float parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_1;
	char_1 = v_add_one_primer(short_1,int_1,unsigned_int_1,short_1,long_1,float_2,unsigned_int_2,long_1,-1 );

	double_1 = double_1;
	float_3 = v_pick_primer_range(long_1,int_1,int_1,char_2,short_2,long_1,float_4,long_1,float_4);

	float_2 = float_2 * float_5;
	float_3 = float_1 + float_4;
	double_2 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float_4 = float_4 + float_3;
		}
	}
	int_1 = int_1 * int_1;
	double_3 = double_2 * double_3;
	float_6 = float_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short_2 = short_2 + short_2;
		}
		if(1)
		{
			float_1 = float_1 * float_6;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_3 = 1;
			char_5 = char_3 * char_4;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2;
		}
	}
	if(1)
	{
		short_1 = short_2 + short_1;
		double_4 = double_1 * double_4;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
	}
	if(1)
	{
		int_1 = int_2 + int_1;
	}
	if(1)
	{
		short short_3 = 1;
		short_4 = short_1 + short_3;
	}
	if(1)
	{
		short_1 = short_2;
		char_5 = char_2 * char_1;
		long_3 = long_2 + long_2;
		char_4 = char_4 + char_5;
		if(1)
		{
			float float_7 = 1;
			float_4 = float_7 * float_1;
		}
		if(1)
		{
			int_2 = v_pick_primers_by_position(char_5,double_3,int_3,long_2,unsigned_int_6,char_4,unsigned_int_3,short_2,unsigned_int_2);

			unsigned_int_6 = unsigned_int_2;
		}
		if(1)
		{
			float_1 = float_1 + float_1;
		}
	}
	if(1)
	{
		long_1 = long_2 + long_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_5 + unsigned_int_3;
	}
	if(1)
	{
		short short_5 = 1;
		short short_6 = 1;
		short_6 = short_5 + short_4;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		char char_6 = 1;
		char char_7 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_7;
		char_7 = char_6 * char_7;
		if(1)
		{
			unsigned_int_7 = unsigned_int_7;
		}
		if(1)
		{
			float_4 = float_4 * float_6;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_6 * unsigned_int_5;
		}
	}
	if(1)
	{
	}
	if(1)
	{
		double_3 = double_3;
		double_4 = double_3 + double_4;
	}
	if(1)
	{
	}
	return unsigned_int_8;
}
char v_add_one_primer( short parameter_1,int parameter_2,unsigned int parameter_3,short parameter_4,long parameter_5,float parameter_6,unsigned int parameter_7,long parameter_8,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	char char_4 = 1;
	long_2 = long_1 * long_2;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_1 * double_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	char_1 = char_2 * char_1;
	int_1 = int_3 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_6 = 1;
		int int_5 = 1;
		double double_7 = 1;
		double_5 = double_3 + double_4;
		char_1 = char_3;
		char controller4vul_684[2];
		fgets(controller4vul_684 ,2 ,stdin);
		if( strcmp( controller4vul_684, "b") > 0)
		{
			char controller4vul_685[3];
			fgets(controller4vul_685 ,3 ,stdin);
			if( strcmp( controller4vul_685, "j4") < 0)
			{
				char_2 = v_calc_and_check_oligo_features(int_4,float_1,long_3,double_2,double_5,float_1,short_1,long_1,float_2,uni_para);

				unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			}
			float_1 = float_3;
			short_2 = short_1 * short_1;
		}
		if(1)
		{
			float float_4 = 1;
			if(1)
			{
				short_1 = short_1 * short_2;
			}
			float_3 = float_4 + float_4;
			long_4 = long_1 * long_4;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
		}
		double_6 = double_1 * double_5;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
		int_4 = int_5 + int_4;
		double_2 = double_7 * double_3;
		if(1)
		{
			long long_5 = 1;
			long long_6 = 1;
			int int_6 = 1;
			long_4 = long_5 + long_6;
			int_6 = int_5 + int_6;
			if(1)
			{
				int_6 = int_1 + int_6;
			}
			if(1)
			{
				unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
			}
		}
		if(1)
		{
			double_3 = double_6 + double_6;
		}
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			float_3 = float_2 + float_1;
			unsigned_int_6 = unsigned_int_1 + unsigned_int_6;
		}
	}
	return char_4;
}
float v_add_primers_to_check( float parameter_1,int parameter_2,long parameter_3,unsigned int parameter_4,short parameter_5,long parameter_6,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int_1 = int_2;
	char controller4vul_683[3];
	fgets(controller4vul_683 ,3 ,stdin);
	if( strcmp( controller4vul_683, "u1") > 0)
	{
		long long_3 = 1;
		char_1 = v_add_one_primer(short_1,int_3,unsigned_int_1,short_2,long_1,float_1,unsigned_int_1,long_2,uni_para);

		long_3 = long_2 * long_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		short_2 = short_2;
	}
	return float_1;
}
int v_pick_only_best_primer( char parameter_1,float parameter_2,float parameter_3,unsigned int parameter_4,short parameter_5,char parameter_6,long parameter_7,short parameter_8)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	float float_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	short short_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	int int_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_7 = 1;
	double double_6 = 1;
	int_1 = int_1;
	int_2 = int_3;
	unsigned_int_1 = v_free_primer_repeat_sim_score(int_3);

	char_1 = char_1 * char_2;
	double_3 = double_1 * double_2;
	char_3 = char_1 + char_2;
	char_2 = char_4 + char_5;
	char_1 = char_6 * char_7;
	short_3 = short_1 * short_2;
	char_4 = char_6 * char_7;
	int_4 = int_2 * int_2;
	int_4 = int_5;
	double_2 = double_3;
	double_2 = double_2 + double_3;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		short_2 = short_4;
		short_1 = short_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_5 * int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float_1 = float_1 * float_2;
			unsigned_int_1 = v_add_oligo_to_oligo_array(char_4,float_2);

			long_3 = long_2 + long_3;
			if(1)
			{
				if(1)
				{
					v__pr_substr(float_3,int_5,int_2,char_6);

					short_2 = short_5 + short_2;
				}
				unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
				char_1 = char_5 + char_4;
			}
			if(1)
			{
				if(1)
				{
					float_4 = float_3;
				}
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
				char_1 = v_any_5_prime_ol_extension_has_problem(short_1);

				double_2 = double_3;
			}
			unsigned_int_4 = v_p_obj_fn(unsigned_int_1,float_5,int_6);

			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
			char_2 = v_calc_and_check_oligo_features(int_2,float_2,long_4,double_1,double_3,float_3,short_3,long_4,float_4,-1 );

			double_5 = double_4 + double_5;
			double_3 = double_5 * double_3;
			unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
			if(1)
			{
				long_2 = v_pr_append_95();

				unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
				if(1)
				{
					float float_6 = 1;
					float_1 = float_2 + float_6;
					unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
					long_5 = long_1 * long_5;
				}
				if(1)
				{
					long_1 = long_6 * long_4;
				}
			}
			if(1)
			{
				double_5 = double_2 + double_1;
				if(1)
				{
					int_1 = int_7;
				}
			}
		}
	}
	if(1)
	{
		short_2 = short_3 + short_4;
		int_3 = int_1 + int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_8 = 1;
		long long_7 = 1;
		double double_7 = 1;
		int int_9 = 1;
		if(1)
		{
			short_2 = short_2 * short_5;
		}
		if(1)
		{
			long_3 = long_5 + long_5;
		}
		unsigned_int_4 = unsigned_int_5;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_5;
		int_8 = int_3 * int_7;
		double_6 = v_pr_append_new_chunk_85(short_1,float_2);

		double_2 = double_6 * double_1;
		long_6 = long_7;
		double_7 = double_6 + double_3;
		int_9 = int_8 + int_5;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
short v_pick_sequencing_primer_list( char parameter_1,long parameter_2,int parameter_3,short parameter_4,double parameter_5)
{
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_1 = v_pr_append_new_chunk_85(short_1,float_1);

	int_1 = v_pick_only_best_primer(char_1,float_1,float_2,unsigned_int_1,short_2,char_2,long_1,short_3);

	int_1 = int_1 + int_1;
	return short_4;
}
char v_any_5_prime_ol_extension_has_problem( short parameter_1)
{
	char char_1 = 1;
	return char_1;
}
unsigned int v_free_primer_repeat_sim_score( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short_2 = short_1 * short_1;
		double_2 = double_1 + double_2;
	}
	return unsigned_int_1;
}
unsigned int v_add_oligo_to_oligo_array( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	if(1)
	{
		unsigned_int_1 = v_pr_safe_realloc(int_1);

		double_1 = double_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_1 = double_2 * double_3;
		double_3 = double_1 + double_1;
	}
	float_1 = v_pr_safe_malloc(double_2);

	unsigned_int_3 = unsigned_int_1;
	float_1 = float_2;
	return unsigned_int_2;
}
unsigned int v_p_obj_fn( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	long_1 = v_bf_get_overlaps_target(double_1);

	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2 + double_2;
	int_2 = int_1 * int_1;
	long_3 = long_3 * long_4;
	short_1 = short_1 * short_2;
	double_3 = v_oligo_max_template_mispriming_thermod(short_2);

	float_3 = float_1 * float_2;
	short_3 = short_2 + short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 * int_3;
	double_1 = double_2 + double_3;
	double_2 = double_1;
	int_4 = int_2 * int_3;
	double_4 = v_oligo_max_template_mispriming(double_4);

	char_3 = char_1 * char_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	short_3 = short_4 * short_4;
	int_1 = int_4 + int_1;
	return unsigned_int_1;
	int_3 = v_bf_get_infinite_pos_penalty(long_1);

}
void v_op_set_completely_written( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
}
int v_op_set_too_short( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_2;
	double_1 = double_2;
	return int_1;
}
double v_op_set_too_long()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 + float_1;
	return double_1;
}
double v_oligo_max_template_mispriming_thermod( short parameter_1)
{
	double double_1 = 1;
	return double_1;
}
double v_primer_mispriming_to_template_thermod( short parameter_1,int parameter_2,long parameter_3,short parameter_4,short parameter_5,int parameter_6,int parameter_7,char parameter_8,float parameter_9,unsigned int parameter_10,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_5 = 1;
	int int_6 = 1;
	short short_6 = 1;
	char char_4 = 1;
	short short_7 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_1;
	unsigned_int_2 = unsigned_int_3;
	short_2 = short_1 + short_1;
	long_1 = long_1 + long_1;
	short_2 = short_1 + short_3;
	int_3 = int_1 * int_2;
	int_2 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_1 + short_3;
		int_3 = int_3 + int_1;
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		float float_2 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_4 = 1;
		float float_3 = 1;
		if(1)
		{
			int_4 = int_4 * int_3;
		}
		float_2 = float_1 + float_2;
		unsigned_int_7 = unsigned_int_4 * unsigned_int_7;
		double_3 = double_1 + double_2;
		short_5 = short_5;
		double_2 = double_4;
		float_3 = float_1 + float_1;
	}
	short_5 = short_5 * short_5;
	int_2 = int_3;
	int_2 = int_4;
	if(1)
	{
		int int_5 = 1;
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
		if(1)
		{
			int_2 = int_3 * int_1;
		}
		int_4 = int_1 + int_3;
		int_1 = int_3 + int_5;
	}
	int_6 = int_6;
	double_2 = double_3 * double_2;
	if(1)
	{
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
	}
	if(1)
	{
		char char_3 = 1;
		char_3 = char_2 * char_3;
	}
	double_3 = double_3 * double_3;
	if(1)
	{
		int_6 = int_6 * int_1;
	}
	char controller4vul_688[2];
	fgets(controller4vul_688 ,2 ,stdin);
	if( strcmp( controller4vul_688, "9") > 0)
	{
		char controller4vul_689[2];
		fgets(controller4vul_689 ,2 ,stdin);
		if( strcmp( controller4vul_689, "k") < 0)
		{
			long long_3 = 1;
			long_1 = long_3;
			char controller4vul_690[2];
			fgets(controller4vul_690 ,2 ,stdin);
			if( strcmp( controller4vul_690, "4") < 0)
			{
				char_2 = v_align_thermod(short_6,char_4,short_7,uni_para);

				double_1 = double_3;
				char_4 = char_1 + char_1;
			}
			if(1)
			{
				unsigned int unsigned_int_8 = 1;
				unsigned_int_8 = unsigned_int_6 + unsigned_int_4;
			}
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_4;
		}
	}
	return double_5;
}
int v__pr_need_pair_template_mispriming_thermod( long parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v__pr_need_template_mispriming_thermod( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	return int_1;
	int_1 = v__pr_need_pair_template_mispriming_thermod(long_1);

}
char v_op_set_high_similarity_to_multiple_template_sites( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double_2 = double_1 + double_2;
	long_1 = long_2;
	return char_1;
}
double v_oligo_max_template_mispriming( double parameter_1)
{
	double double_1 = 1;
	return double_1;
}
double v_primer_mispriming_to_template( short parameter_1,int parameter_2,float parameter_3,float parameter_4,unsigned int parameter_5,int parameter_6,int parameter_7,long parameter_8,float parameter_9,int parameter_10)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	char char_4 = 1;
	char_1 = char_1 * char_1;
	double_1 = double_1 * double_1;
	double_2 = double_2 * double_1;
	long_1 = long_1 + long_2;
	int_2 = int_1 + int_1;
	int_1 = int_3 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_2 + long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	short_1 = short_2;
	if(1)
	{
		int int_4 = 1;
		double_2 = v_oligo_max_template_mispriming(double_3);

		unsigned_int_1 = unsigned_int_3;
		int_3 = int_4 + int_1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		double double_4 = 1;
		if(1)
		{
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		}
		long_3 = long_1 + long_4;
		long_4 = long_3 * long_2;
		double_5 = double_4 * double_4;
		double_5 = double_6 + double_5;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		char_2 = char_2 + char_1;
	}
	short_2 = short_2 + short_2;
	int_2 = int_3 * int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		short short_3 = 1;
		double double_7 = 1;
		if(1)
		{
			char char_3 = 1;
			char_2 = char_3 + char_1;
		}
		if(1)
		{
			long long_5 = 1;
			long long_6 = 1;
			short_2 = v_align(float_3,short_1,char_1);

			long_4 = long_5 + long_6;
		}
		short_3 = short_2 + short_1;
		double_5 = double_7 * double_7;
	}
	double_8 = double_1 * double_3;
	double_6 = double_9 * double_5;
	if(1)
	{
		unsigned_int_4 = unsigned_int_5;
	}
	if(1)
	{
		float float_4 = 1;
		float_2 = float_4;
	}
	int_5 = int_5;
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				double_1 = double_6;
				unsigned_int_2 = unsigned_int_5;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				unsigned_int_6 = unsigned_int_5 * unsigned_int_2;
			}
		}
		if(1)
		{
			double double_10 = 1;
			double_6 = double_3 * double_10;
		}
	}
	return double_8;
	char_4 = v_op_set_high_similarity_to_multiple_template_sites(long_3);

}
int v__pr_need_pair_template_mispriming( double parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v__pr_need_template_mispriming()
{
	int int_1 = 1;
	double double_1 = 1;
	return int_1;
	int_1 = v__pr_need_pair_template_mispriming(double_1);

}
double v_oligo_template_mispriming( char parameter_1,double parameter_2,short parameter_3,double parameter_4,unsigned int parameter_5,char parameter_6,short parameter_7,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	float_1 = float_2;
	char controller4vul_686[2];
	fgets(controller4vul_686 ,2 ,stdin);
	if( strcmp( controller4vul_686, "z") > 0)
	{
		char controller4vul_687[3];
		fgets(controller4vul_687 ,3 ,stdin);
		if( strcmp( controller4vul_687, "st") > 0)
		{
			double_3 = v_primer_mispriming_to_template_thermod(short_1,int_1,long_1,short_1,short_2,int_2,int_2,char_1,float_1,unsigned_int_2,uni_para);

			long_1 = long_1;
		}
		if(1)
		{
			long_2 = long_2;
		}
	}
	return double_1;
}
int v_op_set_high_similarity_to_non_template_seq( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_2;
	char_1 = char_1 * char_2;
	return int_1;
}
void v_oligo_compute_sequence_and_reverse( int parameter_1,short parameter_2,float parameter_3,int parameter_4,int parameter_5,char parameter_6,char parameter_7)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	v_p3_reverse_complement(char_1,char_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_1;
	v__pr_substr(float_1,int_3,int_3,char_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
char v_oligo_repeat_library_mispriming( unsigned int parameter_1,long parameter_2,short parameter_3,unsigned int parameter_4,unsigned int parameter_5,float parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_3 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 * double_1;
	long_2 = long_1 * long_2;
	short_1 = v_align(float_1,short_2,char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_3 * int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_4;
	double_1 = double_1 + double_1;
	if(1)
	{
		double_1 = double_1 + double_1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		float_3 = v_pr_safe_malloc(double_2);

		char_1 = char_1 * char_2;
		double_1 = double_1 + double_1;
	}
	int_2 = int_3;
	if(1)
	{
		int int_4 = 1;
		double double_3 = 1;
		int_1 = int_4 * int_5;
		char_1 = char_1 + char_2;
		double_3 = double_2 + double_2;
		double_3 = double_1 * double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_4 = 1;
			short short_4 = 1;
			short short_5 = 1;
			if(1)
			{
				float_3 = float_3 + float_1;
			}
			if(1)
			{
				char_1 = char_1;
			}
			if(1)
			{
				double_3 = double_4 * double_3;
			}
			if(1)
			{
				int_1 = v_op_set_high_similarity_to_non_template_seq(double_1);

				double_4 = double_2 + double_3;
			}
			double_2 = double_1 * double_1;
			if(1)
			{
				char_1 = char_1 * char_1;
				v_oligo_compute_sequence_and_reverse(int_6,short_2,float_2,int_1,int_5,char_2,char_3);

				int_4 = int_4;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
			}
			if(1)
			{
				short short_3 = 1;
				short_4 = short_1 * short_3;
				int_3 = v_seq_lib_num_seq();

				short_5 = short_4;
			}
			if(1)
			{
				double double_5 = 1;
				short_1 = short_5 * short_4;
				double_5 = double_2 + double_5;
				int_2 = int_1 * int_2;
				if(1)
				{
				}
			}
		}
	}
	return char_2;
}
int v_op_set_high_hairpin_th( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 * double_2;
	return int_2;
}
long v_oligo_hairpin( long parameter_1,unsigned int parameter_2,float parameter_3,long parameter_4,double parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long_2 = long_1 + long_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_2 = v_op_set_high_hairpin_th(char_1);

		unsigned_int_1 = unsigned_int_2;
		short_1 = short_1 * short_1;
		char_2 = v_align_thermod(short_1,char_1,short_2,-1 );

		unsigned_int_2 = unsigned_int_1;
	}
	return long_1;
}
float v_calcDimer( int parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,long parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	double_1 = double_1 + double_2;
	int_1 = int_2;
	long_2 = long_1 * long_1;
	if(1)
	{
		if(1)
		{
		}
		long_3 = long_2 * long_1;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		char char_2 = 1;
		int int_3 = 1;
		double_1 = double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int_1 = int_1 + int_1;
			}
		}
		double_3 = double_4 + double_2;
		char_1 = char_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			long long_4 = 1;
			int_3 = int_3 * int_2;
			float_2 = float_1 + float_1;
			float_1 = float_2 * float_2;
			long_4 = long_1 + long_3;
			int_3 = int_2 + int_1;
			long_1 = long_3 * long_1;
		}
		if(1)
		{
			int int_4 = 1;
			int_3 = int_4 + int_4;
		}
	}
	return float_3;
}
unsigned int v_strcatc( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 * int_1;
	short_3 = short_1 + short_2;
	return unsigned_int_1;
}
int v_drawDimer( int parameter_1,int parameter_2,double parameter_3,double parameter_4,double parameter_5,int parameter_6,double parameter_7,char parameter_8)
{
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	float_1 = v_safe_malloc(int_1,long_1);

	unsigned_int_1 = v_strcatc(char_1,char_1);

}
void v_maxTM( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = v_RSH(int_1,int_1,double_1);

	short_3 = short_1 * short_2;
	int_2 = int_2 * int_2;
	float_1 = v_safe_malloc(int_1,long_2);

	double_2 = double_2 * double_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	double_1 = double_1;
	float_1 = v_Hs(int_3,int_3,int_3);

	int_4 = int_3 * int_2;
	double_4 = double_3 + double_2;
	double_5 = double_1 * double_2;
	char_1 = char_1 + char_1;
	if(1)
	{
		short_2 = short_2 + short_4;
		int_1 = int_5 + int_6;
		short_4 = short_3 * short_4;
	}
	if(1)
	{
		double_4 = double_2 + double_3;
		short_3 = short_2 * short_4;
		int_5 = int_4;
	}
	if(1)
	{
		double_1 = double_3 + double_2;
		double_6 = v_Ss(int_2,int_2,int_1);

		int_3 = int_2;
	}
	if(1)
	{
		int int_7 = 1;
		char char_2 = 1;
		int_7 = int_6 * int_3;
		char_1 = char_2 + char_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5;
		double_2 = double_6 * double_2;
	}
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		double double_7 = 1;
		float_3 = float_2 * float_2;
		double_7 = double_4 * double_1;
	}
	unsigned_int_3 = unsigned_int_6 * unsigned_int_5;
}
short v_fillMatrix( int parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	int int_8 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_5 = 1;
				float_1 = v_safe_malloc(int_1,long_1);

				int_2 = v_calc_bulge_internal(int_1,int_1,int_2,int_1,double_4,int_1,int_1,-1 );

				int_2 = int_2 + int_3;
				char_1 = char_2;
				char_1 = char_3 * char_2;
				if(1)
				{
					double_5 = double_4 * double_1;
					int_2 = int_1 * int_4;
				}
				if(1)
				{
					short_1 = short_1 + short_1;
					for(int looper_3=0; looper_3<1;looper_3++)
					{
						unsigned int unsigned_int_3 = 1;
						long long_2 = 1;
						unsigned_int_3 = unsigned_int_2;
						long_2 = long_1 + long_2;
						if(1)
						{
							unsigned int unsigned_int_4 = 1;
							float_2 = v_LSH(int_5,int_2,double_6);

							int_3 = int_3 * int_1;
							unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
						}
						for(int looper_4=0; looper_4<1;looper_4++)
						{
							if(1)
							{
								int int_7 = 1;
								v_maxTM(int_3,int_6);

								int_4 = int_4 * int_4;
								int_7 = int_7 * int_5;
								double_1 = double_5 * double_6;
								if(1)
								{
									double_3 = double_5 * double_3;
									double_5 = double_4 * double_1;
								}
								if(1)
								{
									long_2 = long_1 * long_2;
									int_7 = int_4;
								}
							}
						}
					}
				}
			}
		}
	}
	int_8 = int_4 + int_2;
	return short_1;
}
float v_initMatrix()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_4 = 1;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
				short_1 = short_1 * short_2;
			}
			char controller_2[3];
			fgets(controller_2 ,3 ,stdin);
			if( strcmp( controller_2, "; ") < 0)
			{
				unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
				unsigned_int_1 = unsigned_int_4;
			}
		}
	}
	return float_1;
}
long v_calcHairpin( int parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,long parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	char_2 = char_1 + char_2;
	int_1 = int_1 * int_1;
	if(1)
	{
		if(1)
		{
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
		if(1)
		{
			int_1 = int_1 + int_1;
			double_1 = double_1;
		}
	}
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					double_1 = double_2 + double_1;
				}
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					int int_3 = 1;
					int_1 = int_3;
				}
			}
		}
		double_2 = double_3;
		if(1)
		{
			short short_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_6 = 1;
			short_3 = short_1 * short_2;
			double_4 = double_4 * double_2;
			long_1 = long_1;
			double_4 = double_5 * double_3;
			unsigned_int_1 = unsigned_int_1;
			double_4 = double_6 + double_1;
		}
		if(1)
		{
			short short_4 = 1;
			short_2 = short_4 * short_1;
		}
	}
	return long_2;
}
float v_drawHairpin( int parameter_1,double parameter_2,double parameter_3,int parameter_4,double parameter_5,unsigned int parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_3 = 1;
	int_1 = int_2;
	long_1 = long_1 * long_1;
	int_5 = int_3 * int_4;
	if(1)
	{
		if(1)
		{
			double_1 = double_1 * double_1;
			char_2 = char_1 + char_1;
		}
		if(1)
		{
			double_1 = double_1;
		}
	}
	if(1)
	{
		float float_2 = 1;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					double_2 = double_1 * double_1;
				}
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					float_2 = float_1 * float_1;
				}
			}
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char controller_9[2];
		fgets(controller_9 ,2 ,stdin);
		if( strcmp( controller_9, "T") < 0)
		{
			short short_1 = 1;
			short_1 = short_1 + short_1;
			float_1 = float_2 + float_2;
			long_1 = long_2;
			double_2 = double_2 * double_2;
		}
		if(1)
		{
			float_1 = v_safe_malloc(int_2,long_2);

			unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		}
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short short_2 = 1;
		short_2 = short_2 * short_2;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		if(1)
		{
			int_3 = int_5 + int_5;
		}
		if(1)
		{
			if(1)
			{
				int int_6 = 1;
				int int_7 = 1;
				int_7 = int_6 * int_3;
			}
			if(1)
			{
				double double_3 = 1;
				double double_4 = 1;
				double_3 = double_4;
			}
		}
	}
	double_2 = double_2 * double_2;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		char_2 = char_1 * char_1;
	}
	unsigned_int_3 = unsigned_int_2;
	short_5 = short_3 * short_4;
	return float_3;
}
void v_push( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	long_3 = long_1 * long_2;
	double_3 = double_1 + double_2;
	double_4 = double_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_3 * double_3;
	double_2 = double_2;
	float_1 = v_safe_malloc(int_1,long_2);

	float_2 = float_1 + float_1;
}
unsigned int v_tracebacku( int parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_9 = 1;
	float float_3 = 1;
	int int_10 = 1;
	int int_11 = 1;
	v_push(unsigned_int_1,int_1,int_1,int_2,double_1);

	char_1 = v_Ststack(int_2,int_3);

	double_1 = v_calc_hairpin(int_3,int_2,double_2,int_2);

	long_1 = long_1 + long_2;
	int_1 = v_Hd3(int_1,int_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = v_calc_bulge_internal2(int_3,int_1,int_1,int_4,double_3,int_2,int_4,-1 );

	long_1 = long_1 * long_3;
	int_2 = v_Hd5(int_4,int_4);

	v_END5_4(int_4,int_3);

	float_1 = v_CBI(int_5,int_6,double_4,int_4,int_2,-1 );

	double_1 = v_Ss(int_1,int_3,int_4);

	float_2 = v_Hs(int_7,int_1,int_5);

	int_8 = int_4 + int_6;
	int_2 = v_END5_1(int_5,int_2);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	int_4 = v_Sd5(int_1,int_5);

	long_3 = v_Sd3(int_8,int_2);

	int_3 = int_2 + int_8;
	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = v_Htstack(int_9,int_6);

		unsigned_int_2 = unsigned_int_6;
		float_3 = v_safe_malloc(int_1,long_2);

		short_1 = v_END5_2(int_10,int_10);

		unsigned_int_5 = unsigned_int_6;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_5 = 1;
			double double_6 = 1;
			v_equal(double_1,double_1);

			double_2 = double_5 * double_6;
			if(1)
			{
			}
			if(1)
			{
			}
		}
	}
	if(1)
	{
	}
	return unsigned_int_5;
	double_3 = v_END5_3(int_7,int_11);

}
unsigned int v_max5( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5)
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
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
char v_Ststack( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
unsigned int v_Htstack( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_END5_4( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	char char_2 = 1;
	int int_8 = 1;
	int_2 = int_1 * int_2;
	double_3 = double_1 + double_2;
	short_1 = short_1 * short_1;
	double_3 = double_2;
	float_1 = float_1 * float_1;
	int_3 = int_2 + int_2;
	double_1 = double_2;
	float_1 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_2 = long_1 + long_1;
		float_2 = float_1 * float_3;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double_1 = double_1 * double_2;
			unsigned_int_1 = unsigned_int_1;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
				int_3 = int_3 * int_3;
			}
			int_1 = int_4 * int_5;
		}
		if(1)
		{
			int int_7 = 1;
			int_1 = int_2 * int_4;
			short_3 = short_1 + short_2;
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				double_2 = double_2;
				unsigned_int_3 = v_Htstack(int_6,int_5);

				unsigned_int_2 = unsigned_int_4;
			}
			int_7 = int_3 + int_7;
		}
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				char_1 = char_1 * char_2;
				char_2 = v_Ststack(int_8,int_5);

				short_2 = short_3 + short_3;
				int_4 = int_8 * int_1;
			}
		}
	}
	if(1)
	{
	}
}
long v_Sd3( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	return long_1;
}
int v_Hd3( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
double v_END5_3( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_5 = 1;
	short_1 = short_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 + double_1;
	double_1 = double_1;
	int_1 = int_2 + int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_3 * int_3;
	double_2 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char_2 = char_1 + char_1;
		if(1)
		{
			double double_3 = 1;
			double double_4 = 1;
			unsigned_int_1 = unsigned_int_2;
			double_4 = double_3 * double_3;
			if(1)
			{
				short short_3 = 1;
				short_2 = short_3;
				long_1 = v_Sd3(int_2,int_2);

				unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
			}
			int_1 = v_Hd3(int_3,int_5);

			double_5 = double_3 * double_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			float_3 = float_1 + float_2;
			unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
			if(1)
			{
				double double_6 = 1;
				double_6 = double_5;
				double_6 = double_1 + double_1;
			}
			float_4 = float_5;
		}
		if(1)
		{
			if(1)
			{
				char char_3 = 1;
				long long_2 = 1;
				char_1 = char_3 * char_2;
				long_2 = long_2 * long_1;
				int_1 = int_5 * int_2;
			}
		}
	}
	if(1)
	{
	}
	return double_2;
}
int v_Sd5( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
int v_Hd5( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
short v_END5_2( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int_1 = v_Hd5(int_2,int_3);

	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1 * float_2;
	int_1 = int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_2 + int_3;
	int_4 = int_1 * int_4;
	double_3 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		int_2 = v_Sd5(int_1,int_1);

		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			int int_5 = 1;
			int_2 = int_2 * int_2;
			int_2 = int_5 * int_5;
			if(1)
			{
				int int_6 = 1;
				int_2 = int_1 + int_2;
				int_6 = int_3 * int_4;
			}
			double_4 = double_1 * double_2;
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double_1 = double_2;
			float_4 = float_2 * float_3;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_4 = 1;
				char_2 = char_1 + char_2;
				unsigned_int_4 = unsigned_int_4 + unsigned_int_5;
			}
			unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
		}
		if(1)
		{
			if(1)
			{
				double_1 = double_4 * double_2;
				short_1 = short_1 + short_1;
				double_4 = double_3;
			}
		}
	}
	if(1)
	{
	}
	return short_1;
}
int v_END5_1( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_1;
	double_3 = double_1 + double_1;
	int_3 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_5 = double_2 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		char char_4 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		char_3 = char_1 + char_2;
		if(1)
		{
			double double_7 = 1;
			double_6 = double_7;
			unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
			if(1)
			{
				double double_8 = 1;
				double_4 = double_8 + double_3;
				int_1 = int_1 * int_1;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			long long_1 = 1;
			double_6 = double_1;
			int_3 = int_4;
			if(1)
			{
				char_2 = char_4;
				unsigned_int_3 = unsigned_int_4;
			}
			long_1 = long_1 + long_1;
		}
		if(1)
		{
			if(1)
			{
				char char_5 = 1;
				char_4 = char_2 * char_2;
				char_1 = char_4 + char_5;
				int_4 = int_3 + int_1;
			}
		}
	}
	if(1)
	{
	}
	return int_3;
}
char v_calc_terminal_bp( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_8 = 1;
	double double_7 = 1;
	int int_9 = 1;
	short_1 = v_END5_2(int_1,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_3 * int_3;
	int_4 = int_5;
	double_1 = double_1 + double_2;
	v_END5_4(int_1,int_1);

	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double_5 = double_3 + double_4;
		long_2 = long_2 + long_2;
	}
	char_2 = char_1 + char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long long_3 = 1;
		short short_2 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_8 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		float_2 = float_1 * float_2;
		float_4 = float_1 * float_3;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		long_3 = long_2 * long_3;
		short_2 = short_2 + short_1;
		long_2 = long_1 + long_1;
		int_3 = int_2 * int_2;
		int_1 = int_6 * int_6;
		double_6 = v_END5_3(int_7,int_3);

		unsigned_int_3 = unsigned_int_3;
		long_1 = long_2 * long_1;
		char_3 = char_2 * char_1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			double_4 = double_4 + double_6;
			float_4 = float_3 + float_5;
		}
		if(1)
		{
			char char_4 = 1;
			double_2 = double_1;
			char_2 = char_4 + char_2;
		}
		int_4 = int_1 + int_8;
		short_1 = short_1 * short_1;
		if(1)
		{
			unsigned_int_3 = v_max5(double_7,double_1,double_6,double_6,double_4);

			int_6 = int_8 + int_1;
			int_6 = int_6 * int_8;
		}
		if(1)
		{
			short short_3 = 1;
			short_3 = short_2 + short_2;
			long_3 = long_1 + long_3;
		}
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		int_5 = int_8 + int_1;
		if(1)
		{
			int_7 = int_7 + int_3;
			int_8 = int_3 * int_4;
		}
		if(1)
		{
			double_8 = double_5 * double_1;
			long_1 = long_4;
		}
		unsigned_int_2 = unsigned_int_5 * unsigned_int_7;
		unsigned_int_8 = unsigned_int_4 * unsigned_int_3;
		if(1)
		{
			int_3 = int_3 * int_3;
			int_9 = v_END5_1(int_8,int_5);

			long_3 = long_2 + long_4;
		}
		if(1)
		{
			float_4 = float_5;
			double_7 = double_6 * double_2;
		}
		int_2 = int_9 + int_7;
		double_8 = double_8 + double_4;
		int_8 = int_6;
	}
	return char_3;
}
void v_comp4loop( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
}
float v_comp3loop( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return float_1;
}
double v_calc_hairpin( int parameter_1,int parameter_2,double parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_4 = 1;
	double double_7 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	double double_8 = 1;
	int int_5 = 1;
	float_3 = float_1 * float_2;
	float_2 = v_comp3loop(unsigned_int_1,long_1);

	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	float_3 = float_2 + float_2;
	double_3 = double_1 + double_2;
	double_4 = double_3 + double_3;
	v_comp4loop(char_1,int_1);

	long_1 = v_RSH(int_1,int_1,double_2);

	double_4 = double_3 * double_4;
	if(1)
	{
		int_1 = int_2 * int_1;
		double_4 = double_5 + double_6;
	}
	if(1)
	{
		float_4 = float_1;
		double_7 = double_6 + double_2;
	}
	if(1)
	{
		long_2 = long_1 * long_1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		double_5 = double_6 * double_6;
		int_3 = int_4;
	}
	if(1)
	{
		long long_3 = 1;
		char_2 = char_2;
		long_3 = long_3 * long_1;
	}
	if(1)
	{
		double_5 = double_6 + double_1;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		long long_4 = 1;
		char char_3 = 1;
		long_4 = long_4 + long_2;
		char_3 = char_2 * char_3;
	}
	if(1)
	{
		double_8 = double_8 * double_5;
		if(1)
		{
			if(1)
			{
				float float_5 = 1;
				float_3 = float_5 * float_2;
			}
			if(1)
			{
				int_1 = int_1 * int_3;
			}
		}
	}
	if(1)
	{
		short_1 = short_2 + short_1;
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			}
			if(1)
			{
				int_4 = int_3 + int_1;
			}
		}
	}
	if(1)
	{
		int_5 = int_2 * int_2;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		int_1 = int_2 * int_1;
		int_5 = int_2 + int_1;
	}
	float_4 = float_1 * float_2;
	int_4 = int_1 * int_1;
	double_6 = double_8 * double_3;
	if(1)
	{
		double_8 = double_7 + double_4;
		double_6 = double_7;
	}
	double_3 = double_4 + double_7;
	return double_3;
	float_3 = v_safe_malloc(int_4,long_2);

}
long v_RSH( int parameter_1,int parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_3 = 1;
	float float_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	short short_5 = 1;
	int int_6 = 1;
	short short_8 = 1;
	double double_6 = 1;
	int int_7 = 1;
	char char_6 = 1;
	char_3 = char_1 * char_2;
	char_4 = char_2 * char_1;
	double_2 = double_1 + double_2;
	char_3 = char_3 * char_1;
	short_1 = short_1 * short_1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float_2 = float_1 + float_1;
		int_2 = int_1 + int_1;
	}
	long_1 = long_1 + long_2;
	long_4 = long_3 + long_3;
	float_2 = float_1 * float_2;
	if(1)
	{
		int_1 = int_1;
		long_3 = long_2 + long_4;
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		float float_4 = 1;
		float_5 = float_3 * float_4;
		double_4 = double_1 + double_3;
		char_3 = char_5 * char_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
			char_1 = char_2;
			long_4 = long_4;
		}
		char_1 = char_5 * char_5;
		if(1)
		{
			int_2 = int_2 * int_1;
			if(1)
			{
				int_2 = int_2 * int_3;
				unsigned_int_1 = unsigned_int_1;
				long_4 = long_3 + long_2;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			char_2 = char_4 + char_4;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
			short_2 = short_2 + short_1;
		}
	}
	if(1)
	{
		float_2 = float_3 + float_5;
		int_4 = int_2 + int_4;
		float_1 = float_1 + float_3;
		if(1)
		{
			short_4 = short_1 * short_3;
			short_1 = short_2;
			double_1 = double_1 + double_2;
		}
		char_4 = char_1 * char_4;
		if(1)
		{
			double_1 = double_5 * double_2;
			if(1)
			{
				short_1 = short_5 + short_4;
				int_1 = int_2 + int_4;
				char_1 = char_4 * char_5;
			}
		}
		if(1)
		{
			double_2 = double_4 * double_3;
			double_5 = double_2;
			double_4 = double_5 * double_3;
		}
	}
	if(1)
	{
		int int_5 = 1;
		short short_6 = 1;
		short short_7 = 1;
		short_4 = short_4 * short_5;
		int_5 = int_1 * int_2;
		short_6 = short_4;
		if(1)
		{
			int_4 = int_4 * int_4;
			short_3 = short_6;
			long_3 = long_1 * long_3;
		}
		double_5 = double_3;
		if(1)
		{
			double_1 = double_4 + double_5;
			if(1)
			{
				short_6 = short_7;
				double_4 = double_5;
				int_2 = int_2 + int_6;
			}
		}
		if(1)
		{
			short_7 = short_6 + short_3;
			short_3 = short_7 + short_8;
			short_7 = short_2 * short_2;
		}
	}
	int_3 = int_6 + int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	long_3 = long_3 * long_1;
	double_5 = double_5 + double_6;
	int_7 = int_3 * int_1;
	if(1)
	{
		if(1)
		{
			double double_7 = 1;
			char_6 = char_3 + char_4;
			double_3 = double_5 * double_7;
		}
		if(1)
		{
			double_2 = double_3 + double_1;
			long_3 = long_4 + long_4;
		}
	}
	if(1)
	{
		short_3 = short_4 + short_8;
		char_6 = char_3 * char_2;
	}
	return long_2;
}
int v_calc_bulge_internal( int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,int parameter_7,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_6 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_5 = 1;
	float float_4 = 1;
	double double_6 = 1;
	char * vul_var;
	double_3 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_3 + double_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	float_2 = float_1 * float_2;
	int_2 = int_1 + int_2;
	double_1 = double_1;
	float_1 = float_2;
	short_1 = short_2;
	int_2 = int_3 + int_3;
	double_4 = double_4;
	if(1)
	{
		short_4 = short_1 + short_3;
		float_3 = float_2 + float_2;
		if(1)
		{
			int_3 = int_2 + int_3;
		}
		if(1)
		{
			long_2 = long_1 * long_2;
		}
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		double_4 = double_1 + double_2;
		if(1)
		{
			int_4 = int_4 * int_5;
		}
		if(1)
		{
			long_2 = long_2;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	if(1)
	{
		double_4 = double_3 + double_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	}
	if(1)
	{
		char_2 = char_1 * char_1;
		long_1 = long_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4;
	}
	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	char controller4vul_706[2];
	fgets(controller4vul_706 ,2 ,stdin);
	if( strcmp( controller4vul_706, "l") < 0)
	{
		int int_7 = 1;
		short short_5 = 1;
		char controller4vul_707[3];
		fgets(controller4vul_707 ,3 ,stdin);
		if( strcmp( controller4vul_707, "BS") > 0)
		{
			char controller4vul_708[2];
			fgets(controller4vul_708 ,2 ,stdin);
			if( strcmp( controller4vul_708, "X") > 0)
			{
				vul_var=(char*)malloc(20*sizeof(char));
				strcpy(vul_var, "CWE-761");
				if(uni_para == 387)
				{
					vul_var = vul_var + 1;
				}
				free(vul_var);
				int_7 = int_3 + int_6;
				double_1 = double_4;
			}
			if(1)
			{
				int_2 = int_5;
				int_5 = int_3 * int_8;
			}
			unsigned_int_1 = unsigned_int_6 + unsigned_int_1;
			char_3 = char_3 * char_2;
			if(1)
			{
				unsigned_int_7 = unsigned_int_2 + unsigned_int_1;
				unsigned_int_3 = unsigned_int_4 + unsigned_int_8;
			}
			unsigned_int_8 = unsigned_int_9 + unsigned_int_3;
			short_1 = short_5 * short_5;
			long_2 = long_1 * long_1;
			if(1)
			{
				char_3 = char_3 * char_3;
				double_3 = double_4 * double_1;
			}
		}
		char controller_4[2];
		fgets(controller_4 ,2 ,stdin);
		if( strcmp( controller_4, "P") > 0)
		{
			long_1 = long_1 * long_3;
			float_1 = float_1;
			int_1 = int_4 * int_3;
			short_5 = short_2;
			if(1)
			{
				int_4 = int_1 + int_6;
				int_5 = int_8 * int_8;
			}
			if(1)
			{
				double_4 = double_1 + double_4;
				unsigned_int_2 = unsigned_int_10;
			}
			int_8 = int_5 + int_5;
			int_1 = int_1 + int_5;
			int_7 = int_8 + int_2;
			if(1)
			{
				double_4 = double_2 + double_4;
				char_2 = char_3 * char_2;
			}
		}
	}
	if(1)
	{
		short short_6 = 1;
		short_1 = short_6 * short_1;
		double_4 = double_1;
		double_1 = double_4 + double_1;
		short_2 = short_4 + short_3;
		if(1)
		{
			double_4 = double_3;
			float_3 = float_1 * float_3;
		}
		if(1)
		{
			unsigned int unsigned_int_11 = 1;
			unsigned_int_5 = unsigned_int_8;
			unsigned_int_11 = unsigned_int_7 * unsigned_int_6;
		}
		char_2 = char_1 * char_1;
		double_2 = double_4 + double_5;
		int_2 = int_8;
		if(1)
		{
			unsigned int unsigned_int_12 = 1;
			unsigned_int_12 = unsigned_int_10;
			float_4 = float_1 + float_1;
		}
		unsigned_int_8 = unsigned_int_7 + unsigned_int_3;
	}
	if(1)
	{
		int int_9 = 1;
		float float_5 = 1;
		short short_8 = 1;
		unsigned_int_8 = unsigned_int_5 * unsigned_int_9;
		double_1 = double_4 + double_1;
		double_5 = double_5 * double_2;
		int_6 = int_9;
		if(1)
		{
			long long_4 = 1;
			long long_5 = 1;
			long_5 = long_4 * long_3;
			double_1 = double_2 * double_4;
		}
		if(1)
		{
			char char_4 = 1;
			short short_7 = 1;
			char_4 = char_3 + char_1;
			short_3 = short_7;
		}
		int_9 = int_5 + int_8;
		float_1 = float_4 * float_5;
		short_3 = short_8 * short_8;
		if(1)
		{
			double_1 = double_2 * double_2;
			int_8 = int_8 + int_5;
		}
	}
	double_6 = double_4 + double_4;
	double_4 = double_5 + double_2;
}
void v_equal( double parameter_1,double parameter_2)
{
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "H") < 0)
	{
	}
}
float v_LSH( int parameter_1,int parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_3 = 1;
	double double_7 = 1;
	int int_6 = 1;
	double double_8 = 1;
	long long_2 = 1;
	double double_9 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_10 = 1;
	float_2 = float_1 * float_1;
	short_1 = short_1 + short_2;
	int_1 = int_1 + int_1;
	double_2 = double_1 + double_2;
	double_2 = double_3 + double_3;
	if(1)
	{
		double_4 = double_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int_2 = int_2;
	double_4 = double_1 * double_3;
	int_2 = int_3 * int_4;
	if(1)
	{
		int_2 = int_4 + int_3;
		int_4 = int_2 + int_1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		int_3 = int_3 * int_4;
		float_3 = float_3 + float_2;
		char_1 = char_1 + char_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_1 = unsigned_int_1;
			float_5 = float_4 + float_4;
		}
		int_3 = int_5 + int_5;
		if(1)
		{
			int_1 = int_4 * int_3;
			if(1)
			{
				char char_2 = 1;
				char_2 = char_1 * char_1;
				double_2 = double_4 + double_4;
				double_2 = double_1 + double_4;
			}
		}
		if(1)
		{
			long long_1 = 1;
			int_2 = int_2 + int_4;
			long_1 = long_1 * long_1;
			double_5 = double_5 * double_6;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		short short_4 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		short_2 = short_2 * short_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
		if(1)
		{
			unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
			short_2 = short_3 + short_3;
			float_4 = float_5 * float_5;
		}
		short_3 = short_1 + short_4;
		if(1)
		{
			double_7 = double_7 + double_6;
			if(1)
			{
				int_5 = int_1 + int_1;
				short_2 = short_3 + short_4;
				unsigned_int_1 = unsigned_int_6 + unsigned_int_5;
			}
		}
		if(1)
		{
			int_6 = int_2 * int_1;
			float_2 = float_2 + float_4;
			double_8 = double_3 + double_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
		float_3 = float_1 + float_3;
		unsigned_int_7 = unsigned_int_6 + unsigned_int_4;
		if(1)
		{
			int_2 = int_1 + int_3;
			double_2 = double_7;
			double_6 = double_8 * double_2;
		}
		double_6 = double_8 * double_5;
		if(1)
		{
			unsigned_int_4 = unsigned_int_7 * unsigned_int_7;
			if(1)
			{
				long long_3 = 1;
				unsigned_int_2 = unsigned_int_6 + unsigned_int_1;
				long_3 = long_2 * long_3;
				double_8 = double_6 * double_9;
			}
		}
		if(1)
		{
			double_8 = double_5 * double_6;
			int_5 = int_7 + int_2;
			float_5 = float_2 + float_1;
		}
	}
	int_7 = int_6;
	double_5 = double_3 * double_5;
	short_3 = short_1;
	unsigned_int_1 = unsigned_int_8;
	double_10 = double_9 + double_4;
	if(1)
	{
		if(1)
		{
			double_4 = double_1 * double_7;
			unsigned_int_1 = unsigned_int_8 * unsigned_int_5;
		}
		if(1)
		{
			int int_8 = 1;
			double_10 = double_3 * double_7;
			int_1 = int_8 * int_8;
		}
	}
	if(1)
	{
		long_2 = long_2 + long_2;
		int_5 = int_7 * int_5;
	}
	return float_5;
}
long v_traceback( int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int_1 = v_calc_bulge_internal(int_2,int_2,int_1,int_2,double_1,int_2,int_2,uni_para);

	double_1 = double_2 + double_2;
	short_1 = short_1 * short_2;
	return long_1;
}
char v_calc_bulge_internal2( int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,int parameter_6,int parameter_7,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	short short_4 = 1;
	char char_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	char char_5 = 1;
	double double_5 = 1;
	int int_9 = 1;
	double double_6 = 1;
	int int_10 = 1;
	long_1 = long_1 + long_1;
	short_1 = short_1;
	float_1 = float_2;
	double_2 = double_1 * double_2;
	double_2 = double_3 * double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_3 = double_2 + double_4;
	if(1)
	{
		long_2 = long_1 + long_1;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		short_3 = short_2 * short_2;
	}
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		double_4 = double_4;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		char_2 = char_2 * char_3;
	}
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		char_1 = char_1 * char_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		int_4 = int_1 * int_2;
	}
	double_4 = double_3 + double_2;
	char controller4vul_703[3];
	fgets(controller4vul_703 ,3 ,stdin);
	if( strcmp( controller4vul_703, "k8") > 0)
	{
		char controller4vul_704[2];
		fgets(controller4vul_704 ,2 ,stdin);
		if( strcmp( controller4vul_704, " ") > 0)
		{
			int int_6 = 1;
			char controller4vul_705[3];
			fgets(controller4vul_705 ,3 ,stdin);
			if( strcmp( controller4vul_705, "re") < 0)
			{
				float float_3 = 1;
				float float_4 = 1;
				long_3 = v_traceback(int_3,int_2,double_4,int_2,int_2,int_4,int_5,uni_para);

				short_1 = short_2 * short_4;
				float_4 = float_3 * float_2;
			}
			if(1)
			{
				short_1 = short_3 * short_1;
				int_3 = int_3 * int_2;
			}
			if(1)
			{
				double_3 = double_2 + double_3;
				char_4 = char_1;
			}
			int_1 = int_6 * int_7;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
			if(1)
			{
				int_7 = int_7 + int_3;
				unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
			}
		}
		if(1)
		{
			short short_5 = 1;
			short_2 = short_5;
			if(1)
			{
				long_3 = long_4 + long_1;
			}
			double_3 = double_4 * double_4;
			if(1)
			{
				long_1 = long_1 * long_2;
			}
			if(1)
			{
				char_2 = char_5 + char_5;
				char_1 = char_2 + char_1;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
			int_7 = int_3 * int_5;
			if(1)
			{
				unsigned_int_6 = unsigned_int_5;
				double_5 = double_1 + double_4;
			}
		}
	}
	if(1)
	{
		int int_8 = 1;
		double double_7 = 1;
		short_1 = short_2;
		if(1)
		{
			long_1 = long_1 * long_4;
		}
		short_4 = short_2 + short_3;
		if(1)
		{
			int_9 = int_8 + int_2;
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			unsigned_int_5 = unsigned_int_6 * unsigned_int_7;
			unsigned_int_8 = unsigned_int_5 * unsigned_int_7;
		}
		double_5 = double_2;
		double_7 = double_6 + double_4;
		if(1)
		{
			if(1)
			{
				int_7 = int_8 * int_10;
				int_2 = int_9 + int_5;
			}
		}
	}
	if(1)
	{
		char char_6 = 1;
		double double_8 = 1;
		char_3 = char_4 + char_5;
		if(1)
		{
			int_9 = int_10;
		}
		char_3 = char_1 * char_6;
		if(1)
		{
			double_6 = double_5 * double_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
			float_2 = float_2 + float_1;
		}
		double_8 = double_5 * double_6;
		double_6 = double_6;
		if(1)
		{
			int_2 = int_5 + int_7;
			double_1 = double_1 * double_4;
		}
	}
	return char_4;
}
float v_CBI( int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int uni_para)
{
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_6 = 1;
	int_1 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_3 = 1;
			float float_1 = 1;
			double_1 = double_2;
			if(1)
			{
				float float_2 = 1;
				double_3 = double_1 + double_1;
				float_1 = float_2;
			}
			char controller4vul_700[2];
			fgets(controller4vul_700 ,2 ,stdin);
			if( strcmp( controller4vul_700, "n") < 0)
			{
				short short_1 = 1;
				short short_2 = 1;
				short_2 = short_1 + short_1;
				char controller4vul_701[3];
				fgets(controller4vul_701 ,3 ,stdin);
				if( strcmp( controller4vul_701, ";:") < 0)
				{
					char controller4vul_702[3];
					fgets(controller4vul_702 ,3 ,stdin);
					if( strcmp( controller4vul_702, "]e") < 0)
					{
						float float_3 = 1;
						float float_4 = 1;
						char_1 = v_calc_bulge_internal2(int_1,int_2,int_3,int_4,double_2,int_3,int_3,uni_para);

						float_1 = float_1 + float_3;
						float_4 = float_3 + float_4;
					}
					if(1)
					{
						double double_4 = 1;
						float float_5 = 1;
						double_4 = double_3 + double_4;
						float_5 = float_6;
					}
				}
			}
		}
	}
	return float_6;
}
float v_Hs( int parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	if(1)
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
			short_1 = short_1 * short_2;
		}
		if(1)
		{
			short short_3 = 1;
			short_2 = short_3 * short_1;
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
	}
	return float_1;
}
double v_Ss( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
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
			char char_1 = 1;
			char_1 = char_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_1 = unsigned_int_1;
		}
	}
	if(1)
	{
	}
	return double_1;
}
float v_maxTM2( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float_1 = v_Hs(int_1,int_2,int_3);

	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 * char_1;
	double_1 = double_1;
	char_1 = char_3 + char_3;
	int_4 = int_4 + int_1;
	int_1 = int_4 + int_2;
	if(1)
	{
		double_1 = v_Ss(int_4,int_4,int_5);

		int_4 = int_2 + int_3;
		double_3 = double_2 * double_2;
	}
	if(1)
	{
		double_1 = double_1 * double_4;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
	if(1)
	{
		double_2 = double_1 + double_3;
		char_3 = char_1 * char_3;
	}
	if(1)
	{
		char char_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		char_3 = char_4 * char_2;
		float_5 = float_3 + float_4;
	}
	if(1)
	{
		char char_5 = 1;
		char_5 = char_2 * char_3;
		double_2 = double_4;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_7 = 1;
		short_2 = short_1 * short_1;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_7;
	}
	return float_2;
}
long v_fillMatrix2( int parameter_1,unsigned int parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_5 = 1;
	long_2 = long_1 * long_2;
	double_1 = double_2;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char controller4vul_697[3];
			fgets(controller4vul_697 ,3 ,stdin);
			if( strcmp( controller4vul_697, "7o") > 0)
			{
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_4 = 1;
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				char_3 = char_1 + char_2;
				double_1 = double_1;
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
				char_4 = char_2 * char_2;
				short_3 = short_1 + short_2;
				short_4 = short_4 + short_2;
				char_4 = char_3 * char_3;
				char controller4vul_698[3];
				fgets(controller4vul_698 ,3 ,stdin);
				if( strcmp( controller4vul_698, "6_") < 0)
				{
					long long_3 = 1;
					long long_4 = 1;
					char controller4vul_699[2];
					fgets(controller4vul_699 ,2 ,stdin);
					if( strcmp( controller4vul_699, "+") > 0)
					{
						float_1 = v_CBI(int_1,int_2,double_3,int_3,int_4,uni_para);

						long_2 = long_3;
						int_2 = int_3;
					}
					long_3 = long_4 * long_2;
					double_1 = double_3 * double_2;
				}
			}
		}
	}
	short_4 = short_5 + short_5;
	return long_2;
}
long v_initMatrix2()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
				long_1 = long_1;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double_1 = double_2;
				double_3 = double_1 * double_1;
			}
		}
	}
	return long_1;
}
int v_safe_recalloc( double parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	return int_1;
	short_1 = v_safe_realloc(long_1,short_1);

}
long v_saltCorrectS( double parameter_1,double parameter_2,double parameter_3)
{
	long long_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	return long_1;
}
int v_reverse( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float_3 = float_1 * float_2;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_1 = unsigned_int_2;
		float_3 = v_length_unsig_char(long_1);

		char_2 = char_1 * char_2;
	}
	return int_1;
}
long v_symmetry_thermo( short parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	float_1 = float_1 * float_1;
	return long_1;
	float_2 = v_length_unsig_char(long_2);

}
float v_length_unsig_char( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	int_1 = int_1 + int_2;
	short_1 = short_2;
	int_1 = int_3 * int_1;
	int_1 = int_3 * int_4;
	if(1)
	{
	}
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	return float_1;
}
void v_thal( float parameter_1,long parameter_2,char parameter_3,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_3 = 1;
	double double_8 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_5 = 1;
	int int_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_6 = 1;
	double double_9 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_9 = 1;
	int int_10 = 1;
	float float_6 = 1;
	float float_7 = 1;
	long long_5 = 1;
	int int_11 = 1;
	unsigned int unsigned_int_11 = 1;
	float float_8 = 1;
	long long_7 = 1;
	int int_14 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_3 = int_2 * int_2;
	double_3 = double_1 + double_2;
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	char_2 = char_1 + char_1;
	short_1 = short_2;
	double_2 = double_2 * double_4;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	long_3 = long_2 * long_2;
	int_2 = int_1 + int_2;
	double_4 = double_5 + double_6;
	int_4 = int_3 * int_3;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
	if(1)
	{
		int_5 = int_2 + int_2;
	}
	double_4 = double_6 + double_6;
	long_3 = long_2 * long_1;
	unsigned_int_1 = unsigned_int_3;
	double_5 = double_5 + double_3;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
	short_4 = short_3 * short_3;
	double_6 = double_7 * double_4;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
	long_3 = long_1;
	double_6 = double_5 * double_5;
	if(1)
	{
		double_2 = double_1 * double_2;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_6;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1;
		short_4 = short_3 + short_1;
	}
	if(1)
	{
		char_1 = char_2;
	}
	if(1)
	{
		short_1 = short_2 * short_1;
	}
	if(1)
	{
		char_3 = char_3 + char_2;
		double_3 = double_7 * double_8;
		short_1 = short_1 + short_2;
		short_1 = short_4 * short_3;
	}
	if(1)
	{
		int_4 = int_5 * int_1;
		unsigned_int_1 = unsigned_int_4;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_6;
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		int_5 = int_3 * int_1;
		float_1 = float_3 + float_4;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_3;
		int_3 = int_4;
		short_3 = short_4 * short_5;
	}
	if(1)
	{
		int_6 = int_5 + int_6;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			float float_5 = 1;
			float_2 = float_4 + float_5;
		}
		if(1)
		{
			unsigned_int_6 = unsigned_int_3 + unsigned_int_6;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
			unsigned_int_3 = unsigned_int_6 * unsigned_int_1;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_6 + unsigned_int_1;
			char_2 = char_2 + char_4;
		}
		int_3 = int_6 + int_3;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
		unsigned_int_3 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_7 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
		int_8 = int_7 * int_5;
		unsigned_int_7 = unsigned_int_8 * unsigned_int_9;
		short_6 = short_5;
	}
	long_2 = long_3 * long_1;
	double_3 = double_2 + double_3;
	double_2 = double_3 + double_2;
	double_7 = double_6 + double_7;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_8;
	if(1)
	{
		double_2 = double_5 * double_5;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_7;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_4 = int_7;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_7 = double_9;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_3 = long_2 * long_4;
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned_int_5 = unsigned_int_10 + unsigned_int_8;
	}
	int_3 = int_9 + int_6;
	if(1)
	{
		double double_10 = 1;
		double double_11 = 1;
		unsigned_int_8 = unsigned_int_1 * unsigned_int_6;
		int_1 = int_8 + int_9;
		int_10 = int_6 * int_10;
		double_10 = double_4 + double_6;
		double_7 = double_7;
		int_3 = int_10 + int_7;
		unsigned_int_6 = unsigned_int_10 + unsigned_int_8;
		float_3 = float_6 + float_7;
		short_6 = short_5;
		float_1 = float_2 * float_6;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double_8 = double_1;
		}
		if(1)
		{
			double_6 = double_2 + double_7;
			if(1)
			{
				long_4 = long_3;
			}
			if(1)
			{
				long_3 = long_5 + long_4;
			}
		}
		if(1)
		{
			double_3 = double_1 + double_8;
		}
		if(1)
		{
			double_2 = double_4 * double_2;
		}
		int_1 = int_11;
		unsigned_int_2 = unsigned_int_11 * unsigned_int_6;
		double_5 = double_4;
		int_7 = int_2;
		double_11 = double_7 * double_8;
		float_7 = float_3 * float_8;
		int_7 = int_6 + int_5;
		char_3 = char_4;
		short_5 = short_1;
	}
	char controller4vul_694[2];
	fgets(controller4vul_694 ,2 ,stdin);
	if( strcmp( controller4vul_694, "<") > 0)
	{
		int int_12 = 1;
		float float_9 = 1;
		char char_5 = 1;
		char char_6 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_12 = 1;
		char char_7 = 1;
		int int_13 = 1;
		int int_15 = 1;
		long long_8 = 1;
		int int_16 = 1;
		unsigned int unsigned_int_13 = 1;
		unsigned int unsigned_int_14 = 1;
		char char_8 = 1;
		char char_9 = 1;
		int int_19 = 1;
		long long_9 = 1;
		int_12 = int_6 + int_12;
		float_9 = float_9 * float_4;
		int_10 = int_10 * int_12;
		int_7 = int_5;
		char_6 = char_5 * char_3;
		long_3 = long_6 * long_6;
		unsigned_int_10 = unsigned_int_1 + unsigned_int_8;
		unsigned_int_2 = unsigned_int_9 * unsigned_int_7;
		unsigned_int_12 = unsigned_int_12 + unsigned_int_11;
		long_7 = long_1 + long_2;
		char controller4vul_695[3];
		fgets(controller4vul_695 ,3 ,stdin);
		if( strcmp( controller4vul_695, "#I") < 0)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					char_4 = char_5 * char_3;
					char_1 = char_4 * char_7;
					int_4 = int_6;
					int_15 = int_13 + int_14;
					char controller4vul_696[2];
					fgets(controller4vul_696 ,2 ,stdin);
					if( strcmp( controller4vul_696, "^") > 0)
					{
						long_7 = v_fillMatrix2(int_14,unsigned_int_2,uni_para);

						double_7 = double_4 * double_2;
						unsigned_int_11 = unsigned_int_1 + unsigned_int_11;
						double_9 = double_9 + double_4;
					}
				}
			}
		}
		short_5 = short_1 * short_6;
		float_3 = float_9 * float_8;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			unsigned_int_8 = unsigned_int_7 * unsigned_int_11;
		}
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			long_7 = long_8 + long_1;
		}
		if(1)
		{
			int_4 = int_1;
			int_10 = int_16 * int_11;
			int_6 = int_16 * int_11;
			short_2 = short_3 * short_5;
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				char_4 = char_1 + char_4;
				short_3 = short_5 + short_1;
				int_9 = int_1 * int_5;
				unsigned_int_13 = unsigned_int_10 + unsigned_int_3;
				if(1)
				{
					double double_12 = 1;
					double_3 = double_12 * double_6;
					int_1 = int_12 * int_13;
				}
			}
		}
		if(1)
		{
			int_3 = int_4 + int_6;
		}
		unsigned_int_14 = unsigned_int_13 + unsigned_int_14;
		float_7 = float_8 * float_3;
		double_2 = double_5 * double_5;
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			char_8 = char_7 + char_7;
		}
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			unsigned_int_2 = unsigned_int_4;
		}
		if(1)
		{
			long_5 = long_3 * long_7;
			if(1)
			{
				float_4 = float_2 * float_6;
			}
			if(1)
			{
				char_4 = char_6 + char_4;
			}
			char_8 = char_5;
			unsigned_int_12 = unsigned_int_1 + unsigned_int_9;
		}
		if(1)
		{
			int int_17 = 1;
			int int_18 = 1;
			int_17 = int_15 + int_9;
			int_7 = int_18 + int_11;
		}
		int_3 = int_16 + int_2;
		int_3 = int_1 + int_10;
		char_9 = char_3;
		unsigned_int_7 = unsigned_int_9;
		int_19 = int_2 + int_14;
		int_12 = int_7;
		long_7 = long_6;
		long_9 = long_2 + long_8;
		long_3 = long_1 * long_4;
	}
}
char v_align_thermod( short parameter_1,char parameter_2,short parameter_3,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char_1 = char_1 * char_1;
	double_1 = double_1;
	int_2 = int_1 * int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_2 = short_1 + short_2;
		long_2 = long_1 + long_2;
	}
	int_1 = int_3 + int_2;
	char controller4vul_691[2];
	fgets(controller4vul_691 ,2 ,stdin);
	if( strcmp( controller4vul_691, ",") < 0)
	{
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		char controller4vul_692[2];
		fgets(controller4vul_692 ,2 ,stdin);
		if( strcmp( controller4vul_692, "U") > 0)
		{
			char controller4vul_693[3];
			fgets(controller4vul_693 ,3 ,stdin);
			if( strcmp( controller4vul_693, "?6") > 0)
			{
				double double_2 = 1;
				v_thal(float_1,long_3,char_1,uni_para);

				double_1 = double_2 * double_1;
			}
			int_1 = int_3 + int_2;
		}
	}
	int_2 = int_4 + int_4;
	return char_2;
}
void v_oligo_compl_thermod( int parameter_1,short parameter_2,char parameter_3,float parameter_4,float parameter_5,float parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_2 + double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float_1 = float_2;
		char_1 = v_align_thermod(short_1,char_2,short_1,-1 );

		short_2 = v_op_set_high_self_any(long_1);

		long_2 = long_2 * long_2;
		int_1 = int_1 * int_2;
		if(1)
		{
		}
	}
	double_1 = double_2;
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_3 = v_op_set_high_self_end(float_4);

		short_4 = short_3 + short_3;
		double_1 = double_3 + double_4;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
	}
}
int v_p3_ol_is_ok( short parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_p3_ol_is_uninitialized( float parameter_1)
{
	int int_1 = 1;
	return int_1;
}
float v_op_set_high_self_end( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long_3 = long_1 * long_2;
	short_1 = short_1;
	return float_1;
}
short v_op_set_high_self_any( long parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float_2 = float_1 * float_1;
	double_1 = double_1 * double_1;
	return short_1;
}
char v__dpal_long_nopath_maxgap1_local_end( char parameter_1,short parameter_2,char parameter_3,long parameter_4,short parameter_5,int parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_5 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_9 = 1;
	float_1 = float_1 + float_2;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_3 = float_3;
	unsigned_int_2 = unsigned_int_2;
	int_2 = int_1 + int_1;
	short_2 = short_1 + short_2;
	short_2 = short_1 * short_2;
	double_2 = double_1 * double_2;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		long_3 = long_2 * long_2;
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		int_3 = int_1 + int_3;
	}
	float_5 = float_4 * float_2;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	double_1 = double_1;
	float_4 = float_4 * float_4;
	float_1 = float_1 + float_5;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_3 + int_1;
		if(1)
		{
			long_2 = long_2 + long_2;
		}
		int_1 = int_3 + int_4;
	}
	char_3 = char_2 * char_3;
	if(1)
	{
		int_4 = int_3 * int_1;
	}
	int_1 = int_2 * int_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_1 = double_1 + double_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		}
		double_2 = double_1 * double_2;
		if(1)
		{
			int_1 = int_3;
		}
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
		}
		long_2 = long_3 + long_4;
		int_3 = int_5 + int_1;
		if(1)
		{
			char char_4 = 1;
			char_2 = char_2 * char_4;
		}
		long_3 = long_3 * long_1;
		if(1)
		{
			float_6 = float_5;
		}
		float_2 = float_6;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			float_7 = float_3 + float_5;
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
			}
			unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
			if(1)
			{
				short_2 = short_2;
			}
			int_2 = int_5;
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
			}
			double_2 = double_3 + double_4;
		}
		int_5 = int_2;
		int_3 = int_4 * int_4;
		unsigned_int_1 = unsigned_int_7;
		long_4 = long_2 + long_1;
	}
	int_4 = int_4 + int_5;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_6;
	if(1)
	{
		double_5 = double_4 * double_2;
	}
	if(1)
	{
		int_2 = int_5 + int_4;
	}
	float_5 = float_5 + float_5;
	double_4 = double_5 * double_4;
	if(1)
	{
		int_3 = int_5 * int_4;
	}
	double_3 = v_fail_action(double_6,int_5);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_8;
	if(1)
	{
		long long_6 = 1;
		long_6 = long_5 + long_4;
	}
	if(1)
	{
		int_1 = int_4 * int_3;
	}
	unsigned_int_7 = unsigned_int_1 + unsigned_int_4;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		char_2 = char_5 * char_1;
		if(1)
		{
			float_1 = float_7;
		}
		double_5 = double_2 * double_6;
		if(1)
		{
			unsigned_int_8 = unsigned_int_2;
		}
		char_3 = char_5 * char_1;
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			double_5 = double_1;
		}
		double_3 = double_6 * double_5;
	}
	long_5 = long_1 + long_4;
	float_1 = float_6 + float_7;
	unsigned_int_7 = unsigned_int_3 * unsigned_int_7;
	unsigned_int_8 = unsigned_int_9 * unsigned_int_9;
	float_1 = float_5 * float_5;
	float_7 = float_6 + float_2;
	return char_5;
}
double v__dpal_long_nopath_maxgap1_global_end( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,float parameter_4,char parameter_5,short parameter_6)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	int int_6 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_7 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_4 = 1;
	int int_9 = 1;
	float float_4 = 1;
	char char_7 = 1;
	float float_5 = 1;
	short short_5 = 1;
	double_1 = v_fail_action(double_1,int_1);

	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 * short_1;
	int_3 = int_1 + int_4;
	char_2 = char_1 + char_2;
	double_3 = double_2 * double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_3 + short_3;
	double_2 = double_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	int_5 = int_3;
	if(1)
	{
		long_1 = long_1;
	}
	int_6 = int_4 + int_4;
	if(1)
	{
		char_1 = char_3 + char_1;
	}
	float_2 = float_1 * float_2;
	char_3 = char_1;
	int_2 = int_1 + int_6;
	double_4 = double_2 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_2 * long_1;
	}
	double_3 = double_2 + double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_7 = int_7;
		if(1)
		{
			float_1 = float_1 + float_2;
		}
		long_2 = long_2 * long_1;
		if(1)
		{
			double_3 = double_2;
		}
		double_4 = double_5 + double_3;
	}
	double_1 = double_6;
	if(1)
	{
		long long_3 = 1;
		long_1 = long_2 * long_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float_2 = float_2 * float_1;
		double_2 = double_4 + double_4;
		if(1)
		{
			char_4 = char_4;
		}
		int_5 = int_2 * int_3;
		double_3 = double_1 * double_6;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char char_5 = 1;
			int_3 = int_7 + int_5;
			if(1)
			{
				unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
			if(1)
			{
				unsigned_int_4 = unsigned_int_4;
			}
			long_2 = long_1 * long_1;
			char_5 = char_2 * char_4;
		}
		float_2 = float_2 + float_2;
		if(1)
		{
			int_6 = int_7 * int_2;
		}
		double_2 = double_2 * double_6;
		if(1)
		{
			unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
		}
		unsigned_int_7 = unsigned_int_6 + unsigned_int_5;
		unsigned_int_1 = unsigned_int_6 + unsigned_int_4;
		if(1)
		{
			double_1 = double_5;
		}
		unsigned_int_5 = unsigned_int_3;
		double_7 = double_7 * double_5;
		unsigned_int_4 = unsigned_int_7 + unsigned_int_5;
		int_8 = int_5 + int_7;
	}
	unsigned_int_9 = unsigned_int_8 + unsigned_int_1;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		float float_3 = 1;
		int int_10 = 1;
		int int_11 = 1;
		int int_12 = 1;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			long long_4 = 1;
			unsigned_int_9 = unsigned_int_7 + unsigned_int_2;
			if(1)
			{
				char char_6 = 1;
				char_1 = char_1 + char_6;
			}
			long_1 = long_1 * long_4;
			if(1)
			{
				short_3 = short_2 * short_4;
			}
			float_1 = float_3 * float_1;
			short_4 = short_3 + short_3;
		}
		double_4 = double_7;
		double_2 = double_4 + double_7;
		if(1)
		{
			int_9 = int_1 + int_9;
		}
		unsigned_int_2 = unsigned_int_6 + unsigned_int_8;
		if(1)
		{
			int_8 = int_9 + int_9;
		}
		char_1 = char_2 * char_1;
		int_6 = int_10;
		if(1)
		{
			float_4 = float_4;
		}
		int_8 = int_9 * int_8;
		int_11 = int_12;
		float_3 = float_2;
		char_2 = char_7;
	}
	float_4 = float_5 * float_2;
	char_4 = char_7 * char_1;
	short_2 = short_4 + short_5;
	int_6 = int_1 + int_9;
	short_2 = short_2;
	double_6 = double_4 + double_7;
	return double_5;
}
double v__dpal_long_nopath_maxgap1_local( int parameter_1,char parameter_2,long parameter_3,char parameter_4,float parameter_5,long parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_9 = 1;
	double_2 = double_1 * double_1;
	double_1 = double_2 + double_2;
	char_1 = char_1 + char_2;
	double_2 = double_1 * double_2;
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	long_1 = long_2 + long_2;
	char_2 = char_1;
	short_1 = short_1 + short_2;
	if(1)
	{
		char_4 = char_3 * char_3;
	}
	char_4 = char_2 * char_1;
	if(1)
	{
		int_2 = int_3 + int_4;
	}
	int_3 = int_2 * int_1;
	if(1)
	{
		double_1 = double_2 + double_3;
	}
	double_4 = double_2 * double_3;
	int_3 = int_2 + int_5;
	double_2 = double_1 + double_2;
	short_1 = short_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_4 * double_2;
		if(1)
		{
			short short_4 = 1;
			short_4 = short_1 + short_4;
		}
		if(1)
		{
			int_6 = int_6 * int_4;
		}
		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	}
	short_5 = short_2 * short_5;
	if(1)
	{
		double_2 = v_fail_action(double_3,int_6);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_6;
	}
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	int_2 = int_6 * int_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_3 = short_6 * short_2;
		if(1)
		{
			double_3 = double_1 + double_1;
		}
		unsigned_int_6 = unsigned_int_6 * unsigned_int_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
		}
		char controller_10[2];
		fgets(controller_10 ,2 ,stdin);
		if( strcmp( controller_10, "P") < 0)
		{
			int_6 = int_2 * int_5;
		}
		double_2 = double_2 + double_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_8 = 1;
		float float_4 = 1;
		float float_6 = 1;
		long_2 = long_2 + long_2;
		if(1)
		{
			long long_3 = 1;
			long long_4 = 1;
			long_3 = long_4;
		}
		if(1)
		{
			int_7 = int_7 * int_8;
		}
		char_3 = char_4 + char_3;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
		if(1)
		{
			unsigned_int_8 = unsigned_int_7 + unsigned_int_1;
		}
		int_1 = int_8 * int_2;
		if(1)
		{
			double_5 = double_3 + double_4;
		}
		if(1)
		{
			float_4 = float_3 * float_1;
		}
		short_3 = short_6;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int int_9 = 1;
			int_7 = int_7 + int_1;
			if(1)
			{
				unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
			}
			unsigned_int_4 = unsigned_int_5 + unsigned_int_2;
			if(1)
			{
				char_3 = char_1 + char_4;
			}
			int_2 = int_9 * int_6;
			if(1)
			{
				float float_5 = 1;
				float_6 = float_2 * float_5;
			}
			if(1)
			{
				float_3 = float_4 + float_4;
			}
			long_2 = long_1 * long_2;
		}
		float_6 = float_6 + float_2;
		double_3 = double_2 * double_4;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		unsigned_int_1 = unsigned_int_7;
	}
	double_2 = double_4 * double_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_5;
	unsigned_int_6 = unsigned_int_8 * unsigned_int_7;
	char_4 = char_1 + char_1;
	int_4 = int_5 + int_7;
	unsigned_int_9 = unsigned_int_7 + unsigned_int_3;
	return double_5;
}
short v__dpal_long_nopath_generic( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5,double parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_5 = 1;
	char char_3 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_4 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	char_1 = char_1 + char_1;
	char_1 = char_1;
	short_2 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	double_2 = double_1 + double_1;
	short_1 = short_1 * short_2;
	double_1 = double_2 + double_2;
	long_1 = long_2;
	double_1 = double_1 + double_2;
	if(1)
	{
		long_4 = long_3 + long_1;
	}
	double_2 = double_1;
	if(1)
	{
		double_4 = double_2 + double_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 + int_2;
		if(1)
		{
			short_1 = short_2;
		}
		double_1 = double_3 * double_2;
	}
	unsigned_int_3 = unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_2 = int_1;
		if(1)
		{
			if(1)
			{
				int_1 = int_2 * int_1;
			}
			if(1)
			{
				char_2 = char_2;
				unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
				double_2 = double_4 * double_1;
			}
		}
		if(1)
		{
			if(1)
			{
				double_1 = double_4 + double_4;
			}
		}
		long_5 = long_3 + long_2;
	}
	if(1)
	{
		char_3 = char_1 * char_2;
		double_4 = v_fail_action(double_2,int_3);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		float_2 = float_1 * float_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_5 = 1;
		float float_3 = 1;
		double_4 = double_4 + double_5;
		float_4 = float_2 + float_3;
		if(1)
		{
			char controller_11[2];
			fgets(controller_11 ,2 ,stdin);
			if( strcmp( controller_11, "t") < 0)
			{
				float float_5 = 1;
				float_5 = float_4 * float_5;
			}
			if(1)
			{
				int_4 = int_1 + int_4;
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			}
		}
		if(1)
		{
			double double_6 = 1;
			double_6 = double_4 + double_4;
		}
		short_2 = short_1;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			short_2 = short_1 + short_3;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				if(1)
				{
					long_2 = long_1 + long_1;
				}
			}
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					int_4 = int_3 + int_2;
				}
			}
			double_1 = double_2 * double_4;
			if(1)
			{
				if(1)
				{
					long_1 = long_3 * long_5;
					short_1 = short_3 * short_4;
					unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
				}
				if(1)
				{
					long_6 = long_4;
				}
			}
			short_1 = short_4 * short_3;
		}
		if(1)
		{
			float_3 = float_3;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				short_4 = short_1 * short_1;
			}
			int_2 = int_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_7 = 1;
		unsigned_int_6 = unsigned_int_4 + unsigned_int_5;
		long_7 = long_6 + long_2;
	}
	if(1)
	{
		int int_5 = 1;
		int_4 = int_4 * int_5;
		short_1 = short_5;
		float_1 = float_4;
	}
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		short_4 = short_1 + short_5;
	}
	unsigned_int_5 = unsigned_int_5 + unsigned_int_2;
	char_3 = char_4 * char_2;
	unsigned_int_7 = unsigned_int_1 + unsigned_int_1;
	return short_3;
}
double v_fail_action( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		float_1 = float_1 + float_1;
	}
	short_2 = short_1 + short_1;
	return double_1;
}
void v_print_align( short parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5,long parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = char_1 + char_2;
	short_1 = short_1 * short_1;
	short_2 = short_2 * short_1;
	long_1 = long_2;
	double_2 = double_1 + double_1;
	short_2 = short_3 + short_2;
	int_2 = int_1 + int_1;
	int_3 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_1 + float_2;
}
double v__dpal_generic( unsigned int parameter_1,long parameter_2,double parameter_3,char parameter_4,char parameter_5,short parameter_6)
{
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char_1 = char_1;
	v_print_align(short_1,double_1,int_1,int_2,int_2,long_1);

	char_1 = char_2 + char_1;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		short_3 = short_2 + short_1;
	}
	double_2 = v_fail_action(double_1,int_3);

	short_2 = short_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_3;
}
unsigned int v_illegal_char( char parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if(remainder_check(controller_2,100,1))
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_3 = float_1 + float_2;
	}
	return unsigned_int_1;
}
void v_dpal( double parameter_1,double parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_5 = 1;
	short short_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_7 = 1;
	char char_5 = 1;
	long long_5 = 1;
	float_2 = float_1 * float_1;
	short_1 = v__dpal_long_nopath_generic(unsigned_int_1,int_1,int_2,int_1,double_1,double_1);

	double_2 = double_1;
	float_1 = float_1 * float_1;
	float_2 = float_1;
	double_3 = v__dpal_long_nopath_maxgap1_local(int_2,char_1,long_1,char_2,float_1,long_1);

	short_1 = short_1;
	float_2 = float_3 + float_1;
	long_2 = long_2 + long_2;
	short_1 = short_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char_3 = char_1 * char_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	double_4 = double_1 + double_2;
	short_1 = short_1 + short_2;
	double_1 = double_1;
	int_5 = int_3 + int_4;
	if(1)
	{
		int_2 = int_1 * int_4;
		float_4 = float_2 + float_1;
	}
	if(1)
	{
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long_4 = long_2 * long_3;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
	if(1)
	{
		int int_6 = 1;
		double_3 = v__dpal_long_nopath_maxgap1_global_end(unsigned_int_5,unsigned_int_2,short_2,float_5,char_3,short_3);

		char_3 = char_4 + char_4;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_6;
		int_5 = int_6 + int_7;
	}
	if(1)
	{
		float_4 = float_2 + float_3;
	}
	if(1)
	{
		if(1)
		{
			double_1 = v_fail_action(double_1,int_3);

			int_1 = int_4 + int_7;
		}
		if(1)
		{
			unsigned int unsigned_int_7 = 1;
			char_4 = v__dpal_long_nopath_maxgap1_local_end(char_1,short_3,char_5,long_5,short_1,int_2);

			unsigned_int_7 = unsigned_int_6 * unsigned_int_6;
		}
		if(1)
		{
			double_1 = v__dpal_generic(unsigned_int_2,long_1,double_1,char_1,char_1,short_3);

			int_3 = int_3 * int_5;
		}
		if(1)
		{
			long long_6 = 1;
			long_4 = long_5 + long_6;
		}
		if(1)
		{
			float_5 = float_5 + float_2;
		}
	}
	if(1)
	{
		unsigned_int_1 = v_illegal_char(char_2,int_3,char_1);

		char_1 = char_2 + char_3;
	}
	if(1)
	{
		float float_6 = 1;
		float_4 = float_4 + float_6;
	}
	float_4 = float_5 * float_1;
}
short v_align( float parameter_1,short parameter_2,char parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char_2 = char_1 * char_2;
	if(1)
	{
		if(1)
		{
		}
	}
	float_2 = float_1 + float_1;
	int_1 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		if(1)
		{
			char char_3 = 1;
			short_1 = short_1 * short_1;
			char_1 = char_3 + char_3;
		}
	}
	short_2 = short_1 * short_1;
	return short_1;
	v_dpal(double_1,double_1,long_1);

}
void v_oligo_compl( int parameter_1,short parameter_2,float parameter_3,int parameter_4,short parameter_5,short parameter_6)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	int_1 = int_1 * int_1;
	float_1 = v_op_set_high_self_end(float_1);

	int_2 = int_2 + int_3;
	if(1)
	{
		int int_4 = 1;
		char char_2 = 1;
		int_3 = int_4 + int_2;
		char_2 = char_1 + char_1;
		short_1 = v_align(float_1,short_2,char_1);

		double_2 = double_1 * double_1;
		if(1)
		{
		}
	}
	int_5 = int_5 + int_6;
	if(1)
	{
		long long_2 = 1;
		double double_3 = 1;
		short_2 = v_op_set_high_self_any(long_1);

		long_2 = long_1 + long_1;
		double_1 = double_3 * double_3;
		double_1 = double_2 * double_1;
		if(1)
		{
		}
	}
}
unsigned int v_op_set_high_end_stability( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_1;
}
void v_op_set_high_tm( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_1 = double_1 + double_2;
	short_3 = short_1 + short_2;
}
unsigned int v_op_set_low_tm()
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	char_1 = char_1 * char_1;
	return unsigned_int_1;
}
short v_op_set_high_poly_x( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double_3 = double_1 * double_2;
	int_3 = int_1 + int_2;
	return short_1;
}
float v_op_set_low_end_sequence_quality( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float_1 = float_2;
	short_1 = short_1 * short_2;
	return float_3;
}
int v_op_set_low_sequence_quality( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1;
	int_1 = int_1 + int_2;
	return int_1;
}
void v_sequence_quality_is_ok( short parameter_1,double parameter_2,float parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,float parameter_7,double parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_2 = double_1 + double_2;
	float_1 = float_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 + float_1;
	}
	double_1 = double_3 + double_1;
	char_1 = char_1 * char_2;
	if(1)
	{
		short_1 = short_2;
	}
	if(1)
	{
		char_4 = char_2 + char_3;
	}
	if(1)
	{
		long long_2 = 1;
		int int_2 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				long_2 = long_1 * long_2;
			}
			int_1 = v_op_set_low_sequence_quality(unsigned_int_1);

			long_3 = long_1 + long_1;
			if(1)
			{
				char_2 = char_5 + char_3;
			}
		}
		int_1 = int_1 * int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_4 = 1;
			long_2 = long_3 + long_4;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
		}
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				float float_4 = 1;
				float_2 = float_4;
			}
			char_5 = char_4 * char_1;
			if(1)
			{
				short short_3 = 1;
				short_2 = short_3 * short_2;
			}
		}
		char_5 = char_4;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
			}
		}
		double_2 = double_2;
	}
	if(1)
	{
		char_6 = char_4 * char_5;
	}
	int_4 = int_3 + int_3;
	char_1 = char_6 * char_5;
	if(1)
	{
		char char_7 = 1;
		long_3 = long_1 * long_3;
		char_7 = char_3;
		unsigned_int_4 = unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			double double_4 = 1;
			int int_5 = 1;
			double_3 = double_2 * double_4;
			int_5 = int_3 + int_5;
			float_2 = v_op_set_low_end_sequence_quality(short_1);

			double_4 = double_2 + double_2;
		}
	}
}
double v_op_set_too_many_gc_at_end( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_2;
	return double_1;
}
char v_op_set_no_gc_glamp( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int_3 = int_1 * int_2;
	float_2 = float_1 * float_1;
	return char_1;
}
char v_op_set_high_gc_content( int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double_1 = double_1 * double_1;
	short_1 = short_1 + short_2;
	return char_1;
}
unsigned int v_op_set_low_gc_content( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_2;
	double_2 = double_1 + double_1;
	return unsigned_int_1;
}
int v_op_set_not_in_any_ok_region( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	return int_1;
}
unsigned int v_op_set_overlaps_excluded_region( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_2;
}
int v_bf_get_overlaps_excl_region( char parameter_1)
{
	int int_1 = 1;
	return int_1;
}
short v_op_set_overlaps_target( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
long v_bf_get_overlaps_target( double parameter_1)
{
	long long_1 = 1;
	return long_1;
}
char v_bf_set_overlaps_excl_region( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	if(1)
	{
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_2 = char_1 + char_1;
		double_2 = double_1 * double_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	return char_1;
}
int v_bf_get_infinite_pos_penalty( long parameter_1)
{
	int int_1 = 1;
	return int_1;
}
void v_compute_position_penalty( int parameter_1,double parameter_2,long parameter_3,unsigned int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_1 + char_2;
	float_1 = v_bf_set_infinite_pos_penalty(short_1,int_1);

	short_1 = short_1 + short_1;
	int_2 = int_2 + int_2;
	char_2 = char_2 + char_1;
	int_3 = int_1 + int_2;
	char_3 = char_3 * char_3;
	long_1 = long_1 * long_1;
	short_2 = short_1 * short_1;
	short_3 = short_3 + short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			long long_2 = 1;
			long_2 = long_1;
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				double_3 = double_1 * double_2;
			}
			if(1)
			{
				double double_5 = 1;
				char_3 = char_3 * char_3;
				double_5 = double_1 + double_4;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			double double_6 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				double_6 = double_1 + double_1;
			}
			if(1)
			{
				double double_7 = 1;
				double double_8 = 1;
				double_6 = double_6 + double_7;
				double_8 = double_1 * double_4;
			}
		}
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2;
	}
}
float v_bf_set_overlaps_target( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	return float_1;
}
float v_bf_set_infinite_pos_penalty( short parameter_1,int parameter_2)
{
	float float_3 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	return float_3;
}
long v_oligo_overlaps_interval( int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_2 = long_1 + long_2;
	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return long_2;
}
char v_op_set_too_many_ns()
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_2;
	return char_1;
}
char v_gc_and_n_content( int parameter_1,int parameter_2,int parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_4 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		long_2 = long_1 + long_1;
		double_2 = double_1 * double_1;
		char_2 = char_1 + char_1;
		double_1 = double_1;
		char_1 = char_1;
		if(1)
		{
			double_1 = double_2;
			char_1 = char_2;
		}
		if(1)
		{
			float_1 = float_1 + float_1;
			int_1 = int_1 + int_2;
		}
		double_1 = double_1 + double_2;
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			long_2 = long_2 * long_1;
			int_3 = int_3 * int_1;
			short_1 = short_1 * short_1;
		}
		if(1)
		{
			float float_2 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float_1 = float_1;
			float_2 = float_1;
			short_2 = short_2 * short_2;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
			char_2 = char_2 * char_2;
		}
		if(1)
		{
			char char_3 = 1;
			int int_4 = 1;
			char_3 = char_3 + char_2;
			int_3 = int_4 * int_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			double double_3 = 1;
			double_1 = double_2 * double_3;
		}
		unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
	}
	return char_4;
}
double v_op_set_must_match_err( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float_2 = float_1 * float_1;
	long_2 = long_1 * long_2;
	return double_1;
}
long v_compare_nucleotides( short parameter_1,float parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_2 = long_1 * long_2;
	char_2 = char_1 * char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
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
		}
	}
	return long_2;
}
short v_primer_must_match( short parameter_1,float parameter_2,int parameter_3,char parameter_4,char parameter_5,char parameter_6)
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long_1 = v_compare_nucleotides(short_1,float_1);

	int_1 = int_1 * int_1;
	int_1 = int_1 * int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_2 = int_1 * int_2;
		int_1 = int_2 * int_1;
		int_4 = int_1 + int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_5 = 1;
			if(1)
			{
				float_2 = float_2 + float_1;
			}
			double_1 = double_2;
			int_5 = int_4;
		}
	}
	if(1)
	{
		float float_3 = 1;
		float float_4 = 1;
		float_4 = float_3 + float_2;
		short_2 = short_1 + short_2;
		char_1 = char_1 * char_1;
		int_2 = int_2 + int_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_3 = 1;
			double double_4 = 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
			double_2 = double_3 + double_1;
			double_2 = double_2 * double_4;
		}
	}
	return short_2;
}
unsigned int v_op_set_overlaps_masked_sequence( short parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	short_1 = short_1 + short_2;
	return unsigned_int_1;
}
unsigned int v_is_lowercase_masked( int parameter_1,char parameter_2,long parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_1 = v_op_set_overlaps_masked_sequence(short_1);

		double_1 = double_1 + double_2;
		float_2 = float_1 + float_1;
	}
	return unsigned_int_2;
}
int v_op_set_does_not_amplify_orf( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_2;
	int_2 = int_1 + int_2;
	return int_1;
}
void v_initialize_op( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
char v_calc_and_check_oligo_features( int parameter_1,float parameter_2,long parameter_3,double parameter_4,double parameter_5,float parameter_6,short parameter_7,long parameter_8,float parameter_9,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	double_1 = v_oligo_template_mispriming(char_1,double_1,short_1,double_2,unsigned_int_1,char_2,short_2,uni_para);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	char_3 = char_2 + char_2;
	double_1 = double_2 + double_2;
	int_1 = int_1 + int_2;
	return char_4;
}
float v_pick_primer_range( long parameter_1,int parameter_2,int parameter_3,char parameter_4,short parameter_5,long parameter_6,float parameter_7,long parameter_8,float parameter_9)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	float float_4 = 1;
	long long_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	short short_5 = 1;
	int_1 = int_1;
	int_2 = int_2 * int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_2 * int_2;
	double_2 = double_1 * double_1;
	v__pr_substr(float_1,int_1,int_1,char_1);

	double_1 = double_3 + double_2;
	int_3 = int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float_2 = float_2 * float_3;
		}
	}
	long_2 = long_1 * long_1;
	if(1)
	{
		float_1 = float_3 * float_1;
		long_3 = long_2 * long_2;
	}
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		short_2 = short_1 + short_1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float_4 = float_4 * float_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			char char_2 = 1;
			long long_5 = 1;
			unsigned_int_2 = v_add_oligo_to_oligo_array(char_1,float_4);

			unsigned_int_1 = v_free_primer_repeat_sim_score(int_1);

			int_1 = int_2 + int_1;
			if(1)
			{
				double double_4 = 1;
				if(1)
				{
					char_1 = v_calc_and_check_oligo_features(int_2,float_2,long_4,double_1,double_3,float_4,short_3,long_2,float_4,-1 );

					double_4 = double_1 * double_3;
				}
				if(1)
				{
					char_2 = char_1 + char_2;
				}
				short_3 = short_3 * short_2;
				double_4 = double_3;
			}
			if(1)
			{
				unsigned int unsigned_int_6 = 1;
				if(1)
				{
					long_5 = long_5 * long_5;
				}
				if(1)
				{
					short short_4 = 1;
					unsigned_int_5 = v_p_obj_fn(unsigned_int_1,float_2,int_3);

					short_4 = short_2 + short_2;
				}
				unsigned_int_6 = unsigned_int_3 * unsigned_int_2;
				char_2 = char_3 + char_1;
			}
			int_1 = int_3 + int_3;
			int_2 = int_4 * int_3;
			float_3 = float_4 * float_1;
			long_2 = long_2 + long_3;
			if(1)
			{
				double_3 = double_1 + double_3;
				long_3 = long_1 * long_1;
				if(1)
				{
					int_1 = int_2;
				}
				if(1)
				{
					long_3 = long_5 * long_3;
				}
			}
			if(1)
			{
				double_2 = double_2;
				if(1)
				{
					float float_5 = 1;
					float float_6 = 1;
					char_3 = v_any_5_prime_ol_extension_has_problem(short_5);

					float_6 = float_4 * float_5;
				}
			}
		}
	}
	short_5 = short_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_2;
}
long v_make_complete_primer_lists( unsigned int parameter_1,char parameter_2,char parameter_3,double parameter_4,unsigned int parameter_5,float parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	char char_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	char_2 = char_1 + char_1;
	long_2 = long_1 * long_1;
	double_2 = double_1 * double_2;
	float_1 = v_pick_primer_range(long_3,int_1,int_1,char_3,short_1,long_1,float_1,long_2,float_1);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int int_2 = 1;
		char char_4 = 1;
		int_2 = int_2 * int_1;
		float_2 = float_1 * float_1;
		short_1 = short_1;
		char_4 = char_1 * char_3;
	}
	if(1)
	{
		int int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		int_4 = int_3 + int_4;
		double_1 = double_1 * double_1;
		float_2 = float_1 * float_2;
	}
	if(1)
	{
		int int_5 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double_1 = double_1 + double_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		int_5 = int_4 * int_1;
		float_4 = float_2 * float_3;
	}
	return long_4;
}
void v_destroy_thal_arg_holder( int parameter_1)
{
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long_3 = long_1 + long_2;
		double_1 = double_1 * double_1;
		double_1 = double_2 + double_3;
		float_3 = float_1 + float_2;
		float_2 = float_4;
		char_1 = char_1 * char_2;
	}
}
void v_set_thal_default_args( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_5 = 1;
	char_1 = char_1 * char_1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_5 = char_3 * char_4;
	char_6 = char_5 + char_1;
	int_1 = int_1 + int_2;
	int_1 = int_2 + int_1;
	int_4 = int_3 + int_3;
	double_2 = double_1 * double_1;
	float_1 = float_1 + float_1;
	int_5 = int_5 * int_4;
}
long v_create_thal_arg_holder( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_8 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_9 = 1;
	double double_7 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	v_set_thal_default_args(char_1);

	unsigned_int_2 = unsigned_int_5 * unsigned_int_4;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_7;
	unsigned_int_6 = unsigned_int_2 * unsigned_int_3;
	double_3 = double_3 * double_4;
	int_3 = int_3 + int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_5;
	short_2 = short_1 + short_1;
	long_1 = long_1;
	float_2 = v_pr_safe_malloc(double_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_8 * unsigned_int_4;
	double_6 = double_5 + double_6;
	float_1 = float_1;
	unsigned_int_8 = unsigned_int_8 + unsigned_int_9;
	double_5 = double_7;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_8;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_8 + unsigned_int_2;
	double_5 = double_3;
	int_3 = int_2 * int_3;
	int_5 = int_4 + int_4;
	float_2 = float_3 * float_1;
	short_4 = short_3 + short_3;
	int_3 = int_1;
	return long_1;
}
long v_xlate_ambiguity_code( char parameter_1)
{
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
	return long_1;
}
int v_dpal_set_ambiguity_code_matrix( float parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int_1 = int_1 + int_2;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_4 = 1;
		double_3 = double_1 + double_2;
		if(1)
		{
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_3 = 1;
			int_4 = int_2 + int_3;
			if(1)
			{
			}
			long_1 = v_xlate_ambiguity_code(char_3);

			int_1 = int_1 + int_3;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					if(1)
					{
						double_2 = double_3 * double_1;
					}
				}
			}
			int_2 = int_1;
		}
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			long_3 = long_2 * long_2;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					unsigned int unsigned_int_3 = 1;
					unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
				}
			}
			int_2 = int_4 + int_2;
			long_1 = long_2 + long_4;
		}
	}
	return int_1;
}
void v_set_dpal_args( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					int_1 = int_3 * int_3;
				}
				if(1)
				{
					int int_4 = 1;
					int_5 = int_2 * int_4;
				}
				if(1)
				{
					float float_1 = 1;
					float_1 = float_1 + float_1;
				}
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			}
		}
	}
	char_2 = char_1 * char_2;
	int_3 = int_1 + int_5;
	short_1 = short_1 + short_2;
	short_2 = short_2 + short_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_1 = double_1 * double_1;
	char_1 = char_2 * char_3;
	short_1 = short_1 * short_3;
	double_1 = double_1 * double_2;
	int_1 = int_5;
}
void v_create_dpal_arg_holder()
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_2 = 1;
	float_1 = v_pr_safe_malloc(double_1);

	char_1 = char_1 * char_2;
	long_2 = long_1 + long_2;
	double_1 = double_1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	int_5 = int_3 * int_4;
	double_4 = double_2 + double_3;
	float_1 = float_1;
	int_5 = v_dpal_set_ambiguity_code_matrix(float_1);

	short_1 = short_1 * short_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	int_4 = int_6 + int_7;
	v_set_dpal_args(double_1);

	long_1 = long_1 * long_2;
	float_2 = float_2 + float_2;
}
void v_find_stop_codon( float parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
float v_set_retval_both_stop_codons( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_1 = 1;
	v_find_stop_codon(float_1,int_1,int_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	float_3 = float_2 + float_2;
	short_1 = short_1 * short_1;
	return float_1;
}
int v_test_must_match_parameters( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	return int_1;
}
int v_seq_lib_num_seq()
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
long v_strstr_nocase( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_3 = 1;
	int_1 = int_1 + int_2;
	char_1 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		double_3 = double_1 + double_2;
		char_2 = char_2 * char_2;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "[;") > 0)
		{
			double double_4 = 1;
			float float_2 = 1;
			float_1 = v_pr_safe_malloc(double_1);

			double_3 = double_3 * double_4;
			float_1 = float_2 * float_1;
		}
	}
	return long_1;
	int_1 = v_strcmp_nocase(int_2,float_3);

}
int v__pr_data_control( int parameter_1,float parameter_2,char parameter_3,float parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	short short_3 = 1;
	char char_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	char char_6 = 1;
	float float_3 = 1;
	double double_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	short short_6 = 1;
	short short_7 = 1;
	double double_7 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_6 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_9 = 1;
	long long_7 = 1;
	long long_8 = 1;
	short short_9 = 1;
	short short_10 = 1;
	double double_11 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	int_1 = v_test_must_match_parameters(char_1);

	int_2 = int_2;
	char_2 = char_2 * char_1;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		char_1 = char_3;
	}
	if(1)
	{
		double_1 = double_3 * double_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		long_3 = long_2 + long_1;
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		short_2 = short_2 + short_1;
	}
	if(1)
	{
		double_4 = v_pr_append_new_chunk_85(short_2,float_1);

		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		double_4 = double_3;
	}
	if(1)
	{
		short_2 = short_3 + short_2;
	}
	if(1)
	{
		long_3 = v_strstr_nocase(char_2,char_4);

		double_2 = double_1 * double_5;
		int_1 = int_1 + int_3;
	}
	if(1)
	{
		int_3 = int_3 + int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short_4 = short_2 * short_2;
	}
	if(1)
	{
		double_4 = double_1 + double_5;
	}
	if(1)
	{
		int_2 = int_1 * int_3;
	}
	if(1)
	{
		double_2 = double_1 + double_4;
	}
	if(1)
	{
		int_3 = int_1 * int_4;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char_5 = char_1;
		}
	}
	short_1 = short_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
		}
	}
	if(1)
	{
		v_p3_reverse_complement(char_4,char_1);

		double_3 = double_1 + double_3;
	}
	if(1)
	{
		short_1 = short_1 + short_3;
	}
	if(1)
	{
		long_2 = long_3 + long_4;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5;
	}
	if(1)
	{
		short_3 = short_5;
	}
	if(1)
	{
		int_1 = int_5 + int_4;
	}
	if(1)
	{
		char_2 = char_4 + char_6;
	}
	if(1)
	{
		short_3 = short_4 * short_2;
	}
	if(1)
	{
		double_4 = double_1 * double_5;
	}
	if(1)
	{
		float float_2 = 1;
		float_3 = float_1 * float_2;
		if(1)
		{
			double_4 = double_6 + double_5;
		}
		if(1)
		{
			float_1 = float_4 * float_5;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		short_4 = short_2 * short_3;
	}
	if(1)
	{
		if(1)
		{
			int_4 = int_4 + int_6;
			short_2 = short_3 * short_4;
		}
		if(1)
		{
			int_2 = int_5 + int_1;
		}
		if(1)
		{
			if(1)
			{
				long_3 = long_1 * long_2;
			}
		}
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_5 * float_4;
		}
		if(1)
		{
			char_3 = char_4 + char_6;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
		if(1)
		{
			int_8 = int_2 + int_7;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				int_9 = int_5 * int_4;
			}
		}
	}
	if(1)
	{
		float_3 = float_3;
	}
	if(1)
	{
		if(1)
		{
			short_6 = short_6 * short_6;
		}
		if(1)
		{
			double_4 = double_5 * double_4;
		}
	}
	if(1)
	{
		short_2 = short_3 + short_7;
	}
	if(1)
	{
		double_4 = double_7 * double_1;
	}
	if(1)
	{
		long_5 = v_dna_to_upper(char_6,int_6);

		short_2 = short_7 * short_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_6 * unsigned_int_5;
	}
	if(1)
	{
		long_5 = long_1 * long_1;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
	}
	if(1)
	{
		double_7 = double_1 + double_4;
	}
	if(1)
	{
		short short_8 = 1;
		short_1 = short_8 + short_7;
	}
	if(1)
	{
		double_6 = double_3 * double_1;
	}
	if(1)
	{
		long_4 = long_4;
	}
	if(1)
	{
		double_2 = double_6 * double_3;
	}
	if(1)
	{
		long_1 = v_pr_append_95();

		long_4 = long_6;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
		char_1 = char_3;
	}
	if(1)
	{
		double_1 = double_8;
		int_9 = int_7;
	}
	if(1)
	{
		int_4 = int_4 * int_2;
		char_3 = char_4 + char_1;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_5 = unsigned_int_6 + unsigned_int_2;
			unsigned_int_7 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
			double_6 = double_5;
		}
		if(1)
		{
			double_1 = double_6 * double_2;
		}
		if(1)
		{
			unsigned int unsigned_int_8 = 1;
			unsigned_int_8 = unsigned_int_1 + unsigned_int_5;
		}
		if(1)
		{
			float_3 = float_4;
		}
	}
	if(1)
	{
		if(1)
		{
			double_3 = double_9 + double_8;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_7;
		}
		if(1)
		{
			int_7 = int_1 + int_8;
		}
		if(1)
		{
			double double_10 = 1;
			double_4 = double_5 * double_10;
		}
		if(1)
		{
			double_1 = double_5 + double_5;
		}
		if(1)
		{
			short_4 = short_4;
		}
	}
	if(1)
	{
		if(1)
		{
			long_8 = long_7 * long_6;
			short_9 = short_4 + short_2;
		}
		if(1)
		{
			long_5 = long_1 + long_5;
		}
		if(1)
		{
			int_3 = int_3 + int_4;
		}
		if(1)
		{
			int_1 = int_1 * int_8;
			if(1)
			{
				double_5 = double_7 + double_7;
			}
			if(1)
			{
				double_2 = double_9 * double_6;
			}
		}
	}
	if(1)
	{
		long_5 = long_4 * long_4;
	}
	if(1)
	{
		double_8 = double_5 + double_9;
	}
	if(1)
	{
		char_5 = char_5 + char_1;
	}
	if(1)
	{
		long_7 = long_8 * long_1;
	}
	if(1)
	{
		short_2 = short_6 * short_2;
	}
	if(1)
	{
		short_4 = short_4 + short_10;
	}
	if(1)
	{
		int_3 = int_1 * int_8;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_6 * unsigned_int_2;
	}
	if(1)
	{
		double_11 = double_1 + double_6;
	}
	if(1)
	{
		double_9 = double_4 * double_1;
	}
	if(1)
	{
		int_7 = int_4;
	}
	if(1)
	{
		short_4 = short_7 + short_5;
	}
	if(1)
	{
		char_4 = char_6;
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_9;
	}
	if(1)
	{
		char_6 = char_2 * char_3;
	}
	if(1)
	{
		int_8 = v_seq_lib_num_seq();

		char_5 = char_5 + char_6;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_5 + unsigned_int_4;
	}
	if(1)
	{
		int_1 = int_6 + int_7;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
	}
	if(1)
	{
		double_6 = double_2 + double_11;
	}
	if(1)
	{
		short_9 = short_4 + short_2;
	}
	if(1)
	{
		char char_7 = 1;
		char_7 = char_1 * char_2;
	}
	if(1)
	{
		long_4 = long_5;
	}
	if(1)
	{
		int_3 = int_5 + int_6;
	}
	if(1)
	{
		short_10 = short_2 + short_9;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_7;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_2 + unsigned_int_3;
	}
	double_7 = double_8 * double_6;
	return int_6;
}
char v__optimize_ok_regions_list( unsigned int parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_4 = 1;
	char_2 = char_1 * char_1;
	double_2 = double_1 * double_1;
	int_2 = int_1 * int_2;
	double_2 = double_2 * double_1;
	double_3 = double_2 + double_3;
	if(1)
	{
	}
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_2 = long_1 * long_2;
		}
		if(1)
		{
			double_4 = double_1 + double_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		int int_4 = 1;
		double_2 = double_1 + double_4;
		float_3 = float_1 + float_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_3 = double_1;
		}
		if(1)
		{
			float_4 = float_3 + float_4;
			short_1 = short_1 * short_1;
		}
		if(1)
		{
			double_2 = double_3 + double_1;
			short_1 = short_2;
			if(1)
			{
				int_2 = int_1 + int_2;
			}
			if(1)
			{
				double double_5 = 1;
				double_5 = double_4 * double_3;
			}
			if(1)
			{
				int int_3 = 1;
				int_3 = int_1 + int_3;
			}
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
			}
		}
		if(1)
		{
			long_2 = long_1 * long_1;
			char_1 = char_3 + char_2;
			if(1)
			{
				double_1 = double_2 * double_3;
			}
			if(1)
			{
				float float_5 = 1;
				float_4 = float_1 + float_5;
			}
			if(1)
			{
				long_2 = long_2 + long_3;
			}
			if(1)
			{
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned_int_4 = unsigned_int_5 + unsigned_int_6;
			}
		}
		long_3 = long_1 * long_2;
		long_2 = long_2 * long_1;
		short_3 = short_2 * short_2;
		int_2 = int_4 + int_4;
	}
	int_5 = int_6;
	long_2 = long_4 + long_3;
	return char_3;
}
long v__check_and_adjust_overlap_pos( short parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,double parameter_7,unsigned int parameter_8)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	long long_4 = 1;
	char_1 = char_1;
	int_2 = int_1 + int_2;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int int_3 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int_4 = int_3 + int_4;
			short_2 = short_1 + short_2;
		}
		if(1)
		{
			long long_3 = 1;
			long_1 = long_2 * long_2;
			long_1 = long_3 * long_1;
		}
		float_1 = float_1 * float_1;
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "LV") > 0)
		{
			if(1)
			{
				double double_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_3 = 1;
				double_1 = v_pr_append_new_chunk_85(short_3,float_1);

				double_1 = double_2 + double_3;
				unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
				long_2 = long_4;
			}
		}
	}
	return long_4;
}
long v_pr_append_95()
{
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1;
	}
	return long_1;
	int_1 = v_pr_append_external(short_1,char_1);

}
long v__check_and_adjust_1_interval( char parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,int parameter_6,float parameter_7,int parameter_8,int parameter_9)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_3 = double_2 * double_3;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
			double_3 = v_pr_append_new_chunk_85(short_1,float_1);

			int_1 = int_2;
		}
		char_1 = char_1 + char_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		if(1)
		{
			long_1 = long_2;
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
			float_1 = float_1;
		}
		char_4 = char_2 * char_3;
		if(1)
		{
			if(1)
			{
				short short_2 = 1;
				short_2 = short_1 + short_1;
				double_3 = double_2 + double_3;
				unsigned_int_2 = unsigned_int_1;
			}
		}
		if(1)
		{
			double double_4 = 1;
			char char_5 = 1;
			long_2 = v_pr_append_95();

			double_4 = double_3;
			char_4 = char_5 * char_1;
			double_4 = double_3 + double_3;
		}
	}
	return long_1;
}
float v__check_and_adjust_intervals( double parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,double parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	if(1)
	{
	}
	float_2 = float_1 + float_2;
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
	return float_2;
	long_1 = v__check_and_adjust_1_interval(char_1,int_1,short_1,int_2,int_1,int_1,float_3,int_2,int_2);

}
long v_dna_to_upper( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	double_3 = double_1 + double_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "3") < 0)
	{
		char char_2 = 1;
		char char_3 = 1;
		double double_4 = 1;
		char_3 = char_1 + char_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		double_4 = double_2 + double_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	char_1 = char_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
void v__pr_substr( float parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	char_2 = char_1 * char_1;
}
short v_fake_a_sequence( unsigned int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_2;
	short_2 = short_1 * short_1;
	long_2 = long_3 * long_4;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		double_3 = double_1 * double_1;
	}
	float_1 = v_pr_safe_malloc(double_2);

	long_4 = long_2 * long_1;
	float_4 = float_2 * float_3;
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		double_3 = double_2 * double_2;
		double_3 = double_1 * double_4;
		char_2 = char_1;
	}
	if(1)
	{
		short_2 = short_2 * short_1;
	}
	if(1)
	{
	}
	short_2 = short_2 * short_3;
	float_2 = float_2 + float_3;
	double_3 = double_1 + double_4;
	int_1 = int_1;
	if(1)
	{
		int_2 = int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_4 = 1;
		short_1 = short_1 * short_4;
	}
	if(1)
	{
		double double_5 = 1;
		double_2 = double_5 + double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_3 = int_2;
	}
	if(1)
	{
		char char_3 = 1;
		int_3 = int_1 + int_2;
		char_1 = char_1 + char_3;
	}
	return short_3;
	v_p3_reverse_complement(char_1,char_2);

}
double v__adjust_seq_args( char parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	short short_3 = 1;
	double double_7 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_4 = 1;
	int int_3 = 1;
	short short_4 = 1;
	double double_8 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_4 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
			double_3 = double_4;
		}
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	if(1)
	{
		if(1)
		{
			double_4 = double_5 * double_5;
		}
		if(1)
		{
			int_2 = int_2 + int_1;
		}
	}
	long_1 = long_1 + long_1;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		}
		if(1)
		{
			double_1 = double_2 * double_3;
			unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			short_2 = short_1 * short_1;
		}
		double_2 = double_1 * double_6;
		unsigned_int_3 = unsigned_int_5;
	}
	if(1)
	{
		char_1 = v__optimize_ok_regions_list(unsigned_int_5,unsigned_int_3);

		short_3 = short_2 + short_1;
		long_1 = v_dna_to_upper(char_1,int_2);

		double_4 = double_6 + double_7;
	}
	char controller_13[3];
	fgets(controller_13 ,3 ,stdin);
	if( strcmp( controller_13, "9T") > 0)
	{
		float_1 = v_pr_safe_malloc(double_2);

		unsigned_int_5 = unsigned_int_3 * unsigned_int_6;
		double_3 = double_7 + double_2;
		double_1 = double_4 + double_2;
	}
	float_1 = float_2 * float_3;
	int_2 = int_2 * int_1;
	int_2 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	int_1 = int_1 + int_2;
	unsigned_int_4 = unsigned_int_7;
	float_2 = float_1 + float_3;
	float_1 = float_1;
	float_1 = float_3 * float_2;
	float_4 = v__check_and_adjust_intervals(double_3,int_2,int_3,unsigned_int_1,double_5);

	double_2 = double_5 + double_1;
	long_1 = v__check_and_adjust_overlap_pos(short_4,int_3,int_2,unsigned_int_4,int_1,int_1,double_8,unsigned_int_7);

	int_2 = int_3 * int_2;
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		double double_9 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_6;
		short_5 = v_fake_a_sequence(unsigned_int_8,char_1);

		float_1 = float_3 * float_3;
		v_p3_reverse_complement(char_1,char_1);

		short_5 = short_3 * short_1;
		int_3 = int_3;
		double_7 = double_6;
		v__pr_substr(float_2,int_1,int_4,char_2);

		int_3 = int_4;
		double_6 = double_5 + double_6;
		int_2 = int_5 * int_6;
		double_2 = double_8 + double_9;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		double_1 = v_pr_append_new_chunk_85(short_5,float_3);

		int_1 = int_1 + int_1;
	}
	return double_6;
}
short v_khash_t( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	int_1 = int_4 + int_4;
	unsigned_int_1 = unsigned_int_2;
	return short_1;
}
float v_free_pair_memory( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double_2 = double_1 + double_1;
	char_1 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		long_1 = long_1 + long_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int_2 = int_1 * int_1;
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					double_1 = double_2 * double_1;
					if(1)
					{
						short_1 = v_khash_t(double_3);

						unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
						unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
					}
				}
			}
			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		}
	}
	if(1)
	{
		double double_4 = 1;
		int_2 = int_2;
		double_3 = double_2 * double_4;
	}
	return float_1;
}
long v_pr_append_w_sep( short parameter_1,unsigned int parameter_2,long parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_2 = 1;
		double_1 = double_1 * double_2;
	}
	return long_1;
	int_1 = v_pr_append_w_sep_external(long_1,double_1,char_1);

}
double v_pr_append_new_chunk_85( short parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "O") == 0)
	{
	}
	short_3 = short_1 * short_2;
	return double_1;
	long_1 = v_pr_append_w_sep(short_4,unsigned_int_1,long_2);

}
void v_p3_print_args( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	int int_3 = 1;
	char char_8 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_7 = 1;
	long long_6 = 1;
	float float_6 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_12 = 1;
	short short_5 = 1;
	int int_11 = 1;
	float float_8 = 1;
	char char_10 = 1;
	double double_9 = 1;
	long long_7 = 1;
	float float_10 = 1;
	double double_11 = 1;
	int int_14 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		long long_5 = 1;
		float float_3 = 1;
		char char_5 = 1;
		char char_6 = 1;
		char char_7 = 1;
		char char_9 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_11 = 1;
		int int_5 = 1;
		double double_5 = 1;
		double double_7 = 1;
		int int_6 = 1;
		double double_8 = 1;
		int int_8 = 1;
		int int_9 = 1;
		int int_10 = 1;
		short short_6 = 1;
		int int_12 = 1;
		float float_9 = 1;
		long long_8 = 1;
		unsigned int unsigned_int_13 = 1;
		double double_10 = 1;
		int int_13 = 1;
		int int_15 = 1;
		char char_11 = 1;
		long long_9 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_5;
		short_2 = short_1 + short_1;
		unsigned_int_5 = unsigned_int_5;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
		int_2 = int_1 + int_2;
		unsigned_int_4 = unsigned_int_4 + unsigned_int_6;
		unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_8 = unsigned_int_7 + unsigned_int_1;
		double_1 = double_1 * double_1;
		unsigned_int_8 = unsigned_int_1 + unsigned_int_1;
		long_2 = long_1 + long_1;
		long_2 = long_1 + long_3;
		double_1 = double_1 + double_2;
		double_3 = double_2 + double_2;
		short_2 = short_1 * short_2;
		char_2 = char_1 + char_2;
		long_2 = long_2 + long_4;
		unsigned_int_7 = unsigned_int_7 + unsigned_int_5;
		double_2 = double_3 * double_1;
		float_2 = float_1 * float_1;
		double_1 = double_4 + double_4;
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_2 = unsigned_int_9 * unsigned_int_9;
		long_3 = long_2 * long_5;
		char_4 = char_3 * char_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_3 = float_1 + float_1;
		}
		char_5 = char_4;
		int_1 = int_2 * int_1;
		float_4 = float_2 * float_4;
		int_2 = int_2 * int_3;
		char_6 = char_1 + char_5;
		float_4 = float_1 * float_3;
		char_8 = char_2 * char_7;
		char_9 = char_4 * char_9;
		float_3 = float_4 * float_5;
		unsigned_int_10 = unsigned_int_4 * unsigned_int_2;
		double_3 = double_3;
		char_2 = char_3 * char_4;
		long_4 = long_2 + long_4;
		int_2 = int_3 + int_4;
		short_1 = short_1;
		long_1 = long_2;
		char_9 = char_2 * char_5;
		unsigned_int_1 = unsigned_int_9 * unsigned_int_11;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_11;
		int_1 = int_5 * int_4;
		double_1 = double_4 * double_2;
		float_5 = float_5 + float_2;
		double_7 = double_5 * double_6;
		double_4 = double_2 + double_6;
		char_8 = char_3 + char_9;
		double_5 = double_3;
		int_6 = int_6 + int_5;
		double_8 = double_4 * double_1;
		unsigned_int_9 = unsigned_int_8 + unsigned_int_6;
		int_6 = int_3 * int_2;
		double_3 = double_2;
		short_1 = short_1 + short_1;
		short_4 = short_3 * short_1;
		int_4 = int_1 + int_7;
		int_3 = int_7 * int_7;
		double_3 = double_4 * double_7;
		unsigned_int_9 = unsigned_int_7;
		int_8 = int_1 + int_4;
		long_5 = long_3 * long_6;
		unsigned_int_4 = unsigned_int_7 * unsigned_int_6;
		double_2 = double_7 + double_2;
		char_1 = char_5 * char_4;
		double_2 = double_7 * double_6;
		float_6 = float_5 * float_3;
		int_9 = int_1 * int_3;
		long_4 = long_2 + long_3;
		unsigned_int_8 = unsigned_int_1 * unsigned_int_2;
		float_6 = float_7 + float_2;
		int_6 = int_8 * int_8;
		int_9 = int_3;
		unsigned_int_8 = unsigned_int_2 + unsigned_int_12;
		char_2 = char_5 * char_8;
		short_1 = short_2 * short_5;
		int_9 = int_4 * int_7;
		long_1 = long_3 * long_1;
		int_11 = int_2 * int_10;
		short_6 = short_2 + short_3;
		int_1 = int_8 * int_8;
		double_8 = double_7 * double_7;
		double_1 = double_7 + double_1;
		double_3 = double_2 * double_8;
		unsigned_int_12 = unsigned_int_11 * unsigned_int_12;
		float_3 = float_2 * float_5;
		unsigned_int_1 = unsigned_int_9 + unsigned_int_3;
		float_8 = float_1 * float_4;
		short_2 = short_3 + short_3;
		double_2 = double_2 + double_2;
		int_3 = int_11 * int_7;
		long_4 = long_6 + long_6;
		short_6 = short_4 * short_4;
		int_5 = int_3 * int_5;
		int_3 = int_10;
		double_7 = double_4 + double_8;
		short_2 = short_1;
		int_12 = int_9 + int_7;
		char_10 = char_5 + char_7;
		double_2 = double_2 + double_8;
		char_2 = char_2 * char_9;
		int_7 = int_1;
		double_3 = double_3 * double_4;
		double_4 = double_2;
		int_8 = int_8 + int_1;
		double_3 = double_7 + double_8;
		int_5 = int_2;
		unsigned_int_4 = unsigned_int_12 + unsigned_int_6;
		double_9 = double_5 + double_6;
		long_7 = long_2 * long_6;
		unsigned_int_12 = unsigned_int_7;
		short_6 = short_3 * short_1;
		double_4 = double_1 + double_2;
		float_10 = float_9 + float_10;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_12;
		int_11 = int_1 * int_10;
		char_1 = char_8 + char_8;
		unsigned_int_4 = unsigned_int_11 + unsigned_int_2;
		long_6 = long_8 + long_3;
		int_7 = int_5 + int_12;
		short_6 = short_6;
		unsigned_int_9 = unsigned_int_4 + unsigned_int_13;
		float_8 = float_3 * float_6;
		int_12 = int_4;
		double_3 = double_6 + double_6;
		short_1 = short_2 * short_5;
		float_5 = float_1;
		double_10 = double_1 * double_10;
		unsigned_int_8 = unsigned_int_3 + unsigned_int_6;
		char_10 = char_9 * char_3;
		double_7 = double_7 + double_3;
		int_6 = int_13 * int_6;
		unsigned_int_5 = unsigned_int_10 * unsigned_int_3;
		int_6 = int_12 * int_6;
		double_10 = double_5 + double_3;
		long_6 = long_5 + long_6;
		double_11 = double_6 + double_7;
		int_15 = int_2 * int_14;
		int_4 = int_15 + int_8;
		double_5 = double_2;
		char_8 = char_11 + char_9;
		long_8 = long_3 * long_2;
		long_3 = long_4;
		short_2 = short_6;
		long_9 = long_5 + long_6;
		double_11 = double_2 * double_6;
		double_9 = double_3 + double_10;
		short_1 = short_5 + short_3;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_3;
	}
	if(1)
	{
		char char_12 = 1;
		int int_16 = 1;
		unsigned int unsigned_int_14 = 1;
		unsigned int unsigned_int_15 = 1;
		unsigned int unsigned_int_16 = 1;
		unsigned int unsigned_int_17 = 1;
		short short_7 = 1;
		short short_8 = 1;
		int int_17 = 1;
		float float_12 = 1;
		char char_13 = 1;
		int_7 = int_11 + int_11;
		long_6 = long_2 * long_2;
		float_2 = float_8 * float_10;
		if(1)
		{
			long_2 = long_4 * long_4;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float float_11 = 1;
				unsigned_int_8 = unsigned_int_5 + unsigned_int_7;
				short_3 = short_4 + short_5;
				float_4 = float_5 * float_11;
				unsigned_int_9 = unsigned_int_12;
			}
			char_10 = char_12 * char_2;
		}
		if(1)
		{
			long_7 = long_6 + long_3;
			unsigned_int_9 = unsigned_int_6 + unsigned_int_2;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int_7 = int_3 + int_3;
			}
			int_3 = int_14 + int_3;
		}
		short_3 = short_1 + short_2;
		int_1 = int_16 * int_2;
		unsigned_int_15 = unsigned_int_14 * unsigned_int_8;
		float_4 = float_7 + float_5;
		unsigned_int_7 = unsigned_int_1;
		unsigned_int_8 = unsigned_int_16 + unsigned_int_8;
		double_2 = double_3 + double_9;
		unsigned_int_7 = unsigned_int_17;
		short_7 = short_4 * short_5;
		char_8 = char_3 + char_12;
		unsigned_int_12 = unsigned_int_10;
		unsigned_int_1 = unsigned_int_12;
		char_4 = char_12 + char_4;
		unsigned_int_4 = unsigned_int_16 + unsigned_int_17;
		long_7 = long_3 * long_7;
		short_3 = short_8 + short_3;
		char_3 = char_4 * char_1;
		int_7 = int_17;
		float_4 = float_12 + float_6;
		unsigned_int_17 = unsigned_int_9 + unsigned_int_3;
		char_8 = char_13 * char_2;
		double_6 = double_11;
	}
}
short v_create_p3retval()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long_1 = long_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	double_1 = double_3 * double_2;
	double_3 = double_3 + double_4;
	if(1)
	{
		short short_1 = 1;
		char char_1 = 1;
		short_1 = short_1 + short_1;
		char_1 = char_1 + char_2;
	}
	long_2 = long_3;
	float_2 = float_1 + float_1;
	double_2 = double_5 * double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_2 * short_2;
	int_1 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1 * double_6;
	int_4 = int_2 * int_3;
	double_5 = double_2 * double_3;
	int_5 = int_3 + int_3;
	double_5 = double_3 + double_5;
	char_4 = char_2 + char_3;
	double_4 = double_2;
	int_5 = int_4;
	unsigned_int_1 = unsigned_int_1;
	char_6 = char_3 * char_5;
	double_6 = double_6 * double_5;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	return short_3;
	v_init_pr_append_str();

}
double v_choose_primers( unsigned int parameter_1,float parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	char_1 = char_1 * char_1;
	double_4 = double_2 + double_1;
	if(1)
	{
		short_1 = short_1 + short_1;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double_1 = double_3 + double_4;
	}
	if(1)
	{
		char_3 = char_2 + char_1;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_2;
	}
	char controller4vul_680[2];
	fgets(controller4vul_680 ,2 ,stdin);
	if( strcmp( controller4vul_680, "r") < 0)
	{
		char controller4vul_681[3];
		fgets(controller4vul_681 ,3 ,stdin);
		if( strcmp( controller4vul_681, "OH") < 0)
		{
			int int_2 = 1;
			short_2 = short_3;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			char controller4vul_682[2];
			fgets(controller4vul_682 ,2 ,stdin);
			if( strcmp( controller4vul_682, "a") < 0)
			{
				float_1 = v_add_primers_to_check(float_2,int_1,long_2,unsigned_int_1,short_2,long_2,uni_para);

				unsigned_int_3 = unsigned_int_3;
				double_4 = double_2 * double_2;
			}
			int_2 = int_1 * int_1;
		}
		short_2 = short_1 + short_1;
	}
	double_4 = double_1 + double_5;
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 * int_1;
		double_5 = double_2 * double_5;
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char_2 = char_3 + char_4;
	if(1)
	{
		short short_4 = 1;
		short_2 = short_2 + short_4;
	}
	if(1)
	{
		char_5 = char_4 * char_4;
	}
	if(1)
	{
		char_2 = char_4 + char_3;
		char_5 = char_5 + char_2;
	}
	if(1)
	{
		float_1 = float_3 + float_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
		float_3 = float_3 * float_1;
	}
	if(1)
	{
		short_3 = short_2;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
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
		unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_7 = unsigned_int_7 + unsigned_int_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_4;
	}
	if(1)
	{
		float float_4 = 1;
		float_2 = float_4;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_1;
	}
	return double_1;
}
void v_p3_set_gs_primer_file_flag( float parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_2;
}
void v_print_boulder_warning( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 * int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "W<") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
		int_1 = int_2;
	}
}
void v_format_warning( char parameter_1,float parameter_2,short parameter_3)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
void v_free_repeat_sim_score( long parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long_1 = long_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double double_1 = 1;
			double_2 = double_1 * double_2;
			double_1 = double_2 * double_3;
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			double double_4 = 1;
			double_2 = double_4 * double_3;
			long_1 = long_1 + long_1;
		}
	}
}
void v_destroy_p3retval( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	v_destroy_pr_append_str_data(unsigned_int_1);

	float_2 = float_1 + float_2;
	int_1 = int_1 + int_1;
	short_4 = short_1;
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	double_1 = double_3 + double_2;
	long_3 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	float_4 = float_1 + float_3;
	v_free_repeat_sim_score(long_3);

	int_3 = int_2 * int_2;
}
void v_pr_set_empty( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
}
void v_destroy_seq_args( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1 * short_1;
	int_2 = int_1 + int_2;
	char_1 = char_1 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_3 = short_2 * short_2;
	long_2 = long_1 * long_1;
	char_3 = char_1 + char_1;
	char_3 = char_2 * char_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
	int_3 = int_3 + int_4;
	float_1 = float_2;
}
void v_print_boulder_error( float parameter_1)
{
	char char_1 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_1 = double_1 * double_1;
		long_1 = long_1 + long_2;
	}
}
void v_format_error( double parameter_1,char parameter_2,int parameter_3)
{
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_1 + int_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "1") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 + double_1;
	}
}
int v_tableStartATH( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_3 = double_1 * double_2;
		}
	}
	double_4 = double_2 * double_3;
	return int_1;
}
short v_tableStartATS( double parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_1 + double_2;
		}
	}
	long_1 = long_1 * long_2;
	return short_1;
}
float v_getTetraloop( unsigned int parameter_1,short parameter_2,int parameter_3,double parameter_4)
{
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_str2int(char_1);

	short_1 = v_safe_realloc(long_1,short_2);

	short_3 = short_2 + short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		v_openParamFile(double_1,int_1);

		double_1 = v_readTLoop(char_1,char_1,double_1,int_1,float_1);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	return float_1;
	double_1 = v_safe_calloc(char_1,int_1,unsigned_int_2);

}
short v_safe_realloc(long parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		short_2 = short_1 + short_2;
	}
	return short_3;
}
short v_str2int( char parameter_1)
{
	short short_1 = 1;
	return short_1;
}
double v_readTLoop( char parameter_1,char parameter_2,double parameter_3,int parameter_4,float parameter_5)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short_1 = v_p3_read_line(int_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
}
double v_safe_calloc( char parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_1 = double_1 + double_2;
		float_2 = float_1 * float_1;
	}
	return double_1;
}
int v_getTriloop( long parameter_1,long parameter_2,int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = v_readTLoop(char_1,char_1,double_2,int_1,float_1);

	short_1 = v_str2int(char_1);

	double_1 = double_2;
	short_2 = v_safe_realloc(long_1,short_3);

	double_1 = double_3 + double_3;
	int_2 = int_1 + int_2;
	v_openParamFile(double_4,int_2);

	long_1 = long_2 + long_2;
	double_2 = double_2 + double_2;
	return int_1;
	double_2 = v_safe_calloc(char_1,int_2,unsigned_int_1);

}
char v_getTstack2( double parameter_1,double parameter_2,double parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char_1 = v_readDouble(int_1,double_1);

	int_3 = int_2 * int_2;
	int_3 = int_3 * int_4;
	v_openParamFile(double_1,int_2);

	int_2 = int_4 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					long long_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					if(1)
					{
						long_1 = long_1 + long_2;
						float_2 = float_1 * float_1;
					}
					if(1)
					{
						double double_2 = 1;
						double double_3 = 1;
						int int_5 = 1;
						double_3 = double_2 + double_3;
						int_3 = int_1 * int_5;
					}
					if(1)
					{
						unsigned int unsigned_int_2 = 1;
						unsigned int unsigned_int_3 = 1;
						unsigned int unsigned_int_4 = 1;
						unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
						int_3 = int_1 + int_4;
						if(1)
						{
							long_2 = long_1 + long_2;
							float_1 = float_1 + float_2;
						}
					}
				}
			}
		}
	}
	short_1 = short_1 + short_1;
	long_1 = long_1;
	return char_1;
}
long v_getTstack( double parameter_1,double parameter_2,char parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	v_openParamFile(double_1,int_1);

	int_1 = int_1 * int_1;
	short_3 = short_1 + short_2;
	int_3 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					long long_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					if(1)
					{
						unsigned int unsigned_int_2 = 1;
						unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
						unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
					}
					if(1)
					{
						long_1 = long_1;
						float_1 = float_2;
					}
					if(1)
					{
						int int_4 = 1;
						int int_5 = 1;
						float float_3 = 1;
						int_5 = int_4 + int_4;
						float_2 = float_1 + float_3;
						if(1)
						{
							long long_3 = 1;
							long_1 = long_2;
							long_1 = long_3 + long_3;
						}
					}
				}
			}
		}
	}
	char_1 = v_readDouble(int_3,double_2);

	double_4 = double_2 + double_3;
	long_4 = long_2 + long_2;
	return long_5;
}
void v_readLoop( long parameter_1,double parameter_2,double parameter_3,double parameter_4,float parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	short short_1 = 1;
	long_2 = long_1 * long_2;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_2 * long_2;
	int_2 = int_1 * int_3;
	double_2 = double_1 * double_1;
	int_4 = int_2 + int_3;
	double_3 = double_3 * double_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				long long_3 = 1;
				char char_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
				long_3 = long_1;
				char_3 = char_1 * char_2;
				if(1)
				{
					int_4 = int_3 + int_2;
					double_1 = double_1 * double_1;
				}
				if(1)
				{
					int int_6 = 1;
					int int_7 = 1;
					int int_8 = 1;
					int_4 = int_5 + int_6;
					short_1 = v_p3_read_line(int_3);

					int_7 = int_8;
				}
				short_1 = short_2 * short_3;
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_4 = 1;
				double double_5 = 1;
				char_2 = char_3;
				unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
				double_2 = double_4 + double_5;
			}
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_4 = 1;
			float_1 = float_2;
			double_7 = double_2 * double_6;
			char_4 = char_4 * char_4;
		}
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				int int_9 = 1;
				int_2 = int_9;
				char_2 = char_3;
				int_5 = int_2;
			}
		}
	}
}
double v_getLoop( double parameter_1,double parameter_2,double parameter_3,double parameter_4,double parameter_5,double parameter_6,long parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double_2 = double_1 * double_2;
	int_1 = int_1 + int_2;
	int_1 = int_3;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float_2 = float_1 * float_1;
		long_1 = long_1 + long_1;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	v_openParamFile(double_3,int_1);

	v_readLoop(long_1,double_3,double_4,double_4,float_2);

	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	return double_4;
}
double v_getDangle( double parameter_1,double parameter_2,double parameter_3,double parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	double_3 = double_1 * double_2;
	long_3 = long_1 * long_2;
	long_4 = long_2 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				float float_1 = 1;
				char char_1 = 1;
				if(1)
				{
					float_1 = float_1;
					char_2 = char_1 * char_2;
				}
				if(1)
				{
					char char_3 = 1;
					unsigned int unsigned_int_4 = 1;
					char_3 = char_1 * char_2;
					unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
				}
				if(1)
				{
					float_1 = float_1;
					int_2 = int_1 * int_1;
					if(1)
					{
						int int_4 = 1;
						int_3 = int_2 * int_3;
						int_2 = int_4;
					}
				}
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				int int_5 = 1;
				if(1)
				{
					double_1 = double_3;
					v_openParamFile(double_2,int_3);

					char_2 = v_readDouble(int_1,double_4);

					int_3 = int_3 + int_5;
				}
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
					int_2 = int_1 + int_5;
				}
				if(1)
				{
					long_2 = long_1 * long_4;
					long_2 = long_4 + long_2;
					if(1)
					{
						double_2 = double_1;
						double_2 = double_2 + double_2;
					}
				}
			}
		}
	}
	short_2 = short_1 + short_1;
	unsigned_int_6 = unsigned_int_2;
	return double_5;
}
double v_getStackint2( double parameter_1,double parameter_2,short parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double_1 = double_1;
	float_2 = float_1 * float_1;
	short_1 = short_1 + short_1;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					float float_3 = 1;
					if(1)
					{
						double_1 = double_1 * double_2;
						char_1 = v_readDouble(int_1,double_2);

						float_1 = float_3 + float_1;
					}
					if(1)
					{
						float float_4 = 1;
						int_1 = int_1;
						float_4 = float_2 + float_3;
						if(1)
						{
							v_openParamFile(double_3,int_1);

							double_2 = double_2 + double_2;
							char_1 = char_1;
						}
					}
				}
			}
		}
	}
	double_3 = double_2 * double_2;
	long_1 = long_2 * long_3;
	return double_3;
}
char v_readDouble( int parameter_1,double parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short_1 = v_p3_read_line(int_1);

	char_1 = char_1;
	return char_1;
}
void v_openParamFile( double parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = v_safe_malloc(int_1,long_1);

	int_1 = int_1 + int_2;
	int_3 = int_3 + int_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		short_1 = short_1 + short_1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
		if(1)
		{
			int int_4 = 1;
			int int_5 = 1;
			int_2 = int_2 + int_2;
			int_5 = int_2 * int_4;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double_1 = double_2;
			unsigned_int_1 = unsigned_int_1;
		}
	}
}
short v_getStack( double parameter_1,double parameter_2,float parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	int_1 = int_1;
	double_1 = double_2;
	char_1 = v_readDouble(int_2,double_3);

	int_4 = int_2 + int_3;
	char_2 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					if(1)
					{
						long long_1 = 1;
						long long_2 = 1;
						char char_3 = 1;
						long_2 = long_1 + long_1;
						char_3 = char_2 * char_1;
					}
					if(1)
					{
						long long_3 = 1;
						unsigned int unsigned_int_1 = 1;
						long_3 = long_3;
						v_openParamFile(double_1,int_3);

						unsigned_int_1 = unsigned_int_2;
						if(1)
						{
							unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
							double_2 = double_2;
						}
					}
				}
			}
		}
	}
	unsigned_int_3 = unsigned_int_2;
	char_1 = char_4;
	return short_1;
}
float v_safe_malloc( int parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_1 = int_1 + int_2;
		long_2 = long_1 * long_2;
	}
	return float_1;
}
int v_get_thermodynamic_values( short parameter_1,short parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	int_1 = v_getTriloop(long_1,long_2,int_2,unsigned_int_1);

	long_3 = long_2 * long_2;
	short_1 = v_tableStartATS(double_1,double_2);

	int_1 = int_2;
	char_1 = char_1 + char_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_2;
	long_2 = v_getTstack(double_3,double_1,char_2);

	float_1 = float_1 * float_1;
	float_2 = v_getTetraloop(unsigned_int_3,short_1,int_1,double_1);

	long_1 = long_3 * long_2;
	short_1 = v_getStack(double_4,double_1,float_3);

	double_2 = v_getStackint2(double_4,double_1,short_1);

	double_4 = double_5;
	int_2 = int_3;
	float_3 = v_safe_malloc(int_4,long_1);

	double_3 = v_getLoop(double_4,double_4,double_1,double_5,double_1,double_3,long_3);

	double_2 = double_2;
	short_1 = v_p3_read_line(int_2);

	int_4 = int_3 + int_1;
	double_6 = v_getDangle(double_3,double_3,double_7,double_4,char_3);

	unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	return int_3;
	char_4 = v_getTstack2(double_4,double_8,double_2);

	int_4 = v_tableStartATH(double_9,double_5);

}
void v_read_thermodynamic_parameters()
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = v_get_thermodynamic_values(short_1,short_1);

	unsigned_int_1 = unsigned_int_1;
}
void v_p3_reverse_complement( char parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int_2 = int_1 * int_2;
	int_1 = int_3 * int_1;
	float_1 = float_1 + float_2;
	char_3 = char_1 + char_2;
	float_1 = float_2 * float_3;
}
void v_reverse_complement_seq_lib()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "7") < 0)
	{
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		char_1 = char_1;
		short_2 = short_1 * short_1;
		int_3 = int_1 * int_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		short_3 = short_3 * short_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_1 = 1;
			short short_4 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			v_p3_reverse_complement(char_1,char_1);

			long_1 = long_1 * long_1;
			unsigned_int_2 = unsigned_int_3;
			double_2 = double_2 * double_2;
			v_p3sl_safe_realloc(unsigned_int_4);

			short_2 = short_4;
			double_3 = double_3 * double_1;
			short_1 = short_3 + short_3;
			unsigned_int_3 = v_p3sl_safe_malloc(double_1);

			short_2 = short_4 + short_2;
			double_2 = double_3 * double_4;
		}
	}
}
short v_p3sl_append( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int_1 = int_2;
	if(1)
	{
		int int_3 = 1;
		int_2 = v_pr_append_external(short_1,char_1);

		int_3 = int_2 * int_3;
	}
	return short_2;
}
long v_upcase_and_check_char( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	long long_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_1;
	double_1 = double_1 + double_1;
	float_2 = float_1 + float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_6 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_3 = 1;
		char char_4 = 1;
		float float_4 = 1;
		short short_3 = 1;
		double_1 = double_1 + double_1;
		double_1 = double_2 * double_1;
		long_1 = long_1 * long_1;
		int_1 = int_1;
		int_3 = int_2 + int_3;
		long_1 = long_1 + long_2;
		long_2 = long_3;
		int_4 = int_5;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		double_1 = double_1 * double_2;
		int_6 = int_1 + int_3;
		char_1 = char_2 + char_2;
		short_1 = short_1 + short_1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		int_4 = int_5 * int_5;
		int_5 = int_1;
		double_2 = double_1 + double_3;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		int_5 = int_3 + int_3;
		char_1 = char_3 + char_3;
		short_2 = short_2 + short_1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_1;
		float_2 = float_3 * float_1;
		char_2 = char_4;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		float_1 = float_4 + float_3;
		char_1 = char_3 + char_4;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
		short_2 = short_3 + short_2;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_1;
		if(1)
		{
			double_2 = double_1;
		}
		double_1 = double_1 * double_3;
	}
	double_1 = double_1 + double_2;
	return long_4;
}
double v_strtod()
{
	double double_1 = 1;
	return double_1;
}
short v_parse_seq_name( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short_3 = short_1 + short_2;
	int_1 = int_1 * int_1;
	int_2 = int_2 * int_3;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char_1 = char_1;
	}
	return short_1;
	double_1 = v_strtod();

}
void v_p3sl_safe_realloc(unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
int v_add_seq_to_seq_lib( double parameter_1,char parameter_2,char parameter_3,char parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	long long_3 = 1;
	char char_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_7 = 1;
	short short_4 = 1;
	float_1 = v_p3sl_append_new_chunk(float_2,long_1);

	double_1 = double_1 * double_1;
	v_p3sl_safe_realloc(unsigned_int_1);

	short_2 = short_1 * short_2;
	int_1 = int_1 + int_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		char char_3 = 1;
		short_2 = v_p3sl_append(short_3,char_1);

		char_2 = char_1 * char_1;
		char_3 = char_2 * char_3;
		float_1 = float_3 + float_2;
		unsigned_int_1 = unsigned_int_1;
		long_1 = long_1 + long_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	short_3 = short_2 + short_2;
	float_3 = float_3 * float_4;
	float_1 = float_2 + float_4;
	long_2 = long_3 + long_2;
	if(1)
	{
		char_4 = char_2;
	}
	long_3 = v_upcase_and_check_char(char_2);

	float_6 = float_5 + float_3;
	int_4 = int_2 * int_3;
	if(1)
	{
		float_6 = float_1 * float_3;
	}
	int_4 = int_2 + int_5;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "K5") > 0)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_6 = 1;
		int int_8 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
		unsigned_int_5 = unsigned_int_1;
		int_2 = int_1 * int_6;
		int_4 = int_7 * int_5;
		int_8 = int_6 + int_3;
		unsigned_int_5 = unsigned_int_6 * unsigned_int_3;
		short_4 = v_parse_seq_name(char_4);

		long_4 = long_2 * long_2;
		float_3 = float_4 * float_4;
	}
	return int_7;
	unsigned_int_2 = v_p3sl_safe_malloc(double_1);

}
float v_p3sl_append_new_chunk( float parameter_1,long parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long_2 = long_1 * long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "2)") == 0)
	{
		double double_1 = 1;
		int_1 = v_pr_append_new_chunk_external(char_1,long_1);

		double_1 = double_1;
	}
	return float_1;
}
unsigned int v_p3sl_safe_malloc( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 * char_2;
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
	return unsigned_int_1;
}
void v_create_empty_seq_lib()
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	long_2 = long_1 * long_1;
	if(1)
	{
	}
	float_1 = float_1 + float_2;
	float_2 = float_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = v_p3sl_safe_malloc(double_1);

	int_2 = int_1 * int_1;
	int_4 = int_3 * int_3;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_4;
	long_3 = long_2 * long_1;
}
double v_read_and_create_seq_lib( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	return double_1;
	v_create_empty_seq_lib();

	unsigned_int_1 = v_p3sl_safe_malloc(double_2);

	float_1 = v_p3sl_append_new_chunk(float_2,long_1);

	short_1 = v_p3_read_line(int_1);

	int_2 = v_add_seq_to_seq_lib(double_3,char_1,char_1,char_2);

	short_1 = v_p3sl_append(short_1,char_3);

	v_p3sl_safe_realloc(unsigned_int_1);

	v_reverse_complement_seq_lib();

}
void v_destroy_seq_lib( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_2 = long_1 + long_1;
			}
		}
		double_2 = double_1 * double_1;
	}
	if(1)
	{
		float float_3 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				float_1 = float_1;
			}
		}
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		float float_4 = 1;
		float_1 = float_2 + float_4;
	}
	int_3 = int_1 * int_2;
	int_4 = int_3 + int_1;
	int_1 = int_5 * int_1;
	int_1 = int_5 + int_6;
}
int v_strcmp_nocase( int parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_1 = char_1 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
short v__rb_safe_malloc( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float float_2 = 1;
		float_1 = v_out_of_memory_error();

		float_2 = float_1 * float_1;
	}
	return short_1;
}
void v_p3_set_gs_primer_internal_oligo_self_end( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
}
void v_p3_set_gs_primer_self_end( double parameter_1,double parameter_2)
{
	long long_1 = 1;
	long_1 = long_1 * long_1;
}
float v_parse_int( float parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
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
	int int_5 = 1;
	int int_6 = 1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	if(1)
	{
	}
	v_tag_syntax_error(unsigned_int_3,int_1,int_2);

	unsigned_int_2 = v_pr_append();

	float_2 = float_1 + float_2;
	if(1)
	{
	}
	int_1 = int_3 + int_4;
	double_1 = double_1 + double_1;
	double_1 = double_2 + double_1;
	int_2 = int_1 * int_4;
	char_1 = char_1 + char_1;
	int_2 = int_2 * int_4;
	short_1 = short_1 + short_2;
	int_6 = int_5 * int_5;
	return float_2;
}
unsigned int v_parse_product_size( float parameter_1,char parameter_2,int parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
	float_1 = v_pr_append_new_chunk(float_2,float_3);

	unsigned_int_1 = v_pr_append();

	double_1 = v_parse_int_pair(char_1,long_1,char_2,int_1,int_2,long_2);

}
void v_tag_syntax_error( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = v_pr_append();

	long_1 = long_1 + long_1;
	double_2 = double_1 * double_1;
	double_3 = double_1 * double_2;
	int_1 = int_1 * int_2;
	float_1 = v_pr_append_new_chunk(float_2,float_3);

}
double v_parse_int_pair( char parameter_1,long parameter_2,char parameter_3,int parameter_4,int parameter_5,long parameter_6)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	return double_1;
	v_tag_syntax_error(unsigned_int_1,int_1,int_2);

	unsigned_int_2 = v_pr_append();

}
int v_parse_intron_list( char parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_1 = 1;
		float_3 = float_1 * float_2;
		double_3 = double_1 + double_1;
		int_1 = int_1;
	}
	if(1)
	{
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		double_4 = double_3 * double_4;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char_3 = char_1 + char_2;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	}
	return int_2;
}
void v_p3_sa_add_to_quality_array( float parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
		double double_1 = 1;
		double_2 = double_1 + double_1;
		double_1 = double_1 + double_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		char_2 = char_1 * char_1;
		unsigned_int_1 = v_pr_safe_realloc(int_1);

		int_2 = int_1 + int_1;
	}
	float_1 = v_pr_safe_malloc(double_3);

	float_3 = float_2 + float_2;
	double_4 = double_3 * double_2;
}
void v_p3_set_sa_empty_quality( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_3 = int_1 * int_2;
}
double v_parse_seq_quality( char parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_3 + int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_3 + int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_4 * int_2;
	float_1 = float_2;
	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_3 * int_3;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_2 * int_3;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_1 = 1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			float float_3 = 1;
			float_2 = float_3 * float_3;
		}
		char_1 = char_1;
	}
	v_p3_sa_add_to_quality_array(float_4,int_2);

	int_6 = int_5 + int_1;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_3;
	return double_1;
	v_p3_set_sa_empty_quality(short_2);

}
long v__set_string( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 + double_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	return long_1;
}
int v_p3_set_sa_sequence( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	return int_1;
	long_1 = v__set_string(char_1,double_1);

}
int v_read_boulder_record( short parameter_1,float parameter_2,double parameter_3,int parameter_4,long parameter_5,char parameter_6,float parameter_7,float parameter_8,char parameter_9,char parameter_10)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_5 = 1;
	double double_3 = 1;
	short short_2 = 1;
	return int_1;
	short_1 = v_p3_read_line(int_1);

	float_1 = v_pr_append_new_chunk(float_2,float_1);

	unsigned_int_1 = v_pr_append();

	int_1 = v_p3_set_sa_sequence(float_3,int_2);

	double_1 = v_parse_seq_quality(char_1,short_1);

	int_3 = v_parse_intron_list(char_2,int_2,int_4);

	double_1 = v_parse_int_pair(char_1,long_1,char_3,int_3,int_4,long_2);

	v_tag_syntax_error(unsigned_int_1,int_1,int_1);

	unsigned_int_1 = v_parse_product_size(float_3,char_3,int_5,float_4);

	float_3 = v_parse_int(float_2,unsigned_int_2,int_3,int_4);

	v_p3_set_gs_primer_self_end(double_2,double_2);

	v_p3_set_gs_primer_internal_oligo_self_end(unsigned_int_3,double_2);

	short_1 = v__rb_safe_malloc(short_1);

	int_5 = v_strcmp_nocase(int_2,float_5);

	v_destroy_seq_lib(float_2);

	double_3 = v_read_and_create_seq_lib(float_5,short_2);

}
unsigned int v_pr_safe_realloc(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	return unsigned_int_3;
}
float v_pr_safe_malloc( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	return float_1;
}
short v_p3_read_line( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = v_pr_safe_realloc(int_1);

	double_2 = double_1 * double_2;
	double_1 = double_2 * double_3;
	float_1 = v_pr_safe_malloc(double_4);

	short_1 = short_2;
	double_2 = double_3;
	short_1 = short_3 + short_1;
	return short_2;
}
unsigned int v_pr_append()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return unsigned_int_1;
	int_1 = v_pr_append_external(short_1,char_1);

	float_1 = v_out_of_memory_error();

}
float v_out_of_memory_error()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 * double_2;
	return float_1;
}
int v_pr_append_w_sep_external( long parameter_1,double parameter_2,char parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	int_1 = v_pr_is_empty(unsigned_int_1);

	int_2 = v_pr_append_external(short_1,char_1);

}
int v_pr_append_new_chunk_external( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	if(1)
	{
	}
	return int_1;
	int_2 = v_pr_append_w_sep_external(long_1,double_1,char_1);

}
float v_pr_append_new_chunk( float parameter_1,float parameter_2)
{
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_3 = float_1 + float_2;
	}
	return float_4;
	int_1 = v_pr_append_new_chunk_external(char_1,long_1);

	float_3 = v_out_of_memory_error();

}
long v_pr_append2( unsigned int parameter_1,char parameter_2,float parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = v_pr_append_new_chunk(float_1,float_1);

	float_3 = float_1 + float_2;
	double_1 = double_2;
	return long_1;
	unsigned_int_1 = v_pr_append();

}
int v_read_p3_file( unsigned int parameter_1,char parameter_2,int parameter_3,int parameter_4,float parameter_5,unsigned int parameter_6,unsigned int parameter_7,char parameter_8,double parameter_9,short parameter_10)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	float float_2 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	long long_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = v_read_boulder_record(short_1,float_1,double_1,int_2,long_2,char_1,float_1,float_1,char_2,char_3);

	char_4 = char_2 * char_2;
	long_2 = long_1;
	double_3 = double_2 + double_2;
	int_2 = int_2 + int_2;
	long_2 = long_3 * long_3;
	double_4 = double_1;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_4 + double_5;
	}
	double_5 = double_5 * double_4;
	if(1)
	{
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	short_2 = v_p3_read_line(int_3);

	double_7 = double_1 + double_3;
	if(1)
	{
		int_2 = int_2;
	}
	if(1)
	{
		int_3 = int_3 + int_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	}
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "-q") < 0)
	{
		int int_4 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_5;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
		int_2 = int_4 + int_2;
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		char_3 = char_4 + char_4;
		int_6 = int_5 * int_5;
	}
	long_4 = v_pr_append2(unsigned_int_4,char_3,float_1);

	float_2 = float_2;
	if(1)
	{
		short short_3 = 1;
		short_1 = short_3;
	}
	if(1)
	{
		long long_5 = 1;
		long_5 = long_3 + long_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3;
	}
	unsigned_int_5 = v_pr_append();

	int_9 = int_7 * int_8;
	if(1)
	{
		long_4 = long_2 + long_6;
	}
	if(1)
	{
		long_3 = long_6 * long_3;
	}
	return int_3;
	float_3 = v_pr_append_new_chunk(float_4,float_3);

}
void v_create_seq_arg()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	short_2 = short_1 * short_2;
	int_1 = int_2 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_2 = long_1 + long_1;
	long_2 = long_1 * long_1;
	unsigned_int_3 = unsigned_int_4;
	long_2 = long_2 * long_2;
}
double v_p3_create_global_settings()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "<") > 0)
	{
	}
	double_2 = double_1 + double_2;
	return double_1;
}
void v_pr_set_default_global_args_1()
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_7 = 1;
	long long_6 = 1;
	long long_7 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_3 = 1;
	float float_3 = 1;
	long long_8 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_9 = 1;
	double double_6 = 1;
	int int_8 = 1;
	long long_10 = 1;
	float float_4 = 1;
	char char_6 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_9 = 1;
	long long_11 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_6 = 1;
	double double_10 = 1;
	char char_7 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_11 = 1;
	short short_6 = 1;
	long long_12 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_13 = 1;
	char char_9 = 1;
	int_1 = int_1 * int_1;
	float_2 = float_1 + float_1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_2;
	long_2 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	int_1 = int_1;
	double_1 = double_1 + double_1;
	int_1 = int_3 + int_4;
	short_1 = short_1 + short_2;
	int_4 = int_4 * int_3;
	double_1 = double_2 + double_3;
	int_4 = int_3 * int_2;
	short_2 = short_1 + short_2;
	long_3 = long_4;
	char_2 = char_1 * char_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	long_2 = long_4 * long_5;
	int_4 = int_5 * int_4;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
	int_5 = int_5 * int_3;
	int_1 = int_6 + int_4;
	int_1 = int_2 + int_1;
	int_1 = int_1 + int_3;
	long_4 = long_5 + long_1;
	double_3 = double_1 + double_2;
	double_4 = double_3 + double_4;
	double_2 = double_3 + double_5;
	int_1 = int_7 + int_5;
	int_5 = int_1 + int_2;
	char_2 = char_1;
	short_2 = short_1 + short_1;
	int_6 = int_5 * int_6;
	long_2 = long_2 * long_6;
	long_4 = long_7;
	unsigned_int_7 = unsigned_int_4 + unsigned_int_6;
	long_5 = long_2 + long_5;
	double_5 = double_2 + double_4;
	int_4 = int_2 * int_3;
	unsigned_int_7 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_7 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_6;
	short_1 = short_3 + short_2;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
	int_7 = int_7 * int_4;
	short_1 = short_3 + short_4;
	short_5 = short_2 * short_3;
	char_3 = char_2 * char_3;
	float_1 = float_1 * float_3;
	unsigned_int_7 = unsigned_int_2 * unsigned_int_6;
	long_8 = long_7 + long_7;
	double_3 = double_2 * double_4;
	unsigned_int_8 = unsigned_int_8 * unsigned_int_2;
	unsigned_int_9 = unsigned_int_3 + unsigned_int_5;
	unsigned_int_5 = unsigned_int_8;
	char_3 = char_4;
	short_2 = short_5 + short_3;
	char_1 = char_2 * char_5;
	double_4 = double_5 + double_3;
	long_8 = long_6 * long_4;
	float_2 = float_3 * float_2;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_7;
	long_3 = long_9 + long_2;
	double_4 = double_2 + double_6;
	double_4 = double_6 * double_4;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_1;
	int_7 = int_8;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_1;
	long_10 = long_10;
	float_4 = float_1;
	char_2 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_7 * unsigned_int_5;
	double_3 = double_5 + double_2;
	char_6 = char_4 * char_1;
	float_4 = float_1 * float_5;
	unsigned_int_10 = unsigned_int_3 + unsigned_int_7;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_5 = unsigned_int_7 + unsigned_int_6;
	long_6 = long_6 + long_8;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_6 + char_3;
	double_4 = double_2;
	int_2 = int_9 * int_5;
	long_11 = long_10 + long_5;
	int_6 = int_9 + int_6;
	double_1 = double_2 * double_6;
	long_8 = long_5;
	int_3 = int_8 + int_4;
	char_2 = char_2 * char_2;
	double_5 = double_7 + double_8;
	int_8 = int_8 + int_6;
	char_3 = char_5;
	unsigned_int_9 = unsigned_int_1 + unsigned_int_4;
	int_9 = int_6 + int_2;
	double_5 = double_1 + double_7;
	double_9 = double_4;
	float_4 = float_3 * float_3;
	unsigned_int_4 = unsigned_int_7 * unsigned_int_2;
	double_9 = double_5 + double_2;
	double_8 = double_1 + double_3;
	int_1 = int_5;
	float_3 = float_2 * float_6;
	double_10 = double_8 + double_7;
	char_3 = char_7 + char_8;
	float_4 = float_3 + float_5;
	int_3 = int_1 + int_5;
	float_2 = float_3;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_9;
	int_9 = int_4 + int_7;
	int_6 = int_1 + int_8;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
	double_3 = double_10 * double_5;
	int_5 = int_1;
	double_3 = double_5 + double_1;
	char_4 = char_5 + char_4;
	float_3 = float_5;
	double_7 = double_8;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_10;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_8;
	int_6 = int_1 + int_3;
	unsigned_int_7 = unsigned_int_11 + unsigned_int_2;
	char_6 = char_1 + char_2;
	short_6 = short_5 + short_6;
	long_11 = long_12;
	unsigned_int_8 = unsigned_int_8 + unsigned_int_12;
	short_5 = short_2;
	long_1 = long_1 + long_3;
	long_5 = long_2 * long_1;
	double_4 = double_2 + double_7;
	unsigned_int_5 = unsigned_int_13 * unsigned_int_7;
	double_7 = double_8 + double_7;
	char_3 = char_9 + char_1;
	float_5 = float_5;
	unsigned_int_2 = unsigned_int_8 * unsigned_int_7;
	double_6 = double_7 * double_5;
	double_5 = double_4 * double_10;
	double_2 = double_2 * double_9;
	int_7 = int_5 + int_9;
	double_1 = double_9 + double_5;
	char_1 = char_6 + char_3;
	long_1 = long_8 * long_1;
	unsigned_int_13 = unsigned_int_2 * unsigned_int_4;
	int_1 = int_3 * int_6;
	short_5 = short_2 + short_6;
	int_6 = int_5 + int_1;
}
void v_p3_create_global_settings_default_version_1()
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1 * long_1;
	if(1)
	{
	}
	v_pr_set_default_global_args_1();

	double_2 = double_1 * double_1;
}
void v_destroy_pr_append_str_data( unsigned int parameter_1)
{
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		int int_1 = 1;
		char_1 = char_1 * char_1;
		int_1 = int_1 + int_1;
	}
}
int v_pr_append_str_chars( float parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_pr_is_empty( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_3 = double_1 * double_2;
	return int_1;
}
int v_pr_append_external( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_2;
	char_2 = char_1 * char_1;
	int_3 = int_1 * int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Ap") < 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_3 = float_1 * float_2;
		char_3 = char_1 + char_3;
		if(1)
		{
		}
		long_2 = long_1 + long_1;
	}
	float_3 = float_4;
	short_2 = short_1 + short_2;
	if(1)
	{
		char char_4 = 1;
		char char_5 = 1;
		int int_4 = 1;
		char_5 = char_4 * char_2;
		int_4 = int_4 + int_2;
		if(1)
		{
		}
	}
	double_2 = double_1 * double_2;
	return int_3;
}
int v_primer3_copyright()
{
	int int_1 = 1;
	return int_1;
}
float v_print_usage()
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_1 = v_primer3_copyright();

	long_3 = long_1 * long_2;
	long_5 = long_1 + long_4;
	long_5 = long_2 * long_5;
	float_1 = float_1 * float_2;
	double_2 = double_1 + double_1;
	short_1 = short_1;
	return float_1;
}
void v_sig_handler( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_2 = short_1 * short_1;
	float_1 = v_print_usage();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
}
void v_p3_set_program_name( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_3 = int_4;
	}
}
unsigned int v_libprimer3_release()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void v_init_pr_append_str()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_3 = int_1 * int_2;
	int_5 = int_4 + int_1;
}
int main()
{
	int uni_para =387;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int_3 = int_1 + int_2;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1 + char_2;
	float_2 = float_1 * float_1;
	int_2 = int_2 + int_2;
	double_1 = double_1 + double_1;
	char controller4vul_679[2];
	fgets(controller4vul_679 ,2 ,stdin);
	if( strcmp( controller4vul_679, "v") > 0)
	{
		char char_3 = 1;
		double_1 = v_choose_primers(unsigned_int_3,float_3,uni_para);

		char_3 = char_1 * char_2;
	}
	if(1)
	{
		char_1 = char_2 + char_1;
		double_1 = double_1 * double_2;
	}
	int_2 = int_1 + int_1;
	double_3 = double_4;
	double_1 = double_5 + double_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		int int_4 = 1;
		double_4 = double_5 * double_2;
		short_2 = short_3 + short_2;
		long_1 = long_2;
		int_1 = int_3 * int_2;
		short_4 = short_5;
		int_1 = int_1;
		float_6 = float_4 * float_5;
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			int_4 = int_2 + int_4;
		}
		if(1)
		{
			short short_6 = 1;
			short_6 = short_1 + short_4;
		}
		int_4 = int_5 * int_3;
		if(1)
		{
			double double_6 = 1;
			double_5 = double_4 * double_6;
		}
		if(1)
		{
			double_3 = double_3 + double_4;
		}
	}
	return int_5;
}
